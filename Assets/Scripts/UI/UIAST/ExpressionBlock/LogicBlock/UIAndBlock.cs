[ASTModel(typeof(AndBlock))]
public class UIAndBlock : UIExpressionBlock
{
    public UIExpressionField left;
    public UIExpressionField right;

    public override BaseBlock ToAST()
    {
        return new AndBlock
        {
            // left = left.GetAST(),
            // right = right.GetAST()
        };
    }
}