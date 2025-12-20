[ShowName("等于")]
public class EqualNode : ExpressionNode
{
    public ExpressionNode A;
    public ExpressionNode B;

    public override void ToCode(CodeBuilder cb)
    {
        cb.Append("(");
        A.ToCode(cb);
        cb.Append(" === ");
        B.ToCode(cb);
        cb.Append(")");
    }
}