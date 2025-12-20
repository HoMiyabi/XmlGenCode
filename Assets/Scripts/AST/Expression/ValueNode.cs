public class ValueNode : ExpressionNode
{
    public string value;

    public override void ToCode(CodeBuilder cb)
    {
        cb.Append(value);
    }
}