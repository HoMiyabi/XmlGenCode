using System;
using UnityEngine;

public class UIMainPanel : UIBasePanel
{
    [NonSerialized] public UnityEngine.RectTransform BlockRoot;
    [NonSerialized] public UICodeEditorPanel         CodeEditorPanel;
    [NonSerialized] public UIConsolePanel            ConsolePanel;
    [NonSerialized] public UnityEngine.RectTransform Top;
    [NonSerialized] public UnityEngine.RectTransform SelectContent;
    [NonSerialized] public UnityEngine.UI.Button     GenCodeBtn;
    [NonSerialized] public UnityEngine.UI.Button     RunBtn;
    [NonSerialized] public UnityEngine.UI.Button     GenCodeAndRunBtn;
    [NonSerialized] public UnityEngine.RectTransform SelectArea;
    [NonSerialized] public UIEdgeBar                 UpEdgeBar;
    [NonSerialized] public UIEdgeBar                 MidEdgeBar;
    [NonSerialized] public UnityEngine.RectTransform PanelRoot;
    [NonSerialized] public UITabButton               CodeEditorBtn;
    [NonSerialized] public UITabButton               ConsoleBtn;
    [NonSerialized] public UIBlockGraph              UIBlockGraph;
    [NonSerialized] public UnityEngine.UI.Button     SaveBtn;
    [NonSerialized] public UnityEngine.UI.Button     LoadBtn;

    // 内存中的 BlockGraph model 引用
    [NonSerialized] public BlockGraph               BlockGraphModel;

    public GameObject[] UIBlockPrefabs;
    private readonly PuerTSRunner runner = new();

    protected override void Start()
    {
        base.Start();

        GenCodeBtn.onClick.AddListener(GenCode);
        RunBtn.onClick.AddListener(Run);
        GenCodeAndRunBtn.onClick.AddListener(GenCodeAndRun);

        // 保存和加载按钮
        SaveBtn.onClick.AddListener(SaveToModel);
        LoadBtn.onClick.AddListener(LoadFromModel);

        // 控制台
        ConsoleBtn.OnValueChanged += (value) =>
        {
            if (value)
            {
                ConsolePanel.Open();
            }
            else
            {
                ConsolePanel.Close();
            }
        };

        // 点击控制台关闭同时取消激活按钮
        ConsolePanel.TitleBar.CloseBtn.onClick.AddListener(() =>
        {
            ConsoleBtn.SetValue(false, false);
        });

        // 代码编辑器
        CodeEditorBtn.OnValueChanged += (value) =>
        {
            UpdateConsoleSize(value);
            if (value)
            {
                CodeEditorPanel.Open();
            }
            else
            {
                CodeEditorPanel.Close();
            }
        };
        
        // 点击代码编辑器关闭同时取消激活按钮
        CodeEditorPanel.OnClose += () =>
        {
            UpdateConsoleSize(false);
            CodeEditorBtn.SetValue(false, false);
        };

        ConsolePanel.Close();
        CodeEditorPanel.Close();

        // 拖拽
        UpEdgeBar.UpdateDrag = delta => { ConsolePanel.RectTransform.sizeDelta += new Vector2(0, delta.y); };
        MidEdgeBar.UpdateDrag = delta =>
        {
            ConsolePanel.RectTransform.sizeDelta += new Vector2(delta.x, 0);
            CodeEditorPanel.RectTransform.sizeDelta += new Vector2(-delta.x, 0);
        };
        InitSelectContent();
    }

    private void UpdateConsoleSize(bool codeEditorOpen)
    {
        if (codeEditorOpen)
        {
            ConsolePanel.RectTransform.sizeDelta = new Vector2(
                PanelRoot.rect.width - CodeEditorPanel.RectTransform.sizeDelta.x,
                ConsolePanel.RectTransform.sizeDelta.y);
        }
        else
        {
            ConsolePanel.RectTransform.sizeDelta =
                new Vector2(PanelRoot.rect.width, ConsolePanel.RectTransform.sizeDelta.y);
        }
    }

    private void InitSelectContent()
    {
        foreach (var prefab in UIBlockPrefabs)
        {
            var go = Instantiate(prefab, SelectContent);
            go.name = prefab.name;
            var block = go.GetComponent<UIBaseBlock>();
            block.main = this;
            block.isSelectBlock = true;
        }
    }

    private void GenCode()
    {
        var block = UIBlockGraph.GetBlockGraph();
        var sb = new CodeBuilder();
        block.ToCode(sb);

        string code = sb.ToString();
        CodeEditorPanel.CodeInput.text = code;
    }

    private void Run()
    {
        PuerTSLogMgr.Instance.ClearLogs();

        ConsolePanel.Open();

        runner.Run(CodeEditorPanel.CodeInput.text);
    }

    private void GenCodeAndRun()
    {
        GenCode();
        Run();
    }

    /// <summary>
    /// 保存当前UI到内存model
    /// </summary>
    public void SaveToModel()
    {
        if (UIBlockGraph != null)
        {
            // 调用 UIBlockGraph 的 GetBlockGraph 方法
            BlockGraphModel = UIBlockGraph.GetBlockGraph();

            // 保存当前视图的变换信息
            if (BlockGraphModel != null)
            {
                BlockGraphModel.blockRootAnchoredPosition = UIBlockGraph.BlockRoot.anchoredPosition;
                BlockGraphModel.blockRootLocalScale = UIBlockGraph.BlockRoot.localScale.x;

                Debug.Log($"已保存到内存model，包含 {BlockGraphModel.blockGroups.Count} 个块组");
            }
        }
        else
        {
            Debug.LogError("UIBlockGraph 未设置");
        }
    }

    /// <summary>
    /// 从内存model重建UI
    /// </summary>
    public void LoadFromModel()
    {
        if (BlockGraphModel != null && UIBlockGraph != null)
        {
            // 调用 UIBlockGraph 的 SetBlockGraph 方法
            UIBlockGraph.SetBlockGraph(BlockGraphModel);
            Debug.Log($"已从内存model重建UI，包含 {BlockGraphModel.blockGroups.Count} 个块组");
        }
        else
        {
            Debug.LogError("BlockGraphModel 为空或 UIBlockGraph 未设置");
        }
    }
}