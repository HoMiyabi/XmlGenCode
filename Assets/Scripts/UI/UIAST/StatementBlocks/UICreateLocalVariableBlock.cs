// [ASTModel(typeof(CreateLocalVariableNode))]
// public class UICreateLocalVariableBlock : UIStatementBlock
// {
//     public UIVariableField varName;
//     public UIExpressionField value;
//
//     public override BaseNode ToAST()
//     {
//         return new CreateLocalVariableNode
//         {
//             next = (StatementNode)nextSocket.GetAST(),
//             name = varName.Text,
//             value = value.GetAST()
//         };
//     }
// }