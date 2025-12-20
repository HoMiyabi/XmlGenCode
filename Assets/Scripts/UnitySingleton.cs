using UnityEngine;

public class UnitySingleton<T> : MonoBehaviour where T : UnitySingleton<T>
{
    public static T Instance { get; private set; }

    protected virtual void Awake()
    {
        if (Instance != null)
        {
            Destroy(gameObject);
            Debug.LogError("There can be only one " + GetType().Name);
            return;
        }

        Instance = (T)this;
    }
}