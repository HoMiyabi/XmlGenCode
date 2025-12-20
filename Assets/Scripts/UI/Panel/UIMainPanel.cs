using System;
using UnityEngine;

public class UIMainPanel : UIBasePanel
{
    [NonSerialized] public UnityEngine.RectTransform BlockRoot;
    [NonSerialized] public UICodeEditorPanel         CodeEditorPanel;
    [NonSerialized] public UIConsolePanel            ConsolePanel;
    [NonSerialized] public UnityEngine.RectTransform Top;
    [NonSerialized] public UnityEngine.RectTransform SelectContent;
    [NonSerialized] public UnityEngine.UI.Button     GenCodeBtn;
    [NonSerialized] public UnityEngine.UI.Button     RunBtn;
    [NonSerialized] public UnityEngine.UI.Button     GenCodeAndRunBtn;
    [NonSerialized] public UnityEngine.RectTransform SelectArea;
    [NonSerialized] public UIEdgeBar                 UpEdgeBar;
    [NonSerialized] public UIEdgeBar                 MidEdgeBar;
    [NonSerialized] public UnityEngine.RectTransform PanelRoot;
    [NonSerialized] public UICheckBox               CodeEditorBtn;
    [NonSerialized] public UICheckBox               ConsoleBtn;
    [NonSerialized] public UINodeGraph              UINodeGraph;
    [NonSerialized] public UnityEngine.UI.Button     SaveBtn;
    [NonSerialized] public UnityEngine.UI.Button     LoadBtn;

    // 内存中的 BlockGraph model 引用
    [NonSerialized] public BlockGraph               BlockGraphModel;

    public GameObject[] UIBlockPrefabs;
    private readonly PuerTSRunner runner = new();

    protected override void Start()
    {
        base.Start();

        GenCodeBtn.onClick.AddListener(GenCode);
        RunBtn.onClick.AddListener(Run);
        GenCodeAndRunBtn.onClick.AddListener(GenCodeAndRun);

        // 保存和加载按钮
        // SaveBtn.onClick.AddListener(SaveToModel);
        // LoadBtn.onClick.AddListener(LoadFromModel);
        //
        // 文件管理

        // 控制台
        ConsoleBtn.OnValueChanged += value => ConsolePanel.SetShowHide(value);
        ConsolePanel.OnHide += () => ConsoleBtn.SetValue(false, false);
        ConsolePanel.Hide();

        // 代码编辑器
        CodeEditorBtn.OnValueChanged += value => CodeEditorPanel.SetShowHide(value);
        CodeEditorPanel.OnHide += () => CodeEditorBtn.SetValue(false, false);
        CodeEditorPanel.Hide();

        // 拖拽
        UpEdgeBar.UpdateDrag = delta => { ConsolePanel.RectTransform.sizeDelta += new Vector2(0, delta.y); };
        MidEdgeBar.UpdateDrag = delta =>
        {
            ConsolePanel.RectTransform.sizeDelta += new Vector2(delta.x, 0);
            CodeEditorPanel.RectTransform.sizeDelta += new Vector2(-delta.x, 0);
        };
    }

    private void GenCode()
    {
        throw new NotImplementedException();
        // var block = UINodeGraph.GetBlockGraph();
        // var sb = new CodeBuilder();
        // block.ToCode(sb);
        //
        // string code = sb.ToString();
        // CodeEditorPanel.CodeInput.text = code;
    }

    private void Run()
    {
        PuerTSLogMgr.Instance.ClearLogs();

        ConsolePanel.Show();

        runner.Run(CodeEditorPanel.CodeInput.text);
    }

    private void GenCodeAndRun()
    {
        GenCode();
        Run();
    }
}