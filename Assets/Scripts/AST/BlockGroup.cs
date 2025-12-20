using System;
using System.Linq;
using System.Xml;
using System.Xml.Schema;
using System.Xml.Serialization;
using UnityEngine;

public class BlockGroup : IXmlSerializable
{
    public Vector2 anchoredPosition;
    public BaseBlock first;

    public XmlSchema GetSchema()
    {
        return null;
    }

    public void ReadXml(XmlReader reader)
    {
        if (reader.IsEmptyElement)
        {
            reader.Read();
            return;
        }

        reader.ReadStartElement("BlockGroup");

        while (reader.NodeType != XmlNodeType.EndElement)
        {
            if (reader.NodeType == XmlNodeType.Element)
            {
                switch (reader.Name)
                {
                    case "anchoredPosition":
                        anchoredPosition = ReadVector2(reader);
                        break;
                    case "blocks":
                        first = ReadBlocks(reader);
                        break;
                    default:
                        reader.Skip();
                        break;
                }
            }
            else
            {
                reader.Read();
            }
        }

        reader.ReadEndElement();
    }

    private Vector2 ReadVector2(XmlReader reader)
    {
        float x = 0, y = 0;

        if (reader.MoveToAttribute("x"))
            float.TryParse(reader.Value, out x);

        if (reader.MoveToAttribute("y"))
            float.TryParse(reader.Value, out y);

        reader.ReadStartElement();
        return new Vector2(x, y);
    }

    private BaseBlock ReadBlocks(XmlReader reader)
    {
        reader.ReadStartElement("blocks");

        BaseBlock firstBlock = null;
        BaseBlock currentBlock = null;
        StatementBlock lastStatement = null;

        while (reader.NodeType != XmlNodeType.EndElement)
        {
            if (reader.NodeType == XmlNodeType.Element)
            {
                var block = ReadBlock(reader);

                if (block != null)
                {
                    if (firstBlock == null)
                    {
                        firstBlock = block;
                        currentBlock = block;
                    }
                    else
                    {
                        if (currentBlock is StatementBlock currentStatement && block is StatementBlock nextStatement)
                        {
                            currentStatement.next = nextStatement;
                            lastStatement = nextStatement;
                        }
                        currentBlock = block;
                    }
                }
            }
            else
            {
                reader.Read();
            }
        }

        reader.ReadEndElement();
        return firstBlock;
    }

    private BaseBlock ReadBlock(XmlReader reader)
    {
        var typeName = reader.Name;

        Type blockType = BlockGraph.XmlExtraTypes.FirstOrDefault(t => t.Name == typeName);
        if (blockType == null)
        {
            reader.Skip();
            return null;
        }

        var serializer = new XmlSerializer(blockType, BlockGraph.XmlExtraTypes);
        var block = serializer.Deserialize(reader) as BaseBlock;

        return block;
    }

    public void WriteXml(XmlWriter writer)
    {
        writer.WriteStartElement("BlockGroup");

        writer.WriteStartElement("anchoredPosition");
        writer.WriteAttributeString("x", anchoredPosition.x.ToString("F2"));
        writer.WriteAttributeString("y", anchoredPosition.y.ToString("F2"));
        writer.WriteEndElement();

        writer.WriteStartElement("blocks");

        if (first != null)
        {
            if (first is StatementBlock statement)
            {
                StatementBlock.WriteXmlStatement(writer, statement);
            }
            else if (first is StartBlock start)
            {
                WriteStartBlock(writer, start);
            }
            else
            {
                new XmlSerializer(first.GetType(), BlockGraph.XmlExtraTypes).Serialize(writer, first);
            }
        }

        writer.WriteEndElement();
        writer.WriteEndElement();
    }

    private void WriteStartBlock(XmlWriter writer, StartBlock start)
    {
        if (start == null) return;

        new XmlSerializer(start.GetType(), BlockGraph.XmlExtraTypes).Serialize(writer, start);

        if (start.next != null)
        {
            StatementBlock.WriteXmlStatement(writer, start.next);
        }
    }
}