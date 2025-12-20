public class VariableNode : ExpressionNode
{
    public string name;

    public override void ToCode(CodeBuilder cb)
    {
        cb.Append(name);
    }
}