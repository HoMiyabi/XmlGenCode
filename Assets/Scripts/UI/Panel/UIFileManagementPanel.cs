using System;
using System.Collections.Generic;
using Cysharp.Threading.Tasks;
using UnityEngine.EventSystems;

public class UIFileManagementPanel : UIWindowPanel
{
    [NonSerialized] public UnityEngine.RectTransform FileItemRoot;
    [NonSerialized] public UnityEngine.UI.Button     CreateBtn;
    
    private UIFileItem SelectedItem { get; set; }
    private Dictionary<int, UIFileItem> UIFileItemList { get; } = new();

    protected override void Start()
    {
        base.Start();
        CreateBtn.onClick.AddListener(() => FileMgr.Instance.CreateFile().Forget());
        
        // 初始化
        FileItemRoot.DestroyChildren();
        foreach (var file in FileMgr.Instance.FileList)
        {
            OnFileAdded(file);
        }
        
        if (FileMgr.Instance.SelectedFile != null)
        {
            OnFileSelected(FileMgr.Instance.SelectedFile.Id);
        }

        // 注册监听
        FileMgr.Instance.OnFileAdded += OnFileAdded;
        FileMgr.Instance.OnFileSelected += OnFileSelected;
        FileMgr.Instance.OnFileDeleted += OnFileDeleted;
        FileMgr.Instance.OnFileRenamed += OnFileRenamed;
    }

    protected override void OnDestroy()
    {
        base.OnDestroy();
        FileMgr.Instance.OnFileAdded -= OnFileAdded;
        FileMgr.Instance.OnFileSelected -= OnFileSelected;
        FileMgr.Instance.OnFileDeleted -= OnFileDeleted;
        FileMgr.Instance.OnFileRenamed -= OnFileRenamed;
    }

    private void OnFileAdded(FileModel fileModel)
    {
        var item = UIMgr.Instance.Add<UIFileItem>(FileItemRoot);
        item.Set(fileModel.FileName, eventData => FileItem_OnClick(eventData, item, fileModel));
        UIFileItemList[fileModel.Id] = item;
    }

    private void OnFileSelected(int id)
    {
        if (UIFileItemList.TryGetValue(id, out var item))
        {
            SetSelected(item);
        }
    }

    private void OnFileDeleted(int id)
    {
        if (UIFileItemList.TryGetValue(id, out var item))
        {
            if (SelectedItem == item)
            {
                SelectedItem = null;
            }
            UIFileItemList.Remove(id);
            Destroy(item.gameObject);
        }
    }

    private void OnFileRenamed(int id, string newName)
    {
        if (UIFileItemList.TryGetValue(id, out var item))
        {
            item.SetText(newName);
        }
    }

    private void FileItem_OnClick(PointerEventData eventData, UIFileItem item, FileModel file)
    {
        if (eventData.button == PointerEventData.InputButton.Left)
        {
            FileMgr.Instance.SelectFile(file.Id);
        }
        else if (eventData.button == PointerEventData.InputButton.Right)
        {
            var menu = UIMgr.Instance.AddTop<UIContextMenuPanel>();
            menu.AddItem("重命名", () => RenameFile(file));
            menu.AddItem("复制", () => FileMgr.Instance.DuplicateFile(file.Id).Forget());
            menu.AddItem("删除", () => FileMgr.Instance.DeleteFile(file.Id).Forget());
            menu.Finish(eventData.position, eventData.pressEventCamera);
        }
    }

    private void RenameFile(FileModel fileModel)
    {
        string newName = fileModel.FileName + "_renamed";
        FileMgr.Instance.RenameFile(fileModel.Id, newName).Forget();
    }

    private void SetSelected(UIFileItem item)
    {
        if (SelectedItem != null)
        {
            SelectedItem.SetSelected(false);
        }
        SelectedItem = item;
        if (SelectedItem != null)
        {
            SelectedItem.SetSelected(true);
        }
    }
}
