using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerMovement : MonoBehaviour
{


    public bool canMove;
    public Animator anim;
    private Rigidbody2D rb;
    private BoxCollider2D bc;
    private Camera cam;

    public Vector3 offset;
    public float moveSpeed;
    public float cameraSmoothSpeed;
    private Vector2 movement;
    private Vector3 velocity = Vector3.zero;



    private void Awake()
    {
        rb = this.GetComponent<Rigidbody2D>();
        bc = this.GetComponent<BoxCollider2D>();
        if (cam == null)
        {
            cam = FindObjectOfType<Camera>();
        }
    }

    // Start is called before the first frame update
    void Start()
    {
        // canMove = true;

        GameManager.current.onDDDialogueStart += disableMove;
        GameManager.current.onDialogueEnd += enableMove;
        GameManager.current.onPauseTrigger += togglePauseMovement;
        GameManager.current.onGameOverTrigger += togglePauseMovement;

        /*
        GameManager.current.onToggleUIOn += disableMove;
        GameManager.current.onToggleUIOff += enableMove;
        */
    }

    // Update is called once per frame
    void Update()
    {

        if (canMove == true)
        {
            movement.x = Input.GetAxisRaw("Horizontal");
            movement.y = Input.GetAxisRaw("Vertical");
            setFaceDirection();
            moveNormal();
        }
    }

    void FixedUpdate()
    {
        cameraFollow();
        rb.MovePosition(rb.position + movement * moveSpeed * Time.deltaTime);
    }

    void cameraFollow()
    {
        Vector3 desiredPosition = this.transform.position + offset;
        Vector3 smoothPosition = Vector3.SmoothDamp(this.transform.position, desiredPosition, ref velocity, cameraSmoothSpeed);
        cam.transform.position = smoothPosition;
    }

    void setFaceDirection()
    {
        movement.Normalize();

        if (movement.x != 0)
        {
            if (movement.x < 0)
                this.transform.localScale = new Vector3(-1, 1, 1);
            else if (movement.x > 0)
                this.transform.localScale = new Vector3(1, 1, 1);

        }
    }

    void moveNormal()
    {
        movement.Normalize();

        if (movement != Vector2.zero)
        {
            bc.offset = new Vector2(movement.x, movement.y);

            //  anim.SetFloat("Horizontal", movement.x);
            //    anim.SetFloat("Vertical", movement.y);
        }
        anim.SetFloat("Speed", movement.sqrMagnitude);
    }

    void enableMove()
    {
        canMove = true;
    }

    void disableMove()
    {
        // Debug.Log("Reachwd");
        canMove = false;
        movement = Vector2.zero;
        moveNormal();
    }

    void togglePauseMovement()
    {
        if (canMove == true)
            canMove = false;
        else
            canMove = true;
    }
}
