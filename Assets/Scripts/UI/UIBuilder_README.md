# UIBuilder 使用指南

## 概述

UIBuilder 是一个将 AST（抽象语法树）节点转换为 UI 对象的构建器，采用了构建器模式来实现 AST 层与 UI 层的解耦。

## 核心优势

1. **解耦设计**：AST 层不需要知道 UI 层的具体实现
2. **单一职责**：UIBuilder 专门负责构建 UI，符合单一职责原则
3. **易于扩展**：新增 AST 类型只需在 UIBuilder 中添加对应的构建方法
4. **统一管理**：所有 UI 创建逻辑集中在一个类中，便于维护

## 基本使用方法

### 1. 创建 UI

```csharp
// 方法一：使用扩展方法（推荐）
var astNode = new PrintBlock { value = new ValueBlock { value = "Hello" } };
var uiBlock = astNode.ToUI(mainPanel);

// 方法二：直接使用 UIBuilder
var builder = new UIBuilder(mainPanel);
var uiBlock = builder.Build(astNode);
```

### 2. 指定父节点

```csharp
// 创建 UI 并添加到指定的父节点
var uiBlock = astNode.ToUI(mainPanel, parentTransform);
```

### 3. 批量创建

```csharp
// 使用辅助方法批量创建
var astList = new BaseBlock[] { ast1, ast2, ast3 };
var uiList = UIBuilderHelper.CreateMultipleUI(astList, mainPanel);
```

## 配置预制体映射

在 `UIBuilder` 的构造函数中，配置 AST 类型到预制体名称的映射：

```csharp
prefabNameMap = new Dictionary<Type, string>
{
    { typeof(PrintBlock), "UIPrintBlock" },
    { typeof(SetVariableBlock), "UISetVariableBlock" },
    // 添加更多映射...
};
```

**重要**：确保在 AssetMgr 中注册了所有需要的预制体资源。

## 实现自定义构建方法

如果需要添加新的 AST 类型支持：

1. 在 `prefabNameMap` 中添加类型映射
2. 在 `Build` 方法中添加对应的 case
3. 实现具体的构建方法

```csharp
// 1. 添加映射
{ typeof(MyCustomBlock), "UIMyCustomBlock" },

// 2. 在 Build 方法中添加 case
MyCustomBlock custom => BuildMyCustomBlock(custom),

// 3. 实现构建方法
private UIMyCustomBlock BuildMyCustomBlock(MyCustomBlock customBlock)
{
    var uiCustom = CreateUIBlock<UIMyCustomBlock>("UIMyCustomBlock");
    if (uiCustom == null) return null;

    // 设置自定义属性...

    return uiCustom;
}
```

## 处理复杂的 UI 结构

### 二元表达式（如 AddBlock）

UIBuilder 使用反射来获取 `left` 和 `right` 字段，并连接到对应的 Socket：

```csharp
// UI 预制体应该有以下结构：
// - UIAddBlock
//   - LeftSocket (UISocket)
//   - RightSocket (UISocket)
```

### 一元表达式（如 NotBlock）

类似地，一元表达式需要 `ExpressionSocket`：

```csharp
// UI 预制体应该有以下结构：
// - UINotBlock
//   - ExpressionSocket (UISocket)
```

### 语句链

对于实现了 `StatementBlock` 的类，UIBuilder 会自动处理 `next` 语句链：

```csharp
// UI 预制体应该有以下结构：
// - UIPrintBlock
//   - nextSocket (UISocket)
```

## 注意事项

1. **预制体命名**：确保预制体名称与 `prefabNameMap` 中的映射一致
2. **组件引用**：UI 预制体必须包含对应的 `UIBaseBlock` 子类组件
3. **Socket 命名**：为了使用反射自动连接，Socket 的命名需要符合约定
4. **资源注册**：所有预制体资源需要在 AssetMgr 中注册

## 完整示例

查看 `UIBuilderExample.cs` 获取更多使用示例，包括：
- 简单语句创建
- 变量赋值和打印
- 条件语句
- 循环语句
- 函数定义

## 与现有系统的集成

UIBuilder 可以轻松集成到现有系统中：

```csharp
// 在 BlockGraph 中添加方法
public void BuildUI(UIMainPanel mainPanel)
{
    if (start != null)
    {
        var uiStart = start.ToUI(mainPanel);
        // 处理创建的 UI...
    }
}

// 在需要的地方调用
var blockGraph = // 从 XML 或其他来源加载
blockGraph.BuildUI(mainPanel);
```

## 扩展建议

1. **添加日志**：在构建过程中添加详细的日志，便于调试
2. **错误处理**：增强错误处理，提供更友好的错误信息
3. **性能优化**：考虑使用对象池来优化 UI 对象的创建和销毁
4. **动画支持**：在构建完成后添加淡入动画效果
5. **撤销/重做**：记录构建历史，支持撤销和重做操作