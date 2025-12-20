[ASTModel(typeof(SetVariableBlock))]
public class UISetVariableBlock : UIStatementBlock
{
    public UIVariableField varName;
    public UIExpressionField value;

    public override BaseBlock ToAST()
    {
        return new SetVariableBlock
        {
            next = (StatementBlock)nextSocket.GetAST(),
            name = varName.Text,
            value = value.GetAST()
        };
    }
}