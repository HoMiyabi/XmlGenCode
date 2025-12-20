using System;
using UnityEngine;
using UnityEngine.EventSystems;

public class UINodeGraph : UIBaseView, IDragHandler, IScrollHandler
{
    [NonSerialized] public UITip                     Tip;
    [NonSerialized] public UnityEngine.RectTransform NodeRoot;
    
    private float MinScale = 0.6f;
    private float MaxScale = 3f;

    public void OnDrag(PointerEventData eventData)
    {
        if (eventData.button != PointerEventData.InputButton.Left) return;

        // 移动
        NodeRoot.anchoredPosition += eventData.delta;
    }

    public void OnScroll(PointerEventData eventData)
    {
        // 滚轮向下缩小，滚轮向上放大
        // scrollDelta.y向下为负
        if (RectTransformUtility.ScreenPointToLocalPointInRectangle(NodeRoot,
                eventData.position, eventData.pressEventCamera, out var localPoint))
        {
            // 记录缩放前的比例
            float oldScale = NodeRoot.localScale.x;
            
            // 计算缩放增量
            float scaleDelta = GetScaleDelta(eventData.scrollDelta.y);
            
            // 计算缩放后的目标比例（限制在最小/最大范围内）
            float newScale = Mathf.Clamp(oldScale + scaleDelta, MinScale, MaxScale);

            // 关键：计算位置偏移，抵消缩放导致的鼠标点偏移
            // 原理：缩放前后鼠标点在父空间中的位置应保持一致，通过调整位置补偿缩放差
            var offset = localPoint * (oldScale - newScale);

            // 先调整位置，再应用新缩放（顺序影响最终效果）
            NodeRoot.anchoredPosition += offset;
            NodeRoot.localScale = new Vector3(newScale, newScale, 1);

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
}