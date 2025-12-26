using System.Collections.Generic;

[ASTModel(typeof(StatementNode))]
[TitleBgColor(197, 210, 83, 197, 210, 83)]
public abstract class StatementNodeUI : BaseNodeUI
{
    [ShowName("")]
    [NodeUIElementOrder(100)]
    public UIExecInputPort prev;
    
    [ShowName("")]
    [NodeUIElementOrder(100)]
    public UIExecOutputPort next;

    public override void SolveModelConnection(Dictionary<BaseNodeUI, BaseNode> uiToModel, BaseNode node)
    {
        var model = (StatementNode)node;
        model.next = next.GetModel(uiToModel);
    }

    public override void SolveUIConnection(Dictionary<BaseNode, BaseNodeUI> modelToUI, BaseNode node)
    {
        var model = (StatementNode)node;
        next.Connect(modelToUI, model.next);
    }
}
