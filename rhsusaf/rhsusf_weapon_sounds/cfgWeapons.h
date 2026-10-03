// Makro
#define PACKAGE(WPNNAME,TAILNAME) soundSetShot[] = {RHSUSF_##WPNNAME##_Shot_SoundSet,RHSUSF_##TAILNAME##_Tail_SoundSet};
#define PACKAGE_VEH(WPNNAME,TAILNAME) soundSetShot[] = {RHSUSF_veh_##WPNNAME##_Shot_SoundSet,RHSUSF_veh_##WPNNAME##_int_Shot_SoundSet,RHSUSF_VEH_##TAILNAME##_Tail_SoundSet};


class CfgWeapons {
	class Rifle;
	class Rifle_Base_F : Rifle {
		class Eventhandlers;
	};
	class Pistol_Base_F;
	class arifle_MX_Base_F: Rifle_Base_F {};
	class Rifle_Short_Base_F: Rifle_Base_F {};
	class Rifle_Long_Base_F : Rifle_Base_F {};
	class UGL_F;
	class srifle_EBR_F;
	class LMG_Mk200_F: Rifle_Long_Base_F {};
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
	
	#include "RHSUSF_c_pistols.hpp"
	#include "RHSUSF_c_rifles.hpp"
	#include "RHSUSF_c_mg.hpp"
	#include "RHSUSF_c_mGun.hpp"
	#include "RHSUSF_c_cannon.hpp"
};

