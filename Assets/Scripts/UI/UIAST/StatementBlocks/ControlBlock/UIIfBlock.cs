[ASTModel(typeof(IfBlock))]
public class UIIfBlock : UIStatementBlock
{
    public UIExpressionField condition;
    public UISocket trueSocket;

    protected override void Start()
    {
        base.Start();
        trueSocket.canConnectBaseType = typeof(UIStatementBlock);
        ignoreSockets.Add(trueSocket);
    }

    public override BaseBlock ToAST()
    {
        return new IfBlock
        {
            next = (StatementBlock)nextSocket.GetAST(),
            condition = condition.GetAST(),
            trueBlock = (StatementBlock)trueSocket.GetAST()
        };
    }
}