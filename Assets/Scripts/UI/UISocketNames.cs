/// <summary>
/// UI Socket名称常量定义
/// 用于规范化UIBuilder中的Socket查找
/// </summary>
public static class UISocketNames
{
    // 通用Socket
    public const string Socket = "socket";
    public const string NextSocket = "nextSocket";

    // 表达式相关
    public const string Value = "value";
    public const string Expression = "expression";
    public const string ExpressionSocket = "expressionSocket";

    // 二元表达式
    public const string Left = "left";
    public const string Right = "right";
    public const string LeftSocket = "leftSocket";
    public const string RightSocket = "rightSocket";
    public const string SocketA = "socketA";
    public const string SocketB = "socketB";
    public const string InputA = "inputA";
    public const string InputB = "inputB";

    // 变量相关
    public const string VarName = "varName";
    public const string VariableName = "variableName";

    // 控制流
    public const string Condition = "condition";
    public const string Then = "then";
    public const string Else = "else";
    public const string Body = "body";
    public const string BodySocket = "bodySocket";
    public const string ThenSocket = "thenSocket";
    public const string ElseSocket = "elseSocket";
    public const string ConditionSocket = "conditionSocket";

    // 函数相关
    public const string BodyStatement = "bodyStatement";
}