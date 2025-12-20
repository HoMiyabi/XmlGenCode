[ASTModel(typeof(MulBlock))]
public class UIMulBlock : UIExpressionBlock
{
    public UIExpressionField left;
    public UIExpressionField right;

    public override BaseBlock ToAST()
    {
        return new MulBlock
        {
            left = left.GetAST(),
            right = right.GetAST()
        };
    }
}