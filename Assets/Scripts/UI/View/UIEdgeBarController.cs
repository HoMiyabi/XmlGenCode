using UnityEngine;

public class UIEdgeBarController : UIBaseView
{
    public UIEdgeBar LeftEdgeBar;
    public UIEdgeBar MidEdgeBar;
    public UIEdgeBar RightEdgeBar;

    public UIBasePanel LeftPanel;
    public UIBasePanel MidPanel;
    public UIBasePanel RightPanel;

    public float LeftMinWidth;
    
    public float MidMinWidth;
    public float MidMinHeight;
    
    public float RightMinWidth;
    
    private float LeftWidth { get; set; }
    private float MidHeight { get; set; }
    private float RightWidth { get; set; }
    private float ContainerWidth => RectTransform.rect.width;
    private float ContainerHeight => RectTransform.rect.height;

    protected override void Start()
    {
        base.Start();
        LeftWidth = LeftPanel.RectTransform.rect.width;
        MidHeight = MidPanel.RectTransform.rect.height;
        RightWidth = RightPanel.RectTransform.rect.width;
        
        LeftEdgeBar.UpdateDrag = delta =>
        {
            LeftWidth = Mathf.Clamp(LeftWidth + delta.x, LeftMinWidth, ContainerWidth - RightWidth - MidMinWidth);
            UpdatePanels();
        };
        
        MidEdgeBar.UpdateDrag = delta =>
        {
            MidHeight = Mathf.Clamp(MidHeight + delta.y, MidMinHeight, ContainerHeight);
            UpdatePanels();
        };
        
        RightEdgeBar.UpdateDrag = delta =>
        {
            RightWidth = Mathf.Clamp(RightWidth - delta.x, RightMinWidth, ContainerWidth - LeftWidth - MidMinWidth);
            UpdatePanels();
        };
        
        LeftPanel.OnShow += UpdatePanels;
        LeftPanel.OnHide += UpdatePanels;
        
        RightPanel.OnShow += UpdatePanels;
        RightPanel.OnHide += UpdatePanels;
    }

    private void UpdatePanels()
    {
        float leftShowWidth = LeftPanel.IsShow ? LeftWidth : 0;
        float rightShowWidth = RightPanel.IsShow ? RightWidth : 0;
            
        LeftPanel.RectTransform.sizeDelta = new Vector2(leftShowWidth, ContainerHeight);
        
        MidPanel.RectTransform.sizeDelta = new Vector2(ContainerWidth - leftShowWidth - rightShowWidth, MidHeight);
        MidPanel.RectTransform.anchoredPosition = new Vector2(leftShowWidth, 0);
        
        RightPanel.RectTransform.sizeDelta = new Vector2(rightShowWidth, ContainerHeight);
        RightPanel.RectTransform.anchoredPosition = new Vector2(ContainerWidth - rightShowWidth, 0);
    }
}