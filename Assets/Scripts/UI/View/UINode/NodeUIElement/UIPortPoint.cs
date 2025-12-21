using System;
using UnityEngine.EventSystems;

public class UIPortPoint : UIBaseView, IPointerClickHandler
{
    public event Action<PointerEventData> OnPointerClickEvent;
    
    public void OnPointerClick(PointerEventData eventData)
    {
        OnPointerClickEvent?.Invoke(eventData);
    }
}