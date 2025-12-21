using UnityEngine;
using UnityEngine.UI;
using System.Collections.Generic;

public class UICuttingLine : MaskableGraphic
{
    public List<Vector2> Points = new List<Vector2>();
    public float Width = 2f;
    public float DashLength = 10f;
    public float GapLength = 5f;

    public void Clear()
    {
        Points.Clear();
        SetVerticesDirty();
    }

    public void AddPoint(Vector2 point)
    {
        if (Points.Count > 0 && Vector2.Distance(Points[Points.Count - 1], point) < 2f)
            return;
        Points.Add(point);
        SetVerticesDirty();
    }

    protected override void OnPopulateMesh(VertexHelper vh)
    {
        vh.Clear();
        if (Points.Count < 2) return;

        float currentPatternDist = 0f;
        for (int i = 0; i < Points.Count - 1; i++)
        {
            currentPatternDist = DrawDashedLine(vh, Points[i], Points[i + 1], currentPatternDist);
        }
    }

    private float DrawDashedLine(VertexHelper vh, Vector2 start, Vector2 end, float startPatternDist)
    {
        Vector2 dir = (end - start).normalized;
        float distance = Vector2.Distance(start, end);
        Vector2 normal = new Vector2(-dir.y, dir.x) * (Width * 0.5f);

        float currentDist = 0;
        float patternDist = startPatternDist;

        while (currentDist < distance)
        {
            float remainingPatternDist = (patternDist < DashLength) ? (DashLength - patternDist) : (DashLength + GapLength - patternDist);
            bool draw = patternDist < DashLength;

            float step = remainingPatternDist;
            if (currentDist + step > distance)
            {
                step = distance - currentDist;
            }

            if (draw)
            {
                Vector2 s = start + dir * currentDist;
                Vector2 e = start + dir * (currentDist + step);
                AddQuad(vh, s - normal, s + normal, e + normal, e - normal);
            }

            currentDist += step;
            patternDist += step;
            if (patternDist >= DashLength + GapLength)
            {
                patternDist -= (DashLength + GapLength);
            }
        }
        return patternDist;
    }

    private void AddQuad(VertexHelper vh, Vector2 v1, Vector2 v2, Vector2 v3, Vector2 v4)
    {
        int count = vh.currentVertCount;
        vh.AddVert(v1, color, Vector2.zero);
        vh.AddVert(v2, color, Vector2.zero);
        vh.AddVert(v3, color, Vector2.zero);
        vh.AddVert(v4, color, Vector2.zero);

        vh.AddTriangle(count, count + 1, count + 2);
        vh.AddTriangle(count, count + 2, count + 3);
    }
}
