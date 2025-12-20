[ShowName("加")]
public class AddNode : ExpressionNode
{
    public ExpressionNode A;
    public ExpressionNode B;

    public override void ToCode(CodeBuilder cb)
    {
        cb.Append("(");
        A.ToCode(cb);
        cb.Append(" + ");
        B.ToCode(cb);
        cb.Append(")");
    }
}