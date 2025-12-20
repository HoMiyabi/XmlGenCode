using System.Xml;
using System.Xml.Schema;
using System.Xml.Serialization;

public class IfBlock : StatementBlock, IXmlSerializable
{
    public ExpressionBlock condition;
    public StatementBlock trueBlock;

    public override void ToCode(CodeBuilder cb)
    {
        cb.AppendWithIndent("if (");
        condition.ToCode(cb);
        cb.Append(") {\n");

        cb.PushIndent();
        GenCodeList(cb, trueBlock);
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

        writer.WriteStartElement("trueBlock");
        WriteXmlStatement(writer, trueBlock);
        writer.WriteEndElement();
    }
}