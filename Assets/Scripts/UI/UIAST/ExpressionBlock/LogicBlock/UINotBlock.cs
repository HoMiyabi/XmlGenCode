[ASTModel(typeof(NotBlock))]
public class UINotBlock : UIExpressionBlock
{
    public UIExpressionField value;

    public override BaseBlock ToAST()
    {
        return new NotBlock
        {
            value = value.GetAST()
        };
    }
}