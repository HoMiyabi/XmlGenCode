[ShowName("非")]
public class NotNode : ExpressionNode
{
    [ShowName("输入")]
    public ExpressionNode input;

    public override void ToCode(CodeBuilder cb)
    {
        cb.Append("(");
        cb.Append("!");
        input.ToCode(cb);
        cb.Append(")");
    }
}