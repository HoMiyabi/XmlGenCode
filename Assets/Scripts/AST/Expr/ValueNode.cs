using System.Runtime.Serialization;

[DataContract(IsReference = true)]
public class ValueNode : ExprNode
{
    [DataMember]
    public string value;

    public override void ToCode(CodeBuilder cb)
    {
        cb.Append(value);
    }
}