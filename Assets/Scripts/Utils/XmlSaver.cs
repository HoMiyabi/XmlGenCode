using System;
using System.Collections.Generic;
using System.IO;
using System.Text;
using System.Xml;
using System.Xml.Serialization;
using UnityEngine;

public static class XmlSaver
{
    private static readonly XmlWriterSettings DefaultSettings = new XmlWriterSettings
    {
        Encoding = Encoding.UTF8,
        Indent = true,
        IndentChars = "  ",
        NewLineChars = "\n",
        NewLineHandling = NewLineHandling.Replace,
        OmitXmlDeclaration = false
    };

    private static readonly Dictionary<Type, XmlSerializer> SerializerCache = new Dictionary<Type, XmlSerializer>();

    public static string SaveToXml(NodeGraph graph, bool formatted = true)
    {
        if (graph == null)
            throw new ArgumentNullException(nameof(graph));

        try
        {
            var settings = formatted ? DefaultSettings : new XmlWriterSettings
            {
                Encoding = Encoding.UTF8,
                OmitXmlDeclaration = false
            };

            using var ms = new MemoryStream();
            using var writer = XmlWriter.Create(ms, settings);

            var serializer = GetOrCreateSerializer(typeof(NodeGraph), NodeGraph.XmlExtraTypes);
            serializer.Serialize(writer, graph);

            return Encoding.UTF8.GetString(ms.ToArray());
        }
        catch (Exception ex)
        {
            Debug.LogError($"保存XML时出错: {ex.Message}");
            throw new InvalidOperationException("XML保存失败", ex);
        }
    }

    public static void SaveToFile(NodeGraph graph, string filePath, bool formatted = true)
    {
        if (string.IsNullOrEmpty(filePath))
            throw new ArgumentException("文件路径不能为空", nameof(filePath));

        try
        {
            string directory = Path.GetDirectoryName(filePath);
            if (!string.IsNullOrEmpty(directory) && !Directory.Exists(directory))
            {
                Directory.CreateDirectory(directory);
            }

            var xml = SaveToXml(graph, formatted);

            File.WriteAllText(filePath, xml, Encoding.UTF8);
            Debug.Log($"XML已保存到: {filePath}");
        }
        catch (Exception ex)
        {
            Debug.LogError($"保存XML文件时出错: {ex.Message}");
            throw;
        }
    }

    public static async void SaveToFileAsync(NodeGraph graph, string filePath, bool formatted = true, Action<float> onProgress = null)
    {
        if (string.IsNullOrEmpty(filePath))
            throw new ArgumentException("文件路径不能为空", nameof(filePath));

        onProgress?.Invoke(0f);

        await System.Threading.Tasks.Task.Run(() =>
        {
            try
            {
                onProgress?.Invoke(0.3f);

                string directory = Path.GetDirectoryName(filePath);
                if (!string.IsNullOrEmpty(directory) && !Directory.Exists(directory))
                {
                    Directory.CreateDirectory(directory);
                }

                onProgress?.Invoke(0.5f);

                var xml = SaveToXml(graph, formatted);
                onProgress?.Invoke(0.8f);

                File.WriteAllText(filePath, xml, Encoding.UTF8);
                onProgress?.Invoke(1f);

                Debug.Log($"XML已异步保存到: {filePath}");
            }
            catch (Exception ex)
            {
                Debug.LogError($"异步保存XML文件时出错: {ex.Message}");
                onProgress?.Invoke(-1f);
                throw;
            }
        });
    }

    private static XmlSerializer GetOrCreateSerializer(Type type, Type[] extraTypes = null)
    {
        if (!SerializerCache.TryGetValue(type, out var serializer))
        {
            serializer = extraTypes != null
                ? new XmlSerializer(type, extraTypes)
                : new XmlSerializer(type);
            SerializerCache[type] = serializer;
        }

        return serializer;
    }

    public static void ClearCache()
    {
        SerializerCache.Clear();
    }

    public static bool ValidateXml(string xml)
    {
        try
        {
            var doc = new XmlDocument();
            doc.LoadXml(xml);
            return true;
        }
        catch
        {
            return false;
        }
    }
}