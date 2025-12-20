[ASTModel(typeof(OrBlock))]
public class UIOrBlock : UIExpressionBlock
{
    public UIExpressionField left;
    public UIExpressionField right;

    public override BaseBlock ToAST()
    {
        return new OrBlock
        {
            left = left.GetAST(),
            right = right.GetAST()
        };
    }
}