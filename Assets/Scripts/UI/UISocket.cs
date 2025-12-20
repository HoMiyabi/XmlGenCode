using System;
using UnityEngine;

public class UISocket : MonoBehaviour
{
    [SerializeField] private Transform connectPlace;
    public UIBaseBlock UIBaseBlock { get; private set; }

    public Type canConnectBaseType;
    public event Action OnSetConnectTip;
    public event Action OnClearConnectTip;
    public event Action OnDisconnect;
    public event Action OnConnect;

    public bool CanConnect(Type type)
    {
        return UIBaseBlock == null && (type == canConnectBaseType || type.IsSubclassOf(canConnectBaseType));
    }

    public void SetConnectTip()
    {
        if (UIBaseBlock != null)
        {
            Debug.LogWarning("Can't connect");
            return;
        }
        OnSetConnectTip?.Invoke();
    }

    public void ClearConnectTip()
    {
        if (UIBaseBlock != null)
        {
            Debug.LogWarning("Can't connect");
            return;
        }
        OnClearConnectTip?.Invoke();
    }

    public void Connect(UIBaseBlock uiBaseBlock)
    {
        if (UIBaseBlock != null)
        {
            Debug.LogWarning("Can't connect");
            return;
        }
        UIBaseBlock = uiBaseBlock;

        // var fitter = ConnectedTrans.GetComponent<ContentSizeFitter>();
        // Destroy(fitter);

        UIBaseBlock.transform.SetParent(connectPlace, false);
        OnConnect?.Invoke();
    }

    public void Disconnect(UIBaseBlock uiBaseBlock)
    {
        if (UIBaseBlock == null || UIBaseBlock != uiBaseBlock)
        {
            Debug.LogWarning("Can't disconnect");
            return;
        }

        UIBaseBlock.transform.SetParent(UIBaseBlock.main.UIBlockGraph.BlockRoot, true);

        // var fitter = ConnectedTrans.gameObject.AddComponent<ContentSizeFitter>();
        // fitter.horizontalFit = ContentSizeFitter.FitMode.PreferredSize;
        // fitter.verticalFit = ContentSizeFitter.FitMode.PreferredSize;

        UIBaseBlock = null;
        OnDisconnect?.Invoke();
    }

    public BaseBlock GetAST()
    {
        return UIBaseBlock?.GetComponent<UIBaseBlock>().ToAST();
    }
}