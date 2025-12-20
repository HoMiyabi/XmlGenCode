using Nobi.UiRoundedCorners;
using UnityEngine;

public class UICapsuleCorner : UIBaseView
{
    [SerializeField] private ImageWithRoundedCorners corners;
    private RectTransform rectTransform;

    protected override void Awake()
    {
        rectTransform = (RectTransform)transform;
    }

    private void Update()
    {
        float radius = Mathf.Min(rectTransform.rect.height, rectTransform.rect.width) * 0.5f;
        if (!Mathf.Approximately(radius, 0f))
        {
            corners.radius = radius;
            corners.Refresh();
        }
    }
}