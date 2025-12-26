using UnityEngine;
using UnityEngine.UI;

namespace Nobi.UiRoundedCorners {
	[ExecuteInEditMode]                             //Required to check the OnEnable function
	[DisallowMultipleComponent]                     //You can only have one of these in every object.
	[RequireComponent(typeof(RectTransform))]
	public class ImageWithRoundedCorners : MonoBehaviour {
		private static readonly int Props = Shader.PropertyToID("_WidthHeightRadius");
		private static readonly int prop_OuterUV = Shader.PropertyToID("_OuterUV");
		private static readonly int prop_Color1 = Shader.PropertyToID("_Color1");
		private static readonly int prop_Color2 = Shader.PropertyToID("_Color2");
		private static readonly int prop_Angle = Shader.PropertyToID("_Angle");

		public float radius = 40f;
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
				image.material = null;      //This makes so that when the component is removed, the UI material returns to null
			}

			DestroyHelper.Destroy(material);
			image = null;
			material = null;
		}

		private void OnEnable() {
			//You can only add either ImageWithRoundedCorners or ImageWithIndependentRoundedCorners
			//It will replace the other component when added into the object.
			var other = GetComponent<ImageWithIndependentRoundedCorners>();
			if (other != null) {
				radius = other.r.x;                 //When it does, transfer the radius value to this script
				DestroyHelper.Destroy(other);
			}

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
				material = new Material(Shader.Find("UI/RoundedCorners/RoundedCorners"));
			}

			if (image == null) {
				TryGetComponent(out image);
			}

			if (image != null) {
				image.material = material;
			}

			if (image is Image uiImage && uiImage.sprite != null) {
				outerUV = UnityEngine.Sprites.DataUtility.GetOuterUV(uiImage.sprite);
			}
		}

		public void Refresh() {
			var rect = ((RectTransform)transform).rect;

			//Multiply radius value by 2 to make the radius value appear consistent with ImageWithIndependentRoundedCorners script.
			//Right now, the ImageWithIndependentRoundedCorners appears to have double the radius than this.
			material.SetVector(Props, new Vector4(rect.width, rect.height, radius * 2, 0));
			material.SetVector(prop_OuterUV, outerUV);
			material.SetColor(prop_Color1, color1);
			material.SetColor(prop_Color2, color2);
			material.SetFloat(prop_Angle, angle);
		}
	}
}