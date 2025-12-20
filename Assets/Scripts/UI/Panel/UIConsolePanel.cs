using UnityEngine;
using UnityEngine.UI;

public class UIConsolePanel : UIBasePanel
{
    public RectTransform LogRoot;
    public GameObject LogItemPrefab;
    public ScrollRect ScrollRect;

    protected override void Start()
    {
        base.Start();
        TitleBar.TitleText.text = "控制台";

        foreach (string log in PuerTSLogMgr.Instance.Logs)
        {
            AddLog(log);
        }
        PuerTSLogMgr.Instance.OnLogAdd += AddLog;
        PuerTSLogMgr.Instance.OnLogClear += ClearLogs;
    }

    private void OnDestroy()
    {
        PuerTSLogMgr.Instance.OnLogAdd -= AddLog;
        PuerTSLogMgr.Instance.OnLogClear -= ClearLogs;
    }

    private void AddLog(string log)
    {
        var logItem = Instantiate(LogItemPrefab, LogRoot).GetComponent<UILogItem>();
        logItem.Text.text = log;
        LayoutRebuilder.ForceRebuildLayoutImmediate(LogRoot);
        ScrollRect.verticalNormalizedPosition = 0;
    }

    private void ClearLogs()
    {
        foreach (Transform child in LogRoot)
        {
            Destroy(child.gameObject);
        }
    }
}