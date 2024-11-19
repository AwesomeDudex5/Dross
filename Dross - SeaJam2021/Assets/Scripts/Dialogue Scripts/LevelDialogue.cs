using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class LevelDialogue : MonoBehaviour
{

    public TextAsset testInkFile;
    public TextAsset endInkFile;
    private StoryProcessor sp;

    private bool junkCompleted;

    private bool testingBool = true;


    // Start is called before the first frame update
    void Start()
    {
        junkCompleted = false;

        //set up Beginning Dialogue
        sp = GameObject.FindObjectOfType<StoryProcessor>();
      

        GameManager.current.onLevelCompleted += setJunkComplete;
        GameManager.current.onDialogueEnd += endLevel;
    }

    // Update is called once per frame
    void Update()
    {
        if (Input.GetKeyDown(KeyCode.Space) && testingBool == true)
        {
            Debug.Log("Space space");
            testingBool = false;
            sp.inkFile = testInkFile;
            GameManager.current.DialogueStart();
        }
    }


    void setJunkComplete()
    {
        junkCompleted = true;
        sp.inkFile = endInkFile;
        GameManager.current.DialogueStart();
    }

    void endLevel()
    {
        if (junkCompleted == true)
            GameManager.current.LoadNextLevel();
    }
}
