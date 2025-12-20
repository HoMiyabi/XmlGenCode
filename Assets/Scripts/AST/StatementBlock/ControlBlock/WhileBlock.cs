using System.Xml;
using System.Xml.Schema;
using System.Xml.Serialization;

public class WhileBlock : StatementBlock, IXmlSerializable
{
    public ExpressionBlock condition;
    public StatementBlock bodyBlock;

    public override void ToCode(CodeBuilder cb)
    {
        cb.AppendWithIndent("while (");
        condition.ToCode(cb);
        cb.Append(") {\n");

        cb.PushIndent();
        GenCodeList(cb, bodyBlock);
        cb.PopIndent();

        cb.AppendWithIndent("}");
    }

    
    public XmlSchema GetSchema()
    {
        return null;
    }

    public void ReadXml(XmlReader reader)
    {

    }

    public void WriteXml(XmlWriter writer)
    {
        new XmlSerializer(typeof(ExpressionBlock),
                null,
                BlockGraph.XmlExtraTypes,
                new XmlRootAttribute("condition"),
                null)
            .Serialize(writer, condition);

        writer.WriteStartElement("bodyBlock");
        WriteXmlStatement(writer, bodyBlock);
        writer.WriteEndElement();
    }
}