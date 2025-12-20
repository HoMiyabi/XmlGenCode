using System;
using System.Collections;
using UnityEngine;

public class UITip : UIBaseView
{
    [NonSerialized] public TMPro.TextMeshProUGUI TipText;

    private readonly WaitForSeconds wait = new(1);

    public void ShowTip(string text)
    {
        StopAllCoroutines();
        StartCoroutine(ShowTipCoroutine(text));
    }

    private IEnumerator ShowTipCoroutine(string text)
    {
        TipText.text = text;
        yield return wait;
        TipText.text = "";
    }
}