using System;
using UnityEngine;
using UnityEngine.EventSystems;
using System.Collections.Generic;
using System.Reflection;
using System.Linq;
using UnityEngine.UI;

public class UINodeGraph : UIBaseView, IBeginDragHandler, IDragHandler, IEndDragHandler, IScrollHandler, IPointerClickHandler
{
    [NonSerialized] public UITip                     Tip;
    [NonSerialized] public UnityEngine.RectTransform NodeRoot;
    [NonSerialized] public UnityEngine.RectTransform GraphRoot;
    [NonSerialized] public UnityEngine.RectTransform ConnectionLineRoot;
    
    private float MinScale = 0.6f;
    private float MaxScale = 3f;
    
    public bool IsConnecting { get; private set; }
    private NodeUIPort _startPort;
    private UIConnectionLine _tempLine;

    public bool IsCutting { get; private set; }
    private UICuttingLine _cuttingLine;
    private Vector2 _lastMousePos;

    private static Dictionary<Type, NodeInfo> _modelTypeToNodeInfo;

    private static void InitCache()
    {
        if (_modelTypeToNodeInfo != null) return;
        _modelTypeToNodeInfo = new Dictionary<Type, NodeInfo>();
        var allInfos = NodeUIRegistry.FuncDeclNodeInfos
            .Concat(NodeUIRegistry.StatementNodeInfos)
            .Concat(NodeUIRegistry.ExprNodeInfos);
        foreach (var info in allInfos)
        {
            var attr = info.Type.GetCustomAttribute<ASTModelAttribute>();
            if (attr != null)
            {
                _modelTypeToNodeInfo[attr.Type] = info;
            }
            else
            {
                Debug.LogWarning("UINodeGraph: Can't find ASTModelAttribute for " + info.Type.Name);
            }
        }
    }

    public void CreateFromGraph(NodeGraph graph)
    {
        InitCache();
        
        // 清理旧节点
        NodeRoot.DestroyChildren();
        ConnectionLineRoot.DestroyChildren();

        GraphRoot.anchoredPosition = graph.position;
        GraphRoot.localScale = new Vector3(graph.scale, graph.scale, 1);

        var modelToUI = new Dictionary<BaseNode, BaseNodeUI>();

        // 第一遍：创建 UI 节点
        foreach (var model in graph.nodes)
        {
            if (_modelTypeToNodeInfo.TryGetValue(model.GetType(), out var nodeInfo))
            {
                var nodeUI = RestoreNodeUI(nodeInfo, model.position);
                modelToUI[model] = nodeUI;
            }
            else
            {
                Debug.LogWarning("UINodeGraph: Can't find NodeInfo for model type " + model.GetType().Name);
            }
        }

        // 强制刷新布局，确保端口位置正确
        Canvas.ForceUpdateCanvases();
        foreach (var uiNode in modelToUI.Values)
        {
            LayoutRebuilder.ForceRebuildLayoutImmediate(uiNode.RectTransform);
        }

        // 第二遍：处理连接
        foreach (var model in graph.nodes)
        {
            if (modelToUI.TryGetValue(model, out var uiNode))
            {
                uiNode.SolveUIConnection(modelToUI, model);
            }
        }
    }

    public void ConnectPorts(NodeUIPort startPort, NodeUIPort endPort)
    {
        if (startPort == null || endPort == null) return;
        
        var line = UIMgr.Instance.Add<UIConnectionLine>(ConnectionLineRoot);
        line.StartPort = startPort;
        line.EndPort = endPort;
        line.UpdatePoints();
        
        startPort.Connection = line;
        endPort.Connection = line;
        
        if (startPort is UIExecInputPort || startPort is UIExecOutputPort)
        {
            line.color = Color.white;
            line.Width = 5f;
        }
        else
        {
            line.color = Color.green;
            line.Width = 3f;
        }
    }

    public NodeGraph ToAST()
    {
        var graph = new NodeGraph
        {
            position = GraphRoot.anchoredPosition,
            scale = GraphRoot.localScale.x,
            nodes = new List<BaseNode>()
        };

        var uiNodes = NodeRoot.GetComponentsInChildren<BaseNodeUI>();
        var uiToModel = new Dictionary<BaseNodeUI, BaseNode>();

        // 第一遍：创建 Model 实例
        foreach (var uiNode in uiNodes)
        {
            var type = uiNode.GetType();
            var attr = type.GetCustomAttribute<ASTModelAttribute>();
            if (attr != null)
            {
                var model = (BaseNode)Activator.CreateInstance(attr.Type);
                graph.nodes.Add(model);
                uiToModel[uiNode] = model;
            }
            else
            {
                Debug.LogWarning("NodeUIRegistry: Can't find ASTModelAttribute for " + type.Name);
            }
        }

        // 第二遍：处理连接
        foreach (var uiNode in uiNodes)
        {
            if (uiToModel.TryGetValue(uiNode, out var model))
            {
                model.position = uiNode.RectTransform.anchoredPosition;
                uiNode.SolveModelConnection(uiToModel, model);
            }
            else
            {
                Debug.LogWarning("NodeUIRegistry: Can't find model for " + uiNode.name);
            }
        }

        return graph;
    }

    private void Update()
    {
        if (IsConnecting && _tempLine != null)
        {
            RectTransformUtility.ScreenPointToLocalPointInRectangle(ConnectionLineRoot, Input.mousePosition, null, out var localPoint);
            _tempLine.EndPoint = localPoint;
            _tempLine.SetVerticesDirty();
        }
    }

    public void OnBeginDrag(PointerEventData eventData)
    {
        if (eventData.button == PointerEventData.InputButton.Right && !IsConnecting)
        {
            StartCutting(eventData);
        }
    }

    public void OnDrag(PointerEventData eventData)
    {
        if (eventData.button == PointerEventData.InputButton.Left)
        {
            // 移动
            GraphRoot.anchoredPosition += eventData.delta;
        }
        else if (eventData.button == PointerEventData.InputButton.Right && IsCutting)
        {
            UpdateCutting(eventData);
        }
    }

    public void OnEndDrag(PointerEventData eventData)
    {
        if (eventData.button == PointerEventData.InputButton.Right && IsCutting)
        {
            FinishCutting();
        }
    }

    private void StartCutting(PointerEventData eventData)
    {
        IsCutting = true;
        GameObject go = new GameObject("CuttingLine", typeof(RectTransform), typeof(CanvasRenderer), typeof(UICuttingLine));
        go.transform.SetParent(ConnectionLineRoot, false);
        _cuttingLine = go.GetComponent<UICuttingLine>();
        _cuttingLine.color = Color.red;
        _cuttingLine.Clear();
        
        RectTransformUtility.ScreenPointToLocalPointInRectangle(ConnectionLineRoot, eventData.position, eventData.pressEventCamera, out var localPoint);
        _cuttingLine.AddPoint(localPoint);
        _lastMousePos = localPoint;
    }

    private void UpdateCutting(PointerEventData eventData)
    {
        RectTransformUtility.ScreenPointToLocalPointInRectangle(ConnectionLineRoot, eventData.position, eventData.pressEventCamera, out var localPoint);
        if (Vector2.Distance(_lastMousePos, localPoint) > 5f)
        {
            _cuttingLine.AddPoint(localPoint);
            _lastMousePos = localPoint;
        }
    }

    private void FinishCutting()
    {
        IsCutting = false;
        CheckCuttingIntersections();
        if (_cuttingLine != null)
        {
            Destroy(_cuttingLine.gameObject);
            _cuttingLine = null;
        }
    }

    private void CheckCuttingIntersections()
    {
        if (_cuttingLine == null || _cuttingLine.Points.Count < 2) return;

        var lines = ConnectionLineRoot.GetComponentsInChildren<UIConnectionLine>();
        List<UIConnectionLine> toDelete = new List<UIConnectionLine>();

        foreach (var line in lines)
        {
            if (line == _tempLine) continue;
            if (IsLineIntersectingCuttingLine(line))
            {
                toDelete.Add(line);
            }
        }

        foreach (var line in toDelete)
        {
            if (line.StartPort != null) line.StartPort.Connection = null;
            if (line.EndPort != null) line.EndPort.Connection = null;
            Destroy(line.gameObject);
        }
    }

    private bool IsLineIntersectingCuttingLine(UIConnectionLine line)
    {
        // 获取连线的贝塞尔点
        Vector2 p0 = line.StartPoint;
        Vector2 p3 = line.EndPoint;
        Vector2 p1 = p0 + Vector2.right * line.ControlPointDistance;
        Vector2 p2 = p3 + Vector2.left * line.ControlPointDistance;

        if (line.StartPort != null && line.StartPort is IInput) p1 = p0 + Vector2.left * line.ControlPointDistance;
        if (line.EndPort != null && line.EndPort is IOutput) p2 = p3 + Vector2.right * line.ControlPointDistance;

        List<Vector2> linePoints = new List<Vector2>();
        for (int i = 0; i <= line.Segments; i++)
        {
            float t = i / (float)line.Segments;
            linePoints.Add(CalculateBezierPoint(t, p0, p1, p2, p3));
        }

        // 检查切割线段与连线段的交点
        for (int i = 0; i < _cuttingLine.Points.Count - 1; i++)
        {
            for (int j = 0; j < linePoints.Count - 1; j++)
            {
                if (SegmentsIntersect(_cuttingLine.Points[i], _cuttingLine.Points[i + 1], linePoints[j], linePoints[j + 1]))
                {
                    return true;
                }
            }
        }

        return false;
    }

    private Vector2 CalculateBezierPoint(float t, Vector2 p0, Vector2 p1, Vector2 p2, Vector2 p3)
    {
        float u = 1 - t;
        float tt = t * t;
        float uu = u * u;
        float uuu = uu * u;
        float ttt = tt * t;

        Vector2 p = uuu * p0;
        p += 3 * uu * t * p1;
        p += 3 * u * tt * p2;
        p += ttt * p3;

        return p;
    }

    private bool SegmentsIntersect(Vector2 a, Vector2 b, Vector2 c, Vector2 d)
    {
        float denominator = (b.x - a.x) * (d.y - c.y) - (b.y - a.y) * (d.x - c.x);
        if (denominator == 0) return false;

        float t = ((c.x - a.x) * (d.y - c.y) - (c.y - a.y) * (d.x - c.x)) / denominator;
        float u = ((c.x - a.x) * (b.y - a.y) - (c.y - a.y) * (b.x - a.x)) / denominator;

        return t >= 0 && t <= 1 && u >= 0 && u <= 1;
    }

    public void StartConnect(NodeUIPort port)
    {
        if (IsConnecting)
        {
            FinishConnect(port);
            return;
        }

        if (port.IsConnected)
        {
            Debug.LogWarning("端口已连接");
            return;
        }

        IsConnecting = true;
        _startPort = port;
        
        _tempLine = UIMgr.Instance.Add<UIConnectionLine>(ConnectionLineRoot);
        _tempLine.StartPort = _startPort;
        
        if (_startPort is UIExecInputPort || _startPort is UIExecOutputPort)
        {
            _tempLine.color = Color.white;
            _tempLine.Width = 5f;
        }
        else
        {
            _tempLine.color = Color.green;
            _tempLine.Width = 3f;
        }

        _tempLine.UpdatePoints();
        _tempLine.EndPoint = _tempLine.StartPoint;
    }

    public void FinishConnect(NodeUIPort endPort)
    {
        if (endPort == _startPort || endPort.BaseNodeUI == _startPort.BaseNodeUI)
        {
            Debug.LogWarning("不能连接同一个节点的端口");
            return;
        }

        if (endPort.IsConnected)
        {
            Debug.LogWarning("目标端口已连接");
            return;
        }

        // 验证逻辑
        bool isValid = false;
        
        // 1. 输入连输出
        bool startIsInput = _startPort is IInput;
        bool endIsInput = endPort is IInput;
        bool startIsOutput = _startPort is IOutput;
        bool endIsOutput = endPort is IOutput;

        if ((startIsInput && endIsOutput) || (startIsOutput && endIsInput))
        {
            // 2. 类型匹配 (执行连执行，表达式连表达式)
            bool startIsExec = _startPort is UIExecInputPort || _startPort is UIExecOutputPort;
            bool endIsExec = endPort is UIExecInputPort || endPort is UIExecOutputPort;
            
            if (startIsExec == endIsExec)
            {
                isValid = true;
            }
        }

        if (isValid)
        {
            // 建立永久连接
            _tempLine.EndPort = endPort;
            _tempLine.UpdatePoints();
            
            _startPort.Connection = _tempLine;
            endPort.Connection = _tempLine;

            _tempLine = null;
            _startPort = null;
            IsConnecting = false;
        }
        else
        {
            Debug.LogWarning("非法连接");
            // 不做任何操作，让连线继续跟随鼠标
        }
    }

    public void CancelConnect()
    {
        if (_tempLine != null)
        {
            Destroy(_tempLine.gameObject);
            _tempLine = null;
        }
        _startPort = null;
        IsConnecting = false;
    }


    public void OnScroll(PointerEventData eventData)
    {
        // 滚轮向下缩小，滚轮向上放大
        // scrollDelta.y向下为负
        if (RectTransformUtility.ScreenPointToLocalPointInRectangle(GraphRoot,
                eventData.position, eventData.pressEventCamera, out var localPoint))
        {
            // 记录缩放前的比例
            float oldScale = GraphRoot.localScale.x;
            
            // 计算缩放增量
            float scaleDelta = GetScaleDelta(eventData.scrollDelta.y);
            
            // 计算缩放后的目标比例（限制在最小/最大范围内）
            float newScale = Mathf.Clamp(oldScale + scaleDelta, MinScale, MaxScale);

            // 关键：计算位置偏移，抵消缩放导致的鼠标点偏移
            // 原理：缩放前后鼠标点在父空间中的位置应保持一致，通过调整位置补偿缩放差
            var offset = localPoint * (oldScale - newScale);

            // 先调整位置，再应用新缩放（顺序影响最终效果）
            GraphRoot.anchoredPosition += offset;
            GraphRoot.localScale = new Vector3(newScale, newScale, 1);

            Tip.ShowTip($"{newScale:F1}X");
        }
    }

    private float GetScaleDelta(float scrollDelta)
    {
        if (scrollDelta > 0f)
        {
            scrollDelta = 1f;
        }
        else if (scrollDelta < 0f)
        {
            scrollDelta = -1f;
        }
        else
        {
            scrollDelta = 0f;
        }
        return scrollDelta * 0.2f;
    }

    public void OnPointerClick(PointerEventData eventData)
    {
        if (eventData.button == PointerEventData.InputButton.Right)
        {
            if (IsConnecting)
            {
                CancelConnect();
                return;
            }

            // 如果刚才进行了切割操作，则不弹出菜单
            if (Vector2.Distance(eventData.pressPosition, eventData.position) > 10f)
                return;

            RectTransformUtility.ScreenPointToLocalPointInRectangle(NodeRoot, eventData.position, eventData.pressEventCamera, out var localPos);
            var menu = UIMgr.Instance.AddTop<UIContextMenuPanel>();
            
            foreach (var nodeInfo in NodeUIRegistry.FuncDeclNodeInfos)
            {
                menu.AddItem(nodeInfo.TitleText, () => CreateNodeUI(nodeInfo, localPos));
            }
            
            menu.AddDivider();
            
            foreach (var nodeInfo in NodeUIRegistry.StatementNodeInfos)
            {
                menu.AddItem(nodeInfo.TitleText, () => CreateNodeUI(nodeInfo, localPos));
            }
            
            menu.AddDivider();
            
            foreach (var nodeInfo in NodeUIRegistry.ExprNodeInfos)
            {
                menu.AddItem(nodeInfo.TitleText, () => CreateNodeUI(nodeInfo, localPos));
            }
            
            menu.Finish(eventData.position, eventData.pressEventCamera);
        }
    }

    private BaseNodeUI RestoreNodeUI(NodeInfo nodeInfo, Vector2 anchoredPosition)
    {
        var rect = UIMgr.Instance.Add("UINode", NodeRoot);
        var nodeUI = (BaseNodeUI)rect.gameObject.AddComponent(nodeInfo.Type);
        nodeUI.RectTransform.anchoredPosition = anchoredPosition;
        nodeUI.Set(this, nodeInfo);
        
        nodeUI.OnRestoreToGraph();
        return nodeUI;
    }

    private BaseNodeUI CreateNodeUI(NodeInfo nodeInfo, Vector2 anchoredPosition)
    {
        var rect = UIMgr.Instance.Add("UINode", NodeRoot); 
        
        var nodeUI = (BaseNodeUI)rect.gameObject.AddComponent(nodeInfo.Type);
        nodeUI.RectTransform.anchoredPosition = anchoredPosition;
        nodeUI.Set(this, nodeInfo);
        
        nodeUI.OnCreateToGraph();
        return nodeUI;
    }
}
