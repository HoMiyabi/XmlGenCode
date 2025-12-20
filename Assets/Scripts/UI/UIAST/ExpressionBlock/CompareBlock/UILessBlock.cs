[ASTModel(typeof(LessBlock))]
public class UILessBlock : UIExpressionBlock
{
    public UIExpressionField left;
    public UIExpressionField right;

    public override BaseBlock ToAST()
    {
        return new LessBlock
        {
            left = left.GetAST(),
            right = right.GetAST()
        };
    }
}