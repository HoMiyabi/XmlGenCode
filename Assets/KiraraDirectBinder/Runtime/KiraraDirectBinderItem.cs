using System;
using UnityEngine;

namespace KiraraDirectBinder
{
    [Serializable]
    public struct KiraraDirectBinderItem
    {
        public string varName;
        public Component component;

        public KiraraDirectBinderItem(string varName, Component component)
        {
            this.varName = varName;
            this.component = component;
        }

        public void Deconstruct(out string varName, out Component component)
        {
            varName = this.varName;
            component = this.component;
        }
    }
}