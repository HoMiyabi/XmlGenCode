using System.Runtime.Serialization;

[DataContract(IsReference = true)]
public class NotNode : ExprNode
{
    [DataMember]
    public ExprNode input;

    public override void ToCode(CodeBuilder cb)
    {
        cb.Append("(");
        cb.Append("!");
        input.ToCode(cb);
        cb.Append(")");
    }
}