using System.Xml.Serialization;

public class StartBlock : FunctionBlock
{
    [XmlIgnore]
    public StatementBlock next;

    public override void ToCode(CodeBuilder cb)
    {
        StatementBlock.GenCodeList(cb, next);
    }

    }