using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MainMenuManager : MonoBehaviour
{
    public GameObject EndingsButton;

    // Start is called before the first frame update
    void Start()
    {
        if (GameManager.current.getGameFinishedStatus() == true)
            EndingsButton.SetActive(true);
        else
            EndingsButton.SetActive(false);
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
