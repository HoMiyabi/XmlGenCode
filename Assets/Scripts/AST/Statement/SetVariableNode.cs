using System.Runtime.Serialization;

[DataContract(IsReference = true)]
public class SetVariableNode : StatementNode
{
    [DataMember]
    public string varName;
    
    [DataMember]
    public ExprNode value;

    public override void ToCode(CodeBuilder cb)
    {
        cb.AppendWithIndent(varName);
        cb.Append(" = ");
        value.ToCode(cb);
        cb.Append(";");
    }
}