using System;
using System.Text;
using Betalgo.Ranul.OpenAI.Contracts.Enums;
using Betalgo.Ranul.OpenAI.ObjectModels.RequestModels;

public class MyMessage : IDisposable
{
    public ChatCompletionRole Role { get; private set; }
    public string ContentStr { get; private set; }
    public StringBuilder ContentSb { get; private set; }
    private bool disposed = false;

    public MyMessage(ChatCompletionRole role, string contentStr)
    {
        Role = role;
        ContentStr = contentStr;
    }

    public MyMessage(ChatCompletionRole role, StringBuilder contentSb)
    {
        Role = role;
        ContentSb = contentSb;
    }

    public string Content => ContentStr ?? ContentSb?.ToString() ?? string.Empty;

    public ChatMessage GetChatMessage()
    {
        return new ChatMessage(Role, Content);
    }

    public void Flush()
    {
        if (ContentSb != null)
        {
            ContentStr = ContentSb.ToString();
            ContentSb.Clear();
            ContentSb = null;
        }
    }

    public void Dispose()
    {
        if (!disposed)
        {
            ContentSb?.Clear();
            ContentSb = null;
            disposed = true;
        }
    }
}