public class CreateLocalVariableNode : StatementNode
{
    public string varName;
    
    public ExpressionNode value;

    public override void ToCode(CodeBuilder cb)
    {
        cb.AppendWithIndent("let ");
        cb.Append(varName);
        cb.Append(" = ");
        value.ToCode(cb);
        cb.Append(";");
    }
}