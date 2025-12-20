# UIBuilderRegistry 使用指南

## 概述

UIBuilderRegistry 是一个改进的 AST 到 UI 转换系统，使用了特性标记和自注册机制，提供了更灵活、更易维护的架构。

## 新版本特点

1. **自动化映射**：使用 `[ASTModelAttribute]` 特性自动注册映射关系
2. **分布式构建逻辑**：每个 UI 类负责自己的构建逻辑
3. **单例管理**：UIBuilderRegistry 使用单例模式，全局可用
4. **易于扩展**：添加新的 UI 类只需添加特性标记

## 基本使用方法

### 1. 简单转换

```csharp
// 创建 AST 节点
var printBlock = new PrintBlock
{
    value = new ValueBlock { value = "Hello World!" }
};

// 转换为 UI
var uiPrint = printBlock.ToUI(mainPanel);
```

### 2. 指定父节点

```csharp
// 转换并指定父节点
var uiPrint = printBlock.ToUI(mainPanel, parentTransform);
```

### 3. 直接使用 UIBuilderRegistry

```csharp
// 通过 UIBuilderRegistry 构建
var uiPrint = UIBuilderRegistry.Instance.Build(printBlock, mainPanel);
```

## 为 UI 类添加 AST 支持

### 1. 添加特性标记

```csharp
[ASTModelAttribute(typeof(PrintBlock))]
public class UIPrintBlock : UIStatementBlock
{
    // ...
}
```

### 2. 实现 BuildFromAST 方法

```csharp
public override void BuildFromAST(BaseBlock astNode)
{
    base.BuildFromAST(astNode);

    if (astNode is PrintBlock printBlock)
    {
        // 构建子 UI
        if (printBlock.value != null && value != null)
        {
            var childUI = UIBuilderRegistry.Instance.Build(printBlock.value, main);
            if (childUI != null && value.socket != null)
            {
                value.socket.Connect(childUI);
            }
        }
    }
}
```

## 高级用法

### 1. 自定义预制体名称

```csharp
[ASTModelAttribute(typeof(MyCustomBlock), PrefabName = "MyCustomUI")]
public class UIMyCustomBlock : UIBaseBlock
{
    // ...
}
```

### 2. 调试映射关系

```csharp
// 显示所有已注册的映射
Debug.Log(UIBuilderRegistry.Instance.GetDebugInfo());

// 查找特定 AST 类型对应的 UI 类型
var uiType = UIBuilderRegistry.Instance.GetUIType(typeof(PrintBlock));
```

### 3. 复杂 AST 结构示例

```csharp
// 创建复杂的 AST 结构
var ast = new SetVariableBlock
{
    variableName = "score",
    value = new AddBlock
    {
        left = new ValueBlock { value = "100" },
        right = new MultiplyBlock
        {
            left = new VariableBlock { variableName = "level" },
            right = new ValueBlock { value = "10" }
        }
    },
    next = new IfBlock
    {
        condition = new GreaterBlock
        {
            left = new VariableBlock { variableName = "score" },
            right = new ValueBlock { value = "500" }
        },
        thenStatement = new PrintBlock
        {
            value = new ValueBlock { value = "\"High Score!\"" }
        }
    }
};

// 一次性转换为 UI
var uiRoot = ast.ToUI(mainPanel);
```

## 最佳实践

### 1. 处理表达式字段

```csharp
public override void BuildFromAST(BaseBlock astNode)
{
    base.BuildFromAST(astNode);

    if (astNode is MyExpressionBlock exprBlock)
    {
        // 对于表达式，通常需要递归构建
        BuildExpression(exprBlock.left, leftField);
        BuildExpression(exprBlock.right, rightField);
    }
}

private void BuildExpression(ExpressionBlock expr, UIExpressionField field)
{
    if (expr != null && field != null)
    {
        var childUI = UIBuilderRegistry.Instance.Build(expr, main);
        field.socket?.Connect(childUI);
    }
}
```

### 2. 处理文本输入

```csharp
// 对于 VariableField 或 InputField
if (variableField != null)
{
    var inputField = variableField.GetComponentInChildren<TMP_InputField>();
    if (inputField != null)
    {
        inputField.text = variableName;
    }
}
```

### 3. 错误处理

```csharp
public override void BuildFromAST(BaseBlock astNode)
{
    base.BuildFromAST(astNode);

    if (astNode == null)
    {
        Debug.LogError("AST node is null");
        return;
    }

    // 验证类型
    if (!(astNode is ExpectedType expectedNode))
    {
        Debug.LogError($"Expected {typeof(ExpectedType).Name}, got {astNode.GetType().Name}");
        return;
    }

    // 继续构建...
}
```

## 注意事项

1. **UIBuilderRegistry 初始化**：确保在场景中有 UIBuilderRegistry 实例
2. **预制体注册**：确保所有 UI 预制体都在 AssetMgr 中注册
3. **字段命名**：UI 类的字段名应与 AST 类的字段名保持一致，以便使用默认的反射实现
4. **Socket 连接**：确保所有的 socket 连接都已正确设置

## 迁移指南

从旧版本 UIBuilder 迁移：

1. **删除旧的调用**：
   ```csharp
   // 旧方式
   var builder = new UIBuilder(mainPanel);
   var ui = builder.Build(astNode);
   ```

2. **使用新方式**：
   ```csharp
   // 新方式
   var ui = astNode.ToUI(mainPanel);
   // 或
   var ui = UIBuilderRegistry.Instance.Build(astNode, mainPanel);
   ```

3. **移除 UIBuilder 依赖**：新系统不再需要 UIBuilder 类

## 故障排除

### 问题：UI 未创建
- 检查是否添加了 `[ASTModelAttribute]` 特性
- 确认预制体在 AssetMgr 中已注册
- 查看控制台错误信息

### 问题：Socket 未连接
- 确认 UI 类中的 socket 字段名称与 AST 字段匹配
- 检查 BuildFromAST 实现是否正确

### 问题：映射关系未建立
- 调用 `UIBuilderRegistry.Instance.GetDebugInfo()` 查看已注册的映射
- 确认 UI 类继承自 UIBaseBlock