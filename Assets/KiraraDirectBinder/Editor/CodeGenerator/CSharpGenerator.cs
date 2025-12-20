using System.Text;
using UnityEngine;

namespace KiraraDirectBinder.Editor
{
    internal static class CSharpGenerator
    {
        public static string RunFields(KiraraDirectBinder binder)
        {
            string varModifier = "[NonSerialized] public";

            // 类型全名的最大长度
            int typeFullNameMaxLen = GeneratorHelper.GetTypeFullNameMaxLen(binder.items);

            var sb = new StringBuilder();

            foreach ((string fieldName, var com) in binder.items)
            {
                sb.AppendLine($"{varModifier} {GeneratorHelper.GetFullNameOrEmpty(com).PadRight(typeFullNameMaxLen)} {fieldName};");
            }
            return sb.ToString();
        }

        public static string Run(KiraraDirectBinder binder, string bindUIMethodModifier)
        {
            string varModifier = "private";

            // 类型全名的最大长度
            int typeFullNameMaxLen = GeneratorHelper.GetTypeFullNameMaxLen(binder.items);

            // 变量名最大长度
            int varNameMaxLen = GeneratorHelper.GetVarNameMaxLen(binder.items);
            int equalLeftLen = Mathf.Max("var b".Length, varNameMaxLen);

            var sb = new StringBuilder();
            sb.AppendLine("#region View");

            if (binder.items.Count > 0)
            {
                sb.AppendLine($"private bool _isBound;");
            }
            foreach ((string fieldName, var com) in binder.items)
            {
                sb.AppendLine($"{varModifier} {GeneratorHelper.GetFullNameOrEmpty(com).PadRight(typeFullNameMaxLen)} {fieldName};");
            }

            sb.AppendLine($"{bindUIMethodModifier} void BindUI()");
            sb.AppendLine("{");

            if (binder.items.Count > 0)
            {
                sb.AppendLine("if (_isBound) return;");
                sb.AppendLine("_isBound = true;");
                sb.AppendLine($"    {"var b".PadRight(equalLeftLen)} = GetComponent<KiraraDirectBinder.KiraraDirectBinder>();");

                for (int i = 0; i < binder.items.Count; i++)
                {
                    (string fieldName, var com) = binder.items[i];
                    string typeName = GeneratorHelper.GetFullNameOrEmpty(com);
                    sb.AppendLine($"    {fieldName.PadRight(equalLeftLen)} = b.Q<{typeName}>({i}, \"{fieldName}\");");
                }
            }

            sb.AppendLine("}");
            sb.Append("#endregion");

            return sb.ToString();
        }
    }
}