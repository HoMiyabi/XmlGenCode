using System;
using DG.Tweening;

public class UIThrowArea : UIBaseSubView
{
    [NonSerialized] public UnityEngine.CanvasGroup CanvasGroup;

    protected override void Awake()
    {
        base.Awake();
        CanvasGroup.alpha = 0f;
    }

    public void PlayEnter()
    {
        gameObject.SetActive(true);
        CanvasGroup.DOFade(1f, 0.25f);
    }

    public void PlayExit()
    {
        CanvasGroup.DOFade(0f, 0.25f).OnComplete(() =>
        {
            gameObject.SetActive(false);
        });
    }
}