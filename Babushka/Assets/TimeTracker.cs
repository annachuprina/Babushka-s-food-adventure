using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TimeTracker : MonoBehaviour
{
    private static float Seconds;
    private static int Hours;
    private static int Minutes;

    static public TimeTracker instance;

    void Awake()
    { //called when an instance awakes in the game
        instance = this; //set our static reference to our newly initialized instance
    }

    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    static public void StartTimer()
    {
        instance.StopAllCoroutines();
        instance.StartCoroutine(TimerRoutine());
    }

    static public void StopTimer()
    {
        instance.StopAllCoroutines();
    }

    static private IEnumerator TimerRoutine()
    {
        Seconds = 0;
        Hours = 0;
        Minutes = 0;
        while (true)
        {
            Seconds += Time.deltaTime;
            if (Seconds >= 60)
            {
                Seconds -= 60.0f;
                Minutes += 1;
                if (Minutes >= 60)
                {
                    Minutes -= 60;
                    Hours += 1;
                }
            }

            GetCurrentTime();
            yield return null;
        }
    }

    static public string GetCurrentTime()
    {
        return $"{Hours:00}:{Minutes:00}:{Seconds:00}";
    }
}
