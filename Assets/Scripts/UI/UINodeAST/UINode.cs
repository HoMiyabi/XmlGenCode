using UnityEngine;
using UnityEngine.EventSystems;

[RequireComponent(typeof(CanvasGroup))]
public abstract class UINode : MonoBehaviour, IDragHandler, IBeginDragHandler, IEndDragHandler
{
    public UIMainPanel main;

    public RectTransform RectTransform { get; private set; }

    private Vector2 prevMousePosLS;

    protected virtual void Awake()
    {
        RectTransform = (RectTransform)transform;
    }

    public void OnDrag(PointerEventData eventData)
    {
        if (eventData.button != PointerEventData.InputButton.Left) return;
        
        
        if (RectTransformUtility.ScreenPointToLocalPointInRectangle((RectTransform)transform.parent,
                eventData.position, eventData.pressEventCamera, out var mousePosLS))
        {
            RectTransform.anchoredPosition += mousePosLS - prevMousePosLS;
            prevMousePosLS = mousePosLS;
        }
    }

    public void OnBeginDrag(PointerEventData eventData)
    {
        if (eventData.button != PointerEventData.InputButton.Left) return;

        transform.SetParent(main.Top, true);

        RectTransformUtility.ScreenPointToLocalPointInRectangle((RectTransform)transform.parent,
            eventData.position, eventData.pressEventCamera, out prevMousePosLS);
    }

    public void OnEndDrag(PointerEventData eventData)
    {
        if (eventData.button != PointerEventData.InputButton.Left) return;
        
        transform.SetParent(main.UIBlockGraph.BlockRoot, true);
    }
}