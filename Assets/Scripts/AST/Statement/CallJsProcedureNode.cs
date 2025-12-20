[ShowName("执行JS过程")]
public class CallJsProcedureNode : StatementNode
{
    public string procedureName;
        
    public override void ToCode(CodeBuilder cb)
    {
        cb.AppendWithIndent($"{procedureName}();");
    }
}