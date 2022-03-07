using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class UiManager : MonoBehaviour
{
    // Start is called before the first frame update
    void Start()
    {
        
    }


    public void OnMenuButtonClicked()
    {
        Time.timeScale = 1;
        FindObjectOfType<AudioManager>().Play("UILoaded");
        SceneManager.LoadScene("menu");
    }
    public void OnRestartButtonClicked()
    {
        FindObjectOfType<AudioManager>().Play("UILoaded");
        SceneManager.LoadScene(SceneManager.GetActiveScene().name);
    } 


    public void OnPlayButtonClicked()
    {
        FindObjectOfType<AudioManager>().Play("UILoaded");
        SceneManager.LoadScene("level_1");
    }
    public void GoToLevel2()
    {
        FindObjectOfType<AudioManager>().Play("UILoaded");
        SceneManager.LoadScene("level_2");
    }
    public void GoToLevel3()
    {
        FindObjectOfType<AudioManager>().Play("UILoaded");
        SceneManager.LoadScene("level_3");
    }

    public void OnReplayButtonClicked()
    {
        FindObjectOfType<AudioManager>().Play("UILoaded");
        SceneManager.LoadScene(SceneManager.GetActiveScene().name);
    }


    public void OnQuitButtonClicked()
    {
        if(Application.platform != RuntimePlatform.IPhonePlayer)
        {
            Application.Quit();
        }
    }
}
