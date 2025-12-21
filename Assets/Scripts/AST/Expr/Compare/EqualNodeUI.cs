using System.Collections.Generic;

[ShowName("等于")]
[ASTModel(typeof(EqualNode))]
public class EqualNodeUI : ExprNodeUI
{
    public UIExprInputPort A;
    public UIExprInputPort B;

    public override void SolveModelConnection(Dictionary<BaseNodeUI, BaseNode> uiToModel, BaseNode node)
    {
        var equalNode = (EqualNode)node;
        equalNode.A = A.GetModel(uiToModel);
        equalNode.B = B.GetModel(uiToModel);
    }

    public override void SolveUIConnection(Dictionary<BaseNode, BaseNodeUI> modelToUI, BaseNode node)
    {
        var model = (EqualNode)node;
        A.Connect(modelToUI, model.A);
        B.Connect(modelToUI, model.B);
    }
}
