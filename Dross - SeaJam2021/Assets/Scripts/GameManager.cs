using System;
using System.Collections;
using System.Collections.Generic;
using System.IO;
using System.Runtime.Serialization.Formatters.Binary;
using UnityEngine;

public class GameManager : MonoBehaviour
{
    public static GameManager current;
    public static bool isGameFinished;
    public void Awake()
    {
        if (current == null)
        {
            current = this;
        }

    }

    // Start is called before the first frame update
    void Start()
    {

    }

    // Update is called once per frame
    void Update()
    {

    }

    public bool getGameFinishedStatus()
    {
        return isGameFinished;
    }

    public void setGameFinishedStatus(bool status)
    {
        isGameFinished = status;
    }

    #region Events List


    public Action<JunkObject> onJunkSpawned;
    public void JunkSpawned(JunkObject JO)
    {
        if (onJunkSpawned != null)
            onJunkSpawned(JO);
    }

    public Action onJunkPicked;
    public void JunkPicked()
    {
        if (onJunkPicked != null)
            onJunkPicked();
    }

    public Action onLevelCompleted;
    public void LevelCompleted()
    {
        if (onLevelCompleted != null)
        {
            onLevelCompleted();
        }
    }

    public Action onLoadNextLevel;
    public void LoadNextLevel()
    {
        if (onLoadNextLevel != null)
            onLoadNextLevel();
    }


    public Action<string, string> onSetSprite;
    public void SetSprite(string charName, string spriteName)
    {
        if (onSetSprite != null)
        {
            onSetSprite(charName, spriteName);
        }
    }

    public Action<string, string> onSetDialogue;
    public void SetDialogue(string charName, string dialogue)
    {
        if (onSetDialogue != null)
        {
            onSetDialogue(charName, dialogue);
        }
    }

    public Action onDDDialogueStart;
    public void DialogueStart()
    {
        if (onDDDialogueStart != null)
        {
            onDDDialogueStart();
        }
    }

    public Action onDialogueEnd;
    public void DialogueEnd()
    {
        if (onDialogueEnd != null)
        {
            onDialogueEnd();
        }
    }

    public Action onGameOverTrigger;
    public void GameOverTrigger()
    {
        if (onGameOverTrigger != null)
            onGameOverTrigger();
    }

    public Action onPauseTrigger;
    public void PauseTrigger()
    {
        if (onPauseTrigger != null)
            onPauseTrigger();
    }

    public Action onAllJunkCollected;
    public void AllJunkCollected()
    {
        if (onAllJunkCollected != null)
            onAllJunkCollected();
    }

    public Action onGameCompleted;
    public void GameCompleted()
    {
        if (onGameCompleted != null)
            onGameCompleted();
    }



    #endregion

}
