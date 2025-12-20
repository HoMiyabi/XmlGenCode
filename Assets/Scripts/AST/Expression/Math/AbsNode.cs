[ShowName("绝对值")]
public class AbsNode : ExpressionNode
{
    [ShowName("输入")]
    public ExpressionNode input;

    public override void ToCode(CodeBuilder cb)
    {
        cb.Append("Math.abs(");
        input.ToCode(cb);
        cb.Append(")");
    }
}