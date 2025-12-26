using UnityEngine;

public static class MathUtils
{
    /// <summary>
    /// 计算三阶贝塞尔曲线上的点
    /// </summary>
    public static Vector2 CalculateBezierPoint(float t, Vector2 p0, Vector2 p1, Vector2 p2, Vector2 p3)
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

    /// <summary>
    /// 检查两条线段是否相交 (a-b 和 c-d)
    /// </summary>
    public static bool SegmentsIntersect(Vector2 a, Vector2 b, Vector2 c, Vector2 d)
    {
        float denominator = (b.x - a.x) * (d.y - c.y) - (b.y - a.y) * (d.x - c.x);
        if (denominator == 0) return false;

        float t = ((c.x - a.x) * (d.y - c.y) - (c.y - a.y) * (d.x - c.x)) / denominator;
        float u = ((c.x - a.x) * (b.y - a.y) - (c.y - a.y) * (b.x - a.x)) / denominator;

        return t >= 0 && t <= 1 && u >= 0 && u <= 1;
    }
}
