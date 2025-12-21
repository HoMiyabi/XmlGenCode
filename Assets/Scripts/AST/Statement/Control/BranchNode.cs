using System.Runtime.Serialization;

[DataContract(IsReference = true)]
public class BranchNode : StatementNode
{
    [DataMember]
    public ExprNode condition;
    
    [DataMember]
    public StatementNode trueBody;
    
    [DataMember]
    public StatementNode falseBody;

    public override void ToCode(CodeBuilder cb)
    {
        cb.AppendWithIndent("if (");
        condition.ToCode(cb);
        cb.Append(") {\n");

        cb.PushIndent();
        ToCodeList(cb, trueBody);
        cb.PopIndent();

        cb.AppendWithIndent("} else {\n");

        cb.PushIndent();
        ToCodeList(cb, falseBody);
        cb.PopIndent();

        cb.AppendWithIndent("}");
    }
}