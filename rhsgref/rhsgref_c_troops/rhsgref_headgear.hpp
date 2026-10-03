///! HEADGEAR
class ItemCore;
class HeadGearItem;
class H_HelmetB : ItemCore {
	class ItemInfo;
};
class rhs_6b27m;
class H_Cap_red;
class rhs_fieldcap_digi2;

// Bonniehat

#define INVENTORY_CATEGORY Headgear

class rhsgref_un_beret : ItemCore
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhsgref_un_beret)
	dlc = "RHS_GREF";

	scope = 2;


	displayName = "Beret (UN)";
	weaponPoolAvailable = 1;
	model = "\rhsgref\addons\rhsgref_infantry\gear_cdf\head\gref_UN_Beret";

	class ItemInfo : HeadGearItem {
		mass = 10;
		allowedSlots[] = {801, 901, 701, 605};
		uniformModel = "\rhsgref\addons\rhsgref_infantry\gear_cdf\head\gref_UN_Beret";
		modelSides[] = {6};
	};
};

class rhsgref_Booniehat_alpen : ItemCore
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhsgref_Booniehat_alpen)
	dlc = "RHS_GREF";

	scope = 2;

	displayName = "Booniehat Alpenflage";
	weaponPoolAvailable = 1;
	model = "\A3\Characters_F\Common\booniehat";
	hiddenSelections[] = {"camo"};
	hiddenSelectionsTextures[] = {"\rhsgref\addons\rhsgref_infantry\data_gue\alpenflage_booniehat_co.paa"};

	class ItemInfo : HeadGearItem {
		mass = 10;
		allowedSlots[] = {801, 901, 701, 605};
		uniformModel = "\A3\Characters_F\Common\booniehat";
		modelSides[] = {6};

		hiddenSelections[] = {"camo"};
	};
};

// Specter baseball cap

class rhsgref_bcap_specter: H_Cap_red
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhsgref_bcap_specter)
	dlc = "RHS_GREF";
	scope = 2;

	displayName = "Baseball Cap (Spectre-SKWO)";
	hiddenSelectionsTextures[] = {"rhsgref\addons\rhsgref_infantry\data_cdf\capb_specters_co.paa"};

	allowedFacewear[] = {"G_Aviator","G_Balaclava_blk","G_Balaclava_oli","G_Bandanna_aviator","G_Bandanna_beast","G_Bandanna_blk","G_Bandanna_khk","G_Bandanna_oli","G_Bandanna_shades","G_Bandanna_sport","G_Bandanna_tan","G_Shades_Black","G_Shades_Blue","G_Shades_Red","G_Shades_Green"};
};

// Specter Patrol Cap

class rhsgref_patrolcap_specter: rhs_fieldcap_digi2
{
	AUTHOR_MACRO
	displayName = "Field Cap (Spectre-SKWO)";
	INVENTORY_PICTURE(rhsgref_patrolcap_specter)
	dlc = "RHS_GREF";
	scope = 2;

	model = "\rhsgref\addons\rhsgref_infantry\gear_cdf\head\gref_fieldcap_digi2";
	hiddenSelectionsTextures[] = {"rhsgref\addons\rhsgref_infantry\data_cdf\cappatrol_specters_co.paa"};

	class ItemInfo: HeadGearItem
	{
		hiddenSelections[] = {"Camo1"};
		mass = 5;
		uniformModel = "\rhsgref\addons\rhsgref_infantry\gear_cdf\head\gref_fieldcap_digi2";
		allowedSlots[] = {801,901,701,605};
		modelSides[] = {6};
	};
};

// Fieldcap

class rhsgref_fieldcap : H_HelmetB
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhsgref_fieldcap)
	dlc = "RHS_GREF";

	scope = 1;

	allowedFacewear[] = {"rhs_scarf","G_Aviator"};
	displayName = "$STR_RHS_FIELDCAP_NAME";

	model = "\rhsafrf\addons\rhs_infantry\gear\head\rhs_fieldcap";

	hiddenSelections[] = {"Camo1"};
	hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_infantry\data\6b27_co.paa"};

	class ItemInfo : HeadGearItem
	{
		hiddenSelections[] = {"Camo1"};
		mass = 5;
		uniformModel = "\rhsafrf\addons\rhs_infantry\gear\head\rhs_fieldcap";
		allowedSlots[] = {801,901,701,605};
		modelSides[] = {6};
	};
};

class rhsgref_fieldcap_ttsko_forest : rhsgref_fieldcap
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhsgref_fieldcap_ttsko_forest)
	dlc = "RHS_GREF";

	scope = 2;

	displayName = "Fieldcap TTsKO Forest";
	allowedFacewear[] = {"G_Squares_Tinted","G_Aviator"};

	hiddenSelectionsTextures[] = {"rhsgref\addons\rhsgref_infantry\data_cdf\6b27_cdf_ttskosummer_co.paa"};
};

class rhsgref_fieldcap_ttsko_mountain : rhsgref_fieldcap
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhsgref_fieldcap_ttsko_mountain)
	dlc = "RHS_GREF";

	scope = 2;

	displayName = "Fieldcap TTsKO Mountain";
	allowedFacewear[] = {"G_Squares_Tinted","G_Aviator"};

	hiddenSelectionsTextures[] = {"rhsgref\addons\rhsgref_infantry\data_cdf\6b27_cdf_ttskofall_co.paa"};
};

class rhsgref_fieldcap_ttsko_urban : rhsgref_fieldcap
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhsgref_fieldcap_ttsko_urban)
	dlc = "RHS_GREF";

	scope = 2;

	displayName = "Fieldcap TTsKO Urban";
	allowedFacewear[] = {"G_Squares_Tinted","G_Aviator"};

	hiddenSelectionsTextures[] = {"rhsgref\addons\rhsgref_infantry\data_cdf\6b27_cdf_ttskodark_co.paa"};
};

class rhsgref_fieldcap_ttsko_digi : rhsgref_fieldcap
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhsgref_fieldcap_ttsko_digi)
	dlc = "RHS_GREF";

	scope = 2;

	displayName = "Fieldcap TTsKO Digital";
	allowedFacewear[] = {"rhs_scarf","G_Balaclava_blk"};

	hiddenSelectionsTextures[] = {"rhsgref\addons\rhsgref_infantry\data_cdf\6b27_cdf_digisummer_co.paa"};
};

// SSh-68
class rhsgref_ssh68 : H_HelmetB
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhsgref_ssh68)
	scope = 1;

	allowedFacewear[] = {"rhs_scarf","G_Aviator"};
	displayName = "SSh-68 TTsKO";

	model = "\rhsgref\addons\rhsgref_infantry\gear\head\rhs_ssh68_cloth";

	hiddenSelections[] = {"Camo2"};
	//hiddenSelectionsTextures[] = {"\rhsgref\addons\rhsgref_infantry\data_cdf\ssh68_cloth_co.paa"};

	class ItemInfo: ItemInfo
	{
		hiddenSelections[] = {"Camo2"};
		mass = 40;
		uniformModel = "\rhsgref\addons\rhsgref_infantry\gear\head\rhs_ssh68_cloth";
		allowedSlots[] = {801,901,701,605};
		modelSides[] = {3,1};

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

class rhsgref_ssh68_ttsko_mountain : rhsgref_ssh68
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhsgref_ssh68_ttsko_mountain)
	dlc = "RHS_GREF";

	scope = 2;

	displayName = "SSh-68 TTsKO (Mountain)";
	allowedFacewear[] = {"G_Squares_Tinted","G_Aviator"};

	hiddenSelectionsTextures[] = {"\rhsgref\addons\rhsgref_infantry\data_cdf\ssh68_cloth_ttskofall_co.paa"};
};

class rhsgref_ssh68_ttsko_forest : rhsgref_ssh68
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhsgref_ssh68_ttsko_forest)
	dlc = "RHS_GREF";

	scope = 2;

	displayName = "SSh-68 TTsKO (Forest)";
	allowedFacewear[] = {"G_Squares_Tinted","G_Aviator"};

	hiddenSelectionsTextures[] = {"\rhsgref\addons\rhsgref_infantry\data_cdf\SSH68_cloth_ttskosummer_co.paa"};
};
class rhsgref_ssh68_ttsko_fall : rhsgref_ssh68
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhsgref_ssh68_ttsko_fall)
	dlc = "RHS_GREF";

	scope = 1;

	displayName = "SSh-68 TTsKO (Fall)";
	allowedFacewear[] = {"G_Squares_Tinted","G_Aviator"};

	hiddenSelectionsTextures[] = {"\rhsgref\addons\rhsgref_infantry\data_cdf\ssh68_cloth_ttskofall_co.paa"};
};
class rhsgref_ssh68_ttsko_summer : rhsgref_ssh68
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhsgref_ssh68_ttsko_summer)
	dlc = "RHS_GREF";

	scope = 1;

	displayName = "SSh-68 TTsKO (Summer)";
	allowedFacewear[] = {"G_Squares_Tinted","G_Aviator"};

	hiddenSelectionsTextures[] = {"\rhsgref\addons\rhsgref_infantry\data_cdf\ssh68_cloth_ttskosummer_co.paa"};
};
class rhsgref_ssh68_ttsko_dark : rhsgref_ssh68
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhsgref_ssh68_ttsko_dark)
	dlc = "RHS_GREF";

	scope = 2;

	displayName = "SSh-68 TTsKO (Urban)";
	allowedFacewear[] = {"G_Squares_Tinted","G_Aviator"};

	hiddenSelectionsTextures[] = {"\rhsgref\addons\rhsgref_infantry\data_cdf\ssh68_cloth_ttskodark_co.paa"};
};

class rhsgref_ssh68_ttsko_digi : rhsgref_ssh68
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhsgref_ssh68_ttsko_digi)
	dlc = "RHS_GREF";

	scope = 2;

	displayName = "SSh-68 TTsKO (Digital)";
	allowedFacewear[] = {"G_Squares_Tinted","G_Aviator"};

	hiddenSelectionsTextures[] = {"\rhsgref\addons\rhsgref_infantry\data_cdf\SSH68_cloth_digital_co.paa"};
};

class rhsgref_ssh68_emr : rhsgref_ssh68
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhsgref_ssh68_emr)
	dlc = "RHS_GREF";

	scope = 2;

	displayName = "SSh-68 EMR-Summer";
	allowedFacewear[] = {"G_Squares_Tinted","G_Aviator"};

	hiddenSelectionsTextures[] = {"\rhsgref\addons\rhsgref_infantry\data_cdf\ssh68_cloth_emr_co.paa"};
};

class rhsgref_ssh68_un : rhsgref_ssh68
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhsgref_ssh68_un)
	dlc = "RHS_GREF";

	scope = 2;

	displayName = "SSh-68 UN";
	allowedFacewear[] = {"G_Squares_Tinted","G_Aviator"};

	hiddenSelectionsTextures[] = {"\rhsgref\addons\rhsgref_infantry\data_cdf\SSH68_cloth_UN_co.paa"};
};

class rhsgref_ssh68_vsr : rhsgref_ssh68
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhsgref_ssh68_vsr)
	dlc = "RHS_GREF";

	scope = 2;

	displayName = "SSh-68 VSR";
	allowedFacewear[] = {"G_Squares_Tinted","G_Aviator"};

	hiddenSelectionsTextures[] = {"\rhsgref\addons\rhsgref_infantry\data_cdf\SSH68_cloth_vsr_co.paa"};
};
//East German M56
class rhsgref_M56 : H_HelmetB
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhsgref_M56)
	scope = 2;

	allowedFacewear[] = {"rhs_scarf","G_Aviator"};
	displayName = "M56";

	model = "\rhsgref\addons\rhsgref_infantry\gear\head\m56";

	hidddenSelections[] = {"Camo2"};
	//hiddenSelectionsTextures[] = {"\rhsgref\addons\rhsgref_infantry\data_cdf\ssh68_cloth_co.paa"};

	class ItemInfo: ItemInfo
	{
		hiddenSelections[] = {"Camo2"};
		mass = 40;
		uniformModel = "\rhsgref\addons\rhsgref_infantry\gear\head\m56";
		allowedSlots[] = {801,901,701,605};
		modelSides[] = {3,1};

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

//6b27m

class rhsgref_6b27m : H_HelmetB
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhsgref_6b27m)
	scope = 1;

	allowedFacewear[] = {"rhs_scarf","G_Aviator"};
	displayName = "$STR_rhsgref_gear_kaska_k93";

	model = "\rhsgref\addons\rhsgref_infantry\gear_cdf\head\gref_6b27m";

	hiddenSelections[] = {"Camo1"};
	hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_infantry\data\6b27_co.paa"};
	hiddenSelectionsMaterials[] = {"rhsgref\addons\rhsgref_infantry\data_cdf\6b27_cdf.rvmat"};
	class ItemInfo: ItemInfo
	{
		hiddenSelections[] = {"Camo1"};
		mass = 40;
		uniformModel = "\rhsgref\addons\rhsgref_infantry\gear_cdf\head\gref_6b27m";
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

class rhsgref_6b27m_ttsko_forest : rhsgref_6b27m
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhsgref_6b27m_ttsko_forest)
	dlc = "RHS_GREF";

	scope = 2;

	displayName = "$STR_rhsgref_gear_kaska_k93_forest";
	allowedFacewear[] = {"G_Squares_Tinted","G_Aviator"};


	hiddenSelections[] = {"Camo1"};
	hiddenSelectionsTextures[] = {"rhsgref\addons\rhsgref_infantry\data_cdf\6b27_cdf_ttskosummer_co.paa"};
	hiddenSelectionsMaterials[] = {"rhsgref\addons\rhsgref_infantry\data_cdf\6b27_cdf.rvmat"};
};

class rhsgref_6b27m_ttsko_mountain : rhsgref_6b27m
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhsgref_6b27m_ttsko_mountain)
	dlc = "RHS_GREF";

	scope = 2;

	displayName = "$STR_rhsgref_gear_kaska_k93_mountain";
	allowedFacewear[] = {"G_Squares_Tinted","G_Aviator"};


	model = "\rhsgref\addons\rhsgref_infantry\gear_cdf\head\gref_6b27m";

	hiddenSelections[] = {"Camo1"};
	hiddenSelectionsTextures[] = {"rhsgref\addons\rhsgref_infantry\data_cdf\6b27_cdf_ttskofall_co.paa"};
	hiddenSelectionsMaterials[] = {"rhsafrf\addons\rhs_infantry\data\6b27.rvmat"};
};

class rhsgref_6b27m_ttsko_urban : rhsgref_6b27m
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhsgref_6b27m_ttsko_urban)
	dlc = "RHS_GREF";

	scope = 2;

	displayName = "$STR_rhsgref_gear_kaska_k93_urban";
	allowedFacewear[] = {"G_Squares_Tinted","G_Aviator"};

	model = "\rhsgref\addons\rhsgref_infantry\gear_cdf\head\gref_6b27m";

	hiddenSelections[] = {"Camo1"};
	hiddenSelectionsTextures[] = {"rhsgref\addons\rhsgref_infantry\data_cdf\6b27_cdf_ttskodark_co.paa"};
	hiddenSelectionsMaterials[] = {"rhsgref\addons\rhsgref_infantry\data_cdf\6b27_cdf.rvmat"};
};

class rhsgref_6b27m_ttsko_digi : rhsgref_6b27m
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhsgref_6b27m_ttsko_digi)
	dlc = "RHS_GREF";

	scope = 2;

	displayName = "$STR_rhsgref_gear_kaska_k93_digi";
	allowedFacewear[] = {"rhs_scarf","G_Balaclava_blk"};

	model = "\rhsgref\addons\rhsgref_infantry\gear_cdf\head\gref_6b27m";

	hiddenSelections[] = {"Camo1"};
	hiddenSelectionsTextures[] = {"rhsgref\addons\rhsgref_infantry\data_cdf\6b27_cdf_digisummer_co.paa"};
	hiddenSelectionsMaterials[] = {"rhsgref\addons\rhsgref_infantry\data_cdf\6b27_cdf.rvmat"};
};

//TANOA M1s

class rhsgref_helmet_M1_bare : H_HelmetB
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhsgref_helmet_M1_bare)
	displayName = "M1 (OG-107)";  //plz stringtable
	scope = 2;

	model = "rhsgref\addons\rhsgref_infantry\gear_tanoa\head\M1_strapdown";

	hiddenSelections[] = {"Camo"};
	hiddenSelectionsTextures[] = {"rhsgref\addons\rhsgref_infantry\data_tanoa\M1_co.paa"};

	class ItemInfo: ItemInfo
	{
		mass = 40;
		uniformModel = "rhsgref\addons\rhsgref_infantry\gear_tanoa\head\M1_strapdown";
		allowedSlots[] = {801,901,701,605};
		modelSides[] = {6};
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

class rhsgref_helmet_M1_bare_alt01 : rhsgref_helmet_M1_bare
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhsgref_helmet_M1_bare_alt01)
	displayName = "M1 (OG-107/Alt.)";  //plz stringtable
	scope = 2;

	model = "rhsgref\addons\rhsgref_infantry\gear_tanoa\head\M1_strapup";

	hiddenSelections[] = {"Camo"};
	hiddenSelectionsTextures[] = {"rhsgref\addons\rhsgref_infantry\data_tanoa\M1_co.paa"};

	class ItemInfo: ItemInfo
	{
		uniformModel = "rhsgref\addons\rhsgref_infantry\gear_tanoa\head\M1_strapup";
	};
};

//TANOA M1s

class rhsgref_helmet_M1_liner : H_HelmetB
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhsgref_helmet_M1_liner)
	displayName = "M1 (Liner)";  //plz stringtable
	scope = 2;

	model = "rhsgref\addons\rhsgref_infantry\gear_tanoa\head\M1_liner";

	hiddenSelections[] = {"Camo"};
	hiddenSelectionsTextures[] = {"rhsgref\addons\rhsgref_infantry\data_tanoa\m1liner_co.paa"};

	class ItemInfo: ItemInfo
	{
		mass = 40;
		uniformModel = "rhsgref\addons\rhsgref_infantry\gear_tanoa\head\M1_liner";
		allowedSlots[] = {801,901,701,605};
		modelSides[] = {6};
		class HitpointsProtectionInfo {
			class Head
			{
				hitpointName = "HitHead";
				armor = 0;
				passThrough = 0.5;
			};
		};
	};
};

class rhsgref_helmet_M1_mit : H_HelmetB
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhsgref_helmet_M1_mit)
	displayName = "M1 (Mitchell)";  //plz stringtable
	scope = 2;

	model = "rhsgref\addons\rhsgref_infantry\gear_tanoa\head\m1_cover";

	hiddenSelections[] = {"Camo"};
	hiddenSelectionsTextures[] = {"rhsgref\addons\rhsgref_infantry\data_tanoa\m1_cover_mit_co.paa"};

	class ItemInfo: ItemInfo
	{
		mass = 42;
		uniformModel = "rhsgref\addons\rhsgref_infantry\gear_tanoa\head\m1_cover";
		allowedSlots[] = {801,901,701,605};
		modelSides[] = {6};
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

class rhsgref_helmet_M1_erdl : rhsgref_helmet_M1_mit
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhsgref_helmet_M1_erdl)
	displayName = "M1 (ERDL)";  //plz stringtable
	scope = 2;

	model = "rhsgref\addons\rhsgref_infantry\gear_tanoa\head\m1_cover";

	hiddenSelections[] = {"Camo"};
	hiddenSelectionsTextures[] = {"rhsgref\addons\rhsgref_infantry\data_tanoa\m1_cover_erdl_co.paa"};

	class ItemInfo: ItemInfo
	{
		mass = 42;
		uniformModel = "rhsgref\addons\rhsgref_infantry\gear_tanoa\head\m1_cover";
		allowedSlots[] = {801,901,701,605};
		modelSides[] = {6};
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

class rhsgref_helmet_M1_des : rhsgref_helmet_M1_mit
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhsgref_helmet_M1_des)
	displayName = "M1 (Desert)";  //plz stringtable
	scope = 2;

	model = "rhsgref\addons\rhsgref_infantry\gear_tanoa\head\m1_cover";

	hiddenSelections[] = {"Camo"};
	hiddenSelectionsTextures[] = {"rhsgref\addons\rhsgref_infantry\data_tanoa\m1_cover_des_co.paa"};

	class ItemInfo: ItemInfo
	{
		mass = 42;
		uniformModel = "rhsgref\addons\rhsgref_infantry\gear_tanoa\head\m1_cover";
		allowedSlots[] = {801,901,701,605};
		modelSides[] = {6};
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

class rhsgref_hat_M1951 : H_HelmetB
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhsgref_hat_M1951)
	displayName = "Patrol Cap (OG-107)";  //plz stringtable
	scope = 2;

	model = "rhsgref\addons\rhsgref_infantry\gear_tanoa\head\M1951cap";

	hiddenSelections[] = {"Camo"};
	hiddenSelectionsTextures[] = {"rhsgref\addons\rhsgref_infantry\data_tanoa\m1951fieldcap_co.paa"};

	class ItemInfo: ItemInfo
	{
		mass = 5;
		uniformModel = "rhsgref\addons\rhsgref_infantry\gear_tanoa\head\M1951cap";
		allowedSlots[] = {801,901,701,605};
		modelSides[] = {6};
		class HitpointsProtectionInfo {
			class Head
			{
				hitpointName = "HitHead";
				armor = 0;
				passThrough = 0;
			};
		};
	};
};

//M1941 Jeep Cap
class rhsgref_hat_m1941cap: rhsgref_hat_M1951
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhsgref_hat_m1941cap)
	displayName = "M1941 Wool Cap";
	scope = 2;

	model = "rhsgref\addons\rhsgref_infantry\gear_tanoa\head\m1941cap";

	hiddenSelections[] = {"Camo"};
	hiddenSelectionsTextures[] = {"rhsgref\addons\rhsgref_infantry\data_tanoa\m1941cap_co.paa"};

	class ItemInfo: ItemInfo
	{
		uniformModel   = "rhsgref\addons\rhsgref_infantry\gear_tanoa\head\m1941cap";
	};
};

//PAINTED TANOA M1s

class rhsgref_helmet_M1_painted : rhsgref_helmet_M1_bare
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhsgref_helmet_M1_painted)
	displayName = "M1 (Painted)";  //plz stringtable
	scope = 2;

	model = "rhsgref\addons\rhsgref_infantry\gear_tanoa\head\M1_strapdown";

	hiddenSelections[] = {"Camo"};
	hiddenSelectionsTextures[] = {"rhsgref\addons\rhsgref_infantry\data_tanoa\M1_painted_co.paa"};

	class ItemInfo: ItemInfo
	{
		uniformModel = "rhsgref\addons\rhsgref_infantry\gear_tanoa\head\M1_strapdown";
	};
};

class rhsgref_helmet_M1_painted_alt01 : rhsgref_helmet_M1_bare
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhsgref_helmet_M1_painted_alt01)
	displayName = "M1 (Painted/Alt.)";  //plz stringtable
	scope = 2;

	model = "rhsgref\addons\rhsgref_infantry\gear_tanoa\head\M1_strapup";

	hiddenSelections[] = {"Camo"};
	hiddenSelectionsTextures[] = {"rhsgref\addons\rhsgref_infantry\data_tanoa\M1_painted_co.paa"};

	class ItemInfo: ItemInfo
	{
		uniformModel = "rhsgref\addons\rhsgref_infantry\gear_tanoa\head\M1_strapup";
	};
};

//TANOA PASGTs

class rhsgref_helmet_pasgt_erdl : H_HelmetB
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhsgref_helmet_pasgt_erdl)
	displayName = "PASGT (ERDL)";  //plz stringtable
	scope = 2;

	model = "rhsgref\addons\rhsgref_infantry\gear_tanoa\head\pasgt_helmet";

	hiddenSelections[] = {"Camo"};
	hiddenSelectionsTextures[] = {"rhsgref\addons\rhsgref_infantry\data_tanoa\pasgt_helmet_erdl_co.paa"};

	class ItemInfo: ItemInfo
	{
		mass = 40;
		uniformModel = "rhsgref\addons\rhsgref_infantry\gear_tanoa\head\pasgt_helmet";
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

class rhsgref_helmet_pasgt_erdl_rhino : H_HelmetB
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhsgref_helmet_pasgt_erdl_rhino)
	scope = 2;
	displayName = "PASGT (ERDL, Rhino)";  //plz stringtable

	model = "rhsgref\addons\rhsgref_infantry\gear_tanoa\head\pasgt_helmet_rhino";

	hiddenSelections[] = {"Camo"};
	hiddenSelectionsTextures[] = {"rhsgref\addons\rhsgref_infantry\data_tanoa\pasgt_helmet_erdl_co.paa"};

	class ItemInfo: ItemInfo
	{
		uniformModel = "rhsgref\addons\rhsgref_infantry\gear_tanoa\head\pasgt_helmet_rhino";
	};
};

class rhsgref_helmet_pasgt_woodland : rhsgref_helmet_pasgt_erdl
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhsgref_helmet_pasgt_woodland)
	scope = 2;
	displayName = "PASGT (Woodland)";  //plz stringtable
	hiddenSelectionsTextures[] = {"rhsgref\addons\rhsgref_infantry\data_gue\pasgt_helmet_USwoodland_co.paa"};

	class ItemInfo: ItemInfo
	{
		uniformModel = "rhsgref\addons\rhsgref_infantry\gear_tanoa\head\pasgt_helmet";
	};
};

class rhsgref_helmet_pasgt_woodland_rhino : rhsgref_helmet_pasgt_erdl_rhino
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhsgref_helmet_pasgt_woodland_rhino)
	scope = 2;
	displayName = "PASGT (Woodland, Rhino)";  //plz stringtable
	hiddenSelectionsTextures[] = {"rhsgref\addons\rhsgref_infantry\data_gue\pasgt_helmet_USwoodland_co.paa"};

	class ItemInfo: ItemInfo
	{
		mass = 40;
		uniformModel = "rhsgref\addons\rhsgref_infantry\gear_tanoa\head\pasgt_helmet_rhino";
	};
};

class rhsgref_helmet_pasgt_flecktarn : rhsgref_helmet_pasgt_erdl_rhino
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhsgref_helmet_pasgt_flecktarn)
	scope = 2;
	displayName = "PASGT (Flecktarn)";  //plz stringtable
	hiddenSelectionsTextures[] = {"rhsgref\addons\rhsgref_infantry\data_gue\pasgt_helmet_flecktarn_co.paa"};

	class ItemInfo: ItemInfo
	{
		uniformModel = "rhsgref\addons\rhsgref_infantry\gear_tanoa\head\pasgt_helmet_rhino";
	};
};

class rhsgref_helmet_pasgt_un : rhsgref_helmet_pasgt_erdl
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhsgref_helmet_pasgt_un)
	scope = 2;
	displayName = "PASGT (UN)";  //plz stringtable

	hiddenSelectionsTextures[] = {"rhsgref\addons\rhsgref_infantry\data_tanoa\pasgt_helmet_un_co.paa"};

	class ItemInfo: ItemInfo
	{
		uniformModel = "rhsgref\addons\rhsgref_infantry\gear_tanoa\head\pasgt_helmet";
	};
};

class rhsgref_helmet_pasgt_press : rhsgref_helmet_pasgt_erdl
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhsgref_helmet_pasgt_press)
	displayName = "PASGT (Press)";  //plz stringtable
	scope = 2;

	hiddenSelectionsTextures[] = {"rhsgref\addons\rhsgref_infantry\data_tanoa\pasgt_helmet_press_co.paa"};

	class ItemInfo: ItemInfo
	{
		uniformModel = "rhsgref\addons\rhsgref_infantry\gear_tanoa\head\pasgt_helmet";
	};
};

class rhsgref_helmet_pasgt_3color_desert : rhsgref_helmet_pasgt_erdl
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhsgref_helmet_pasgt_3color_desert)
	scope = 2;
	displayName = "PASGT (3-Color Desert)";  //plz stringtable

	hiddenSelectionsTextures[] = {"rhsgref\addons\rhsgref_infantry\data_tanoa\pasgt_helmet_3color_desert_co.paa"};

	class ItemInfo: ItemInfo
	{
		uniformModel = "rhsgref\addons\rhsgref_infantry\gear_tanoa\head\pasgt_helmet";
	};
};

class rhsgref_helmet_pasgt_3color_desert_rhino : rhsgref_helmet_pasgt_erdl_rhino
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhsgref_helmet_pasgt_3color_desert_rhino)
	scope = 2;
	displayName = "PASGT (3-Color Desert, Rhino)";  //plz stringtable
	hiddenSelectionsTextures[] = {"rhsgref\addons\rhsgref_infantry\data_tanoa\pasgt_helmet_3color_desert_co.paa"};

	class ItemInfo: ItemInfo
	{
		mass = 40;
		uniformModel = "rhsgref\addons\rhsgref_infantry\gear_tanoa\head\pasgt_helmet_rhino";
	};
};

class rhsgref_helmet_pasgt_altis_lizard : rhsgref_helmet_pasgt_erdl
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhsgref_helmet_pasgt_altis_lizard)
	scope = 2;
	displayName = "PASGT (Altis Lizard)";  //plz stringtable

	hiddenSelectionsTextures[] = {"rhsgref\addons\rhsgref_infantry\data_tanoa\pasgt_helmet_altis_lizard_co.paa"};

	class ItemInfo: ItemInfo
	{
		uniformModel = "rhsgref\addons\rhsgref_infantry\gear_tanoa\head\pasgt_helmet";
	};
};

class rhsgref_helmet_pasgt_olive : rhsgref_helmet_pasgt_erdl
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhsgref_helmet_pasgt_olive)
	scope = 2;
	displayName = "PASGT (Olive)";  //plz stringtable

	hiddenSelectionsTextures[] = {"rhsgref\addons\rhsgref_infantry\data_tanoa\pasgt_helmet_olive_co.paa"};

	class ItemInfo: ItemInfo
	{
		uniformModel = "rhsgref\addons\rhsgref_infantry\gear_tanoa\head\pasgt_helmet";
	};
};


//M43 CAP HEER
class rhsgref_hat_m43cap_heer: rhsgref_hat_m1941cap
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhsgref_hat_m43cap_heer)
	displayName = "M43 Cap";
	scope = 2;
	scopeCurator = 2;

	model = "rhsgref\addons\rhsgref_infantry\gear\Head\m43cap";

	hiddenSelections[] = {"Camo"};
	hiddenSelectionsTextures[] = {"rhsgref\addons\rhsgref_infantry\gear\Head\data\m43_heer1_co.paa"};
	class ItemInfo: ItemInfo
	{
		mass = 5;
		uniformModel = "rhsgref\addons\rhsgref_infantry\gear\Head\m43cap";
	};
};
class rhsgref_hat_m43cap_heer1_tilted: rhsgref_hat_m43cap_heer
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhsgref_hat_m43cap_heer1_tilted)
	displayName = "M43 Cap (Tilted)";
	scope = 2;
	scopeCurator = 2;

	model = "rhsgref\addons\rhsgref_infantry\gear\Head\m43cap_tilted";

	hiddenSelectionsTextures[] = {"rhsgref\addons\rhsgref_infantry\gear\Head\data\m43_heer1_co.paa"};
	class ItemInfo: ItemInfo
	{
		uniformModel = "rhsgref\addons\rhsgref_infantry\gear\Head\m43cap_tilted";
	};
};

// M1940 Field Gray
class rhsgref_helmet_m1940: rhsgref_helmet_M1_bare
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhsgref_helmet_m1940)
	displayName = "M40";
	scope = 2;
	scopeCurator = 2;

	model = "rhsgref\addons\rhsgref_infantry\gear\Head\M1940_strapdown";

	hiddenSelections[] = {"Camo", "Camo1"};
	hiddenSelectionsTextures[] = {	"rhsgref\addons\rhsgref_infantry\gear\Head\data\m1940_co.paa",
									"rhsgref\addons\rhsgref_infantry\gear\Head\data\decals\blank_ca.paa"};
	class ItemInfo: ItemInfo
	{
		hiddenSelections[] = {"Camo", "Camo1"};
		uniformModel = "rhsgref\addons\rhsgref_infantry\gear\Head\M1940_strapdown";
	};
};
class rhsgref_helmet_m1940_alt1: rhsgref_helmet_m1940
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhsgref_helmet_m1940_alt1)
	displayName = "M40 (Strap Up)";
	scope = 2;
	scopeCurator = 2;

	model = "rhsgref\addons\rhsgref_infantry\gear\Head\M1940_strapup";

	hiddenSelectionsTextures[] = {	"rhsgref\addons\rhsgref_infantry\gear\Head\data\m1940_co.paa",
									"rhsgref\addons\rhsgref_infantry\gear\Head\data\decals\blank_ca.paa"};
	class ItemInfo: ItemInfo
	{
		uniformModel = "rhsgref\addons\rhsgref_infantry\gear\Head\M1940_strapup";
	};
};
// M1940 Field Gray (Heer)
class rhsgref_helmet_m1940_h: rhsgref_helmet_m1940
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhsgref_helmet_m1940_h)
	displayName = "M40 (Heer Decal)";
	scope = 0;

	model = "rhsgref\addons\rhsgref_infantry\gear\Head\M1940_strapdown";

	hiddenSelectionsTextures[] = {	"rhsgref\addons\rhsgref_infantry\gear\Head\data\m1940_co.paa",
									"rhsgref\addons\rhsgref_infantry\gear\Head\data\decals\heer_ca.paa"};
	class ItemInfo: ItemInfo
	{
		uniformModel = "rhsgref\addons\rhsgref_infantry\gear\Head\M1940_strapdown";
	};
};
// M1940 Painted 01
class rhsgref_helmet_m1940_camo01: rhsgref_helmet_m1940
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhsgref_helmet_m1940_camo01)
	displayName = "M40 (Painted)";
	scope = 2;
	scopeCurator = 2;

	model = "rhsgref\addons\rhsgref_infantry\gear\Head\M1940_strapdown";

	hiddenSelectionsTextures[] = {	"rhsgref\addons\rhsgref_infantry\gear\Head\data\m1940_camo01_co.paa",
									"rhsgref\addons\rhsgref_infantry\gear\Head\data\decals\blank_ca.paa"};
	class ItemInfo: ItemInfo
	{
		uniformModel = "rhsgref\addons\rhsgref_infantry\gear\Head\M1940_strapdown";
	};
};
class rhsgref_helmet_m1940_camo01_alt1: rhsgref_helmet_m1940_camo01
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhsgref_helmet_m1940_camo01_alt1)
	displayName = "M40 (Strap Up/Painted)";
	scope = 2;
	scopeCurator = 2;

	model = "rhsgref\addons\rhsgref_infantry\gear\Head\M1940_strapup";

	class ItemInfo: ItemInfo
	{
		uniformModel = "rhsgref\addons\rhsgref_infantry\gear\Head\M1940_strapup";
	};
};
// M1940 Winter
class rhsgref_helmet_m1940_winter: rhsgref_helmet_m1940
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhsgref_helmet_m1940_winter)
	displayName = "M40 (Winter)";
	scope = 2;
	scopeCurator = 2;

	model = "rhsgref\addons\rhsgref_infantry\gear\Head\M1940_strapdown";

	hiddenSelectionsTextures[] = {	"rhsgref\addons\rhsgref_infantry\gear\Head\data\m1940_w_co.paa",
									"rhsgref\addons\rhsgref_infantry\gear\Head\data\decals\blank_ca.paa"};
	class ItemInfo: ItemInfo
	{
		uniformModel = "rhsgref\addons\rhsgref_infantry\gear\Head\M1940_strapdown";
	};
};
class rhsgref_helmet_m1940_winter_alt1: rhsgref_helmet_m1940_winter
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhsgref_helmet_m1940_winter_alt1)
	displayName = "M40 (Strap Up/Winter)";
	scope = 2;
	scopeCurator = 2;

	model = "rhsgref\addons\rhsgref_infantry\gear\Head\M1940_strapup";

	class ItemInfo: ItemInfo
	{
		uniformModel = "rhsgref\addons\rhsgref_infantry\gear\Head\M1940_strapup";
	};
};

// M1942 Field Gray
class rhsgref_helmet_m1942: rhsgref_helmet_m1940
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhsgref_helmet_m1942)
	displayName = "M42";
	scope = 2;
	scopeCurator = 2;

	model = "rhsgref\addons\rhsgref_infantry\gear\Head\M1942_strapdown";

	hiddenSelections[] = {"Camo", "Camo1"};
	hiddenSelectionsTextures[] = {	"rhsgref\addons\rhsgref_infantry\gear\Head\data\m1942_co.paa",
									"rhsgref\addons\rhsgref_infantry\gear\Head\data\decals\blank_ca.paa"};
	class ItemInfo: ItemInfo
	{
		uniformModel = "rhsgref\addons\rhsgref_infantry\gear\Head\M1942_strapdown";
	};
};
class rhsgref_helmet_m1942_alt1: rhsgref_helmet_m1942
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhsgref_helmet_m1942_alt1)
	displayName = "M42 (Strap Up)";
	scope = 2;
	scopeCurator = 2;

	model = "rhsgref\addons\rhsgref_infantry\gear\Head\M1942_strapup";

	hiddenSelectionsTextures[] = {	"rhsgref\addons\rhsgref_infantry\gear\Head\data\m1942_co.paa",
									"rhsgref\addons\rhsgref_infantry\gear\Head\data\decals\blank_ca.paa"};
	class ItemInfo: ItemInfo
	{
		uniformModel = "rhsgref\addons\rhsgref_infantry\gear\Head\M1942_strapup";
	};
};
// M1942 Heer Decal
class rhsgref_helmet_m1942_h: rhsgref_helmet_m1942
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhsgref_helmet_m1942_h)
	displayName = "M42 (Heer Decal)";
	scope = 0;
	scopeCurator = 0;

	model = "rhsgref\addons\rhsgref_infantry\gear\Head\M1942_strapdown";

	hiddenSelections[] = {"Camo", "Camo1"};
	hiddenSelectionsTextures[] = {	"rhsgref\addons\rhsgref_infantry\gear\Head\data\m1942_co.paa",
									"rhsgref\addons\rhsgref_infantry\gear\Head\data\decals\heer_ca.paa"};
	class ItemInfo: ItemInfo
	{
		hiddenSelections[] = {"Camo", "Camo1"};
		uniformModel = "rhsgref\addons\rhsgref_infantry\gear\Head\M1942_strapdown";
	};
};
// M1942 Camo 01
class rhsgref_helmet_m1942_camo01: rhsgref_helmet_m1942
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhsgref_helmet_m1942_camo01)
	displayName = "M42 (Painted)";
	scope = 2;
	scopeCurator = 2;

	model = "rhsgref\addons\rhsgref_infantry\gear\Head\M1942_strapdown";

	hiddenSelectionsTextures[] = {	"rhsgref\addons\rhsgref_infantry\gear\Head\data\m1942_camo01_co.paa",
									"rhsgref\addons\rhsgref_infantry\gear\Head\data\decals\blank_ca.paa"};
	class ItemInfo: ItemInfo
	{
		uniformModel = "rhsgref\addons\rhsgref_infantry\gear\Head\M1942_strapdown";
	};
};
class rhsgref_helmet_m1942_camo01_alt1: rhsgref_helmet_m1942_camo01
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhsgref_helmet_m1942_camo01_alt1)
	displayName = "M42 (Strap Up/Painted)";
	scope = 2;
	scopeCurator = 2;

	model = "rhsgref\addons\rhsgref_infantry\gear\Head\M1942_strapup";

	class ItemInfo: ItemInfo
	{
		uniformModel = "rhsgref\addons\rhsgref_infantry\gear\Head\M1942_strapup";
	};
};
// M1942 Winter
class rhsgref_helmet_m1942_winter: rhsgref_helmet_m1942
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhsgref_helmet_m1942_winter)
	displayName = "M42 (Winter)";
	scope = 2;
	scopeCurator = 2;

	model = "rhsgref\addons\rhsgref_infantry\gear\Head\M1942_strapdown";

	hiddenSelectionsTextures[] = {	"rhsgref\addons\rhsgref_infantry\gear\Head\data\m1942_w_co.paa",
									"rhsgref\addons\rhsgref_infantry\gear\Head\data\decals\blank_ca.paa"};
	class ItemInfo: ItemInfo
	{
		uniformModel = "rhsgref\addons\rhsgref_infantry\gear\Head\M1942_strapdown";
	};
};
class rhsgref_helmet_m1942_winter_alt1: rhsgref_helmet_m1942_winter
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhsgref_helmet_m1942_winter_alt1)
	displayName = "M42 (Strap Up/Winter)";
	scope = 2;
	scopeCurator = 2;

	model = "rhsgref\addons\rhsgref_infantry\gear\Head\M1942_strapup";

	class ItemInfo: ItemInfo
	{
		uniformModel = "rhsgref\addons\rhsgref_infantry\gear\Head\M1942_strapup";
	};
};

//M42 Covered
class rhsgref_helmet_m1942_heermarshcover: rhsgref_helmet_m1942
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhsgref_helmet_m1942_heermarshcover)
	displayName = "M42 Covered (Sumpf 44)";
	scope = 2;
	scopeCurator = 2;

	model = "rhsgref\addons\rhsgref_infantry\gear\Head\M1942_heercoversummer";

	hiddenSelections[] = {"Camo"};
	hiddenSelectionsTextures[] = {"rhsgref\addons\rhsgref_infantry\gear\Head\data\m1942cover_hbt_sumpf44_co.paa"};
	class ItemInfo: ItemInfo
	{
		uniformModel   = "rhsgref\addons\rhsgref_infantry\gear\Head\M1942_heercoversummer";
	};
};
class rhsgref_helmet_m1942_heersplintercover: rhsgref_helmet_m1942_heermarshcover
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhsgref_helmet_m1942_heersplintercover)
	displayName = "M42 Covered (Splitter 31)";
	scope = 2;
	scopeCurator = 2;

	model = "rhsgref\addons\rhsgref_infantry\gear\Head\M1942_heercoversummer";

	hiddenSelectionsTextures[] = {"rhsgref\addons\rhsgref_infantry\gear\Head\data\m1942cover_splinter_co.paa"};
	class ItemInfo: ItemInfo
	{
		uniformModel = "rhsgref\addons\rhsgref_infantry\gear\Head\M1942_heercoversummer";
	};
};
class rhsgref_helmet_m1942_heergreycover: rhsgref_helmet_m1942_heermarshcover
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhsgref_helmet_m1942_heergreycover)
	displayName = "M42 Covered (Mouse Grey)";
	scope = 2;
	scopeCurator = 2;

	model = "rhsgref\addons\rhsgref_infantry\gear\Head\M1942_heercoversummer";

	hiddenSelectionsTextures[] = {"rhsgref\addons\rhsgref_infantry\gear\Head\data\m1942cover_mousegrey_co.paa"};
	class ItemInfo: ItemInfo
	{
		uniformModel = "rhsgref\addons\rhsgref_infantry\gear\Head\M1942_heercoversummer";
	};
};
//Winter cover, without folliage loops
class rhsgref_helmet_m1942_heerwintercover: rhsgref_helmet_m1942_heermarshcover
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhsgref_helmet_m1942_heerwintercover)
	displayName = "M42 Covered (Winter)";
	scope = 2;
	scopeCurator = 2;

	model = "rhsgref\addons\rhsgref_infantry\gear\Head\M1942_heercoverwinter";

	hiddenSelectionsTextures[] = {"rhsgref\addons\rhsgref_infantry\gear\Head\data\m1942cover_hbt_white_co.paa"};
	class ItemInfo: ItemInfo
	{
		uniformModel = "rhsgref\addons\rhsgref_infantry\gear\Head\M1942_heercoverwinter";
	};
};
