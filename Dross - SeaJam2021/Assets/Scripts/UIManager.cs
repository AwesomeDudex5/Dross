using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class UIManager : MonoBehaviour
{
    public GameObject HUD_UI;
    public GameObject PAUSE_UI;
    public GameObject GAMEOVER_UI;

    public bool canPause = true;
    private bool isPaused = false;

    // Start is called before the first frame update
    void Start()
    {
        GameManager.current.onGameOverTrigger += toggleGameOverUI;
        GameManager.current.onDDDialogueStart += disablePauseAbility;
        GameManager.current.onDialogueEnd += enablePauseAbility;
        GameManager.current.onDDDialogueStart += disableUI;
        GameManager.current.onDialogueEnd += enableUI;
    }

    // Update is called once per frame
    void Update()
    {
        if (Input.GetKeyDown(KeyCode.Escape) && canPause == true)
        {
            togglePauseUI();
        }
    }

    void disableUI()
    {
        HUD_UI.SetActive(false);
        PAUSE_UI.SetActive(false);
        GAMEOVER_UI.SetActive(false);
    }

    void enableUI()
    {
        HUD_UI.SetActive(true);
        PAUSE_UI.SetActive(false);
        GAMEOVER_UI.SetActive(false);
    }

    void togglePauseUI()
    {
        GameManager.current.PauseTrigger();
        if (isPaused == false)
        {
            isPaused = true;
            HUD_UI.SetActive(false);
            PAUSE_UI.SetActive(true);
        }
        else
        {
            isPaused = false;
            HUD_UI.SetActive(true);
            PAUSE_UI.SetActive(false);
        }
    }

    void toggleGameOverUI()
    {
        disableUI();
        disablePauseAbility();
        GAMEOVER_UI.SetActive(true);
    }

    void enablePauseAbility()
    {
        canPause = true;
    }

    void disablePauseAbility()
    {
        canPause = false;
    }

}
