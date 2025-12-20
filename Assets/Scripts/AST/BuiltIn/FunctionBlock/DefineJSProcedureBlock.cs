public class DefineJSProcedureBlock : FunctionBlock
{
    public string ProcedureName { get; set; }
    public string Code { get; set; }

    public override void ToCode(CodeBuilder cb)
    {
        cb.AppendWithIndent($"function {ProcedureName}() {{");
        cb.AppendLine();
        cb.PushIndent();
    
        // 使用新方法处理多行代码
        cb.AppendMultilineWithIndent(Code);
    
        // 如果代码不为空且不以换行符结尾，则添加换行
        if (!string.IsNullOrEmpty(Code) && !Code.EndsWith("\n") && !Code.EndsWith("\r\n"))
        {
            cb.AppendLine();
        }
    
        cb.PopIndent();
        cb.AppendWithIndent("}");
        cb.AppendLine();
    }

    }