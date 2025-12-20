[ShowName("分支")]
public class BranchNodeUI : StatementNodeUI
{
    [ShowName("条件")]
    public UIExpressionInputPort condition;
    
    [ShowName("真")]
    public UIExecOutputPort trueBody;
    
    [ShowName("假")]
    public UIExecOutputPort falseBody;

    public override BaseNode ToAST()
    {
        return new BranchNode
        {
            next = next.ToAST(),
            condition = condition.ToAST(),
            trueBody = trueBody.ToAST(),
            falseBody = falseBody.ToAST()
        };
    }
}