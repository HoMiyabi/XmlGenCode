using System;
using System.Collections.Generic;
using System.Linq;
using UnityEngine.UI;

public class UIExprInputPort : NodeUIPort, IInput
{
    [NonSerialized] public TMPro.TextMeshProUGUI PortText;
    [NonSerialized] public TMPro.TMP_InputField  Input;
    
    protected override void Start()
    {
        base.Start();
        Input.gameObject.SetActive(Connection == null);
        Input.onValueChanged.AddListener(_ => LayoutRebuilder.MarkLayoutForRebuild(RectTransform));
    }
    
    public ExprNode GetModel(Dictionary<BaseNodeUI, BaseNode> uiToModel)
    {
        if (Connection != null)
        {
            var otherNodeUI = OtherNodeUI;
            if (otherNodeUI != null && uiToModel.TryGetValue(otherNodeUI, out var model))
            {
                return model as ExprNode;
            }
        }
        else if (Input != null)
        {
            return new ValueNode { value = Input.text };
        }
        return null;
    }

    public void Connect(Dictionary<BaseNode, BaseNodeUI> modelToUI, ExprNode targetModel)
    {
        if (targetModel is ValueNode valueNode)
        {
            if (Input != null)
            {
                Input.text = valueNode.value;
            }
        }
        else if (targetModel != null && modelToUI.TryGetValue(targetModel, out var targetUI))
        {
            if (targetUI is ExprNodeUI exprNodeUI)
            {
                var outputPort = exprNodeUI.result;
                if (outputPort != null)
                {
                    BaseNodeUI.NodeGraph.ConnectPorts(outputPort, this);
                }
            }
        }
    }

    public override void SetText(string text)
    {
        PortText.text = text;
    }

    protected override void OnConnectionChanged()
    {
        base.OnConnectionChanged();
        if (Input != null)
        {
            Input.gameObject.SetActive(Connection == null);
            LayoutRebuilder.ForceRebuildLayoutImmediate(RectTransform);
        }
    }
}
