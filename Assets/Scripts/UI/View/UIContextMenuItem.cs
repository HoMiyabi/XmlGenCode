using System;

public class UIContextMenuItem : UIBaseView
{
    [NonSerialized] public UnityEngine.UI.Button Btn;
    [NonSerialized] public TMPro.TextMeshProUGUI Text;

    public void Set(string text, Action callback)
    {
        Text.text = text;
        Btn.onClick.AddListener(() => callback?.Invoke());
    }
}