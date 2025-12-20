using System.Collections.Generic;

public class AIModelConfig
{
    public string BaseDomain { get; set; }
    public string ApiKey { get; set; }
    public string Model { get; set; }
    public List<string> SystemPrompt { get; set; }
}