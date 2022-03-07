using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using DG.Tweening;

public class UIAnimations : MonoBehaviour
{
    // Start is called before the first frame update
    
    public ObjectGame[] objects;
    void Start()
    {
        foreach (ObjectGame obj in objects){

            obj.gObject.transform.DOMoveY(obj.gObject.transform.position.y, obj.animDuration).SetEase(obj.animationEase).From(2f).OnComplete(()=> { 
                if(obj.type == "button")
                {
                    FindObjectOfType<AudioManager>().Play("UILoaded");
                }
            });
        }
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
