using TMPro;
using UnityEngine;
using UnityEngine.UI;

public class AnswerButton : MonoBehaviour
{
    [field: SerializeField] public TextMeshProUGUI AnswerText { get; private set; }
    [field: SerializeField] public Button AnswerButtonUI { get; private set; }
}
