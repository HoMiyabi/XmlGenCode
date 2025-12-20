[ShowName("绝对值")]
public class AbsNodeUI : ExpressionNodeUI
{
    [ShowName("输入")]
    public UIExpressionInputPort input;

    public override BaseNode ToAST()
    {
        return new AbsNode
        {
            input = input.ToAST()
        };
    }
}