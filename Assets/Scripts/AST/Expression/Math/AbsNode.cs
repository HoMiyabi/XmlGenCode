public class AbsNode : ExpressionNode
{
    public ExpressionNode input;

    public override void ToCode(CodeBuilder cb)
    {
        cb.Append("Math.abs(");
        input.ToCode(cb);
        cb.Append(")");
    }
}