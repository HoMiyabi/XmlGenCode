using Puerts;
using UnityEngine;

public class PuerTSRunner
{
    private string setUpStr;
    private bool initialized;

    public void Initialize()
    {
        if (initialized) return;
        initialized = true;
        
        var asset = Resources.Load<TextAsset>("PuerTSSetUp.js");
        setUpStr = asset.text;
    }
    
    public void Run(string code)
    {
        Initialize();
        
        var env = new JsEnv();
        env.Eval(setUpStr);
        env.Eval(code);
        env.Dispose();
    }
}