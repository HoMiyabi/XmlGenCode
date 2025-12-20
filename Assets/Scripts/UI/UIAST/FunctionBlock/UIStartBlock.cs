using UnityEngine;

[ASTModel(typeof(StartBlock))]
public class UIStartBlock : UIFunctionBlock
{
    [SerializeField] public UISocket nextSocket;

    protected virtual void Start()
    {
        nextSocket.canConnectBaseType = typeof(UIStatementBlock);
        ignoreSockets.Add(nextSocket);
    }

    public override BaseBlock ToAST()
    {
        return new StartBlock
        {
            next = (StatementBlock)nextSocket.GetAST()
        };
    }
}