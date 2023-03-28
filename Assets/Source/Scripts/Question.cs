using UnityEngine;

[CreateAssetMenu(fileName = "Quest 1", menuName = "Quest/New Quest")]
public class Question : ScriptableObject
{
   [field: SerializeField] public string Discription { get; private set; }
   [field: SerializeField] public int CorrectAnswerIndex { get; private set; }
   [field: SerializeField] public Answer[] Answers { get; private set; }  = new Answer[4];
}
