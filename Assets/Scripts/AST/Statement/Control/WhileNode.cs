using System.Collections.Generic;
using System.Xml;
using System.Xml.Schema;
using System.Xml.Serialization;

[ShowName("循环")]
public class WhileNode : StatementNode
{
    [ShowName("条件")]
    public ExpressionNode condition;
    
    [ShowName("循环体")]
    public List<StatementNode> body;

    public override void ToCode(CodeBuilder cb)
    {
        cb.AppendWithIndent("while (");
        condition.ToCode(cb);
        cb.Append(") {\n");

        cb.PushIndent();
        ToCodeList(cb, body);
        cb.PopIndent();

        cb.AppendWithIndent("}");
    }
}