using System.Collections.Generic;
using Supyrb;
using TMPro;
using UnityEngine;

public partial class QuizScreen : MonoBehaviour
{
    [SerializeField] private List<AnswerButton> answerButtons;
    [SerializeField] private TextMeshProUGUI questionText;
    [SerializeField] private GameObject winIcon;
    [SerializeField] private GameObject loseIcon;

    private void Awake()
    {
        Signals.Get<UpdateQuestionUISignal>().AddListener(UpdateQuestionUI);
        Signals.Get<AnswerAnimationSignal>().AddListener(WinLoseAnimation);

        for (int i = 0; i < answerButtons.Count; i++)
        {
            var index = i;
            answerButtons[i].AnswerButtonUI.onClick.AddListener(() => SubscribsButton(index));
        }
    }

    private void SubscribsButton(int index)
    {
        Signals.Get<AnswerSignal>().Dispatch(index);
    }

    private void WinLoseAnimation(bool isWin)
    {
        winIcon.SetActive(false);
        loseIcon.SetActive(false);

        var icon = isWin ? winIcon: loseIcon;
        icon.SetActive(true);
    }

    private void UpdateQuestionUI(Question question)
    {
        questionText.text = question.Discription;

        for (int i = 0; i < question.Answers.Length; i++)
        {
            answerButtons[i].AnswerText.text = question.Answers[i].Discription;
        }
    }
}
