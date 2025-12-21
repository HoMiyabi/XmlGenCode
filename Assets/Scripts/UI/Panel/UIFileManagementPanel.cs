using System;
using System.Collections;
using System.Collections.Generic;
using Newtonsoft.Json;
using UnityEngine;
using UnityEngine.Networking;

public class UIFileManagementPanel : UIWindowPanel
{
    [NonSerialized] public UnityEngine.RectTransform FileItemRoot;
    
    public UIMainPanel MainPanel { get; set; }
    
    private UIFileItem selectedItem;
    private string fileListApi = "";

    protected override void Start()
    {
        base.Start();
        StartCoroutine(GetFiles());
    }

    private IEnumerator GetFiles()
    {
        if (string.IsNullOrEmpty(fileListApi))
        {
            Debug.LogWarning("File list API is empty.");
            yield break;
        }

        WWWForm form = new WWWForm();
        using var webRequest = UnityWebRequest.Post(fileListApi, form);
        yield return webRequest.SendWebRequest();

        if (webRequest.result != UnityWebRequest.Result.Success)
        {
            Debug.LogError($"Error fetching files: {webRequest.error}");
        }
        else
        {
            string jsonResponse = webRequest.downloadHandler.text;
            List<FileModel> files = JsonConvert.DeserializeObject<List<FileModel>>(jsonResponse);
            if (files != null)
            {
                foreach (var file in files)
                {
                    if (!string.IsNullOrEmpty(file.FileContent))
                    {
                        try
                        {
                            byte[] data = Convert.FromBase64String(file.FileContent);
                            file.FileContent = System.Text.Encoding.UTF8.GetString(data);
                        }
                        catch (Exception ex)
                        {
                            Debug.LogError($"Error decoding base64 content for file {file.FileName}: {ex.Message}");
                        }
                    }
                }
            }
            UpdateFiles(files);
        }
    }

    private void UpdateFiles(List<FileModel> files)
    {
        // Clear existing items
        FileItemRoot.DetachChildren();

        if (files == null) return;

        foreach (var fileModel in files)
        {
            var nodeGraphUI = MainPanel.AddNodeGraphUI(fileModel.FileContent);
            
            var item = UIMgr.Instance.Add<UIFileItem>(FileItemRoot);
            item.Set(this, fileModel, nodeGraphUI);
        }
    }

    public void SetSelected(UIFileItem item)
    {
        if (selectedItem != null)
        {
            selectedItem.SetSelected(false);
        }
        selectedItem = item;
        if (selectedItem != null)
        {
            selectedItem.SetSelected(true);
        }
    }
}
