[ShowName("与")]
public class AndNodeUI : ExpressionNodeUI
{
    public UIExpressionInputPort A;
    public UIExpressionInputPort B;

    public override BaseNode ToAST()
    {
        return new AndNode
        {
            A = A.ToAST(),
            B = B.ToAST()
        };
    }
}