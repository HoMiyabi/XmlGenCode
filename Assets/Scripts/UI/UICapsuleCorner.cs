using Nobi.UiRoundedCorners;
using UnityEngine;

public class UICapsuleCorner : MonoBehaviour
{
    [SerializeField] private ImageWithRoundedCorners corners;
    private RectTransform rectTransform;

    private void Awake()
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