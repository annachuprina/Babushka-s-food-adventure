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
    }
    public void ChangeToGestureControl1()
    {
        SceneManager.LoadScene("GestureControlScene");
    }

}
