using System.Collections.Generic;

[ShowName("设置变量")]
[ASTModel(typeof(SetVariableNode))]
public class SetVariableNodeUI : StatementNodeUI
{
    [ShowName("变量名")]
    public UITextInput varName;
    
    [ShowName("值")]
    public UIExprInputPort value;

    public override void SolveModelConnection(Dictionary<BaseNodeUI, BaseNode> uiToModel, BaseNode node)
    {
        base.SolveModelConnection(uiToModel, node);
        var model = (SetVariableNode)node;
        model.varName = varName.ToAST();
        model.value = value.GetModel(uiToModel);
    }

    public override void SolveUIConnection(Dictionary<BaseNode, BaseNodeUI> modelToUI, BaseNode node)
    {
        base.SolveUIConnection(modelToUI, node);
        var model = (SetVariableNode)node;
        varName.Input.text = model.varName;
        value.Connect(modelToUI, model.value);
    }
}
