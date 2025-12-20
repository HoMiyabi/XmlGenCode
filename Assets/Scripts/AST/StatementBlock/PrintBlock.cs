public class PrintBlock : StatementBlock
{
    public ExpressionBlock value;

    public override void ToCode(CodeBuilder cb)
    {
        cb.AppendWithIndent("console.log(");
        value.ToCode(cb);
        cb.Append(")");
        cb.Append(";");
    }

  }