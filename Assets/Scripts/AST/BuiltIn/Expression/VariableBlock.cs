public class VariableBlock : ExpressionBlock
{
    public string name;

    public override void ToCode(CodeBuilder cb)
    {
        cb.Append(name);
    }
}