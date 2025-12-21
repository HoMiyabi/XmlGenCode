using System;

[AttributeUsage(AttributeTargets.Field)]
public class NodeUIElementOrder : Attribute
{
    public int Order { get; set; }
    
    public NodeUIElementOrder(int order)
    {
        Order = order;
    }
}