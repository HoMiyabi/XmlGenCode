using System;
using UnityEngine.EventSystems;

public class UIPortPoint : UIBaseView, IPointerClickHandler
{
    [NonSerialized] public UnityEngine.RectTransform DisconnectPointView;
    [NonSerialized] public UnityEngine.RectTransform ConnectPointView;
    
    public event Action<PointerEventData> OnPointerClickEvent;
    
    public void OnPointerClick(PointerEventData eventData)
    {
        OnPointerClickEvent?.Invoke(eventData);
    }

    public void SetConnected(bool isConnected)
    {
        if (isConnected)
        {
            DisconnectPointView.gameObject.SetActive(false);
            ConnectPointView.gameObject.SetActive(true);
        }
        else
        {
            DisconnectPointView.gameObject.SetActive(true);
            ConnectPointView.gameObject.SetActive(false);
        }
    }
}