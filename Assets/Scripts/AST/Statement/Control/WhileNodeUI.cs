[ShowName("循环")]
public class WhileNodeUI : StatementNodeUI
{
    [ShowName("条件")]
    public UIExpressionInputPort condition;
    
    [ShowName("循环体")]
    public UIExecOutputPort loopBody;

    public override BaseNode ToAST()
    {
        return new WhileNode
        {
            next = loopBody.ToAST(),
            condition = condition.ToAST(),
            loopBody = loopBody.ToAST()
        };
    }
}