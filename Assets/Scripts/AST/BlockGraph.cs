using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using System.Text;
using System.Xml.Serialization;
using UnityEngine;

public class BlockGraph : IASTNode
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
        var list = typeof(BaseBlock).Assembly.GetTypes().Where(t => t.IsSubclassOf(typeof(BaseBlock))).ToList();
        return list.ToArray();
    }

    public void ToCode(CodeBuilder cb)
    {
        var blocks = blockGroups
            .Where(b => b.first is DefineJSProcedureBlock or StartBlock)
            .OrderBy(b =>
            {
                return b.first switch
                {
                    DefineJSProcedureBlock => 0,
                    StartBlock => 2,
                    _ => 1
                };
            }).ToList();
        
        foreach (var block in blocks)
        {
            block.first.ToCode(cb);
        }
    }
}