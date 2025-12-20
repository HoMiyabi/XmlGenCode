[ShowName("除")]
public class DivNodeUI : ExpressionNodeUI
{
    public UIExpressionInputPort A;
    public UIExpressionInputPort B;

    public override BaseNode ToAST()
    {
        return new DivNode
        {
            A = A.ToAST(),
            B = B.ToAST()
        };
    }
}