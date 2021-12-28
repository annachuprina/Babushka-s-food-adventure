using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class endText : MonoBehaviour
{
    public Text scoreText, missedObjText, powerUpText, powerDownText, timePlayedText;
    // Start is called before the first frame update
    void Start()
    {
        scoreText.text = "Final Score: " + statsTracker.getScore();
        missedObjText.text = "Missed Objects: " + statsTracker.getMissedObjects();
        powerUpText.text = "Collected Power Ups: " + statsTracker.getPowerUp();
        powerDownText.text = "Collected Power Downs: " + statsTracker.getPowerDown();
        timePlayedText.text = "Time Played: " + statsTracker.getTime();
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
