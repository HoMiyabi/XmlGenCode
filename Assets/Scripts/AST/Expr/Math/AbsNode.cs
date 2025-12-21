using System.Runtime.Serialization;

[DataContract(IsReference = true)]
public class AbsNode : ExprNode
{
    [DataMember]
    public ExprNode input;

    public override void ToCode(CodeBuilder cb)
    {
        cb.Append("Math.abs(");
        input.ToCode(cb);
        cb.Append(")");
    }
}