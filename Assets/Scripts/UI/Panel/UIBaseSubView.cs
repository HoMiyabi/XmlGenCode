using KiraraDirectBinder;
using UnityEngine;

public abstract class UIBaseSubView : MonoBehaviour
{
    protected virtual void Awake()
    {
        this.BindUI();
    }
}