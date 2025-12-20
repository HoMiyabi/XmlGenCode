[ASTModel(typeof(IfElseBlock))]
public class UIIfElseBlock : UIStatementBlock
{
    public UIExpressionField condition;
    public UISocket trueSocket;
    public UISocket falseSocket;

    protected override void Start()
    {
        base.Start();
        trueSocket.canConnectBaseType = typeof(UIStatementBlock);
        ignoreSockets.Add(trueSocket);
        falseSocket.canConnectBaseType = typeof(UIStatementBlock);
        ignoreSockets.Add(falseSocket);
        // socket.OnSetConnectTip += OnSetConnectTip;
        // socket.OnClearConnectTip += OnClearConnectTip;
        // socket.OnConnect += OnConnect;
        // socket.OnDisconnect += OnDisconnect;
    }

    public override BaseBlock ToAST()
    {
        return new IfElseBlock
        {
            next = (StatementBlock)nextSocket.GetAST(),
            condition = condition.GetAST(),
            trueBlock = (StatementBlock)trueSocket.GetAST(),
            falseBlock = (StatementBlock)falseSocket.GetAST()
        };
    }
}