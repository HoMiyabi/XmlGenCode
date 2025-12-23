using System;
using KiraraDirectBinder;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;

public class UIFileItem : UIBaseView, IPointerClickHandler
{
    public Graphic targetGraphic;
    public Color normalColor = Color.white;
    public Color selectedColor = Color.white;
    
    [NonSerialized] public TMPro.TextMeshProUGUI Text;
    
    private bool isSelected;
    
    public Action<PointerEventData> OnClick { get; set; }

    protected override void Awake()
    {
        base.Awake();
        SetSelected(false);
    }

    public void Set(string text, Action<PointerEventData> onClick)
    {
        Text.text = text;
        OnClick = onClick;
    }

    public void SetText(string text)
    {
        Text.text = text;
    }
    
    public void OnPointerClick(PointerEventData eventData)
    {
        OnClick?.Invoke(eventData);
    }
    
    public void SetSelected(bool value)
    {
        isSelected = value;
        targetGraphic.color = value ? selectedColor : normalColor;
    }
}