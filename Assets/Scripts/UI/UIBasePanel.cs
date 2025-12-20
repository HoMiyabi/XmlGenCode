using System;

public abstract class UIBasePanel : UIBaseView
{
    public event Action OnShow;
    public event Action OnHide;
    public bool IsShow => gameObject.activeSelf;

    public void Show()
    {
        gameObject.SetActive(true);
        OnShow?.Invoke();
    }

    public void Hide()
    {
        gameObject.SetActive(false);
        OnHide?.Invoke();
    }

    public void SetShowHide(bool show)
    {
        if (show)
        {
            Show();
        }
        else
        {
            Hide();
        }
    }

    public void Close()
    {
        Destroy(gameObject);
    }
}