public class AbsBlock : ExpressionBlock
{
    public ExpressionBlock value;

    public override void ToCode(CodeBuilder cb)
    {
        cb.Append("Math.abs(");
        value.ToCode(cb);
        cb.Append(")");
    }

    }