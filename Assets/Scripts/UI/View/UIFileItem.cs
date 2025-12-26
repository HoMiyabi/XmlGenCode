using System;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;

public class UIFileItem : UIBaseView, IPointerClickHandler
{
    public Graphic targetGraphic;
    public Color normalColor = Color.white;
    public Color selectedColor = Color.white;
    
    [NonSerialized] public TMPro.TMP_InputField    Input;
    [NonSerialized] public UnityEngine.CanvasGroup InputCanvasGroup;
    
    private bool isSelected;
    private Action<string> _onCommit;
    
    public Action<PointerEventData> OnClick { get; set; }

    protected override void Awake()
    {
        base.Awake();
        SetSelected(false);
        SetInputInteractable(false);
        
        Input.onEndEdit.AddListener(newName =>
        {
            _onCommit?.Invoke(newName);
            // 延迟到帧末尾执行，避免在 EventSystem 选择逻辑中同步修改 interactable 导致冲突
            StartCoroutine(DelayDisableInput());
        });

        Input.onValueChanged.AddListener(_ =>
        {
            LayoutRebuilder.ForceRebuildLayoutImmediate(RectTransform);
        });
    }

    public void Set(string text, Action<PointerEventData> onClick, Action<string> onCommit)
    {
        Input.text = text;
        OnClick = onClick;
        _onCommit = onCommit;
    }

    public void SetText(string text)
    {
        Input.text = text;
    }

    public void StartEdit()
    {
        SetInputInteractable(true);
        Input.ActivateInputField();
        Input.caretPosition = Input.text.Length;
    }

    private void SetInputInteractable(bool value)
    {
        Input.interactable = value;
        InputCanvasGroup.blocksRaycasts = value;
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

    private System.Collections.IEnumerator DelayDisableInput()
    {
        yield return null;
        SetInputInteractable(false);
        Input.DeactivateInputField();
    }
}