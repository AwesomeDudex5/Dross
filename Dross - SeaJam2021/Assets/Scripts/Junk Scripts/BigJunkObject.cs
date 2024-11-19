using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BigJunkObject : JunkObject
{
    private JunkManager _junkmanager;
    private MetalDetector _metalDetector;

    // Start is called before the first frame update
    void Start()
    {
        _junkmanager = FindObjectOfType<JunkManager>();
        _junkmanager.totalJunkSpawnedIncremented();

        _metalDetector = FindObjectOfType<MetalDetector>();
        _metalDetector.junkListAdd(this);
        
        

    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
