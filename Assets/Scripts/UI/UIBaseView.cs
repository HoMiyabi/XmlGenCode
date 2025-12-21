using KiraraDirectBinder;
using UnityEngine;

public abstract class UIBaseView : MonoBehaviour
{
    public RectTransform RectTransform { get; private set; }
    
    private bool initialized;
    
    protected void Initialize()
    {
        if (initialized) return;
        initialized = true;
        this.BindUI();
        RectTransform = (RectTransform)transform;
    }
    
    protected virtual void Awake()
    {
        Initialize();
    }
    
    protected virtual void Start()
    {
    }
}