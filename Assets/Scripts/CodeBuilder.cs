using System.Text;

public class CodeBuilder
{
    public int indentToSpace = 4;

    private readonly StringBuilder sb = new();
    private int indent;

    public void PushIndent()
    {
        indent++;
    }

    public void PopIndent()
    {
        indent--;
    }

    public void AppendWithIndent(string value)
    {
        sb.Append(' ', indent * indentToSpace);
        sb.Append(value);
    }

    // 新添加的方法：处理多行文本，为每一行添加缩进
    public void AppendMultilineWithIndent(string value)
    {
        if (string.IsNullOrEmpty(value))
            return;

        // 按换行符分割文本
        string[] lines = value.Split(new[] { '\r', '\n' }, System.StringSplitOptions.None);
            
        for (int i = 0; i < lines.Length; i++)
        {
            // 为每一行添加缩进
            sb.Append(' ', indent * indentToSpace);
            sb.Append(lines[i]);
                
            // 添加换行符，但最后一行除外
            if (i < lines.Length - 1)
            {
                sb.AppendLine();
            }
        }
    }

    public void Append(string value)
    {
        sb.Append(value);
    }

    public void AppendLine()
    {
        sb.AppendLine();
    }

    public override string ToString()
    {
        return sb.ToString();
    }
}