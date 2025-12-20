using System.Xml;
using System.Xml.Serialization;

public abstract class StatementBlock : BaseBlock
{
    [XmlIgnore]
    public StatementBlock next;

    public static void GenCodeList(CodeBuilder cb, StatementBlock first)
    {
        var p = first;
        while (p != null)
        {
            p.ToCode(cb);
            cb.AppendLine();
            p = p.next;
        }
    }

    public static void WriteXmlStatement(XmlWriter writer, StatementBlock statement)
    {
        var p = statement;
        while (p != null)
        {
            new XmlSerializer(p.GetType(), BlockGraph.XmlExtraTypes).Serialize(writer, p);
            p = p.next;
        }
    }
}