using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using Betalgo.Ranul.OpenAI;
using Betalgo.Ranul.OpenAI.Contracts.Enums;
using Betalgo.Ranul.OpenAI.Managers;
using Betalgo.Ranul.OpenAI.ObjectModels.RequestModels;
using Cysharp.Threading.Tasks;
using Newtonsoft.Json;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.Pool;

public class UIEditJSProcedurePanel : UIWindowPanel
{
    [NonSerialized] public TMPro.TMP_InputField ChatInput;
    [NonSerialized] public UnityEngine.UI.Button SendBtn;
    [NonSerialized] public UnityEngine.RectTransform ScrollContent;
    [NonSerialized] public UnityEngine.UI.ScrollRect Scroll;
    [NonSerialized] public TMPro.TMP_InputField CodeInput;

    [SerializeField] private GameObject AIChatItemPrefab;

    private AIModelConfig config;

    private OpenAIService service;
    private readonly List<ChatMessage> messages = new();
    private readonly List<MyAIMessage> myMessages = new();

    private UIDefineJSProcedureNode node;

    private ObjectPool<StringBuilder> stringBuilderPool;

    protected override void Awake()
    {
        base.Awake();

        // 初始化StringBuilder池
        stringBuilderPool = new ObjectPool<StringBuilder>(
            createFunc: () => new StringBuilder(1024),
            actionOnGet: (sb) => sb.Clear(),
            actionOnRelease: null,
            actionOnDestroy: null,
            collectionCheck: false,
            defaultCapacity: 1
        );

        var text = Resources.Load<TextAsset>("AIModelConfig");
        string json = text.text;
        config = JsonConvert.DeserializeObject<AIModelConfig>(json);

        service = new OpenAIService(new OpenAIOptions
        {
            ApiKey = config.ApiKey,
            BaseDomain = config.BaseDomain
        });

        AddModelLayerMessage(new MyAIMessage(ChatCompletionRole.System, string.Join('\n', config.SystemPrompt)));

        ChatInput.onValueChanged.AddListener(OnInputValueChange);
        OnInputValueChange(ChatInput.text);

        ChatInput.onSubmit.AddListener(OnInputSubmit);
        ChatInput.ActivateInputField(); // 默认激活聊天输入

        SendBtn.onClick.AddListener(() => Send().Forget());

        // 代码区
        CodeInput.onValueChanged.AddListener(OnCodeInputValueChange);
    }

    public void Set(UIDefineJSProcedureNode node)
    {
        this.node = node;
        CodeInput.SetTextWithoutNotify(node.Code);
    }

    private void OnCodeInputValueChange(string value)
    {
        node.Code = value;
    }

    private bool CanSend(string text)
    {
        return !string.IsNullOrWhiteSpace(text);
    }

    private void OnInputSubmit(string text)
    {
        if (CanSend(text))
        {
            Send().Forget();
        }
    }

    private void OnInputValueChange(string value)
    {
        // Debug.Log($"输入值改变: {value}，长度为：{value.Length}");
        LayoutRebuilder.MarkLayoutForRebuild(ChatInput.transform as RectTransform);

        SendBtn.interactable = CanSend(value);
    }

    private async UniTask<UIAIChatItem> AddUIMessage(MyAIMessage message)
    {
        var gos = await InstantiateAsync(AIChatItemPrefab, ScrollContent).ToUniTask();
        var go = gos.First();
        var item = go.GetComponent<UIAIChatItem>();
        item.Message = message;

        return item;
    }

    private void AddModelLayerMessage(MyAIMessage message)
    {
        myMessages.Add(message);
        messages.Add(message.GetChatMessage());
    }

    private void PopBackModelLayerMessage()
    {
        if (myMessages.Count > 0)
        {
            myMessages.RemoveAt(myMessages.Count - 1);
        }
        if (messages.Count > 0)
        {
            messages.RemoveAt(messages.Count - 1);
        }
    }

    private bool TryUpdateCode(string aiMessage)
    {
        if (string.IsNullOrEmpty(aiMessage))
            return false;

        // 尝试多种代码块标记
        string[] codeMarkers = {"```javascript", "```js", "```"};
        int startIndex = -1;
        string usedMarker = null;

        foreach (var marker in codeMarkers)
        {
            startIndex = aiMessage.IndexOf(marker, StringComparison.Ordinal);
            if (startIndex >= 0)
            {
                usedMarker = marker;
                break;
            }
        }

        if (startIndex < 0)
            return false;

        startIndex += usedMarker.Length;

        int endIndex = aiMessage.IndexOf("```", startIndex, StringComparison.Ordinal);
        if (endIndex < 0)
            return false;

        // 跳过换行符和空白字符
        while (startIndex < endIndex && char.IsWhiteSpace(aiMessage[startIndex]))
        {
            startIndex++;
        }

        while (startIndex < endIndex && char.IsWhiteSpace(aiMessage[endIndex - 1]))
        {
            endIndex--;
        }

        if (startIndex >= endIndex)
            return false;

        string code = aiMessage.Substring(startIndex, endIndex - startIndex);
        CodeInput.text = code;
        return true;
    }

    private async UniTask Send()
    {
        if (!CanSend(ChatInput.text))
        {
            Debug.LogWarning("不能发送消息");
            return;
        }

        string userInput = ChatInput.text;
        ChatInput.text = "";
        ChatInput.ActivateInputField();

        // 添加用户消息
        var userMessage = new MyAIMessage(ChatCompletionRole.User, userInput);

        // 添加用户消息到模型层和 UI 层
        AddModelLayerMessage(userMessage);
        await AddUIMessage(userMessage);

        // 添加代码消息到模型层
        var codeMessage = new MyAIMessage(ChatCompletionRole.User, node.Code);
        AddModelLayerMessage(codeMessage);

        // 从池中获取StringBuilder
        var currentSb = stringBuilderPool.Get();
        var aiMessage = new MyAIMessage(ChatCompletionRole.Assistant, currentSb);
        var item = await AddUIMessage(aiMessage);

        try
        {
            // 使用流式API发送请求（此时messages列表不包含空的AI回复）
            var result = service.ChatCompletion
                .CreateCompletionAsStream(new ChatCompletionCreateRequest
                {
                    Messages = messages,
                    Model = config.Model,
                });

            // 异步迭代处理每个流式响应
            await foreach (var response in result)
            {
                if (response.Successful && response.Choices.Count > 0)
                {
                    string delta = response.Choices.First().Delta.Content;
                    if (!string.IsNullOrEmpty(delta))
                    {
                        // 更新AI回复内容
                        aiMessage.ContentSb.Append(delta);
                        // 更新UI显示
                        item.UpdateUI();
                        LayoutRebuilder.ForceRebuildLayoutImmediate(ScrollContent);
                        Scroll.verticalNormalizedPosition = 0;
                    }
                }
            }

            // 移除代码消息
            PopBackModelLayerMessage();

            // Sb -> Str
            aiMessage.Flush();
            stringBuilderPool.Release(currentSb);

            // 所有响应接收完毕后，将完整的AI回复添加到消息列表
            AddModelLayerMessage(aiMessage);

            // 尝试更新代码
            TryUpdateCode(aiMessage.Content);
        }
        catch (Exception e)
        {
            Debug.LogError($"流式请求出错: {e.Message}");
            // 出错时回滚StringBuilder到池中
            aiMessage.Dispose();
            stringBuilderPool.Release(currentSb);
        }
    }
}