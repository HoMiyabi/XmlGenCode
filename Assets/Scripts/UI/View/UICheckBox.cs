using System;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;

[DisallowMultipleComponent]
public class UICheckBox : UIBaseView, IPointerEnterHandler, IPointerExitHandler, IPointerClickHandler
{
    public Graphic targetGraphic;
    public Color normalColor = Color.white;
    public Color hoverColor = Color.white;
    public Color selectedColor = Color.white;

    public event Action<bool> OnValueChanged;
    
    public bool Value { get; private set; }

    public enum EState
    {
        Normal, // 默认
        Hover, // 悬停
        Selected // 选中
    }

    private EState State { get; set; }
    
    private bool isPointerInside;

    #region UI事件

    public void OnPointerClick(PointerEventData eventData)
    {
        if (State != EState.Selected)
        {
            SetState(EState.Selected);
        }
        else
        {
            SetState(EState.Hover);
        }
    }

    public void OnPointerEnter(PointerEventData eventData)
    {
        isPointerInside = true;
        if (State == EState.Normal)
        {
            SetState(EState.Hover);
        }
    }

    public void OnPointerExit(PointerEventData eventData)
    {
        isPointerInside = false;
        if (State == EState.Hover)
        {
            SetState(EState.Normal);
        }
    }

    #endregion

    protected override void Awake()
    {
        base.Awake();
        SetState(EState.Normal);
    }
    
    private void Reset()
    {
        targetGraphic = GetComponent<Graphic>();
    }

    private void OnValidate()
    {
        if (targetGraphic)
        {
            targetGraphic.color = normalColor;
        }
    }

    public void SetState(EState newState, bool notify = true)
    {
        if (State == newState) return;
        
        State = newState;
        
        bool oldValue = Value;
        Value = State == EState.Selected;

        if (notify && (oldValue != Value))
        {
            OnValueChanged?.Invoke(Value);
        }

        if (targetGraphic)
        {
            switch (newState)
            {
                case EState.Normal:
                    targetGraphic.color = normalColor;
                    break;
                case EState.Hover:
                    targetGraphic.color = hoverColor;
                    break;
                case EState.Selected:
                    targetGraphic.color = selectedColor;
                    break;
            }
        }
    }

    public void SetValue(bool value, bool notify = true)
    {
        if (value)
        {
            SetState(EState.Selected, notify);
        }
        else
        {
            if (isPointerInside)
            {
                SetState(EState.Hover, notify);
            }
            else
            {
                SetState(EState.Normal, notify);
            }
        }
    }
}