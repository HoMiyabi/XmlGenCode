[ASTModel(typeof(CallJSProcedureBlock))]
public class UICallJSProcedureBlock : UIStatementBlock
{
    public UIVariableField procedureName;
        
    public override BaseBlock ToAST()
    {
        return new CallJSProcedureBlock()
        {
            procedureName = procedureName.Text,
        };
    }
}