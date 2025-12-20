[ASTModel(typeof(AbsBlock))]
public class UIAbsBlock : UIExpressionBlock
{
    public UIExpressionField value;

    public override BaseBlock ToAST()
    {
        return new AbsBlock
        {
            value = value.GetAST()
        };
    }
}