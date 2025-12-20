[ASTModel(typeof(AddBlock))]
public class UIAddBlock : UIExpressionBlock
{
    public UIExpressionField left;
    public UIExpressionField right;

    public override BaseBlock ToAST()
    {
        return new AddBlock
        {
            left = left.GetAST(),
            right = right.GetAST()
        };
    }

    public override void BuildFromAST(BaseBlock astNode)
    {
        base.BuildFromAST(astNode);

        if (astNode is AddBlock addBlock)
        {
            // 构建left表达式
            if (addBlock.left != null && left != null)
            {
                var childUI = UIBuilderRegistry.Instance.Build(addBlock.left, main, null, false);
                if (childUI != null && left.socket != null)
                {
                    left.socket.Connect(childUI);
                }
            }

            // 构建right表达式
            if (addBlock.right != null && right != null)
            {
                var childUI = UIBuilderRegistry.Instance.Build(addBlock.right, main, null, false);
                if (childUI != null && right.socket != null)
                {
                    right.socket.Connect(childUI);
                }
            }
        }
    }
}