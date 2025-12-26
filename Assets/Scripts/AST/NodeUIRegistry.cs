using System;
using System.Collections.Generic;
using System.Linq;
using System.Reflection;
using UnityEngine;

public static class NodeUIRegistry
{
    public static List<NodeInfo> FuncDeclNodeInfos { get; }
    public static List<NodeInfo> StatementNodeInfos { get; }
    public static List<NodeInfo> ExprNodeInfos { get; }

    public static Dictionary<Type, NodeInfo> TypeToNodeInfo { get; }

    static NodeUIRegistry()
    {
        var types = typeof(BaseNodeUI).Assembly.GetTypes();
        
        FuncDeclNodeInfos = types
            .Where(t => !t.IsAbstract && t.IsSubclassOf(typeof(FuncDeclNodeUI)))
            .Select(t => new NodeInfo
            {
                Type = t,
                TitleText = GetShowName(t),
                TitleBgColor = GetTitleBgColor(t)
            })
            .ToList();
        
        StatementNodeInfos = types
            .Where(t => !t.IsAbstract && t.IsSubclassOf(typeof(StatementNodeUI)))
            .Select(t => new NodeInfo
            {
                Type = t,
                TitleText = GetShowName(t),
                TitleBgColor = GetTitleBgColor(t)
            })
            .ToList();
        
        ExprNodeInfos = types
            .Where(t => !t.IsAbstract && t.IsSubclassOf(typeof(ExprNodeUI)))
            .Select(t => new NodeInfo
            {
                Type = t,
                TitleText = GetShowName(t),
                TitleBgColor = GetTitleBgColor(t)
            })
            .ToList();

        TypeToNodeInfo = new Dictionary<Type, NodeInfo>();
        foreach (var nodeInfo in FuncDeclNodeInfos
                     .Concat(StatementNodeInfos)
                     .Concat(ExprNodeInfos))
        {
            TypeToNodeInfo[nodeInfo.Type] = nodeInfo;
        }
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

    public static (Color leftColor, Color rightColor) GetTitleBgColor(MemberInfo element)
    {
        var attr = element.GetCustomAttribute<TitleBgColorAttribute>();
        if (attr != null)
        {
            return (attr.LeftColor, attr.RightColor);
        }
        return (Color.white, Color.white);
    }

    public static int GetOrder(MemberInfo element)
    {
        var attr = element.GetCustomAttribute<NodeUIElementOrder>();
        if (attr != null)
        {
            return attr.Order;
        }
        return 0;
    }
}