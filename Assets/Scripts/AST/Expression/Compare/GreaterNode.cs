[ShowName("大于")]
public class GreaterNode : ExpressionNode
{
    public ExpressionNode A;
    public ExpressionNode B;

    public override void ToCode(CodeBuilder cb)
    {
        cb.Append("(");
        A.ToCode(cb);
        cb.Append(" > ");
        B.ToCode(cb);
        cb.Append(")");
    }
}