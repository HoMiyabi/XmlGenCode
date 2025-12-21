using Nobi.UiRoundedCorners;
using UnityEngine;

public class UICapsuleCorner : UIBaseView
{
    [SerializeField] private ImageWithRoundedCorners corners;

    private void Update()
    {
        float radius = Mathf.Min(RectTransform.rect.height, RectTransform.rect.width) * 0.5f;
        if (!Mathf.Approximately(radius, 0f))
        {
            corners.radius = radius;
            corners.Refresh();
        }
    }
}