public class NotBlock : ExpressionBlock
{
    public ExpressionBlock value;

    public override void ToCode(CodeBuilder cb)
    {
        cb.Append("(");
        cb.Append("!");
        value.ToCode(cb);
        cb.Append(")");
    }

    }