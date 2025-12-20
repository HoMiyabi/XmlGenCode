[ShowName("打印")]
public class PrintNodeUI : StatementNodeUI
{
    [ShowName("输入")]
    public UIExpressionInputPort input;

    public override BaseNode ToAST()
    {
        return new PrintNode
        {
            next = next.ToAST(),
            input = input.ToAST()
        };
    }
}