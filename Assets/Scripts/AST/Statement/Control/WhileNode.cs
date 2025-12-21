using System.Runtime.Serialization;

[DataContract(IsReference = true)]
public class WhileNode : StatementNode
{
    [DataMember]
    public ExprNode condition;
    
    [DataMember]
    public StatementNode loopBody;

    public override void ToCode(CodeBuilder cb)
    {
        cb.AppendWithIndent("while (");
        condition.ToCode(cb);
        cb.Append(") {\n");

        cb.PushIndent();
        ToCodeList(cb, loopBody);
        cb.PopIndent();

        cb.AppendWithIndent("}");
    }
}