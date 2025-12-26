using UnityEngine;
using UnityEngine.UI;

namespace Nobi.UiRoundedCorners {
    [ExecuteInEditMode]
    [DisallowMultipleComponent]
    [RequireComponent(typeof(RectTransform))]
    public class ImageWithCircle : MonoBehaviour {
        private static readonly int prop_InnerRadius = Shader.PropertyToID("_InnerRadius");
        private static readonly int prop_OuterRadius = Shader.PropertyToID("_OuterRadius");
        private static readonly int prop_OuterUV = Shader.PropertyToID("_OuterUV");
        private static readonly int prop_Color1 = Shader.PropertyToID("_Color1");
        private static readonly int prop_Color2 = Shader.PropertyToID("_Color2");
        private static readonly int prop_Angle = Shader.PropertyToID("_Angle");

        [Range(0f, 0.5f)]
        public float innerRadius = 0f;
        [Range(0f, 0.5f)]
        public float outerRadius = 0.5f;
        public Color color1 = Color.white;
        public Color color2 = Color.white;
        public float angle = 0;

        private Material material;
        private Vector4 outerUV = new Vector4(0, 0, 1, 1);

        [HideInInspector, SerializeField] private MaskableGraphic image;

        private void OnValidate() {
            Validate();
            Refresh();
        }

        private void OnDestroy() {
            if (image != null) {
                image.material = null;
            }

            DestroyHelper.Destroy(material);
            image = null;
            material = null;
        }

        private void OnEnable() {
            Validate();
            Refresh();
        }

        private void OnRectTransformDimensionsChange() {
            if (enabled && material != null) {
                Refresh();
            }
        }

        public void Validate() {
            if (material == null) {
                material = new Material(Shader.Find("UI/RoundedCorners/Circle"));
            }

            if (image == null) {
                TryGetComponent(out image);
            }

            if (image != null) {
                image.material = material;
            }

            if (image is Image uiImage && uiImage.sprite != null) {
                outerUV = UnityEngine.Sprites.DataUtility.GetOuterUV(uiImage.sprite);
            } else {
                outerUV = new Vector4(0, 0, 1, 1);
            }
        }

        public void Refresh() {
            if (material == null) return;

            material.SetFloat(prop_InnerRadius, innerRadius);
            material.SetFloat(prop_OuterRadius, outerRadius);
            material.SetVector(prop_OuterUV, outerUV);
            material.SetColor(prop_Color1, color1);
            material.SetColor(prop_Color2, color2);
            material.SetFloat(prop_Angle, angle);
        }
    }

# if UNITY_EDITOR
    [UnityEditor.CustomEditor(typeof(ImageWithCircle))]
    public class ImageWithCircleEditor : UnityEditor.Editor {
        public override void OnInspectorGUI() {
            serializedObject.Update();

            UnityEditor.EditorGUILayout.PropertyField(serializedObject.FindProperty("innerRadius"));
            UnityEditor.EditorGUILayout.PropertyField(serializedObject.FindProperty("outerRadius"));
            
            UnityEditor.EditorGUILayout.Space();
            UnityEditor.EditorGUILayout.PropertyField(serializedObject.FindProperty("color1"));
            UnityEditor.EditorGUILayout.PropertyField(serializedObject.FindProperty("color2"));
            UnityEditor.EditorGUILayout.PropertyField(serializedObject.FindProperty("angle"));

            serializedObject.ApplyModifiedProperties();
        }
    }
# endif
}
