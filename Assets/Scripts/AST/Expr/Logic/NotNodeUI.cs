using System.Collections.Generic;

[ShowName("非")]
[ASTModel(typeof(NotNode))]
public class NotNodeUI : ExprNodeUI
{
    [ShowName("输入")]
    public UIExprInputPort input;

    public override void SolveModelConnection(Dictionary<BaseNodeUI, BaseNode> uiToModel, BaseNode node)
    {
        var model = (NotNode)node;
        model.input = input.GetModel(uiToModel);
    }

    public override void SolveUIConnection(Dictionary<BaseNode, BaseNodeUI> modelToUI, BaseNode node)
    {
        var model = (NotNode)node;
        input.Connect(modelToUI, model.input);
    }
}
