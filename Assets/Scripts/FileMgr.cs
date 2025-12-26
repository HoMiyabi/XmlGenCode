using System;
using System.Collections.Generic;
using System.Text;
using Cysharp.Threading.Tasks;
using Newtonsoft.Json;
using UnityEngine;
using UnityEngine.Networking;

public class FileMgr : UnitySingleton<FileMgr>
{
    public event Action<FileModel> OnFileAdded;
    public event Action<int>       OnFileSelected;
    public event Action<int>       OnFileDeleted;
    public event Action<int, string> OnFileRenamed;

    public List<FileModel> FileList { get; } = new();

    private FileModel selectedFile;
    public FileModel SelectedFile
    {
        get => selectedFile;
        private set
        {
            selectedFile = value;
            if (selectedFile != null)
            {
                OnFileSelected?.Invoke(selectedFile.Id);
            }
        }
    }
    
    private const string BaseUrl = "http://localhost:5000";

    protected override void Awake()
    {
        base.Awake();
        GetAllFiles().Forget();
    }

    private static async UniTask<HttpResult<T>> PostRequest<T>(string path, object data = null)
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

    private async UniTask GetAllFiles()
    {
        var result = await PostRequest<List<FileModel>>("/get_all_files");
        if (result != null && result.IsSuccess)
        {
            FileList.Clear();
            SelectedFile = null;

            if (result.Data == null || result.Data.Count == 0)
            {
                await CreateFile();
            }
            else
            {
                result.Data.Sort((a, b) => a.Id.CompareTo(b.Id));

                foreach (var file in result.Data)
                {
                    DecodeFileContent(file);
                    AddFile(file);
                }

                if (FileList.Count > 0)
                {
                    SelectedFile = FileList[0];
                }
            }
        }
        else
        {
            Debug.LogError($"Failed to get files: {result?.Msg}");
        }
    }

    private void AddFile(FileModel file)
    {
        FileList.Add(file);
        OnFileAdded?.Invoke(file);
    }

    public void SelectFile(int id)
    {
        SelectedFile = FileList.Find(f => f.Id == id);
    }

    #region API
    
    public async UniTask CreateFile()
    {
        var result = await PostRequest<FileModel>("/create_file");
        if (result != null && result.IsSuccess)
        {
            var file = result.Data;
            DecodeFileContent(file);
            AddFile(file);
            SelectedFile = file;
        }
        else
        {
            Debug.LogError($"Failed to create file: {result?.Msg}");
        }
    }

    public async UniTask RenameFile(int id, string newName)
    {
        var result = await PostRequest<object>("/update_file_name", new { Id = id, FileName = newName });
        if (result != null && result.IsSuccess)
        {
            var fileModel = FileList.Find(f => f.Id == id);
            fileModel.FileName = newName;
            OnFileRenamed?.Invoke(fileModel.Id, newName);
        }
        else
        {
            Debug.LogError($"Failed to rename file: {result?.Msg}");
        }
    }

    public async UniTask DuplicateFile(int id)
    {
        var result = await PostRequest<FileModel>("/duplicate_file", new { Id = id });
        if (result != null && result.IsSuccess)
        {
            var newFile = result.Data;
            DecodeFileContent(newFile);
            AddFile(newFile);
            Debug.Log($"File duplicated: {newFile.FileName} (Id: {newFile.Id})");
        }
        else
        {
            Debug.LogError($"Failed to duplicate file: {result?.Msg}");
        }
    }

    public async UniTask DeleteFile(int id)
    {
        var result = await PostRequest<object>("/delete_file", new { Id = id });
        if (result != null && result.IsSuccess)
        {
            int index = FileList.FindIndex(f => f.Id == id);
            if (index == -1) return;

            bool wasSelected = SelectedFile == FileList[index];

            FileList.RemoveAt(index);
            OnFileDeleted?.Invoke(id);

            if (wasSelected)
            {
                SelectedFile = null;
            }

            if (FileList.Count > 0)
            {
                if (wasSelected)
                {
                    // 选择原本位置的下一个，或者最后一个
                    int nextIndex = Mathf.Clamp(index, 0, FileList.Count - 1);
                    SelectFile(FileList[nextIndex].Id);
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
        if (SelectedFile == null)
        {
            Debug.LogWarning("No file selected.");
            return;
        }

        if (string.IsNullOrEmpty(xml)) return;
        
        string base64Content = EncodeFileContent(xml);

        var result = await PostRequest<object>("/update_file_content", new { Id = SelectedFile.Id, FileContent = base64Content });
        if (result != null && result.IsSuccess)
        {
            Debug.Log("File content updated successfully.");
            SelectedFile.FileContent = xml;
        }
        else
        {
            Debug.LogError($"Failed to update file content: {result?.Msg}");
        }
    }

    #endregion

    private static void DecodeFileContent(FileModel file)
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

    private static string EncodeFileContent(string content)
    {
        if (string.IsNullOrEmpty(content)) return "";
        byte[] data = Encoding.UTF8.GetBytes(content);
        return Convert.ToBase64String(data);
    }
}
