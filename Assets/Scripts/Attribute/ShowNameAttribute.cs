using System;

[AttributeUsage(AttributeTargets.Class | AttributeTargets.Field)]
public class ShowNameAttribute : Attribute
{
    public string Name { get; set; }
    
    public ShowNameAttribute()
    {
    }
    
    public ShowNameAttribute(string name)
    {
        Name = name;
    }
}