[ShowName("大于")]
public class GreaterNodeUI : ExpressionNodeUI
{
    public UIExpressionInputPort A;
    public UIExpressionInputPort B;

    public override BaseNode ToAST()
    {
        return new GreaterNode
        {
            A = A.ToAST(),
            B = B.ToAST()
        };
    }
}