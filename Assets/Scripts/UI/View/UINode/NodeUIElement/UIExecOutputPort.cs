using System;
using System.Collections.Generic;
using System.Linq;

public class UIExecOutputPort : NodeUIPort, IOutput
{
    [NonSerialized] public TMPro.TextMeshProUGUI PortText;
    
    public StatementNode GetModel(Dictionary<BaseNodeUI, BaseNode> uiToModel)
    {
        if (Connection != null)
        {
            var otherNodeUI = OtherNodeUI;
            if (otherNodeUI != null && uiToModel.TryGetValue(otherNodeUI, out var model))
            {
                return model as StatementNode;
            }
        }
        return null;
    }

    public void Connect(Dictionary<BaseNode, BaseNodeUI> modelToUI, StatementNode targetModel)
    {
        if (targetModel != null && modelToUI.TryGetValue(targetModel, out var targetUI))
        {
            if (targetUI is StatementNodeUI statementNodeUI)
            {
                var inputPort = statementNodeUI.prev;
                if (inputPort != null)
                {
                    BaseNodeUI.NodeGraph.ConnectPorts(this, inputPort);
                }
            }
        }
    }

    public override void SetText(string text)
    {
        PortText.text = text;
    }
}
