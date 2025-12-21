using System.Runtime.Serialization;

[DataContract(IsReference = true)]
public class CreateLocalVariableNode : StatementNode
{
    [DataMember]
    public string varName;
    
    public ExprNode value;

    public override void ToCode(CodeBuilder cb)
    {
        cb.AppendWithIndent("let ");
        cb.Append(varName);
        cb.Append(" = ");
        value.ToCode(cb);
        cb.Append(";");
    }
}