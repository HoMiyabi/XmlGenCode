using System;
using UnityEngine;

public class UIAddNodeMenuPanel : UIBasePanel
{
    [NonSerialized] public UnityEngine.UI.Button     BgBtn;
    [NonSerialized] public UnityEngine.RectTransform Box;
    [NonSerialized] public UnityEngine.RectTransform Content;

    public GameObject UIAddNodeMenuItemPrefab;

    protected override void Start()
    {
        base.Start();
        BgBtn.onClick.AddListener(Hide);

        foreach (var nodeInfo in NodeMgr.NodeTypes)
        {
            var go = Instantiate(UIAddNodeMenuItemPrefab, Content);
            var item = go.GetComponent<UIAddNodeMenuItem>();
            item.Set(nodeInfo.ShowName);
        }
    }
}