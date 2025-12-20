[ASTModel(typeof(WhileBlock))]
public class UIWhileBlock : UIStatementBlock
{
    public UIExpressionField condition;
    public UISocket bodySocket;

    protected override void Start()
    {
        base.Start();
        bodySocket.canConnectBaseType = typeof(UIStatementBlock);
        ignoreSockets.Add(bodySocket);
    }

    public override BaseBlock ToAST()
    {
        return new WhileBlock
        {
            next = (StatementBlock)nextSocket.GetAST(),
            condition = condition.GetAST(),
            bodyBlock = (StatementBlock)bodySocket.GetAST()
        };
    }
}