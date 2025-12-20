using UnityEngine;
using UnityEngine.UI;

[ShowName("定义JS过程")]
public class DefineJsProcedureNodeUI : FuncDeclNodeUI
{
    [SerializeField] private UIVariableField ProcedureName;
    [SerializeField] private Button EditBtn;

    private static int id = 1;

    public string Code { get; set; } = "";

    protected override void Start()
    {
        base.Start();
        EditBtn.onClick.AddListener(() =>
        {
            UIMgr.Instance.OpenPanel<UIEditJSProcedurePanel>().Set(this);
        });
    }

    protected override void OnAddToGraph()
    {
        base.OnAddToGraph();
        ProcedureName.Input.interactable = true;
        ProcedureName.Input.text = $"procedure{id++}";
    }

    public override BaseNode ToAST()
    {
        return new DefineJsProcedureNode
        {
            ProcedureName = ProcedureName.Text,
            Code = Code,
        };
    }
}