using System;
using System.Collections.Generic;
using System.Linq;
using System.Reflection;
using UnityEngine;
using UnityEngine.EventSystems;

public abstract class BaseNodeUI : UIBaseView, IBeginDragHandler, IDragHandler, IEndDragHandler, IPointerClickHandler
{
    [NonSerialized] public TMPro.TextMeshProUGUI     TitleText;
    [NonSerialized] public UnityEngine.RectTransform InputRoot;
    [NonSerialized] public UnityEngine.RectTransform OutPutRoot;
    [NonSerialized] public UnityEngine.RectTransform ButtonRoot;
    [NonSerialized] public UnityEngine.UI.Image      TitleColor;
    
    private Vector2 prevMousePosLS;
    
    public UINodeGraph NodeGraph { get; private set; }
    
    private NodeInfo NodeInfo { get; set; }

    public abstract void SolveModelConnection(Dictionary<BaseNodeUI, BaseNode> uiToModel, BaseNode node);
    public abstract void SolveUIConnection(Dictionary<BaseNode, BaseNodeUI> modelToUI, BaseNode node);
    
    // 创建节点时调用，从model恢复不调用
    public virtual void OnCreateToGraph()
    {
    }

    public virtual void OnRestoreToGraph()
    {
    }

    public void Set(UINodeGraph nodeGraph, NodeInfo nodeInfo)
    {
        NodeInfo = nodeInfo;
        
        NodeGraph = nodeGraph;
        
        TitleText.text = nodeInfo.TitleText;
        TitleColor.color = nodeInfo.TitleColor;
    }

    protected override void Awake()
    {
        base.Awake();
        
        InputRoot.DestroyChildren();
        OutPutRoot.DestroyChildren();
        ButtonRoot.DestroyChildren();
        
        BuildUI();
    }

    private void AddNodeUIElement(FieldInfo fieldInfo, RectTransform root)
    {
        var port = (NodeUIElement)UIMgr.Instance.Add(fieldInfo.FieldType, root);

        port.BaseNodeUI = this;
        port.SetText(NodeUIRegistry.GetShowName(fieldInfo));
        
        fieldInfo.SetValue(this, port);
    }

    protected virtual void BuildUI()
    {
        var type = GetType();
        
        var fieldInfos = type.GetFields(BindingFlags.Public | BindingFlags.Instance)
            .Where(x => x.GetValue(this) == null)
            .ToList();
        
        var inputFieldInfos = fieldInfos
            .Where(x => typeof(IInput).IsAssignableFrom(x.FieldType))
            .OrderByDescending(x =>
            {
                int order = NodeUIRegistry.GetOrder(x);
                if (x.FieldType == typeof(UIExecInputPort))
                {
                    order += 10000;
                }
                return order;
            })
            .ToList();
        
        var outputFieldInfos = fieldInfos
            .Where(x => typeof(IOutput).IsAssignableFrom(x.FieldType))
            .OrderByDescending(x =>
            {
                int order = NodeUIRegistry.GetOrder(x);
                if (x.FieldType == typeof(UIExecOutputPort))
                {
                    order += 10000;
                }
                return order;
            })
            .ToList();
        
        var btnFieldInfos = fieldInfos
            .Where(x => typeof(INodeBtn).IsAssignableFrom(x.FieldType))
            .OrderByDescending(x =>
            {
                int order = NodeUIRegistry.GetOrder(x);
                return order;
            })
            .ToArray();

        foreach (var inputFieldInfo in inputFieldInfos)
        {
            AddNodeUIElement(inputFieldInfo, InputRoot);
        }
        
        foreach (var outputFieldInfo in outputFieldInfos)
        {
            AddNodeUIElement(outputFieldInfo, OutPutRoot);
        }
        
        foreach (var btnFieldInfo in btnFieldInfos)
        {
            AddNodeUIElement(btnFieldInfo, ButtonRoot);
        }
    }

    protected virtual void OnAddToGraph()
    {
    }
    
    public void OnBeginDrag(PointerEventData eventData)
    {
        if (eventData.button == PointerEventData.InputButton.Left)
        {
            transform.SetAsLastSibling();

            RectTransformUtility.ScreenPointToLocalPointInRectangle((RectTransform)transform.parent,
                eventData.position, eventData.pressEventCamera, out prevMousePosLS);
        }
    }
    
    public void OnDrag(PointerEventData eventData)
    {
        if (eventData.button == PointerEventData.InputButton.Left)
        {
            if (RectTransformUtility.ScreenPointToLocalPointInRectangle((RectTransform)transform.parent,
                    eventData.position, eventData.pressEventCamera, out var mousePosLS))
            {
                RectTransform.anchoredPosition += mousePosLS - prevMousePosLS;
                prevMousePosLS = mousePosLS;
            }
        }
    }

    public void OnEndDrag(PointerEventData eventData)
    {
        if (eventData.button == PointerEventData.InputButton.Left)
        {
            
        }
    }

    public void OnPointerClick(PointerEventData eventData)
    {
        if (eventData.button == PointerEventData.InputButton.Right)
        {
            var panel = UIMgr.Instance.AddTop<UIContextMenuPanel>();
            panel.AddItem("删除", () =>
            {
                Destroy(gameObject);
            });
            panel.Finish(eventData.position, eventData.pressEventCamera);
        }
    }
}
