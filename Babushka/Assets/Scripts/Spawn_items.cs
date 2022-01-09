using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;


public class Spawn_items : MonoBehaviour
{
    private float spawnTime = 2;
    public GameObject borsch, dumplings, cake, powerUp, powerDown;
    public float maxX = -7;
    public float minX = 7;
    public static bool increaseSpeed = true;
    private int objectsNumber = 30, powerupNumber = 5, powerdownNumber = 5, objectsCounter;
    private string[] objectsArray;


    // Start is called before the first frame update
    void Start()
    {
        StartCoroutine("Spawn");
        borsch.gameObject.GetComponent<Rigidbody2D>().gravityScale = 0.3f;
        dumplings.gameObject.GetComponent<Rigidbody2D>().gravityScale = 0.3f;
        objectsArray = new string[objectsNumber];

        for (int i = 0; i < objectsNumber; i++)
        {
            objectsArray[i] = "dish";
        }
        for (int i = 0; i < powerupNumber; i++)
        {
            int j = Random.Range(0, objectsNumber);
            objectsArray[j] = "powerup";
        }
        for (int i = 0; i < powerdownNumber; i++)
        {
            int j = Random.Range(0, objectsNumber);
            while ((objectsArray[j] == "powerup") || (objectsArray[j] == "powerdown"))
            {
                j = Random.Range(0, objectsNumber);
            }
            objectsArray[j] = "powerdown";
        }

        for (int i = 0; i < objectsNumber; i++)
        {
            Debug.Log("object type " + i + " " + objectsArray[i]);
        }

        objectsCounter = 0;
    }

    IEnumerator Spawn()
    {
        yield return new WaitForSeconds(spawnTime);

        GameObject go = borsch;

        if (objectsCounter < objectsNumber)
        {
            if (objectsArray[objectsCounter] == "dish")
            {
                var random = Random.Range(0, 100);

                if (random < 30)
                {
                    go = Instantiate(borsch, new Vector3(Random.Range(minX, maxX + 1), transform.position.y, 0f), Quaternion.identity) as GameObject;
                }
                else if ((random > 30 ) && (random < 70))
                {
                    go = Instantiate(dumplings, new Vector3(Random.Range(minX, maxX + 1), transform.position.y, 0f), Quaternion.identity) as GameObject;
                }
                else
                {
                    go = Instantiate(cake, new Vector3(Random.Range(minX, maxX + 1), transform.position.y, 0f), Quaternion.identity) as GameObject;
                }

            }
            else if (objectsArray[objectsCounter] == "powerup")
            {
                go = Instantiate(powerUp, new Vector3(Random.Range(minX, maxX + 1), transform.position.y, 0f), Quaternion.identity) as GameObject;
            }
            else
            {
                go = Instantiate(powerDown, new Vector3(Random.Range(minX, maxX + 1), transform.position.y, 0f), Quaternion.identity) as GameObject;
            }

            objectsCounter++;
        }
        else
        {
            yield return new WaitForSeconds(6);

            TimeTracker.StopTimer();
            statsTracker.setTime(TimeTracker.GetCurrentTime());
            SceneManager.LoadScene("EndScene");
        }


        int speedRandomizer = Random.Range(0, 100);

        if (speedRandomizer < 30)
        {
            go.gameObject.GetComponent<Rigidbody2D>().gravityScale = 0.5f;
        }
        else if ((speedRandomizer > 30) && (speedRandomizer < 70))
        {
            go.gameObject.GetComponent<Rigidbody2D>().gravityScale = 0.6f;
        }
        else if ((speedRandomizer > 70) && (speedRandomizer < 90))
        {
            go.gameObject.GetComponent<Rigidbody2D>().gravityScale = 0.7f;
        }
        else
        {
            go.gameObject.GetComponent<Rigidbody2D>().gravityScale = 0.8f;
        }

        StartCoroutine("Spawn");
    }
    // Update is called once per frame
    void Update()
    {
       /* if (increaseSpeed && (MoveControl_Gesture.score != 0) && (MoveControl_Gesture.score % 100 == 0))
        {
            dish.gameObject.GetComponent<Rigidbody2D>().gravityScale += 0.1f;
            increaseSpeed = false;
        }*/
    }
}
