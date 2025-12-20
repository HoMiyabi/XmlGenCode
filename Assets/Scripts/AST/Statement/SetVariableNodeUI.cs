[ShowName("设置变量")]
public class SetVariableNodeUI : StatementNodeUI
{
    [ShowName("变量名")]
    public UITextInputPort varName;
    
    [ShowName("值")]
    public UIExpressionInputPort value;

    public override BaseNode ToAST()
    {
        return new SetVariableNode
        {
            next = next.ToAST(),
            varName = varName.ToAST(),
            value = value.ToAST()
        };
    }
}