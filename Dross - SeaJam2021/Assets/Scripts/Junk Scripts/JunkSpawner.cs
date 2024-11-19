using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class JunkSpawner : MonoBehaviour
{
    public int spawnAmount;
    public GameObject[] junkObjects;
    private BoxCollider2D boxArea;
    private Vector2 boxRange;

    // Start is called before the first frame update
    void Start()
    {
        boxArea = this.GetComponent<BoxCollider2D>();
        boxRange = new Vector2(boxArea.size.x / 2, boxArea.size.y / 2);
        spawnJunk();
    }

    void spawnJunk()
    {
        int randomIndex;
        float randomRangeX;
        float randomRangeY;

        for(int i = 0; i < spawnAmount; i++)
        {
            randomIndex = Random.Range(0, junkObjects.Length);
            randomRangeX = this.transform.position.x + Random.Range(-boxRange.x, boxRange.x);
            randomRangeY = this.transform.position.y + Random.Range(-boxRange.y, boxRange.y);
            Instantiate(junkObjects[randomIndex], new Vector2(randomRangeX,randomRangeY), Quaternion.identity);
        }

    }

}
