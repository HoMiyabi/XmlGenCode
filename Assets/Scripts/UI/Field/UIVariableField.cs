using TMPro;
using UnityEngine;
using UnityEngine.UI;

public class UIVariableField : MonoBehaviour
{
    public TMP_InputField Input;

    private void Start()
    {
        Input.onValueChanged.AddListener(_ =>
        {
            LayoutRebuilder.MarkLayoutForRebuild(transform as RectTransform);
        });
    }

    public string Text => Input.text;
}