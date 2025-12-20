[ASTModel(typeof(CreateLocalVariableBlock))]
public class UICreateLocalVariableBlock : UIStatementBlock
{
    public UIVariableField varName;
    public UIExpressionField value;

    public override BaseBlock ToAST()
    {
        return new CreateLocalVariableBlock
        {
            next = (StatementBlock)nextSocket.GetAST(),
            name = varName.Text,
            value = value.GetAST()
        };
    }
}