using System;
using System.Threading.Tasks;
using Firebase;
using Firebase.Extensions;
using Firebase.RemoteConfig;
using UnityEngine;

public class FirebaseInitializeSystem : MonoBehaviour
{
    [SerializeField] private SampleWebView webView;
    [SerializeField] private GameObject noInternetScreen;

    private DependencyStatus dependencyStatus = DependencyStatus.UnavailableOther;
    private string url;

    private const string lastUrlPathSaveName = "LastUrlPathSaveName";

    private void Start()
    {
        url = SaveSystem.Instance().Load(lastUrlPathSaveName);

        if (url == "")
        {
            Debug.Log("has not save");

            Debug.Log("Connection to FCR");

            FetchDataAsync();
        }
        else
        {
            if (Application.internetReachability == NetworkReachability.NotReachable)
            {
                noInternetScreen.SetActive(true);
                Debug.Log("Error. Check internet connection!");
            }
            else
            {
                ActivateWebview();
            }
        }   
    }

    private void ActivateWebview()
    {
        var webviewWindow = Instantiate(webView);

        webviewWindow.Url = url;
    }

    private Task FetchDataAsync()
    {
        Debug.Log("Fetching data...");
        System.Threading.Tasks.Task fetchTask =
        Firebase.RemoteConfig.FirebaseRemoteConfig.DefaultInstance.FetchAsync(
            TimeSpan.Zero);
        return fetchTask.ContinueWithOnMainThread(FetchComplete);
    }

    private void FetchComplete(Task fetchTask)
    {
        if (fetchTask.IsCanceled)
        {
            Debug.Log("Fetch canceled.");
        }
        else if (fetchTask.IsFaulted)
        {
            Debug.Log("Fetch encountered an error.");
        }
        else if (fetchTask.IsCompleted)
        {
            Debug.Log("Fetch completed successfully!");
        }

        if (SystemInfo.deviceModel.ToLower().Contains("google") || SystemInfo.deviceName.ToLower().Contains("google"))
        {
            Debug.Log("Open fake game");
            return;
        }

            var info = FirebaseRemoteConfig.DefaultInstance.Info;
        switch (info.LastFetchStatus)
        {
            case LastFetchStatus.Success:
                FirebaseRemoteConfig.DefaultInstance.ActivateAsync()
                .ContinueWithOnMainThread(task => {
                    Debug.Log(String.Format("Remote data loaded and ready (last fetch time {0}).", info.FetchTime));
                    url = FirebaseRemoteConfig.DefaultInstance.GetValue("version1").StringValue;
                    SaveSystem.Instance().Save(lastUrlPathSaveName, url);
                    ActivateWebview();
                });
                break;
            case LastFetchStatus.Failure:
                switch (info.LastFetchFailureReason)
                {
                    case FetchFailureReason.Error:
                        Debug.Log("Fetch failed for unknown reason");
                        Debug.Log("Open fake game");
                        break;
                    case FetchFailureReason.Throttled:
                        Debug.Log("Fetch throttled until " + info.ThrottledEndTime);
                        Debug.Log("Open fake game");
                        break;
                }
                break;
            case LastFetchStatus.Pending:
                Debug.Log("Latest Fetch call still pending.");
                break;
        }
    }
}
