[ASTModel(typeof(ValueBlock))]
public class UIValueBlock : UIExpressionBlock
{
    public UIExpressionField value;

    public override BaseBlock ToAST()
    {
        return new ValueBlock
        {
            value = value.ValueInput.text ?? "0"
        };
    }

    public override void BuildFromAST(BaseBlock astNode)
    {
        base.BuildFromAST(astNode);

        if (astNode is ValueBlock valueBlock)
        {
            // 设置值
            if (value != null && value.ValueInput != null)
            {
                value.ValueInput.text = valueBlock.value ?? "0";
            }
        }
    }
}