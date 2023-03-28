using System;
using System.Threading.Tasks;
using Firebase;
using Firebase.Extensions;
using Firebase.RemoteConfig;
using Supyrb;
using UnityEngine;

public class FirebaseInitializeSystem : MonoBehaviour
{
    [SerializeField] private SampleWebView webView;
    [SerializeField] private GameObject noInternetScreen;

    private GameObject currentWebView;
    private DependencyStatus dependencyStatus = DependencyStatus.UnavailableOther;
    private string url;

    private const string lastUrlPathSaveName = "LastUrlPathSaveName";

    private void Start()
    {
        url = SaveSystem.Instance().Load(lastUrlPathSaveName);

        ActivateWebview();

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
                ActivateNoInternetScreen();
                DestroyWebView();
                Debug.Log("Error. Check internet connection!");
            }
            else
            {
                //ActivateWebview();
            }
        }   
    }

    private void ActivateNoInternetScreen()
    {
       
        noInternetScreen.SetActive(true);
    }

    private void DestroyWebView()
    {
        Destroy(currentWebView.gameObject);
    }

    private void ActivateWebview()
    {
        var webviewWindow = Instantiate(webView);

        currentWebView = webviewWindow.gameObject;
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
            DestroyWebView();
            Signals.Get<LoadingGameSignal>().Dispatch();
            return;
        }

            var info = FirebaseRemoteConfig.DefaultInstance.Info;
        switch (info.LastFetchStatus)
        {
            case LastFetchStatus.Success:
                FirebaseRemoteConfig.DefaultInstance.ActivateAsync()
                .ContinueWithOnMainThread(task => {
                    Debug.Log(String.Format("Remote data loaded and ready (last fetch time {0}).", info.FetchTime));
                    url = FirebaseRemoteConfig.DefaultInstance.GetValue("url").StringValue;

                    if(url == "")
                    {
                        Debug.Log("Open fake game");
                        DestroyWebView();
                        Signals.Get<LoadingGameSignal>().Dispatch();
                    }
                    else
                    {
                        SaveSystem.Instance().Save(lastUrlPathSaveName, url);
                        //ActivateWebview();
                    }
                });
                break;
            case LastFetchStatus.Failure:
                switch (info.LastFetchFailureReason)
                {
                    case FetchFailureReason.Error:
                        Debug.Log("Fetch failed for unknown reason");
                        ActivateNoInternetScreen();
                        break;
                    case FetchFailureReason.Throttled:
                        Debug.Log("Fetch throttled until " + info.ThrottledEndTime);
                        ActivateNoInternetScreen();
                        break;
                }
                break;
            case LastFetchStatus.Pending:
                Debug.Log("Latest Fetch call still pending.");
                break;
        }
    }
}
