using TMPro;
using UnityEngine;
using UnityEngine.UI;

public class UIExpressionField : MonoBehaviour
{
    [SerializeField] public TMP_InputField ValueInput;
    [SerializeField] private Image DropTipImage;
    [SerializeField] public UISocket socket;
    [SerializeField] private Color tipColor;

    private void Start()
    {
        socket.canConnectBaseType = typeof(UIExpressionBlock);
        socket.OnSetConnectTip += OnSetConnectTip;
        socket.OnClearConnectTip += OnClearConnectTip;
        socket.OnConnect += OnConnect;
        socket.OnDisconnect += OnDisconnect;

        OnClearConnectTip();
        ValueInput.onValueChanged.AddListener(_ =>
        {
            LayoutRebuilder.MarkLayoutForRebuild(transform as RectTransform);
        });
    }

    private void OnDisconnect()
    {
        ValueInput.gameObject.SetActive(true);
    }

    private void OnConnect()
    {
        ValueInput.gameObject.SetActive(false);
    }

    private void OnSetConnectTip()
    {
        DropTipImage.color = tipColor;
    }

    private void OnClearConnectTip()
    {
        DropTipImage.color = Color.clear;
    }

    public ExpressionBlock GetAST()
    {
        if (socket.UIBaseBlock)
        {
            return (ExpressionBlock)socket.GetAST();
        }
        return new ValueBlock
        {
            value = ValueInput.text != "" ? ValueInput.text : "0"
        };
    }
}