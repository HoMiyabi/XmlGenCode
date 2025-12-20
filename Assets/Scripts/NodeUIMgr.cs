using System.Collections.Generic;
using System.Linq;
using System.Reflection;

public static class NodeUIMgr
{
    public static List<NodeInfo> NodeUITypes { get; }

    static NodeUIMgr()
    {
        var types = typeof(BaseNodeUI).Assembly.GetTypes();

        NodeUITypes = types
            .Where(t => !t.IsAbstract && t.IsSubclassOf(typeof(BaseNodeUI)))
            .OrderBy(t =>
            {
                if (t.IsSubclassOf(typeof(FuncDeclNodeUI))) return 1;
                if (t.IsSubclassOf(typeof(StatementNodeUI))) return 2;
                if (t.IsSubclassOf(typeof(ExpressionNodeUI))) return 3;
                return 4;
            })
            .Select(t => new NodeInfo
            {
                Type = t,
                ShowName = GetShowName(t),
            })
            .ToList();
    }
    
    public static string GetShowName(MemberInfo element)
    {
        var attr = element.GetCustomAttribute<ShowNameAttribute>();
        if (attr != null)
        {
            return attr.Name;
        }
        return element.Name;
    }
}