using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class InitializeSystem : MonoBehaviour
{
    [SerializeField] private SampleWebView webView;

    private const string lastUrlPathSaveName = "LastUrlPathSaveName";

    private void Awake()
    {
        var url = SaveSystem.Instance().Load(lastUrlPathSaveName);

        if (url == "")
        {
            Debug.Log("has not save");

            Debug.Log("Connection to FCR");
        }
        else
        {
            if (Application.internetReachability == NetworkReachability.NotReachable)
            {
                Debug.Log("Error. Check internet connection!");
            }
            else
            {
                var webviewWindow = Instantiate(webView);

                webviewWindow.Url = url;
            }
        }
    }
}
