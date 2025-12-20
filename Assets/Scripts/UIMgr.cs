using UnityEngine;

public class UIMgr : UnitySingleton<UIMgr>
{
    [SerializeField] private RectTransform normalLayer;
    [SerializeField] private RectTransform topLayer;
    
    public T OpenPanel<T>() where T : UIBasePanel
    {
        var panel = Instantiate(Resources.Load<T>("Prefab/Panel/" + typeof(T).Name), normalLayer.transform);
        panel.Show();
        return panel;
    }

    public T AddTop<T>(GameObject prefab)
    {
        return Instantiate(prefab, topLayer).GetComponent<T>();
    }

    public T Add<T>(GameObject prefab, Transform parent)
    {
        return Instantiate(prefab, parent).GetComponent<T>();
    }
}