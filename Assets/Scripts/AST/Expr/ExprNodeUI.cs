using System.Collections.Generic;

[ASTModel(typeof(ExprNode))]
[TitleBgColor(13, 90, 139, 13, 90, 139)]
public abstract class ExprNodeUI : BaseNodeUI
{
    [ShowName("结果")]
    public UIExprOutputPort result;

    public override void SolveModelConnection(Dictionary<BaseNodeUI, BaseNode> uiToModel, BaseNode node)
    {
    }

    public override void SolveUIConnection(Dictionary<BaseNode, BaseNodeUI> modelToUI, BaseNode node)
    {
    }
}
