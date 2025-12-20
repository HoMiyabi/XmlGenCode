[ShowName("设置变量")]
public class SetVariableNode : StatementNode
{
    [ShowName("变量名")]
    public string name;
    
    [ShowName("值")]
    public ExpressionNode value;

    public override void ToCode(CodeBuilder cb)
    {
        cb.AppendWithIndent(name);
        cb.Append(" = ");
        value.ToCode(cb);
        cb.Append(";");
    }
}