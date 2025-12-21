using UnityEngine;
using UnityEngine.UI;
using System.Collections.Generic;

public class UIConnectionLine : MaskableGraphic
{
    public NodeUIPort StartPort;
    public NodeUIPort EndPort;

    public Vector2 StartPoint;
    public Vector2 EndPoint;

    public float ControlPointDistance = 100f;
    public float Width = 3f;
    public int Segments = 30;

    private RectTransform _rectTransform;
    private RectTransform _parentRect;

    protected override void Awake()
    {
        base.Awake();
        _rectTransform = GetComponent<RectTransform>();
        _parentRect = transform.parent as RectTransform;
    }

    private void LateUpdate()
    {
        UpdatePoints();
    }

    public void UpdatePoints()
    {
        if (StartPort != null)
        {
            StartPoint = GetLocalPoint(StartPort.PortPoint.RectTransform.position);
        }

        if (EndPort != null)
        {
            EndPoint = GetLocalPoint(EndPort.PortPoint.RectTransform.position);
        }
        else
        {
            // If EndPort is null, it might be following the mouse
            // EndPoint should be set externally in that case
        }

        SetVerticesDirty();
    }

    private Vector2 GetLocalPoint(Vector3 worldPos)
    {
        if (_parentRect == null) return Vector2.zero;
        RectTransformUtility.ScreenPointToLocalPointInRectangle(_parentRect, RectTransformUtility.WorldToScreenPoint(null, worldPos), null, out var localPoint);
        return localPoint;
    }

    protected override void OnPopulateMesh(VertexHelper vh)
    {
        vh.Clear();

        Vector2 p0 = StartPoint;
        Vector2 p3 = EndPoint;

        // Determine control points
        // 0 and 1 horizontal, 2 and 3 horizontal
        Vector2 p1 = p0 + Vector2.right * ControlPointDistance;
        Vector2 p2 = p3 + Vector2.left * ControlPointDistance;

        // If StartPort is an input, it should go left
        if (StartPort != null && StartPort is IInput)
        {
            p1 = p0 + Vector2.left * ControlPointDistance;
        }
        
        // If EndPort is an output, it should go right
        if (EndPort != null && EndPort is IOutput)
        {
            p2 = p3 + Vector2.right * ControlPointDistance;
        }
        else if (EndPort == null)
        {
            // If we are dragging from an input, we expect to connect to an output, so the line should approach from the right
            if (StartPort != null && StartPort is IInput)
            {
                p2 = p3 + Vector2.right * ControlPointDistance;
            }
        }

        List<Vector2> points = new List<Vector2>();
        for (int i = 0; i <= Segments; i++)
        {
            float t = i / (float)Segments;
            points.Add(CalculateBezierPoint(t, p0, p1, p2, p3));
        }

        if (points.Count < 2) return;

        float halfWidth = Width * 0.5f;

        for (int i = 0; i < points.Count; i++)
        {
            Vector2 dir;
            if (i == 0)
            {
                dir = (points[1] - points[0]).normalized;
            }
            else if (i == points.Count - 1)
            {
                dir = (points[i] - points[i - 1]).normalized;
            }
            else
            {
                dir = (points[i + 1] - points[i - 1]).normalized;
            }

            Vector2 normal = new Vector2(-dir.y, dir.x).normalized * halfWidth;
            float t = i / (float)(points.Count - 1);

            vh.AddVert(points[i] - normal, color, new Vector2(t, 0));
            vh.AddVert(points[i] + normal, color, new Vector2(t, 1));

            if (i < points.Count - 1)
            {
                int baseIdx = i * 2;
                vh.AddTriangle(baseIdx, baseIdx + 1, baseIdx + 3);
                vh.AddTriangle(baseIdx, baseIdx + 3, baseIdx + 2);
            }
        }
    }

    private Vector2 CalculateBezierPoint(float t, Vector2 p0, Vector2 p1, Vector2 p2, Vector2 p3)
    {
        float u = 1 - t;
        float tt = t * t;
        float uu = u * u;
        float uuu = uu * u;
        float ttt = tt * t;

        Vector2 p = uuu * p0;
        p += 3 * uu * t * p1;
        p += 3 * u * tt * p2;
        p += ttt * p3;

        return p;
    }
}
