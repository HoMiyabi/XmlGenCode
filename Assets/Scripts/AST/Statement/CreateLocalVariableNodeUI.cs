[ShowName("创建局部变量")]
public class CreateLocalVariableNodeUI : StatementNodeUI
{
    [ShowName("变量名")]
    public UITextInputPort varName;
    
    [ShowName("值")]
    public UIExpressionInputPort value;

    public override BaseNode ToAST()
    {
        return new CreateLocalVariableNode
        {
            next = next.ToAST(),
            varName = varName.ToAST(),
            value = value.ToAST()
        };
    }
}