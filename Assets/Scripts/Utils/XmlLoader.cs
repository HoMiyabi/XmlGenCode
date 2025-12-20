using System;
using System.Collections.Generic;
using System.IO;
using System.Text;
using System.Xml;
using System.Xml.Serialization;
using UnityEngine;

public static class XmlLoader
{
    private static readonly XmlReaderSettings DefaultSettings = new XmlReaderSettings
    {
        XmlResolver = null,
        DtdProcessing = DtdProcessing.Prohibit,
        MaxCharactersFromEntities = 1024,
        MaxCharactersInDocument = 1024 * 1024 * 10, // 10MB
        IgnoreWhitespace = true,
        IgnoreComments = true
    };

    private static readonly Dictionary<Type, XmlSerializer> SerializerCache = new Dictionary<Type, XmlSerializer>();

    public static BlockGraph LoadFromXml(string xml)
    {
        if (string.IsNullOrEmpty(xml))
            throw new ArgumentException("XML内容不能为空", nameof(xml));

        try
        {
            using var stringReader = new StringReader(xml);
            using var reader = XmlReader.Create(stringReader, DefaultSettings);

            var serializer = GetOrCreateSerializer(typeof(BlockGraph), BlockGraph.XmlExtraTypes);

            if (serializer.Deserialize(reader) is BlockGraph graph)
            {
                Debug.Log("XML加载成功");
                return graph;
            }

            throw new InvalidOperationException("无法将XML反序列化为BlockGraph对象");
        }
        catch (XmlException ex)
        {
            Debug.LogError($"XML格式错误: {ex.Message}");
            throw new InvalidOperationException("XML格式无效", ex);
        }
        catch (InvalidOperationException ex)
        {
            Debug.LogError($"XML反序列化错误: {ex.Message}");
            throw;
        }
        catch (Exception ex)
        {
            Debug.LogError($"加载XML时出错: {ex.Message}");
            throw new InvalidOperationException("XML加载失败", ex);
        }
    }

    public static BlockGraph LoadFromFile(string filePath)
    {
        if (string.IsNullOrEmpty(filePath))
            throw new ArgumentException("文件路径不能为空", nameof(filePath));

        if (!File.Exists(filePath))
            throw new FileNotFoundException($"文件不存在: {filePath}");

        try
        {
            string xml = File.ReadAllText(filePath, Encoding.UTF8);
            return LoadFromXml(xml);
        }
        catch (Exception ex)
        {
            Debug.LogError($"从文件加载XML时出错: {ex.Message}");
            throw;
        }
    }

    public static async System.Threading.Tasks.Task<BlockGraph> LoadFromFileAsync(string filePath, Action<float> onProgress = null)
    {
        if (string.IsNullOrEmpty(filePath))
            throw new ArgumentException("文件路径不能为空", nameof(filePath));

        if (!File.Exists(filePath))
            throw new FileNotFoundException($"文件不存在: {filePath}");

        onProgress?.Invoke(0f);

        return await System.Threading.Tasks.Task.Run(() =>
        {
            try
            {
                onProgress?.Invoke(0.2f);

                string xml = File.ReadAllText(filePath, Encoding.UTF8);
                onProgress?.Invoke(0.6f);

                var graph = LoadFromXml(xml);
                onProgress?.Invoke(1f);

                Debug.Log($"XML已从文件异步加载: {filePath}");
                return graph;
            }
            catch (Exception ex)
            {
                Debug.LogError($"异步从文件加载XML时出错: {ex.Message}");
                onProgress?.Invoke(-1f);
                throw;
            }
        });
    }

    public static bool ValidateXmlFile(string filePath)
    {
        try
        {
            if (!File.Exists(filePath))
                return false;

            string xml = File.ReadAllText(filePath, Encoding.UTF8);
            return ValidateXml(xml);
        }
        catch
        {
            return false;
        }
    }

    public static bool ValidateXml(string xml)
    {
        if (string.IsNullOrEmpty(xml))
            return false;

        try
        {
            using var stringReader = new StringReader(xml);
            using var reader = XmlReader.Create(stringReader, DefaultSettings);

            var serializer = GetOrCreateSerializer(typeof(BlockGraph), BlockGraph.XmlExtraTypes);
            var obj = serializer.Deserialize(reader);

            return obj is BlockGraph;
        }
        catch
        {
            return false;
        }
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
}