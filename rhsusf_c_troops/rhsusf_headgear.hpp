///! HEADGEAR
class ItemCore;	// External class reference
class H_HelmetB : ItemCore {
	class ItemInfo;
};
class HeadGearItem;	// External class reference
class InventoryItem_Base_F;	// External class reference
class InventoryMuzzleItem_Base_F;	// External class reference
class InventoryOpticsItem_Base_F;	// External class reference

#define INVENTORY_CATEGORY headgear

class rhsusf_patrolcap_ocp : H_HelmetB
{
	AUTHOR_MACRO_DLC
	INVENTORY_PICTURE(rhsusf_patrolcap_ocp)
	displayName = "Patrol Cap OEF-CP";
	
	EYEPRO_Macro

	model = "\rhsusf\addons\rhsusf_infantry\gear\head\rhsusf_patrolcap";

	hiddenSelections[] = {};
	hiddenSelectionsTextures[] = {};

	class ItemInfo : HeadGearItem
	{
		mass = 5;
		uniformModel = "\rhsusf\addons\rhsusf_infantry\gear\head\rhsusf_patrolcap";
		allowedSlots[] = {801,901,701,605};
		modelSides[] = {6};
	};
};

class rhsusf_patrolcap_ucp : rhsusf_patrolcap_ocp
{
	AUTHOR_MACRO_DLC
	INVENTORY_PICTURE(rhsusf_patrolcap_ucp)
	displayName = "Patrol Cap UCP";

	hiddenSelections[] = {"camo1"};
	hiddenSelectionsTextures[] = {"rhsusf\addons\rhsusf_infantry\gear\head\data\patrolcap_ucp_co.paa"};
	class ItemInfo : ItemInfo
	{
		hiddenSelections[] = {"camo1"};
	};

};

class rhs_xmas_antlers : ItemCore
{
	AUTHOR_MACRO_DLC
	INVENTORY_PICTURE(rhs_xmas_antlers)
	scope = 2;
	displayName = "Christmas Antlers";
	weaponPoolAvailable = 1;

	model = "\rhsusf\addons\rhsusf_xmas\rhs_xmas_antlers";
	hiddenSelections[] = {};
	hiddenSelectionsTextures[] = {};

	class ItemInfo : HeadGearItem {
		mass = 10;
		allowedSlots[] = {801, 901, 701, 605};
		uniformModel = "\rhsusf\addons\rhsusf_xmas\rhs_xmas_antlers";
		modelSides[] = {6};

		hiddenSelections[] = {};
	};
};

class rhs_Booniehat_ocp : ItemCore
{
	AUTHOR_MACRO_DLC
	INVENTORY_PICTURE(rhs_Booniehat_ocp)
	scope = 2;
	displayName = "Booniehat OEF-CP";
	model = "\A3\Characters_F\Common\booniehat";
	hiddenSelections[] = {"camo"};
	hiddenSelectionsTextures[] = {"\rhsusf\addons\rhsusf_infantry\gear\head\data\booniehat_ocp_co"};
	
	EYEPRO_Macro

	class ItemInfo : HeadGearItem {
		mass = 10;
		allowedSlots[] = {801, 901, 701, 605};
		uniformModel = "\A3\Characters_F\Common\booniehat";
		modelSides[] = {6};

		hiddenSelections[] = {"camo"};
	};
};

class rhs_Booniehat_ucp : rhs_Booniehat_ocp
{
	AUTHOR_MACRO_DLC
	INVENTORY_PICTURE(rhs_Booniehat_ucp)
	scope = 2;
	displayName = "Booniehat UCP";
	hiddenSelectionsTextures[] = {"\rhsusf\addons\rhsusf_infantry\gear\head\data\booniehat_ucp_co"};
};

class rhs_Booniehat_marpatd : rhs_Booniehat_ocp
{
	AUTHOR_MACRO_DLC
	INVENTORY_PICTURE(rhs_Booniehat_marpatd)
	scope = 1;
	displayName = "Booniehat MARPAT-D (Alt.)";
	hiddenSelectionsTextures[] = {"\rhsusf\addons\rhsusf_infantry\gear\head\data\booniehat_marpatd_co"};
};

class rhs_Booniehat_marpatwd : rhs_Booniehat_ocp
{
	AUTHOR_MACRO_DLC
	INVENTORY_PICTURE(rhs_Booniehat_marpatwd)
	scope = 1;
	displayName = "Booniehat MARPAT-WD (Alt.)";
	hiddenSelectionsTextures[] = {"\rhsusf\addons\rhsusf_infantry\gear\head\data\booniehat_marpatwd_co"};
};

class rhs_Booniehat_m81 : rhs_Booniehat_ocp
{
	AUTHOR_MACRO_DLC
	INVENTORY_PICTURE(rhs_Booniehat_m81)
	scope = 2;
	displayName = "Booniehat M81";
	hiddenSelectionsTextures[] = {"\rhsusf\addons\rhsusf_infantry\gear\head\data\booniehat_m81_co"};
};

class rhs_booniehat2_marpatd : ItemCore
{
	AUTHOR_MACRO_DLC
	INVENTORY_PICTURE(rhs_booniehat2_marpatd)
	scope = 2;
	displayName = "Booniehat MARPAT-D";
	weaponPoolAvailable = 1;
	
	EYEPRO_Macro

	model = "\rhsusf\addons\rhsusf_infantry2\gear\head\hats\boonie";
	hiddenSelections[] = {"camo"};
	hiddenSelectionsTextures[] = {"\rhsusf\addons\rhsusf_infantry2\gear\head\hats\data\uniform_bdu_caps_marpatd_co"};

	class ItemInfo : HeadGearItem {
		mass = 10;
		allowedSlots[] = {801, 901, 701, 605};
		uniformModel = "\rhsusf\addons\rhsusf_infantry2\gear\head\hats\boonie";
		modelSides[] = {6};
		hiddenSelections[] = {"camo"};
	};
};

class rhs_booniehat2_marpatwd : rhs_booniehat2_marpatd
{
	AUTHOR_MACRO_DLC
	INVENTORY_PICTURE(rhs_booniehat2_marpatwd)
	scope = public;
	displayName = "Booniehat MARPAT-WD";
	hiddenSelectionsTextures[] = {"\rhsusf\addons\rhsusf_infantry2\gear\head\hats\data\uniform_bdu_caps_marpatwd_co"};
};

class rhs_8point_marpatd : ItemCore
{
	AUTHOR_MACRO_DLC
	INVENTORY_PICTURE(rhs_8point_marpatd)
	scope = public;
	displayName = "Utility Cap MARPAT-D";
	weaponPoolAvailable = 1;
	
	EYEPRO_Macro

	model = "\rhsusf\addons\rhsusf_infantry2\gear\head\hats\8point";
	hiddenSelections[] = {"camo"};
	hiddenSelectionsTextures[] = {"\rhsusf\addons\rhsusf_infantry2\gear\head\hats\data\uniform_bdu_caps_marpatd_co"};

	class ItemInfo : HeadGearItem {
		mass = 10;
		allowedSlots[] = {801, 901, 701, 605};
		uniformModel = "\rhsusf\addons\rhsusf_infantry2\gear\head\hats\8point";
		modelSides[] = {6};
		hiddenSelections[] = {"camo"};
	};
};

class rhs_8point_marpatwd : rhs_8point_marpatd
{
	AUTHOR_MACRO_DLC
	INVENTORY_PICTURE(rhs_8point_marpatwd)
	scope = public;
	displayName = "Utility Cap MARPAT-WD";
	hiddenSelectionsTextures[] = {"\rhsusf\addons\rhsusf_infantry2\gear\head\hats\data\uniform_bdu_caps_marpatwd_co"};
};

/*///////////////////////////////////
//		Covered ACH Helmets		  //
//////////////////////////////////*/

#define ACH_OCP_TAN_RHINO_TEX \
	hiddenSelections[] = {"Camo", "Camo1"}; \
	hiddenSelectionsTextures[] = {	"\rhsusf\addons\rhsusf_infantry\gear\head\data\rhs_helmet_ach_ocp_co.paa",\
									"\rhsusf\addons\rhsusf_infantry\gear\head\data\ach_acc_tan_co.paa"};
#define ACH_OCP_TAN_RHINO_CAMONET_TEX \
	hiddenSelections[] = {"Camo", "Camo1","Camo2"}; \
	hiddenSelectionsTextures[] = {	"\rhsusf\addons\rhsusf_infantry\gear\head\data\rhs_helmet_ach_ocp_co.paa",\
									"\rhsusf\addons\rhsusf_infantry\gear\head\data\ach_acc_tan_co.paa",\
									"\rhsusf\addons\rhsusf_infantry\gear\head\data\camo_net_co.paa"};									
									
#define ACH_OCP_BLK_RHINO_TEX \
	hiddenSelections[] = {"Camo", "Camo1"}; \
	hiddenSelectionsTextures[] = {	"\rhsusf\addons\rhsusf_infantry\gear\head\data\rhs_helmet_ach_ocp_co.paa",\
									"\rhsusf\addons\rhsusf_infantry\gear\head\data\rhs_helmet_ach_acc_co.paa"};
#define ACH_UCP_TAN_RHINO_TEX \
	hiddenSelections[] = {"Camo", "Camo1"}; \
	hiddenSelectionsTextures[] = {	"\rhsusf\addons\rhsusf_infantry\gear\head\data\rhs_helmet_ach_ucp_co.paa",\
									"\rhsusf\addons\rhsusf_infantry\gear\head\data\ach_acc_tan_co.paa"};
#define ACH_UCP_BLK_RHINO_TEX \
	hiddenSelections[] = {"Camo", "Camo1"}; \
	hiddenSelectionsTextures[] = {	"\rhsusf\addons\rhsusf_infantry\gear\head\data\rhs_helmet_ach_ucp_co.paa",\
									"\rhsusf\addons\rhsusf_infantry\gear\head\data\rhs_helmet_ach_acc_co.paa"};
#define ACH_M81_BLK_RHINO_TEX \
	hiddenSelections[] = {"Camo", "Camo1"}; \
	hiddenSelectionsTextures[] = {	"\rhsusf\addons\rhsusf_infantry\gear\head\data\rhs_helmet_ach_M81_co.paa",\
									"\rhsusf\addons\rhsusf_infantry\gear\head\data\rhs_helmet_ach_acc_co.paa"};
#define ACH_DCU_BLK_RHINO_TEX \
	hiddenSelections[] = {"Camo", "Camo1"}; \
	hiddenSelectionsTextures[] = {	"\rhsusf\addons\rhsusf_infantry3\gear\head\data\rhs_helmet_ach_DCU_co.paa",\
									"\rhsusf\addons\rhsusf_infantry\gear\head\data\rhs_helmet_ach_acc_co.paa"};
#define ACH_DCU_EARLY_BLK_RHINO_TEX \
	hiddenSelections[] = {"camo", "Camo1"}; \
	hiddenSelectionsTextures[] = {	"\rhsusf\addons\rhsusf_infantry3\gear\head\data\rhs_helmet_ach_DCU_early_co.paa",\
									"\rhsusf\addons\rhsusf_infantry\gear\head\data\rhs_helmet_ach_acc_co.paa"};

									
//ACH (OCP/Tan rhino)
class rhsusf_ach_helmet_ocp : H_HelmetB
{
	AUTHOR_MACRO_DLC
	INVENTORY_PICTURE(rhsusf_ach_helmet_ocp)
	displayName = "ACH OEF-CP";
	
	GOGGLE_Macro

	model = "\rhsusf\addons\rhsusf_infantry\gear\head\ach_01";

	ACH_OCP_TAN_RHINO_TEX
	
	class ItemInfo: ItemInfo
	{
		mass = 40;
		hiddenSelections[] = {"Camo", "Camo1"};
		uniformModel = "\rhsusf\addons\rhsusf_infantry\gear\head\ach_01";
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
//ACH (OCP/Black rhino)
class rhsusf_ach_helmet_ocp_alt : rhsusf_ach_helmet_ocp
{
	INVENTORY_PICTURE(rhsusf_ach_helmet_ocp_alt)
	displayName = "ACH OEF-CP (Alt)";
	//scope = 1;//Hidden, but used by randomized helmets
	
	ACH_OCP_BLK_RHINO_TEX
};

//ACH (OCP/Norotos)
class rhsusf_ach_helmet_ocp_norotos : rhsusf_ach_helmet_ocp
{
	AUTHOR_MACRO_DLC
	INVENTORY_PICTURE(rhsusf_ach_helmet_ocp_norotos)
	displayName = "ACH OEF-CP (Norotos)";

	model = "\rhsusf\addons\rhsusf_infantry\gear\head\ach_norotos_01";

	ACH_OCP_TAN_RHINO_TEX

	class ItemInfo: ItemInfo
	{
		uniformModel = "\rhsusf\addons\rhsusf_infantry\gear\head\ach_norotos_01";
	};
};

//ACH (UCP/Black rhino)
class rhsusf_ach_helmet_ucp : rhsusf_ach_helmet_ocp
{
	AUTHOR_MACRO_DLC
	INVENTORY_PICTURE(rhsusf_ach_helmet_ucp)
	displayName = "ACH UCP";
	
	ACH_UCP_BLK_RHINO_TEX
};
//ACH (UCP/Tan rhino)
class rhsusf_ach_helmet_ucp_alt : rhsusf_ach_helmet_ucp
{
	INVENTORY_PICTURE(rhsusf_ach_helmet_ucp_alt)
	displayName = "ACH UCP (Alt)";
	//scope = 1;
	
	ACH_UCP_TAN_RHINO_TEX
};

//ACH (UCP/Norotos)
class rhsusf_ach_helmet_ucp_norotos : rhsusf_ach_helmet_ocp
{
	AUTHOR_MACRO_DLC
	INVENTORY_PICTURE(rhsusf_ach_helmet_ucp_norotos)
	displayName = "ACH UCP (Norotos)";

	model = "\rhsusf\addons\rhsusf_infantry\gear\head\ach_norotos_01";

	ACH_UCP_BLK_RHINO_TEX

	class ItemInfo: ItemInfo
	{
		uniformModel = "\rhsusf\addons\rhsusf_infantry\gear\head\ach_norotos_01";
	};
};

//ACH (M81/Black rhino)
class rhsusf_ach_helmet_M81 : rhsusf_ach_helmet_ocp
{
	AUTHOR_MACRO_DLC
	INVENTORY_PICTURE(rhsusf_ach_helmet_M81)
	displayName = "ACH M81";
	
	ACH_M81_BLK_RHINO_TEX
};

//ACH (DCU)
class rhsusf_ach_helmet_DCU : rhsusf_ach_helmet_ocp
{
	AUTHOR_MACRO_DLC
	INVENTORY_PICTURE(rhsusf_ach_helmet_DCU) //TODO
	displayName = "ACH DCU";
	
	ACH_DCU_BLK_RHINO_TEX
};
//ACH (DCU/Early)
class rhsusf_ach_helmet_DCU_early : rhsusf_ach_helmet_ocp
{
	AUTHOR_MACRO_DLC
	INVENTORY_PICTURE(rhsusf_ach_helmet_DCU_early) //TODO
	displayName = "ACH DCU (Early)";
	
	model = "\rhsusf\addons\rhsusf_infantry3\gear\head\ach_early";
	
	ACH_DCU_EARLY_BLK_RHINO_TEX
	
	class ItemInfo: ItemInfo
	{
		//hiddenSelections[] = {"camo"};
		uniformModel = "\rhsusf\addons\rhsusf_infantry3\gear\head\ach_early";
	};
};
//ACH (DCU/Black rhino)
class rhsusf_ach_helmet_DCU_early_rhino : rhsusf_ach_helmet_ocp
{
	AUTHOR_MACRO_DLC
	INVENTORY_PICTURE(rhsusf_ach_helmet_DCU_early_rhino) //TODO
	displayName = "ACH DCU (Early/Rhino)";
	
	model = "\rhsusf\addons\rhsusf_infantry3\gear\head\ach_early_rhino";
	
	ACH_DCU_EARLY_BLK_RHINO_TEX
	
	class ItemInfo: ItemInfo
	{
		//hiddenSelections[] = {"camo", "Camo1"};
		uniformModel = "\rhsusf\addons\rhsusf_infantry3\gear\head\ach_early_rhino";
	};
};

//ACH (OCP/Tan rhino/Camo netting)
class rhsusf_ach_helmet_camo_ocp : rhsusf_ach_helmet_ocp
{
	AUTHOR_MACRO_DLC
	INVENTORY_PICTURE(rhsusf_ach_helmet_camo_ocp)
	displayName = "ACH OEF-CP (Netting)";

	model = "\rhsusf\addons\rhsusf_infantry\gear\head\ach_camo";

	ACH_OCP_TAN_RHINO_CAMONET_TEX

	class ItemInfo: ItemInfo
	{
		uniformModel = "\rhsusf\addons\rhsusf_infantry\gear\head\ach_camo";
		hiddenSelections[] = {"Camo", "Camo1", "Camo2"};
	};
};

//ACH (OCP/Tan rhino/Headset)
class rhsusf_ach_helmet_headset_ocp : rhsusf_ach_helmet_ocp
{
	AUTHOR_MACRO_DLC
	INVENTORY_PICTURE(rhsusf_ach_helmet_headset_ocp)
	displayName = "ACH OEF-CP (Headset)";

	model = "\rhsusf\addons\rhsusf_infantry\gear\head\ach_headset";

	ACH_OCP_TAN_RHINO_TEX

	class ItemInfo: ItemInfo
	{
		uniformModel = "\rhsusf\addons\rhsusf_infantry\gear\head\ach_headset";
	};
};
//ACH (OCP/Black rhino/Headset)
class rhsusf_ach_helmet_headset_ocp_alt : rhsusf_ach_helmet_headset_ocp
{
	INVENTORY_PICTURE(rhsusf_ach_helmet_headset_ocp_alt)
	displayName = "ACH OEF-CP (Headset/Alt)";
	//scope = 1;
	
	ACH_OCP_BLK_RHINO_TEX
};

//ACH (UCP/Black rhino/Headset)
class rhsusf_ach_helmet_headset_ucp : rhsusf_ach_helmet_headset_ocp
{
	AUTHOR_MACRO_DLC
	INVENTORY_PICTURE(rhsusf_ach_helmet_headset_ucp)
	displayName = "ACH UCP (Headset)";
	
	ACH_UCP_BLK_RHINO_TEX
};
//ACH (UCP/Tan rhino/Headset)
class rhsusf_ach_helmet_headset_ucp_alt : rhsusf_ach_helmet_headset_ucp
{
	INVENTORY_PICTURE(rhsusf_ach_helmet_headset_ucp_alt)
	displayName = "ACH UCP (Headset/Alt)";
	//scope = 1;
	
	ACH_UCP_TAN_RHINO_TEX
};

//ACH (OCP/Tan rhino/ESS)
class rhsusf_ach_helmet_ESS_ocp : rhsusf_ach_helmet_ocp
{
	AUTHOR_MACRO_DLC
	INVENTORY_PICTURE(rhsusf_ach_helmet_ESS_ocp)
	displayName = "ACH OEF-CP (ESS)";
	
	EYEPRO_Macro

	model = "\rhsusf\addons\rhsusf_infantry\gear\head\ach_ess_01";

	ACH_OCP_TAN_RHINO_TEX

	class ItemInfo: ItemInfo
	{
		uniformModel = "\rhsusf\addons\rhsusf_infantry\gear\head\ach_ess_01";
	};
};
//ACH (OCP/Black rhino/ESS)
class rhsusf_ach_helmet_ESS_ocp_alt : rhsusf_ach_helmet_ESS_ocp
{
	INVENTORY_PICTURE(rhsusf_ach_helmet_ESS_ocp_alt)
	displayName = "ACH OEF-CP (ESS/Alt)";
	//scope = 1;
	
	ACH_OCP_BLK_RHINO_TEX
};

//ACH (UCP/Black rhino/ESS)
class rhsusf_ach_helmet_ESS_ucp : rhsusf_ach_helmet_ESS_ocp
{
	AUTHOR_MACRO_DLC
	INVENTORY_PICTURE(rhsusf_ach_helmet_ESS_ucp)
	displayName = "ACH UCP (ESS)";
	
	ACH_UCP_BLK_RHINO_TEX
};
//ACH (UCP/Tan rhino/ESS)
class rhsusf_ach_helmet_ESS_ucp_alt : rhsusf_ach_helmet_ESS_ucp
{
	INVENTORY_PICTURE(rhsusf_ach_helmet_ESS_ucp_alt)
	displayName = "ACH UCP (ESS/Alt)";
	//scope = 1;
	
	ACH_UCP_TAN_RHINO_TEX
};

//ACH (OCP/Tan rhino/Headset/ESS)
class rhsusf_ach_helmet_headset_ess_ocp : rhsusf_ach_helmet_ocp
{
	AUTHOR_MACRO_DLC
	INVENTORY_PICTURE(rhsusf_ach_helmet_headset_ess_ocp)
	displayName = "ACH OEF-CP (Headset/ESS)";
	
	EYEPRO_Macro

	model = "\rhsusf\addons\rhsusf_infantry\gear\head\ach_headset_ess";

	ACH_OCP_TAN_RHINO_TEX

	class ItemInfo: ItemInfo
	{
		uniformModel = "\rhsusf\addons\rhsusf_infantry\gear\head\ach_headset_ess";

	};
};
//ACH (OCP/Black rhino/Headset/ESS)
class rhsusf_ach_helmet_headset_ess_ocp_alt : rhsusf_ach_helmet_headset_ess_ocp
{
	INVENTORY_PICTURE(rhsusf_ach_helmet_headset_ess_ocp_alt)
	
	displayName = "ACH OEF-CP (Headset/ESS/Alt)";
	//scope = 1;
	
	ACH_OCP_BLK_RHINO_TEX
};

//ACH (UCP/Black rhino/Headset/ESS)
class rhsusf_ach_helmet_headset_ess_ucp : rhsusf_ach_helmet_headset_ess_ocp
{
	AUTHOR_MACRO_DLC
	INVENTORY_PICTURE(rhsusf_ach_helmet_headset_ess_ucp)
	displayName = "ACH UCP (Headset/ESS)";
	
	ACH_UCP_BLK_RHINO_TEX
};
//ACH (UCP/Tan rhino/Headset/ESS)
class rhsusf_ach_helmet_headset_ess_ucp_alt : rhsusf_ach_helmet_headset_ess_ucp
{
	INVENTORY_PICTURE(rhsusf_ach_helmet_headset_ess_ucp_alt)
	displayName = "ACH UCP (Headset/ESS/Alt)";
	//scope = 1;
	
	ACH_UCP_TAN_RHINO_TEX
};

/*///////////////////////////////////
//	  Uncovered ACH Helmets		  //
//////////////////////////////////*/

#define ACH_BARE_TEX \
	hiddenSelections[] = {"Camo", "Camo1"}; \
	hiddenSelectionsTextures[] = {	"\rhsusf\addons\rhsusf_infantry\gear\head\data\rhs_helmet_mich_green_co.paa",\
									"\rhsusf\addons\rhsusf_infantry\gear\head\data\rhs_helmet_ach_acc_co.paa"};
#define ACH_TAN_TEX \
	hiddenSelections[] = {"Camo", "Camo1"}; \
	hiddenSelectionsTextures[] = {	"\rhsusf\addons\rhsusf_infantry\gear\head\data\rhs_helmet_mich_tan_co.paa",\
									"\rhsusf\addons\rhsusf_infantry\gear\head\data\ach_acc_tan_co.paa"};
#define ACH_WOOD_TEX \
	hiddenSelections[] = {"Camo", "Camo1"}; \
	hiddenSelectionsTextures[] = {	"\rhsusf\addons\rhsusf_infantry\gear\head\data\rhs_helmet_mich_wood_co.paa",\
									"\rhsusf\addons\rhsusf_infantry\gear\head\data\rhs_helmet_ach_acc_co.paa"};
#define ACH_DES_TEX \
	hiddenSelections[] = {"Camo", "Camo1"}; \
	hiddenSelectionsTextures[] = {	"\rhsusf\addons\rhsusf_infantry\gear\head\data\rhs_helmet_mich_des_co.paa",\
									"\rhsusf\addons\rhsusf_infantry\gear\head\data\ach_acc_tan_co.paa"};
#define ACH_SEMI_TEX \
	hiddenSelections[] = {"Camo", "Camo1"}; \
	hiddenSelectionsTextures[] = {	"\rhsusf\addons\rhsusf_infantry\gear\head\data\rhs_helmet_mich_semi_co.paa",\
									"\rhsusf\addons\rhsusf_infantry\gear\head\data\ach_acc_tan_co.paa"};

class rhsusf_ach_bare : rhsusf_ach_helmet_ocp
{
	AUTHOR_MACRO_DLC
	INVENTORY_PICTURE(rhsusf_ach_bare)
	displayName = "ACH";

	model = "\rhsusf\addons\rhsusf_infantry\gear\head\ach_bare_01";

	ACH_BARE_TEX

	class ItemInfo: ItemInfo
	{
		uniformModel = "\rhsusf\addons\rhsusf_infantry\gear\head\ach_bare_01";
	};
};

class rhsusf_ach_bare_ess : rhsusf_ach_helmet_ocp
{
	AUTHOR_MACRO_DLC
	INVENTORY_PICTURE(rhsusf_ach_bare_ess)
	displayName = "ACH (ESS)";
	
	EYEPRO_Macro

	model = "\rhsusf\addons\rhsusf_infantry\gear\head\ach_bare_ess_01";

	ACH_BARE_TEX

	class ItemInfo: ItemInfo
	{
		uniformModel = "\rhsusf\addons\rhsusf_infantry\gear\head\ach_bare_ess_01";
	};
};

class rhsusf_ach_bare_headset : rhsusf_ach_helmet_ocp
{
	AUTHOR_MACRO_DLC
	INVENTORY_PICTURE(rhsusf_ach_bare_headset)
	displayName = "ACH (Headset)";

	model = "\rhsusf\addons\rhsusf_infantry\gear\head\ach_bare_headset";

	ACH_BARE_TEX

	class ItemInfo: ItemInfo
	{
		uniformModel = "\rhsusf\addons\rhsusf_infantry\gear\head\ach_bare_headset";
	};
};

class rhsusf_ach_bare_headset_ess : rhsusf_ach_helmet_ocp
{
	AUTHOR_MACRO_DLC
	INVENTORY_PICTURE(rhsusf_ach_bare_headset_ess)
	displayName = "ACH (Headset/ESS)";
	
	EYEPRO_Macro

	model = "\rhsusf\addons\rhsusf_infantry\gear\head\ach_bare_headset_ess";

	ACH_BARE_TEX

	class ItemInfo: ItemInfo
	{
		uniformModel = "\rhsusf\addons\rhsusf_infantry\gear\head\ach_bare_headset_ess";
	};
};

class rhsusf_ach_bare_tan : rhsusf_ach_helmet_ocp
{
	AUTHOR_MACRO_DLC
	INVENTORY_PICTURE(rhsusf_ach_bare_tan)
	displayName = "ACH (Tan)";

	model = "\rhsusf\addons\rhsusf_infantry\gear\head\ach_bare_01";

	ACH_TAN_TEX

	class ItemInfo: ItemInfo
	{
		uniformModel = "\rhsusf\addons\rhsusf_infantry\gear\head\ach_bare_01";
	};
};

class rhsusf_ach_bare_tan_ess : rhsusf_ach_helmet_ocp
{
	AUTHOR_MACRO_DLC
	INVENTORY_PICTURE(rhsusf_ach_bare_tan_ess)
	displayName = "ACH (Tan/ESS)";
	
	EYEPRO_Macro

	model = "\rhsusf\addons\rhsusf_infantry\gear\head\ach_bare_ess_01";

	ACH_TAN_TEX

	class ItemInfo: ItemInfo
	{
		uniformModel = "\rhsusf\addons\rhsusf_infantry\gear\head\ach_bare_ess_01";
	};
};

class rhsusf_ach_bare_tan_headset : rhsusf_ach_helmet_ocp
{
	AUTHOR_MACRO_DLC
	INVENTORY_PICTURE(rhsusf_ach_bare_tan_headset)
	displayName = "ACH (Tan/Headset)";

	model = "\rhsusf\addons\rhsusf_infantry\gear\head\ach_bare_headset";

	ACH_TAN_TEX

	class ItemInfo: ItemInfo
	{
		uniformModel = "\rhsusf\addons\rhsusf_infantry\gear\head\ach_bare_headset";
	};
};

class rhsusf_ach_bare_tan_headset_ess : rhsusf_ach_helmet_ocp
{
	AUTHOR_MACRO_DLC
	INVENTORY_PICTURE(rhsusf_ach_bare_tan_headset_ess)
	displayName = "ACH (Tan/Headset/ESS)";
	
	EYEPRO_Macro

	model = "\rhsusf\addons\rhsusf_infantry\gear\head\ach_bare_headset_ess";

	ACH_TAN_TEX

	class ItemInfo: ItemInfo
	{
		uniformModel = "\rhsusf\addons\rhsusf_infantry\gear\head\ach_bare_headset_ess";
	};
};

class rhsusf_ach_bare_wood : rhsusf_ach_helmet_ocp
{
	AUTHOR_MACRO_DLC
	INVENTORY_PICTURE(rhsusf_ach_bare_wood)
	displayName = "ACH (Woodland)";

	model = "\rhsusf\addons\rhsusf_infantry\gear\head\ach_bare_01";

	ACH_WOOD_TEX

	class ItemInfo: ItemInfo
	{
		uniformModel = "\rhsusf\addons\rhsusf_infantry\gear\head\ach_bare_01";
	};
};

class rhsusf_ach_bare_wood_ess : rhsusf_ach_helmet_ocp
{
	AUTHOR_MACRO_DLC
	INVENTORY_PICTURE(rhsusf_ach_bare_wood_ess)
	displayName = "ACH (Woodland/ESS)";
	
	EYEPRO_Macro

	model = "\rhsusf\addons\rhsusf_infantry\gear\head\ach_bare_ess_01";

	ACH_WOOD_TEX

	class ItemInfo: ItemInfo
	{
		uniformModel = "\rhsusf\addons\rhsusf_infantry\gear\head\ach_bare_ess_01";
	};
};

class rhsusf_ach_bare_wood_headset : rhsusf_ach_helmet_ocp
{
	AUTHOR_MACRO_DLC
	INVENTORY_PICTURE(rhsusf_ach_bare_wood_headset)
	displayName = "ACH (Woodland/Headset)";

	model = "\rhsusf\addons\rhsusf_infantry\gear\head\ach_bare_headset";

	ACH_WOOD_TEX

	class ItemInfo: ItemInfo
	{
		uniformModel = "\rhsusf\addons\rhsusf_infantry\gear\head\ach_bare_headset";
	};
};

class rhsusf_ach_bare_wood_headset_ess : rhsusf_ach_helmet_ocp
{
	AUTHOR_MACRO_DLC
	INVENTORY_PICTURE(rhsusf_ach_bare_wood_headset_ess)
	displayName = "ACH (Woodland/Headset/ESS)";
	
	EYEPRO_Macro

	model = "\rhsusf\addons\rhsusf_infantry\gear\head\ach_bare_headset_ess";

	ACH_WOOD_TEX

	class ItemInfo: ItemInfo
	{
		uniformModel = "\rhsusf\addons\rhsusf_infantry\gear\head\ach_bare_headset_ess";
	};
};

class rhsusf_ach_bare_des : rhsusf_ach_helmet_ocp
{
	AUTHOR_MACRO_DLC
	INVENTORY_PICTURE(rhsusf_ach_bare_des)
	displayName = "ACH (Desert)";

	model = "\rhsusf\addons\rhsusf_infantry\gear\head\ach_bare_01";

	ACH_DES_TEX

	class ItemInfo: ItemInfo
	{
		uniformModel = "\rhsusf\addons\rhsusf_infantry\gear\head\ach_bare_01";
	};
};

class rhsusf_ach_bare_des_ess : rhsusf_ach_helmet_ocp
{
	AUTHOR_MACRO_DLC
	INVENTORY_PICTURE(rhsusf_ach_bare_des_ess)
	displayName = "ACH (Desert/ESS)";
	
	EYEPRO_Macro

	model = "\rhsusf\addons\rhsusf_infantry\gear\head\ach_bare_ess_01";

	ACH_DES_TEX

	class ItemInfo: ItemInfo
	{
		uniformModel = "\rhsusf\addons\rhsusf_infantry\gear\head\ach_bare_ess_01";
	};
};

class rhsusf_ach_bare_des_headset : rhsusf_ach_helmet_ocp
{
	AUTHOR_MACRO_DLC
	INVENTORY_PICTURE(rhsusf_ach_bare_des_headset)
	displayName = "ACH (Desert/Headset)";

	model = "\rhsusf\addons\rhsusf_infantry\gear\head\ach_bare_headset";

	ACH_DES_TEX

	class ItemInfo: ItemInfo
	{
		uniformModel = "\rhsusf\addons\rhsusf_infantry\gear\head\ach_bare_headset";
	};
};

class rhsusf_ach_bare_des_headset_ess : rhsusf_ach_helmet_ocp
{
	AUTHOR_MACRO_DLC
	INVENTORY_PICTURE(rhsusf_ach_bare_des_headset_ess)
	displayName = "ACH (Desert/Headset/ESS)";
	
	EYEPRO_Macro

	model = "\rhsusf\addons\rhsusf_infantry\gear\head\ach_bare_headset_ess";

	ACH_DES_TEX

	class ItemInfo: ItemInfo
	{
		uniformModel = "\rhsusf\addons\rhsusf_infantry\gear\head\ach_bare_headset_ess";
	};
};

class rhsusf_ach_bare_semi : rhsusf_ach_helmet_ocp
{
	AUTHOR_MACRO_DLC
	INVENTORY_PICTURE(rhsusf_ach_bare_semi)
	displayName = "ACH (Semi-Arid)";

	model = "\rhsusf\addons\rhsusf_infantry\gear\head\ach_bare_01";

	ACH_SEMI_TEX

	class ItemInfo: ItemInfo
	{
		uniformModel = "\rhsusf\addons\rhsusf_infantry\gear\head\ach_bare_01";
	};
};

class rhsusf_ach_bare_semi_ess : rhsusf_ach_helmet_ocp
{
	AUTHOR_MACRO_DLC
	INVENTORY_PICTURE(rhsusf_ach_bare_semi_ess)
	displayName = "ACH (Semi-Arid/ESS)";
	
	EYEPRO_Macro

	model = "\rhsusf\addons\rhsusf_infantry\gear\head\ach_bare_ess_01";

	ACH_SEMI_TEX

	class ItemInfo: ItemInfo
	{
		uniformModel = "\rhsusf\addons\rhsusf_infantry\gear\head\ach_bare_ess_01";
	};
};

class rhsusf_ach_bare_semi_headset : rhsusf_ach_helmet_ocp
{
	AUTHOR_MACRO_DLC
	INVENTORY_PICTURE(rhsusf_ach_bare_semi_headset)
	displayName = "ACH (Semi-Arid/Headset)";

	model = "\rhsusf\addons\rhsusf_infantry\gear\head\ach_bare_headset";

	ACH_SEMI_TEX

	class ItemInfo: ItemInfo
	{
		uniformModel = "\rhsusf\addons\rhsusf_infantry\gear\head\ach_bare_headset";
	};
};

class rhsusf_ach_bare_semi_headset_ess : rhsusf_ach_helmet_ocp
{
	AUTHOR_MACRO_DLC
	INVENTORY_PICTURE(rhsusf_ach_bare_semi_headset_ess)
	displayName = "ACH (Semi-Arid/Headset/ESS)";
	
	EYEPRO_Macro

	model = "\rhsusf\addons\rhsusf_infantry\gear\head\ach_bare_headset_ess";

	ACH_SEMI_TEX

	class ItemInfo: ItemInfo
	{
		uniformModel = "\rhsusf\addons\rhsusf_infantry\gear\head\ach_bare_headset_ess";
	};
};

/* Fast OPS-COREs Summer collection */

//- Fast Ops-Core bare variants

class rhsusf_opscore_01 : rhsusf_ach_helmet_ocp
{
	AUTHOR_MACRO_DLC
	INVENTORY_PICTURE(rhsusf_opscore_01)
	scope = 1;

	descriptionshort = "OpsCore FAST Ballistic Helmet";	
	
	model = "\rhsusf\addons\rhsusf_infantry2\gear\head\opscore\opscore";

	hiddenSelections[] = {"opscore","comtac","NSW","contour","UNCOV_FLAG","ms2000"};
	hiddenSelectionsTextures[] =
	{
		"\rhsusf\addons\rhsusf_infantry2\gear\head\opscore\data\opscore_fg_co.paa", // base of helmet
		"", // "\rhsusf\addons\rhsusf_infantry2\gear\head\opscore\data\comtac_co.paa", // mic
		"", // "\rhsusf\addons\rhsusf_infantry2\gear\head\opscore\data\nsw_co.paa", // Strobe cover
		"", // "\rhsusf\addons\rhsusf_infantry\gear\head\data\rhs_helmet_ach_acc_co.paa", // camera
		"",
		"" // Strobe
	};

	class ItemInfo : ItemInfo
	{
		mass = 30;
		armor = 6;
		uniformModel = "\rhsusf\addons\rhsusf_infantry2\gear\head\opscore\opscore";
		modelSides[] = {3, 1};
		hiddenSelections[] = {"opscore","comtac","NSW","contour","UNCOV_FLAG","ms2000"};
	};
};

// Foliage Green
class rhsusf_opscore_fg  : rhsusf_opscore_01
{
	AUTHOR_MACRO_DLC
	INVENTORY_PICTURE(rhsusf_opscore_fg)
	scope = 2;

	displayName = "FAST Ballistic (Foliage Green)";

	hiddenSelectionsTextures[] =
	{
		"\rhsusf\addons\rhsusf_infantry2\gear\head\opscore\data\opscore_fg_co.paa",
		"",
		"",
		"",
		"\rhsusf\addons\rhsusf_infantry\gear\head\data\mich_acc_tan_co.paa",
		""
	};
};

class rhsusf_opscore_fg_pelt  : rhsusf_opscore_01
{
	AUTHOR_MACRO_DLC
	INVENTORY_PICTURE(rhsusf_opscore_fg_pelt)
	scope = 2;
	displayName = "FAST Ballistic (Foliage Green/Headset)";

	hiddenSelectionsTextures[] =
	{
		"\rhsusf\addons\rhsusf_infantry2\gear\head\opscore\data\opscore_fg_co.paa",
		"\rhsusf\addons\rhsusf_infantry2\gear\head\opscore\data\comtac_fg_co.paa",
		"",
		"",
		"",
		"",
		""
	};
};

class rhsusf_opscore_fg_pelt_nsw  : rhsusf_opscore_01
{
	AUTHOR_MACRO_DLC
	INVENTORY_PICTURE(rhsusf_opscore_fg_pelt_nsw)
	scope = 2;
	displayName = "FAST Ballistic (Foliage Green/Headset/NSW)";

	hiddenSelectionsTextures[] =
	{
		"\rhsusf\addons\rhsusf_infantry2\gear\head\opscore\data\opscore_fg_co.paa",
		"\rhsusf\addons\rhsusf_infantry2\gear\head\opscore\data\comtac_fg_co.paa",
		"\rhsusf\addons\rhsusf_infantry2\gear\head\opscore\data\nsw_co.paa",
		"",
		"",
		"\rhsusf\addons\rhsusf_infantry\gear\head\data\rhs_helmet_ach_acc_co.paa"
	};
};

class rhsusf_opscore_fg_pelt_cam  : rhsusf_opscore_01
{
	AUTHOR_MACRO_DLC
	INVENTORY_PICTURE(rhsusf_opscore_fg_pelt_cam)
	scope = 2;
	displayName = "FAST Ballistic (Foliage Green/Headset/Cam)";

	hiddenSelectionsTextures[] =
	{
		"\rhsusf\addons\rhsusf_infantry2\gear\head\opscore\data\opscore_fg_co.paa",
		"\rhsusf\addons\rhsusf_infantry2\gear\head\opscore\data\comtac_fg_co.paa",
		"",
		"\rhsusf\addons\rhsusf_infantry\gear\head\data\rhs_helmet_ach_acc_co.paa",
		"",
		""
	};
};

// Urban Tan
class rhsusf_opscore_ut : rhsusf_opscore_01
{
	AUTHOR_MACRO_DLC
	INVENTORY_PICTURE(rhsusf_opscore_ut)
	scope = 2;
	displayName = "FAST Ballistic (Urban Tan)";
	hiddenSelectionsTextures[] =
	{
		"\rhsusf\addons\rhsusf_infantry2\gear\head\opscore\data\opscore_co.paa"
	};
};

class rhsusf_opscore_ut_pelt : rhsusf_opscore_01
{
	AUTHOR_MACRO_DLC
	INVENTORY_PICTURE(rhsusf_opscore_ut_pelt)
	scope = 2;
	displayName = "FAST Ballistic (Urban Tan/Headset)";
	hiddenSelectionsTextures[] =
	{
		"\rhsusf\addons\rhsusf_infantry2\gear\head\opscore\data\opscore_co.paa",
		"\rhsusf\addons\rhsusf_infantry2\gear\head\opscore\data\comtac_co.paa",
		"",
		"",
		"\rhsusf\addons\rhsusf_infantry\gear\head\data\mich_acc_tan_co.paa",
		""
	};
};

class rhsusf_opscore_ut_pelt_cam : rhsusf_opscore_01
{
	AUTHOR_MACRO_DLC
	INVENTORY_PICTURE(rhsusf_opscore_ut_pelt_cam)
	scope = 2;
	displayName = "FAST Ballistic (Urban Tan/Headset/Cam)";
	hiddenSelectionsTextures[] =
	{
		"\rhsusf\addons\rhsusf_infantry2\gear\head\opscore\data\opscore_co.paa",
		"\rhsusf\addons\rhsusf_infantry2\gear\head\opscore\data\comtac_co.paa",
		"",
		"\rhsusf\addons\rhsusf_infantry\gear\head\data\rhs_helmet_ach_acc_co.paa",
		"",
		""
	};
};

class rhsusf_opscore_ut_pelt_nsw : rhsusf_opscore_01
{
	AUTHOR_MACRO_DLC
	INVENTORY_PICTURE(rhsusf_opscore_ut_pelt_nsw)
	scope = 2;
	displayName = "FAST Ballistic (Urban Tan/Headset/NSW)";
	hiddenSelectionsTextures[] =
	{
		"\rhsusf\addons\rhsusf_infantry2\gear\head\opscore\data\opscore_co.paa",
		"\rhsusf\addons\rhsusf_infantry2\gear\head\opscore\data\comtac_co.paa",
		"\rhsusf\addons\rhsusf_infantry2\gear\head\opscore\data\nsw_co.paa",
		"",
		"\rhsusf\addons\rhsusf_infantry\gear\head\data\mich_acc_tan_co.paa",
		"\rhsusf\addons\rhsusf_infantry\gear\head\data\rhs_helmet_ach_acc_co.paa"
	};
};

class rhsusf_opscore_ut_pelt_nsw_cam : rhsusf_opscore_01
{
	AUTHOR_MACRO_DLC
	INVENTORY_PICTURE(rhsusf_opscore_ut_pelt_nsw_cam)
	scope = 2;
	displayName = "FAST Ballistic (Urban Tan/Headset/NSW/Cam)";
	hiddenSelectionsTextures[] =
	{
		"\rhsusf\addons\rhsusf_infantry2\gear\head\opscore\data\opscore_co.paa",
		"\rhsusf\addons\rhsusf_infantry2\gear\head\opscore\data\comtac_co.paa",
		"\rhsusf\addons\rhsusf_infantry2\gear\head\opscore\data\nsw_co.paa",
		"\rhsusf\addons\rhsusf_infantry\gear\head\data\rhs_helmet_ach_acc_co.paa",
		"\rhsusf\addons\rhsusf_infantry\gear\head\data\mich_acc_tan_co.paa",
		"\rhsusf\addons\rhsusf_infantry\gear\head\data\rhs_helmet_ach_acc_co.paa"
	};
};

// Black
class rhsusf_opscore_bk : rhsusf_opscore_01
{
	AUTHOR_MACRO_DLC
	INVENTORY_PICTURE(rhsusf_opscore_bk)
	scope = 2;
	displayName = "FAST Ballistic (Black)";
	hiddenSelectionsTextures[] =
	{
		"\rhsusf\addons\rhsusf_infantry2\gear\head\opscore\data\opscore_blk_co.paa"
	};
};

class rhsusf_opscore_bk_pelt : rhsusf_opscore_01
{
	AUTHOR_MACRO_DLC
	INVENTORY_PICTURE(rhsusf_opscore_bk_pelt)
	scope = 2;
	displayName = "FAST Ballistic (Black/Headset)";
	hiddenSelectionsTextures[] =
	{
		"\rhsusf\addons\rhsusf_infantry2\gear\head\opscore\data\opscore_blk_co.paa",
		"\rhsusf\addons\rhsusf_infantry2\gear\head\opscore\data\comtac_fg_co.paa"
	};
};

// Multicam Paint
class rhsusf_opscore_mc : rhsusf_opscore_01
{
	AUTHOR_MACRO_DLC
	INVENTORY_PICTURE(rhsusf_opscore_mc)
	scope = 2;
	displayName = "FAST Ballistic (Multicam Paint)";
	hiddenSelectionsTextures[] =
	{
		"\rhsusf\addons\rhsusf_infantry2\gear\head\opscore\data\opscore_MC_co.paa"
	};
};

class rhsusf_opscore_mc_pelt : rhsusf_opscore_01
{
	AUTHOR_MACRO_DLC
	INVENTORY_PICTURE(rhsusf_opscore_mc_pelt)
	scope = 2;
	displayName = "FAST Ballistic (Multicam Paint/Headset)";
	hiddenSelectionsTextures[] =
	{
		"\rhsusf\addons\rhsusf_infantry2\gear\head\opscore\data\opscore_MC2_co.paa",
		"\rhsusf\addons\rhsusf_infantry2\gear\head\opscore\data\comtac_co.paa"
	};
};

class rhsusf_opscore_mc_pelt_nsw : rhsusf_opscore_01
{
	AUTHOR_MACRO_DLC
	INVENTORY_PICTURE(rhsusf_opscore_mc_pelt_nsw)
	scope = 2;
	displayName = "FAST Ballistic (Multicam Paint/Headset/NSW)";
	hiddenSelectionsTextures[] =
	{
		"\rhsusf\addons\rhsusf_infantry2\gear\head\opscore\data\opscore_MC2_co.paa",
		"\rhsusf\addons\rhsusf_infantry2\gear\head\opscore\data\comtac_co.paa",
		"\rhsusf\addons\rhsusf_infantry2\gear\head\opscore\data\nsw_co.paa",
		"",
		"",
		"\rhsusf\addons\rhsusf_infantry\gear\head\data\rhs_helmet_ach_acc_co.paa"
	};
};

// AOR 1
class rhsusf_opscore_aor1 : rhsusf_opscore_01
{
	AUTHOR_MACRO_DLC
	INVENTORY_PICTURE(rhsusf_opscore_aor1)
	scope = 2;
	displayName = "FAST Ballistic (AOR1)";
	hiddenSelectionsTextures[] =
	{
		"\rhsusf\addons\rhsusf_infantry2\gear\head\opscore\data\opscore_aor1_co.paa"
	};
};

class rhsusf_opscore_aor1_pelt : rhsusf_opscore_01
{
	AUTHOR_MACRO_DLC
	INVENTORY_PICTURE(rhsusf_opscore_aor1_pelt)
	scope = 2;
	displayName = "FAST Ballistic (AOR1/Headset)";
	hiddenSelectionsTextures[] =
	{
		"\rhsusf\addons\rhsusf_infantry2\gear\head\opscore\data\opscore_aor1_co.paa",
		"\rhsusf\addons\rhsusf_infantry2\gear\head\opscore\data\comtac_co.paa"
	};
};

class rhsusf_opscore_aor1_pelt_nsw : rhsusf_opscore_01
{
	AUTHOR_MACRO_DLC
	INVENTORY_PICTURE(rhsusf_opscore_aor1_pelt_nsw)
	scope = 2;
	displayName = "FAST Ballistic (AOR1/Headset/NSW)";
	hiddenSelectionsTextures[] =
	{
		"\rhsusf\addons\rhsusf_infantry2\gear\head\opscore\data\opscore_aor1_co.paa",
		"\rhsusf\addons\rhsusf_infantry2\gear\head\opscore\data\comtac_co.paa",
		"\rhsusf\addons\rhsusf_infantry2\gear\head\opscore\data\nsw_co.paa",
		"",
		"",
		"\rhsusf\addons\rhsusf_infantry\gear\head\data\rhs_helmet_ach_acc_co.paa"
	};
};

// AOR 2
class rhsusf_opscore_aor2 : rhsusf_opscore_01
{
	AUTHOR_MACRO_DLC
	INVENTORY_PICTURE(rhsusf_opscore_aor2)
	scope = 2;
	displayName = "FAST Ballistic (AOR2)";
	hiddenSelectionsTextures[] =
	{
		"\rhsusf\addons\rhsusf_infantry2\gear\head\opscore\data\opscore_aor2_co.paa"
	};
};

class rhsusf_opscore_aor2_pelt : rhsusf_opscore_01
{
	AUTHOR_MACRO_DLC
	INVENTORY_PICTURE(rhsusf_opscore_aor2_pelt)
	scope = 2;
	displayName = "FAST Ballistic (AOR2/Headset)";
	hiddenSelectionsTextures[] =
	{
		"\rhsusf\addons\rhsusf_infantry2\gear\head\opscore\data\opscore_aor2_co.paa",
		"\rhsusf\addons\rhsusf_infantry2\gear\head\opscore\data\comtac_fg_co.paa"
	};
};

class rhsusf_opscore_aor2_pelt_nsw : rhsusf_opscore_01
{
	AUTHOR_MACRO_DLC
	INVENTORY_PICTURE(rhsusf_opscore_aor2_pelt_nsw)
	scope = 2;
	displayName = "FAST Ballistic (AOR2/Headset/NSW)";
	hiddenSelectionsTextures[] =
	{
		"\rhsusf\addons\rhsusf_infantry2\gear\head\opscore\data\opscore_aor2_co.paa",
		"\rhsusf\addons\rhsusf_infantry2\gear\head\opscore\data\comtac_fg_co.paa",
		"\rhsusf\addons\rhsusf_infantry2\gear\head\opscore\data\nsw_co.paa",
		"",
		"",
		"\rhsusf\addons\rhsusf_infantry\gear\head\data\rhs_helmet_ach_acc_co.paa"
	};
};

// Painted
class rhsusf_opscore_paint : rhsusf_opscore_01
{
	AUTHOR_MACRO_DLC
	INVENTORY_PICTURE(rhsusf_opscore_paint)
	scope = 2;
	displayName = "FAST Ballistic (Paint)";
	hiddenSelectionsTextures[] =
	{
		"\rhsusf\addons\rhsusf_infantry2\gear\head\opscore\data\opscore_Paint2_co.paa"
	};
};

class rhsusf_opscore_paint_pelt : rhsusf_opscore_01
{
	AUTHOR_MACRO_DLC
	INVENTORY_PICTURE(rhsusf_opscore_paint_pelt)
	scope = 2;
	displayName = "FAST Ballistic (Paint/Headset)";
	hiddenSelectionsTextures[] =
	{
		"\rhsusf\addons\rhsusf_infantry2\gear\head\opscore\data\opscore_Paint1_co.paa",
		"\rhsusf\addons\rhsusf_infantry2\gear\head\opscore\data\comtac_fg_co.paa"
	};
};

class rhsusf_opscore_paint_pelt_nsw : rhsusf_opscore_01
{
	AUTHOR_MACRO_DLC
	INVENTORY_PICTURE(rhsusf_opscore_paint_pelt_nsw)
	scope = 2;
	displayName = "FAST Ballistic (Paint/Headset/NSW)";
	hiddenSelectionsTextures[] =
	{
		"\rhsusf\addons\rhsusf_infantry2\gear\head\opscore\data\opscore_Paint3_co.paa",
		"\rhsusf\addons\rhsusf_infantry2\gear\head\opscore\data\comtac_fg_co.paa",
		"\rhsusf\addons\rhsusf_infantry2\gear\head\opscore\data\nsw_co.paa", // strobe
		"",
		"",
		"\rhsusf\addons\rhsusf_infantry\gear\head\data\rhs_helmet_ach_acc_co.paa"
	};
};

class rhsusf_opscore_paint_pelt_nsw_cam : rhsusf_opscore_01
{
	AUTHOR_MACRO_DLC
	INVENTORY_PICTURE(rhsusf_opscore_paint_pelt_nsw_cam)
	scope = 2;
	displayName = "FAST Ballistic (Paint/Headset/NSW/Cam)";
	hiddenSelectionsTextures[] =
	{
		"\rhsusf\addons\rhsusf_infantry2\gear\head\opscore\data\opscore_Paint3_co.paa",
		"\rhsusf\addons\rhsusf_infantry2\gear\head\opscore\data\comtac_fg_co.paa",
		"\rhsusf\addons\rhsusf_infantry2\gear\head\opscore\data\nsw_co.paa", // strobe
		"\rhsusf\addons\rhsusf_infantry\gear\head\data\rhs_helmet_ach_acc_co.paa", // camera
		"",
		"\rhsusf\addons\rhsusf_infantry\gear\head\data\rhs_helmet_ach_acc_co.paa"
	};
};

//- Fast Ops-Core Covered Variants

class rhsusf_opscore_cover : rhsusf_opscore_01
{
	AUTHOR_MACRO_DLC
	INVENTORY_PICTURE(rhsusf_opscore_cover)
	scope = 1;
	displayName = "FAST Ballistic Covered";
	model = "\rhsusf\addons\rhsusf_infantry2\gear\head\opscore\opscore_cover";

	hiddenSelections[] = {"opscore","comtac","NSW","contour","cover","ms2000"};
	hiddenSelectionsTextures[] =
	{
		"\rhsusf\addons\rhsusf_infantry2\gear\head\opscore\data\opscore_fg_co.paa", // base of helmet
		"\rhsusf\addons\rhsusf_infantry2\gear\head\opscore\data\comtac_co.paa", // mic
		"\rhsusf\addons\rhsusf_infantry2\gear\head\opscore\data\nsw_co.paa", // strobe
		"\rhsusf\addons\rhsusf_infantry\gear\head\data\rhs_helmet_ach_acc_co.paa", // camera
		"\rhsusf\addons\rhsusf_infantry2\gear\head\opscore\data\fs_cover_cb_co.paa", // cover
		""
	};

	class ItemInfo: ItemInfo
	{
		mass = 30;
		armor = 6;
		uniformModel = "\rhsusf\addons\rhsusf_infantry2\gear\head\opscore\opscore_cover";
		modelSides[] = {3, 1};
		hiddenSelections[] = {"opscore","comtac","NSW","contour","cover","ms2000"};
	};
};

// Multicam Cover
class rhsusf_opscore_mc_cover : rhsusf_opscore_cover
{
	AUTHOR_MACRO_DLC
	INVENTORY_PICTURE(rhsusf_opscore_mc_cover)
	scope = 2;
	displayName = "FAST Ballistic (Multicam Cover)";
	hiddenSelectionsTextures[] =
	{
		"\rhsusf\addons\rhsusf_infantry2\gear\head\opscore\data\opscore_co.paa", // base of helmet
		"",
		"",
		"",
		"\rhsusf\addons\rhsusf_infantry2\gear\head\opscore\data\fs_cover_co.paa", // cover
		"" // strobe
	};
};

class rhsusf_opscore_mc_cover_pelt : rhsusf_opscore_cover
{
	AUTHOR_MACRO_DLC
	INVENTORY_PICTURE(rhsusf_opscore_mc_cover_pelt)
	scope = 2;
	displayName = "FAST Ballistic (Multicam Cover/Headset)";
	hiddenSelectionsTextures[] =
	{
		"\rhsusf\addons\rhsusf_infantry2\gear\head\opscore\data\opscore_co.paa", // base of helmet
		"\rhsusf\addons\rhsusf_infantry2\gear\head\opscore\data\comtac_co.paa", // mic
		"",
		"",
		"\rhsusf\addons\rhsusf_infantry2\gear\head\opscore\data\fs_cover_co.paa", // cover
		""
	};
};

class rhsusf_opscore_mc_cover_pelt_nsw : rhsusf_opscore_cover
{
	AUTHOR_MACRO_DLC
	INVENTORY_PICTURE(rhsusf_opscore_mc_cover_pelt_nsw)
	scope = 2;
	displayName = "FAST Ballistic (Multicam Cover/Headset/NSW)";
	hiddenSelectionsTextures[] =
	{
		"\rhsusf\addons\rhsusf_infantry2\gear\head\opscore\data\opscore_co.paa", // base of helmet
		"\rhsusf\addons\rhsusf_infantry2\gear\head\opscore\data\comtac_co.paa", // mic
		"\rhsusf\addons\rhsusf_infantry2\gear\head\opscore\data\nsw_co.paa", // strobe cover
		"",
		"\rhsusf\addons\rhsusf_infantry2\gear\head\opscore\data\fs_cover_co.paa", // cover
		"\rhsusf\addons\rhsusf_infantry\gear\head\data\rhs_helmet_ach_acc_co.paa"
	};
};

class rhsusf_opscore_mc_cover_pelt_cam : rhsusf_opscore_cover
{
	AUTHOR_MACRO_DLC
	INVENTORY_PICTURE(rhsusf_opscore_mc_cover_pelt_cam)
	scope = 2;
	displayName = "FAST Ballistic (Multicam Cover/Headset/NSW/Cam)";
	hiddenSelectionsTextures[] =
	{
		"\rhsusf\addons\rhsusf_infantry2\gear\head\opscore\data\opscore_co.paa", // base of helmet
		"\rhsusf\addons\rhsusf_infantry2\gear\head\opscore\data\comtac_fg_co.paa", // mic
		"\rhsusf\addons\rhsusf_infantry2\gear\head\opscore\data\nsw_co.paa", // strobe cover
		"\rhsusf\addons\rhsusf_infantry\gear\head\data\rhs_helmet_ach_acc_co.paa", // camera
		"\rhsusf\addons\rhsusf_infantry2\gear\head\opscore\data\fs_cover_co.paa", // cover
		"\rhsusf\addons\rhsusf_infantry\gear\head\data\rhs_helmet_ach_acc_co.paa" // strobe
	};
};

// Ranger Green Cover
class rhsusf_opscore_rg_cover : rhsusf_opscore_cover
{
	AUTHOR_MACRO_DLC
	INVENTORY_PICTURE(rhsusf_opscore_rg_cover)
	scope = 2;
	displayName = "FAST Ballistic (Ranger Green Cover)";
	hiddenSelectionsTextures[] =
	{
		"\rhsusf\addons\rhsusf_infantry2\gear\head\opscore\data\opscore_fg_co.paa", // base of helmet
		"",
		"",
		"",
		"\rhsusf\addons\rhsusf_infantry2\gear\head\opscore\data\fs_cover_rg_co.paa", // cover
		""
	};
};

class rhsusf_opscore_rg_cover_pelt : rhsusf_opscore_cover
{
	AUTHOR_MACRO_DLC
	INVENTORY_PICTURE(rhsusf_opscore_rg_cover_pelt)
	scope = 2;
	displayName = "FAST Ballistic (Ranger Green Cover/Headset/NSW)";
	hiddenSelectionsTextures[] =
	{
		"\rhsusf\addons\rhsusf_infantry2\gear\head\opscore\data\opscore_fg_co.paa", // base of helmet
		"\rhsusf\addons\rhsusf_infantry2\gear\head\opscore\data\comtac_fg_co.paa", // mic
		"\rhsusf\addons\rhsusf_infantry2\gear\head\opscore\data\nsw_co.paa", // strobe
		"",
		"\rhsusf\addons\rhsusf_infantry2\gear\head\opscore\data\fs_cover_rg_co.paa", // cover
		"\rhsusf\addons\rhsusf_infantry\gear\head\data\rhs_helmet_ach_acc_co.paa"
	};
};

// Coyote Cover
class rhsusf_opscore_coy_cover : rhsusf_opscore_cover
{
	AUTHOR_MACRO_DLC
	INVENTORY_PICTURE(rhsusf_opscore_coy_cover)
	scope = 2;
	displayName = "FAST Ballistic (Coyote Cover)";
	hiddenSelectionsTextures[] =
	{
		"\rhsusf\addons\rhsusf_infantry2\gear\head\opscore\data\opscore_co.paa", // base of helmet
		"",
		"",
		"",
		"\rhsusf\addons\rhsusf_infantry2\gear\head\opscore\data\fs_cover_cb_co.paa", // cover
		""
	};
};

class rhsusf_opscore_coy_cover_pelt : rhsusf_opscore_cover
{
	AUTHOR_MACRO_DLC
	INVENTORY_PICTURE(rhsusf_opscore_coy_cover_pelt)
	scope = 2;
	displayName = "FAST Ballistic (Coyote Cover/Headset/NSW)";
	hiddenSelectionsTextures[] =
	{
		"\rhsusf\addons\rhsusf_infantry2\gear\head\opscore\data\opscore_co.paa", // base of helmet
		"\rhsusf\addons\rhsusf_infantry2\gear\head\opscore\data\comtac_fg_co.paa", // mic
		"\rhsusf\addons\rhsusf_infantry2\gear\head\opscore\data\nsw_co.paa", // strobe
		"",
		"\rhsusf\addons\rhsusf_infantry2\gear\head\opscore\data\fs_cover_cb_co.paa", // cover
		"\rhsusf\addons\rhsusf_infantry\gear\head\data\rhs_helmet_ach_acc_co.paa"
	};
};

/* Fast OPS-COREs Maritime collection */

class rhsusf_opscore_mar_01 : rhsusf_ach_helmet_ocp
{
	AUTHOR_MACRO_DLC
	INVENTORY_PICTURE(rhsusf_opscore_mar_01)
	scope = 1;

	descriptionshort = "OpsCore FAST Maritime Helmet";	model = "\rhsusf\addons\rhsusf_infantry2\gear\head\opscore\maritime";

	hiddenSelections[] = {"Camo1","Camo2","comtac"};
	hiddenSelectionsTextures[] =
	{
		"rhsusf\addons\rhsusf_infantry2\gear\head\opscore\data\maritime_tan.paa",
		"rhsusf\addons\rhsusf_infantry2\gear\head\opscore\data\tan2_co.paa",
		"rhsusf\addons\rhsusf_infantry2\gear\head\opscore\data\comtac_co.paa"
	};

	class ItemInfo : ItemInfo
	{
		mass = 30;
		armor = 6;
		uniformModel = "\rhsusf\addons\rhsusf_infantry2\gear\head\opscore\maritime";
		modelSides[] = {3, 1};
		hiddenSelections[] = {"Camo1","Camo2","comtac"};
	};
};

// Urban Tan
class rhsusf_opscore_mar_ut : rhsusf_opscore_mar_01
{
	AUTHOR_MACRO_DLC
	INVENTORY_PICTURE(rhsusf_opscore_mar_ut)
	scope = 2;
	displayName = "FAST Maritime (Urban Tan)";
	hiddenSelectionsTextures[] =
	{
		"rhsusf\addons\rhsusf_infantry2\gear\head\opscore\data\maritime_tan.paa",
		"rhsusf\addons\rhsusf_infantry2\gear\head\opscore\data\tan2_co.paa",
		""
	};
};

class rhsusf_opscore_mar_ut_pelt : rhsusf_opscore_mar_01
{
	AUTHOR_MACRO_DLC
	INVENTORY_PICTURE(rhsusf_opscore_mar_ut_pelt)
	scope = 2;
	displayName = "FAST Maritime (Urban Tan/Headset)";
	hiddenSelectionsTextures[] =
	{
		"rhsusf\addons\rhsusf_infantry2\gear\head\opscore\data\maritime_tan.paa",
		"rhsusf\addons\rhsusf_infantry2\gear\head\opscore\data\tan2_co.paa",
		"rhsusf\addons\rhsusf_infantry2\gear\head\opscore\data\comtac_co.paa"
	};
};

// Foliage Green
class rhsusf_opscore_mar_fg : rhsusf_opscore_mar_01
{
	AUTHOR_MACRO_DLC
	INVENTORY_PICTURE(rhsusf_opscore_mar_fg)
	scope = 2;
	displayName = "FAST Maritime (Foliage Green)";
	hiddenSelectionsTextures[] =
	{
		"rhsusf\addons\rhsusf_infantry2\gear\head\opscore\data\maritime_od.paa",
		"rhsusf\addons\rhsusf_infantry2\gear\head\opscore\data\od2_co.paa",
		""
	};
};

class rhsusf_opscore_mar_fg_pelt : rhsusf_opscore_mar_01
{
	AUTHOR_MACRO_DLC
	INVENTORY_PICTURE(rhsusf_opscore_mar_fg_pelt)
	scope = 2;
	displayName = "FAST Maritime (Foliage Green/Headset)";
	hiddenSelectionsTextures[] =
	{
		"rhsusf\addons\rhsusf_infantry2\gear\head\opscore\data\maritime_od.paa",
		"rhsusf\addons\rhsusf_infantry2\gear\head\opscore\data\od2_co.paa",
		"rhsusf\addons\rhsusf_infantry2\gear\head\opscore\data\comtac_fg_co.paa"
	};
};

//- Opscore Retro compatibility variants

class rhsusf_opscore_01_tan : rhsusf_opscore_01
{
	scope = 1;
};
class rhsusf_opscore_02 : rhsusf_opscore_01
{
	scope = 1;
};
class rhsusf_opscore_02_tan : rhsusf_opscore_01
{
	scope = 1;
};
class rhsusf_opscore_03_ocp : rhsusf_opscore_01
{
	scope = 1;
};
class rhsusf_opscore_04_ocp : rhsusf_opscore_01
{
	scope = 1;
};

class rhsusf_cvc_helmet : rhsusf_opscore_01
{
	AUTHOR_MACRO_DLC
	INVENTORY_PICTURE(rhsusf_cvc_helmet)
	displayName = "ACVC-H, MK-1697 (Tan)";
	
	CVC_GOGGLE_D_Macro

	scope = 2;

	hiddenSelectionsTextures[] = {"rhsusf\addons\rhsusf_infantry2\gear\head\cvc\data\rhs_cvc_co.paa"};	model = "\rhsusf\addons\rhsusf_infantry2\gear\head\cvc\rhs_cvc";


	class ItemInfo: ItemInfo
	{
		hiddenSelections[] = {"Camo1"};
		mass = 40;
		uniformModel = "\rhsusf\addons\rhsusf_infantry2\gear\head\cvc\rhs_cvc";
	};
};

class rhsusf_cvc_alt_helmet : rhsusf_cvc_helmet
{
	AUTHOR_MACRO_DLC
	INVENTORY_PICTURE(rhsusf_cvc_alt_helmet)
	displayName = "ACVC-H, MK-1697 (Tan/Alt.)";

	hiddenSelectionsTextures[] = {"rhsusf\addons\rhsusf_infantry2\gear\head\cvc\data\rhs_cvc_alt_co.paa"};
	model = "\rhsusf\addons\rhsusf_infantry2\gear\head\cvc\rhs_cvc_alt";

	class ItemInfo: ItemInfo
	{
		uniformModel = "\rhsusf\addons\rhsusf_infantry2\gear\head\cvc\rhs_cvc_alt";
	};

};

class rhsusf_cvc_green_helmet : rhsusf_cvc_helmet
{
	AUTHOR_MACRO_DLC
	INVENTORY_PICTURE(rhsusf_cvc_green_helmet)
	displayName = "ACVC-H, MK-1697";
	
	CVC_GOGGLE_WD_Macro

	hiddenSelectionsTextures[] = {"rhsusf\addons\rhsusf_infantry2\gear\head\cvc\data\rhs_cvc_green_co.paa"};
};

class rhsusf_cvc_green_alt_helmet : rhsusf_cvc_alt_helmet
{
	AUTHOR_MACRO_DLC
	INVENTORY_PICTURE(rhsusf_cvc_green_alt_helmet)
	displayName = "ACVC-H, MK-1697 (Alt.)";
	
	CVC_GOGGLE_WD_Macro

	hiddenSelectionsTextures[] = {"rhsusf\addons\rhsusf_infantry2\gear\head\cvc\data\rhs_cvc_green_alt_co.paa"};

};

class rhsusf_cvc_ess : rhsusf_cvc_helmet
{
	AUTHOR_MACRO_DLC
	INVENTORY_PICTURE(rhsusf_cvc_ess)
	displayName = "ACVC-H, MK-1697 (Tan/ESS)";
	
	CVC_EYEPRO_D_Macro

	hiddenSelectionsTextures[] = {"rhsusf\addons\rhsusf_infantry2\gear\head\cvc\data\rhs_cvc_alt_co.paa"};
	model = "\rhsusf\addons\rhsusf_infantry2\gear\head\cvc\rhs_cvc_alt_ess";

	class ItemInfo: ItemInfo
	{
		uniformModel = "\rhsusf\addons\rhsusf_infantry2\gear\head\cvc\rhs_cvc_alt_ess";
	};
};

class rhsusf_cvc_green_ess : rhsusf_cvc_ess
{
	AUTHOR_MACRO_DLC
	INVENTORY_PICTURE(rhsusf_cvc_green_ess)
	displayName = "ACVC-H, MK-1697 (ESS)";
	
	CVC_EYEPRO_WD_Macro

	hiddenSelectionsTextures[] = {"rhsusf\addons\rhsusf_infantry2\gear\head\cvc\data\rhs_cvc_green_alt_co.paa"};

};

class rhsusf_hgu56p : rhsusf_opscore_01
{
	AUTHOR_MACRO_DLC
	INVENTORY_PICTURE(rhsusf_hgu56p)
	displayName = "HGU-56/P (Olive)";
	
	DISABLE_FACEWEAR_MACRO

	scope = 2;

	hiddenSelections[] = {"camo","patches"};
	hiddenSelectionsTextures[] =
	{
		"\rhsusf\addons\rhsusf_infantry2\gear\head\hgu56\Data\rhs_hgu56_olv_co.paa",
		"\rhsusf\addons\rhsusf_infantry2\gear\head\hgu56\Data\rhs_hgu56_patches_co.paa"
	};
	hiddenSelectionsMaterials[] =
	{
		"\rhsusf\addons\rhsusf_infantry2\gear\head\hgu56\Data\rhs_hgu56.rvmat",
		"\rhsusf\addons\rhsusf_infantry2\gear\head\hgu56\Data\rhs_hgu56_patches.rvmat"
	};	model = "rhsusf\addons\rhsusf_infantry2\gear\head\hgu56\rhs_hgu56";

	class ItemInfo: ItemInfo
	{
		hiddenSelections[] = {"camo","patches"};
		mass = 40;
		uniformModel = "rhsusf\addons\rhsusf_infantry2\gear\head\hgu56\rhs_hgu56";
	};
};
class rhsusf_hgu56p_visor : rhsusf_hgu56p
{
	AUTHOR_MACRO_DLC
	INVENTORY_PICTURE(rhsusf_hgu56p_visor)
	displayName = "HGU-56/P (Olive/Visor)";	model = "rhsusf\addons\rhsusf_infantry2\gear\head\hgu56\rhs_hgu56_visor";

	class ItemInfo: ItemInfo
	{
		uniformModel = "rhsusf\addons\rhsusf_infantry2\gear\head\hgu56\rhs_hgu56_visor";
	};
};
class rhsusf_hgu56p_mask : rhsusf_hgu56p
{
	AUTHOR_MACRO_DLC
	INVENTORY_PICTURE(rhsusf_hgu56p_mask)
	displayName = "HGU-56/P (Olive/Mask)";	model = "rhsusf\addons\rhsusf_infantry2\gear\head\hgu56\rhs_hgu56_mask";

	class ItemInfo: ItemInfo
	{
		uniformModel = "rhsusf\addons\rhsusf_infantry2\gear\head\hgu56\rhs_hgu56_mask";
	};
};
class rhsusf_hgu56p_visor_mask : rhsusf_hgu56p
{
	AUTHOR_MACRO_DLC
	INVENTORY_PICTURE(rhsusf_hgu56p_visor_mask)
	displayName = "HGU-56/P (Olive/Visor/Mask)";	model = "rhsusf\addons\rhsusf_infantry2\gear\head\hgu56\rhs_hgu56_visor_mask";

	class ItemInfo: ItemInfo
	{
		uniformModel = "rhsusf\addons\rhsusf_infantry2\gear\head\hgu56\rhs_hgu56_visor_mask";
	};
};
class rhsusf_hgu56p_visor_mask_skull : rhsusf_hgu56p_visor_mask
{
	AUTHOR_MACRO_DLC
	INVENTORY_PICTURE(rhsusf_hgu56p_visor_mask_skull)
	displayName = "HGU-56/P (Olive/Visor/Mask/Skull)";
	hiddenSelectionsTextures[] = {"\rhsusf\addons\rhsusf_infantry2\gear\head\hgu56\Data\rhs_hgu56_olv_skull_co.paa"};
};
class rhsusf_hgu56p_mask_skull : rhsusf_hgu56p_mask
{
	AUTHOR_MACRO_DLC
	INVENTORY_PICTURE(rhsusf_hgu56p_mask_skull)
	displayName = "HGU-56/P (Olive/Mask/Skull)";
	hiddenSelectionsTextures[] = {"\rhsusf\addons\rhsusf_infantry2\gear\head\hgu56\Data\rhs_hgu56_olv_skull_co.paa"};
};
class rhsusf_hgu56p_visor_mask_mo : rhsusf_hgu56p_visor_mask
{
	AUTHOR_MACRO_DLC
	INVENTORY_PICTURE(rhsusf_hgu56p_visor_mask_mo)
	displayName = "HGU-56/P (Olive/Visor/Mask/Mo)";
	hiddenSelectionsTextures[] = {"\rhsusf\addons\rhsusf_infantry2\gear\head\hgu56\Data\rhs_hgu56_olv_mo_co.paa"};
};
class rhsusf_hgu56p_mask_mo : rhsusf_hgu56p_mask
{
	AUTHOR_MACRO_DLC
	INVENTORY_PICTURE(rhsusf_hgu56p_mask_mo)
	displayName = "HGU-56/P (Olive/Mask/Mo)";
	hiddenSelectionsTextures[] = {"\rhsusf\addons\rhsusf_infantry2\gear\head\hgu56\Data\rhs_hgu56_olv_mo_co.paa"};
};
class rhsusf_hgu56p_mask_smiley : rhsusf_hgu56p
{
	AUTHOR_MACRO_DLC
	INVENTORY_PICTURE(rhsusf_hgu56p_mask_smiley)
	displayName = "HGU-56/P (Smiley/Mask)";

	hiddenSelectionsTextures[] = {"\rhsusf\addons\rhsusf_infantry2\gear\head\hgu56\Data\rhs_hgu56_smiley_co.paa"};

	model = "rhsusf\addons\rhsusf_infantry2\gear\head\hgu56\rhs_hgu56_mask";

	class ItemInfo: ItemInfo
	{
		uniformModel = "rhsusf\addons\rhsusf_infantry2\gear\head\hgu56\rhs_hgu56_mask";
	};
};
class rhsusf_hgu56p_visor_mask_smiley : rhsusf_hgu56p_mask_smiley
{
	AUTHOR_MACRO_DLC
	INVENTORY_PICTURE(rhsusf_hgu56p_visor_mask_smiley)
	displayName = "HGU-56/P (Smiley/Visor/Mask)";	model = "rhsusf\addons\rhsusf_infantry2\gear\head\hgu56\rhs_hgu56_visor_mask";

	class ItemInfo: ItemInfo
	{
		uniformModel = "rhsusf\addons\rhsusf_infantry2\gear\head\hgu56\rhs_hgu56_visor_mask";
	};
};

class rhsusf_hgu56p_black : rhsusf_hgu56p
{
	AUTHOR_MACRO_DLC
	INVENTORY_PICTURE(rhsusf_hgu56p_black)
	displayName = "HGU-56/P (Black)";

	hiddenSelectionsTextures[] = {"\rhsusf\addons\rhsusf_infantry2\gear\head\hgu56\Data\rhs_hgu56_blk_co.paa"};

	model = "rhsusf\addons\rhsusf_infantry2\gear\head\hgu56\rhs_hgu56_visor_mask";

	class ItemInfo: ItemInfo
	{
		uniformModel = "rhsusf\addons\rhsusf_infantry2\gear\head\hgu56\rhs_hgu56";
	};
};
class rhsusf_hgu56p_visor_black : rhsusf_hgu56p_black
{
	AUTHOR_MACRO_DLC
	INVENTORY_PICTURE(rhsusf_hgu56p_visor_black)
	displayName = "HGU-56/P (Black/Visor)";	model = "rhsusf\addons\rhsusf_infantry2\gear\head\hgu56\rhs_hgu56_visor";

	class ItemInfo: ItemInfo
	{
		uniformModel = "rhsusf\addons\rhsusf_infantry2\gear\head\hgu56\rhs_hgu56_visor";
	};
};
class rhsusf_hgu56p_mask_black : rhsusf_hgu56p_black
{
	AUTHOR_MACRO_DLC
	INVENTORY_PICTURE(rhsusf_hgu56p_mask_black)
	displayName = "HGU-56/P (Black/Mask)";	model = "rhsusf\addons\rhsusf_infantry2\gear\head\hgu56\rhs_hgu56_mask";

	class ItemInfo: ItemInfo
	{
		uniformModel = "rhsusf\addons\rhsusf_infantry2\gear\head\hgu56\rhs_hgu56_mask";
	};
};
class rhsusf_hgu56p_visor_mask_black : rhsusf_hgu56p_black
{
	AUTHOR_MACRO_DLC
	INVENTORY_PICTURE(rhsusf_hgu56p_visor_mask_black)
	displayName = "HGU-56/P (Black/Visor/Mask)";

	hiddenSelections[] = {"camo","patches"};
	hiddenSelectionsTextures[] =
	{
		"\rhsusf\addons\rhsusf_infantry2\gear\head\hgu56\Data\rhs_hgu56_blk_co.paa",
		"\rhsusf\addons\rhsusf_infantry2\gear\head\hgu56\Data\rhs_hgu56_patches_usPirate_co.paa"
	};
	hiddenSelectionsMaterials[] =
	{
		"\rhsusf\addons\rhsusf_infantry2\gear\head\hgu56\Data\rhs_hgu56.rvmat",
		"\rhsusf\addons\rhsusf_infantry2\gear\head\hgu56\Data\rhs_hgu56_patches.rvmat"
	};	model = "rhsusf\addons\rhsusf_infantry2\gear\head\hgu56\rhs_hgu56_visor_mask";

	class ItemInfo: ItemInfo
	{
		hiddenSelections[] = {"camo","patches"};
		uniformModel = "rhsusf\addons\rhsusf_infantry2\gear\head\hgu56\rhs_hgu56_visor_mask";
	};
};
class rhsusf_hgu56p_visor_mask_black_skull : rhsusf_hgu56p_visor_mask_black
{
	AUTHOR_MACRO_DLC
	INVENTORY_PICTURE(rhsusf_hgu56p_visor_mask_black_skull)
	displayName = "HGU-56/P (Black/Visor/Mask/Skull)";
	hiddenSelectionsTextures[] =
	{
		"\rhsusf\addons\rhsusf_infantry2\gear\head\hgu56\Data\rhs_hgu56_blk_skull_co.paa",
		"\rhsusf\addons\rhsusf_infantry2\gear\head\hgu56\Data\rhs_hgu56_patches_usPirate_co.paa"
	};
	hiddenSelectionsMaterials[] =
	{
		"\rhsusf\addons\rhsusf_infantry2\gear\head\hgu56\Data\rhs_hgu56.rvmat",
		"\rhsusf\addons\rhsusf_infantry2\gear\head\hgu56\Data\rhs_hgu56_patches.rvmat"
	};
};
class rhsusf_hgu56p_mask_black_skull : rhsusf_hgu56p_visor_mask_black_skull
{
	AUTHOR_MACRO_DLC
	INVENTORY_PICTURE(rhsusf_hgu56p_mask_black_skull)
	displayName = "HGU-56/P (Black/Mask/Skull)";	model = "rhsusf\addons\rhsusf_infantry2\gear\head\hgu56\rhs_hgu56_mask";

	class ItemInfo: ItemInfo
	{
		uniformModel = "rhsusf\addons\rhsusf_infantry2\gear\head\hgu56\rhs_hgu56_mask";
	};
};
class rhsusf_hgu56p_visor_mask_Empire_black : rhsusf_hgu56p_black
{
	AUTHOR_MACRO_DLC
	INVENTORY_PICTURE(rhsusf_hgu56p_visor_mask_Empire_black)
	displayName = "HGU-56/P (Black/Visor/Mask/Empire)";

	hiddenSelections[] = {"camo","patches"};
	hiddenSelectionsTextures[] =
	{
		"\rhsusf\addons\rhsusf_infantry2\gear\head\hgu56\Data\rhs_hgu56_blk_co.paa",
		"\rhsusf\addons\rhsusf_infantry2\gear\head\hgu56\Data\rhs_hgu56_patches_empire_co.paa"
	};
	hiddenSelectionsMaterials[] =
	{
		"\rhsusf\addons\rhsusf_infantry2\gear\head\hgu56\Data\rhs_hgu56.rvmat",
		"\rhsusf\addons\rhsusf_infantry2\gear\head\hgu56\Data\rhs_hgu56_patches.rvmat"
	};	model = "rhsusf\addons\rhsusf_infantry2\gear\head\hgu56\rhs_hgu56_visor_mask";

	class ItemInfo: ItemInfo
	{
		hiddenSelections[] = {"camo","patches"};
		uniformModel = "rhsusf\addons\rhsusf_infantry2\gear\head\hgu56\rhs_hgu56_visor_mask";
	};
};

class rhsusf_hgu56p_green : rhsusf_hgu56p
{
	AUTHOR_MACRO_DLC
	INVENTORY_PICTURE(rhsusf_hgu56p_green)
	displayName = "HGU-56/P (Green)";

	hiddenSelectionsTextures[] = {"\rhsusf\addons\rhsusf_infantry2\gear\head\hgu56\Data\rhs_hgu56_green_co.paa"};	model = "rhsusf\addons\rhsusf_infantry2\gear\head\hgu56\rhs_hgu56_visor_mask";

	class ItemInfo: ItemInfo
	{
		uniformModel = "rhsusf\addons\rhsusf_infantry2\gear\head\hgu56\rhs_hgu56";
	};
};
class rhsusf_hgu56p_visor_green : rhsusf_hgu56p_green
{
	AUTHOR_MACRO_DLC
	INVENTORY_PICTURE(rhsusf_hgu56p_visor_green)
	displayName = "HGU-56/P (Green/Visor)";	model = "rhsusf\addons\rhsusf_infantry2\gear\head\hgu56\rhs_hgu56_visor";

	class ItemInfo: ItemInfo
	{
		uniformModel = "rhsusf\addons\rhsusf_infantry2\gear\head\hgu56\rhs_hgu56_visor";
	};
};
class rhsusf_hgu56p_mask_green : rhsusf_hgu56p_green
{
	AUTHOR_MACRO_DLC
	INVENTORY_PICTURE(rhsusf_hgu56p_mask_green)
	displayName = "HGU-56/P (Green/Mask)";	model = "rhsusf\addons\rhsusf_infantry2\gear\head\hgu56\rhs_hgu56_mask";

	class ItemInfo: ItemInfo
	{
		uniformModel = "rhsusf\addons\rhsusf_infantry2\gear\head\hgu56\rhs_hgu56_mask";
	};
};
class rhsusf_hgu56p_visor_mask_green : rhsusf_hgu56p_green
{
	AUTHOR_MACRO_DLC
	INVENTORY_PICTURE(rhsusf_hgu56p_visor_mask_green)
	displayName = "HGU-56/P (Green/Visor/Mask)";	model = "rhsusf\addons\rhsusf_infantry2\gear\head\hgu56\rhs_hgu56_visor_mask";

	class ItemInfo: ItemInfo
	{
		uniformModel = "rhsusf\addons\rhsusf_infantry2\gear\head\hgu56\rhs_hgu56_visor_mask";
	};
};
class rhsusf_hgu56p_mask_green_mo : rhsusf_hgu56p_mask_green
{
	AUTHOR_MACRO_DLC
	INVENTORY_PICTURE(rhsusf_hgu56p_mask_green_mo)
	displayName = "HGU-56/P (Green/Mask/Mo)";
	hiddenSelectionsTextures[] = {"\rhsusf\addons\rhsusf_infantry2\gear\head\hgu56\Data\rhs_hgu56_green_mo_co.paa"};
};
class rhsusf_hgu56p_visor_mask_green_mo : rhsusf_hgu56p_visor_mask_green
{
	AUTHOR_MACRO_DLC
	INVENTORY_PICTURE(rhsusf_hgu56p_visor_mask_green_mo)
	displayName = "HGU-56/P (Green/Visor/Mask/Mo)";
	hiddenSelectionsTextures[] = {"\rhsusf\addons\rhsusf_infantry2\gear\head\hgu56\Data\rhs_hgu56_green_mo_co.paa"};
};

class rhsusf_hgu56p_tan : rhsusf_hgu56p
{
	AUTHOR_MACRO_DLC
	INVENTORY_PICTURE(rhsusf_hgu56p_tan)
	displayName = "HGU-56/P (Tan)";

	hiddenSelectionsTextures[] = {"\rhsusf\addons\rhsusf_infantry2\gear\head\hgu56\Data\rhs_hgu56_tan_co.paa"};	model = "rhsusf\addons\rhsusf_infantry2\gear\head\hgu56\rhs_hgu56_visor_mask";

	class ItemInfo: ItemInfo
	{
		uniformModel = "rhsusf\addons\rhsusf_infantry2\gear\head\hgu56\rhs_hgu56";
	};
};
class rhsusf_hgu56p_visor_tan : rhsusf_hgu56p_tan
{
	AUTHOR_MACRO_DLC
	INVENTORY_PICTURE(rhsusf_hgu56p_visor_tan)
	displayName = "HGU-56/P (Tan/Visor)";	
	model = "rhsusf\addons\rhsusf_infantry2\gear\head\hgu56\rhs_hgu56_visor";

	class ItemInfo: ItemInfo
	{
		uniformModel = "rhsusf\addons\rhsusf_infantry2\gear\head\hgu56\rhs_hgu56_visor";
	};
};
class rhsusf_hgu56p_mask_tan : rhsusf_hgu56p_tan
{
	AUTHOR_MACRO_DLC
	INVENTORY_PICTURE(rhsusf_hgu56p_mask_tan)
	displayName = "HGU-56/P (Tan/Mask)";	
	model = "rhsusf\addons\rhsusf_infantry2\gear\head\hgu56\rhs_hgu56_mask";

	class ItemInfo: ItemInfo
	{
		uniformModel = "rhsusf\addons\rhsusf_infantry2\gear\head\hgu56\rhs_hgu56_mask";
	};
};
class rhsusf_hgu56p_visor_mask_tan : rhsusf_hgu56p_tan
{
	AUTHOR_MACRO_DLC
	INVENTORY_PICTURE(rhsusf_hgu56p_visor_mask_tan)
	displayName = "HGU-56/P (Tan/Visor/Mask)";	
	model = "rhsusf\addons\rhsusf_infantry2\gear\head\hgu56\rhs_hgu56_visor_mask";

	class ItemInfo: ItemInfo
	{
		uniformModel = "rhsusf\addons\rhsusf_infantry2\gear\head\hgu56\rhs_hgu56_visor_mask";
	};
};

class rhsusf_hgu56p_pink : rhsusf_hgu56p
{
	AUTHOR_MACRO_DLC
	INVENTORY_PICTURE(rhsusf_hgu56p_pink)
	displayName = "HGU-56/P (Pink)";

	hiddenSelectionsMaterials[] = {"\rhsusf\addons\rhsusf_infantry2\gear\head\hgu56\Data\rhs_hgu56_glossy.rvmat"};
	hiddenSelectionsTextures[] = {"\rhsusf\addons\rhsusf_infantry2\gear\head\hgu56\Data\rhs_hgu56_pink_co.paa"};	
	model = "rhsusf\addons\rhsusf_infantry2\gear\head\hgu56\rhs_hgu56_visor_mask";

	class ItemInfo: ItemInfo
	{
		uniformModel = "rhsusf\addons\rhsusf_infantry2\gear\head\hgu56\rhs_hgu56";
	};
};
class rhsusf_hgu56p_visor_pink : rhsusf_hgu56p_pink
{
	AUTHOR_MACRO_DLC
	INVENTORY_PICTURE(rhsusf_hgu56p_visor_pink)
	displayName = "HGU-56/P (Pink/Visor)";	model = "rhsusf\addons\rhsusf_infantry2\gear\head\hgu56\rhs_hgu56_visor";

	class ItemInfo: ItemInfo
	{
		uniformModel = "rhsusf\addons\rhsusf_infantry2\gear\head\hgu56\rhs_hgu56_visor";
	};
};
class rhsusf_hgu56p_mask_pink : rhsusf_hgu56p_pink
{
	AUTHOR_MACRO_DLC
	INVENTORY_PICTURE(rhsusf_hgu56p_mask_pink)
	displayName = "HGU-56/P (Pink/Mask)";	model = "rhsusf\addons\rhsusf_infantry2\gear\head\hgu56\rhs_hgu56_mask";

	class ItemInfo: ItemInfo
	{
		uniformModel = "rhsusf\addons\rhsusf_infantry2\gear\head\hgu56\rhs_hgu56_mask";
	};
};
class rhsusf_hgu56p_visor_mask_pink : rhsusf_hgu56p_pink
{
	AUTHOR_MACRO_DLC
	INVENTORY_PICTURE(rhsusf_hgu56p_visor_mask_pink)
	displayName = "HGU-56/P (Pink/Visor/Mask)";	model = "rhsusf\addons\rhsusf_infantry2\gear\head\hgu56\rhs_hgu56_visor_mask";

	class ItemInfo: ItemInfo
	{
		uniformModel = "rhsusf\addons\rhsusf_infantry2\gear\head\hgu56\rhs_hgu56_visor_mask";
	};
};

class rhsusf_hgu56p_usa : rhsusf_hgu56p
{
	AUTHOR_MACRO_DLC
	INVENTORY_PICTURE(rhsusf_hgu56p_usa)
	displayName = "HGU-56/P (USA)";

	hiddenSelectionsMaterials[] = {"\rhsusf\addons\rhsusf_infantry2\gear\head\hgu56\Data\rhs_hgu56_glossy.rvmat"};
	hiddenSelectionsTextures[] = {"\rhsusf\addons\rhsusf_infantry2\gear\head\hgu56\Data\rhs_hgu56_usa_co.paa"};	model = "rhsusf\addons\rhsusf_infantry2\gear\head\hgu56\rhs_hgu56_visor_mask";

	class ItemInfo: ItemInfo
	{
		uniformModel = "rhsusf\addons\rhsusf_infantry2\gear\head\hgu56\rhs_hgu56";
	};
};
class rhsusf_hgu56p_visor_usa : rhsusf_hgu56p_usa
{
	AUTHOR_MACRO_DLC
	INVENTORY_PICTURE(rhsusf_hgu56p_visor_usa)
	displayName = "HGU-56/P (USA/Visor)";	model = "rhsusf\addons\rhsusf_infantry2\gear\head\hgu56\rhs_hgu56_visor";

	class ItemInfo: ItemInfo
	{
		uniformModel = "rhsusf\addons\rhsusf_infantry2\gear\head\hgu56\rhs_hgu56_visor";
	};
};

class rhsusf_hgu56p_saf : rhsusf_hgu56p
{
	AUTHOR_MACRO_DLC
	INVENTORY_PICTURE(rhsusf_hgu56p_saf)
	displayName = "HGU-56/P (SAF)";

	hiddenSelectionsTextures[] =
	{
		"\rhsusf\addons\rhsusf_infantry2\gear\head\hgu56\Data\rhs_hgu56_saf_co.paa"
	};	model = "rhsusf\addons\rhsusf_infantry2\gear\head\hgu56\rhs_hgu56_visor_mask";

	class ItemInfo: ItemInfo
	{
		uniformModel = "rhsusf\addons\rhsusf_infantry2\gear\head\hgu56\rhs_hgu56";
	};
};
class rhsusf_hgu56p_visor_saf : rhsusf_hgu56p_saf
{
	AUTHOR_MACRO_DLC
	INVENTORY_PICTURE(rhsusf_hgu56p_visor_saf)
	displayName = "HGU-56/P (SAF/Visor)";

	hiddenSelections[] = {"camo","visor"};
	hiddenSelectionsTextures[] =
	{
		"\rhsusf\addons\rhsusf_infantry2\gear\head\hgu56\Data\rhs_hgu56_saf_co.paa",
		"\rhsusf\addons\rhsusf_infantry2\gear\head\hgu56\Data\rhs_hgu56_visor_yellow_ca.paa"
	};
	hiddenSelectionsMaterials[] =
	{
		"\rhsusf\addons\rhsusf_infantry2\gear\head\hgu56\Data\rhs_hgu56.rvmat",
		"\rhsusf\addons\rhsusf_infantry2\gear\head\hgu56\Data\rhs_hgu56_visor.rvmat"
	};	model = "rhsusf\addons\rhsusf_infantry2\gear\head\hgu56\rhs_hgu56_visor";

	class ItemInfo: ItemInfo
	{
		hiddenSelections[] = {"camo","visor"};
		uniformModel = "rhsusf\addons\rhsusf_infantry2\gear\head\hgu56\rhs_hgu56_visor";
	};
};
class rhsusf_hgu56p_mask_saf : rhsusf_hgu56p_saf
{
	AUTHOR_MACRO_DLC
	INVENTORY_PICTURE(rhsusf_hgu56p_mask_saf)
	displayName = "HGU-56/P (SAF/Mask)";	model = "rhsusf\addons\rhsusf_infantry2\gear\head\hgu56\rhs_hgu56_mask";

	class ItemInfo: ItemInfo
	{
		uniformModel = "rhsusf\addons\rhsusf_infantry2\gear\head\hgu56\rhs_hgu56_mask";
	};
};
class rhsusf_hgu56p_visor_mask_saf : rhsusf_hgu56p_visor_saf
{
	AUTHOR_MACRO_DLC
	INVENTORY_PICTURE(rhsusf_hgu56p_visor_mask_saf)
	displayName = "HGU-56/P (SAF/Visor/Mask)";	model = "rhsusf\addons\rhsusf_infantry2\gear\head\hgu56\rhs_hgu56_visor_mask";

	class ItemInfo: ItemInfo
	{
		uniformModel = "rhsusf\addons\rhsusf_infantry2\gear\head\hgu56\rhs_hgu56_visor_mask";
	};
};
class rhsusf_hgu56p_white : rhsusf_hgu56p
{
	AUTHOR_MACRO_DLC
	INVENTORY_PICTURE(rhsusf_hgu56p_white)
	displayName = "HGU-56/P (White)";

	hiddenSelectionsMaterials[] = {"\rhsusf\addons\rhsusf_infantry2\gear\head\hgu56\Data\rhs_hgu56_glossy.rvmat"};
	hiddenSelectionsTextures[] = {"\rhsusf\addons\rhsusf_infantry2\gear\head\hgu56\Data\rhs_hgu56_white_co.paa"};	model = "rhsusf\addons\rhsusf_infantry2\gear\head\hgu56\rhs_hgu56_visor_mask";

	class ItemInfo: ItemInfo
	{
		uniformModel = "rhsusf\addons\rhsusf_infantry2\gear\head\hgu56\rhs_hgu56";
	};
};
class rhsusf_hgu56p_visor_white : rhsusf_hgu56p_white
{
	AUTHOR_MACRO_DLC
	INVENTORY_PICTURE(rhsusf_hgu56p_visor_white)
	displayName = "HGU-56/P (White/Visor)";	model = "rhsusf\addons\rhsusf_infantry2\gear\head\hgu56\rhs_hgu56_visor";

	class ItemInfo: ItemInfo
	{
		uniformModel = "rhsusf\addons\rhsusf_infantry2\gear\head\hgu56\rhs_hgu56_visor";
	};
};

//nvg

class NVGoggles;

class rhsusf_ANPVS_14: NVGoggles
{
	AUTHOR_MACRO_DLC
	INVENTORY_PICTURE(rhsusf_ANPVS_14)

	Scope=2;
	ScopeCurator=2;

	displayName="AN/PVS-14";

	modelOptics="\rhsusf\addons\rhsusf_infantry\gear\nvg\ANPVS_14_opt";
	model="\rhsusf\addons\rhsusf_infantry\gear\nvg\ANPVS_14_UP";


	descriptionShort="AN/PVS-14 Monocular Night Vision Device";

	class ItemInfo
	{
		type=616;
		hmdType=0;
		uniformModel="\rhsusf\addons\rhsusf_infantry\gear\nvg\ANPVS_14_DOWN";
		modelOff="\rhsusf\addons\rhsusf_infantry\gear\nvg\ANPVS_14_UP";
		mass=20;
	};
};

class rhsusf_ANPVS_15: rhsusf_ANPVS_14
{
	AUTHOR_MACRO_DLC
	INVENTORY_PICTURE(rhsusf_ANPVS_15)
	displayName="AN/PVS-15";

	//modelOptics="\rhsusf\addons\rhsusf_infantry\gear\nvg\";

	modelOptics = "\A3\weapons_f\reticle\optics_night";
	model="\rhsusf\addons\rhsusf_infantry\gear\nvg\ANPVS_15_UP";


	descriptionShort="AN/PVS-15 Night Vision Binocular";

	class ItemInfo
	{
		type=616;
		hmdType=0;
		uniformModel="\rhsusf\addons\rhsusf_infantry\gear\nvg\ANPVS_15_DOWN";
		modelOff="\rhsusf\addons\rhsusf_infantry\gear\nvg\ANPVS_15_UP";
		mass=20;
	};
};

class rhsusf_Rhino: rhsusf_ANPVS_14
{
	AUTHOR_MACRO_DLC
	INVENTORY_PICTURE(rhsusf_Rhino)
	displayName="Rhino mount";

	//modelOptics="\rhsusf\addons\rhsusf_infantry\gear\nvg\";

	modelOptics = "\A3\Weapons_F\empty";
	model="\rhsusf\addons\rhsusf_infantry\gear\nvg\Rhino_UP";

	visionMode[] = {"Normal","Normal"};

	descriptionShort="Empty Rhino NVG Mount";

	class ItemInfo
	{
		type=616;
		hmdType=0;
		uniformModel="\rhsusf\addons\rhsusf_infantry\gear\nvg\Rhino_DOWN";
		modelOff="\rhsusf\addons\rhsusf_infantry\gear\nvg\Rhino_UP";
		mass=5;
	};
};

class rhsusf_anvis_nvg_bc_caps : NVGoggles
{
	AUTHOR_MACRO_DLC
	INVENTORY_PICTURE(rhsusf_anvis_nvg_bc_caps)

	Scope=1;
	ScopeCurator=1;

	displayName = "ANVIS-9 (Buttler Creek flip caps)";

	nameSound = "nvgoggles";
	simulation = "NVGoggles";
	showEmpty = 0;
	muzzlePos = "usti hlavne";	// position and direction of muzzle
	muzzleEnd = "konec hlavne";
	value = 5;
	opticsZoomMin = 1;
	opticsZoomMax = 1;

	modelOptics = "\A3\weapons_f\reticle\optics_night";
	model = "\rhsusf\addons\rhsusf_infantry2\gear\head\anvis\ANVIS_bc_caps_up";

	class ItemInfo
	{
		type = 616;
		hmdType = 0;
		uniformModel = "\rhsusf\addons\rhsusf_infantry2\gear\head\anvis\ANVIS_bc_caps_down.p3d";
		modelOff = "\rhsusf\addons\rhsusf_infantry2\gear\head\anvis\ANVIS_bc_caps_up.p3d";
		mass = 4;
	};
};

class rhsusf_ANVIS : NVGoggles
{
	AUTHOR_MACRO_DLC
	INVENTORY_PICTURE(rhsusf_ANVIS)

	Scope=1;
	ScopeCurator=1;

	displayName="ANVIS-9";
	descriptionShort="ANVIS-9 Night Vision Binocular";

	nameSound = "nvgoggles";
	simulation = "NVGoggles";

	showEmpty = 0;
	muzzlePos = "usti hlavne";	// position and direction of muzzle
	muzzleEnd = "konec hlavne";
	value = 5;
	opticsZoomMin = 1;
	opticsZoomMax = 1;

	modelOptics = "\A3\weapons_f\reticle\optics_night";

	model = "\rhsusf\addons\rhsusf_infantry2\gear\head\anvis\ANVIS_up";


	class ItemInfo
	{
		type=616;
		hmdType=0;
		uniformModel = "\rhsusf\addons\rhsusf_infantry2\gear\head\anvis\ANVIS_down";
		modelOff = "\rhsusf\addons\rhsusf_infantry2\gear\head\anvis\ANVIS_up";
		mass=20;
	};
};

///USMC///

class rhsusf_mich_helmet_marpatwd : H_HelmetB
{
	AUTHOR_MACRO_DLC
	INVENTORY_PICTURE(rhsusf_mich_helmet_marpatwd)
	scope = 2;
	displayName = "MICH 2000 MARPAT-WD";
	
	EYEPRO_Macro

	model = "\rhsusf\addons\rhsusf_infantry\gear\head\mich_01";


	hiddenSelections[] = {"Camo1","Camo2"};
	hiddenSelectionsTextures[] = {
		"rhsusf\addons\rhsusf_infantry\gear\head\data\mich_covered_rhino_wd_co.paa",
		"rhsusf\addons\rhsusf_infantry\gear\head\data\ach_acc_tan_co.paa"
	};

	class ItemInfo: ItemInfo
	{
		hiddenSelections[] = {"Camo1","Camo2"};
		uniformModel = "\rhsusf\addons\rhsusf_infantry\gear\head\mich_01";
		allowedSlots[] = {801,901,701,605};
		modelSides[] = {6};
		mass = 40;
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
#define MARPAT_D_TEX1 \
	hiddenSelectionsTextures[] = {\
		"rhsusf\addons\rhsusf_infantry\gear\head\data\mich_covered_rhino_des_co.paa",\
		"rhsusf\addons\rhsusf_infantry\gear\head\data\ach_acc_tan_co.paa"\
	};

	/*hiddenSelectionsMaterials[] = {\
		"rhsusf\addons\rhsusf_infantry\gear\head\data\rhs_helmet_mich_cov_d.rvmat",\
		"rhsusf\addons\rhsusf_infantry\gear\head\data\rhs_helmet_ach_acc.rvmat"\
	};*/
#define MARPAT_D_TEX2 \
	hiddenSelectionsTextures[] = {\
		"rhsusf\addons\rhsusf_infantry\gear\head\data\mich_covered_norotos_des_co.paa",\
		"rhsusf\addons\rhsusf_infantry\gear\head\data\mich_acc_od_co.paa"\
	};
	/*hiddenSelectionsMaterials[] = {\
		"rhsusf\addons\rhsusf_infantry\gear\head\data\rhs_helmet_mich_norotos_cov_d.rvmat",\
		"rhsusf\addons\rhsusf_infantry\gear\head\data\mich_acc.rvmat"\
	};*/
#define MARPAT_D_TEX3 \
	hiddenSelectionsTextures[] = {\
		"rhsusf\addons\rhsusf_infantry\gear\head\data\mich_covered_norotos_arc_des_co.paa",\
		"rhsusf\addons\rhsusf_infantry\gear\head\data\mich_acc_od_co.paa"\
	};

/*	hiddenSelectionsMaterials[] = {\
		"rhsusf\addons\rhsusf_infantry\gear\head\data\rhs_helmet_mich_norotos_cov_d.rvmat",\
		"rhsusf\addons\rhsusf_infantry\gear\head\data\mich_acc.rvmat"\
	};*/

class rhsusf_mich_helmet_marpatwd_headset : rhsusf_mich_helmet_marpatwd
{
	AUTHOR_MACRO_DLC
	INVENTORY_PICTURE(rhsusf_mich_helmet_marpatwd_headset)
	displayName = "MICH 2000 MARPAT-WD (Headset)";
	model = "\rhsusf\addons\rhsusf_infantry\gear\head\mich_01_bowman";

	class ItemInfo: ItemInfo
	{
		uniformModel = "\rhsusf\addons\rhsusf_infantry\gear\head\mich_01_bowman";
	};
};

class rhsusf_mich_helmet_marpatd : rhsusf_mich_helmet_marpatwd
{
	AUTHOR_MACRO_DLC
	INVENTORY_PICTURE(rhsusf_mich_helmet_marpatd)
	displayName = "MICH 2000 MARPAT-D";
	MARPAT_D_TEX1
};

class rhsusf_mich_helmet_marpatd_headset : rhsusf_mich_helmet_marpatwd_headset
{
	AUTHOR_MACRO_DLC
	INVENTORY_PICTURE(rhsusf_mich_helmet_marpatd_headset)
	displayName = "MICH 2000 MARPAT-D (Headset)";
	MARPAT_D_TEX1
};

class rhsusf_mich_helmet_marpatwd_alt : rhsusf_mich_helmet_marpatwd
{
	AUTHOR_MACRO_DLC
	INVENTORY_PICTURE(rhsusf_mich_helmet_marpatwd_alt)
	displayName = "MICH 2000 MARPAT-WD (Alt)";
	model = "\rhsusf\addons\rhsusf_infantry\gear\head\mich_01_alt";
	class ItemInfo: ItemInfo
	{
		uniformModel = "\rhsusf\addons\rhsusf_infantry\gear\head\mich_01_alt";
	};
};

class rhsusf_mich_helmet_marpatwd_alt_headset : rhsusf_mich_helmet_marpatwd
{
	AUTHOR_MACRO_DLC
	INVENTORY_PICTURE(rhsusf_mich_helmet_marpatwd_alt_headset)
	displayName = "MICH 2000 MARPAT-WD (Alt/Headset)";
	model = "\rhsusf\addons\rhsusf_infantry\gear\head\mich_01_alt_bowman";

	class ItemInfo: ItemInfo
	{
		uniformModel = "\rhsusf\addons\rhsusf_infantry\gear\head\mich_01_alt_bowman";
	};
};

class rhsusf_mich_helmet_marpatd_alt : rhsusf_mich_helmet_marpatwd_alt
{
	AUTHOR_MACRO_DLC
	INVENTORY_PICTURE(rhsusf_mich_helmet_marpatd_alt)
	displayName = "MICH 2000 MARPAT-D (Alt)";
	MARPAT_D_TEX1
};

class rhsusf_mich_helmet_marpatd_alt_headset : rhsusf_mich_helmet_marpatwd_alt_headset
{
	AUTHOR_MACRO_DLC
	INVENTORY_PICTURE(rhsusf_mich_helmet_marpatd_alt_headset)
	displayName = "MICH 2000 MARPAT-D (Alt/Headset)";
	MARPAT_D_TEX1
};

class rhsusf_mich_helmet_marpatwd_norotos : rhsusf_mich_helmet_marpatwd
{
	AUTHOR_MACRO_DLC
	INVENTORY_PICTURE(rhsusf_mich_helmet_marpatwd_norotos)
	displayName = "MICH 2000 MARPAT-WD (Norotos)";
	model = "\rhsusf\addons\rhsusf_infantry\gear\head\mich_01_nor1";

	hiddenSelectionsTextures[] = {
		"rhsusf\addons\rhsusf_infantry\gear\head\data\mich_covered_norotos_wd_co.paa",
		"rhsusf\addons\rhsusf_infantry\gear\head\data\mich_acc_od_co.paa"
	};

	class ItemInfo: ItemInfo
	{
		uniformModel = "\rhsusf\addons\rhsusf_infantry\gear\head\mich_01_nor1";
	};
};

class rhsusf_mich_helmet_marpatwd_norotos_headset : rhsusf_mich_helmet_marpatwd_norotos
{
	AUTHOR_MACRO_DLC
	INVENTORY_PICTURE(rhsusf_mich_helmet_marpatwd_norotos_headset)
	displayName = "MICH 2000 MARPAT-WD (Norotos/Headset)";
	model = "\rhsusf\addons\rhsusf_infantry\gear\head\mich_01_nor1_bowman";

	class ItemInfo: ItemInfo
	{
		uniformModel = "\rhsusf\addons\rhsusf_infantry\gear\head\mich_01_nor1_bowman";
	};
};

class rhsusf_mich_helmet_marpatd_norotos : rhsusf_mich_helmet_marpatwd_norotos
{
	AUTHOR_MACRO_DLC
	INVENTORY_PICTURE(rhsusf_mich_helmet_marpatd_norotos)
	displayName = "MICH 2000 MARPAT-D (Norotos)";
	MARPAT_D_TEX2
};

class rhsusf_mich_helmet_marpatd_norotos_headset : rhsusf_mich_helmet_marpatwd_norotos_headset
{
	AUTHOR_MACRO_DLC
	INVENTORY_PICTURE(rhsusf_mich_helmet_marpatd_norotos_headset)
	displayName = "MICH 2000 MARPAT-D (Norotos/Headset)";
	MARPAT_D_TEX2
};

class rhsusf_mich_helmet_marpatwd_norotos_arc : rhsusf_mich_helmet_marpatwd
{
	AUTHOR_MACRO_DLC
	INVENTORY_PICTURE(rhsusf_mich_helmet_marpatwd_norotos_arc)
	displayName = "MICH 2000 MARPAT-WD (Norotos/ARC)";
	model = "\rhsusf\addons\rhsusf_infantry\gear\head\mich_01_nor1_arc";
	hiddenSelectionsTextures[] = {
		"rhsusf\addons\rhsusf_infantry\gear\head\data\mich_covered_norotos_arc_wd_co.paa",
		"rhsusf\addons\rhsusf_infantry\gear\head\data\mich_acc_od_co.paa"
	};

	class ItemInfo: ItemInfo
	{
		uniformModel = "\rhsusf\addons\rhsusf_infantry\gear\head\mich_01_nor1_arc";
	};
};

class rhsusf_mich_helmet_marpatwd_norotos_arc_headset : rhsusf_mich_helmet_marpatwd_norotos_arc
{
	AUTHOR_MACRO_DLC
	INVENTORY_PICTURE(rhsusf_mich_helmet_marpatwd_norotos_arc_headset)
	displayName = "MICH 2000 MARPAT-WD (Norotos/ARC/Headset)";
	model = "\rhsusf\addons\rhsusf_infantry\gear\head\mich_01_nor1_arc_bowman";

	class ItemInfo: ItemInfo
	{
		uniformModel = "\rhsusf\addons\rhsusf_infantry\gear\head\mich_01_nor1_arc_bowman";
	};
};

class rhsusf_mich_helmet_marpatd_norotos_arc : rhsusf_mich_helmet_marpatwd_norotos_arc
{
	AUTHOR_MACRO_DLC
	INVENTORY_PICTURE(rhsusf_mich_helmet_marpatd_norotos_arc)
	displayName = "MICH 2000 MARPAT-D (Norotos/ARC)";
	MARPAT_D_TEX3
};

class rhsusf_mich_helmet_marpatd_norotos_arc_headset : rhsusf_mich_helmet_marpatwd_norotos_arc_headset
{
	AUTHOR_MACRO_DLC
	INVENTORY_PICTURE(rhsusf_mich_helmet_marpatd_norotos_arc_headset)
	displayName = "MICH 2000 MARPAT-D (Norotos/ARC/Headset)";
	MARPAT_D_TEX3
};
///BARE MICH Green///

class rhsusf_mich_bare : rhsusf_mich_helmet_marpatwd
{
	AUTHOR_MACRO_DLC
	INVENTORY_PICTURE(rhsusf_mich_bare)
	scope = 2;
	displayName = "MICH 2000";


	model = "\rhsusf\addons\rhsusf_infantry\gear\head\mich_bare_01";
	hiddenSelections[] = {"Camo","Camo1","Camo2"};
	hiddenSelectionsTextures[] = {
		"\rhsusf\addons\rhsusf_infantry\gear\head\data\bare_mich_od_rhino_co.paa",
		"\rhsusf\addons\rhsusf_infantry\gear\head\data\mich_acc_od_co.paa",
		"\rhsusf\addons\rhsusf_infantry\gear\head\data\rhs_helmet_ach_acc_co.paa"
	};

	class ItemInfo: ItemInfo
	{
		hiddenSelections[] = {"Camo","Camo1","Camo2"};
		uniformModel = "\rhsusf\addons\rhsusf_infantry\gear\head\mich_bare_01";
	};
};

class rhsusf_mich_bare_headset : rhsusf_mich_bare
{
	AUTHOR_MACRO_DLC
	INVENTORY_PICTURE(rhsusf_mich_bare_headset)
	displayName = "MICH 2000 (Headset)";

	model = "\rhsusf\addons\rhsusf_infantry\gear\head\mich_bare_01_bowman";
	hiddenSelections[] = {"Camo","Camo1","Camo2","bowman"};
	hiddenSelectionsTextures[] = {
		"\rhsusf\addons\rhsusf_infantry\gear\head\data\bare_mich_od_rhino_co.paa",
		"\rhsusf\addons\rhsusf_infantry\gear\head\data\mich_acc_od_co.paa",
		"\rhsusf\addons\rhsusf_infantry\gear\head\data\rhs_helmet_ach_acc_co.paa",
		"\rhsusf\addons\rhsusf_infantry\gear\head\data\bowman_base_co.paa"
	};

	class ItemInfo: ItemInfo
	{
		hiddenSelections[] = {"Camo","Camo1","Camo2","bowman"};
		uniformModel = "\rhsusf\addons\rhsusf_infantry\gear\head\mich_bare_01_bowman";
	};
};

class rhsusf_mich_bare_alt : rhsusf_mich_bare
{
	AUTHOR_MACRO_DLC
	INVENTORY_PICTURE(rhsusf_mich_bare_alt)
	displayName = "MICH 2000 (Alt)";

	model = "\rhsusf\addons\rhsusf_infantry\gear\head\mich_bare_01_alt";

	hiddenSelectionsTextures[] = {
		"\rhsusf\addons\rhsusf_infantry\gear\head\data\bare_mich_od_rhino_co.paa",
		"\rhsusf\addons\rhsusf_infantry\gear\head\data\mich_acc_od_co.paa",
		"\rhsusf\addons\rhsusf_infantry\gear\head\data\rhs_helmet_ach_acc_co.paa"
	};

	class ItemInfo: ItemInfo
	{
		mass = 40;
		uniformModel = "\rhsusf\addons\rhsusf_infantry\gear\head\mich_bare_01_alt";
	};
};

class rhsusf_mich_bare_norotos : rhsusf_mich_bare
{
	AUTHOR_MACRO_DLC
	INVENTORY_PICTURE(rhsusf_mich_bare_norotos)
	displayName = "MICH 2000 (Norotos)";

	model = "\rhsusf\addons\rhsusf_infantry\gear\head\mich_bare_01_nor1";

	hiddenSelectionsTextures[] = {
		"\rhsusf\addons\rhsusf_infantry\gear\head\data\bare_mich_norotos_od_co.paa",
		"\rhsusf\addons\rhsusf_infantry\gear\head\data\mich_acc_od_co.paa",
		"\rhsusf\addons\rhsusf_infantry\gear\head\data\rhs_helmet_ach_acc_co.paa"
	};

	class ItemInfo: ItemInfo
	{
		uniformModel = "\rhsusf\addons\rhsusf_infantry\gear\head\mich_bare_01_nor1";
	};
};

class rhsusf_mich_bare_norotos_headset : rhsusf_mich_bare_headset
{
	AUTHOR_MACRO_DLC
	INVENTORY_PICTURE(rhsusf_mich_bare_norotos_headset)
	displayName = "MICH 2000 (Norotos/Headset)";

	model = "\rhsusf\addons\rhsusf_infantry\gear\head\mich_bare_01_nor1_bowman";

	hiddenSelectionsTextures[] = {
		"\rhsusf\addons\rhsusf_infantry\gear\head\data\bare_mich_norotos_od_co.paa",
		"\rhsusf\addons\rhsusf_infantry\gear\head\data\mich_acc_od_co.paa",
		"\rhsusf\addons\rhsusf_infantry\gear\head\data\rhs_helmet_ach_acc_co.paa",
		"\rhsusf\addons\rhsusf_infantry\gear\head\data\bowman_base_co.paa"
	};

	class ItemInfo: ItemInfo
	{
		uniformModel = "\rhsusf\addons\rhsusf_infantry\gear\head\mich_bare_01_nor1_bowman";
	};
};
class rhsusf_mich_bare_norotos_alt : rhsusf_mich_bare_norotos
{
	AUTHOR_MACRO_DLC
	INVENTORY_PICTURE(rhsusf_mich_bare_norotos_alt)
	displayName = "MICH 2000 (Norotos/Alt)";
	model = "\rhsusf\addons\rhsusf_infantry\gear\head\mich_bare_01_nor1_alt";

	class ItemInfo: ItemInfo
	{
		mass = 40;
		uniformModel = "\rhsusf\addons\rhsusf_infantry\gear\head\mich_bare_01_nor1_alt";
	};
};

class rhsusf_mich_bare_norotos_alt_headset : rhsusf_mich_bare_norotos_headset
{
	AUTHOR_MACRO_DLC
	INVENTORY_PICTURE(rhsusf_mich_bare_norotos_alt_headset)
	displayName = "MICH 2000 (Norotos/Alt/Headset)";

	model = "\rhsusf\addons\rhsusf_infantry\gear\head\mich_bare_01_nor1_alt_bowman";

	class ItemInfo: ItemInfo
	{
		mass = 40;
		uniformModel = "\rhsusf\addons\rhsusf_infantry\gear\head\mich_bare_01_nor1_alt_bowman";
	};
};

class rhsusf_mich_bare_norotos_arc : rhsusf_mich_bare
{
	AUTHOR_MACRO_DLC
	INVENTORY_PICTURE(rhsusf_mich_bare_norotos_arc)
	displayName = "MICH 2000 (Norotos/ARC)";

	model = "\rhsusf\addons\rhsusf_infantry\gear\head\mich_bare_01_nor1_arc";

	hiddenSelectionsTextures[] = {
		"\rhsusf\addons\rhsusf_infantry\gear\head\data\bare_mich_od_norotos_arc_co.paa",
		"\rhsusf\addons\rhsusf_infantry\gear\head\data\mich_acc_od_co.paa",
		"\rhsusf\addons\rhsusf_infantry\gear\head\data\rhs_helmet_ach_acc_co.paa"
	};

	class ItemInfo: ItemInfo
	{
		uniformModel = "\rhsusf\addons\rhsusf_infantry\gear\head\mich_bare_01_nor1_arc";
	};
};

class rhsusf_mich_bare_norotos_arc_headset : rhsusf_mich_bare_headset
{
	AUTHOR_MACRO_DLC
	INVENTORY_PICTURE(rhsusf_mich_bare_norotos_arc_headset)
	displayName = "MICH 2000 (Norotos/ARC/Headset)";

	model = "\rhsusf\addons\rhsusf_infantry\gear\head\mich_bare_01_nor1_arc_bowman";

	hiddenSelectionsTextures[] = {
		"\rhsusf\addons\rhsusf_infantry\gear\head\data\bare_mich_od_norotos_arc_co.paa",
		"\rhsusf\addons\rhsusf_infantry\gear\head\data\mich_acc_od_co.paa",
		"\rhsusf\addons\rhsusf_infantry\gear\head\data\rhs_helmet_ach_acc_co.paa",
		"\rhsusf\addons\rhsusf_infantry\gear\head\data\bowman_base_co.paa"
	};

	class ItemInfo: ItemInfo
	{
		uniformModel = "\rhsusf\addons\rhsusf_infantry\gear\head\mich_bare_01_nor1_arc_bowman";
	};
};


class rhsusf_mich_bare_norotos_arc_alt : rhsusf_mich_bare_norotos_arc
{
	AUTHOR_MACRO_DLC
	INVENTORY_PICTURE(rhsusf_mich_bare_norotos_arc_alt)
	displayName = "MICH 2000 (Norotos/ARC/Alt)";

	model = "\rhsusf\addons\rhsusf_infantry\gear\head\mich_bare_01_nor1_arc_alt";

	class ItemInfo: ItemInfo
	{
		mass = 40;
		uniformModel = "\rhsusf\addons\rhsusf_infantry\gear\head\mich_bare_01_nor1_arc_alt";
	};
};

class rhsusf_mich_bare_norotos_arc_alt_headset : rhsusf_mich_bare_norotos_arc_headset
{
	AUTHOR_MACRO_DLC
	INVENTORY_PICTURE(rhsusf_mich_bare_norotos_arc_alt_headset)
	displayName = "MICH 2000 (Norotos/ARC/Alt/Headset)";

	model = "\rhsusf\addons\rhsusf_infantry\gear\head\mich_bare_01_nor1_arc_alt_bowman";

	class ItemInfo: ItemInfo
	{
		mass = 40;
		uniformModel = "\rhsusf\addons\rhsusf_infantry\gear\head\mich_bare_01_nor1_arc_alt_bowman";
	};
};

///BARE MICH TAN///

class rhsusf_mich_bare_tan : rhsusf_mich_bare
{
	AUTHOR_MACRO_DLC
	INVENTORY_PICTURE(rhsusf_mich_bare_tan)
	displayName = "MICH 2000 (Tan)";

	model = "\rhsusf\addons\rhsusf_infantry\gear\head\mich_bare_01";
	hiddenSelectionsTextures[] = {
		"\rhsusf\addons\rhsusf_infantry\gear\head\data\bare_mich_tan_rhino_co.paa",
		"\rhsusf\addons\rhsusf_infantry\gear\head\data\mich_acc_tan_co.paa",
		"\rhsusf\addons\rhsusf_infantry\gear\head\data\ach_acc_tan_co.paa"
	};

	class ItemInfo: ItemInfo
	{
		mass = 40;
		uniformModel = "\rhsusf\addons\rhsusf_infantry\gear\head\mich_bare_01";
	};
};

class rhsusf_mich_bare_tan_headset : rhsusf_mich_bare_headset
{
	AUTHOR_MACRO_DLC
	INVENTORY_PICTURE(rhsusf_mich_bare_tan_headset)
	displayName = "MICH 2000 (Tan/Headset)";

	model = "\rhsusf\addons\rhsusf_infantry\gear\head\mich_bare_01_bowman";
	hiddenSelectionsTextures[] = {
		"\rhsusf\addons\rhsusf_infantry\gear\head\data\bare_mich_tan_rhino_co.paa",
		"\rhsusf\addons\rhsusf_infantry\gear\head\data\mich_acc_tan_co.paa",
		"\rhsusf\addons\rhsusf_infantry\gear\head\data\ach_acc_tan_co.paa",
		"\rhsusf\addons\rhsusf_infantry\gear\head\data\bowman_base_co.paa"
	};

	class ItemInfo: ItemInfo
	{
		mass = 40;
		uniformModel = "\rhsusf\addons\rhsusf_infantry\gear\head\mich_bare_01_bowman";
	};
};


class rhsusf_mich_bare_alt_tan : rhsusf_mich_bare_tan
{
	AUTHOR_MACRO_DLC
	INVENTORY_PICTURE(rhsusf_mich_bare_alt_tan)
	displayName = "MICH 2000 (Tan/Alt)";

	model = "\rhsusf\addons\rhsusf_infantry\gear\head\mich_bare_01_alt";

	class ItemInfo: ItemInfo
	{
		uniformModel = "\rhsusf\addons\rhsusf_infantry\gear\head\mich_bare_01_alt";
	};
};

class rhsusf_mich_bare_norotos_tan : rhsusf_mich_bare_tan
{
	AUTHOR_MACRO_DLC
	INVENTORY_PICTURE(rhsusf_mich_bare_norotos_tan)
	displayName = "MICH 2000 (Tan/Norotos)";

	model = "\rhsusf\addons\rhsusf_infantry\gear\head\mich_bare_01_nor1";
	hiddenSelectionsTextures[] = {
		"\rhsusf\addons\rhsusf_infantry\gear\head\data\bare_mich_norotos_tan_co.paa",
		"\rhsusf\addons\rhsusf_infantry\gear\head\data\mich_acc_tan_co.paa",
		"\rhsusf\addons\rhsusf_infantry\gear\head\data\ach_acc_tan_co.paa"
	};


	class ItemInfo: ItemInfo
	{
		uniformModel = "\rhsusf\addons\rhsusf_infantry\gear\head\mich_bare_01_nor1";
	};
};

class rhsusf_mich_bare_norotos_tan_headset : rhsusf_mich_bare_tan_headset
{
	AUTHOR_MACRO_DLC
	INVENTORY_PICTURE(rhsusf_mich_bare_norotos_tan_headset)
	displayName = "MICH 2000 (Tan/Norotos/Headset)";

	model = "\rhsusf\addons\rhsusf_infantry\gear\head\mich_bare_01_nor1_bowman";
	hiddenSelectionsTextures[] = {
		"\rhsusf\addons\rhsusf_infantry\gear\head\data\bare_mich_norotos_tan_co.paa",
		"\rhsusf\addons\rhsusf_infantry\gear\head\data\mich_acc_tan_co.paa",
		"\rhsusf\addons\rhsusf_infantry\gear\head\data\ach_acc_tan_co.paa",
		"\rhsusf\addons\rhsusf_infantry\gear\head\data\bowman_base_co.paa"
	};


	class ItemInfo: ItemInfo
	{
		uniformModel = "\rhsusf\addons\rhsusf_infantry\gear\head\mich_bare_01_nor1_bowman";
	};
};

class rhsusf_mich_bare_norotos_alt_tan : rhsusf_mich_bare_norotos_tan
{
	AUTHOR_MACRO_DLC
	INVENTORY_PICTURE(rhsusf_mich_bare_norotos_alt_tan)
	displayName = "MICH 2000 (Tan/Norotos/Alt)";

	model = "\rhsusf\addons\rhsusf_infantry\gear\head\mich_bare_01_nor1_alt";

	class ItemInfo: ItemInfo
	{
		uniformModel = "\rhsusf\addons\rhsusf_infantry\gear\head\mich_bare_01_nor1_alt";
	};
};

class rhsusf_mich_bare_norotos_alt_tan_headset : rhsusf_mich_bare_norotos_tan_headset
{
	AUTHOR_MACRO_DLC
	INVENTORY_PICTURE(rhsusf_mich_bare_norotos_alt_tan_headset)
	displayName = "MICH 2000 (Tan/Norotos/Alt/Headset)";

	model = "\rhsusf\addons\rhsusf_infantry\gear\head\mich_bare_01_nor1_alt_bowman";

	class ItemInfo: ItemInfo
	{
		uniformModel = "\rhsusf\addons\rhsusf_infantry\gear\head\mich_bare_01_nor1_alt_bowman";
	};
};

class rhsusf_mich_bare_norotos_arc_tan : rhsusf_mich_bare_norotos_tan
{
	AUTHOR_MACRO_DLC
	INVENTORY_PICTURE(rhsusf_mich_bare_norotos_arc_tan)
	displayName = "MICH 2000 (Tan/Norotos/ARC)";

	model = "\rhsusf\addons\rhsusf_infantry\gear\head\mich_bare_01_nor1_arc";
	hiddenSelectionsTextures[] = {
		"\rhsusf\addons\rhsusf_infantry\gear\head\data\bare_mich_tan_norotos_arc_co.paa",
		"\rhsusf\addons\rhsusf_infantry\gear\head\data\mich_acc_tan_co.paa",
		"\rhsusf\addons\rhsusf_infantry\gear\head\data\ach_acc_tan_co.paa"
	};

	class ItemInfo: ItemInfo
	{
		uniformModel = "\rhsusf\addons\rhsusf_infantry\gear\head\mich_bare_01_nor1_arc";
	};
};

class rhsusf_mich_bare_norotos_arc_tan_headset : rhsusf_mich_bare_norotos_tan_headset
{
	AUTHOR_MACRO_DLC
	INVENTORY_PICTURE(rhsusf_mich_bare_norotos_arc_tan_headset)
	scope = 1;
	displayName = "MICH 2000 (Tan/Norotos/ARC/Headset)";

	model = "\rhsusf\addons\rhsusf_infantry\gear\head\mich_bare_01_nor1_arc_bowman";
	hiddenSelectionsTextures[] = {
		"\rhsusf\addons\rhsusf_infantry\gear\head\data\bare_mich_tan_norotos_arc_co.paa",
		"\rhsusf\addons\rhsusf_infantry\gear\head\data\mich_acc_tan_co.paa",
		"\rhsusf\addons\rhsusf_infantry\gear\head\data\ach_acc_tan_co.paa",
		"\rhsusf\addons\rhsusf_infantry\gear\head\data\bowman_base_co.paa"
	};

	class ItemInfo: ItemInfo
	{
		uniformModel = "\rhsusf\addons\rhsusf_infantry\gear\head\mich_bare_01_nor1_arc_bowman";
	};
};

class rhsusf_mich_bare_norotos_arc_alt_tan : rhsusf_mich_bare_norotos_arc_tan
{
	AUTHOR_MACRO_DLC
	INVENTORY_PICTURE(rhsusf_mich_bare_norotos_arc_alt_tan)
	displayName = "MICH 2000 (Tan/Norotos/ARC/Alt)";

	model = "\rhsusf\addons\rhsusf_infantry\gear\head\mich_bare_01_nor1_arc_alt";

	class ItemInfo: ItemInfo
	{
		uniformModel = "\rhsusf\addons\rhsusf_infantry\gear\head\mich_bare_01_nor1_arc_alt";
	};
};

class rhsusf_mich_bare_norotos_arc_alt_tan_headset : rhsusf_mich_bare_norotos_arc_tan_headset
{
	AUTHOR_MACRO_DLC
	INVENTORY_PICTURE(rhsusf_mich_bare_norotos_arc_alt_tan_headset)
	scope = 2;
	displayName = "MICH 2000 (Tan/Norotos/ARC/Alt/Headset)";

	model = "\rhsusf\addons\rhsusf_infantry\gear\head\mich_bare_01_nor1_arc_alt_bowman";

	class ItemInfo: ItemInfo
	{
		uniformModel = "\rhsusf\addons\rhsusf_infantry\gear\head\mich_bare_01_nor1_arc_alt_bowman";
	};
};

///BARE MICH SEMI-ARID///

class rhsusf_mich_bare_semi :rhsusf_mich_bare
{
	AUTHOR_MACRO_DLC
	INVENTORY_PICTURE(rhsusf_mich_bare_semi)
	displayName = "MICH 2000 (Semi-Arid)";
	model = "\rhsusf\addons\rhsusf_infantry\gear\head\mich_bare_01";
	hiddenSelectionsTextures[] = {
		"\rhsusf\addons\rhsusf_infantry\gear\head\data\bare_mich_rhino_painted_co.paa",
		"\rhsusf\addons\rhsusf_infantry\gear\head\data\mich_acc_painted_co.paa",
		"\rhsusf\addons\rhsusf_infantry\gear\head\data\ach_acc_tan_co.paa"
	};

	class ItemInfo: ItemInfo
	{
		mass = 40;
		uniformModel = "\rhsusf\addons\rhsusf_infantry\gear\head\mich_bare_01";
	};
};

class rhsusf_mich_bare_semi_headset :rhsusf_mich_bare_headset
{
	AUTHOR_MACRO_DLC
	INVENTORY_PICTURE(rhsusf_mich_bare_semi_headset)
	displayName = "MICH 2000 (Semi-Arid/Headset)";

	model = "\rhsusf\addons\rhsusf_infantry\gear\head\mich_bare_01_bowman";
	hiddenSelectionsTextures[] = {
		"\rhsusf\addons\rhsusf_infantry\gear\head\data\bare_mich_rhino_painted_co.paa",
		"\rhsusf\addons\rhsusf_infantry\gear\head\data\mich_acc_painted_co.paa",
		"\rhsusf\addons\rhsusf_infantry\gear\head\data\ach_acc_tan_co.paa",
		"\rhsusf\addons\rhsusf_infantry\gear\head\data\bowman_base_co.paa"
	};


	class ItemInfo: ItemInfo
	{
		mass = 40;
		uniformModel = "\rhsusf\addons\rhsusf_infantry\gear\head\mich_bare_01_bowman";
	};
};


class rhsusf_mich_bare_alt_semi : rhsusf_mich_bare_semi
{
	AUTHOR_MACRO_DLC
	INVENTORY_PICTURE(rhsusf_mich_bare_alt_semi)
	displayName = "MICH 2000 (Semi-Arid/Alt)";

	model = "\rhsusf\addons\rhsusf_infantry\gear\head\mich_bare_01_alt";

	class ItemInfo: ItemInfo
	{
		uniformModel = "\rhsusf\addons\rhsusf_infantry\gear\head\mich_bare_01_alt";
	};
};

class rhsusf_mich_bare_norotos_semi : rhsusf_mich_bare_semi
{
	AUTHOR_MACRO_DLC
	INVENTORY_PICTURE(rhsusf_mich_bare_norotos_semi)
	displayName = "MICH 2000 (Semi-Arid/Norotos)";

	model = "\rhsusf\addons\rhsusf_infantry\gear\head\mich_bare_01_nor1";
	hiddenSelectionsTextures[] = {
		"\rhsusf\addons\rhsusf_infantry\gear\head\data\bare_mich_rhino_painted_co.paa",
		"\rhsusf\addons\rhsusf_infantry\gear\head\data\mich_acc_painted_co.paa",
		"\rhsusf\addons\rhsusf_infantry\gear\head\data\ach_acc_tan_co.paa"
	};

	class ItemInfo: ItemInfo
	{
		uniformModel = "\rhsusf\addons\rhsusf_infantry\gear\head\mich_bare_01_nor1";
	};
};

class rhsusf_mich_bare_norotos_semi_headset : rhsusf_mich_bare_semi_headset
{
	AUTHOR_MACRO_DLC
	INVENTORY_PICTURE(rhsusf_mich_bare_norotos_semi_headset)
	displayName = "MICH 2000 (Semi-Arid/Norotos/Headset)";

	model = "\rhsusf\addons\rhsusf_infantry\gear\head\mich_bare_01_nor1_bowman";
	hiddenSelectionsTextures[] = {
		"\rhsusf\addons\rhsusf_infantry\gear\head\data\bare_mich_rhino_painted_co.paa",
		"\rhsusf\addons\rhsusf_infantry\gear\head\data\mich_acc_painted_co.paa",
		"\rhsusf\addons\rhsusf_infantry\gear\head\data\ach_acc_tan_co.paa",
		"\rhsusf\addons\rhsusf_infantry\gear\head\data\bowman_base_co.paa"
	};


	class ItemInfo: ItemInfo
	{
		mass = 40;
		uniformModel = "\rhsusf\addons\rhsusf_infantry\gear\head\mich_bare_01_nor1_bowman";
	};
};

class rhsusf_mich_bare_norotos_alt_semi : rhsusf_mich_bare_norotos_semi
{
	AUTHOR_MACRO_DLC
	INVENTORY_PICTURE(rhsusf_mich_bare_norotos_alt_semi)
	scope = 2;
	displayName = "MICH 2000 (Semi-Arid/Norotos/Alt)";


	model = "\rhsusf\addons\rhsusf_infantry\gear\head\mich_bare_01_nor1_alt";


	class ItemInfo: ItemInfo
	{
		mass = 40;
		uniformModel = "\rhsusf\addons\rhsusf_infantry\gear\head\mich_bare_01_nor1_alt";
	};
};

class rhsusf_mich_bare_norotos_alt_semi_headset : rhsusf_mich_bare_norotos_semi_headset
{
	AUTHOR_MACRO_DLC
	INVENTORY_PICTURE(rhsusf_mich_bare_norotos_alt_semi_headset)
	displayName = "MICH 2000 (Semi-Arid/Norotos/Alt/Headset)";

	model = "\rhsusf\addons\rhsusf_infantry\gear\head\mich_bare_01_nor1_alt_bowman";

	class ItemInfo: ItemInfo
	{
		uniformModel = "\rhsusf\addons\rhsusf_infantry\gear\head\mich_bare_01_nor1_alt_bowman";
	};
};

class rhsusf_mich_bare_norotos_arc_semi : rhsusf_mich_bare_norotos_alt_semi
{
	AUTHOR_MACRO_DLC
	INVENTORY_PICTURE(rhsusf_mich_bare_norotos_arc_semi)
	displayName = "MICH 2000 (Semi-Arid/Norotos/ARC)";

	model = "\rhsusf\addons\rhsusf_infantry\gear\head\mich_bare_01_nor1_arc";

	hiddenSelectionsTextures[] = {
		"\rhsusf\addons\rhsusf_infantry\gear\head\data\bare_mich_norotos_painted_co.paa",
		"\rhsusf\addons\rhsusf_infantry\gear\head\data\mich_acc_painted_co.paa",
		"\rhsusf\addons\rhsusf_infantry\gear\head\data\ach_acc_tan_co.paa"
	};

	class ItemInfo: ItemInfo
	{
		uniformModel = "\rhsusf\addons\rhsusf_infantry\gear\head\mich_bare_01_nor1_arc";
	};
};

class rhsusf_mich_bare_norotos_arc_semi_headset : rhsusf_mich_bare_norotos_semi_headset
{
	AUTHOR_MACRO_DLC
	INVENTORY_PICTURE(rhsusf_mich_bare_norotos_arc_semi_headset)
	displayName = "MICH 2000 (Semi-Arid/Norotos/ARC/Headset)";

	model = "\rhsusf\addons\rhsusf_infantry\gear\head\mich_bare_01_nor1_arc_bowman";

	hiddenSelectionsTextures[] = {
		"\rhsusf\addons\rhsusf_infantry\gear\head\data\bare_mich_norotos_painted_co.paa",
		"\rhsusf\addons\rhsusf_infantry\gear\head\data\mich_acc_painted_co.paa",
		"\rhsusf\addons\rhsusf_infantry\gear\head\data\ach_acc_tan_co.paa",
		"\rhsusf\addons\rhsusf_infantry\gear\head\data\bowman_base_co.paa"
	};

	class ItemInfo: ItemInfo
	{
		uniformModel = "\rhsusf\addons\rhsusf_infantry\gear\head\mich_bare_01_nor1_arc_bowman";
	};
};

class rhsusf_mich_bare_norotos_arc_alt_semi : rhsusf_mich_bare_norotos_arc_semi
{
	AUTHOR_MACRO_DLC
	INVENTORY_PICTURE(rhsusf_mich_bare_norotos_arc_alt_semi)
	displayName = "MICH 2000 (Semi-Arid/Norotos/ARC/Alt)";

	model = "\rhsusf\addons\rhsusf_infantry\gear\head\mich_bare_01_nor1_arc_alt";

	class ItemInfo: ItemInfo
	{
		uniformModel = "\rhsusf\addons\rhsusf_infantry\gear\head\mich_bare_01_nor1_arc_alt";
	};
};

class rhsusf_mich_bare_norotos_arc_alt_semi_headset : rhsusf_mich_bare_norotos_arc_semi_headset
{
	AUTHOR_MACRO_DLC
	INVENTORY_PICTURE(rhsusf_mich_bare_norotos_arc_alt_semi_headset)
	displayName = "MICH 2000 (Semi-Arid/Norotos/ARC/Alt/Headset)";

	model = "\rhsusf\addons\rhsusf_infantry\gear\head\mich_bare_01_nor1_arc_alt_bowman";

	class ItemInfo: ItemInfo
	{
		uniformModel = "\rhsusf\addons\rhsusf_infantry\gear\head\mich_bare_01_nor1_arc_alt_bowman";
	};
};
///USMC LWH///
/*

class rhsusf_ach_helmet_ocp : H_HelmetB
{
	AUTHOR_MACRO_DLC
	INVENTORY_PICTURE(rhsusf_ach_helmet_ocp)
	displayName = "ACH OEF-CP";

	model = "\rhsusf\addons\rhsusf_infantry\gear\head\ach_01";

	hiddenSelections[] = {"Camo"};
	hiddenSelectionsTextures[] = {"\rhsusf\addons\rhsusf_infantry\gear\head\data\rhs_helmet_ach_ocp_co.paa"};

	class ItemInfo: ItemInfo
	{
		mass = 40;
		uniformModel = "\rhsusf\addons\rhsusf_infantry\gear\head\ach_01";
		allowedSlots[] = {801,901,701,605};
		modelSides[] = {6};
		armor = 4;
		passThrough = 0.5;
	};
};

*/

class rhsusf_lwh_helmet_marpatd : H_HelmetB
{
	AUTHOR_MACRO_DLC
	INVENTORY_PICTURE(rhsusf_lwh_helmet_marpatd)
	displayName = "LWH MARPAT-D";
	
	EYEPRO_Macro


	model = "\rhsusf\addons\rhsusf_infantry\gear\head\lwh_wd";

	hiddenSelections[] = {"camo", "Camo2"};
	hiddenSelectionsTextures[] = {"\rhsusf\addons\rhsusf_infantry\gear\head\data\lwh_d_co.paa"};

	class ItemInfo: ItemInfo
	{
		mass = 40;
		uniformModel = "\rhsusf\addons\rhsusf_infantry\gear\head\lwh_wd";
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

class rhsusf_lwh_helmet_marpatd_ess : rhsusf_lwh_helmet_marpatd
{
	AUTHOR_MACRO_DLC
	INVENTORY_PICTURE(rhsusf_lwh_helmet_marpatd_ess)
	displayName = "LWH MARPAT-D (ESS)";

	model = "\rhsusf\addons\rhsusf_infantry\gear\head\lwh_wd_ess01";
	hiddenSelections[] = {"camo", "Camo2"};
	hiddenSelectionsTextures[] = {"\rhsusf\addons\rhsusf_infantry\gear\head\data\lwh_d_co.paa", "\rhsusf\addons\rhsusf_infantry\gear\head\data\lwh_acc_d_co.paa"};

	class ItemInfo: ItemInfo
	{
		uniformModel = "\rhsusf\addons\rhsusf_infantry\gear\head\lwh_wd_ess01";
		hiddenSelections[] = {"camo", "Camo2"};
	    hiddenSelectionsTextures[] = {"\rhsusf\addons\rhsusf_infantry\gear\head\data\lwh_d_co.paa", "\rhsusf\addons\rhsusf_infantry\gear\head\data\lwh_acc_d_co.paa"};
	};
};

class rhsusf_lwh_helmet_marpatd_headset : rhsusf_lwh_helmet_marpatd
{
	AUTHOR_MACRO_DLC
	INVENTORY_PICTURE(rhsusf_lwh_helmet_marpatd_headset)
	displayName = "LWH MARPAT-D (Headset/ESS)";

	model = "\rhsusf\addons\rhsusf_infantry\gear\head\lwh_wd_headset";
	hiddenSelections[] = {"camo", "Camo2"};
	hiddenSelectionsTextures[] = {"\rhsusf\addons\rhsusf_infantry\gear\head\data\lwh_d_co.paa", "\rhsusf\addons\rhsusf_infantry\gear\head\data\lwh_acc_d_co.paa"};

	class ItemInfo: ItemInfo
	{
		uniformModel = "\rhsusf\addons\rhsusf_infantry\gear\head\lwh_wd_headset";
		hiddenSelections[] = {"camo", "Camo2"};
	    hiddenSelectionsTextures[] = {"\rhsusf\addons\rhsusf_infantry\gear\head\data\lwh_d_co.paa", "\rhsusf\addons\rhsusf_infantry\gear\head\data\lwh_acc_d_co.paa"};
	};
};

class rhsusf_lwh_helmet_marpatwd : rhsusf_lwh_helmet_marpatd
{
	AUTHOR_MACRO_DLC
	INVENTORY_PICTURE(rhsusf_lwh_helmet_marpatwd)
	displayName = "LWH MARPAT-WD";

	hiddenSelectionsTextures[] = {"\rhsusf\addons\rhsusf_infantry\gear\head\data\lwh_wd_co.paa"};
};

class rhsusf_lwh_helmet_marpatwd_ess : rhsusf_lwh_helmet_marpatd_ess
{
	AUTHOR_MACRO_DLC
	INVENTORY_PICTURE(rhsusf_lwh_helmet_marpatwd_ess)
	displayName = "LWH MARPAT-WD (Tan ESS)";

	hiddenSelections[] = {"camo", "Camo2"};
	hiddenSelectionsTextures[] = {"\rhsusf\addons\rhsusf_infantry\gear\head\data\lwh_wd_co.paa", "\rhsusf\addons\rhsusf_infantry\gear\head\data\lwh_acc_d_co.paa"};

	class ItemInfo: ItemInfo
	{
		hiddenSelections[] = {"camo", "Camo2"};
	    hiddenSelectionsTextures[] = {"\rhsusf\addons\rhsusf_infantry\gear\head\data\lwh_wd_co.paa", "\rhsusf\addons\rhsusf_infantry\gear\head\data\lwh_acc_d_co.paa"};
	};
};

class rhsusf_lwh_helmet_marpatwd_blk_ess : rhsusf_lwh_helmet_marpatd_ess
{
	AUTHOR_MACRO_DLC
	INVENTORY_PICTURE(rhsusf_lwh_helmet_marpatwd_blk_ess)
	displayName = "LWH MARPAT-WD (Black ESS)";

	hiddenSelections[] = {"camo", "Camo2"};
	hiddenSelectionsTextures[] = {"\rhsusf\addons\rhsusf_infantry\gear\head\data\lwh_wd_co.paa", "\rhsusf\addons\rhsusf_infantry\gear\head\data\lwh_acc_wd_co.paa"};

	class ItemInfo: ItemInfo
	{
		hiddenSelections[] = {"camo", "Camo2"};
	    hiddenSelectionsTextures[] = {"\rhsusf\addons\rhsusf_infantry\gear\head\data\lwh_wd_co.paa", "\rhsusf\addons\rhsusf_infantry\gear\head\data\lwh_acc_wd_co.paa"};
	};
};

class rhsusf_lwh_helmet_marpatwd_headset : rhsusf_lwh_helmet_marpatd_headset
{
	AUTHOR_MACRO_DLC
	INVENTORY_PICTURE(rhsusf_lwh_helmet_marpatwd_headset)
	displayName = "LWH MARPAT-WD (Headset/Tan ESS)";
	hiddenSelections[] = {"camo", "Camo2"};
	hiddenSelectionsTextures[] = {"\rhsusf\addons\rhsusf_infantry\gear\head\data\lwh_wd_co.paa", "\rhsusf\addons\rhsusf_infantry\gear\head\data\lwh_acc_d_co.paa"};

	class ItemInfo: ItemInfo
	{
		hiddenSelections[] = {"camo", "Camo2"};
	    hiddenSelectionsTextures[] = {"\rhsusf\addons\rhsusf_infantry\gear\head\data\lwh_wd_co.paa", "\rhsusf\addons\rhsusf_infantry\gear\head\data\lwh_acc_d_co.paa"};
	};
};

class rhsusf_lwh_helmet_marpatwd_headset_blk : rhsusf_lwh_helmet_marpatd_headset
{
	AUTHOR_MACRO_DLC
	INVENTORY_PICTURE(rhsusf_lwh_helmet_marpatwd_headset_blk)
	displayName = "LWH MARPAT-WD (Headset/Black ESS)";
	hiddenSelections[] = {"camo", "Camo2"};
	hiddenSelectionsTextures[] = {"\rhsusf\addons\rhsusf_infantry\gear\head\data\lwh_wd_co.paa", "\rhsusf\addons\rhsusf_infantry\gear\head\data\lwh_acc_wd_co.paa"};

	class ItemInfo: ItemInfo
	{
		hiddenSelections[] = {"camo", "Camo2"};
	    hiddenSelectionsTextures[] = {"\rhsusf\addons\rhsusf_infantry\gear\head\data\lwh_wd_co.paa", "\rhsusf\addons\rhsusf_infantry\gear\head\data\lwh_acc_wd_co.paa"};
	};
};

class rhsusf_lwh_helmet_marpatwd_headset_blk2 : rhsusf_lwh_helmet_marpatd_headset
{
	AUTHOR_MACRO_DLC
	INVENTORY_PICTURE(rhsusf_lwh_helmet_marpatwd_headset_blk)
	displayName = "LWH MARPAT-WD (Headset)";
	hiddenSelections[] = {"camo"};
	hiddenSelectionsTextures[] = {"\rhsusf\addons\rhsusf_infantry\gear\head\data\lwh_wd_co.paa"};
	model = "\rhsusf\addons\rhsusf_infantry\gear\head\lwh_wd_headset_2";
	
	class ItemInfo: ItemInfo
	{
		hiddenSelections[] = {"camo"};
	    hiddenSelectionsTextures[] = {"\rhsusf\addons\rhsusf_infantry\gear\head\data\lwh_wd_co.paa"};
		uniformModel = "\rhsusf\addons\rhsusf_infantry\gear\head\lwh_wd_headset_2";
	};
};
class rhsusf_lwh_helmet_M1942 : rhsusf_lwh_helmet_marpatd
{
	AUTHOR_MACRO_DLC
	INVENTORY_PICTURE(rhsusf_lwh_helmet_M1942)
	displayName = "LWH M1942";

	hiddenSelectionsTextures[] = {"\rhsusf\addons\rhsusf_infantry\gear\head\data\lwh_m1942_co.paa"};
};

///bowman///

 class rhsusf_Bowman: ItemCore
 {
	AUTHOR_MACRO_DLC
	INVENTORY_PICTURE(rhsusf_Bowman)
	scope = 2;
	displayName = "Bowman Elite II";

	model = "\rhsusf\addons\rhsusf_infantry\gear\head\rhsusf_bowman";
	hiddenSelections[] = {"camo"};
	hiddenSelectionsTextures[] = {"\rhsusf\addons\rhsusf_infantry\gear\head\data\Bowman_Base_co.paa"};

	class ItemInfo : HeadgearItem {
		mass = 3;
		uniformModel = "\rhsusf\addons\rhsusf_infantry\gear\head\rhsusf_bowman";
		modelSides[] = {1,3};
		hiddenSelections[] = {"camo"};
	};
};

 class rhsusf_bowman_cap : rhsusf_Bowman
 {
	AUTHOR_MACRO_DLC
	INVENTORY_PICTURE(rhsusf_bowman_cap)
	scope = 2;
	displayName = "Bowman Elite II (Cap)";

	model = "\rhsusf\addons\rhsusf_infantry\gear\head\rhsusf_bowman_cap";
	hiddenSelections[] = {"camo", "Camo2"};
	hiddenSelectionsTextures[] = {"\rhsusf\addons\rhsusf_infantry\gear\head\data\Bowman_Base_co.paa", "rhsusf\addons\rhsusf_infantry\gear\head\data\Baseball_Cap_Co.paa"};

	class ItemInfo : ItemInfo {
		mass = 3;
		uniformModel = "\rhsusf\addons\rhsusf_infantry\gear\head\rhsusf_bowman_cap";
		hiddenSelections[] = {"camo", "Camo2"};
	};
};

// Air Force Jet Helmet
class RHS_jetpilot_usaf: H_HelmetB
{
	AUTHOR_MACRO_DLC
	INVENTORY_PICTURE(RHS_jetpilot_usaf)
	scope = 2;
	displayName = "Jet Pilot Helmet";
	hiddenSelectionsTextures[] = {"\rhsusf\addons\rhsusf_infantry\gear\head\data\rhs_jetpilot.paa"};
	hiddenSelectionsMaterials[] = {"\rhsusf\addons\rhsusf_infantry\gear\head\data\rhs_jetpilot_helmet.rvmat"};
	model = "A3\Characters_F\Common\headgear_helmet_pilot";

	class ItemInfo: ItemInfo
	{
		mass = 50;
		uniformModel = "A3\Characters_F\Common\headgear_helmet_pilot";
		modelSides[] = {1,3};
		class HitpointsProtectionInfo {
			class Head
			{
				hitpointName = "HitHead";
				armor = 1;
				passThrough = 0.5;
			};
		};
	};
};

//IHADSS
class rhsusf_ihadss : rhsusf_opscore_01
{
	AUTHOR_MACRO_DLC
	INVENTORY_PICTURE(rhsusf_hgu56p)
	displayName = "IHADSS";
	
	DISABLE_FACEWEAR_MACRO

	scope = 2;

	hiddenSelections[] = {"camo","patches"};
	hiddenSelectionsTextures[] =
	{
		"\rhsusf\addons\rhsusf_infantry2\gear\head\hgu56\Data\rhs_hgu56_olv_co.paa",
		"\rhsusf\addons\rhsusf_infantry2\gear\head\hgu56\Data\rhs_hgu56_patches_co.paa"
	};
	hiddenSelectionsMaterials[] =
	{
		"\rhsusf\addons\rhsusf_infantry2\gear\head\hgu56\Data\rhs_hgu56.rvmat",
		"\rhsusf\addons\rhsusf_infantry2\gear\head\hgu56\Data\rhs_hgu56_patches.rvmat"
	};
	model = "rhsusf\addons\rhsusf_infantry2\gear\head\hgu56\rhs_hgu56";

	class ItemInfo: ItemInfo
	{
		hiddenSelections[] = {"camo","patches"};
		mass = 40;
		uniformModel = "rhsusf\addons\rhsusf_infantry2\gear\head\hgu56\rhs_hgu56";
	};
	subItems[] = {"rhsusf_ihadss_scope"};
};
class rhsusf_ihadss_scope: NVGoggles
{
	scope			= 1;
	visionMode[]	= {"Normal"};
	modelOptics		= "\rhsusf\addons\rhsusf_infantry\gear\nvg\ANPVS_14_opt";
	//modelOptics	= "";
};

// Protech
class rhsusf_protech_helmet: H_HelmetB
{
	AUTHOR_MACRO_DLC
	INVENTORY_PICTURE(rhsusf_protech_helmet)
	scope = 2;
	displayName = $STR_RHSUSF_PROTECH_HELMET_DISPLAYNAME;
	
	EYEPRO_Macro

	model = "\rhsusf\addons\rhsusf_infantry2\gear\head\protech\pt_helmet";

	class ItemInfo: ItemInfo
	{
		mass = 15;
		uniformModel = "\rhsusf\addons\rhsusf_infantry2\gear\head\protech\pt_helmet";
		allowedSlots[] = {801,901,701,605};
		modelSides[] = {6};
		class HitpointsProtectionInfo {
			class Head
			{
				hitpointName = "HitHead";
				armor = 0;
				passThrough = 0.8;
			};
		};
	};
};

class rhsusf_protech_helmet_ess: rhsusf_protech_helmet
{
	AUTHOR_MACRO_DLC
	INVENTORY_PICTURE(rhsusf_protech_helmet_ess)
	displayName = $STR_RHSUSF_PROTECH_HELMET_ESS_DISPLAYNAME;
	model = "\rhsusf\addons\rhsusf_infantry2\gear\head\protech\pt_helmet_ESS";

	class ItemInfo: ItemInfo
	{
		uniformModel = "\rhsusf\addons\rhsusf_infantry2\gear\head\protech\pt_helmet_ESS";
	};
};

class rhsusf_protech_helmet_rhino: rhsusf_protech_helmet
{
	AUTHOR_MACRO_DLC
	INVENTORY_PICTURE(rhsusf_protech_helmet_rhino)
	displayName = $STR_RHSUSF_PROTECH_HELMET_RHINO_DISPLAYNAME;
	model = "\rhsusf\addons\rhsusf_infantry2\gear\head\protech\pt_helmet_rhino";

	class ItemInfo: ItemInfo
	{
		uniformModel = "\rhsusf\addons\rhsusf_infantry2\gear\head\protech\pt_helmet_rhino";
	};
};

class rhsusf_protech_helmet_rhino_ess: rhsusf_protech_helmet
{
	AUTHOR_MACRO_DLC
	INVENTORY_PICTURE(rhsusf_protech_helmet_rhino_ess)
	displayName = $STR_RHSUSF_PROTECH_HELMET_RHINO_ESS_DISPLAYNAME;

	model = "\rhsusf\addons\rhsusf_infantry2\gear\head\protech\pt_helmet_rhino_ESS";

	class ItemInfo: ItemInfo
	{
		uniformModel = "\rhsusf\addons\rhsusf_infantry2\gear\head\protech\pt_helmet_rhino_ESS";
	};
};