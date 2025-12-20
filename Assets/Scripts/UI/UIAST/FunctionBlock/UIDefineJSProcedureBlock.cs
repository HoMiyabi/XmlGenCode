using UnityEngine;
using UnityEngine.UI;

[ASTModel(typeof(DefineJSProcedureBlock))]
public class UIDefineJSProcedureBlock : UIFunctionBlock
{
    [SerializeField] private UIVariableField ProcedureName;
    [SerializeField] private Button EditBtn;

    private static int id = 1;

    public string Code { get; set; } = "";

    private void Start()
    {
        EditBtn.onClick.AddListener(() =>
        {
            UIMgr.Instance.OpenPanel<UIEditJSProcedurePanel>().Set(this);
        });
        if (isSelectBlock)
        {
            ProcedureName.Input.interactable = false;
        }
    }

    protected override void OnAddToGraph()
    {
        base.OnAddToGraph();
        ProcedureName.Input.interactable = true;
        ProcedureName.Input.text = $"procedure{id++}";
    }

    public override BaseBlock ToAST()
    {
        return new DefineJSProcedureBlock
        {
            ProcedureName = ProcedureName.Text,
            Code = Code,
        };
    }
}