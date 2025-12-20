[ShowName("加")]
public class AddNodeUI : ExpressionNodeUI
{
    public UIExpressionInputPort A;
    public UIExpressionInputPort B;

    public override BaseNode ToAST()
    {
        return new AddNode
        {
            A = A.ToAST(),
            B = B.ToAST()
        };
    }
}