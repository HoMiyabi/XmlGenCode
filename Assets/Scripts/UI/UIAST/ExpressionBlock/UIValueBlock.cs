// [ASTModel(typeof(ValueNode))]
// public class UIValueBlock : UIExpressionBlock
// {
//     public UIExpressionField value;
//
//     public override BaseNode ToAST()
//     {
//         return new ValueNode
//         {
//             value = value.ValueInput.text ?? "0"
//         };
//     }
//
//     public override void BuildFromAST(BaseNode astNode)
//     {
//         base.BuildFromAST(astNode);
//
//         if (astNode is ValueNode valueBlock)
//         {
//             // 设置值
//             if (value != null && value.ValueInput != null)
//             {
//                 value.ValueInput.text = valueBlock.value ?? "0";
//             }
//         }
//     }
// }