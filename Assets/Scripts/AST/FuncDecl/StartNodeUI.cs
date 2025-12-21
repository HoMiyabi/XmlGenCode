using System.Collections.Generic;

[ShowName("开始")]
[ASTModel(typeof(StartNode))]
public class StartNodeUI : FuncDeclNodeUI
{
    [ShowName("")]
    public UIExecOutputPort next;
    
    public override void SolveModelConnection(Dictionary<BaseNodeUI, BaseNode> uiToModel, BaseNode node)
    {
        var model = (StartNode)node;
        model.next = next.GetModel(uiToModel);
    }

    public override void SolveUIConnection(Dictionary<BaseNode, BaseNodeUI> modelToUI, BaseNode node)
    {
        var model = (StartNode)node;
        next.Connect(modelToUI, model.next);
    }
}
