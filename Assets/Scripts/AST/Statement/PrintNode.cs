using System.Runtime.Serialization;

[DataContract(IsReference = true)]
public class PrintNode : StatementNode
{
    [DataMember]
    public ExprNode input;

    public override void ToCode(CodeBuilder cb)
    {
        cb.AppendWithIndent("console.log(");
        input.ToCode(cb);
        cb.Append(")");
        cb.Append(";");
    }
}