// [ASTModel(typeof(PrintNode))]
// public class UIPrintBlock : UIStatementBlock
// {
//     public UIExpressionField value;
//
//     public override BaseNode ToAST()
//     {
//         return new PrintNode
//         {
//             next = (StatementNode)nextSocket.GetAST(),
//             input = value.GetAST()
//         };
//     }
//
//     public override void BuildFromAST(BaseNode astNode)
//     {
//         base.BuildFromAST(astNode);
//
//         if (astNode is PrintNode printBlock)
//         {
//             // 构建value表达式
//             if (printBlock.input != null && value != null)
//             {
//                 var childUI = UIBuilderRegistry.Instance.Build(printBlock.input, main, null, false);
//                 if (childUI != null && value.socket != null)
//                 {
//                     value.socket.Connect(childUI);
//                 }
//             }
//         }
//     }
// }