using System.Collections;
using System.Collections.Generic;
using UnityEngine.SceneManagement;
using UnityEngine;


public class ChangeScene : MonoBehaviour
{
    // Start is called before the first frame update
    public void ChangeToButtonControl()
    {
        SceneManager.LoadScene("ButtonControlScene");
        MoveScript_Button.score = 0;
        resetStats();
        statsTracker.setButtonModality();
    }
    public void ChangeToGestureControl1()
    {
        SceneManager.LoadScene("GestureControlScene");
        MoveControl_Gesture.score = 0;
        resetStats();
        statsTracker.setGestureModality();
    }
    public void ChangeToStartScene()
    {
        SceneManager.LoadScene("StartScene");
        MoveControl_Gesture.score = 0;
        resetStats();
    }

    public void resetStats()
    {
        statsTracker.resetScore();
        statsTracker.resetMissedObjects();
        statsTracker.resetPowerUp();
        statsTracker.resetPowerDown();
        statsTracker.resetModality();
    }

}
