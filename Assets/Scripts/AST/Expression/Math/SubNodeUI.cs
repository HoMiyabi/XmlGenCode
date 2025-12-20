[ShowName("减")]
public class SubNodeUI : ExpressionNodeUI
{
    public UIExpressionInputPort A;
    public UIExpressionInputPort B;

    public override BaseNode ToAST()
    {
        return new SubNode
        {
            A = A.ToAST(),
            B = B.ToAST()
        };
    }
}