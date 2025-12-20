public abstract class UIWindowPanel : UIBasePanel
{
    public UITitleBar TitleBar;
    public string Title;

    protected override void Start()
    {
        base.Start();
        if (TitleBar)
        {
            TitleBar.SetPanel(this);
            TitleBar.TitleText.text = Title;
        }
    }
}