public class MulBlock : ExpressionBlock
{
    public ExpressionBlock left;
    public ExpressionBlock right;

    public override void ToCode(CodeBuilder cb)
    {
        cb.Append("(");
        left.ToCode(cb);
        cb.Append(" * ");
        right.ToCode(cb);
        cb.Append(")");
    }

    }