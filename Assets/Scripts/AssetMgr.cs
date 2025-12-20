using System.Collections.Generic;
using UnityEngine;
using Object = UnityEngine.Object;

[System.Serializable]
public struct AssetItem
{
    public string name;
    public Object asset;
}

public class AssetMgr : UnitySingleton<AssetMgr>
{
    [SerializeField] private Object add;
    
    [SerializeField] private List<AssetItem> assets;
    private Dictionary<string, Object> assetDict;

    protected override void Awake()
    {
        base.Awake();
        assetDict = new Dictionary<string, Object>();
        if (assets != null)
        {
            foreach (var item in assets)
            {
                assetDict.Add(item.name, item.asset);
            }
        }
    }

    public Object Get(string name)
    {
        return assetDict[name];
    }
    
    public T Get<T>(string name) where T : Object
    {
        return (T)assetDict[name];
    }
    
    public GameObject GetPrefab(string name)
    {
        return Get<GameObject>(name);
    }

    private void OnValidate()
    {
        if (add != null)
        {
            assets.Add(new AssetItem()
            {
                name = add.name,
                asset = add
            });
            add = null;
        }
    }
}