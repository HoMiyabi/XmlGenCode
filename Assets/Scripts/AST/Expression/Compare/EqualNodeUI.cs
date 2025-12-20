[ShowName("等于")]
public class EqualNodeUI : ExpressionNodeUI
{
    public UIExpressionInputPort A;
    public UIExpressionInputPort B;

    public override BaseNode ToAST()
    {
        return new EqualNode
        {
            A = A.ToAST(),
            B = B.ToAST()
        };
    }
}