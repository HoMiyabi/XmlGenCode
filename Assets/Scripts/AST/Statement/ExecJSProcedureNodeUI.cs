[ShowName("执行JS过程")]
public class ExecJSProcedureNodeUI : StatementNodeUI
{
    [ShowName("过程名")]
    public UITextInputPort procedureName;
    
    public override BaseNode ToAST()
    {
        return new ExecJsProcedureNode()
        {
            next = next.ToAST(),
            procedureName = procedureName.ToAST(),
        };
    }
}