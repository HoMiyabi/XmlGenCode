using System.Collections.Generic;

[ShowName("分支")]
[ASTModel(typeof(BranchNode))]
public class BranchNodeUI : StatementNodeUI
{
    [ShowName("条件")]
    public UIExprInputPort condition;
    
    [ShowName("真")]
    public UIExecOutputPort trueBody;
    
    [ShowName("假")]
    public UIExecOutputPort falseBody;

    public override void SolveModelConnection(Dictionary<BaseNodeUI, BaseNode> uiToModel, BaseNode node)
    {
        base.SolveModelConnection(uiToModel, node);
        var model = (BranchNode)node;
        model.condition = condition.GetModel(uiToModel);
        model.trueBody = trueBody.GetModel(uiToModel);
        model.falseBody = falseBody.GetModel(uiToModel);
    }

    public override void SolveUIConnection(Dictionary<BaseNode, BaseNodeUI> modelToUI, BaseNode node)
    {
        base.SolveUIConnection(modelToUI, node);
        var model = (BranchNode)node;
        condition.Connect(modelToUI, model.condition);
        trueBody.Connect(modelToUI, model.trueBody);
        falseBody.Connect(modelToUI, model.falseBody);
    }
}
