using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Dish2D : MonoBehaviour
{
    private bool canBeGrabbed;
    private Vector3 screen;

    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        screen = Camera.main.WorldToScreenPoint(transform.position);

        if (canBeGrabbed && screen.y < -20)
        {
            if (gameObject.tag == "Dish")
            {
                LifeTracker.life--;
                statsTracker.increaseMissedObjects();
            }
            Destroy(gameObject);
        }
        else if (!canBeGrabbed && screen.y > -10)
        {
            canBeGrabbed = true;
        }
    }

    public void Hit()
    {
        Destroy(gameObject);
    }
}
