public abstract class NodeUIElement : UIBaseView
{
    public BaseNodeUI BaseNodeUI { get; set; }
    
    public abstract void SetText(string text);
}