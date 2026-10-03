class CfgWeapons
{
	class ItemCore;
	class InventoryFirstAidKitItem_Base_F;
	class InventoryFlashLightItem_Base_F;
	class InventoryFinsItem_Base_F;

	class rhs_item_flightrecorder : ItemCore {
		scope = 2;
		AUTHOR_MACRO
		displayName = "Flight recorder";
		picture = "\rhsafrf\addons\rhs_air\misc\data\rhs_flightrecorder_pic_ca.paa";
		model = "\rhsafrf\addons\rhs_air\misc\rhs_flightrecorder_item.p3d";
		descriptionShort = "Plane flight recorder";
		class ItemInfo : InventoryFinsItem_Base_F {
			mass = 110;
            type = 301;
			class Pointer {};
			class FlashLight {};
		};
	};
};