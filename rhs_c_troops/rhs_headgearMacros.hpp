//Faceware macros for helmet classes
//Note: allowedFacewear[] has issues with Zues. Units spawned by Zues gamemaster that utilize headgear randomization will not have random facewear...
#define STANDARD_FACEWEAR_MACRO allowedFacewear[] = {"", 8, "rhs_scarf", 1, "G_Aviator", 1};

#define HELMET_FACEWEAR_MACRO allowedFacewear[] = {"", 7, "rhs_scarf", 2, "G_Aviator", 1};

#define CREW_FACEWEAR_MACRO allowedFacewear[] = {"", 3, "rhs_scarf", 5, "G_Aviator", 2};

#define CREW_ESS_FACEWEAR_MACRO allowedFacewear[] = {"", 3, "rhs_scarf", 7};

#define DISABLE_FACEWEAR_MACRO allowedFacewear[] = { };


//Headgear macros for unit classes
//-Main macro
#define HEADGEAR_MACRO(pool) class EventHandlers: EventHandlers {\
		init = "if (local (_this select 0)) then {[(_this select 0), [], []] call BIS_fnc_unitHeadgear;}";\
	};\
	headgearList[] = { pool };

#define DISABLE_HEADGEAR_MACRO headgearList[] = { };

//-Headgear pools
//--Universal
#define HELI_CREW_HELMET_POOL \
	"rhs_zsh7a", 1, \
	"rhs_zsh7a_alt", 1
	
#define COMBAT_HELI_CREW_HELMET_POOL \
	"rhs_zsh7a_mike_green", 1, \
	"rhs_zsh7a_mike_green_alt", 1
//---EMR
#define EMR_CREW_HELMET_POOL \
	"rhs_tsh4", 1, \
	"rhs_tsh4_ess", 1, \
	"rhs_tsh4_bala", 1, \
	"rhs_tsh4_ess_bala", 1
//---Flora
#define FLORA_CREW_HELMET_POOL \
	"rhs_tsh4", 1, \
	"rhs_tsh4_ess", 1
//---Ratnik
#define RATNIK_CREW_HELMET_POOL \
	"rhs_6b48", 1

//--MSV
//---EMR
#define MSV_EMR_HELMET_POOL \
	"rhs_6b27m_digi", 10, \
	"rhs_6b27m_digi_ess", 10, \
	"rhs_6b27m_digi_bala", 5, \
	"rhs_6b27m_digi_ess_bala", 5, \
	"rhs_6b27m_green", 2, \
	"rhs_6b27m_green_ess", 2, \
	"rhs_6b27m_green_bala", 1, \
	"rhs_6b27m_green_ess_bala", 1
	
#define MSV_EMR_SNIPER_HELMET_POOL \
	"rhs_fieldcap_helm_digi", 50, \
	"rhs_Booniehat_digi", 10, \
	"rhs_beanie", 5, \
	"rhs_beanie_green", 5, \
	"rhs_6b27m_digi", 1, \
	"rhs_6b27m_digi_ess", 1, \
	"rhs_6b27m_digi_bala", 1, \
	"rhs_6b27m_digi_ess_bala", 1, \
	"rhs_6b27m_green", 1, \
	"rhs_6b27m_green_ess", 1, \
	"rhs_6b27m_green_bala", 1, \
	"rhs_6b27m_green_ess_bala", 1
//---Flora
#define MSV_FLORA_HELMET_POOL \
	"rhs_6b27m", 10, \
	"rhs_6b27m_ess", 10, \
	"rhs_6b27m_bala", 5, \
	"rhs_6b27m_ess_bala", 5, \
	"rhs_6b27m_green", 2, \
	"rhs_6b27m_green_ess", 2, \
	"rhs_6b27m_green_bala", 1, \
	"rhs_6b27m_green_ess_bala", 1
	
#define MSV_FLORA_SNIPER_HELMET_POOL \
	"rhs_fieldcap_helm", 50, \
	"rhs_Booniehat_flora", 10, \
	"rhs_beanie", 5, \
	"rhs_beanie_green", 5, \
	"rhs_6b27m", 1, \
	"rhs_6b27m_ess", 1, \
	"rhs_6b27m_bala", 1, \
	"rhs_6b27m_ess_bala", 1, \
	"rhs_6b27m_green", 1, \
	"rhs_6b27m_green_ess", 1, \
	"rhs_6b27m_green_bala", 1, \
	"rhs_6b27m_green_ess_bala", 1 
	
//--VDV
//---EMR
#define VDV_EMR_HELMET_POOL \
	"rhs_6b28", 10, \
	"rhs_6b28_ess", 10, \
	"rhs_6b28_bala", 5, \
	"rhs_6b28_ess_bala", 5, \
	"rhs_6b28_green", 2, \
	"rhs_6b28_green_ess", 2, \
	"rhs_6b28_green_bala", 1, \
	"rhs_6b28_green_ess_bala", 1
	
#define VDV_EMR_SNIPER_HELMET_POOL \
	"rhs_Booniehat_digi", 50, \
	"rhs_beanie", 5, \
	"rhs_beanie_green", 5, \
	"rhs_6b28", 1, \
	"rhs_6b28_ess", 1, \
	"rhs_6b28_bala", 1, \
	"rhs_6b28_ess_bala", 1, \
	"rhs_6b28_green", 1, \
	"rhs_6b28_green_ess", 1, \
	"rhs_6b28_green_bala", 1, \
	"rhs_6b28_green_ess_bala", 1
//---Flora
#define VDV_FLORA_HELMET_POOL \
	"rhs_6b28_flora", 10, \
	"rhs_6b28_flora_ess", 10, \
	"rhs_6b28_flora_bala", 5, \
	"rhs_6b28_flora_ess_bala", 5, \
	"rhs_6b28_green", 2, \
	"rhs_6b28_green_ess", 2, \
	"rhs_6b28_green_bala", 1, \
	"rhs_6b28_green_ess_bala", 1
	
#define VDV_FLORA_SNIPER_HELMET_POOL \
	"rhs_Booniehat_flora", 50, \
	"rhs_beret_vdv1", 10, \
	"rhs_beanie", 5, \
	"rhs_beanie_green", 5, \
	"rhs_6b28_flora", 1, \
	"rhs_6b28_flora_ess", 1, \
	"rhs_6b28_flora_bala", 1, \
	"rhs_6b28_flora_ess_bala", 1, \
	"rhs_6b28_green", 1, \
	"rhs_6b28_green_ess", 1, \
	"rhs_6b28_green_bala", 1, \
	"rhs_6b28_green_ess_bala", 1
//---Mountain Flora
#define VDV_MFLORA_HELMET_POOL \
	"rhs_6b27m_ml", 10, \
	"rhs_6b27m_ml_ess", 10, \
	"rhs_6b27m_ml_bala", 5, \
	"rhs_6b27m_ML_ess_bala", 5, \
	"rhs_6b27m_green", 2, \
	"rhs_6b27m_green_ess", 2, \
	"rhs_6b27m_green_bala", 1, \
	"rhs_6b27m_green_ess_bala", 1
	
#define VDV_MFLORA_SNIPER_HELMET_POOL \
	"rhs_beret_vdv1", 20, \
	"rhs_beanie", 10, \
	"rhs_beanie_green", 10, \
	"rhs_6b27m_ml", 1, \
	"rhs_6b27m_ml_ess", 1, \
	"rhs_6b27m_ml_bala", 1, \
	"rhs_6b27m_ML_ess_bala", 1, \
	"rhs_6b28_green", 1, \
	"rhs_6b28_green_ess", 1, \
	"rhs_6b28_green_bala", 1, \
	"rhs_6b28_green_ess_bala", 1 
	
//---Ratnik EMR
#define VDV_6B47_HELMET_POOL \
	"rhs_6b47_emr_1", 50, \
	"rhs_6b47_emr_2", 50, \
	"rhs_6b47_6B50", 50, \
	"rhs_6b47_bare", 1

#define VMF_6B47_HELMET_POOL \
	"rhs_6b47_emr_1", 50, \
	"rhs_6b47_emr_2", 50, \
	"rhs_6b47_6B50", 50, \
	"rhs_6b47_bare", 5

#define VMF_EMR_SNIPER_HELMET_POOL \
	"rhs_Booniehat_digi", 50, \
	"rhs_beret_mp1", 10, \
	"rhs_beanie", 10, \
	"rhs_beanie_green", 10, \
	"rhs_6b47_emr_1", 1, \
	"rhs_6b47_emr_2", 1, \
	"rhs_6b47_6B50", 1, \
	"rhs_6b47_bare", 1

//--VMF
#define VMF_FLORA_HELMET_POOL \
	"rhs_6b7_1m_flora", 15, \
	"rhs_6b7_1m_flora_ns3", 5, \
	"rhs_6b7_1m_bala1_flora", 5, \
	"rhs_6b7_1m_bala2_flora", 5, \
	"rhs_6b7_1m", 1, \
	"rhs_6b7_1m_ess", 1, \
	"rhs_6b7_1m_bala1", 1, \
	"rhs_6b7_1m_bala2", 1, \
	"rhs_6b7_1m_ess_bala", 1
	
#define VMF_FLORA_SNIPER_HELMET_POOL \
	"rhs_Booniehat_flora", 50, \
	"rhs_beret_mp1", 10, \
	"rhs_beanie", 10, \
	"rhs_beanie_green", 10, \
	"rhs_6b7_1m_flora", 1, \
	"rhs_6b7_1m_flora_ns3", 1, \
	"rhs_6b7_1m_bala1_flora", 1, \
	"rhs_6b7_1m_bala2_flora", 1, \
	"rhs_6b7_1m", 1, \
	"rhs_6b7_1m_ess", 1, \
	"rhs_6b7_1m_bala1", 1, \
	"rhs_6b7_1m_bala2", 1, \
	"rhs_6b7_1m_ess_bala", 1