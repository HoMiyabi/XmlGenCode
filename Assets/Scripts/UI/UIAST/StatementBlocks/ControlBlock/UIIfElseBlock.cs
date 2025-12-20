// [ASTModel(typeof(BranchNode))]
// public class UIIfElseBlock : UIStatementBlock
// {
//     public UIExpressionField condition;
//     public UISocket trueSocket;
//     public UISocket falseSocket;
//
//     protected override void Start()
//     {
//         base.Start();
//         trueSocket.canConnectBaseType = typeof(UIStatementBlock);
//         ignoreSockets.Add(trueSocket);
//         falseSocket.canConnectBaseType = typeof(UIStatementBlock);
//         ignoreSockets.Add(falseSocket);
//         // socket.OnSetConnectTip += OnSetConnectTip;
//         // socket.OnClearConnectTip += OnClearConnectTip;
//         // socket.OnConnect += OnConnect;
//         // socket.OnDisconnect += OnDisconnect;
//     }
//
//     public override BaseNode ToAST()
//     {
//         return new BranchNode
//         {
//             next = (StatementNode)nextSocket.GetAST(),
//             condition = condition.GetAST(),
//             trueBody = (StatementNode)trueSocket.GetAST(),
//             falseBody = (StatementNode)falseSocket.GetAST()
//         };
//     }
// }