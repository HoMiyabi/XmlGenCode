using System.Runtime.Serialization;

[DataContract(IsReference = true)]
public class GreaterNode : ExprNode
{
    [DataMember]
    public ExprNode A;
    [DataMember]
    public ExprNode B;

    public override void ToCode(CodeBuilder cb)
    {
        cb.Append("(");
        A.ToCode(cb);
        cb.Append(" > ");
        B.ToCode(cb);
        cb.Append(")");
    }
}