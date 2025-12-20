using System;

/// <summary>
/// 用于标记UI类对应的AST类型的特性
/// </summary>
[AttributeUsage(AttributeTargets.Class, Inherited = false, AllowMultiple = false)]
public class ASTModelAttribute : Attribute
{
    /// <summary>
    /// 对应的AST类型
    /// </summary>
    public Type ASTType { get; }

    /// <summary>
    /// 预制体名称（可选，如果不提供则使用类名）
    /// </summary>
    public string PrefabName { get; set; }

    /// <summary>
    /// 构造函数
    /// </summary>
    /// <param name="astType">对应的AST类型</param>
    public ASTModelAttribute(Type astType)
    {
        ASTType = astType ?? throw new ArgumentNullException(nameof(astType));
        // 默认预制体名称为UI类名去掉"UI"前缀
        PrefabName = null;
    }
}