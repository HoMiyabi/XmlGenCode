// [ASTModel(typeof(SetVariableNode))]
// public class UISetVariableBlock : UIStatementBlock
// {
//     public UIVariableField varName;
//     public UIExpressionField value;
//
//     public override BaseNode ToAST()
//     {
//         return new SetVariableNode
//         {
//             next = (StatementNode)nextSocket.GetAST(),
//             name = varName.Text,
//             value = value.GetAST()
//         };
//     }
// }