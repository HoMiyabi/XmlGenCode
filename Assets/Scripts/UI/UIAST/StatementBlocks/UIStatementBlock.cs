using UnityEngine;

public abstract class UIStatementBlock : UIBaseBlock
{
    [SerializeField] public UISocket nextSocket;

    protected virtual void Start()
    {
        nextSocket.canConnectBaseType = typeof(UIStatementBlock);
        ignoreSockets.Add(nextSocket);
        // nextSocket.OnSetConnectTip += OnSetConnectTip;
        // nextSocket.OnClearConnectTip += OnClearConnectTip;
        // nextSocket.OnConnect += OnConnect;
        // nextSocket.OnDisconnect += OnDisconnect;
    }

    /// <summary>
    /// 获取nextSocket（反射方式）
    /// </summary>
    public UISocket NextSocket => nextSocket;
}