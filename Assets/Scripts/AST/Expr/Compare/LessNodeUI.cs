using System.Collections.Generic;

[ShowName("小于")]
[ASTModel(typeof(LessNode))]
public class LessNodeUI : ExprNodeUI
{
    public UIExprInputPort A;
    public UIExprInputPort B;

    public override void SolveModelConnection(Dictionary<BaseNodeUI, BaseNode> uiToModel, BaseNode node)
    {
        var model = (LessNode)node;
        model.A = A.GetModel(uiToModel);
        model.B = B.GetModel(uiToModel);
    }

    public override void SolveUIConnection(Dictionary<BaseNode, BaseNodeUI> modelToUI, BaseNode node)
    {
        var model = (LessNode)node;
        A.Connect(modelToUI, model.A);
        B.Connect(modelToUI, model.B);
    }
}
