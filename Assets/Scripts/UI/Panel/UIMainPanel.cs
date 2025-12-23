using System;
using Cysharp.Threading.Tasks;
using UnityEngine;
using System.Collections.Generic;

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
    
    private readonly PuerTSRunner       runner         = new();
    private readonly List<NodeGraphUI> nodeGraphUIs   = new();
    private          NodeGraphUI       selectedNodeGraphUI;

    public NodeGraphUI SelectedNodeGraphUI
    {
        get => selectedNodeGraphUI;
        set
        {
            if (selectedNodeGraphUI == value) return;
            if (selectedNodeGraphUI != null) selectedNodeGraphUI.gameObject.SetActive(false);
            selectedNodeGraphUI = value;
            if (selectedNodeGraphUI != null) selectedNodeGraphUI.gameObject.SetActive(true);
        }
    }

    public void ClearNodeGraphs()
    {
        foreach (var graph in nodeGraphUIs)
        {
            Destroy(graph.gameObject);
        }
        nodeGraphUIs.Clear();
        selectedNodeGraphUI = null;
    }

    public NodeGraphUI AddNodeGraphUI(string content)
    {
        NodeGraph nodeGraph;
        if (string.IsNullOrEmpty(content))
        {
            nodeGraph = new NodeGraph
            {
                position = Vector2.zero,
                scale = 1f,
                nodes = new List<BaseNode>()
            };
        }
        else
        {
            nodeGraph = NodeGraph.FromXml(content);
        }
        
        var nodeGraphUI = UIMgr.Instance.Add<NodeGraphUI>(NodeGraphUIRoot);
        nodeGraphUI.RestoreFromGraph(nodeGraph);
        nodeGraphUI.gameObject.SetActive(false);
        nodeGraphUIs.Add(nodeGraphUI);

        return nodeGraphUI;
    }

    public void SelectNodeGraph(int index)
    {
        if (index >= 0 && index < nodeGraphUIs.Count)
        {
            SelectedNodeGraphUI = nodeGraphUIs[index];
        }
    }

    public void RemoveNodeGraph(int index)
    {
        if (index >= 0 && index < nodeGraphUIs.Count)
        {
            var graph = nodeGraphUIs[index];
            if (SelectedNodeGraphUI == graph)
            {
                SelectedNodeGraphUI = null;
            }
            nodeGraphUIs.RemoveAt(index);
            Destroy(graph.gameObject);
        }
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

        // 保存按钮
        SaveBtn.onClick.AddListener(SaveToFile);
        
        // 文件管理
        UIFileManagementPanel.OnFilesCleared += ClearNodeGraphs;
        UIFileManagementPanel.OnFileAdded += content => AddNodeGraphUI(content);
        UIFileManagementPanel.OnFileSelected += SelectNodeGraph;
        UIFileManagementPanel.OnFileRemoved += RemoveNodeGraph;
        UIFileManagementPanel.Init();

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

    private void SaveToFile()
    {
        if (SelectedNodeGraphUI == null) return;
        string xml = SelectedNodeGraphUI.ToAST().ToXml();
        UIFileManagementPanel.UpdateFileContent(xml).Forget();
    }

    private void GenCode()
    {
        if (SelectedNodeGraphUI == null) return;
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
