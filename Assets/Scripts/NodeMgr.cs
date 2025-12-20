using System.Collections.Generic;
using System.Reflection;

public static class NodeMgr
{
    public static List<NodeInfo> NodeTypes { get; }

    static NodeMgr()
    {
        NodeTypes = new List<NodeInfo>();
        foreach (var type in typeof(BaseNode).Assembly.GetTypes())
        {
            if (!type.IsAbstract && type.IsSubclassOf(typeof(BaseNode)))
            {
                NodeTypes.Add(new NodeInfo
                {
                    Type = type,
                    ShowName = GetShowName(type)
                });
            }
        }
    }
    
    private static string GetShowName(MemberInfo element)
    {
        var attr = element.GetCustomAttribute<ShowNameAttribute>();
        if (attr != null)
        {
            return attr.Name;
        }
        return element.Name;
    }
}