using KiraraDirectBinder;
using UnityEngine;

public abstract class UIBaseView : MonoBehaviour
{
    public RectTransform RectTransform { get; private set; }
    
    protected virtual void Awake()
    {
        this.BindUI();
        RectTransform = (RectTransform)transform;
    }
    
    protected virtual void Start()
    {
    }
}