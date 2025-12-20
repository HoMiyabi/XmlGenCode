using System.Collections.Generic;
using System.Linq;
using UnityEngine;

namespace KiraraDirectBinder.Editor
{
    internal static class GeneratorHelper
    {
        public static int GetTypeFullNameMaxLen(List<KiraraDirectBinderItem> items)
        {
            return items
                .Select(x => GetFullNameOrEmpty(x.component).Length)
                .DefaultIfEmpty()
                .Max();
        }

        public static int GetVarNameMaxLen(List<KiraraDirectBinderItem> items)
        {
            return items
                .Select(x => x.varName.Length)
                .DefaultIfEmpty()
                .Max();
        }

        public static string GetFullNameOrEmpty(Component component)
        {
            return component.GetType().FullName ?? string.Empty;
        }
    }
}