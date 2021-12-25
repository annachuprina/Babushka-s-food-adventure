
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityStandardAssets.CrossPlatformInput;
using UnityEngine.UI;

public class MoveScript_Button : MonoBehaviour
{
    float dirX;
    private float moveSpeed = 20f;
    Rigidbody2D rb;
    public static int score = 0;
    public Text scoreText;
    Animator babushka_animator;

    // Use this for initialization
    void Start()
    {
        rb = GetComponent<Rigidbody2D>();
        babushka_animator = gameObject.GetComponent<Animator>();
    }

    // Update is called once per frame
    void Update()
    {
        dirX = CrossPlatformInputManager.GetAxis("Horizontal");
        Vector3 pos = Camera.main.WorldToViewportPoint(transform.position);
        pos.x = Mathf.Clamp01(pos.x);
        transform.position = Camera.main.ViewportToWorldPoint(pos);
        babushka_animator.speed = 5;
    }

    void FixedUpdate()
    {
        rb.velocity = new Vector2(dirX * moveSpeed, rb.velocity.y);
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

