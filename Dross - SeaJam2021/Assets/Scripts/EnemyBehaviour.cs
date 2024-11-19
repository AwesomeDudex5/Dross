using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class EnemyBehaviour : MonoBehaviour
{
    public Sprite idleSprite;
    public Sprite chaseSprite;

    public Animator anim;
    public float chaseSpeed;
    private Vector3 originalPos;
    private Transform targetTransform;
    private bool canChase = false;
    
    // Start is called before the first frame update
    void Start()
    {
        originalPos = this.transform.position;
        GameManager.current.onDDDialogueStart += pauseAnimation;
        GameManager.current.onDialogueEnd += resumeAnimation;
        GameManager.current.onAllJunkCollected += destroyThisEnemy;
    }

    // Update is called once per frame
    void Update()
    {
     
        if(canChase == true)
        {
            moveTowardsTarget();
        }
        else
        {
            resetPosition();
        }
        
    }


    private void OnCollisionEnter2D(Collision2D collision)
    {
        if (collision.transform.tag == "Player")
        {
            Destroy(collision.gameObject);
            GameManager.current.GameOverTrigger();
        }
    }

    private void OnTriggerEnter2D(Collider2D collision)
    {
        if(collision.tag == "Player")
        {
            pauseAnimation();
            canChase = true;
            targetTransform = collision.transform;

            if (chaseSprite != null)
            {
                anim.gameObject.GetComponent<SpriteRenderer>().sprite = chaseSprite;
            }

        }
    }

    private void OnTriggerExit2D(Collider2D collision)
    {
        if(collision.tag == "Player")
        {
            resumeAnimation();
            canChase = false;

            if (idleSprite != null)
                anim.gameObject.GetComponent<SpriteRenderer>().sprite = idleSprite;

        }
    }

    void moveTowardsTarget()
    {
        this.transform.localPosition = Vector3.MoveTowards(transform.localPosition, targetTransform.position, Time.deltaTime * chaseSpeed);
    }

    void resetPosition()
    {
        if(this.transform.localPosition != originalPos)
        {
            this.transform.localPosition = Vector3.MoveTowards(transform.localPosition, originalPos, Time.deltaTime * chaseSpeed);
        }
    }
    
    void destroyThisEnemy()
    {
        Destroy(this);
    }

    void pauseAnimation()
    {
        anim.speed = 0;
        anim.enabled = false;
    }

    void resumeAnimation()
    {
        anim.enabled = true;
        anim.speed = 1;
    }
}
