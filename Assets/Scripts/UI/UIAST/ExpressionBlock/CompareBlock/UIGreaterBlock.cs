[ASTModel(typeof(GreaterBlock))]
public class UIGreaterBlock : UIExpressionBlock
{
    public UIExpressionField left;
    public UIExpressionField right;

    public override BaseBlock ToAST()
    {
        return new GreaterBlock
        {
            left = left.GetAST(),
            right = right.GetAST()
        };
    }
}