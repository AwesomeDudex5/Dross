using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MetalDetector : MonoBehaviour
{

    [Header("Detector Ranges")]
    public float greenRange;
    //public float greenBeepInterval;
    public GameObject greenParticles;
    public float blueRange;
   //public float blueBeepInterval;
    public GameObject blueParticles;
    public float orangeRange;
    //public float orangeBeepInterval;
    public GameObject orangeParticles;
    public float redRange;
    //public float redBeepInterval;
    public GameObject redParticles;
    private string currentParticle;

    private List<JunkObject> junkList = new List<JunkObject>();
    private float currentNearest;
    private int currentNearestIndex;
    private bool canPickUp;
    private bool canDetect;
    private bool isBeeping;

    // Start is called before the first frame update
    void Start()
    {
        canDetect = false;
        canPickUp = false;
        // getAllJunk();
        GameManager.current.onJunkSpawned += junkListAdd;

        GameManager.current.onDDDialogueStart += disablePickUp;
        GameManager.current.onDDDialogueStart += disableDetection;

        GameManager.current.onDialogueEnd += enablePickUp;
        GameManager.current.onDialogueEnd += resumeDetection;

        GameManager.current.onPauseTrigger += togglePausePickup;
        GameManager.current.onGameOverTrigger += togglePausePickup;


    }

    // Update is called once per frame
    void Update()
    {
        if (canDetect == true)
            displayDetection(detectNearest());

        if (canPickUp == true)
        {
            if (Input.GetKeyDown(KeyCode.E))
            {
                pickupNearestJunk();
            }
        }

    }


    public void junkListAdd(JunkObject J)
    {
        junkList.Add(J);
    }

    float detectNearest()
    {
        currentNearest = redRange;
        currentNearestIndex = 0;
        int index = 0; ;
        foreach (JunkObject j in junkList)
        {

            if (Vector2.Distance(this.transform.position, j.transform.position) < currentNearest)
            {
                currentNearest = Vector2.Distance(this.transform.position, j.transform.position);
                currentNearestIndex = index;
            }
            index++;
        }

        return currentNearest;
    }

    void displayDetection(float distance)
    {

        if (distance < greenRange)
        {
            // Debug.Log("Green Range");
            if (currentParticle != greenParticles.name)
            {
                // StopCoroutine(playBeep(0f));
                disableDetection();
                currentParticle = greenParticles.name;
                greenParticles.SetActive(true);
            }
            //  StartCoroutine(playBeep(greenBeepInterval));
            canPickUp = true;
        }
        else if (distance < blueRange)
        {
            // Debug.Log("Yellow Range");
            if (currentParticle != blueParticles.name)
            {
                //StopCoroutine(playBeep(0f));
                disableDetection();
                currentParticle = blueParticles.name;
                blueParticles.SetActive(true);
            }
            //  StartCoroutine(playBeep(blueBeepInterval));
            canPickUp = false;
        }
        else if (distance < orangeRange)
        {
            // StartCoroutine(playBeep(orangeBeepInterval));
            canPickUp = false;
            if (currentParticle != orangeParticles.name)
            {
                //  StopCoroutine(playBeep(0f));
                disableDetection();
                currentParticle = orangeParticles.name;
                orangeParticles.SetActive(true);
            }
            // Debug.Log("Orange Range");
        }
        else
        {
            //  StartCoroutine(playBeep(redBeepInterval));
            canPickUp = false;
            if (currentParticle != redParticles.name)
            {
                // StopCoroutine(playBeep(0f));
                disableDetection();
                currentParticle = redParticles.name;
                redParticles.SetActive(true);
            }
            // Debug.Log("Red Range");
        }

    }

    IEnumerator playBeep(float interval)
    {
        if (isBeeping == false)
        {
            isBeeping = true;
            AudioM.instance.playSound("Beep");
            yield return new WaitForSeconds(interval);
            isBeeping = false;
        }
    }

    void disableDetection()
    {
        StopCoroutine(playBeep(0f));
        // canDetect = false;

        greenParticles.SetActive(false);
        blueParticles.SetActive(false);
        orangeParticles.SetActive(false);
        redParticles.SetActive(false);
    }

    void resumeDetection()
    {
        canDetect = true;
        /*
         greenParticles.SetActive(true);
         blueParticles.SetActive(true);
         orangeParticles.SetActive(true);
         redParticles.SetActive(true);
         */
    }

    void pickupNearestJunk()
    {
        JunkObject junkToDestroy = junkList[currentNearestIndex];
        junkList.RemoveAt(currentNearestIndex);
        junkToDestroy.DestroyJunk();
    }

    void enablePickUp()
    {
        canPickUp = true;
    }

    void disablePickUp()
    {
        canPickUp = false;
    }
    void togglePausePickup()
    {
        if (canPickUp == true)
        {
            canPickUp = false;
            canDetect = false;
        }
        else
        {
            canPickUp = true;
            canDetect = true;
        }


    }
}
