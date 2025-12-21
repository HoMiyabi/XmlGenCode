using System.Runtime.Serialization;

[DataContract(IsReference = true)]
public abstract class StatementNode : BaseNode
{
    [DataMember]
    public StatementNode next;
    
    public static void ToCodeList(CodeBuilder cb, StatementNode first)
    {
        var node = first;
        while (node != null)
        {
            node.ToCode(cb);
            node = node.next;
        }
    }
}