using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class MoveControl_Gesture : MonoBehaviour
{
    private Rigidbody2D rb;
    private Vector2 movement;
    private Vector2 screenBounds;
    float dirX;
    float maxX, minX;
    public float movementSpeed = 10f;
    public static int score = 0;
    public Text scoreText;
    Animator babushka_animator;

    // Start is called before the first frame update
    void Start()
    {
        rb = GetComponent<Rigidbody2D>();
        minX = Camera.main.ScreenToWorldPoint(new Vector2(0f, 0f)).x + 0.3f;
        maxX = -minX;
        //screenBounds = Camera.main.ScreenToWorldPoint(new Vector3(Screen.width, Screen.height, Camera.main.transform.position.z));
    }

    // Update is called once per frame
    void Update()
    {
        dirX = Input.acceleration.x * movementSpeed;
        if (transform.position.x > maxX) transform.position = new Vector2(maxX, transform.position.y);
        else if (transform.position.x < minX) transform.position = new Vector2(minX, transform.position.y);
        //transform.position = new Vector2(Mathf.Clamp(transform.position.x, -Screen.width / 2, Screen.width / 2), transform.position.y);
        //babushka_animator.speed = 10;
    }
    void FixedUpdate()
    {
        rb.velocity = new Vector2(dirX, 0f);
    }

    private void OnTriggerEnter2D(Collider2D collision)
    {
        if (collision.tag == "Dish")
        {
            score += 10;
            scoreText.text = "Score: " + score;
            Destroy(collision.gameObject);

            if (score % 100 == 0)
            {
                Spawn_items.increaseSpeed = true;
            }
        }
    }
}
