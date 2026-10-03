// Makro
#define PACKAGE(WPNNAME,TAILNAME) soundSetShot[] = {RHS_##WPNNAME##_Shot_SoundSet,RHS_##TAILNAME##_Tail_SoundSet};
#define PACKAGE_VEH(WPNNAME,TAILNAME) soundSetShot[] = {RHS_veh_##WPNNAME##_Shot_SoundSet,RHS_veh_##WPNNAME##_int_Shot_SoundSet,RHS_VEH_##TAILNAME##_Tail_SoundSet};

class CfgWeapons {
	class Rifle_Base_F;
	class Pistol_Base_F;
	class arifle_MX_Base_F: Rifle_Base_F {};
	class Rifle_Short_Base_F;
	class Rifle_Long_Base_F;
	class UGL_F;
	class srifle_EBR_F;
	class LMG_Mk200_F;
	class MGun;
	class LMG_RCWS: MGun {};
	class SMG_02_base_F : Rifle_Short_Base_F {
		class Single;
		class FullAuto;
		class WeaponSlotsInfo;
	};
	class Launcher;
	class Launcher_Base_F : Launcher{};
	class launch_O_Titan_F;
	class pdw2000_base_F;
	class hgun_PDW2000_F : pdw2000_base_F {
		class Single;
		class FullAuto;
		class WeaponSlotsInfo;
	};
	
	
	#include "RHS_c_pistols.hpp"
	#include "RHS_c_rifles.hpp"
	#include "RHS_c_mg.hpp"
};

