using System;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;

[DisallowMultipleComponent]
public class UITabButton : MonoBehaviour, IPointerEnterHandler, IPointerExitHandler, IPointerClickHandler
{
    public Graphic targetGraphic;
    public Color normalColor = Color.white;
    public Color hoverColor = Color.white;
    public Color selectedColor = Color.white;
    public UITabGroup group;

    public event Action<bool> OnValueChanged;

    public enum EState
    {
        Normal,
        Hover,
        Selected
    }

    public EState State { get; private set; }

    private bool isPointerInside;

    public void OnPointerClick(PointerEventData eventData)
    {
        if (group)
        {
            group.OnTabClick(this);
        }
        else
        {
            if (State != EState.Selected)
            {
                ChangeState(EState.Selected);
            }
            else
            {
                ChangeState(EState.Hover);
            }
        }
    }

    public void OnPointerEnter(PointerEventData eventData)
    {
        isPointerInside = true;
        if (State == EState.Normal)
        {
            ChangeState(EState.Hover);
        }
    }

    public void OnPointerExit(PointerEventData eventData)
    {
        isPointerInside = false;
        if (State == EState.Hover)
        {
            ChangeState(EState.Normal);
        }
    }

    private void Reset()
    {
        targetGraphic = GetComponent<Graphic>();
    }

    private void Start()
    {
        if (group)
        {
            group.Tabs.Add(this);
        }
        ChangeState(EState.Normal);
    }

    private void OnValidate()
    {
        if (targetGraphic)
        {
            targetGraphic.color = normalColor;
        }
    }

    public void ChangeState(EState newState, bool notify = true)
    {
        if (State == newState) return;

        if (notify && (State == EState.Selected || newState == EState.Selected))
        {
            OnValueChanged?.Invoke(newState == EState.Selected);
        }
        State = newState;

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
            ChangeState(EState.Selected, notify);
        }
        else
        {
            if (isPointerInside)
            {
                ChangeState(EState.Hover, notify);
            }
            else
            {
                ChangeState(EState.Normal, notify);
            }
        }
    }
}