class ItemCompass;
class ItemRadio: ItemCore
{
	class ItemInfo;
};

#define INVENTORY_CATEGORY Items
/*
class rhs_item_adrianov_compass: ItemCompass
{
	displayName			= "Adrianov compass";
	descriptionShort	= "Very useful for navigation.";
	UImodel				= \rhsafrf\addons\rhs_infantry2\gear\items\rhs_adrianov_compass.p3d;
	model				= \rhsafrf\addons\rhs_infantry2\gear\items\rhs_adrianov_compass.p3d;
	INVENTORY_PICTURE(rhs_item_adrianov_compass)
};
*/
class rhs_radio_R169P1: ItemRadio
{
	AUTHOR_MACRO
	model = "\rhsafrf\addons\rhs_infantry\gear\rhs_radio_R169P.p3d";
	displayName = "$STR_RHS_RADIO_R169P1";
	class ItemInfo: ItemInfo
	{
		mass = 6.6;
	};
};
class rhs_radio_R187P1: ItemRadio
{
	AUTHOR_MACRO
	model = "\rhsafrf\addons\rhs_infantry3\ratnik\rhs_azart.p3d";
	displayName = "$STR_RHS_RADIO_R187P1";
	class ItemInfo: ItemInfo
	{
		mass = 6.6;
	};
};