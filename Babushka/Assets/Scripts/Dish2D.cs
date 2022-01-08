using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Dish2D : MonoBehaviour
{
    private bool canBeGrabbed;
    private Vector3 screen;
    public AudioSource[] aSource;
    // Start is called before the first frame update
    void Start()
    {
        aSource = GameObject.FindGameObjectWithTag("object_missed_sound").GetComponentsInChildren<AudioSource>();
    }

    // Update is called once per frame
    void Update()
    {
        screen = Camera.main.WorldToScreenPoint(transform.position);

        if (canBeGrabbed && screen.y < -20)
        {
            if (gameObject.tag == "Dish" )
            {
                LifeTracker.life--;
                statsTracker.increaseMissedObjects();
                foreach (AudioSource aS in aSource)
                {
                    aS.Play();
                }

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
