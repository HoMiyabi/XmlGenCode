[ShowName("与")]
public class AndBlock : ExpressionBlock
{
    [ShowName("A")] public ExpressionIn left;

    [ShowName("B")] public ExpressionIn right;

    public override void ToCode(CodeBuilder cb)
    {
        cb.Append("(");
        left.ToCode(cb);
        cb.Append(" && ");
        right.ToCode(cb);
        cb.Append(")");
    }
}