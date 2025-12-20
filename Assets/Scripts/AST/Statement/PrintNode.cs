public class PrintNode : StatementNode
{
    public ExpressionNode input;

    public override void ToCode(CodeBuilder cb)
    {
        cb.AppendWithIndent("console.log(");
        input.ToCode(cb);
        cb.Append(")");
        cb.Append(";");
    }
}