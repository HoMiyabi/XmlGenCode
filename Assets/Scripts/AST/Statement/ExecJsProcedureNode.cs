using System.Runtime.Serialization;

[DataContract(IsReference = true)]
public class ExecJsProcedureNode : StatementNode
{
    [DataMember]
    public string procedureName;
    
    public override void ToCode(CodeBuilder cb)
    {
        cb.AppendWithIndent($"{procedureName}();");
    }
}