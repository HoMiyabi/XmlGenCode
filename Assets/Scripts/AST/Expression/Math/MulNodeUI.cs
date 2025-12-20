[ShowName("乘")]
public class MulNodeUI : ExpressionNodeUI
{
    public UIExpressionInputPort A;
    public UIExpressionInputPort B;

    public override BaseNode ToAST()
    {
        return new MulNode
        {
            A = A.ToAST(),
            B = B.ToAST()
        };
    }
}