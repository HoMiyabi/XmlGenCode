using System;

public class UIAddNodeMenuItem : UIBaseView
{
    [NonSerialized] public UnityEngine.UI.Button Btn;
    [NonSerialized] public TMPro.TextMeshProUGUI Text;

    public void Set(string text)
    {
        Text.text = text;
    }
}