[ShowName("非")]
public class NotNodeUI : ExpressionNodeUI
{
    [ShowName("输入")]
    public UIExpressionInputPort input;

    public override BaseNode ToAST()
    {
        return new NotNode
        {
            input = input.ToAST()
        };
    }
}