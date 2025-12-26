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

    private readonly List<Vector2> _cachedPoints = new List<Vector2>();
    private bool _pointsDirty = true;

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
            var newStart = GetLocalPoint(StartPort.PortPoint.RectTransform.position);
            if (Vector2.Distance(StartPoint, newStart) > 0.01f)
            {
                StartPoint = newStart;
                _pointsDirty = true;
            }
        }

        if (EndPort != null)
        {
            var newEnd = GetLocalPoint(EndPort.PortPoint.RectTransform.position);
            if (Vector2.Distance(EndPoint, newEnd) > 0.01f)
            {
                EndPoint = newEnd;
                _pointsDirty = true;
            }
        }

        if (_pointsDirty)
        {
            SetVerticesDirty();
        }
    }

    private Vector2 GetLocalPoint(Vector3 worldPos)
    {
        if (_parentRect == null) return Vector2.zero;
        RectTransformUtility.ScreenPointToLocalPointInRectangle(_parentRect, RectTransformUtility.WorldToScreenPoint(null, worldPos), null, out var localPoint);
        return localPoint;
    }

    public IReadOnlyList<Vector2> GetBezierPoints()
    {
        if (!_pointsDirty && _cachedPoints.Count == Segments + 1)
        {
            return _cachedPoints;
        }

        _cachedPoints.Clear();
        Vector2 p0 = StartPoint;
        Vector2 p3 = EndPoint;

        // Determine control points
        Vector2 p1 = p0 + Vector2.right * ControlPointDistance;
        Vector2 p2 = p3 + Vector2.left * ControlPointDistance;

        if (StartPort != null && StartPort is IInput)
        {
            p1 = p0 + Vector2.left * ControlPointDistance;
        }
        
        if (EndPort != null && EndPort is IOutput)
        {
            p2 = p3 + Vector2.right * ControlPointDistance;
        }
        else if (EndPort == null)
        {
            if (StartPort != null && StartPort is IInput)
            {
                p2 = p3 + Vector2.right * ControlPointDistance;
            }
        }

        for (int i = 0; i <= Segments; i++)
        {
            float t = i / (float)Segments;
            _cachedPoints.Add(MathUtils.CalculateBezierPoint(t, p0, p1, p2, p3));
        }
        
        _pointsDirty = false;
        return _cachedPoints;
    }

    public bool IsIntersecting(IList<Vector2> cuttingPoints)
    {
        if (cuttingPoints == null || cuttingPoints.Count < 2) return false;

        var linePoints = GetBezierPoints();
        
        for (int i = 0; i < cuttingPoints.Count - 1; i++)
        {
            for (int j = 0; j < linePoints.Count - 1; j++)
            {
                if (MathUtils.SegmentsIntersect(cuttingPoints[i], cuttingPoints[i + 1], linePoints[j], linePoints[j + 1]))
                {
                    return true;
                }
            }
        }

        return false;
    }

    protected override void OnPopulateMesh(VertexHelper vh)
    {
        vh.Clear();

        var points = GetBezierPoints();
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

    public void SetEndPoint(Vector2 localPoint)
    {
        if (Vector2.Distance(EndPoint, localPoint) > 0.01f)
        {
            EndPoint = localPoint;
            _pointsDirty = true;
            SetVerticesDirty();
        }
    }

    public void SetConnected(bool isConnected)
    {
    }
}
