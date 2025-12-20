using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using System.Text;
using System.Xml.Serialization;
using UnityEngine;

public class BlockGraph
{
    public Vector2 blockRootAnchoredPosition;
    public float blockRootLocalScale;
    public List<BlockGroup> blockGroups = new();

    public static Type[] XmlExtraTypes { get; } = GetXmlExtraTypes();

    public string WriteXml()
    {
        var serializer = new XmlSerializer(GetType(), XmlExtraTypes);
        using var ms = new MemoryStream();
        serializer.Serialize(ms, this);
        return Encoding.UTF8.GetString(ms.ToArray());
    }

    private static Type[] GetXmlExtraTypes()
    {
        var list = typeof(BaseNode).Assembly.GetTypes().Where(t => t.IsSubclassOf(typeof(BaseNode))).ToList();
        return list.ToArray();
    }

    public void ToCode(CodeBuilder cb)
    {
        var blocks = blockGroups
            .Where(b => b.first is DefineJsProcedureNode or StartNode)
            .OrderBy(b =>
            {
                return b.first switch
                {
                    DefineJsProcedureNode => 0,
                    StartNode => 2,
                    _ => 1
                };
            }).ToList();
        
        foreach (var block in blocks)
        {
            block.first.ToCode(cb);
        }
    }
}