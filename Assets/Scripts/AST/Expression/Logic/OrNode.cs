[ShowName("或")]
public class OrNode : ExpressionNode
{
    public ExpressionNode A;
    public ExpressionNode B;

    public override void ToCode(CodeBuilder cb)
    {
        cb.Append("(");
        A.ToCode(cb);
        cb.Append(" || ");
        B.ToCode(cb);
        cb.Append(")");
    }
}