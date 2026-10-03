class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;

class CfgWeapons {
	class Default;
	class Rifle;
	class Rifle_Base_F : Rifle {
		class Eventhandlers;
	};
	class Rifle_Short_Base_F: Rifle_Base_F {};
	class Pistol;
	class Pistol_Base_F : Pistol {};
	class Rifle_Long_Base_F : Rifle_Base_F {};
	class UGL_F;
	class EBR_base_F;
	class srifle_EBR_F : EBR_base_F {};
	class Launcher;
	class Launcher_Base_F : Launcher{};
	
	class LMG_Mk200_F: Rifle_Long_Base_F {};
	class arifle_MX_Base_F: Rifle_Base_F {};
	
	class SMG_02_base_F : Rifle_Short_Base_F {
		class Single;
		class FullAuto;
		class WeaponSlotsInfo;
		class GunParticles;
	};
	
	#include "c_pistols.hpp"
	#include "c_mps.hpp"
	#include "c_rifles.hpp"
	#include "c_lmgs.hpp"
	#include "c_mg.hpp"
	#include "c_cannons.hpp"
	#include "c_launchers.hpp"
};

