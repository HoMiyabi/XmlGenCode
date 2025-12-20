using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;

public abstract class UIBaseNode : UIBaseView, IDragHandler, IBeginDragHandler, IEndDragHandler
{
    public UIMainPanel main;

    private readonly Vector3[] corners = new Vector3[4];
    private readonly List<RaycastResult> results = new();
    private UISocket connectedSocket;

    private UISocket onDragConnectableSocket;

    protected readonly List<UISocket> ignoreSockets = new();

    private Vector2 prevMousePosLS;

    public abstract BaseNode ToAST();

    protected virtual void OnAddToGraph()
    {
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

        if (onDragConnectableSocket)
        {
            onDragConnectableSocket.ClearConnectTip();
        }

        onDragConnectableSocket = GetConnectableSocket();
        if (onDragConnectableSocket)
        {
            onDragConnectableSocket.SetConnectTip();
        }
    }

    public void OnBeginDrag(PointerEventData eventData)
    {
        if (eventData.button != PointerEventData.InputButton.Left) return;

        if (connectedSocket)
        {
            connectedSocket.Disconnect(this);
            connectedSocket = null;
        }

        RectTransformUtility.ScreenPointToLocalPointInRectangle((RectTransform)transform.parent,
            eventData.position, eventData.pressEventCamera, out prevMousePosLS);
    }

    public void OnEndDrag(PointerEventData eventData)
    {
        if (eventData.button != PointerEventData.InputButton.Left) return;

        if (onDragConnectableSocket)
        {
            onDragConnectableSocket.ClearConnectTip();
        }

        if (!connectedSocket && onDragConnectableSocket)
        {
            onDragConnectableSocket.Connect(this);
            connectedSocket = onDragConnectableSocket;
        }
    }

    private UISocket GetConnectableSocket()
    {
        RectTransform.GetWorldCorners(corners);
        var leftTopWS = corners[1];
        var leftTopSS = RectTransformUtility.WorldToScreenPoint(null, leftTopWS);

        var myEventData = new PointerEventData(EventSystem.current);
        myEventData.position = leftTopSS;
        EventSystem.current.RaycastAll(myEventData, results);

        foreach (var result in results)
        {
            if (result.gameObject.TryGetComponent(out UISocket socket) &&
                !ignoreSockets.Contains(socket) &&
                socket.CanConnect(GetType()))
            {
                return socket;
            }
        }
        return null;
    }
}