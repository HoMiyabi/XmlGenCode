public class ValueBlock : ExpressionBlock
{
    public string value;

    public override void ToCode(CodeBuilder cb)
    {
        cb.Append(value);
    }
}