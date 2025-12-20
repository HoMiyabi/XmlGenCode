// [ASTModel(typeof(AddNode))]
// public class UIAddBlock : UIExpressionBlock
// {
//     public UIExpressionField left;
//     public UIExpressionField right;
//
//     public override BaseNode ToAST()
//     {
//         return new AddNode
//         {
//             A = left.GetAST(),
//             B = right.GetAST()
//         };
//     }
//
//     public override void BuildFromAST(BaseNode astNode)
//     {
//         base.BuildFromAST(astNode);
//
//         if (astNode is AddNode addBlock)
//         {
//             // 构建left表达式
//             if (addBlock.A != null && left != null)
//             {
//                 var childUI = UIBuilderRegistry.Instance.Build(addBlock.A, main, null, false);
//                 if (childUI != null && left.socket != null)
//                 {
//                     left.socket.Connect(childUI);
//                 }
//             }
//
//             // 构建right表达式
//             if (addBlock.B != null && right != null)
//             {
//                 var childUI = UIBuilderRegistry.Instance.Build(addBlock.B, main, null, false);
//                 if (childUI != null && right.socket != null)
//                 {
//                     right.socket.Connect(childUI);
//                 }
//             }
//         }
//     }
// }