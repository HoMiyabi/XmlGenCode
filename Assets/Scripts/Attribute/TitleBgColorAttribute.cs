using System;
using UnityEngine;

[AttributeUsage(AttributeTargets.Class)]
public class TitleBgColorAttribute : Attribute
{
    public Color LeftColor { get; set; }
    public Color RightColor { get; set; }
    
    public TitleBgColorAttribute(byte leftR, byte leftG, byte leftB,
        byte rightR, byte rightG, byte rightB)
    {
        LeftColor = new Color32(leftR, leftG, leftB, 255);
        RightColor = new Color32(rightR, rightG, rightB, 255);
    }
}