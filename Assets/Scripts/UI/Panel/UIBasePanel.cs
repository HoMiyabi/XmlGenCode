using System;
using KiraraDirectBinder;
using UnityEngine;

public abstract class UIBasePanel : MonoBehaviour
{
    public UITitleBar TitleBar;

    public RectTransform RectTransform { get; private set; }

    public event Action OnOpen;
    public event Action OnClose;

    protected virtual void Awake()
    {
        this.BindUI();
        RectTransform = (RectTransform)transform;
    }

    protected virtual void Start()
    {
        TitleBar?.SetPanel(this);
    }

    public void Open()
    {
        gameObject.SetActive(true);
        OnOpen?.Invoke();
    }

    public void Close()
    {
        gameObject.SetActive(false);
        OnClose?.Invoke();
    }
}