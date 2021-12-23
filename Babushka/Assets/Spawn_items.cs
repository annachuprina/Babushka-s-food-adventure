using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Spawn_items : MonoBehaviour
{
    private float spawnTime = 2;
    public GameObject dish, power;
    public float maxX = -7;
    public float minX = 7;
    public static bool increaseSpeed = true;

    // Start is called before the first frame update
    void Start()
    {
        StartCoroutine("Spawn");
        dish.gameObject.GetComponent<Rigidbody2D>().gravityScale = 0.3f;
    }

    IEnumerator Spawn()
    {
        yield return new WaitForSeconds(spawnTime);

        GameObject dishPrefab = dish;
        GameObject powerPrefab = power;

        if (Random.Range(0, 100) < 30)
        {
            GameObject go = Instantiate(powerPrefab, new Vector3(Random.Range(minX, maxX + 1), transform.position.y, 0f), Quaternion.Euler(0, 0, Random.Range(-90F, 90F))) as GameObject;
        }
        else
        {
            GameObject go = Instantiate(dishPrefab, new Vector3(Random.Range(minX, maxX + 1), transform.position.y, 0f), Quaternion.Euler(0, 0, Random.Range(-90F, 90F))) as GameObject;
        }

        StartCoroutine("Spawn");
    }
    // Update is called once per frame
    void Update()
    {
        if (increaseSpeed && (MoveControl_Gesture.score != 0) && (MoveControl_Gesture.score % 100 == 0))
        {
            dish.gameObject.GetComponent<Rigidbody2D>().gravityScale += 0.1f;
            increaseSpeed = false;
        }
    }
}
