using System.Collections.Generic;
using System.Xml;
using System.Xml.Schema;
using System.Xml.Serialization;

[ShowName("分支")]
public class BranchNode : StatementNode
{
    [ShowName("条件")]
    public ExpressionNode condition;
    
    [ShowName("真")]
    public List<StatementNode> trueBody;
    
    [ShowName("假")]
    public List<StatementNode> falseBody;

    public override void ToCode(CodeBuilder cb)
    {
        cb.AppendWithIndent("if (");
        condition.ToCode(cb);
        cb.Append(") {\n");

        cb.PushIndent();
        ToCodeList(cb, trueBody);
        cb.PopIndent();

        cb.AppendWithIndent("} else {\n");

        cb.PushIndent();
        ToCodeList(cb, falseBody);
        cb.PopIndent();

        cb.AppendWithIndent("}");
    }
}