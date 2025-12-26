using System.Reflection;
using UnityEngine;

namespace KiraraDirectBinder
{
    public static class ReflectionBindUIExtensions
    {
        public static void BindUI(this MonoBehaviour behaviour)
        {
            if (!behaviour.TryGetComponent<KiraraDirectBinder>(out var binder)) return;
            
            var type = behaviour.GetType();
            foreach (var item in binder.items)
            {
                var fieldInfo = type.GetField(item.varName, BindingFlags.Instance | BindingFlags.Public);
                if (fieldInfo == null)
                {
                    Debug.LogWarning($"脚本{type.Name}不存在字段{item.varName}, 节点: {behaviour.name}", behaviour);
                    continue;
                }
                if (fieldInfo.FieldType != item.component.GetType())
                {
                    Debug.LogWarning($"类型不匹配, name: {behaviour.name}, 变量名: {item.varName}," +
                                     $"字段类型: {fieldInfo.FieldType}, 序列化类型: {item.component.GetType()}", behaviour);
                    continue;
                }
                fieldInfo.SetValue(behaviour, item.component);
            }
        }
    }
}