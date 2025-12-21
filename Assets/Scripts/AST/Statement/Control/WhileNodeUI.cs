using System.Collections.Generic;

[ShowName("循环")]
[ASTModel(typeof(WhileNode))]
public class WhileNodeUI : StatementNodeUI
{
    [ShowName("条件")]
    public UIExprInputPort condition;
    
    [ShowName("循环体")]
    public UIExecOutputPort loopBody;

    public override void SolveModelConnection(Dictionary<BaseNodeUI, BaseNode> uiToModel, BaseNode node)
    {
        base.SolveModelConnection(uiToModel, node);
        var model = (WhileNode)node;
        model.condition = condition.GetModel(uiToModel);
        model.loopBody = loopBody.GetModel(uiToModel);
    }

    public override void SolveUIConnection(Dictionary<BaseNode, BaseNodeUI> modelToUI, BaseNode node)
    {
        base.SolveUIConnection(modelToUI, node);
        var model = (WhileNode)node;
        condition.Connect(modelToUI, model.condition);
        loopBody.Connect(modelToUI, model.loopBody);
    }
}
