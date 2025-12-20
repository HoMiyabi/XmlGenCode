using System;

public class UIExpressionInputPort : UIBaseView
{
    [NonSerialized] public TMPro.TextMeshProUGUI PortText;
    
    public void Set(string text)
    {
        PortText.text = text;
    }
    
    public ExpressionNode ToAST()
    {
        throw new NotImplementedException();
    }
}