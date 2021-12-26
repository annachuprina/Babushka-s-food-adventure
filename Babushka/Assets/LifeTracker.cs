using System.Collections;
using System.Collections.Generic;
using UnityEngine.SceneManagement;
using UnityEngine;
using UnityEngine.UI;

public class LifeTracker : MonoBehaviour
{
    public static int life;
    public Text lifeText;
    // Start is called before the first frame update
    void Start()
    {
        life = 3;
    }

    // Update is called once per frame
    void Update()
    {
        if (life <= 0)
        {
            SceneManager.LoadScene("EndScene");
        }
        else
        {
            lifeText.text = "Life: " + life;
        }
    }
}
