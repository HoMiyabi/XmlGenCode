public abstract class StatementNode : BaseNode
{
    public StatementNode next;
    
    public static void ToCodeList(CodeBuilder cb, StatementNode first)
    {
        StatementNode node = first;
        while (node != null)
        {
            node.ToCode(cb);
            node = node.next;
        }
    }
}