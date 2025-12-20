[ASTModel(typeof(SubBlock))]
public class UISubBlock : UIExpressionBlock
{
    public UIExpressionField left;
    public UIExpressionField right;

    public override BaseBlock ToAST()
    {
        return new SubBlock
        {
            left = left.GetAST(),
            right = right.GetAST()
        };
    }
}