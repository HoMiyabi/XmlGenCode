// [ASTModel(typeof(WhileNode))]
// public class UIWhileBlock : UIStatementBlock
// {
//     public UIExpressionField condition;
//     public UISocket bodySocket;
//
//     protected override void Start()
//     {
//         base.Start();
//         bodySocket.canConnectBaseType = typeof(UIStatementBlock);
//         ignoreSockets.Add(bodySocket);
//     }
//
//     public override BaseNode ToAST()
//     {
//         return new WhileNode
//         {
//             next = (StatementNode)nextSocket.GetAST(),
//             condition = condition.GetAST(),
//             BodyNode = (StatementNode)bodySocket.GetAST()
//         };
//     }
// }