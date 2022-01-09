using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Dish2D : MonoBehaviour
{
    private bool canBeGrabbed;
    private Vector3 screen;
    public AudioSource[] audioSource;
    // Start is called before the first frame update
    void Start()
    {
        audioSource = GameObject.FindGameObjectWithTag("object_missed_sound").GetComponentsInChildren<AudioSource>();
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
                foreach (AudioSource audio in audioSource)
                {
                    audio.Play();
                }
            }
           else if (gameObject.tag == "PowerUp")
           {
                foreach (AudioSource audio in audioSource)
                {
                    audio.Play();
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
