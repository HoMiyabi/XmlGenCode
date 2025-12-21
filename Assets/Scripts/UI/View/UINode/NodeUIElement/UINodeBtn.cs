using System;

public class UINodeBtn : NodeUIElement, INodeBtn
{
    [NonSerialized] public TMPro.TextMeshProUGUI Text;
    [NonSerialized] public UnityEngine.UI.Button Btn;
    
    public override void SetText(string text)
    {
        Text.text = text;
    }
}