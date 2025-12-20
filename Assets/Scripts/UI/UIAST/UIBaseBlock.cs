using System.Collections.Generic;
using DG.Tweening;
using UnityEngine;
using UnityEngine.EventSystems;

[RequireComponent(typeof(CanvasGroup))]
public abstract class UIBaseBlock : MonoBehaviour, IDragHandler, IBeginDragHandler, IEndDragHandler
{
    public UIMainPanel main;
    public bool isSelectBlock; // 是否为左侧选择积木

    public RectTransform RectTransform { get; private set; }
    private CanvasGroup CanvasGroup { get; set; }

    private readonly Vector3[] corners = new Vector3[4];
    private readonly List<RaycastResult> results = new();
    private UISocket connectedSocket;

    private UISocket onDragConnectableSocket;

    protected readonly List<UISocket> ignoreSockets = new();

    private Vector2 prevMousePosLS;

    private bool isDragging;

    public abstract BaseBlock ToAST();

    /// <summary>
    /// 从AST节点构建UI
    /// 子类可以重写此方法来实现特定的构建逻辑
    /// </summary>
    /// <param name="astNode">AST节点</param>
    public virtual void BuildFromAST(BaseBlock astNode)
    {
        // 默认实现：使用反射设置属性
        if (astNode == null) return;

        var astType = astNode.GetType();
        var uiType = GetType();

        // 获取AST节点的所有公共字段
        var astFields = astType.GetFields(System.Reflection.BindingFlags.Public | System.Reflection.BindingFlags.Instance);

        foreach (var field in astFields)
        {
            // 跳过next字段，它由调用者处理
            if (field.Name == "next") continue;

            var value = field.GetValue(astNode);
            if (value == null) continue;

            // 尝试在UI类中找到对应的字段或属性
            var uiField = uiType.GetField(field.Name);
            if (uiField != null && uiField.FieldType == typeof(UIExpressionField))
            {
                // 如果是ExpressionField，递归构建子UI
                if (value is ExpressionBlock exprBlock)
                {
                    var childUI = UIBuilderRegistry.Instance.Build(exprBlock, main, null, false);
                    if (childUI != null && uiField.GetValue(this) is UIExpressionField expressionField)
                    {
                        expressionField.socket.Connect(childUI);
                    }
                }
            }
            else if (uiField != null && uiField.FieldType == typeof(UIVariableField))
            {
                // 如果是VariableField，设置文本
                if (value is string stringValue)
                {
                    if (uiField.GetValue(this) is UIVariableField variableField)
                    {
                        var inputField = variableField.GetComponentInChildren<TMPro.TMP_InputField>();
                        if (inputField != null)
                        {
                            inputField.text = stringValue;
                        }
                    }
                }
            }
        }
    }

    protected virtual void OnAddToGraph()
    {
    }

    protected virtual void Awake()
    {
        RectTransform = transform as RectTransform;
        CanvasGroup = GetComponent<CanvasGroup>();
        if (RectTransform == null)
        {
            Debug.LogError("UIStatementBlock: RectTransform is null");
        }
    }

    public void OnDrag(PointerEventData eventData)
    {
        if (eventData.button != PointerEventData.InputButton.Left) return;


        if (RectTransformUtility.ScreenPointToLocalPointInRectangle((RectTransform)transform.parent,
                eventData.position, eventData.pressEventCamera, out var mousePosLS))
        {
            RectTransform.anchoredPosition += mousePosLS - prevMousePosLS;
            prevMousePosLS = mousePosLS;
        }

        if (onDragConnectableSocket)
        {
            onDragConnectableSocket.ClearConnectTip();
        }

        onDragConnectableSocket = GetConnectableSocket();
        if (onDragConnectableSocket)
        {
            onDragConnectableSocket.SetConnectTip();
        }
    }

    public void OnBeginDrag(PointerEventData eventData)
    {
        if (eventData.button != PointerEventData.InputButton.Left) return;

        isDragging = true;

        if (connectedSocket)
        {
            connectedSocket.Disconnect(this);
            connectedSocket = null;
        }

        if (isSelectBlock)
        {
            // 从选择区域拖出，复制一个放回选择区域
            var go = Instantiate(gameObject, transform.parent, true);
            go.name = gameObject.name;
            go.transform.SetSiblingIndex(transform.GetSiblingIndex());

            isSelectBlock = false;
            transform.SetParent(main.UIBlockGraph.BlockRoot, true);
            transform.localScale = Vector3.one;
            OnAddToGraph();
        }

        transform.SetParent(main.Top, true);

        RectTransformUtility.ScreenPointToLocalPointInRectangle((RectTransform)transform.parent,
            eventData.position, eventData.pressEventCamera, out prevMousePosLS);
    }

    public void OnEndDrag(PointerEventData eventData)
    {
        if (eventData.button != PointerEventData.InputButton.Left) return;

        isDragging = false;

        if (AtSelectArea())
        {
            ThrowBlocks();
        }
        else
        {
            transform.SetParent(main.UIBlockGraph.BlockRoot, true);

            if (onDragConnectableSocket)
            {
                onDragConnectableSocket.ClearConnectTip();
            }

            if (!connectedSocket && onDragConnectableSocket)
            {
                onDragConnectableSocket.Connect(this);
                connectedSocket = onDragConnectableSocket;
            }
        }
    }

    private void ThrowBlocks()
    {
        // SetPivotWithoutMoving(RectTransform, new Vector2(0.5f, 0.5f));
        RectTransform.DOScale(0.1f, 0.25f);
        CanvasGroup.DOFade(0f, 0.25f).OnComplete(() => { Destroy(gameObject); });
    }

    private UISocket GetConnectableSocket()
    {
        RectTransform.GetWorldCorners(corners);
        var leftTopWS = corners[1];
        var leftTopSS = RectTransformUtility.WorldToScreenPoint(null, leftTopWS);

        var myEventData = new PointerEventData(EventSystem.current);
        myEventData.position = leftTopSS;
        EventSystem.current.RaycastAll(myEventData, results);

        foreach (var result in results)
        {
            if (result.gameObject.TryGetComponent(out UISocket socket) &&
                !ignoreSockets.Contains(socket) &&
                socket.CanConnect(GetType()))
            {
                return socket;
            }
        }
        return null;
    }

    private bool AtSelectArea()
    {
        RectTransform.GetWorldCorners(corners);
        var leftTopWS = corners[1];
        var leftTopSS = RectTransformUtility.WorldToScreenPoint(null, leftTopWS);

        var eve = new PointerEventData(EventSystem.current)
        {
            position = leftTopSS
        };
        EventSystem.current.RaycastAll(eve, results);

        foreach (var result in results)
        {
            if (result.gameObject == main.SelectArea.gameObject)
            {
                return true;
            }
        }
        return false;
    }

    // /// <summary>
    // /// 修改UI元素的pivot，同时保持视觉位置不变
    // /// </summary>
    // /// <param name="rectTransform">目标UI的RectTransform</param>
    // /// <param name="newPivot">新的pivot值（范围0~1）</param>
    // public static void SetPivotWithoutMoving(RectTransform rectTransform, Vector2 newPivot)
    // {
    //     if (rectTransform == null)
    //     {
    //         Debug.LogError("RectTransform不能为空！");
    //         return;
    //     }
    //
    //     // 记录原始数据
    //     Vector2 oldPivot = rectTransform.pivot;
    //     Vector2 oldAnchoredPos = rectTransform.anchoredPosition;
    //
    //     // 获取元素自身尺寸（不受父节点缩放影响）
    //     Rect rect = rectTransform.rect;
    //     float width = rect.width;
    //     float height = rect.height;
    //
    //     // 计算pivot变化导致的偏移量
    //     float offsetX = (newPivot.x - oldPivot.x) * width;
    //     float offsetY = (newPivot.y - oldPivot.y) * height;
    //
    //     // 应用新pivot
    //     rectTransform.pivot = newPivot;
    //
    //     // 调整位置抵消偏移
    //     rectTransform.anchoredPosition = new Vector2(
    //         oldAnchoredPos.x + offsetX,
    //         oldAnchoredPos.y + offsetY
    //     );
    // }
}