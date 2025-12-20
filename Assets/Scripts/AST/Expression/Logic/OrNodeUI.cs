[ShowName("或")]
public class OrNodeUI : ExpressionNodeUI
{
    public UIExpressionInputPort A;
    public UIExpressionInputPort B;

    public override BaseNode ToAST()
    {
        return new OrNode
        {
            A = A.ToAST(),
            B = B.ToAST()
        };
    }
}