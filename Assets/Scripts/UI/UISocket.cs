using System;
using UnityEngine;

public class UISocket : UIBaseView
{
    [SerializeField] private Transform connectPlace;
    public UIBaseNode UIBaseNode { get; private set; }

    public Type canConnectBaseType;
    public event Action OnSetConnectTip;
    public event Action OnClearConnectTip;
    public event Action OnDisconnect;
    public event Action OnConnect;

    public bool CanConnect(Type type)
    {
        return UIBaseNode == null && (type == canConnectBaseType || type.IsSubclassOf(canConnectBaseType));
    }

    public void SetConnectTip()
    {
        if (UIBaseNode != null)
        {
            Debug.LogWarning("Can't connect");
            return;
        }
        OnSetConnectTip?.Invoke();
    }

    public void ClearConnectTip()
    {
        if (UIBaseNode != null)
        {
            Debug.LogWarning("Can't connect");
            return;
        }
        OnClearConnectTip?.Invoke();
    }

    public void Connect(UIBaseNode uiBaseNode)
    {
        if (UIBaseNode != null)
        {
            Debug.LogWarning("Can't connect");
            return;
        }
        UIBaseNode = uiBaseNode;

        // var fitter = ConnectedTrans.GetComponent<ContentSizeFitter>();
        // Destroy(fitter);

        UIBaseNode.transform.SetParent(connectPlace, false);
        OnConnect?.Invoke();
    }

    public void Disconnect(UIBaseNode uiBaseNode)
    {
        if (UIBaseNode == null || UIBaseNode != uiBaseNode)
        {
            Debug.LogWarning("Can't disconnect");
            return;
        }

        // var fitter = ConnectedTrans.gameObject.AddComponent<ContentSizeFitter>();
        // fitter.horizontalFit = ContentSizeFitter.FitMode.PreferredSize;
        // fitter.verticalFit = ContentSizeFitter.FitMode.PreferredSize;

        UIBaseNode = null;
        OnDisconnect?.Invoke();
    }

    public BaseNode GetAST()
    {
        return UIBaseNode?.GetComponent<UIBaseNode>().ToAST();
    }
}