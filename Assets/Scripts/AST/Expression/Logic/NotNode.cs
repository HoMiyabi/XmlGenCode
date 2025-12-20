public class NotNode : ExpressionNode
{
    public ExpressionNode input;

    public override void ToCode(CodeBuilder cb)
    {
        cb.Append("(");
        cb.Append("!");
        input.ToCode(cb);
        cb.Append(")");
    }
}