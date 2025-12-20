[ShowName("打印")]
public class PrintNode : StatementNode
{
    [ShowName("输入")]
    public ExpressionNode input;

    public override void ToCode(CodeBuilder cb)
    {
        cb.AppendWithIndent("console.log(");
        input.ToCode(cb);
        cb.Append(")");
        cb.Append(";");
    }
}