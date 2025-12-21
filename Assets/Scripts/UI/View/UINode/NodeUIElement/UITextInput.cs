using System;
using UnityEngine.UI;

public class UITextInput : NodeUIElement, IInput
{
    [NonSerialized] public TMPro.TMP_InputField  Input;
    [NonSerialized] public TMPro.TextMeshProUGUI Text;

    protected override void Start()
    {
        base.Start();
        Input.onValueChanged.AddListener(_ => LayoutRebuilder.MarkLayoutForRebuild(RectTransform));
    }
    
    public string ToAST()
    {
        return Input.text;
    }

    public override void SetText(string text)
    {
        Text.text = text;
    }
}