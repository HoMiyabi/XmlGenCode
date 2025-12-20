[ShowName("创建局部变量")]
public class CreateLocalVariableNode : StatementNode
{
    [ShowName("变量名")]
    public string name;
    
    [ShowName("值")]
    public ExpressionNode value;

    public override void ToCode(CodeBuilder cb)
    {
        cb.AppendWithIndent("let ");
        cb.Append(name);
        cb.Append(" = ");
        value.ToCode(cb);
        cb.Append(";");
    }
}