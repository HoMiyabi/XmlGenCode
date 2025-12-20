using System;
using UnityEngine;
using UnityEngine.EventSystems;

public class UIEdgeBar : MonoBehaviour, IBeginDragHandler, IDragHandler
{
    public RectTransform Space;
    public Action<Vector2> UpdateDrag;

    private Vector2 prevMousePosLS;

    public void OnBeginDrag(PointerEventData eventData)
    {
        if (eventData.button != PointerEventData.InputButton.Left) return;

        RectTransformUtility.ScreenPointToLocalPointInRectangle(Space,
            eventData.position, eventData.pressEventCamera, out prevMousePosLS);
    }

    public void OnDrag(PointerEventData eventData)
    {
        if (eventData.button != PointerEventData.InputButton.Left) return;

        RectTransformUtility.ScreenPointToLocalPointInRectangle(Space,
            eventData.position, eventData.pressEventCamera, out var mousePosLS);
        var delta = mousePosLS - prevMousePosLS;
        prevMousePosLS = mousePosLS;

        UpdateDrag?.Invoke(delta);
    }
}