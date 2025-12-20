public class SetVariableNode : StatementNode
{
    public string varName;
    
    public ExpressionNode value;

    public override void ToCode(CodeBuilder cb)
    {
        cb.AppendWithIndent(varName);
        cb.Append(" = ");
        value.ToCode(cb);
        cb.Append(";");
    }
}