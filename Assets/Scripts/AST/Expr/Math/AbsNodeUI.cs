using System.Collections.Generic;

[ShowName("绝对值")]
[ASTModel(typeof(AbsNode))]
public class AbsNodeUI : ExprNodeUI
{
    [ShowName("输入")]
    public UIExprInputPort input;

    public override void SolveModelConnection(Dictionary<BaseNodeUI, BaseNode> uiToModel, BaseNode node)
    {
        var model = (AbsNode)node;
        model.input = input.GetModel(uiToModel);
    }

    public override void SolveUIConnection(Dictionary<BaseNode, BaseNodeUI> modelToUI, BaseNode node)
    {
        var model = (AbsNode)node;
        input.Connect(modelToUI, model.input);
    }
}
