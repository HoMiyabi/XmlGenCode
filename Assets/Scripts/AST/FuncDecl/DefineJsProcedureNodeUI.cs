using System;
using System.Collections.Generic;

[ShowName("定义JS过程")]
[ASTModel(typeof(DefineJsProcedureNode))]
public class DefineJsProcedureNodeUI : FuncDeclNodeUI
{
    [ShowName("过程名")]
    public UITextInput procedureName;
    
    [ShowName("编辑")]
    public UINodeBtn editBtn;

    public string code = "";

    protected override void Start()
    {
        base.Start();
        
        editBtn.Btn.onClick.AddListener(() =>
        {
            UIMgr.Instance.OpenPanel<UIEditJSProcedurePanel>().Set(this);
        });
    }

    public override void OnCreateToGraph()
    {
        base.OnCreateToGraph();
        procedureName.Input.text = $"procedure_{Guid.NewGuid().ToString("N")[..4]}";
    }

    public override void SolveModelConnection(Dictionary<BaseNodeUI, BaseNode> uiToModel, BaseNode node)
    {
        var model = (DefineJsProcedureNode)node;
        model.procedureName = procedureName.ToAST();
        model.code = code;
    }

    public override void SolveUIConnection(Dictionary<BaseNode, BaseNodeUI> modelToUI, BaseNode node)
    {
        var model = (DefineJsProcedureNode)node;
        procedureName.Input.text = model.procedureName;
        code = model.code;
    }
}
