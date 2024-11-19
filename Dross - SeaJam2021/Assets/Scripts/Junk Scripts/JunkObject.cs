using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class JunkObject : MonoBehaviour
{
    public bool spriteEnabled;
    public SpriteRenderer bubble;
    public SpriteRenderer junk_sr;
    public Animator anim;
    public GameObject junkParticles;

    // Start is called before the first frame update
    void Start()
    {
        GameManager.current.JunkSpawned(this);
        bubble.enabled = false;

        if(spriteEnabled == false)
        {
            junk_sr.enabled = false;
        }
        if(spriteEnabled == true)
        {
            junk_sr.enabled = true;
        }

       
    }


    public void DestroyJunk()
    {
        bubble.gameObject.SetActive(true);
        bubble.enabled = true;
        AudioM.instance.playSound("Bubble");

        junk_sr.enabled = true;
        junk_sr.GetComponent<BoxCollider2D>().enabled = false;
        anim.SetTrigger("Bubble");
        GameManager.current.JunkPicked();

        if(junkParticles != null)
        {
            junkParticles.SetActive(false);
        }

        StartCoroutine(TimeDestroy());
    }

    IEnumerator TimeDestroy()
    {
        yield return new WaitForSeconds(3.5f);
        Destroy(this.gameObject);
    }
}
