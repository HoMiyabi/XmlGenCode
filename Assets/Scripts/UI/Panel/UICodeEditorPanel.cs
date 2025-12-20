using TMPro;

public class UICodeEditorPanel : UIBasePanel
{
    public TMP_InputField CodeInput;

    protected override void Start()
    {
        base.Start();
        TitleBar.TitleText.text = "代码编辑器";
        // CodeInput.text = "";
    }
}