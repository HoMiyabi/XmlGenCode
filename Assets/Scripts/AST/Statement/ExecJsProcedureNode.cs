public class ExecJsProcedureNode : StatementNode
{
    public string procedureName;
    
    public override void ToCode(CodeBuilder cb)
    {
        cb.AppendWithIndent($"{procedureName}();");
    }
}