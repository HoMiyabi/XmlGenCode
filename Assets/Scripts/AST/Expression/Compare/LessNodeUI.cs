[ShowName("小于")]
public class LessNodeUI : ExpressionNodeUI
{
    public UIExpressionInputPort A;
    public UIExpressionInputPort B;

    public override BaseNode ToAST()
    {
        return new LessNode
        {
            A = A.ToAST(),
            B = B.ToAST()
        };
    }
}