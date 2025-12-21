using System;

public class UIExecInputPort : NodeUIPort, IInput
{
    [NonSerialized] public TMPro.TextMeshProUGUI PortText;

    public override void SetText(string text)
    {
        PortText.text = text;
    }
}