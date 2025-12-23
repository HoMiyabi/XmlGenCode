using System;
using System.Collections.Generic;
using System.Text;
using Cysharp.Threading.Tasks;
using Newtonsoft.Json;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.Networking;

public class UIFileManagementPanel : UIWindowPanel
{
    [NonSerialized] public UnityEngine.RectTransform FileItemRoot;
    [NonSerialized] public UnityEngine.UI.Button     CreateBtn;
    
    public event Action         OnFilesCleared;
    public event Action<string> OnFileAdded;
    public event Action<int>    OnFileSelected;
    public event Action<int>    OnFileRemoved;
    
    private UIFileItem SelectedItem { get; set; }
    private FileModel SelectedFileModel { get; set; }
    private List<FileModel> FileList { get; } = new();
    private List<UIFileItem> UIFileItemList { get; } = new();
    
    private const string BaseUrl = "http://localhost:5000";

    protected override void Start()
    {
        base.Start();
        
        CreateBtn.onClick.AddListener(() => CreateFile().Forget());
        FileItemRoot.DestroyChildren();
    }

    public void Init()
    {
        GetFiles().Forget();
    }

    private async UniTask<HttpResult<T>> PostRequest<T>(string path, object data = null)
    {
        string url = BaseUrl + path;
        string json = data != null ? JsonConvert.SerializeObject(data) : "{}";
        byte[] bodyRaw = Encoding.UTF8.GetBytes(json);

        var webRequest = new UnityWebRequest(url, "POST");
        webRequest.uploadHandler = new UploadHandlerRaw(bodyRaw);
        webRequest.downloadHandler = new DownloadHandlerBuffer();
        webRequest.SetRequestHeader("Content-Type", "application/json");

        try
        {
            await webRequest.SendWebRequest().ToUniTask();

            if (webRequest.result != UnityWebRequest.Result.Success)
            {
                Debug.LogError($"Error requesting {path}: {webRequest.error}");
                return new HttpResult<T> { Code = -1, Msg = webRequest.error };
            }

            string jsonResponse = webRequest.downloadHandler.text;
            return JsonConvert.DeserializeObject<HttpResult<T>>(jsonResponse);
        }
        catch (Exception ex)
        {
            Debug.LogError($"Exception during request {path}: {ex.Message}");
            return new HttpResult<T> { Code = -1, Msg = ex.Message };
        }
    }

    private async UniTask GetFiles()
    {
        var result = await PostRequest<List<FileModel>>("/get_all_files");
        if (result != null && result.IsSuccess)
        {
            FileList.Clear();
            if (result.Data != null)
            {
                FileList.AddRange(result.Data);
            }

            if (FileList.Count == 0)
            {
                await CreateFile();
                return;
            }
            
            FileItemRoot.DestroyChildren();
            UIFileItemList.Clear();
            SelectedItem = null;
            SelectedFileModel = null;

            OnFilesCleared?.Invoke();

            foreach (var file in FileList)
            {
                DecodeFileContent(file);
                Debug.Log(file.FileContent);
                AddFileItem(file);
                OnFileAdded?.Invoke(file.FileContent);
            }

            if (UIFileItemList.Count > 0)
            {
                SelectFile(UIFileItemList[0], FileList[0]);
            }
        }
        else
        {
            Debug.LogError($"Failed to get files: {result?.Msg}");
        }
    }

    private void DecodeFileContent(FileModel file)
    {
        if (!string.IsNullOrEmpty(file.FileContent))
        {
            try
            {
                byte[] data = Convert.FromBase64String(file.FileContent);
                file.FileContent = Encoding.UTF8.GetString(data);
            }
            catch (Exception ex)
            {
                Debug.LogError($"Error decoding base64 content for file {file.FileName}: {ex.Message}");
            }
        }
    }

    private string EncodeFileContent(string content)
    {
        if (string.IsNullOrEmpty(content)) return "";
        byte[] data = Encoding.UTF8.GetBytes(content);
        return Convert.ToBase64String(data);
    }

    private UIFileItem AddFileItem(FileModel fileModel)
    {
        var item = UIMgr.Instance.Add<UIFileItem>(FileItemRoot);
        item.Set(fileModel.FileName, eventData => FileItem_OnClick(eventData, item, fileModel));
        UIFileItemList.Add(item);
        return item;
    }
    
    private void FileItem_OnClick(PointerEventData eventData, UIFileItem item, FileModel fileModel)
    {
        if (eventData.button == PointerEventData.InputButton.Left)
        {
            SelectFile(item, fileModel);
        }
        else if (eventData.button == PointerEventData.InputButton.Right)
        {
            var menu = UIMgr.Instance.AddTop<UIContextMenuPanel>();
            menu.AddItem("重命名", () => RenameFile(fileModel).Forget());
            menu.AddItem("删除", () => DeleteFile(fileModel).Forget());
            menu.Finish(eventData.position, eventData.pressEventCamera);
        }
    }

    private void SelectFile(UIFileItem item, FileModel fileModel)
    {
        SetSelected(item, fileModel);
        int index = FileList.IndexOf(fileModel);
        OnFileSelected?.Invoke(index);
    }

    public async UniTask CreateFile()
    {
        var result = await PostRequest<FileModel>("/create_file");
        if (result != null && result.IsSuccess)
        {
            var fileModel = result.Data;
            DecodeFileContent(fileModel);
            FileList.Add(fileModel);
            var item = AddFileItem(fileModel);
            OnFileAdded?.Invoke(fileModel.FileContent);
            SelectFile(item, fileModel);
        }
        else
        {
            Debug.LogError($"Failed to create file: {result?.Msg}");
        }
    }

    private async UniTask RenameFile(FileModel fileModel)
    {
        // 这里简单处理，实际可能需要一个输入框 UI
        Debug.Log($"Rename file {fileModel.Id} requested.");
        
        // 模拟输入新文件名
        string newName = fileModel.FileName + "_renamed";
        
        var result = await PostRequest<object>("/update_file_name", new { Id = fileModel.Id, FileName = newName });
        if (result != null && result.IsSuccess)
        {
            fileModel.FileName = newName;
            int index = FileList.IndexOf(fileModel);
            if (index != -1)
            {
                UIFileItemList[index].SetText(newName);
            }
        }
        else
        {
            Debug.LogError($"Failed to rename file: {result?.Msg}");
        }
    }
    
    private async UniTask DeleteFile(FileModel fileModel)
    {
        var result = await PostRequest<object>("/delete_file", new { Id = fileModel.Id });
        if (result != null && result.IsSuccess)
        {
            int index = FileList.IndexOf(fileModel);
            if (index == -1) return;

            var item = UIFileItemList[index];
            bool wasSelected = SelectedItem == item;
            
            FileList.RemoveAt(index);
            UIFileItemList.RemoveAt(index);
            OnFileRemoved?.Invoke(index);
            Destroy(item.gameObject);

            if (wasSelected)
            {
                SelectedItem = null;
                SelectedFileModel = null;
            }

            if (FileList.Count > 0)
            {
                if (wasSelected)
                {
                    // 重新选择第一项
                    SelectFile(UIFileItemList[0], FileList[0]);
                }
            }
            else
            {
                await CreateFile();
            }
        }
        else
        {
            Debug.LogError($"Failed to delete file: {result?.Msg}");
        }
    }

    public async UniTask UpdateFileContent(string xml)
    {
        if (SelectedFileModel == null)
        {
            Debug.LogWarning("No file selected.");
            return;
        }

        if (string.IsNullOrEmpty(xml)) return;
        
        string base64Content = EncodeFileContent(xml);

        var result = await PostRequest<object>("/update_file_content", new { Id = SelectedFileModel.Id, FileContent = base64Content });
        if (result != null && result.IsSuccess)
        {
            Debug.Log("File content updated successfully.");
            SelectedFileModel.FileContent = xml; // 更新本地缓存
        }
        else
        {
            Debug.LogError($"Failed to update file content: {result?.Msg}");
        }
    }

    private void SetSelected(UIFileItem item, FileModel fileModel)
    {
        if (SelectedItem != null)
        {
            SelectedItem.SetSelected(false);
        }
        SelectedItem = item;
        SelectedFileModel = fileModel;
        if (SelectedItem != null)
        {
            SelectedItem.SetSelected(true);
        }
    }
}
