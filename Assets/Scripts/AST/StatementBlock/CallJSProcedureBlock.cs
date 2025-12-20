public class CallJSProcedureBlock : StatementBlock
{
    public string procedureName;
        
    public override void ToCode(CodeBuilder cb)
    {
        cb.AppendWithIndent($"{procedureName}();");
    }

    }