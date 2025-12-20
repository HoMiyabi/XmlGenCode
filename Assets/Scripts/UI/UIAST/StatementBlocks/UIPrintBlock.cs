[ASTModel(typeof(PrintBlock))]
public class UIPrintBlock : UIStatementBlock
{
    public UIExpressionField value;

    public override BaseBlock ToAST()
    {
        return new PrintBlock
        {
            next = (StatementBlock)nextSocket.GetAST(),
            value = value.GetAST()
        };
    }

    public override void BuildFromAST(BaseBlock astNode)
    {
        base.BuildFromAST(astNode);

        if (astNode is PrintBlock printBlock)
        {
            // 构建value表达式
            if (printBlock.value != null && value != null)
            {
                var childUI = UIBuilderRegistry.Instance.Build(printBlock.value, main, null, false);
                if (childUI != null && value.socket != null)
                {
                    value.socket.Connect(childUI);
                }
            }
        }
    }
}