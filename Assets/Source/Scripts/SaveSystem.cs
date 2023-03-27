using UnityEngine;

public class SaveSystem
{
    private static SaveSystem instance;

    public static SaveSystem Instance()
    {
        if(instance == null)
        {
            instance = new SaveSystem();
        }

        return instance;
    }

    public void Save(string key, string value)
    {
        PlayerPrefs.SetString(key, value);
        PlayerPrefs.Save();
    }

    public string Load(string key)
    {
       return PlayerPrefs.GetString(key);
    }
}
