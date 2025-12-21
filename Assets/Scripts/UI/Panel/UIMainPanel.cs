using System;
using UnityEngine;

public class UIMainPanel : UIBasePanel
{
    [NonSerialized] public UICheckBox                FileManagementBtn;
    [NonSerialized] public UICheckBox                ConsoleBtn;
    [NonSerialized] public UICheckBox                CodeEditorBtn;
    [NonSerialized] public UIFileManagementPanel     UIFileManagementPanel;
    [NonSerialized] public UIConsolePanel            UIConsolePanel;
    [NonSerialized] public UICodeEditorPanel         UICodeEditorPanel;
    [NonSerialized] public UnityEngine.RectTransform Top;
    [NonSerialized] public UnityEngine.UI.Button     GenCodeBtn;
    [NonSerialized] public UnityEngine.UI.Button     RunBtn;
    [NonSerialized] public UnityEngine.UI.Button     GenCodeAndRunBtn;
    [NonSerialized] public UIEdgeBar                 UpEdgeBar;
    [NonSerialized] public UIEdgeBar                 MidEdgeBar;
    [NonSerialized] public UnityEngine.RectTransform PanelRoot;
    [NonSerialized] public UnityEngine.UI.Button     SaveBtn;
    [NonSerialized] public UnityEngine.UI.Button     LoadBtn;
    [NonSerialized] public UnityEngine.RectTransform NodeGraphUIRoot;
    
    private readonly PuerTSRunner runner = new();

    private string _savedGraphXml;
    public NodeGraphUI SelectedNodeGraphUI { get; set; }

    public NodeGraphUI AddNodeGraphUI(string content)
    {
        var nodeGraph = NodeGraph.FromXml(content);
        var nodeGraphUI = UIMgr.Instance.Add<NodeGraphUI>(NodeGraphUIRoot);
        nodeGraphUI.RestoreFromGraph(nodeGraph);
        
        return nodeGraphUI;
    }

    protected override void Awake()
    {
        base.Awake();
        NodeGraphUIRoot.DestroyChildren();
    }

    protected override void Start()
    {
        base.Start();

        GenCodeBtn.onClick.AddListener(GenCode);
        RunBtn.onClick.AddListener(Run);
        GenCodeAndRunBtn.onClick.AddListener(GenCodeAndRun);

        // 保存和加载按钮
        SaveBtn.onClick.AddListener(SaveToModel);
        LoadBtn.onClick.AddListener(LoadFromModel);
        
        // 文件管理
        UIFileManagementPanel.MainPanel = this;
        FileManagementBtn.OnValueChanged += value => UIFileManagementPanel.SetShowHide(value);
        UIFileManagementPanel.OnHide += () => FileManagementBtn.SetValue(false, false);
        UIFileManagementPanel.Hide();

        // 控制台
        ConsoleBtn.OnValueChanged += value => UIConsolePanel.SetShowHide(value);
        UIConsolePanel.OnHide += () => ConsoleBtn.SetValue(false, false);
        UIConsolePanel.Hide();

        // 代码编辑器
        CodeEditorBtn.OnValueChanged += value => UICodeEditorPanel.SetShowHide(value);
        UIConsolePanel.OnHide += () => CodeEditorBtn.SetValue(false, false);
        UICodeEditorPanel.Hide();
    }

    private void SaveToModel()
    {
        var nodeGraph = SelectedNodeGraphUI.ToAST();
        _savedGraphXml = nodeGraph.ToXml();
        Debug.Log(_savedGraphXml);
        Debug.Log("Graph saved to string.");
    }

    private void LoadFromModel()
    {
        if (_savedGraphXml != null)
        {
            var nodeGraph = NodeGraph.FromXml(_savedGraphXml);
            SelectedNodeGraphUI.RestoreFromGraph(nodeGraph);
            Debug.Log("Graph loaded from string.");
        }
        else
        {
            Debug.LogWarning("No saved graph found.");
        }
    }

    private void GenCode()
    {
        var nodeGraph = SelectedNodeGraphUI.ToAST();
        var cb = new CodeBuilder();
        nodeGraph.ToCode(cb);
        
        string code = cb.ToString();
        UICodeEditorPanel.CodeInput.text = code;
    }

    private void Run()
    {
        PuerTSLogMgr.Instance.ClearLogs();

        UIConsolePanel.Show();

        runner.Run(UICodeEditorPanel.CodeInput.text);
    }

    private void GenCodeAndRun()
    {
        GenCode();
        Run();
    }
}
