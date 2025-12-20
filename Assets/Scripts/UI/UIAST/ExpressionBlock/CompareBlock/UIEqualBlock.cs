[ASTModel(typeof(EqualBlock))]
public class UIEqualBlock : UIExpressionBlock
{
    public UIExpressionField left;
    public UIExpressionField right;

    public override BaseBlock ToAST()
    {
        return new EqualBlock
        {
            left = left.GetAST(),
            right = right.GetAST()
        };
    }
}