using System;
using UnityEngine;
using UnityEngine.UI;

public class UIConsolePanel : UIWindowPanel
{
    [NonSerialized] public UnityEngine.RectTransform LogRoot;
    [NonSerialized] public UnityEngine.UI.ScrollRect LogScroll;

    protected override void Start()
    {
        base.Start();

        foreach (string log in PuerTSLogMgr.Instance.Logs)
        {
            AddLog(log);
        }
        PuerTSLogMgr.Instance.OnLogAdd += AddLog;
        PuerTSLogMgr.Instance.OnLogClear += ClearLogs;
    }

    protected override void OnDestroy()
    {
        base.OnDestroy();
        PuerTSLogMgr.Instance.OnLogAdd -= AddLog;
        PuerTSLogMgr.Instance.OnLogClear -= ClearLogs;
    }

    private void AddLog(string log)
    {
        var logItem = UIMgr.Instance.Add<UILogItem>(LogRoot);
        logItem.Text.text = log;
        LayoutRebuilder.ForceRebuildLayoutImmediate(LogRoot);
        LogScroll.verticalNormalizedPosition = 0;
    }

    private void ClearLogs()
    {
        foreach (Transform child in LogRoot)
        {
            Destroy(child.gameObject);
        }
    }
}