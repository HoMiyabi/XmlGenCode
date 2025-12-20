using System;
using UnityEngine.EventSystems;

public class UITitleBar : UIBaseView, IBeginDragHandler, IDragHandler
{
    [NonSerialized] public TMPro.TextMeshProUGUI TitleText;
    [NonSerialized] public UnityEngine.UI.Button CloseBtn;

    public Action<PointerEventData> OnBeginDragCallback;
    public Action<PointerEventData> OnDragCallback;

    public void SetPanel(UIBasePanel panel)
    {
        CloseBtn.onClick.AddListener(panel.Hide);
    }

    public void OnBeginDrag(PointerEventData eventData)
    {
        OnBeginDragCallback?.Invoke(eventData);
    }

    public void OnDrag(PointerEventData eventData)
    {
        OnDragCallback?.Invoke(eventData);
    }
}