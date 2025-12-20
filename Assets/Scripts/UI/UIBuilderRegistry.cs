using System;
using System.Collections.Generic;
using System.Linq;
using UnityEngine;

/// <summary>
/// UI构建器注册表，管理AST类型到UI类型的映射
/// 使用单例模式，支持通过ASTModelAttribute自动注册映射关系
/// </summary>
public class UIBuilderRegistry : UnitySingleton<UIBuilderRegistry>
{
    /// <summary>
    /// AST类型到UI类型的映射字典
    /// </summary>
    private Dictionary<Type, Type> astToUITypeMap;

    /// <summary>
    /// AST类型到预制体名称的映射字典
    /// </summary>
    private Dictionary<Type, string> astToPrefabNameMap;

    /// <summary>
    /// UI类型到AST类型的反向映射字典
    /// </summary>
    private Dictionary<Type, Type> uiToASTTypeMap;

    protected override void Awake()
    {
        base.Awake();
        InitializeMappings();
    }

    /// <summary>
    /// 初始化映射关系
    /// 扫描所有带有ASTModelAttribute的UI类
    /// </summary>
    private void InitializeMappings()
    {
        astToUITypeMap = new Dictionary<Type, Type>();
        astToPrefabNameMap = new Dictionary<Type, string>();
        uiToASTTypeMap = new Dictionary<Type, Type>();

        // 扫描所有程序集
        var assemblies = AppDomain.CurrentDomain.GetAssemblies();
        foreach (var assembly in assemblies)
        {
            try
            {
                var types = assembly.GetTypes();
                foreach (var type in types)
                {
                    // 检查是否有ASTModelAttribute
                    var astAttribute = type.GetCustomAttributes(typeof(ASTModelAttribute), false)
                                        .FirstOrDefault() as ASTModelAttribute;

                    if (astAttribute != null)
                    {
                        // 确保类型继承自UIBaseBlock
                        if (typeof(UIBaseBlock).IsAssignableFrom(type))
                        {
                            var astType = astAttribute.ASTType;
                            var prefabName = astAttribute.PrefabName ??
                                          (type.Name.StartsWith("UI") ? type.Name.Substring(2) : type.Name);

                            astToUITypeMap[astType] = type;
                            astToPrefabNameMap[astType] = prefabName;
                            uiToASTTypeMap[type] = astType;

                            Debug.Log($"Registered mapping: {astType.Name} -> {type.Name} (Prefab: {prefabName})");
                        }
                        else
                        {
                            Debug.LogWarning($"Type {type.Name} has ASTModelAttribute but does not inherit from UIBaseBlock");
                        }
                    }
                }
            }
            catch (Exception ex)
            {
                Debug.LogWarning($"Failed to scan assembly {assembly.GetName().Name}: {ex.Message}");
            }
        }
    }

    /// <summary>
    /// 根据AST节点构建UI对象
    /// </summary>
    /// <param name="astNode">AST节点</param>
    /// <param name="mainPanel">主面板</param>
    /// <param name="parent">父Transform（可选）</param>
    /// <param name="autoHandleNext">是否自动处理next关系（默认true）</param>
    /// <returns>构建的UI对象</returns>
    public UIBaseBlock Build(BaseBlock astNode, UIMainPanel mainPanel, Transform parent = null, bool autoHandleNext = true)
    {
        if (astNode == null)
            return null;

        var astType = astNode.GetType();

        if (!astToUITypeMap.TryGetValue(astType, out var uiType))
        {
            Debug.LogError($"No UI type registered for AST type: {astType.Name}");
            return null;
        }

        // 获取预制体名称
        if (!astToPrefabNameMap.TryGetValue(astType, out var prefabName))
        {
            prefabName = uiType.Name;
        }

        // 从AssetMgr获取预制体
        GameObject prefab = AssetMgr.Instance.GetPrefab(prefabName);
        if (prefab == null)
        {
            Debug.LogError($"Prefab {prefabName} not found in AssetMgr!");
            return null;
        }

        // 实例化UI对象
        Transform parentTransform = parent ?? mainPanel.UIBlockGraph.BlockRoot;
        GameObject uiObj = UnityEngine.Object.Instantiate(prefab, parentTransform);

        var uiComponent = uiObj.GetComponent(uiType) as UIBaseBlock;
        if (uiComponent == null)
        {
            Debug.LogError($"Prefab {prefabName} missing {uiType.Name} component!");
            UnityEngine.Object.Destroy(uiObj);
            return null;
        }

        // 设置mainPanel
        uiComponent.main = mainPanel;

        // 调用UI类的BuildFromAST方法
        uiComponent.BuildFromAST(astNode);

        // 处理语句链的next关系
        if (autoHandleNext && astNode is StatementBlock statementBlock && statementBlock.next != null)
        {
            var nextUI = Build(statementBlock.next, mainPanel, parent, true);
            if (nextUI != null)
            {
                // 查找nextSocket并连接
                var nextSocket = FindNextSocket(uiComponent);
                if (nextSocket != null)
                {
                    nextSocket.Connect(nextUI);
                }
            }
        }

        return uiComponent;
    }

    /// <summary>
    /// 查找UI组件的nextSocket
    /// </summary>
    private UISocket FindNextSocket(UIBaseBlock uiComponent)
    {
        // 首先尝试直接访问公共字段
        var nextSocketField = uiComponent.GetType().GetField("nextSocket");
        if (nextSocketField != null && nextSocketField.GetValue(uiComponent) is UISocket socket)
        {
            return socket;
        }

        // 如果找不到，使用反射查找所有UISocket
        var sockets = uiComponent.GetComponentsInChildren<UISocket>();
        foreach (var s in sockets)
        {
            // 查找名称包含"next"的socket
            if (s.gameObject.name.IndexOf("next", StringComparison.OrdinalIgnoreCase) >= 0)
            {
                return s;
            }
        }

        Debug.LogWarning($"No nextSocket found in {uiComponent.GetType().Name}");
        return null;
    }

    /// <summary>
    /// 获取AST类型对应的UI类型
    /// </summary>
    public Type GetUIType(Type astType)
    {
        astToUITypeMap.TryGetValue(astType, out var uiType);
        return uiType;
    }

    /// <summary>
    /// 获取UI类型对应的AST类型
    /// </summary>
    public Type GetASTType(Type uiType)
    {
        uiToASTTypeMap.TryGetValue(uiType, out var astType);
        return astType;
    }

    /// <summary>
    /// 获取所有已注册的映射关系（用于调试）
    /// </summary>
    public string GetDebugInfo()
    {
        var info = "Registered AST to UI mappings:\n";
        foreach (var kvp in astToUITypeMap)
        {
            info += $"  {kvp.Key.Name} -> {kvp.Value.Name}\n";
        }
        return info;
    }
}