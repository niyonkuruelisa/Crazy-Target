using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class WinGameScripts : MonoBehaviour
{

    public GameObject winPanelDialog;
    // Start is called before the first frame update
    void Start()
    {
        Time.timeScale = 1;
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
            winPanelDialog.SetActive(true);
        }
    }
}
