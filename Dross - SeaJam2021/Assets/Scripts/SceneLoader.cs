using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class SceneLoader : MonoBehaviour
{
    public bool isEndingScene;
    public Animator sceneAnim;
    // public GameObject nextLevelText;
    private int currentScene;

    // Start is called before the first frame update
    void Start()
    {
        currentScene = SceneManager.GetActiveScene().buildIndex;
        //  nextLevelText.SetActive(false);
        GameManager.current.onLoadNextLevel += triggerLoadScene;

    }


    public void triggerLoadScene()
    {
        StartCoroutine(loadNextScene());
    }

    IEnumerator loadNextScene()
    {

        sceneAnim.SetTrigger("LoadScene");
        yield return new WaitForSeconds(2f);
        // nextLevelText.SetActive(true);
        yield return new WaitForSeconds(3f);

        if (isEndingScene == true)
        {
            GameManager.current.setGameFinishedStatus(isEndingScene);
            SceneManager.LoadScene(0);
        }
        else
        {

            currentScene++;
            if (currentScene < SceneManager.sceneCountInBuildSettings)
            {
                SceneManager.LoadScene(currentScene);
            }
            else
            {
                //currentScene = 0;
                SceneManager.LoadScene(0);
            }
        }
    }

    public void loadSpecificScene(int index)
    {
        Time.timeScale = 1;
        StartCoroutine(loadScene(index));
    }

    IEnumerator loadScene(int index)
    {
        sceneAnim.SetTrigger("LoadScene");
        yield return new WaitForSeconds(1f);
        SceneManager.LoadScene(index);

    }
}
