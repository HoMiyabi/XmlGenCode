public class CreateLocalVariableBlock : StatementBlock
{
    public string name;
    public ExpressionBlock value;

    public override void ToCode(CodeBuilder cb)
    {
        cb.AppendWithIndent("let ");
        cb.Append(name);
        cb.Append(" = ");
        value.ToCode(cb);
        cb.Append(";");
    }

    }