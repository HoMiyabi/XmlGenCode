using System.Collections.Generic;

[ShowName("打印")]
[ASTModel(typeof(PrintNode))]
public class PrintNodeUI : StatementNodeUI
{
    [ShowName("输入")]
    public UIExprInputPort input;

    public override void SolveModelConnection(Dictionary<BaseNodeUI, BaseNode> uiToModel, BaseNode node)
    {
        base.SolveModelConnection(uiToModel, node);
        var model = (PrintNode)node;
        model.input = input.GetModel(uiToModel);
    }

    public override void SolveUIConnection(Dictionary<BaseNode, BaseNodeUI> modelToUI, BaseNode node)
    {
        base.SolveUIConnection(modelToUI, node);
        var model = (PrintNode)node;
        input.Connect(modelToUI, model.input);
    }
}
