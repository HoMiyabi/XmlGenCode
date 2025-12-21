using System;

[AttributeUsage(AttributeTargets.Class)]
public class ASTModelAttribute : Attribute
{
    public Type Type { get; set; }
    
    public ASTModelAttribute(Type type)
    {
        Type = type;
    }
}