using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class JunkManager : MonoBehaviour
{
    public Text progressUI;

    public int totalJunkSpawned;
    private float totalJunkPicked;
    public float currentPercentage;
    public TextAsset endInk;
    private StoryProcessor sp;

    // Start is called before the first frame update
    void Start()
    {
        sp = GameObject.FindObjectOfType<StoryProcessor>();
        GameManager.current.onJunkSpawned += totalJunkSpawnedIncremented;
        GameManager.current.onJunkPicked += totalJunkPickedIncremented;
        GameManager.current.onDialogueEnd += loadNextSceneArea;
        currentPercentage = 0.0f;
    }

    // Update is called once per frame
    void Update()
    {
        progressUI.text = currentPercentage + "%";
    }

    public void totalJunkSpawnedIncremented(JunkObject J)
    {
        totalJunkSpawned++;
    }

    public void totalJunkSpawnedIncremented()
    {
        totalJunkSpawned++;
    }

    void totalJunkPickedIncremented()
    {
        totalJunkPicked++;

        currentPercentage = (totalJunkPicked / totalJunkSpawned) * 100;
       currentPercentage = (float)Math.Round(currentPercentage, 1);

        if (currentPercentage >= 99.9f)
        {
            if (endInk != null)
            {
                sp.inkFile = endInk;
                GameManager.current.AllJunkCollected();
                GameManager.current.DialogueStart();
            }
            else
            {
                GameManager.current.AllJunkCollected();
                GameManager.current.LoadNextLevel();
            }
        }
    }

    void loadNextSceneArea()
    {
        if (currentPercentage >= 99.9f)
        {
            GameManager.current.LoadNextLevel();
        }
    }

 
}
