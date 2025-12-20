using System;
using System.Collections.Generic;
using UnityEngine;

public class UITabGroup : MonoBehaviour
{
    public bool allowSwitchOff = false;
    public List<UITabButton> Tabs { get; private set; }
    public UITabButton Selected { get; private set; }

    public event Action<int> OnSelectionChanged;

    private void Awake()
    {
        Tabs = new List<UITabButton>();
    }

    private void ValidateTabInGroup(UITabButton tab)
    {
        if (tab == null || !Tabs.Contains(tab))
        {
            throw new ArgumentException($"Tab {tab} is not part of TabGroup {this}");
        }
    }

    public void OnTabClick(UITabButton tab)
    {
        if (Selected == tab)
        {
            if (allowSwitchOff)
            {
                tab.ChangeState(UITabButton.EState.Hover);
                Selected = null;
            }
        }
        else
        {
            Selected?.ChangeState(UITabButton.EState.Normal);
            Selected = tab;
            tab.ChangeState(UITabButton.EState.Selected);
        }
    }
}