using System;
using Betalgo.Ranul.OpenAI.Contracts.Enums;
using UnityEngine;

public class UIAIChatItem : UIBaseView
{
    [NonSerialized] public TMPro.TextMeshProUGUI                ChatText;
    [NonSerialized] public UnityEngine.UI.HorizontalLayoutGroup LayoutGroup;
    
    private MyAIMessage message;

    public MyAIMessage Message
    {
        get => message;
        set
        {
            message = value;
            if (message.ContentStr != null)
            {
                ChatText.SetText(message.ContentStr);
            }
            else
            {
                ChatText.SetText(message.ContentSb);
            }
                
            if (message.Role == ChatCompletionRole.Assistant)
            {
                LayoutGroup.childAlignment = TextAnchor.UpperLeft;
                LayoutGroup.reverseArrangement = false;
            }
            else if (message.Role == ChatCompletionRole.User)
            {
                LayoutGroup.childAlignment = TextAnchor.UpperRight;
                LayoutGroup.reverseArrangement = true;
            }
        }
    }

    public void UpdateUI()
    {
        if (Message.ContentStr != null)
        {
            ChatText.SetText(Message.ContentStr);
        }
        else
        {
            ChatText.SetText(Message.ContentSb);
        }
    }
}