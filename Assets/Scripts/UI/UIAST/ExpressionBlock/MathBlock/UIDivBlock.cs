[ASTModel(typeof(DivBlock))]
public class UIDivBlock : UIExpressionBlock
{
    public UIExpressionField left;
    public UIExpressionField right;

    public override BaseBlock ToAST()
    {
        return new DivBlock
        {
            left = left.GetAST(),
            right = right.GetAST()
        };
    }
}