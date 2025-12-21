using System.Collections.Generic;

[ShowName("执行JS过程")]
[ASTModel(typeof(ExecJsProcedureNode))]
public class ExecJSProcedureNodeUI : StatementNodeUI
{
    [ShowName("过程名")]
    public UITextInput procedureName;
    
    public override void SolveModelConnection(Dictionary<BaseNodeUI, BaseNode> uiToModel, BaseNode node)
    {
        base.SolveModelConnection(uiToModel, node);
        var model = (ExecJsProcedureNode)node;
        model.procedureName = procedureName.ToAST();
    }

    public override void SolveUIConnection(Dictionary<BaseNode, BaseNodeUI> modelToUI, BaseNode node)
    {
        base.SolveUIConnection(modelToUI, node);
        var model = (ExecJsProcedureNode)node;
        procedureName.Input.text = model.procedureName;
    }
}
