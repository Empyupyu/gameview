using System.Collections;
using System.Collections.Generic;
using Supyrb;
using UnityEngine;
using static QuizScreen;

public class QuizGame : MonoBehaviour
{
    [SerializeField] private List<Question> Answers;

    private Question currentQuestion;
    private int questionIndex;

    private void Start()
    {
        SetNextQuestion();

        Signals.Get<AnswerSignal>().AddListener(GetAnswer);
    }

    private void SetNextQuestion()
    {
        currentQuestion = Answers[questionIndex];
        Signals.Get<UpdateQuestionUISignal>().Dispatch(currentQuestion);

        questionIndex = ++questionIndex >= Answers.Count ? 0 : ++questionIndex;
    }

    private void GetAnswer(int answerIndex)
    {
        var isCorrect = currentQuestion.CorrectAnswerIndex == answerIndex;

        Signals.Get<AnswerAnimationSignal>().Dispatch(isCorrect);

        if (isCorrect)
        {
            Debug.Log("correct answer");
        }
        else
        {
            Debug.Log("you lose answer");
        }

        SetNextQuestion();
    }
}
