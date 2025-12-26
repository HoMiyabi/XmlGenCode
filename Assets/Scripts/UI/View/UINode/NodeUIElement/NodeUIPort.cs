using UnityEngine.EventSystems;

public abstract class NodeUIPort : NodeUIElement
{
    public UIPortPoint PortPoint;
    private UIConnectionLine _connection;
    public UIConnectionLine Connection
    {
        get => _connection;
        set
        {
            if (_connection != value)
            {
                _connection = value;
                OnConnectionChanged();
            }
        }
    }

    public bool IsConnected => Connection != null;

    public BaseNodeUI OtherNodeUI
    {
        get
        {
            if (Connection == null) return null;
            var otherPort = Connection.StartPort == this ? Connection.EndPort : Connection.StartPort;
            return otherPort?.BaseNodeUI;
        }
    }

    protected virtual void OnConnectionChanged()
    {
        PortPoint.SetConnected(IsConnected);
    }

    protected override void Start()
    {
        base.Start();
        PortPoint.OnPointerClickEvent += OnPointerClick;
        PortPoint.SetConnected(IsConnected);
    }

    protected override void OnDestroy()
    {
        base.OnDestroy();
        if (Connection != null)
        {
            if (Connection.gameObject != null)
            {
                Destroy(Connection.gameObject);
            }

            var otherPort = Connection.StartPort == this ? Connection.EndPort : Connection.StartPort;
            if (otherPort != null)
            {
                otherPort.Connection = null;
            }
        }
    }
    
    private void OnPointerClick(PointerEventData eventData)
    {
        if (eventData.button == PointerEventData.InputButton.Left)
        {
            BaseNodeUI.NodeGraph.StartConnect(this);
        }
    }
}