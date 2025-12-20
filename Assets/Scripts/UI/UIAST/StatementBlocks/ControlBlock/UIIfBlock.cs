// [ASTModel(typeof(IfNode))]
// public class UIIfBlock : UIStatementBlock
// {
//     public UIExpressionField condition;
//     public UISocket trueSocket;
//
//     protected override void Start()
//     {
//         base.Start();
//         trueSocket.canConnectBaseType = typeof(UIStatementBlock);
//         ignoreSockets.Add(trueSocket);
//     }
//
//     public override BaseNode ToAST()
//     {
//         return new IfNode
//         {
//             next = (StatementNode)nextSocket.GetAST(),
//             condition = condition.GetAST(),
//             TrueNode = (StatementNode)trueSocket.GetAST()
//         };
//     }
// }