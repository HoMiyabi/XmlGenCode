using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using System.Runtime.Serialization;
using System.Text;
using System.Xml;
using UnityEngine;

public class NodeGraph
{
    [DataMember]
    public Vector2 position;
    [DataMember]
    public float scale;
    [DataMember]
    public List<BaseNode> nodes;

    public static Type[] XmlExtraTypes { get; } = GetXmlExtraTypes();

    private static Type[] GetXmlExtraTypes()
    {
        var list = typeof(BaseNode).Assembly.GetTypes().Where(t => t.IsSubclassOf(typeof(BaseNode))).ToList();
        return list.ToArray();
    }

    public string ToXml()
    {
        var settings = new XmlWriterSettings
        {
            Indent = true,
            IndentChars = "  ",
            Encoding = Encoding.UTF8,
        };
        using (var ms = new MemoryStream())
        {
            using (var writer = XmlWriter.Create(ms, settings))
            {
                var serializer = new DataContractSerializer(typeof(NodeGraph), new DataContractSerializerSettings
                {
                    KnownTypes = XmlExtraTypes,
                    PreserveObjectReferences = true
                });
                serializer.WriteObject(writer, this);
            }
            return Encoding.UTF8.GetString(ms.ToArray());
        }
    }

    public static NodeGraph FromXml(string xml)
    {
        if (string.IsNullOrEmpty(xml))
        {
            return new NodeGraph
            {
                position = Vector2.zero,
                scale = 1f,
                nodes = new List<BaseNode>()
            };
        }

        using (var ms = new MemoryStream(Encoding.UTF8.GetBytes(xml)))
        using (var reader = XmlReader.Create(ms))
        {
            var serializer = new DataContractSerializer(typeof(NodeGraph), new DataContractSerializerSettings
            {
                KnownTypes = XmlExtraTypes,
                PreserveObjectReferences = true
            });
            return (NodeGraph)serializer.ReadObject(reader);
        }
    }

    public void ToCode(CodeBuilder cb)
    {
        if (nodes == null) return;

        // 1. 处理函数定义 (DefineJsProcedureNode)
        foreach (var node in nodes)
        {
            if (node is DefineJsProcedureNode defineNode)
            {
                defineNode.ToCode(cb);
                cb.AppendLine();
            }
        }

        // 2. 处理入口节点 (StartNode)
        var startNodes = nodes.OfType<StartNode>().ToList();
        if (startNodes.Count > 0)
        {
            if (startNodes.Count > 1)
            {
                Debug.LogWarning($"Found {startNodes.Count} StartNodes in NodeGraph, only the first one will be processed.");
            }

            // 处理第一个 StartNode
            startNodes[0].ToCode(cb);
        }
    }
}
