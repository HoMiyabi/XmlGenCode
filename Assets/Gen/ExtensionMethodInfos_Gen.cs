#if !PUERTS_DISABLE_IL2CPP_OPTIMIZATION && (PUERTS_IL2CPP_OPTIMIZATION|| !UNITY_IPHONE) && ENABLE_IL2CPP
using System;
using System.Collections.Generic;
using System.Reflection;
namespace PuertsIl2cpp
{
public static class ExtensionMethodInfos_Gen
{
    [UnityEngine.Scripting.Preserve]
    public static MethodInfo[] TryLoadExtensionMethod(string assemblyQualifiedName)
    {
        if (false) {}
        else if (typeof(int[]).AssemblyQualifiedName == assemblyQualifiedName)
        {
            return ExtensionMethodInfo.GetExtensionMethods(typeof(int[]), typeof(PuertsIl2cpp.ArrayExtension));
        }
        else if (typeof(float[]).AssemblyQualifiedName == assemblyQualifiedName)
        {
            return ExtensionMethodInfo.GetExtensionMethods(typeof(float[]), typeof(PuertsIl2cpp.ArrayExtension));
        }
        else if (typeof(double[]).AssemblyQualifiedName == assemblyQualifiedName)
        {
            return ExtensionMethodInfo.GetExtensionMethods(typeof(double[]), typeof(PuertsIl2cpp.ArrayExtension));
        }
        else if (typeof(bool[]).AssemblyQualifiedName == assemblyQualifiedName)
        {
            return ExtensionMethodInfo.GetExtensionMethods(typeof(bool[]), typeof(PuertsIl2cpp.ArrayExtension));
        }
        else if (typeof(long[]).AssemblyQualifiedName == assemblyQualifiedName)
        {
            return ExtensionMethodInfo.GetExtensionMethods(typeof(long[]), typeof(PuertsIl2cpp.ArrayExtension));
        }
        else if (typeof(ulong[]).AssemblyQualifiedName == assemblyQualifiedName)
        {
            return ExtensionMethodInfo.GetExtensionMethods(typeof(ulong[]), typeof(PuertsIl2cpp.ArrayExtension));
        }
        else if (typeof(sbyte[]).AssemblyQualifiedName == assemblyQualifiedName)
        {
            return ExtensionMethodInfo.GetExtensionMethods(typeof(sbyte[]), typeof(PuertsIl2cpp.ArrayExtension));
        }
        else if (typeof(byte[]).AssemblyQualifiedName == assemblyQualifiedName)
        {
            return ExtensionMethodInfo.GetExtensionMethods(typeof(byte[]), typeof(PuertsIl2cpp.ArrayExtension));
        }
        else if (typeof(ushort[]).AssemblyQualifiedName == assemblyQualifiedName)
        {
            return ExtensionMethodInfo.GetExtensionMethods(typeof(ushort[]), typeof(PuertsIl2cpp.ArrayExtension));
        }
        else if (typeof(short[]).AssemblyQualifiedName == assemblyQualifiedName)
        {
            return ExtensionMethodInfo.GetExtensionMethods(typeof(short[]), typeof(PuertsIl2cpp.ArrayExtension));
        }
        else if (typeof(System.Char[]).AssemblyQualifiedName == assemblyQualifiedName)
        {
            return ExtensionMethodInfo.GetExtensionMethods(typeof(System.Char[]), typeof(PuertsIl2cpp.ArrayExtension));
        }
        else if (typeof(uint[]).AssemblyQualifiedName == assemblyQualifiedName)
        {
            return ExtensionMethodInfo.GetExtensionMethods(typeof(uint[]), typeof(PuertsIl2cpp.ArrayExtension));
        }
        else if (typeof(string[]).AssemblyQualifiedName == assemblyQualifiedName)
        {
            return ExtensionMethodInfo.GetExtensionMethods(typeof(string[]), typeof(PuertsIl2cpp.ArrayExtension));
        }
        else if (typeof(System.Array).AssemblyQualifiedName == assemblyQualifiedName)
        {
            return ExtensionMethodInfo.GetExtensionMethods(typeof(System.Array), typeof(PuertsIl2cpp.ArrayExtension));
        }
        return null;
    }
}
}
#endif