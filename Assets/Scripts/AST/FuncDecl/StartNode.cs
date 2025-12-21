using System.Runtime.Serialization;

[DataContract(IsReference = true)]
public class StartNode : FuncDeclNode
{
    [DataMember]
    public StatementNode next;
    
    public override void ToCode(CodeBuilder cb)
    {
        StatementNode.ToCodeList(cb, next);
    }
}