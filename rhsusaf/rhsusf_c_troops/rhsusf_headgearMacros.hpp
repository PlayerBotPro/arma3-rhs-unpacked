//Faceware macros for helmet classes
//Note: allowedFacewear[] has issues with Zues. Units spawned by Zues gamemaster that utilize headgear randomization will not have random facewear...
#define EYEPRO_Macro allowedFacewear[] = {"", 6, "rhs_googles_black", 3, "rhs_googles_clear", 1};

#define GOGGLE_Macro allowedFacewear[] = {"", 7, "rhs_ess_black", 2, "rhs_googles_black", 1};

#define CVC_EYEPRO_D_Macro allowedFacewear[] = {"", 2, "rhs_googles_black", 3, "rhs_googles_clear", 1, "rhsusf_shemagh2_tan", 4};

#define CVC_EYEPRO_WD_Macro allowedFacewear[] = {"", 2, "rhs_googles_black", 3, "rhs_googles_clear", 1, "rhsusf_shemagh2_od", 4};

#define CVC_GOGGLE_D_Macro allowedFacewear[] = {"", 2, "rhs_ess_black", 2, "rhs_googles_black", 2, "rhs_googles_clear", 1, "rhsusf_shemagh2_tan", 5, "rhsusf_shemagh2_gogg_tan", 10};

#define CVC_GOGGLE_WD_Macro allowedFacewear[] = {"", 5, "rhs_ess_black", 2, "rhs_googles_black", 2, "rhs_googles_clear", 1, "rhsusf_shemagh2_od", 3, "rhsusf_shemagh2_gogg_od", 5};

#define DISABLE_FACEWEAR_MACRO allowedFacewear[] = { };

//Headgear macros for unit classes
//-Main macro
#define HEADGEAR_MACRO(pool) class EventHandlers: EventHandlers {\
		init = "if (local (_this select 0)) then {[(_this select 0), [], []] call BIS_fnc_unitHeadgear;}";\
	};\
	headgearList[] = { pool };

#define DISABLE_HEADGEAR_MACRO headgearList[] = { };


//-Headgear pools
//--Army
//---OCP
#define ARMY_OCP_HELMET_POOL \
	"rhsusf_ach_helmet_ocp", 5, \
	"rhsusf_ach_helmet_ocp_alt", 2, \
	"rhsusf_ach_helmet_ocp_norotos", 2, \
	"rhsusf_ach_helmet_ESS_ocp", 5, \
	"rhsusf_ach_helmet_ESS_ocp_alt", 2, \
	"rhsusf_ach_helmet_headset_ocp", 1, \
	"rhsusf_ach_helmet_headset_ess_ocp", 1, \
	"rhsusf_ach_helmet_camo_ocp", 1
		
#define ARMY_OCP_COMMS_HELMET_POOL \
	"rhsusf_ach_helmet_ocp", 1, \
	"rhsusf_ach_helmet_ocp_norotos", 1, \
	"rhsusf_ach_helmet_ESS_ocp", 1, \
	"rhsusf_ach_helmet_headset_ocp", 5, \
	"rhsusf_ach_helmet_headset_ocp_alt", 2, \
	"rhsusf_ach_helmet_headset_ess_ocp", 5, \
	"rhsusf_ach_helmet_headset_ess_ocp_alt", 2, \
	"rhsusf_ach_helmet_camo_ocp", 1
//Needs more Norotos variants
#define ARMY_AIRBORNE_OCP_HELMET_POOL \
	"rhsusf_ach_helmet_ocp", 2, \
	"rhsusf_ach_helmet_ocp_norotos", 5, \
	"rhsusf_ach_helmet_ESS_ocp", 1, \
	"rhsusf_ach_helmet_headset_ocp", 1, \
	"rhsusf_ach_helmet_headset_ess_ocp", 1, \
	"rhsusf_ach_helmet_camo_ocp", 2
//Needs more Norotos variants
#define ARMY_AIRBORNE_OCP_COMMS_HELMET_POOL \
	"rhsusf_ach_helmet_ocp", 1, \
	"rhsusf_ach_helmet_ocp_norotos", 3, \
	"rhsusf_ach_helmet_ESS_ocp", 1, \
	"rhsusf_ach_helmet_headset_ocp", 5, \
	"rhsusf_ach_helmet_headset_ess_ocp", 5, \
	"rhsusf_ach_helmet_camo_ocp", 2
		
#define ARMY_OCP_SNIPER_HELMET_POOL \
	"rhsusf_ach_bare_des", 5, \
	"rhsusf_ach_bare_des_ess", 5, \
	"rhsusf_ach_bare_des_headset", 5, \
	"rhsusf_ach_bare_des_headset_ess", 5, \
	"rhsusf_ach_bare_semi", 5, \
	"rhsusf_ach_bare_semi_ess", 5, \
	"rhsusf_ach_bare_semi_headset", 5, \
	"rhsusf_ach_bare_semi_headset_ess", 5,\
	"rhsusf_ach_helmet_ocp", 1, \
	"rhsusf_ach_helmet_ocp_norotos", 1, \
	"rhsusf_ach_helmet_ESS_ocp", 1, \
	"rhsusf_ach_helmet_headset_ocp", 1, \
	"rhsusf_ach_helmet_headset_ess_ocp", 1,\
	"rhsusf_ach_helmet_camo_ocp", 3
		
#define ARMY_OCP_CREW_HELMET_POOL \
	"rhsusf_cvc_helmet", 1, \
	"rhsusf_cvc_alt_helmet", 1, \
	"rhsusf_cvc_ess", 1
	
#define ARMY_OCP_HELI_PILOT_HELMET_POOL \
	"rhsusf_hgu56p", 1, \
	"rhsusf_hgu56p_visor", 1, \
	"rhsusf_hgu56p_black", 15,\
	"rhsusf_hgu56p_visor_black", 15,\
	"rhsusf_hgu56p_usa", .001, \
	"rhsusf_hgu56p_visor_usa", .001
	
#define ARMY_OCP_HELI_CREW_HELMET_POOL \
	"rhsusf_hgu56p_mask", 1, \
	"rhsusf_hgu56p_visor_mask", 1, \
	"rhsusf_hgu56p_visor_mask_skull", 1,\
	"rhsusf_hgu56p_mask_skull", 1, \
	"rhsusf_hgu56p_visor_mask_mo", 1, \
	"rhsusf_hgu56p_mask_mo", 1, \
	"rhsusf_hgu56p_mask_smiley", 1, \
	"rhsusf_hgu56p_visor_mask_smiley", 1, \
	"rhsusf_hgu56p_mask_black", 15, \
	"rhsusf_hgu56p_visor_mask_black", 15, \
	"rhsusf_hgu56p_visor_mask_black_skull", 15, \
	"rhsusf_hgu56p_mask_black_skull", 15, \
	"rhsusf_hgu56p_visor_mask_Empire_black", 15 
	
//---UCP
#define ARMY_UCP_HELMET_POOL \
	"rhsusf_ach_helmet_ucp", 5, \
	"rhsusf_ach_helmet_ucp_alt", 2, \
	"rhsusf_ach_helmet_ucp_norotos", 2, \
	"rhsusf_ach_helmet_ESS_ucp", 5, \
	"rhsusf_ach_helmet_ESS_ucp_alt", 1, \
	"rhsusf_ach_helmet_headset_ucp", 1, \
	"rhsusf_ach_helmet_headset_ess_ucp", 1

#define ARMY_UCP_COMMS_HELMET_POOL \
	"rhsusf_ach_helmet_ucp", 1, \
	"rhsusf_ach_helmet_ucp_norotos", 1, \
	"rhsusf_ach_helmet_ESS_ucp", 1, \
	"rhsusf_ach_helmet_headset_ucp", 5, \
	"rhsusf_ach_helmet_headset_ucp_alt", 2, \
	"rhsusf_ach_helmet_headset_ess_ucp", 5, \
	"rhsusf_ach_helmet_headset_ess_ucp_alt", 2
//Needs more Norotos variants
#define ARMY_AIRBORNE_UCP_HELMET_POOL \
	"rhsusf_ach_helmet_ucp", 2, \
	"rhsusf_ach_helmet_ucp_norotos", 5, \
	"rhsusf_ach_helmet_ESS_ucp", 2, \
	"rhsusf_ach_helmet_headset_ucp", 1, \
	"rhsusf_ach_helmet_headset_ess_ucp", 1
//Needs more Norotos variants
#define ARMY_AIRBORNE_UCP_COMMS_HELMET_POOL \
	"rhsusf_ach_helmet_ucp", 1, \
	"rhsusf_ach_helmet_ucp_norotos", 3, \
	"rhsusf_ach_helmet_ESS_ucp", 1, \
	"rhsusf_ach_helmet_headset_ucp", 5, \
	"rhsusf_ach_helmet_headset_ess_ucp", 5

#define ARMY_UCP_SNIPER_HELMET_POOL \
	"rhsusf_ach_bare_wood", 5, \
	"rhsusf_ach_bare_wood_ess", 5, \
	"rhsusf_ach_bare_wood_headset", 5, \
	"rhsusf_ach_bare_wood_headset_ess", 5,\
	"rhsusf_ach_bare_semi", 5, \
	"rhsusf_ach_bare_semi_ess", 5, \
	"rhsusf_ach_bare_semi_headset", 5, \
	"rhsusf_ach_bare_semi_headset_ess", 5, \
	"rhsusf_ach_helmet_ucp", 1, \
	"rhsusf_ach_helmet_ucp_norotos", 1, \
	"rhsusf_ach_helmet_ESS_ucp", 1, \
	"rhsusf_ach_helmet_headset_ucp", 1, \
	"rhsusf_ach_helmet_headset_ess_ucp", 1

#define ARMY_UCP_CREW_HELMET_POOL \
	"rhsusf_cvc_green_helmet", 1, \
	"rhsusf_cvc_green_alt_helmet", 1, \
	"rhsusf_cvc_green_ess", 1
	
#define ARMY_UCP_HELI_PILOT_HELMET_POOL \
	"rhsusf_hgu56p", 15, \
	"rhsusf_hgu56p_visor", 15, \
	"rhsusf_hgu56p_black", 2, \
	"rhsusf_hgu56p_visor_black", 2, \
	"rhsusf_hgu56p_usa", .001, \
	"rhsusf_hgu56p_visor_usa", .001
	
#define ARMY_UCP_HELI_CREW_HELMET_POOL \
	"rhsusf_hgu56p_mask", 15, \
	"rhsusf_hgu56p_visor_mask", 15, \
	"rhsusf_hgu56p_visor_mask_skull", 15, \
	"rhsusf_hgu56p_mask_skull", 15, \
	"rhsusf_hgu56p_visor_mask_mo", 15, \
	"rhsusf_hgu56p_mask_mo", 15, \
	"rhsusf_hgu56p_mask_smiley", 15, \
	"rhsusf_hgu56p_visor_mask_smiley",15, \
	"rhsusf_hgu56p_mask_black", 2, \
	"rhsusf_hgu56p_visor_mask_black", 2, \
	"rhsusf_hgu56p_visor_mask_black_skull", 2, \
	"rhsusf_hgu56p_mask_black_skull", 2, \
	"rhsusf_hgu56p_visor_mask_Empire_black", 2
	
	
//--USMC
//---WD
#define USMC_WD_HELMET_POOL \
	"rhsusf_lwh_helmet_marpatwd", 5, \
	"rhsusf_lwh_helmet_marpatwd_ess", 5, \
	"rhsusf_lwh_helmet_marpatwd_headset", 1, \
	"rhsusf_lwh_helmet_marpatwd_headset_blk2", 1 

//---D
#define USMC_D_HELMET_POOL \
	"rhsusf_lwh_helmet_marpatd", 5, \
	"rhsusf_lwh_helmet_marpatd_ess", 5, \
	"rhsusf_lwh_helmet_marpatd_headset", 1

	
//--MARSOC