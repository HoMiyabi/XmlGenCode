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
    
    private readonly PuerTSRunner                 runner         = new();
    private readonly Dictionary<int, NodeGraphUI> nodeGraphUIs   = new();
    private          NodeGraphUI                  selectedNodeGraphUI;

    public NodeGraphUI SelectedNodeGraphUI
    {
        get => selectedNodeGraphUI;
        set
        {
            if (selectedNodeGraphUI == value) return;
            if (selectedNodeGraphUI != null)
            {
                selectedNodeGraphUI.gameObject.SetActive(false);
            }
            selectedNodeGraphUI = value;
            if (selectedNodeGraphUI != null)
            {
                selectedNodeGraphUI.gameObject.SetActive(true);
            }
        }
    }

    public NodeGraphUI AddNodeGraphUI(FileModel fileModel)
    {
        NodeGraph nodeGraph = NodeGraph.FromXml(fileModel.FileContent);
        
        var nodeGraphUI = UIMgr.Instance.Add<NodeGraphUI>(NodeGraphUIRoot);
        nodeGraphUI.FileId = fileModel.Id;
        nodeGraphUI.RestoreFromGraph(nodeGraph);
        nodeGraphUI.gameObject.SetActive(false);
        nodeGraphUIs[fileModel.Id] = nodeGraphUI;

        return nodeGraphUI;
    }

    public void SelectNodeGraph(int id)
    {
        if (nodeGraphUIs.TryGetValue(id, out var graph))
        {
            SelectedNodeGraphUI = graph;
        }
    }

    public void DeleteNodeGraph(int id)
    {
        if (nodeGraphUIs.TryGetValue(id, out var graph))
        {
            if (SelectedNodeGraphUI == graph)
            {
                SelectedNodeGraphUI = null;
            }
            nodeGraphUIs.Remove(id);
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
        // 初始化已存在的文件
        foreach (var file in FileMgr.Instance.FileList)
        {
            AddNodeGraphUI(file);
        }

        if (FileMgr.Instance.SelectedFile != null)
        {
            SelectNodeGraph(FileMgr.Instance.SelectedFile.Id);
        }

        FileMgr.Instance.OnFileAdded += OnFileAdded;
        FileMgr.Instance.OnFileSelected += SelectNodeGraph;
        FileMgr.Instance.OnFileDeleted += DeleteNodeGraph;
        FileMgr.Instance.OnFileContentUpdated += OnFileContentUpdated;

        FileManagementBtn.OnValueChanged += value => UIFileManagementPanel.SetShowHide(value);
        UIFileManagementPanel.OnHide += () => FileManagementBtn.SetValue(false, false);
        UIFileManagementPanel.Hide();

        // 控制台
        ConsoleBtn.OnValueChanged += value => UIConsolePanel.SetShowHide(value);
        UIConsolePanel.OnHide += () => ConsoleBtn.SetValue(false, false);
        UIConsolePanel.Hide();

        // 代码编辑器
        CodeEditorBtn.OnValueChanged += value => UICodeEditorPanel.SetShowHide(value);
        UICodeEditorPanel.OnHide += () => CodeEditorBtn.SetValue(false, false);
        UICodeEditorPanel.Hide();
    }

    private void SaveToFile()
    {
        if (SelectedNodeGraphUI == null) return;
        string xml = SelectedNodeGraphUI.ToAST().ToXml();
        FileMgr.Instance.UpdateFileContent(SelectedNodeGraphUI.FileId, xml, false).Forget();
    }

    private void OnFileAdded(FileModel file)
    {
        AddNodeGraphUI(file);
    }

    private void OnFileContentUpdated(FileModel fileModel)
    {
        if (nodeGraphUIs.TryGetValue(fileModel.Id, out var graphUI))
        {
            NodeGraph nodeGraph = NodeGraph.FromXml(fileModel.FileContent);
            graphUI.RestoreFromGraph(nodeGraph);
        }
    }

    protected override void OnDestroy()
    {
        base.OnDestroy();
        FileMgr.Instance.OnFileAdded -= OnFileAdded;
        FileMgr.Instance.OnFileSelected -= SelectNodeGraph;
        FileMgr.Instance.OnFileDeleted -= DeleteNodeGraph;
        FileMgr.Instance.OnFileContentUpdated -= OnFileContentUpdated;
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
