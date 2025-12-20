using System;
using UnityEngine;
using UnityEngine.UI;

public class UIContextMenuPanel : UIBasePanel
{
    [NonSerialized] public UnityEngine.UI.Button     BgBtn;
    [NonSerialized] public UnityEngine.RectTransform Box;
    [NonSerialized] public UnityEngine.RectTransform Content;

    public GameObject UIContextMenuItemPrefab;
    public Vector2    Offset        = new Vector2(0, 10);
    public float      BottomPadding = 10f;

    public float maxHeight = 600;

    protected override void Awake()
    {
        base.Awake();
        Content.DestroyChildren();
    }

    protected override void Start()
    {
        base.Start();
        BgBtn.onClick.AddListener(Close);
    }

    public void AddItem(string text, Action callback = null)
    {
        var item = UIMgr.Instance.Add<UIContextMenuItem>(UIContextMenuItemPrefab, Content);
        item.Set(text, Close + callback);
    }

    public void Finish(Vector2 screenPos, Camera cam)
    {
        // 强制刷新布局以获取正确的高度
        LayoutRebuilder.ForceRebuildLayoutImmediate(Content);
        Box.sizeDelta = new Vector2(Box.sizeDelta.x, Mathf.Min(maxHeight, LayoutUtility.GetPreferredHeight(Content)));

        // 将屏幕坐标转换为本地坐标
        if (RectTransformUtility.ScreenPointToLocalPointInRectangle(RectTransform, screenPos, cam, out var localPos))
        {
            Box.anchoredPosition = localPos + Offset;
        }

        // 越界检测
        Canvas.ForceUpdateCanvases();
        Vector3[] corners = new Vector3[4];
        Box.GetWorldCorners(corners);
        
        // 获取左下角在屏幕上的位置
        Vector2 screenBottomLeft = RectTransformUtility.WorldToScreenPoint(cam, corners[0]);

        if (screenBottomLeft.y < BottomPadding)
        {
            // 计算需要向上移动的屏幕像素
            float yOffsetScreen = BottomPadding - screenBottomLeft.y;

            // 将这个偏移转换到本地空间
            RectTransformUtility.ScreenPointToLocalPointInRectangle(RectTransform, screenBottomLeft + new Vector2(0, yOffsetScreen), cam, out var localTargetBottom);
            RectTransformUtility.ScreenPointToLocalPointInRectangle(RectTransform, screenBottomLeft, cam, out var localCurrentBottom);
            
            Box.anchoredPosition += new Vector2(0, localTargetBottom.y - localCurrentBottom.y);
        }
    }
}