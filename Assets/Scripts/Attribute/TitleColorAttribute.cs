using System;
using UnityEngine;

[AttributeUsage(AttributeTargets.Class)]
public class TitleColorAttribute : Attribute
{
    public Color Color { get; set; }
    
    public TitleColorAttribute(Color color)
    {
        Color = color;
    }
}