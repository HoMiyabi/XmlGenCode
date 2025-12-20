[ASTModel(typeof(VariableBlock))]
public class UIVariableBlock : UIExpressionBlock
{
    public UIVariableField varName;

    public override BaseBlock ToAST()
    {
        return new VariableBlock
        {
            name = varName.Text
        };
    }
}