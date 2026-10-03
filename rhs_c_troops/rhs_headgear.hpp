///! HEADGEAR
class ItemCore;	// External class reference
class H_HelmetB : ItemCore {
	class ItemInfo;
};
class HeadGearItem;	// External class reference
class InventoryItem_Base_F;	// External class reference
class InventoryMuzzleItem_Base_F;	// External class reference
class InventoryOpticsItem_Base_F;	// External class reference

/*
6b27m - 1,25kg
6b28 - 1kg
ess goggles -220g
bala - 90g
*/

#define INVENTORY_CATEGORY headgear

class rhs_fieldcap : H_HelmetB
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_fieldcap)
	dlc = "RHS_AFRF";

	STANDARD_FACEWEAR_MACRO

	displayName = "$STR_RHS_FIELDCAP_NAME";

	model = "\rhsafrf\addons\rhs_infantry\gear\head\rhs_fieldcap";

	hiddenSelections[] = {"Camo1"};
	hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_infantry\data\6b27_co.paa"};

	descriptionShort = "No Armor";
	class ItemInfo : HeadGearItem
	{
		hiddenSelections[] = {"Camo1"};
		mass = 5;
		uniformModel = "\rhsafrf\addons\rhs_infantry\gear\head\rhs_fieldcap";
		allowedSlots[] = {801,901,701,605};
		modelSides[] = {6};
		class HitpointsProtectionInfo {
			class Head
			{
				hitpointName = "HitHead";
				armor = 0;
				passThrough = 1;
			};
		};
	};
};

class rhs_fieldcap_vsr : rhs_fieldcap
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_fieldcap_vsr)
	displayName = "$STR_RHS_FIELDCAPVSR_NAME";

	hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_infantry2\data\6b27_vsr_co.paa"};
};

class rhs_fieldcap_digi : rhs_fieldcap
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_fieldcap_digi)
	displayName = "$STR_RHS_FIELDCAPEMRSUMMER_NAME";

	model = "\rhsafrf\addons\rhs_infantry\gear\head\rhs_fieldcap_digi";
	hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_infantry\data\rhs_fieldcap_digi_co.paa"};

	class ItemInfo : ItemInfo
	{
		uniformModel = "\rhsafrf\addons\rhs_infantry\gear\head\rhs_fieldcap_digi";
	};
};
class rhs_fieldcap_digi2 : rhs_fieldcap
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_fieldcap_digi2)
	displayName = "$STR_RHS_FIELDCAPEMRSUMMER2_NAME";

	model = "\rhsafrf\addons\rhs_infantry2\gear\head\rhs_fieldcap_digi2";
	hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_infantry2\data\rhs_fieldcap_digi2_co.paa"};

	class ItemInfo: ItemInfo
	{
		uniformModel = "\rhsafrf\addons\rhs_infantry2\gear\head\rhs_fieldcap_digi2";
	};
};
class rhs_fieldcap_digi_des : rhs_fieldcap_digi
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_fieldcap_digi_des)
	scope=1;

	displayName = "$STR_RHS_FIELDCAPEMRDES_NAME";

	hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_infantry\data\rhs_fieldcap_emr_desert_co.paa"};
};

class rhs_fieldcap_ml : rhs_fieldcap
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_fieldcap_ml)
	displayName = "$STR_RHS_FIELDCAPML_NAME";

	hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_infantry\data\6b27_ml_co.paa"};
};

class rhs_fieldcap_khk : rhs_fieldcap
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_fieldcap_khk)
	displayName = "$STR_RHS_FIELDCAPKHK_NAME";

	hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_infantry\data\6b27_khk_co.paa"};
};

class rhs_fieldcap_helm : rhs_fieldcap
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_fieldcap_helm)
	displayName = "$STR_RHS_FIELDCAP6B27M_NAME";
	model = "\rhsafrf\addons\rhs_infantry\gear\head\rhs_fieldcap_helm";

	hiddenSelections[] = {"Camo1","Camo2"};
	hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_infantry\data\6b27_co.paa","rhsafrf\addons\rhs_infantry\data\6b27_co.paa"};
	class ItemInfo : ItemInfo
	{
		hiddenSelections[] = {"Camo1","Camo2"};
		mass = 20;
		uniformModel = "\rhsafrf\addons\rhs_infantry\gear\head\rhs_fieldcap_helm";
	};
};

class rhs_fieldcap_helm_digi : rhs_fieldcap_helm
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_fieldcap_helm_digi)
	displayName = "$STR_RHS_FIELDCAP6B27MEMRSUMMER_NAME";

	model = "\rhsafrf\addons\rhs_infantry\gear\head\rhs_fieldcap_helm_digi";

	hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_infantry\data\rhs_fieldcap_digi_co.paa","rhsafrf\addons\rhs_infantry\data\6b27_digi_co.paa"};

	class ItemInfo : ItemInfo
	{
		uniformModel = "\rhsafrf\addons\rhs_infantry\gear\head\rhs_fieldcap_helm_digi";
	};
};

class rhs_fieldcap_helm_ml : rhs_fieldcap_helm
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_fieldcap_helm_ml)
	displayName = "$STR_RHS_FIELDCAP6B27MML_NAME";


	hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_infantry\data\6b27_ml_co.paa","rhsafrf\addons\rhs_infantry\data\6b27_ml_co.paa"};
};

class rhs_fieldcap_izlom : rhs_fieldcap_digi2  ////Texture donated by tema
{
	author = "tema";
	INVENTORY_PICTURE(rhs_fieldcap_digi2)
	displayName = "$STR_RHS_FIELDCAPIZLOM_NAME";

	model = "\rhsafrf\addons\rhs_infantry2\gear\head\rhs_fieldcap_digi2";
	hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_infantry2\gear\head\data\cap2_izlom.paa"};

	class ItemInfo: ItemInfo
	{
		uniformModel = "\rhsafrf\addons\rhs_infantry2\gear\head\rhs_fieldcap_digi2";
	};
};

//beanie//

class rhs_beanie : H_HelmetB
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_beanie)
	dlc = "RHS_AFRF";

	STANDARD_FACEWEAR_MACRO

	displayName = "$STR_RHS_BEANIE_FLORA";

	Scope = 2;

	model = "\rhsafrf\addons\rhs_infantry\gear\head\rhs_beanie";

	hiddenSelections[] = {"Camo1"};
	hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_infantry\data\beanie_camo_co.paa"};

	descriptionShort = "No Armor";
	class ItemInfo : HeadGearItem
	{
		hiddenSelections[] = {"Camo1"};
		mass = 5;
		uniformModel = "\rhsafrf\addons\rhs_infantry\gear\head\rhs_beanie";
		allowedSlots[] = {801,901,701,605};
		modelSides[] = {6};
		class HitpointsProtectionInfo {
			class Head
			{
				hitpointName = "HitHead";
				armor = 0;
				passThrough = 1;
			};
		};
	};
};

class rhs_beanie_green : rhs_beanie
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_beanie_green)

	displayName = "$STR_RHS_BEANIE";
	hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_infantry\data\beanie_green_co.paa"};
};

//6B26
class rhs_6b26 : H_HelmetB
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_6b26)
	dlc = "RHS_AFRF";

	Scope = 2;

	HELMET_FACEWEAR_MACRO
	displayName = "$STR_RHS_6B26FLORA_NAME";

	model = "\rhsafrf\addons\rhs_infantry\gear\head\rhs_6b26";

	hiddenSelections[] = {"Camo1"};
	hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_infantry\data\6b26_co.paa"};

	class ItemInfo: ItemInfo
	{
		hiddenSelections[] = {"Camo1"};
		mass = 40;
		uniformModel = "\rhsafrf\addons\rhs_infantry\gear\head\rhs_6b26";
		allowedSlots[] = {801,901,701,605};
		modelSides[] = {3,1};

		class HitpointsProtectionInfo {
			class Head
			{
				hitpointName = "HitHead";
				armor = 6;
				passThrough = 0.5;
			};
		};
	};
};

class rhs_6b26_bala : rhs_6b26
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_6b26_bala)
	DISABLE_FACEWEAR_MACRO
	displayName = "$STR_RHS_6B26BALAFLORA_NAME";
	model = "\rhsafrf\addons\rhs_infantry\gear\head\rhs_6b26_bala";
	class ItemInfo: ItemInfo
	{
		hiddenSelections[] = {"Camo1"};
		mass = 40;
		uniformModel = "\rhsafrf\addons\rhs_infantry\gear\head\rhs_6b26_bala";
	};
};

class rhs_6b26_ess : rhs_6b26
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_6b26_ess)
	displayName = "$STR_RHS_6B26ESSFLORA_NAME";
	model = "\rhsafrf\addons\rhs_infantry\gear\head\rhs_6b26_ess";
	allowedFacewear[] = {"rhs_scarf","G_Aviator"};
	class ItemInfo: ItemInfo
	{
		mass = 40;
		uniformModel = "\rhsafrf\addons\rhs_infantry\gear\head\rhs_6b26_ess";
	};
};

class rhs_6b26_ess_bala : rhs_6b26
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_6b26_ess_bala)
	DISABLE_FACEWEAR_MACRO
	displayName = "$STR_RHS_6B26ESSBALAFLORA_NAME";
	model = "\rhsafrf\addons\rhs_infantry\gear\head\rhs_6b26_ess_bala";
	class ItemInfo: ItemInfo
	{
		mass = 40;
		uniformModel = "\rhsafrf\addons\rhs_infantry\gear\head\rhs_6b26_ess_bala";
	};
};

//6B26 bare
class rhs_6b26_green : rhs_6b26
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_6b26_green)
	displayName = "$STR_RHS_6B26_NAME";

	model = "\rhsafrf\addons\rhs_infantry\gear\head\rhs_6b26_green";

	class ItemInfo: ItemInfo
	{
		uniformModel = "\rhsafrf\addons\rhs_infantry\gear\head\rhs_6b26_green";
	};
};

class rhs_6b26_bala_green : rhs_6b26_green
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_6b26_bala_green)
	DISABLE_FACEWEAR_MACRO
	displayName = "$STR_RHS_6B26BALA_NAME";

	model = "\rhsafrf\addons\rhs_infantry\gear\head\rhs_6b26_green_bala";

	class ItemInfo: ItemInfo
	{
		uniformModel = "\rhsafrf\addons\rhs_infantry\gear\head\rhs_6b26_green_bala";
	};
};

class rhs_6b26_ess_green : rhs_6b26_green
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_6b26_ess_green)
	displayName = "$STR_RHS_6B26ESS_NAME";

	model = "\rhsafrf\addons\rhs_infantry\gear\head\rhs_6b26_green_ess";

	class ItemInfo: ItemInfo
	{
		uniformModel = "\rhsafrf\addons\rhs_infantry\gear\head\rhs_6b26_green_ess";
	};
};

class rhs_6b26_ess_bala_green : rhs_6b26_green
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_6b26_ess_bala_green)
	DISABLE_FACEWEAR_MACRO
	displayName = "$STR_RHS_6B26ESSBALA_NAME";
	model = "\rhsafrf\addons\rhs_infantry\gear\head\rhs_6b26_green_ess_bala";

	class ItemInfo: ItemInfo
	{
		uniformModel = "\rhsafrf\addons\rhs_infantry\gear\head\rhs_6b26_green_ess_bala";
	};
};

//6B26 EMR-Summer
class rhs_6b26_digi : rhs_6b26
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_6b26_digi)
	dlc = "RHS_AFRF";

	Scope = 2;

	HELMET_FACEWEAR_MACRO
	displayName = "$STR_RHS_6B26EMRSUMMER_NAME";

	model = "\rhsafrf\addons\rhs_infantry\gear\head\rhs_6b26";

	hiddenSelections[] = {"Camo1"};
	hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_infantry\data\6b26_digi_co.paa"};
};

class rhs_6b26_digi_bala : rhs_6b26_digi
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_6b26_digi_bala)
	DISABLE_FACEWEAR_MACRO
	displayName = "$STR_RHS_6B26EMRSUMMERBALACLAVA_NAME";
	model = "\rhsafrf\addons\rhs_infantry\gear\head\rhs_6b26_bala";
	class ItemInfo: ItemInfo
	{
		hiddenSelections[] = {"Camo1"};
		mass = 40;
		uniformModel = "\rhsafrf\addons\rhs_infantry\gear\head\rhs_6b26_bala";
	};
};

class rhs_6b26_digi_ess : rhs_6b26_digi
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_6b26_digi_ess)
	displayName = "$STR_RHS_6B26EMRSUMMERESS_NAME";
	model = "\rhsafrf\addons\rhs_infantry\gear\head\rhs_6b26_ess";
	allowedFacewear[] = {"rhs_scarf","G_Aviator"};
	class ItemInfo: ItemInfo
	{
		mass = 40;
		uniformModel = "\rhsafrf\addons\rhs_infantry\gear\head\rhs_6b26_ess";
	};
};

class rhs_6b26_digi_ess_bala : rhs_6b26_digi
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_6b26_digi_ess_bala)
	DISABLE_FACEWEAR_MACRO
	displayName = "$STR_RHS_6B26EMRSUMMERESSBALACLAVA_NAME";
	model = "\rhsafrf\addons\rhs_infantry\gear\head\rhs_6b26_ess_bala";
	class ItemInfo: ItemInfo
	{
		mass = 40;
		uniformModel = "\rhsafrf\addons\rhs_infantry\gear\head\rhs_6b26_ess_bala";
	};
};

//6b27m
class rhs_6b27m : H_HelmetB
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_6b27m)
	dlc = "RHS_AFRF";

	HELMET_FACEWEAR_MACRO
	displayName = "$STR_RHS_6B27MFLORA_NAME";

	model = "\rhsafrf\addons\rhs_infantry\gear\head\rhs_6b27m";

	hiddenSelections[] = {"Camo1"};
	hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_infantry\data\6b27_co.paa"};

	class ItemInfo: ItemInfo
	{
		hiddenSelections[] = {"Camo1"};
		mass = 40;
		uniformModel = "\rhsafrf\addons\rhs_infantry\gear\head\rhs_6b27m";
		allowedSlots[] = {801,901,701,605};
		modelSides[] = {6};

		class HitpointsProtectionInfo {
			class Head
			{
				hitpointName = "HitHead";
				armor = 6;
				passThrough = 0.5;
			};
		};
	};
};

class rhs_6b27m_digi : rhs_6b27m
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_6b27m_digi)
	displayName = "$STR_RHS_6B27MEMRSUMMER_NAME";

	hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_infantry\data\6b27_digi_co.paa"};
};

class rhs_6b27m_ml : rhs_6b27m
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_6b27m_ml)
	displayName = "$STR_RHS_6B27MML_NAME";

	hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_infantry\data\6b27_ml_co.paa"};
};


class rhs_6b27m_ess_bala : rhs_6b27m
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_6b27m_ess_bala)
	DISABLE_FACEWEAR_MACRO
	displayName = "$STR_RHS_6B27MFLORAESSBALACLAVA_NAME";

	model = "\rhsafrf\addons\rhs_infantry\gear\head\rhs_6b27m_ess_bala";

	class ItemInfo: ItemInfo
	{
		mass = 34.32;
		uniformModel = "\rhsafrf\addons\rhs_infantry\gear\head\rhs_6b27m_ess_bala";
	};
};

class rhs_6b27m_digi_ess_bala : rhs_6b27m_ess_bala
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_6b27m_digi_ess_bala)
	displayName = "$STR_RHS_6B27MEMRSUMMERESSBALACLAVA_NAME";

	hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_infantry\data\6b27_digi_co.paa"};
};

class rhs_6b27m_ML_ess_bala : rhs_6b27m_ess_bala
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_6b27m_ML_ess_bala)
	displayName = "$STR_RHS_6B27MMLESSBALACLAVA_NAME";

	hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_infantry\data\6b27_ml_co.paa"};
};

class rhs_6b27m_bala : rhs_6b27m
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_6b27m_bala)
	DISABLE_FACEWEAR_MACRO
	displayName = "$STR_RHS_6B27MFLORABALACLAVA_NAME";

	model = "\rhsafrf\addons\rhs_infantry\gear\head\rhs_6b27m_bala";

	class ItemInfo: ItemInfo
	{
		mass = 40;
		uniformModel = "\rhsafrf\addons\rhs_infantry\gear\head\rhs_6b27m_bala";
	};
};

class rhs_6b27m_digi_bala : rhs_6b27m_bala
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_6b27m_digi_bala)
	displayName = "$STR_RHS_6B27MEMRSUMMERBALACLAVA_NAME";

	hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_infantry\data\6b27_digi_co.paa"};
};

class rhs_6b27m_ml_bala : rhs_6b27m_bala
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_6b27m_ml_bala)
	displayName = "$STR_RHS_6B27MMLBALACLAVA_NAME";

	hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_infantry\data\6b27_ml_co.paa"};
};

class rhs_6b27m_ess : rhs_6b27m
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_6b27m_ess)
	HELMET_FACEWEAR_MACRO
	displayName = "$STR_RHS_6B27MFLORAESS_NAME";

	model = "\rhsafrf\addons\rhs_infantry\gear\head\rhs_6b27m_ess";

	class ItemInfo: ItemInfo
	{
		mass = 40;
		uniformModel = "\rhsafrf\addons\rhs_infantry\gear\head\rhs_6b27m_ess";
	};
};
class rhs_6b27m_digi_ess : rhs_6b27m_ess
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_6b27m_digi_ess)
	displayName = "$STR_RHS_6B27MEMRSUMMERESS_NAME";

	hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_infantry\data\6b27_digi_co.paa"};
};
class rhs_6b27m_ml_ess : rhs_6b27m_ess
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_6b27m_ml_ess)
	displayName = "$STR_RHS_6B27MMLESS_NAME";

	hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_infantry\data\6b27_ml_co.paa"};
};

//6b27m without camo cover (use different model)
class rhs_6b27m_green : rhs_6b27m
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_6b27m_green)
	HELMET_FACEWEAR_MACRO
	displayName = "$STR_RHS_6B27M_NAME";

	model = "\rhsafrf\addons\rhs_infantry\gear\head\rhs_6b27m_green";

	class ItemInfo: ItemInfo
	{
		uniformModel = "\rhsafrf\addons\rhs_infantry\gear\head\rhs_6b27m_green";
	};
};

class rhs_6b27m_green_ess : rhs_6b27m_ess
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_6b27m_green_ess)
	displayName = "$STR_RHS_6B27MESS_NAME";

	model = "\rhsafrf\addons\rhs_infantry\gear\head\rhs_6b27m_green_ess";

	class ItemInfo: ItemInfo
	{
		uniformModel = "\rhsafrf\addons\rhs_infantry\gear\head\rhs_6b27m_green_ess";
	};
};


class rhs_6b27m_green_bala : rhs_6b27m_bala
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_6b27m_green_bala)
	displayName = "$STR_RHS_6B27MBALACLAVA_NAME";

	model = "\rhsafrf\addons\rhs_infantry\gear\head\rhs_6b27m_green_bala";

	class ItemInfo: ItemInfo
	{
		mass = 40;
		uniformModel = "\rhsafrf\addons\rhs_infantry\gear\head\rhs_6b27m_green_bala";
	};
};
class rhs_6b27m_green_ess_bala : rhs_6b27m_ess_bala
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_6b27m_green_ess_bala)
	displayName = "$STR_RHS_6B27MESSBALACLAVA_NAME";

	model = "\rhsafrf\addons\rhs_infantry\gear\head\rhs_6b27m_green_ess_bala";

	class ItemInfo: ItemInfo
	{
		uniformModel = "\rhsafrf\addons\rhs_infantry\gear\head\rhs_6b27m_green_ess_bala";
	};
};

//6b28
class rhs_6b28 : rhs_6b27m
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_6b28)
	HELMET_FACEWEAR_MACRO
	displayName = "$STR_RHS_6B28EMRSUMMER_NAME";

	model = "\rhsafrf\addons\rhs_infantry\gear\head\rhs_6b28";

	hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_infantry\data\rhs_6b28_cover_co"};

	class ItemInfo: ItemInfo
	{
		mass = 40;
		uniformModel = "\rhsafrf\addons\rhs_infantry\gear\head\rhs_6b28";

		class HitpointsProtectionInfo {
			class Head
			{
				hitpointName = "HitHead";
				armor = 6;
				passThrough = 0.5;
			};
		};
	};
};

class rhs_6b28_flora : rhs_6b28
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_6b28_flora)
	displayName = "$STR_RHS_6B28FLORA_NAME";

	hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_infantry\data\rhs_6b28_cover_flora_co.paa"};
};

class rhs_6b28_ess : rhs_6b28
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_6b28_ess)
	displayName = "$STR_RHS_6B28EMRSUMMERESS_NAME";

	model = "\rhsafrf\addons\rhs_infantry\gear\head\rhs_6b28_ess";

	class ItemInfo: ItemInfo
	{
		mass = 40;
		uniformModel = "\rhsafrf\addons\rhs_infantry\gear\head\rhs_6b28_ess";
	};
};


class rhs_6b28_flora_ess : rhs_6b28_ess
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_6b28_flora_ess)
	displayName = "$STR_RHS_6B28FLORAESS_NAME";

	hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_infantry\data\rhs_6b28_cover_flora_co.paa"};
};


class rhs_6b28_bala : rhs_6b28
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_6b28_bala)
	DISABLE_FACEWEAR_MACRO
	displayName = "$STR_RHS_6B28EMRSUMMERBALACLAVA_NAME";

	model = "\rhsafrf\addons\rhs_infantry\gear\head\rhs_6b28_bala";

	class ItemInfo: ItemInfo
	{
		mass = 40;
		uniformModel = "\rhsafrf\addons\rhs_infantry\gear\head\rhs_6b28_bala";
	};
};

class rhs_6b28_flora_bala : rhs_6b28_bala
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_6b28_flora_bala)
	displayName = "$STR_RHS_6B28FLORABALACLAVA_NAME";

	hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_infantry\data\rhs_6b28_cover_flora_co.paa"};
};

class rhs_6b28_ess_bala : rhs_6b28
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_6b28_ess_bala)
	DISABLE_FACEWEAR_MACRO
	displayName = "$STR_RHS_6B28EMRSUMMERESSBALACLAVA_NAME";

	model = "\rhsafrf\addons\rhs_infantry\gear\head\rhs_6b28_ess_bala";
	class ItemInfo: ItemInfo
	{
		mass = 40;
		uniformModel = "\rhsafrf\addons\rhs_infantry\gear\head\rhs_6b28_ess_bala";
	};
};

class rhs_6b28_flora_ess_bala : rhs_6b28_ess_bala
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_6b28_flora_ess_bala)
	displayName = "$STR_RHS_6B28FLORAESSBALACLAVA_NAME";
	hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_infantry\data\rhs_6b28_cover_flora_co.paa"};
};

class rhs_6b28_green : rhs_6b28
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_6b28_green)
	displayName = "$STR_RHS_6B28_NAME";

	model = "\rhsafrf\addons\rhs_infantry\gear\head\rhs_6b28_green";

	hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_infantry\data\rhs_6b28_co.paa"};

	class ItemInfo: ItemInfo
	{
		uniformModel = "\rhsafrf\addons\rhs_infantry\gear\head\rhs_6b28_green";
	};
};

class rhs_6b28_green_ess : rhs_6b28_ess
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_6b28_green_ess)
	displayName = "$STR_RHS_6B28ESS_NAME";

	model = "\rhsafrf\addons\rhs_infantry\gear\head\rhs_6b28_green_ess";

	hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_infantry\data\rhs_6b28_co.paa"};

	class ItemInfo: ItemInfo
	{
		uniformModel = "\rhsafrf\addons\rhs_infantry\gear\head\rhs_6b28_green_ess";
	};
};

class rhs_6b28_green_bala : rhs_6b28
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_6b28_green_bala)
	DISABLE_FACEWEAR_MACRO

	displayName = "$STR_RHS_6B28BALACLAVA_NAME";

	model = "\rhsafrf\addons\rhs_infantry\gear\head\rhs_6b28_green_bala";

	hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_infantry\data\rhs_6b28_co.paa"};

	class ItemInfo: ItemInfo
	{
		uniformModel = "\rhsafrf\addons\rhs_infantry\gear\head\rhs_6b28_green_bala";
	};
};

class rhs_6b28_green_ess_bala : rhs_6b28
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_6b28_green_ess_bala)
	DISABLE_FACEWEAR_MACRO
	displayName = "$STR_RHS_6B28ESSBALACLAVA_NAME";

	model = "\rhsafrf\addons\rhs_infantry\gear\head\rhs_6b28_green_ess_bala";

	hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_infantry\data\rhs_6b28_co.paa"};

	class ItemInfo: ItemInfo
	{
		uniformModel = "\rhsafrf\addons\rhs_infantry\gear\head\rhs_6b28_green_ess_bala";
	};
};

class rhs_Booniehat_digi : ItemCore
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_Booniehat_digi)
	dlc = "RHS_AFRF";

	scope = 2;
	HELMET_FACEWEAR_MACRO
	displayName = "$STR_RHS_BOONIEHATEMRSUMMER_NAME";
	weaponPoolAvailable = 1;

	model = "\A3\Characters_F\Common\booniehat";
	hiddenSelections[] = {"camo"};
	hiddenSelectionsTextures[] = {"\rhsafrf\addons\rhs_infantry\Data\boonie_emr_co.paa"};

	descriptionShort = "No Armor";
	class ItemInfo : HeadGearItem {
		mass = 10;
		allowedSlots[] = {801, 901, 701, 605};
		uniformModel = "\A3\Characters_F\Common\booniehat";
		modelSides[] = {6};
		class HitpointsProtectionInfo {
			class Head
			{
				hitpointName = "HitHead";
				armor = 0;
				passThrough = 1;
			};
		};

		hiddenSelections[] = {"camo"};
	};
};

class rhs_Booniehat_flora : rhs_Booniehat_digi
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_Booniehat_flora)

	displayName = "$STR_RHS_BOONIEHATFLORA_NAME";
	hiddenSelectionsTextures[] = {"\rhsafrf\addons\rhs_infantry\Data\boonie_flora_co.paa"};
};

class rhs_ssh68 : rhs_6b27m
{
	scope = 1;
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_ssh68)
	STANDARD_FACEWEAR_MACRO
	displayName = "$STR_RHS_SSH68_NAME";

	model = "\rhsafrf\addons\rhs_infantry\gear\head\rhs_ssh68";

	hiddenSelections[] = {"camo1"};
	hiddenSelectionsTextures[] = {"\rhsafrf\addons\rhs_infantry\data\ssh68_co.paa"};

	class ItemInfo: ItemInfo
	{
		hiddenSelections[] = {"camo1"};
		uniformModel = "\rhsafrf\addons\rhs_infantry\gear\head\rhs_ssh68";

		class HitpointsProtectionInfo
		{
			class Head
			{
				hitpointName = "HitHead";
				armor = 2;
				passThrough = 0.5;
			};
		};
	};
};

class rhs_zsh7a : H_HelmetB
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_zsh7a)
	dlc = "RHS_AFRF";

	displayName = "$STR_RHS_ZSH7AKM35_NAME";

	model = "\rhsafrf\addons\rhs_infantry\gear\head\rhs_zsh7";

	hiddenSelections[] = {"camo1"};
	hiddenSelectionsTextures[] = {"\rhsafrf\addons\rhs_infantry\data\rhs_zsh7a_co.paa"};

	class ItemInfo : ItemInfo
	{
		mass = 11;
		uniformModel = "\rhsafrf\addons\rhs_infantry\gear\head\rhs_zsh7";
		allowedSlots[] = {801,901,701,605};
		modelSides[] = {6};

		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"\rhsafrf\addons\rhs_infantry\data\rhs_zsh7a_co.paa"};

		class HitpointsProtectionInfo {
			class Head
			{
				hitpointName = "HitHead";
				armor = 2;
				passThrough = 0.5;
			};
		};
	};
};

class rhs_zsh7a_alt : rhs_zsh7a
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_zsh7a_alt)

	model = "\rhsafrf\addons\rhs_infantry\gear\head\rhs_zsh7_alt";

	class ItemInfo : ItemInfo
	{
		uniformModel = "\rhsafrf\addons\rhs_infantry\gear\head\rhs_zsh7_alt";
	};
};

class rhs_zsh7a_mike : rhs_zsh7a
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_zsh7a_mike)
	displayName = "$STR_RHS_ZSH7A_NAME";

	model = "\rhsafrf\addons\rhs_infantry\gear\head\rhs_zsh7_mike";

	class ItemInfo : ItemInfo
	{
		uniformModel = "\rhsafrf\addons\rhs_infantry\gear\head\rhs_zsh7_mike";
	};
};

class rhs_zsh7a_mike_green : rhs_zsh7a_mike
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_zsh7a_mike_green)
	displayName = "$STR_RHS_ZSH7A_NAME";

	model = "\rhsafrf\addons\rhs_infantry\gear\head\rhs_zsh7_mike";
	hiddenSelectionsTextures[] = {"\rhsafrf\addons\rhs_infantry\data\rhs_zsh7a_green_co.paa"};

	class ItemInfo : ItemInfo
	{
		uniformModel = "\rhsafrf\addons\rhs_infantry\gear\head\rhs_zsh7_mike";
		hiddenSelectionsTextures[] = {"\rhsafrf\addons\rhs_infantry\data\rhs_zsh7a_green_co.paa"};
	};
};

class rhs_zsh7a_mike_alt : rhs_zsh7a_mike
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_zsh7a_mike_alt)
	displayName = "$STR_RHS_ZSH7A_NAME";

	model = "\rhsafrf\addons\rhs_infantry\gear\head\rhs_zsh7_mike_alt";

	class ItemInfo : ItemInfo
	{
		uniformModel = "\rhsafrf\addons\rhs_infantry\gear\head\rhs_zsh7_mike_alt";
	};
};

class rhs_zsh7a_mike_green_alt : rhs_zsh7a_mike_green
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_zsh7a_mike_green_alt)
	displayName = "$STR_RHS_ZSH7A_NAME";

	model = "\rhsafrf\addons\rhs_infantry\gear\head\rhs_zsh7_mike_alt";

	class ItemInfo: ItemInfo
	{
		uniformModel = "\rhsafrf\addons\rhs_infantry\gear\head\rhs_zsh7_mike_alt";
	};
};


class rhs_gssh18 : H_HelmetB
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_gssh18)
	dlc = "RHS_AFRF";

	displayName = "$STR_RHS_GSSH18_NAME";

	model = "\rhsafrf\addons\rhs_infantry\gear\head\rhs_gssh18";

	hiddenSelectionsTextures[] = {};

	class ItemInfo : HeadGearItem
	{
		mass = 1;
		uniformModel = "\rhsafrf\addons\rhs_infantry\gear\head\rhs_gssh18";
		allowedSlots[] = {801,901,701,605};
		modelSides[] = {6};
	};
};

class rhs_6m2 : H_HelmetB
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_6m2)
	dlc = "RHS_AFRF";

	displayName = "6M2";

	model = "\rhsafrf\addons\rhs_infantry2\gear\head\rhs_6m2";

	hiddenSelectionsTextures[] = {};
	descriptionShort = "No Armor";

	class ItemInfo : HeadGearItem
	{
		mass = 1;
		uniformModel = "\rhsafrf\addons\rhs_infantry2\gear\head\rhs_6m2";
		allowedSlots[] = {801,901,701,605};
		modelSides[] = {6};
	};
};

class rhs_6m2_1 : rhs_6m2
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_6m2_1)
	dlc = "RHS_AFRF";

	displayName = "6M2-1";

	model = "\rhsafrf\addons\rhs_infantry2\gear\head\rhs_6m2_1";

	class ItemInfo : ItemInfo
	{
		uniformModel = "\rhsafrf\addons\rhs_infantry2\gear\head\rhs_6m2_1";
	};
};

class rhs_tsh4 : H_HelmetB
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_tsh4)
	dlc = "RHS_AFRF";

	CREW_FACEWEAR_MACRO
	displayName = "$STR_RHS_TSH4_NAME";

	model = "\rhsafrf\addons\rhs_infantry\gear\head\rhs_tsh4";

	hiddenSelections[] = {"camo1"};
	hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_infantry\data\crew_equip_co.paa"};

	class ItemInfo : HeadGearItem
	{
		mass = 5;
		hiddenSelections[] = {"camo1"};
		uniformModel = "\rhsafrf\addons\rhs_infantry\gear\head\rhs_tsh4";
		allowedSlots[] = {801,901,701,605};
		modelSides[] = {6};
	};
};

class rhs_tsh4_ess : rhs_tsh4
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_tsh4_ess)
	CREW_ESS_FACEWEAR_MACRO
	displayName = "$STR_RHS_TSH4ESS_NAME";

	model = "\rhsafrf\addons\rhs_infantry\gear\head\rhs_tsh4_ess";

	class ItemInfo : ItemInfo
	{
		mass = 6;
		uniformModel = "\rhsafrf\addons\rhs_infantry\gear\head\rhs_tsh4_ess";
	};
};

class rhs_tsh4_bala : rhs_tsh4
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_tsh4_bala)
	DISABLE_FACEWEAR_MACRO
	displayName = "$STR_RHS_TSH4BALACLAVA_NAME";

	model = "\rhsafrf\addons\rhs_infantry\gear\head\rhs_tsh4_bala";

	class ItemInfo : ItemInfo
	{
		mass = 6;
		uniformModel = "\rhsafrf\addons\rhs_infantry\gear\head\rhs_tsh4_bala";
	};
};

class rhs_tsh4_ess_bala : rhs_tsh4
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_tsh4_ess_bala)
	DISABLE_FACEWEAR_MACRO
	displayName = "$STR_RHS_TSH4ESSBALACLAVA_NAME";

	model = "\rhsafrf\addons\rhs_infantry\gear\head\rhs_tsh4_ess_bala";

	class ItemInfo: ItemInfo
	{
		mass = 6;
		uniformModel = "\rhsafrf\addons\rhs_infantry\gear\head\rhs_tsh4_ess_bala";
	};
};

class rhs_6b47 : rhs_6b28
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_6b47)
	HELMET_FACEWEAR_MACRO
	displayName = "$STR_RHS_6B47_NAME";

	model = "\rhsafrf\addons\rhs_infantry2\gear\head\rhs_6b47";

	hiddenSelections[] = {"camo1","camo2"};
	hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_infantry2\gear\head\data\rhs_6b47_co.paa","rhsafrf\addons\rhs_infantry2\gear\head\data\rhs_6b7-1m_co.paa"};

	class ItemInfo : ItemInfo
	{
		hiddenSelections[] = {"camo1","camo2"};
		uniformModel = "\rhsafrf\addons\rhs_infantry2\gear\head\rhs_6b47";
	};
};

class rhs_6b47_bala : rhs_6b47
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_6b47_bala)
	dlc = "RHS_AFRF";
	DISABLE_FACEWEAR_MACRO
	displayName = "$STR_RHS_6B47_BALA_NAME";

	model = "\rhsafrf\addons\rhs_infantry2\gear\head\rhs_6b47_bala";

	hiddenSelections[] = {"camo1","camo2","camo3"};
	hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_infantry2\gear\head\data\rhs_6b47_co.paa","rhsafrf\addons\rhs_infantry2\gear\head\data\rhs_6b7-1m_co.paa","rhsafrf\addons\rhs_infantry2\gear\head\data\rhs_bala2_olive_co.paa"};
	class ItemInfo: ItemInfo
	{
		hiddenSelections[] = {"camo1","camo2","camo3"};
		uniformModel = "\rhsafrf\addons\rhs_infantry2\gear\head\rhs_6b47_bala";
	};
};

class rhs_6b47_ess : rhs_6b47
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_6b47_ess)
	displayName = "$STR_RHS_6B47_ESS_NAME";

	model = "\rhsafrf\addons\rhs_infantry2\gear\head\rhs_6b47_ess";

	class ItemInfo: ItemInfo
	{
		uniformModel = "\rhsafrf\addons\rhs_infantry2\gear\head\rhs_6b47_ess";
	};
};

class rhs_6b47_ess_bala : rhs_6b47
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_6b47_ess_bala)
	DISABLE_FACEWEAR_MACRO
	displayName = "$STR_RHS_6B47_ESS_BALA_NAME";

	model = "\rhsafrf\addons\rhs_infantry2\gear\head\rhs_6b47_ess_bala";

	hiddenSelections[] = {"camo1","camo2","camo3"};
	hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_infantry2\gear\head\data\rhs_6b47_co.paa","rhsafrf\addons\rhs_infantry2\gear\head\data\rhs_6b7-1m_co.paa","rhsafrf\addons\rhs_infantry2\gear\head\data\rhs_bala1_olive_co.paa"};
	class ItemInfo: ItemInfo
	{
		hiddenSelections[] = {"camo1","camo2","camo3"};
		uniformModel = "\rhsafrf\addons\rhs_infantry2\gear\head\rhs_6b47_ess_bala";
	};
};

class rhs_6b47_6m2 : rhs_6b47
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_6b47_6m2)
	displayName = "$STR_RHS_6B47_6M2_NAME";

	model = "\rhsafrf\addons\rhs_infantry2\gear\head\rhs_6b47_6m2";

	class ItemInfo: ItemInfo
	{
		uniformModel = "\rhsafrf\addons\rhs_infantry2\gear\head\rhs_6b47_6m2";
	};
};

class rhs_6b47_6m2_1 : rhs_6b47
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_6b47_6m2_1)
	displayName = "$STR_RHS_6B47_6M2_1_NAME";

	model = "\rhsafrf\addons\rhs_infantry2\gear\head\rhs_6b47_6m2_1";

	class ItemInfo: ItemInfo
	{
		uniformModel = "\rhsafrf\addons\rhs_infantry2\gear\head\rhs_6b47_6m2_1";
	};
};

class rhs_6b7_1m : rhs_6b28
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_6b7_1m)
	HELMET_FACEWEAR_MACRO
	displayName = "$STR_RHS_6B71M_NAME";

	model = "\rhsafrf\addons\rhs_infantry2\gear\head\rhs_6b7_1m";

	hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_infantry2\gear\head\data\rhs_6b7-1m_co.paa"};

	class ItemInfo: ItemInfo
	{
		uniformModel = "\rhsafrf\addons\rhs_infantry2\gear\head\rhs_6b7_1m";
	};
};

class rhs_6b7_1m_ess : rhs_6b7_1m
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_6b7_1m_ess)
	displayName = "$STR_RHS_6B71M_ESS_NAME";

	model = "\rhsafrf\addons\rhs_infantry2\gear\head\rhs_6b7_1m_ess";

	class ItemInfo: ItemInfo
	{
		uniformModel = "\rhsafrf\addons\rhs_infantry2\gear\head\rhs_6b7_1m_ess";
	};
};

class rhs_6b7_1m_ess_bala : rhs_6b7_1m
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_6b7_1m_ess_bala)
	DISABLE_FACEWEAR_MACRO
	displayName = "$STR_RHS_6B71M_ESS_BALA_NAME";

	model = "\rhsafrf\addons\rhs_infantry2\gear\head\rhs_6b7_1m_ess_bala";

	class ItemInfo: ItemInfo
	{
		uniformModel = "\rhsafrf\addons\rhs_infantry2\gear\head\rhs_6b7_1m_ess_bala";
	};
};

class rhs_6b7_1m_bala1 : rhs_6b7_1m
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_6b7_1m_bala1)
	DISABLE_FACEWEAR_MACRO
	displayName = "$STR_RHS_6B71M_BALA_NAME";

	model = "\rhsafrf\addons\rhs_infantry2\gear\head\rhs_6b7_1m_balaclava1";
	hiddenSelections[] = {"Camo1","Camo2"};
	hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_infantry2\gear\head\data\rhs_6b7-1m_co.paa","rhsafrf\addons\rhs_infantry2\gear\head\data\rhs_bala1_olive_co.paa"};

	class ItemInfo: ItemInfo
	{
		hiddenSelections[] = {"Camo1","Camo2"};
		hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_infantry2\gear\head\data\rhs_6b7-1m_co.paa","rhsafrf\addons\rhs_infantry2\gear\head\data\rhs_bala1_olive_co.paa"};
		uniformModel = "\rhsafrf\addons\rhs_infantry2\gear\head\rhs_6b7_1m_balaclava1";
	};
};

class rhs_6b7_1m_bala1_emr : rhs_6b7_1m_bala1
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_6b7_1m_bala1_emr)
	allowedFacewear[] = {};
	displayName = "$STR_RHS_6B71M_EMR_BALA_NAME";

	model = "\rhsafrf\addons\rhs_infantry2\gear\head\rhs_6b7_1m_cover_balaclava1";
	hiddenSelections[] = {"Camo1","Camo2","Camo3"};
		hiddenSelectionsTextures[] =
		{
			"rhsafrf\addons\rhs_infantry2\gear\head\data\rhs_6b7-1m_co.paa",
			"rhsafrf\addons\rhs_infantry2\gear\head\data\rhs_6b7-1m_emr_co.paa",
			"rhsafrf\addons\rhs_infantry2\gear\head\data\rhs_bala1_olive_co.paa"
		};

	class ItemInfo: ItemInfo
	{
		hiddenSelections[] = {"Camo1","Camo2","Camo3"};
		hiddenSelectionsTextures[] =
		{
			"rhsafrf\addons\rhs_infantry2\gear\head\data\rhs_6b7-1m_co.paa",
			"rhsafrf\addons\rhs_infantry2\gear\head\data\rhs_6b7-1m_emr_co.paa",
			"rhsafrf\addons\rhs_infantry2\gear\head\data\rhs_bala1_olive_co.paa"
		};
		uniformModel = "\rhsafrf\addons\rhs_infantry2\gear\head\rhs_6b7_1m_cover_balaclava1";
	};
};

class rhs_6b7_1m_emr_ess : rhs_6b7_1m_bala1
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_6b7_1m_emr_ess)
	HELMET_FACEWEAR_MACRO
	displayName = "$STR_RHS_6B71M_EMR_ESS_NAME";

	model = "\rhsafrf\addons\rhs_infantry2\gear\head\rhs_6b7_1m_cover_ess";
	hiddenSelections[] = {"Camo1","Camo2"};
		hiddenSelectionsTextures[] =
		{
			"rhsafrf\addons\rhs_infantry2\gear\head\data\rhs_6b7-1m_co.paa",
			"rhsafrf\addons\rhs_infantry2\gear\head\data\rhs_6b7-1m_emr_co.paa"
		};

	class ItemInfo: ItemInfo
	{
		hiddenSelections[] = {"Camo1","Camo2"};
		hiddenSelectionsTextures[] =
		{
			"rhsafrf\addons\rhs_infantry2\gear\head\data\rhs_6b7-1m_co.paa",
			"rhsafrf\addons\rhs_infantry2\gear\head\data\rhs_6b7-1m_emr_co.paa"
		};
		uniformModel = "\rhsafrf\addons\rhs_infantry2\gear\head\rhs_6b7_1m_cover_ess";
	};
};

class rhs_6b7_1m_emr_ess_bala : rhs_6b7_1m_bala1
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_6b7_1m_emr_ess_bala)
	allowedFacewear[] = {};
	displayName = "$STR_RHS_6B71M_EMR_ESS_BALA_NAME";

	model = "\rhsafrf\addons\rhs_infantry2\gear\head\rhs_6b7_1m_cover_ess_bala";
	hiddenSelections[] = {"Camo1","Camo2","Camo3"};
		hiddenSelectionsTextures[] =
		{
			"rhsafrf\addons\rhs_infantry2\gear\head\data\rhs_6b7-1m_co.paa",
			"rhsafrf\addons\rhs_infantry2\gear\head\data\rhs_6b7-1m_emr_co.paa",
			"rhsafrf\addons\rhs_infantry2\gear\head\data\rhs_bala2_olive_co.paa"
		};

	class ItemInfo: ItemInfo
	{
		hiddenSelections[] = {"Camo1","Camo2","Camo3"};
		hiddenSelectionsTextures[] =
		{
			"rhsafrf\addons\rhs_infantry2\gear\head\data\rhs_6b7-1m_co.paa",
			"rhsafrf\addons\rhs_infantry2\gear\head\data\rhs_6b7-1m_emr_co.paa",
			"rhsafrf\addons\rhs_infantry2\gear\head\data\rhs_bala2_olive_co.paa"
		};
		uniformModel = "\rhsafrf\addons\rhs_infantry2\gear\head\rhs_6b7_1m_cover_ess_bala";
	};
};

class rhs_6b7_1m_bala1_flora : rhs_6b7_1m_bala1_emr
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_6b7_1m_bala1_flora)
	displayName = "$STR_RHS_6B71M_FLORA_BALA_NAME";

	hiddenSelectionsTextures[] =
		{
			"rhsafrf\addons\rhs_infantry2\gear\head\data\rhs_6b7-1m_co.paa",
			"rhsafrf\addons\rhs_infantry2\gear\head\data\rhs_6b7-1m_flora_co.paa",
			"rhsafrf\addons\rhs_infantry2\gear\head\data\rhs_bala1_olive_co.paa"
		};

	class ItemInfo: ItemInfo
	{
		hiddenSelections[] = {"Camo1","Camo2","Camo3"};
		hiddenSelectionsTextures[] =
		{
			"rhsafrf\addons\rhs_infantry2\gear\head\data\rhs_6b7-1m_co.paa",
			"rhsafrf\addons\rhs_infantry2\gear\head\data\rhs_6b7-1m_flora_co.paa",
			"rhsafrf\addons\rhs_infantry2\gear\head\data\rhs_bala1_olive_co.paa"
		};
		uniformModel = "\rhsafrf\addons\rhs_infantry2\gear\head\rhs_6b7_1m_cover_balaclava1";
	};
};

class rhs_6b7_1m_bala1_olive : rhs_6b7_1m_bala1_emr
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_6b7_1m_bala1_olive)
	displayName = "$STR_RHS_6B71M_OLIVE_BALA_NAME";

	hiddenSelectionsTextures[] =
		{
			"rhsafrf\addons\rhs_infantry2\gear\head\data\rhs_6b7-1m_co.paa",
			"rhsafrf\addons\rhs_infantry2\gear\head\data\rhs_6b7-1m_olive_co.paa",
			"rhsafrf\addons\rhs_infantry2\gear\head\data\rhs_bala1_olive_co.paa"
		};

	class ItemInfo : ItemInfo
	{
		hiddenSelections[] = {"Camo1","Camo2","Camo3"};
		hiddenSelectionsTextures[] =
		{
			"rhsafrf\addons\rhs_infantry2\gear\head\data\rhs_6b7-1m_co.paa",
			"rhsafrf\addons\rhs_infantry2\gear\head\data\rhs_6b7-1m_olive_co.paa",
			"rhsafrf\addons\rhs_infantry2\gear\head\data\rhs_bala1_olive_co.paa"
		};
		uniformModel = "\rhsafrf\addons\rhs_infantry2\gear\head\rhs_6b7_1m_cover_balaclava1";
	};
};

class rhs_6b7_1m_bala2 : rhs_6b7_1m
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_6b7_1m_bala2)
	DISABLE_FACEWEAR_MACRO
	displayName = "$STR_RHS_6B71M_BALA_NAME";

	model = "\rhsafrf\addons\rhs_infantry2\gear\head\rhs_6b7_1m_balaclava2";
	hiddenSelections[] = {"Camo1","Camo2"};
	hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_infantry2\gear\head\data\rhs_6b7-1m_co.paa","rhsafrf\addons\rhs_infantry2\gear\head\data\rhs_bala2_olive_co.paa"};

	class ItemInfo: ItemInfo
	{
		hiddenSelections[] = {"Camo1","Camo2"};
		hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_infantry2\gear\head\data\rhs_6b7-1m_co.paa","rhsafrf\addons\rhs_infantry2\gear\head\data\rhs_bala2_olive_co.paa"};
		uniformModel = "\rhsafrf\addons\rhs_infantry2\gear\head\rhs_6b7_1m_balaclava2";
	};
};

class rhs_6b7_1m_bala2_emr : rhs_6b7_1m_bala2
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_6b7_1m_bala2_emr)
	allowedFacewear[] = {};
	displayName = "$STR_RHS_6B71M_EMR_BALA_NAME";

	model = "\rhsafrf\addons\rhs_infantry2\gear\head\rhs_6b7_1m_cover_balaclava2";
	hiddenSelections[] = {"Camo1","Camo2","Camo3"};
		hiddenSelectionsTextures[] =
		{
			"rhsafrf\addons\rhs_infantry2\gear\head\data\rhs_6b7-1m_co.paa",
			"rhsafrf\addons\rhs_infantry2\gear\head\data\rhs_6b7-1m_emr_co.paa",
			"rhsafrf\addons\rhs_infantry2\gear\head\data\rhs_bala2_olive_co.paa"
		};

	class ItemInfo: ItemInfo
	{
		hiddenSelections[] = {"Camo1","Camo2","Camo3"};
		hiddenSelectionsTextures[] =
		{
			"rhsafrf\addons\rhs_infantry2\gear\head\data\rhs_6b7-1m_co.paa",
			"rhsafrf\addons\rhs_infantry2\gear\head\data\rhs_6b7-1m_emr_co.paa",
			"rhsafrf\addons\rhs_infantry2\gear\head\data\rhs_bala2_olive_co.paa"
		};
		uniformModel = "\rhsafrf\addons\rhs_infantry2\gear\head\rhs_6b7_1m_cover_balaclava2";
	};
};

class rhs_6b7_1m_bala2_flora : rhs_6b7_1m_bala2_emr
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_6b7_1m_bala2_flora)
	displayName = "$STR_RHS_6B71M_FLORA_BALA_NAME";

	hiddenSelections[] = {"Camo1","Camo2","Camo3"};
		hiddenSelectionsTextures[] =
		{
			"rhsafrf\addons\rhs_infantry2\gear\head\data\rhs_6b7-1m_co.paa",
			"rhsafrf\addons\rhs_infantry2\gear\head\data\rhs_6b7-1m_flora_co.paa",
			"rhsafrf\addons\rhs_infantry2\gear\head\data\rhs_bala2_olive_co.paa"
		};

	class ItemInfo: ItemInfo
	{
		hiddenSelections[] = {"Camo1","Camo2","Camo3"};
		hiddenSelectionsTextures[] =
		{
			"rhsafrf\addons\rhs_infantry2\gear\head\data\rhs_6b7-1m_co.paa",
			"rhsafrf\addons\rhs_infantry2\gear\head\data\rhs_6b7-1m_flora_co.paa",
			"rhsafrf\addons\rhs_infantry2\gear\head\data\rhs_bala2_olive_co.paa"
		};
		uniformModel = "\rhsafrf\addons\rhs_infantry2\gear\head\rhs_6b7_1m_cover_balaclava2";
	};
};

class rhs_6b7_1m_bala2_olive : rhs_6b7_1m_bala2_emr
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_6b7_1m_bala2_olive)
	displayName = "$STR_RHS_6B71M_OLIVE_BALA_NAME";

	hiddenSelections[] = {"Camo1","Camo2","Camo3"};
		hiddenSelectionsTextures[] =
		{
			"rhsafrf\addons\rhs_infantry2\gear\head\data\rhs_6b7-1m_co.paa",
			"rhsafrf\addons\rhs_infantry2\gear\head\data\rhs_6b7-1m_olive_co.paa",
			"rhsafrf\addons\rhs_infantry2\gear\head\data\rhs_bala2_olive_co.paa"
		};

	class ItemInfo: ItemInfo
	{
		hiddenSelections[] = {"Camo1","Camo2","Camo3"};
		hiddenSelectionsTextures[] =
		{
			"rhsafrf\addons\rhs_infantry2\gear\head\data\rhs_6b7-1m_co.paa",
			"rhsafrf\addons\rhs_infantry2\gear\head\data\rhs_6b7-1m_olive_co.paa",
			"rhsafrf\addons\rhs_infantry2\gear\head\data\rhs_bala2_olive_co.paa"
		};
		uniformModel = "\rhsafrf\addons\rhs_infantry2\gear\head\rhs_6b7_1m_cover_balaclava2";
	};
};

class rhs_6b7_1m_emr : rhs_6b7_1m
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_6b7_1m_emr)
	HELMET_FACEWEAR_MACRO
	displayName = "$STR_RHS_6B71M_EMR_NAME";

	model = "\rhsafrf\addons\rhs_infantry2\gear\head\rhs_6b7_1m_cover";

	hiddenSelections[] = {"Camo1","Camo2"};
	hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_infantry2\gear\head\data\rhs_6b7-1m_co.paa","rhsafrf\addons\rhs_infantry2\gear\head\data\rhs_6b7-1m_emr_co.paa"};

	class ItemInfo: ItemInfo
	{
		hiddenSelections[] = {"Camo1","Camo2"};
		uniformModel = "\rhsafrf\addons\rhs_infantry2\gear\head\rhs_6b7_1m_cover";
	};
};

class rhs_6b7_1m_flora : rhs_6b7_1m_emr
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_6b7_1m_flora)
	displayName = "$STR_RHS_6B71M_FLORA_NAME";

	hiddenSelections[] = {"Camo1","Camo2"};
	hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_infantry2\gear\head\data\rhs_6b7-1m_co.paa","rhsafrf\addons\rhs_infantry2\gear\head\data\rhs_6b7-1m_flora_co.paa"};
};

class rhs_6b7_1m_flora_ns3 : rhs_6b7_1m_flora
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_6b7_1m_flora_ns3)
	displayName = "$STR_RHS_6B71M_FLORA_NS3_NAME";
	model = "\rhsafrf\addons\rhs_infantry2\gear\head\rhs_6b7_1m_cover_ns3";

	class ItemInfo: ItemInfo
	{
		hiddenSelections[] = {"Camo1","Camo2"};
		uniformModel = "\rhsafrf\addons\rhs_infantry2\gear\head\rhs_6b7_1m_cover_ns3";
	};
};

class rhs_6b7_1m_olive : rhs_6b7_1m_emr
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_6b7_1m_olive)
	displayName = "$STR_RHS_6B71M_OLIVE_NAME";

	hiddenSelections[] = {"Camo1","Camo2"};
	hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_infantry2\gear\head\data\rhs_6b7-1m_co.paa","rhsafrf\addons\rhs_infantry2\gear\head\data\rhs_6b7-1m_olive_co.paa"};
};

class rhs_altyn : rhs_6b7_1m_emr
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_altyn)
	DISABLE_FACEWEAR_MACRO
	displayName = "$STR_RHS_ALTYN_NAME";

	model = "\rhsafrf\addons\rhs_infantry2\gear\head\rhs_altyn";

	hiddenSelections[] = {"Camo1"};
	hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_infantry2\gear\head\data\rhs_altyn_co.paa"};


	class ItemInfo: ItemInfo
	{
		hiddenSelections[] = {"Camo1"};
		uniformModel = "\rhsafrf\addons\rhs_infantry2\gear\head\rhs_altyn";

		class HitpointsProtectionInfo {
			class Head
			{
				hitpointName = "HitHead";
				armor = 6;
				passThrough = 0.5;
			};
		};
	};
};

class rhs_altyn_bala : rhs_altyn
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_altyn_bala)
	displayName = "$STR_RHS_ALTYN_BALA_NAME";

	model = "\rhsafrf\addons\rhs_infantry2\gear\head\rhs_altyn_bala";

	class ItemInfo: ItemInfo
	{
		uniformModel = "\rhsafrf\addons\rhs_infantry2\gear\head\rhs_altyn_bala";
	};
};

class rhs_altyn_visordown : rhs_altyn
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_altyn_visordown)
	displayName = "$STR_RHS_ALTYN_VISORDOWN_NAME";

	model = "\rhsafrf\addons\rhs_infantry2\gear\head\rhs_altyn_visordown";

	class ItemInfo: ItemInfo
	{
		uniformModel = "\rhsafrf\addons\rhs_infantry2\gear\head\rhs_altyn_visordown";

		class HitpointsProtectionInfo {
			class Head
			{
				hitpointName = "HitHead";
				armor = 6;
				passThrough = 0.5;
			};
			class Face
			{
				hitpointName = "HitFace";
				armor = 6;
				passThrough = 0.5;
			};
		};
	};
};

class rhs_altyn_novisor : rhs_altyn
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_altyn_novisor)
	displayName = "$STR_RHS_ALTYN_NOVISOR_NAME";

	model = "\rhsafrf\addons\rhs_infantry2\gear\head\rhs_altyn_novisor";

	class ItemInfo: ItemInfo
	{
		uniformModel = "\rhsafrf\addons\rhs_infantry2\gear\head\rhs_altyn_novisor";
	};
};

class rhs_altyn_novisor_bala : rhs_altyn_novisor
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_altyn_novisor_bala)
	displayName = "$STR_RHS_ALTYN_NOVISOR_BALA_NAME";

	model = "\rhsafrf\addons\rhs_infantry2\gear\head\rhs_altyn_novisor_bala";

	class ItemInfo: ItemInfo
	{
		uniformModel = "\rhsafrf\addons\rhs_infantry2\gear\head\rhs_altyn_novisor_bala";
	};
};

class rhs_altyn_novisor_ess : rhs_altyn
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_altyn_novisor_ess)
	displayName = "$STR_RHS_ALTYN_NOVISOR_ESS_NAME";

	model = "\rhsafrf\addons\rhs_infantry2\gear\head\rhs_altyn_novisor_ess";

	class ItemInfo: ItemInfo
	{
		uniformModel = "\rhsafrf\addons\rhs_infantry2\gear\head\rhs_altyn_novisor_ess";
	};
};

class rhs_altyn_novisor_ess_bala : rhs_altyn_novisor_ess
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_altyn_novisor_ess_bala)
	displayName = "$STR_RHS_ALTYN_NOVISOR_ESS_BALA_NAME";

	model = "\rhsafrf\addons\rhs_infantry2\gear\head\rhs_altyn_novisor_ess_bala";

	class ItemInfo: ItemInfo
	{
		uniformModel = "\rhsafrf\addons\rhs_infantry2\gear\head\rhs_altyn_novisor_ess_bala";
	};
};

//Zsh-1-2 legacy
class rhs_zsh12 : rhs_altyn_novisor
{
	dlc = "RHS_AFRF";
	scope=1;
	AUTHOR_MACRO

};

class rhs_zsh12_black : rhs_zsh12
{
	dlc = "RHS_AFRF";
	AUTHOR_MACRO

};

class rhs_zsh12_bala : rhs_altyn_novisor_bala
{

	AUTHOR_MACRO
	dlc = "RHS_AFRF";
	scope=1;
};

// nvg
class NVGoggles;

class rhs_1PN138: NVGoggles
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_1PN138)
	dlc = "RHS_AFRF";
	Scope=2;
	ScopeCurator=2;
	displayName = "$STR_RHS_1PN138";
	model = "\rhsafrf\addons\rhs_infantry2\gear\nvg\NVM14_HELM_OFF.p3d";
	modelOptics="\rhsafrf\addons\rhs_infantry2\gear\nvg\mono_opt";
	descriptionShort="1PN138 Monocular Night Vision Device";

	class ItemInfo
	{
		type = 616;
		hmdType = 0;
		uniformModel = "\rhsafrf\addons\rhs_infantry2\gear\nvg\NVM14_HELM_ON.p3d";
		modelOff = "\rhsafrf\addons\rhs_infantry2\gear\nvg\NVM14_HELM_OFF.p3d";
		mass = 15;
	};
};

class rhs_6m2_nvg: rhs_1PN138
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_6m2)
	displayName="6M2";

	modelOptics = "\A3\Weapons_F\empty";
	model="\rhsafrf\addons\rhs_infantry2\gear\head\rhs_6m2";

	visionMode[] = {"Normal","Normal"};

	descriptionShort="No Armor";

	class ItemInfo
	{
		type=616;
		hmdType=0;
		uniformModel="\rhsafrf\addons\rhs_infantry2\gear\head\rhs_6m2";
		modelOff="\rhsafrf\addons\rhs_infantry2\gear\head\rhs_6m2";
		mass=1;
	};
};

class rhs_6m2_1_nvg: rhs_6m2_nvg
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_6m2_1)
	displayName="6M2-1";

	model="\rhsafrf\addons\rhs_infantry2\gear\head\rhs_6m2_1";

	class ItemInfo : ItemInfo
	{
		uniformModel="\rhsafrf\addons\rhs_infantry2\gear\head\rhs_6m2_1";
		modelOff="\rhsafrf\addons\rhs_infantry2\gear\head\rhs_6m2_1";
	};
};

// Beret

class rhs_beret_vdv1 : rhs_Booniehat_flora
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_beret_vdv1)
	dlc = "RHS_AFRF";

	scope = 2;
	STANDARD_FACEWEAR_MACRO
	displayName = "$STR_RHS_BERET_VDV_NAME";
	weaponPoolAvailable = 1;
	model = "\rhsafrf\addons\rhs_infantry2\gear\head\rhs_vdv_beret";
	hiddenSelections[] = {"Camo1"};
	hiddenSelectionsTextures[] = {"\rhsafrf\addons\rhs_infantry2\gear\head\data\rhs_vdv_beret_co.paa"};

	descriptionShort = "No Armor";
	class ItemInfo : HeadGearItem
	{
		mass = 5;
		allowedSlots[] = {801, 901, 701, 605};
		uniformModel  = "\rhsafrf\addons\rhs_infantry2\gear\head\rhs_vdv_beret";
		modelSides[] = {6};
		hiddenSelections[] = {"Camo1"};
		class HitpointsProtectionInfo {
			class Head
			{
				hitpointName = "HitHead";
				armor = 0;
				passThrough = 1;
			};
		};
	};
};

class rhs_beret_vdv2 : rhs_beret_vdv1
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_beret_vdv2)

	model = "\rhsafrf\addons\rhs_infantry2\gear\head\rhs_vdv_beret2";

	hiddenSelectionsTextures[] = {"\rhsafrf\addons\rhs_infantry2\gear\head\data\rhs_vdv_beret2_co.paa"};

	class ItemInfo : ItemInfo
	{
		uniformModel  = "\rhsafrf\addons\rhs_infantry2\gear\head\rhs_vdv_beret2";
	};
};

class rhs_beret_mp1 : rhs_beret_vdv1
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_beret_mp1)

	displayName = "$STR_RHS_BERET_MP_NAME";
	model = "\rhsafrf\addons\rhs_infantry2\gear\head\rhs_mp_beret";

	hiddenSelectionsTextures[] = {"\rhsafrf\addons\rhs_infantry2\gear\head\data\rhs_mp_beret_co.paa"};
	class ItemInfo : ItemInfo
	{
		uniformModel  = "\rhsafrf\addons\rhs_infantry2\gear\head\rhs_mp_beret";
	};
};

class rhs_beret_milp : rhs_beret_vdv1
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_beret_milp)

	displayName = "$STR_RHS_BERET_MILP_NAME";
	model = "\rhsafrf\addons\rhs_infantry2\gear\head\rhs_milp_beret";

	hiddenSelectionsTextures[] = {"\rhsafrf\addons\rhs_infantry2\gear\head\data\rhs_milp_beret_co.paa"};

	class ItemInfo : ItemInfo
	{
		uniformModel  = "\rhsafrf\addons\rhs_infantry2\gear\head\rhs_milp_beret";
	};
};

class rhs_beret_vdv3 : rhs_beret_milp
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_beret_vdv3)
	displayName = "$STR_RHS_BERET_VDV_NAME";

	hiddenSelectionsTextures[] = {"\rhsafrf\addons\rhs_infantry2\gear\head\data\rhs_vdv_beret3_co.paa"};

};

class rhs_beret_mp2 : rhs_beret_vdv1
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_beret_mp2)

	displayName = "$STR_RHS_BERET_MP_NAME";
	model = "\rhsafrf\addons\rhs_infantry2\gear\head\rhs_mp_beret2";

	hiddenSelectionsTextures[] = {"\rhsafrf\addons\rhs_infantry2\gear\head\data\rhs_mp_beret2_co.paa"};
	class ItemInfo : ItemInfo
	{
		uniformModel  = "\rhsafrf\addons\rhs_infantry2\gear\head\rhs_mp_beret2";
	};
};

class rhs_beret_mvd : rhs_beret_milp  ////Texture donated by tema
{
	author = "tema";
	//INVENTORY_PICTURE(rhs_beret_mvd)
	displayName = "$STR_RHS_BERET_MVD_NAME";
	model = "\rhsafrf\addons\rhs_infantry2\gear\head\rhs_milp_beret";

	hiddenSelectionsTextures[] = {"\rhsafrf\addons\rhs_infantry2\gear\head\data\T_beret_red_co.paa"};

	class ItemInfo : ItemInfo
	{
		uniformModel  = "\rhsafrf\addons\rhs_infantry2\gear\head\rhs_milp_beret";
	};
};

  ////Texture donated by tema
  
  
  
  
//Lodu content
//Steel Helmets
class rhs_ssh60 : rhs_ssh68
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_ssh60)
	displayName = "$STR_RHS_SSH60_NAME";
	
	LODU_SCOPE

	model = "\rhsafrf\addons\rhs_infantry3\gear\head\rhs_SSH_60";

	hiddenSelections[] = {"camo"};
	hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_infantry3\data\cask_rus_ww2_co.paa"};

	class ItemInfo: ItemInfo
	{
		hiddenSelections[] = {"camo"};
		uniformModel = "\rhsafrf\addons\rhs_infantry3\gear\head\rhs_SSH_60";
	};
};
class rhs_ssh68_2 : rhs_ssh68
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_ssh68_2)
	displayName = "$STR_RHS_SSH68_NAME";
	
	LODU_SCOPE

	model = "\rhsafrf\addons\rhs_infantry3\gear\head\rhs_SSH_68";

	hiddenSelections[] = {"camo"};
	hiddenSelectionsTextures[] = {"\rhsafrf\addons\rhs_infantry3\data\SSH68_co.paa"};

	class ItemInfo: ItemInfo
	{
		hiddenSelections[] = {"camo"};
		uniformModel = "\rhsafrf\addons\rhs_infantry3\gear\head\rhs_SSH_68";
	};
};

//Sphera Helmets
class rhs_stsh81 : rhs_ssh68
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_stsh81)
	displayName = "$STR_RHS_STSH81_NAME";
	
	LODU_SCOPE

	model = "\rhsafrf\addons\rhs_infantry3\gear\head\rhs_sfera01";

	hiddenSelections[] = {"camo"};
	hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_infantry3\data\sfera01_co.paa"};

	class ItemInfo: ItemInfo
	{
		hiddenSelections[] = {"camo"};
		uniformModel = "\rhsafrf\addons\rhs_infantry3\gear\head\rhs_sfera01";
		class HitpointsProtectionInfo {
			class Head
			{
				hitpointName = "HitHead";
				armor = 6;
				passThrough = 0.5;
			};
		};
		mass = 40;
	};
};
class rhs_stsh81_butan : rhs_stsh81
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_stsh81_butan)
	displayName = "$STR_RHS_STSH81_BUTAN_NAME";

	model = "\rhsafrf\addons\rhs_infantry3\gear\head\rhs_sfera_butan";
	
	hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_infantry3\data\sfera_butan_co.paa"};

	class ItemInfo: ItemInfo
	{
		uniformModel = "\rhsafrf\addons\rhs_infantry3\gear\head\rhs_sfera_butan";
	};
};

//Hats
class rhs_fieldcap_m88 : rhs_beanie
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_fieldcap_m88)
	displayName = "$STR_RHS_FIELDCAPM88_NAME";
	
	LODU_SCOPE
	
	model = "\rhsafrf\addons\rhs_infantry3\gear\head\rhs_afghan_cap";
	hiddenSelections[] = {"Camo"};
	hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_infantry3\data\cap_afghan_co.paa"};

	descriptionShort = "No Armor";
	class ItemInfo : HeadGearItem
	{
		hiddenSelections[] = {"Camo"};
		uniformModel = "\rhsafrf\addons\rhs_infantry3\gear\head\rhs_afghan_cap";
	};
};
class rhs_fieldcap_m88_ttsko : rhs_fieldcap_m88
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_fieldcap_m88_ttsko)
	displayName = "$STR_RHS_FIELDCAPM88_TTSKO_NAME";
	
	hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_infantry3\data\cap_afghan\cap_afghan_TTSKO_co.paa"};
};
class rhs_fieldcap_m88_ttsko_alt : rhs_fieldcap_m88
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_fieldcap_m88_ttsko_alt)
	displayName = "$STR_RHS_FIELDCAPM88_TTSKOALT_NAME";
	
	hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_infantry3\data\cap_afghan\cap_afghan_TTSKO_var_co.paa"};
};
class rhs_fieldcap_m88_ttsko_vdv : rhs_fieldcap_m88
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_fieldcap_m88_ttsko_vdv)
	displayName = "$STR_RHS_FIELDCAPM88_TTSKOVDV_NAME";
	
	hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_infantry3\data\cap_afghan\cap_afghan_butan1_VDV_co.paa"};
};
class rhs_fieldcap_m88_moldovan_ttsko_cold : rhs_fieldcap_m88
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_fieldcap_m88_moldovan_ttsko_cold)
	displayName = "Field Cap M88 (Moldovan TTsKO Cold)";
	
	hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_infantry3\data\cap_afghan\cap_afghan_moldova_cold_co.paa"};
};
class rhs_fieldcap_m88_moldovan_ttsko_hot : rhs_fieldcap_m88
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_fieldcap_m88_moldovan_ttsko_hot)
	displayName = "Field Cap M88 (Moldovan TTsKO Hot)";
	
	hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_infantry3\data\cap_afghan\cap_afghan_moldova_hot_co.paa"};
};
class rhs_fieldcap_m88_moldovan_ttsko_desat : rhs_fieldcap_m88
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_fieldcap_m88_moldovan_ttsko_desat)
	displayName = "Field Cap M88 (Moldovan TTsKO Desat)";
	
	hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_infantry3\data\cap_afghan\cap_afghan_moldova_desat_co.paa"};
};
class rhs_fieldcap_m88_moldovan_ttsko_blue : rhs_fieldcap_m88
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_fieldcap_m88_moldovan_ttsko_blue)
	displayName = "Field Cap M88 (Moldovan TTsKO Blue)";
	
	hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_infantry3\data\cap_afghan\cap_afghan_moldova_blue_co.paa"};
};
class rhs_fieldcap_m88_vsr : rhs_fieldcap_m88
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_fieldcap_m88_vsr)
	displayName = "$STR_RHS_FIELDCAPM88_VSR_NAME";
	
	hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_infantry3\data\cap_afghan\cap_afghan_VSR01_co.paa"};
};
class rhs_fieldcap_m88_vsr_2 : rhs_fieldcap_m88
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_fieldcap_m88_vsr_2)
	displayName = "$STR_RHS_FIELDCAPM88_VSRALT_NAME";
	
	hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_infantry3\data\cap_afghan\cap_afghan_VSR_co.paa"};
};
class rhs_fieldcap_m88_grey : rhs_fieldcap_m88
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_fieldcap_m88_grey)
	displayName = "$STR_RHS_FIELDCAPM88_GRAY_NAME";
	
	hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_infantry3\data\cap_afghan\cap_afghan_grey_co.paa"};
};
class rhs_fieldcap_m88_klmk : rhs_fieldcap_m88
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_fieldcap_m88_klmk)
	displayName = "$STR_RHS_FIELDCAPM88_KLMK_NAME";
	
	hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_infantry3\data\cap_afghan\cap_afghan_klmk_co.paa"};
};
class rhs_fieldcap_m88_woodland : rhs_fieldcap_m88
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_fieldcap_m88_woodland)
	displayName = "$STR_RHS_FIELDCAPM88_WDL_NAME";
	
	hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_infantry3\data\cap_afghan\cap_afghan_woodland_co.paa"};
};

//Backwards field caps
class rhs_fieldcap_m88_back : rhs_fieldcap_m88
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_fieldcap_m88_back)
	displayName = "$STR_RHS_FIELDCAPM88_BK_NAME";
	
	model = "\rhsafrf\addons\rhs_infantry3\gear\head\rhs_afghan_cap_back";

	class ItemInfo : ItemInfo
	{
		uniformModel = "\rhsafrf\addons\rhs_infantry3\gear\head\rhs_afghan_cap_back";
	};
};
class rhs_fieldcap_m88_ttsko_back : rhs_fieldcap_m88_back
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_fieldcap_m88_ttsko)
	displayName = "$STR_RHS_FIELDCAPM88_BK_TTSKO_NAME";
	
	hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_infantry3\data\cap_afghan\cap_afghan_TTSKO_co.paa"};
};
class rhs_fieldcap_m88_ttsko_alt_back : rhs_fieldcap_m88_back
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_fieldcap_m88_ttsko_alt_back)
	displayName = "$STR_RHS_FIELDCAPM88_BK_TTSKOALT_NAME";
	
	hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_infantry3\data\cap_afghan\cap_afghan_TTSKO_var_co.paa"};
};
class rhs_fieldcap_m88_ttsko_vdv_back : rhs_fieldcap_m88_back
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_fieldcap_m88_ttsko_vdv_back)
	displayName = "$STR_RHS_FIELDCAPM88_BK_TTSKOVDV_NAME";
	
	hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_infantry3\data\cap_afghan\cap_afghan_butan1_VDV_co.paa"};
};
class rhs_fieldcap_m88_moldovan_ttsko_cold_back : rhs_fieldcap_m88_back
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_fieldcap_m88_moldovan_ttsko_cold)
	displayName = "Field Cap M88 (Moldovan TTsKO Cold\Back)";
	
	hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_infantry3\data\cap_afghan\cap_afghan_moldova_cold_co.paa"};
};
class rhs_fieldcap_m88_moldovan_ttsko_hot_back : rhs_fieldcap_m88_back
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_fieldcap_m88_moldovan_ttsko_hot)
	displayName = "Field Cap M88 (Moldovan TTsKO Hot\Back)";
	
	hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_infantry3\data\cap_afghan\cap_afghan_moldova_hot_co.paa"};
};
class rhs_fieldcap_m88_moldovan_ttsko_desat_back : rhs_fieldcap_m88_back
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_fieldcap_m88_moldovan_ttsko_desat)
	displayName = "Field Cap M88 (Moldovan TTsKO Desat\Back)";
	
	hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_infantry3\data\cap_afghan\cap_afghan_moldova_desat_co.paa"};
};
class rhs_fieldcap_m88_moldovan_ttsko_blue_back : rhs_fieldcap_m88_back
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_fieldcap_m88_moldovan_ttsko_blue)
	displayName = "Field Cap M88 (Moldovan TTsKO Blue\Back)";
	
	hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_infantry3\data\cap_afghan\cap_afghan_moldova_blue_co.paa"};
};
class rhs_fieldcap_m88_vsr_back : rhs_fieldcap_m88_back
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_fieldcap_m88_vsr)
	displayName = "$STR_RHS_FIELDCAPM88_BK_VSR_NAME";
	
	hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_infantry3\data\cap_afghan\cap_afghan_VSR01_co.paa"};
};
class rhs_fieldcap_m88_vsr_2_back : rhs_fieldcap_m88_back
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_fieldcap_m88_vsr_2)
	displayName = "$STR_RHS_FIELDCAPM88_BK_VSRALT_NAME";
	
	hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_infantry3\data\cap_afghan\cap_afghan_VSR_co.paa"};
};
class rhs_fieldcap_m88_grey_back : rhs_fieldcap_m88_back
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_fieldcap_m88_grey)
	displayName = "$STR_RHS_FIELDCAPM88_BK_GRAY_NAME";
	
	hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_infantry3\data\cap_afghan\cap_afghan_grey_co.paa"};
};
class rhs_fieldcap_m88_klmk_back : rhs_fieldcap_m88_back
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_fieldcap_m88_klmk)
	displayName = "$STR_RHS_FIELDCAPM88_BK_KLMK_NAME";
	
	hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_infantry3\data\cap_afghan\cap_afghan_klmk_co.paa"};
};
class rhs_fieldcap_m88_woodland_back : rhs_fieldcap_m88_back
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_fieldcap_m88_woodland)
	displayName = "$STR_RHS_FIELDCAPM88_BK_WDL_NAME";
	
	hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_infantry3\data\cap_afghan\cap_afghan_woodland_co.paa"};
};

class rhs_fieldcap_early : rhs_fieldcap_m88
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_fieldcap_early)
	displayName = "$STR_RHS_FIELDCAPOKZK_NAME";
	
	model = "\rhsafrf\addons\rhs_infantry3\gear\head\rhs_cap_1980";
	hiddenSelections[] = {"Camo"};
	hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_infantry3\data\bandeau_co.paa"};

	descriptionShort = "No Armor";
	class ItemInfo : HeadGearItem
	{
		uniformModel = "\rhsafrf\addons\rhs_infantry3\gear\head\rhs_cap_1980";
	};
};

class rhs_omon_cap : rhs_fieldcap_m88
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_omon_cap)
	displayName = "$STR_RHS_FIELDCAPOMON_NAME";
	
	model = "\rhsafrf\addons\rhs_infantry3\gear\head\rhs_cap_omon";
	hiddenSelections[] = {"Camo"};
	hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_infantry3\data\cap_omon_co.paa"};

	descriptionShort = "No Armor";
	class ItemInfo : HeadGearItem
	{
		uniformModel = "\rhsafrf\addons\rhs_infantry3\gear\head\rhs_cap_omon";
	};
};

class rhs_pilotka : rhs_fieldcap_m88
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_pilotka)
	displayName = "$STR_RHS_PILOTKA_NAME";
	
	model = "\rhsafrf\addons\rhs_infantry3\gear\head\rhs_pilotka";
	hiddenSelections[] = {"Camo"};
	hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_infantry3\data\pilotka_co.paa"};
	
	class ItemInfo : HeadGearItem
	{
		hiddenSelections[] = {"Camo"};
		uniformModel = "\rhsafrf\addons\rhs_infantry3\gear\head\rhs_pilotka";
	};
};

class rhs_ushanka : rhs_fieldcap_m88
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_ushanka)
	displayName = "$STR_RHS_USHANKA_NAME";
	
	model = "\rhsafrf\addons\rhs_infantry3\gear\head\rhs_ushanka";
	hiddenSelections[] = {"Camo"};
	hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_infantry3\data\ushanka_co.paa"};
	
	class ItemInfo : HeadGearItem
	{
		hiddenSelections[] = {"Camo"};
		uniformModel = "\rhsafrf\addons\rhs_infantry3\gear\head\rhs_ushanka";
	};
};

//Berets
class rhs_beret_vdv_early : rhs_beret_vdv1
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_beret_vdv_early)
	
	LODU_SCOPE
	
	model = "\rhsafrf\addons\rhs_infantry3\gear\head\rhs_beret_para";
	hiddenSelections[] = {"Camo","Star"};
	hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_infantry3\data\beret_para_co.paa","rhsafrf\addons\rhs_infantry3\data\beret_para_co.paa"};
	
	class ItemInfo : HeadGearItem
	{
		hiddenSelections[] = {"Camo","Star"};
		uniformModel = "\rhsafrf\addons\rhs_infantry3\gear\head\rhs_beret_para";
	};
};
class rhs_beret_omon : rhs_beret_vdv_early
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_beret_omon)	
	displayName = "$STR_RHS_BERET_OMON_NAME";
	
	LODU_SCOPE
	
	model = "\rhsafrf\addons\rhs_infantry3\gear\head\rhs_beret_omon";
	hiddenSelections[] = {"Camo"};
	hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_infantry3\data\beret_omon_co.paa"};
	
	class ItemInfo : HeadGearItem
	{
		hiddenSelections[] = {"Camo"};
		uniformModel = "\rhsafrf\addons\rhs_infantry3\gear\head\rhs_beret_omon";
	};
};

//Cossack hats
class rhs_cossack_papakha : rhs_fieldcap_m88
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_cossack_papakha)
	displayName = "$STR_RHS_PAPAKHA_NAME";
	
	model = "\rhsafrf\addons\rhs_infantry3\gear\head\rhs_cossack_papakha";
	hiddenSelections[] = {"Camo"};
	hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_infantry3\data\cossak_cap_co.paa"};
	
	class ItemInfo : HeadGearItem
	{
		hiddenSelections[] = {"Camo"};
		uniformModel = "\rhsafrf\addons\rhs_infantry3\gear\head\rhs_cossack_papakha";
	};
};
class rhs_cossack_visor_cap : rhs_fieldcap_m88
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_cossack_visor_cap)
	displayName = "$STR_RHS_FURAZHKA_NAME";
	
	model = "\rhsafrf\addons\rhs_infantry3\gear\head\rhs_cossack_visor_hat";
	hiddenSelections[] = {"Camo"};
	hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_infantry3\data\cossack_visor_hat_co.paa"};
	
	class ItemInfo : HeadGearItem
	{
		hiddenSelections[] = {"Camo"};
		uniformModel = "\rhsafrf\addons\rhs_infantry3\gear\head\rhs_cossack_visor_hat";
	};
};
class rhs_cossack_visor_cap_tan : rhs_fieldcap_m88
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_cossack_visor_cap_tan)
	displayName = "$STR_RHS_FURAZHKA_KHK_NAME";
	
	model = "\rhsafrf\addons\rhs_infantry3\gear\head\rhs_cossack_visor_hat_tan";
	hiddenSelections[] = {"Camo"};
	hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_infantry3\data\cossack_visor_hat_tan_co.paa"};
	
	class ItemInfo : HeadGearItem
	{
		hiddenSelections[] = {"Camo"};
		uniformModel = "\rhsafrf\addons\rhs_infantry3\gear\head\rhs_cossack_visor_hat_tan";
	};
};

//Headband
class rhs_headband : rhs_fieldcap_m88
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_headband)
	displayName = "$STR_RHS_HEADBAND_NAME";
	
	model = "\rhsafrf\addons\rhs_infantry3\gear\head\rhs_bandeau";
	hiddenSelections[] = {"Camo"};
	hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_infantry3\data\bandeau_co.paa"};
	
	class ItemInfo : HeadGearItem
	{
		hiddenSelections[] = {"Camo"};
		uniformModel = "\rhsafrf\addons\rhs_infantry3\gear\head\rhs_bandeau";
	};
};


///---Lodu Ratnik Gear---///
class rhs_vkpo_cap : rhs_fieldcap_m88
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_vkpo_cap)
	displayName = "$STR_RHS_VKPO_CAP_NAME";
	
	model = "rhsafrf\addons\rhs_infantry3\ratnik\rhs_emr_cap";
	hiddenSelections[] = {"Camo"};
	hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_infantry3\ratnik\data\emr_cap_yellow_co.paa"};

	descriptionShort = "No Armor";
	class ItemInfo : HeadGearItem
	{
		hiddenSelections[] = {"Camo"};
		uniformModel = "rhsafrf\addons\rhs_infantry3\ratnik\rhs_emr_cap";
	};
};
class rhs_vkpo_cap_alt : rhs_vkpo_cap
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_vkpo_cap_alt)
	displayName = "$STR_RHS_VKPO_CAP_ALT_NAME";
	
	hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_infantry3\ratnik\data\emr_cap_co.paa"};
};

//6B47
//Uncovered
	//Green
class rhs_6b47_bare : rhs_6b47
{
	AUTHOR_MACRO
	//INVENTORY_PICTURE(rhs_6b47_bare)
	displayName = "$STR_RHS_6B47_NAME";
	
	LODU_SCOPE
	
	model = "rhsafrf\addons\rhs_infantry3\ratnik\rhs_emr_6b47_plastic";
	hiddenSelections[] = {"Camo"};
	hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_infantry3\ratnik\data\6b47_plastic_co.paa"};

	class ItemInfo : ItemInfo
	{
		hiddenSelections[] = {"Camo"};
		uniformModel = "rhsafrf\addons\rhs_infantry3\ratnik\rhs_emr_6b47_plastic";
	};
};
	//Tan
class rhs_6b47_bare_d : rhs_6b47_bare
{
	AUTHOR_MACRO
	//INVENTORY_PICTURE(rhs_6b47_bare_d)
	displayName = "$STR_RHS_6B47_DESERT_NAME";
	
	hiddenSelections[] = {"Camo"};
	hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_infantry3\ratnik\data\6b47_plastic_salmon_co.paa"};
};
//Covered
	//Full
class rhs_6b47_emr : rhs_6b47
{
	AUTHOR_MACRO
	//INVENTORY_PICTURE(rhs_6b47_emr)
	displayName = "$STR_RHS_6B47_EMR_NAME";
	
	LODU_SCOPE
	
	model = "rhsafrf\addons\rhs_infantry3\ratnik\rhs_emr_6b47";
	hiddenSelections[] = {"Camo"};
	hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_infantry3\ratnik\data\6b47_co.paa"};

	class ItemInfo : ItemInfo
	{
		hiddenSelections[] = {"Camo"};
		uniformModel = "rhsafrf\addons\rhs_infantry3\ratnik\rhs_emr_6b47";
	};
};
	//NVG
class rhs_6b47_emr_1 : rhs_6b47
{
	AUTHOR_MACRO
	//INVENTORY_PICTURE(rhs_6b47_emr_1)
	displayName = "$STR_RHS_6B47_EMR_NAME";
	
	LODU_SCOPE
	
	model = "rhsafrf\addons\rhs_infantry3\ratnik\rhs_emr_6b47_1";
	hiddenSelections[] = {"Camo"};
	hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_infantry3\ratnik\data\6b47_1_co.paa"};

	class ItemInfo : ItemInfo
	{
		hiddenSelections[] = {"Camo"};
		uniformModel = "rhsafrf\addons\rhs_infantry3\ratnik\rhs_emr_6b47_1";
	};
};
	//NVG/Rail
class rhs_6b47_emr_2 : rhs_6b47
{
	AUTHOR_MACRO
	//INVENTORY_PICTURE(rhs_6b47_emr_2)
	displayName = "$STR_RHS_6B47_EMR_NAME";
	
	LODU_SCOPE
	
	model = "rhsafrf\addons\rhs_infantry3\ratnik\rhs_emr_6b47_2";
	hiddenSelections[] = {"Camo"};
	hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_infantry3\ratnik\data\6b47_2_co.paa"};

	class ItemInfo : ItemInfo
	{
		hiddenSelections[] = {"Camo"};
		uniformModel = "rhsafrf\addons\rhs_infantry3\ratnik\rhs_emr_6b47_2";
	};
};
	//Goggles
class rhs_6b47_6B50 : rhs_6b47_emr
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_6b47_6B50)
	displayName = "$STR_RHS_6B47_6B50_NAME";
	
	model = "rhsafrf\addons\rhs_infantry3\ratnik\rhs_emr_6b47_glass";
	hiddenSelections[] = {"Camo","Camo1"};
	hiddenSelectionsTextures[] = 
	{
		"rhsafrf\addons\rhs_infantry3\ratnik\data\6b47_co.paa",
		"rhsafrf\addons\rhs_infantry3\ratnik\data\housse_co.paa"
	};

	class ItemInfo : ItemInfo
	{
		hiddenSelections[] = {"Camo","Camo1"};
		uniformModel = "rhsafrf\addons\rhs_infantry3\ratnik\rhs_emr_6b47_glass";
	};
};

class rhs_6b48 : rhs_6b47_bare
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_6b48)
	displayName = "$STR_RHS_6B48_NAME";
	
	LODU_SCOPE
	
	model = "rhsafrf\addons\rhs_infantry3\ratnik\rhs_6b48";
	hiddenSelections[] = {"Camo"};
	hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_infantry3\ratnik\data\6b48_co.paa"};

	class ItemInfo : ItemInfo
	{
		hiddenSelections[] = {"Camo"};
		uniformModel = "rhsafrf\addons\rhs_infantry3\ratnik\rhs_6b48";
	};
};