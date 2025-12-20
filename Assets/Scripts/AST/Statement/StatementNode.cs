using System.Collections.Generic;

public abstract class StatementNode : BaseNode
{
    public static void ToCodeList(CodeBuilder cb, List<StatementNode> list)
    {
        foreach (var node in list)
        {
            node.ToCode(cb);
        }
    }
}