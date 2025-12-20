public class SetVariableBlock : StatementBlock
{
    public string name;
    public ExpressionBlock value;

    public override void ToCode(CodeBuilder cb)
    {
        cb.AppendWithIndent(name);
        cb.Append(" = ");
        value.ToCode(cb);
        cb.Append(";");
    }

  }