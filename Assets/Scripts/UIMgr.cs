using UnityEngine;

public class UIMgr : UnitySingleton<UIMgr>
{
    [SerializeField] private Canvas canvas;
    
    public T OpenPanel<T>() where T : UIBasePanel
    {
        var panel = Instantiate(Resources.Load<T>("Prefab/Panel/" + typeof(T).Name), canvas.transform);
        panel.Show();
        return panel;
    }

    public T AddUI<T>(string _name, Transform parent)
    {
        var prefab = AssetMgr.Instance.GetPrefab(_name);
        return Instantiate(prefab, parent).GetComponent<T>();
    }
}