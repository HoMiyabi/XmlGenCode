public class WhileNode : StatementNode
{
    public ExpressionNode condition;
    
    public StatementNode loopBody;

    public override void ToCode(CodeBuilder cb)
    {
        cb.AppendWithIndent("while (");
        condition.ToCode(cb);
        cb.Append(") {\n");

        cb.PushIndent();
        ToCodeList(cb, loopBody);
        cb.PopIndent();

        cb.AppendWithIndent("}");
    }
}