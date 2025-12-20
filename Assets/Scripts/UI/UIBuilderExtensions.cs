using UnityEngine;

/// <summary>
/// UIBuilderRegistry的扩展方法，提供便捷的使用方式
/// </summary>
public static class UIBuilderExtensions
{
    /// <summary>
    /// 将AST节点转换为UI
    /// </summary>
    /// <param name="astNode">AST节点</param>
    /// <param name="mainPanel">主面板</param>
    /// <returns>创建的UI对象</returns>
    public static UIBaseBlock ToUI(this BaseBlock astNode, UIMainPanel mainPanel)
    {
        if (astNode == null)
            return null;

        return UIBuilderRegistry.Instance.Build(astNode, mainPanel);
    }

    /// <summary>
    /// 将AST节点转换为UI并添加到指定父节点
    /// </summary>
    /// <param name="astNode">AST节点</param>
    /// <param name="mainPanel">主面板</param>
    /// <param name="parent">父Transform</param>
    /// <returns>创建的UI对象</returns>
    public static UIBaseBlock ToUI(this BaseBlock astNode, UIMainPanel mainPanel, Transform parent)
    {
        if (astNode == null)
            return null;

        return UIBuilderRegistry.Instance.Build(astNode, mainPanel, parent, true);
    }
}