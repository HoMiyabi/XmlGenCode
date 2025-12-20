using System.Reflection;
using UnityEngine;

namespace KiraraDirectBinder
{
    public static class ReflectionBindUIMethods
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
                    Debug.LogWarning($"脚本{type.Name}不存在字段{item.varName}, 节点: {behaviour.name}");
                    continue;
                }
                if (fieldInfo.FieldType != item.component.GetType())
                {
                    Debug.LogWarning($"字段类型不匹配, name: {behaviour.name}, varName: {item.varName}," +
                                     $"fieldInfo.FieldType: {fieldInfo.FieldType}, item.component.GetType(): {item.component.GetType()}");
                    continue;
                }
                fieldInfo.SetValue(behaviour, item.component);
            }
        }
    }
}