using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class statsTracker : MonoBehaviour
{
    private static int missedObjects = 0, collectedPowerUp = 0, collectedPowerDown = 0, score = 0;
    private static string timePlayed;

    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    static public void setScore(int s)
    {
        score = s;
    }

    static public int getScore()
    {
        return score;
    }

    static public void resetScore()
    {
        score = 0;
    }

    static public void increaseMissedObjects()
    {
        missedObjects++;
    }

    static public int getMissedObjects()
    {
        return missedObjects;
    }

    static public void resetMissedObjects()
    {
        missedObjects = 0;
    }

    static public void increasePowerUp()
    {
        collectedPowerUp++;
    }

    static public int getPowerUp()
    {
        return collectedPowerUp;
    }

    static public void resetPowerUp()
    {
        collectedPowerUp = 0;
    }

    static public void increasePowerDown()
    {
        collectedPowerDown++;
    }

    static public int getPowerDown()
    {
        return collectedPowerDown;
    }

    static public void resetPowerDown()
    {
        collectedPowerDown = 0;
    }

    static public void setTime(string t)
    {
        timePlayed = t;
    }

    static public string getTime()
    {
        return timePlayed;
    }
}
