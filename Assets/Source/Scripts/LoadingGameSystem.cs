using Supyrb;
using UnityEngine;

public class LoadingGameSystem : MonoBehaviour
{
    [SerializeField] private GameObject gamePrefab;
    [SerializeField] private Canvas canvas;

    private void Awake()
    {
        Signals.Get<LoadingGameSignal>().AddListener(Loading);
    }

    private void Loading()
    {
        Instantiate(gamePrefab, canvas.transform);
    }
}
