using System;
using System.Collections.Generic;
using UnityEngine;

public class PuerTSLogMgr : UnitySingleton<PuerTSLogMgr>
{
    public List<string> Logs { get; } = new();
    public event Action<string> OnLogAdd;
    public event Action OnLogClear;

    public void ClearLogs()
    {
        Logs.Clear();
        OnLogClear?.Invoke();
    }

    protected override void Awake()
    {
        base.Awake();
        Application.logMessageReceived += OnLog;
    }

    private void OnLog(string logString, string stackTrace, LogType type)
    {
        const string prefix = "[PuerTS]";
        if (logString.StartsWith(prefix))
        {
            logString = logString[prefix.Length..];
            Logs.Add(logString);
            OnLogAdd?.Invoke(logString);
        }
    }

    private void OnDestroy()
    {
        Application.logMessageReceived -= OnLog;
    }
}