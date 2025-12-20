using System;

public class UIExpressionOutputPort : UIBaseView
{
    [NonSerialized] public TMPro.TextMeshProUGUI PortText;
    
    public void Set(string text)
    {
        PortText.text = text;
    }
}