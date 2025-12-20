using System;
using System.Collections.Generic;
using System.IO;
using SimpleFileBrowser;
using UnityEngine;
using UnityEngine.EventSystems;

public class UIBlockGraph : UIBaseSubView, IDragHandler, IScrollHandler
{
    [NonSerialized] public UITip                     Tip;
    [NonSerialized] public UnityEngine.RectTransform BlockRoot;


    private float MinScale = 0.6f;
    private float MaxScale = 3f;
    
    // Model to View
    public void SetBlockGraph(BlockGraph blockGraph)
    {
        if (blockGraph == null || BlockRoot == null) return;

        // 清理现有的块
        BlockRoot.DestroyChildren();

        // 设置根节点的变换
        BlockRoot.anchoredPosition = blockGraph.blockRootAnchoredPosition;
        BlockRoot.localScale = new Vector3(blockGraph.blockRootLocalScale, blockGraph.blockRootLocalScale, 1);

        // 获取 UIMainPanel 引用
        var mainPanel = GetComponentInParent<UIMainPanel>();
        if (mainPanel == null)
        {
            Debug.LogError("UIBlockGraph: Cannot find UIMainPanel in parent hierarchy");
            return;
        }

        // 遍历并创建每个块组
        foreach (var blockGroup in blockGraph.blockGroups)
        {
            if (blockGroup.first != null)
            {
                // 使用 UIBuilderRegistry 构建 UI
                // 不自动处理next，因为AST中已经包含了完整的next链
                var uiBlock = UIBuilderRegistry.Instance.Build(blockGroup.first, mainPanel, null, false);
                if (uiBlock != null)
                {
                    // UI已经添加到了BlockRoot，只需要设置位置
                    uiBlock.RectTransform.anchoredPosition = blockGroup.anchoredPosition;
                }
                else
                {
                    Debug.LogWarning($"Failed to create UI for block of type {blockGroup.first.GetType().Name}");
                }
            }
        }
    }
    
    // View to Model
    public BlockGraph GetBlockGraph()
    {
        var blockGraph = new BlockGraph();
        var allBlocks = new List<UIBaseBlock>();

        // 收集所有UIBaseBlock
        foreach (Transform child in BlockRoot)
        {
            if (child.TryGetComponent<UIBaseBlock>(out var uiBaseBlock))
            {
                allBlocks.Add(uiBaseBlock);
            }
        }

        // 找出所有根节点（没有被其他块的nextSocket连接的块）
        var connectedBlocks = new HashSet<UIBaseBlock>();
        Debug.Log($"开始分析 {allBlocks.Count} 个块的连接关系:");

        foreach (var block in allBlocks)
        {
            // 检查这个块的nextSocket是否连接了其他块
            var nextSocketField = block.GetType().GetField("nextSocket",
                System.Reflection.BindingFlags.NonPublic | System.Reflection.BindingFlags.Instance);

            UISocket nextSocket = null;
            if (nextSocketField != null)
            {
                nextSocket = nextSocketField.GetValue(block) as UISocket;
            }

            if (nextSocket != null && nextSocket.UIBaseBlock != null)
            {
                connectedBlocks.Add(nextSocket.UIBaseBlock);
                Debug.Log($"  {block.GetType().Name} -> {nextSocket.UIBaseBlock.GetType().Name}");
            }
            else
            {
                Debug.Log($"  {block.GetType().Name} - nextSocket未连接或为空");
            }
        }

        // 为每个根节点创建BlockGroup
        var rootBlocks = new List<UIBaseBlock>();
        foreach (var block in allBlocks)
        {
            if (!connectedBlocks.Contains(block))
            {
                rootBlocks.Add(block);
                blockGraph.blockGroups.Add(new BlockGroup()
                {
                    anchoredPosition = block.RectTransform.anchoredPosition,
                    first = block.ToAST()
                });
            }
        }

        Debug.Log($"保存了 {blockGraph.blockGroups.Count} 个块组，总共 {allBlocks.Count} 个块，根节点: {rootBlocks.Count} 个");

        // 输出调试信息
        foreach (var block in rootBlocks)
        {
            Debug.Log($"根节点: {block.GetType().Name} at {block.RectTransform.anchoredPosition}");
        }
        return blockGraph;
    }

    private void Save()
    {
        FileBrowser.ShowSaveDialog(paths =>
            {
                string path = paths[0];
                var blockGraph = GetBlockGraph();

                XmlSaver.SaveToFile(blockGraph, path, formatted: true);

                Tip.ShowTip($"XML已成功保存到: {Path.GetFileName(path)}");
            }, () => { Debug.Log("保存对话框已取消"); }, FileBrowser.PickMode.Files, false, null,
            "code.xml", "保存算法XML", "保存");
    }

    public void OnDrag(PointerEventData eventData)
    {
        if (eventData.button != PointerEventData.InputButton.Left) return;

        // 移动
        BlockRoot.anchoredPosition += eventData.delta;
    }

    public void OnScroll(PointerEventData eventData)
    {
        // 滚轮向下缩小，滚轮向上放大
        // scrollDelta.y向下为负
        if (RectTransformUtility.ScreenPointToLocalPointInRectangle(BlockRoot,
                eventData.position, eventData.pressEventCamera, out var localPoint))
        {
            // 记录缩放前的比例
            float oldScale = BlockRoot.localScale.x;
            
            // 计算缩放增量
            float scaleDelta = GetScaleDelta(eventData.scrollDelta.y);
            
            // 计算缩放后的目标比例（限制在最小/最大范围内）
            float newScale = Mathf.Clamp(oldScale + scaleDelta, MinScale, MaxScale);

            // 关键：计算位置偏移，抵消缩放导致的鼠标点偏移
            // 原理：缩放前后鼠标点在父空间中的位置应保持一致，通过调整位置补偿缩放差
            var offset = localPoint * (oldScale - newScale);

            // 先调整位置，再应用新缩放（顺序影响最终效果）
            BlockRoot.anchoredPosition += offset;
            BlockRoot.localScale = new Vector3(newScale, newScale, 1);

            Tip.ShowTip($"{newScale:F1}X");
        }
    }

    private float GetScaleDelta(float scrollDelta)
    {
        if (scrollDelta > 0f)
        {
            scrollDelta = 1f;
        }
        else if (scrollDelta < 0f)
        {
            scrollDelta = -1f;
        }
        else
        {
            scrollDelta = 0f;
        }
        return scrollDelta * 0.2f;
    }
}