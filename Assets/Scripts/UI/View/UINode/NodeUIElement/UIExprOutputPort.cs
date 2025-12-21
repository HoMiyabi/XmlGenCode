using System;

public class UIExprOutputPort : NodeUIPort, IOutput
{
    [NonSerialized] public TMPro.TextMeshProUGUI PortText;
    
    public override void SetText(string text)
    {
        PortText.text = text;
    }
}