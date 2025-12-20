using System;
using System.Reflection;
using UnityEngine;
using UnityEngine.EventSystems;

public abstract class BaseNodeUI : UIBaseView, IBeginDragHandler, IDragHandler, IEndDragHandler, IPointerClickHandler
{
    [NonSerialized] public TMPro.TextMeshProUGUI     NameText;
    [NonSerialized] public UnityEngine.RectTransform Input;
    [NonSerialized] public UnityEngine.RectTransform OutPut;
    
    private Vector2 prevMousePosLS;
    
    private NodeInfo NodeInfo { get; set; }

    public void Set(NodeInfo nodeInfo)
    {
        NodeInfo = nodeInfo;
        NameText.text = nodeInfo.ShowName;
    }
    
    public abstract BaseNode ToAST();

    protected virtual void BuildUI()
    {
        var type = GetType();
        var fieldInfos = type.GetFields(BindingFlags.Public | BindingFlags.Instance);

        foreach (var fieldInfo in fieldInfos)
        {
            if (fieldInfo.FieldType == typeof(UIExecInputPort) &&
                fieldInfo.GetValue(this) == null)
            {
                var port = UIMgr.Instance.Add<UIExecInputPort>(AssetMgr.Instance.UIExecInputPort, Input);
                fieldInfo.SetValue(this, port);
            }
            else if (fieldInfo.FieldType == typeof(UIExecOutputPort) &&
                     fieldInfo.GetValue(this) == null)
            {
                var port = UIMgr.Instance.Add<UIExecOutputPort>(AssetMgr.Instance.UIExecOutputPort, OutPut);
                fieldInfo.SetValue(this, port);
            }
        }
        
        foreach (var fieldInfo in fieldInfos)
        {
            if (fieldInfo.FieldType == typeof(UIExpressionInputPort) &&
                fieldInfo.GetValue(this) == null)
            {
                var port = UIMgr.Instance.Add<UIExpressionInputPort>(AssetMgr.Instance.UIDataInputPort, Input);
                port.Set(GetShowName(fieldInfo));
                fieldInfo.SetValue(this, port);
            }
            else if (fieldInfo.FieldType == typeof(UIExpressionOutputPort) &&
                     fieldInfo.GetValue(this) == null)
            {
                var port = UIMgr.Instance.Add<UIExpressionOutputPort>(AssetMgr.Instance.UIDataOutputPort, OutPut);
                port.Set(GetShowName(fieldInfo));
                fieldInfo.SetValue(this, port);
            }
        }
    }
    
    private static string GetShowName(MemberInfo element)
    {
        var attr = element.GetCustomAttribute<ShowNameAttribute>();
        if (attr != null)
        {
            return attr.Name;
        }
        return element.Name;
    }

    protected void AddDataInputPort()
    {
        
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
            var panel = UIMgr.Instance.AddTop<UIContextMenuPanel>(AssetMgr.Instance.UIContextMenuPanel);
            panel.AddItem("删除", () =>
            {
                Destroy(gameObject);
            });
            panel.Finish(eventData.position, eventData.pressEventCamera);
        }
    }
}