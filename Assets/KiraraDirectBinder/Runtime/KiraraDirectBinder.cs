using System.Collections.Generic;
using UnityEngine;

namespace KiraraDirectBinder
{
    [ExecuteAlways]
    public class KiraraDirectBinder : MonoBehaviour
    {
        public List<KiraraDirectBinderItem> items = new();

        public T Q<T>(int index, string varName) where T : Component
        {
            var component = Q(index, varName);
            var com = component as T;
            if (!com)
            {
                Debug.LogWarning($"组件类型不匹配, name: {name}, index: {index}, varName: {varName}, 组件实际类型: {component.GetType()}");
                return null;
            }
            return com;
        }

        public Component Q(int index, string varName)
        {
            if (index < 0 || index >= items.Count)
            {
                Debug.LogWarning($"索引越界, name: {name}, index: {index}, varName: {varName}, items.Count: {items.Count}");
                return null;
            }
            var item = items[index];
            if (item.varName != varName)
            {
                Debug.LogWarning($"字段名不匹配, name: {name}, index: {index}, varName: {varName}, item.varName: {item.varName}");
                return null;
            }
            var component = item.component;
            if (!component)
            {
                Debug.LogWarning($"组件为null, name: {name}, index: {index}, varName: {varName}");
                return null;
            }
            return component;
        }

#if UNITY_EDITOR
        private void OnEnable()
        {
            KiraraDirectBinderList.binders.Add(this);
        }

        private void OnDisable()
        {
            KiraraDirectBinderList.binders.Remove(this);
        }
#endif
    }
}