using UnityEditor;
using UnityEngine;

namespace KiraraDirectBinder.Editor
{
    internal class MenuItems
    {
        [MenuItem("Kirara Direct Binder/Gen", false, priority = 0)]
        public static void Gen()
        {
            var binders = Resources.FindObjectsOfTypeAll<KiraraDirectBinder>();
            foreach (var binder in binders)
            {
                Debug.Log(binder.name);
            }
        }
    }
}