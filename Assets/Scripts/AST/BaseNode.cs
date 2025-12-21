using System.Runtime.Serialization;
using UnityEngine;

[DataContract(IsReference = true)]
public abstract class BaseNode
{
    [DataMember]
    public Vector2 position;
    
    public abstract void ToCode(CodeBuilder cb);
}