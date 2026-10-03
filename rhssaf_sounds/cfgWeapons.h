// Makro
#define PACKAGE(WPNNAME,TAILNAME) soundSetShot[] = {RHSSAF_##WPNNAME##_Shot_SoundSet,RHSSAF_##TAILNAME##_Tail_SoundSet};

class CfgWeapons {
	class Rifle_Base_F;
	class Pistol_Base_F;
	class arifle_MX_Base_F: Rifle_Base_F {};
	class Rifle_Long_Base_F;
	class UGL_F;
	class srifle_EBR_F;
	class LMG_Mk200_F;
	class MGun;
	class LMG_RCWS: MGun {};
	class SMG_01_Base;
	class SMG_01_F : SMG_01_Base {
		class Single;
		class FullAuto;
		class WeaponSlotsInfo;
		class GunParticles;
	};
	class Launcher;
	class Launcher_Base_F : Launcher{};
	class launch_O_Titan_F;

	#include "RHSSAF_c_rifles.hpp"
	//#include "RHSSAF_c_pistols.hpp"
	#include "RHSSAF_c_mg.hpp"
};

