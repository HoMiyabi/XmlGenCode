using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;

public class UIFileItem : UIBaseView, IPointerClickHandler
{
    public Graphic targetGraphic;
    public Color normalColor = Color.white;
    public Color selectedColor = Color.white;
    public TMPro.TMP_Text FileNameText;
    
    public UIFileManagementPanel Panel { get; set; }

    private bool isSelected;
    
    public FileModel FileModel { get; set; }
    
    public NodeGraphUI NodeGraphUI { get; set; }

    public void Set(UIFileManagementPanel panel, FileModel model, NodeGraphUI nodeGraphUI)
    {
        Panel = panel;
        FileModel = model;
        if (FileNameText != null)
        {
            FileNameText.text = model.FileName;
        }
        
        NodeGraphUI = nodeGraphUI;
    }
    
    public void OnPointerClick(PointerEventData eventData)
    {
        if (eventData.button == PointerEventData.InputButton.Left)
        {
            if (!isSelected)
            {
                Panel.SetSelected(this);
            }
        }
        else if (eventData.button == PointerEventData.InputButton.Right)
        {
            Panel.SetSelected(this);
            var menu = UIMgr.Instance.AddTop<UIContextMenuPanel>();
            menu.AddItem("重命名", RenameFile);
            menu.AddItem("删除", DeleteFile);
            menu.Finish(eventData.position, eventData.pressEventCamera);
        }
    }
    
    public void SetSelected(bool value)
    {
        isSelected = value;
        targetGraphic.color = value ? selectedColor : normalColor;
    }
    
    public void RenameFile()
    {
        Debug.Log($"Rename file: {FileModel.FileName}");
    }

    public void DeleteFile()
    {
        Debug.Log($"Delete file: {FileModel.FileName}");
    }
}