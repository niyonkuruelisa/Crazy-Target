using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class LoseGameScripts : MonoBehaviour
{

    public GameObject losePanelDialog;
    void Start()
    {
     // Start is called before the first frame update
       
    }

    // Update is called once per frame
    void Update()
    {
        
    }
    private void OnCollisionStay2D(Collision2D collision)
    {
        
        if(collision.gameObject.name == "ball")
        {
            Time.timeScale = 0;
            losePanelDialog.SetActive(true);
        }
    }
}
