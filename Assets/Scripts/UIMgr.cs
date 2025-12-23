using System;
using KiraraDirectBinder;
using Newtonsoft.Json;
using UnityEngine;
using Object = UnityEngine.Object;

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

    public T AddTop<T>()
    {
        var prefab = GetPrefab(typeof(T).Name);
        var go = Instantiate(prefab, topLayer);
        return go.GetComponent<T>();
    }
    

    public T Add<T>(Transform parent) where T : MonoBehaviour
    {
        return Add<T>(typeof(T).Name, parent);
    }
    
    public T Add<T>(string prefabName, Transform parent) where T : MonoBehaviour
    {
        var prefab = GetPrefab(prefabName);
        var go = Instantiate(prefab, parent);
        var com = go.GetComponent<T>();
        com.BindUI();
        return com;
    }
    
    public Object Add(Type type, Transform parent)
    {
        var prefab = GetPrefab(type.Name);
        var go = Instantiate(prefab, parent);
        return go.GetComponent(type);
    }

    public Transform Add(string prefabName, Transform parent)
    {
        var prefab = GetPrefab(prefabName);
        var go = Instantiate(prefab, parent);
        return go.transform;
    }

    private static GameObject GetPrefab(string prefabName)
    {
        string path = $"Prefab/{prefabName}";
        var prefab = Resources.Load<GameObject>(path);
        if (prefab == null)
        {
            Debug.LogError($"未找到资源, path: {path}");
        }
        return prefab;
    }
}