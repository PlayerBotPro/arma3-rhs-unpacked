class HMG_127;
class HMG_01;
class HMG_M2 : HMG_01 {
	class manual;
	class close;
	class short;
	class medium;
	class far;
};
class Gatling_30mm_Plane_CAS_01_F : CannonCore {
	class LowROF;
};
class RHS_M2_Abrams_Commander: HMG_M2
{
	ballisticsComputer = 2; // Disabled
	canLock = 0;
	initspeed=0;
	magazines[] = {
		"rhs_mag_100rnd_127x99_mag",
		"rhs_mag_100rnd_127x99_mag_Tracer_Red",
		"rhs_mag_100rnd_127x99_mag_Tracer_Green",
		"rhs_mag_100rnd_127x99_mag_Tracer_Yellow",
		"rhs_mag_100rnd_127x99_SLAP_mag",
		"rhs_mag_100rnd_127x99_SLAP_mag_Tracer_Red",
		"rhs_mag_100rnd_127x99_SLAP_mag_Tracer_Green",
		"rhs_mag_100rnd_127x99_SLAP_mag_Tracer_Yellow"
	};

	class GunParticles {
		class effect1 {
			positionname = "usti hlavne3";
			directionname = "konec hlavne3";
			effectname = "MachineGunCloud";
		};
		class effect2 {
			positionname = "nabojnicestart";
			directionname = "nabojniceend";
			effectname = "MachineGunEject";
		};
		class effect3 {
			positionname = "nabojnicestart";
			directionname = "nabojniceend";
			effectname = "MachineGunCartridge2";
		};
		class RHSUSF_BarrelRefract
		{
			positionName = "usti hlavne3";
			directionName = "usti hlavne3";
			effectName = "RHSUSF_BarrelRefractHeavy";
		};
	};
	reloadMagazineSound[] = {"a3\Sounds_F\arsenal\weapons_static\Static_HMG\reload_static_HMG",1,1,10};
};
class RHS_M2_Abrams_Gunner: HMG_M2
{
	displayName = "M2 CSAMM"; //Counter Sniper Anti-Material Mount
	displaynameshort = "M2 CSAMM";
	canLock = 0;
	initspeed=0;
	magazines[] = {
		"rhs_mag_100rnd_127x99_mag",
		"rhs_mag_100rnd_127x99_mag_Tracer_Red",
		"rhs_mag_100rnd_127x99_mag_Tracer_Green",
		"rhs_mag_100rnd_127x99_mag_Tracer_Yellow",
		"rhs_mag_100rnd_127x99_SLAP_mag",
		"rhs_mag_100rnd_127x99_SLAP_mag_Tracer_Red",
		"rhs_mag_100rnd_127x99_SLAP_mag_Tracer_Green",
		"rhs_mag_100rnd_127x99_SLAP_mag_Tracer_Yellow",
		"rhs_mag_200rnd_127x99_mag",
		"rhs_mag_200rnd_127x99_mag_Tracer_Red",
		"rhs_mag_200rnd_127x99_SLAP_mag",
		"rhs_mag_200rnd_127x99_SLAP_mag_Tracer_Red"
	};

	class GunParticles {
		class effect1 {
			positionname = "usti hlavne4";
			directionname = "konec hlavne4";
			effectname = "MachineGunCloud";
		};
		class effect2 {
			positionname = "nabojnicestart2";
			directionname = "nabojniceend2";
			effectname = "MachineGunEject";
		};
		class effect3 {
			positionname = "nabojnicestart2";
			directionname = "nabojniceend2";
			effectname = "MachineGunCartridge2";
		};
		class RHSUSF_BarrelRefract
		{
			positionName = "usti hlavne4";
			directionName = "usti hlavne4";
			effectName = "RHSUSF_BarrelRefractHeavy";
		};
	};
	reloadMagazineSound[] = {"a3\Sounds_F\arsenal\weapons_static\Static_HMG\reload_static_HMG",1,1,10};
};

class RHS_M2: HMG_M2
{
	type = 1;
	ballisticsComputer = 2; // Manual zeroing
	canLock = 0;
	initspeed=0;
	cursor = "EmptyCursor";
	//cursoraim = "EmptyCursor";
	cursoraimon = "EmptyCursor";
	magazines[] =
	{
		"rhs_mag_100rnd_127x99_mag",
		"rhs_mag_100rnd_127x99_mag_Tracer_Red",
		"rhs_mag_100rnd_127x99_mag_Tracer_Green",
		"rhs_mag_100rnd_127x99_mag_Tracer_Yellow",
		"rhs_mag_100rnd_127x99_SLAP_mag",
		"rhs_mag_100rnd_127x99_SLAP_mag_Tracer_Red",
		"rhs_mag_100rnd_127x99_SLAP_mag_Tracer_Green",
		"rhs_mag_100rnd_127x99_SLAP_mag_Tracer_Yellow",
		"rhs_mag_200rnd_127x99_mag",
		"rhs_mag_200rnd_127x99_mag_Tracer_Red",
		"rhs_mag_200rnd_127x99_SLAP_mag",
		"rhs_mag_200rnd_127x99_SLAP_mag_Tracer_Red"
	};
	class GunParticles {
		class effect1 {
			positionname = "usti hlavne";
			directionname = "konec hlavne";
			effectname = "MachineGunCloud";
		};
		class effect2 {
			positionname = "nabojnicestart";
			directionname = "nabojniceend";
			effectname = "MachineGunEject";
		};
		class effect3 {
			positionname = "nabojnicestart2";
			directionname = "nabojniceend2";
			effectname = "MachineGunCartridge2";
		};
		class RHSUSF_BarrelRefract
		{
			positionName = "usti hlavne";
			directionName = "usti hlavne";
			effectName = "RHSUSF_BarrelRefractHeavy";
		};
	};
	class manual: manual {};
	class close: close {};
	class short: short {};
	class medium: medium {};
	class far: far {};
	reloadMagazineSound[] = {"a3\Sounds_F\arsenal\weapons_static\Static_HMG\reload_static_HMG",1,1,10};
};

class RHS_M2_offroad: RHS_M2
{
	aiDispersionCoefX = 7.0;
	aiDispersionCoefY = 9.0;
	class GunParticles: GunParticles {
		class effect3
		{
			positionName = "nabojnicestart";
			directionName = "nabojniceend";
			effectName = "MachineGunCartridge2";
		};
	};
};

class RHS_M2_M1117: RHS_M2
{
	class GunParticles
	{
		class effect1
		{
			positionname = "kulas";
			directionname = "ZaslehKulas";
			effectname = "MachineGunCloud";
		};
		class RHSUSF_BarrelRefract: effect1
		{
			effectName = "RHSUSF_BarrelRefractHeavy";
		};
	};
};
class RHS_MKV_M2_p: RHS_M2
{
	aiDispersionCoefX = 7.0;
	aiDispersionCoefY = 9.0;
	class GunParticles
	{
		class effect1
		{
			positionName = "m2_p_muzzle";
			directionName = "m2_p_endBarrel";
			effectName = "MachineGunCloud";
		};
		class effect2
		{
			positionName = "m2_p_caseStart";
			directionName = "m2_p_caseEnd";
			effectName = "MachineGunEject";
		};
		class effect3
		{
			positionName = "m2_p_caseStart";
			directionName = "m2_p_caseEnd";
			effectName = "MachineGunCartridge2";
		};
	};
	scope = 1;
	selectionfireanim = "m2_p_flash";
	displayName = "Port M2";
};
class RHS_MKV_M2_s: RHS_MKV_M2_p
{
	displayName = "Stbd M2";
	class GunParticles
	{
		class effect1
		{
			positionName = "m2_s_muzzle";
			directionName = "m2_s_endBarrel";
			effectName = "MachineGunCloud";
		};
		class effect2
		{
			positionName = "m2_s_caseStart";
			directionName = "m2_s_caseEnd";
			effectName = "MachineGunEject";
		};
		class effect3
		{
			positionName = "m2_s_caseStart";
			directionName = "m2_s_caseEnd";
			effectName = "MachineGunCartridge2";
		};
	};
	selectionfireanim = "m2_s_flash";
};
class RHS_M2_CROWS_M151: RHS_M2
{
	magazineReloadTime = 25;
	ballisticsComputer = "2 + 16"; // Manual zeroing + FCS, Prediction based on laser distance and speed measurement; since Arma 3 1.70
	magazines[] =
	{
		"rhs_mag_100rnd_127x99_mag",
		"rhs_mag_100rnd_127x99_mag_Tracer_Red",
		"rhs_mag_100rnd_127x99_mag_Tracer_Green",
		"rhs_mag_100rnd_127x99_mag_Tracer_Yellow",
		"rhs_mag_100rnd_127x99_SLAP_mag",
		"rhs_mag_100rnd_127x99_SLAP_mag_Tracer_Red",
		"rhs_mag_100rnd_127x99_SLAP_mag_Tracer_Green",
		"rhs_mag_100rnd_127x99_SLAP_mag_Tracer_Yellow",
		"rhs_mag_200rnd_127x99_mag",
		"rhs_mag_200rnd_127x99_mag_Tracer_Red",
		"rhs_mag_200rnd_127x99_SLAP_mag",
		"rhs_mag_200rnd_127x99_SLAP_mag_Tracer_Red",
		"rhs_mag_400rnd_127x99_mag",
		"rhs_mag_400rnd_127x99_mag_Tracer_Red",
		"rhs_mag_400rnd_127x99_SLAP_mag",
		"rhs_mag_400rnd_127x99_SLAP_mag_Tracer_Red"
	};
};
class RHS_M2_CROWS_M153: RHS_M2_CROWS_M151
{
};
class RHS_M2_CROWS_M153_Abrams: RHS_M2_CROWS_M153
{
	class GunParticles {
		class effect1 {
			positionname = "CROWS usti";
			directionname = "CROWS konec";
			effectname = "MachineGunCloud";
		};
		class effect2 {
			positionname = "nabojnicestart2";
			directionname = "nabojniceend2";
			effectname = "MachineGunEject";
		};
		class effect3 {
			positionname = "nabojnicestart2";
			directionname = "nabojniceend2";
			effectname = "MachineGunCartridge2";
		};
		class RHSUSF_BarrelRefract
		{
			positionName = "CROWS usti";
			directionName = "CROWS usti";
			effectName = "RHSUSF_BarrelRefractHeavy";
		};
	};
};

class rhs_weap_gau21_1: RHS_M2
{
	aiDispersionCoefX = 7.0;
	aiDispersionCoefY = 9.0;
	displayName = "GAU-21";
	magazines[] =
	{
		"rhs_mag_100rnd_127x99_mag",
		"rhs_mag_100rnd_127x99_mag_Tracer_Red",
		"rhs_mag_100rnd_127x99_mag_Tracer_Green",
		"rhs_mag_100rnd_127x99_mag_Tracer_Yellow",
		"rhs_mag_100rnd_127x99_SLAP_mag",
		"rhs_mag_100rnd_127x99_SLAP_mag_Tracer_Red",
		"rhs_mag_100rnd_127x99_SLAP_mag_Tracer_Green",
		"rhs_mag_100rnd_127x99_SLAP_mag_Tracer_Yellow",
		"rhs_mag_200rnd_127x99_mag",
		"rhs_mag_200rnd_127x99_mag_Tracer_Red",
		"rhs_mag_200rnd_127x99_SLAP_mag",
		"rhs_mag_200rnd_127x99_SLAP_mag_Tracer_Red",
		"rhs_mag_300rnd_127x99_mag",
		"rhs_mag_300rnd_127x99_mag_Tracer_Red",
		"rhs_mag_300rnd_127x99_SLAP_mag",
		"rhs_mag_300rnd_127x99_SLAP_mag_Tracer_Red"
	};
	class GunParticles {
		class effect1 {
			positionname = "muzzle_1";
			directionname = "chamber_1";
			effectname = "MachineGunCloud";
		};
		class effect2 {
			positionname = "link_pos1";
			directionname = "link_dir1";
			effectname = "MachineGunEject";
		};
		class effect3 {
			positionname = "cart_pos1";
			directionname = "cart_dir1";
			effectname = "MachineGunCartridge2";
		};
		class RHSUSF_BarrelRefract
		{
			positionName = "muzzle_1";
			directionName = "muzzle_1";
			effectName = "RHSUSF_BarrelRefractHeavy";
		};
	};
	class manual: manual
	{
		reloadTime = .0585;
	};
	class close: close
	{
		reloadTime = .0585;
	};
	class short: short
	{
		reloadTime = .0585;
	};
	class medium: medium
	{
		reloadTime = .0585;
	};
	class far: far
	{
		reloadTime = .0585;
	};
};

class rhs_weap_M3W_A29: rhs_weap_gau21_1
{
	displayName = "2xM3 HMG";
	selectionFireAnim[]=
	{
		"zasleh"
	};
	cursorAim = "EmptyCursor";
	class manual: manual
	{
		reloadTime = 0.0273;
	};
	class close: close
	{
		reloadTime		= 0.0273;

		burst					= 4;
		burstRangeMax			= 19;
		aiBurstTerminable		= 1;
		aiRateOfFire			= 1;
		aiRateOfFireDistance	= 200;
		aiRateOfFireDispersion	= 1;

		minRange				= 0;
		minRangeProbab			= 0.2;
		midRange				= 120;
		midRangeProbab			= 0.7;
		maxRange				= 150;
		maxRangeProbab			= 0.1;
	};
	class short: short
	{
		reloadTime = 0.0273;

		burst					= 14;
		burstRangeMax			= 10;
		aiBurstTerminable		= 1;
		aiRateOfFire			= 2;
		aiRateOfFireDistance	= 350;
		aiRateOfFireDispersion	= 2;

		minRange				= 120;
		minRangeProbab			= 0.2;
		midRange				= 320;
		midRangeProbab			= 0.7;
		maxRange				= 450;
		maxRangeProbab			= 0.1;
	};
	class medium: medium
	{
		reloadTime = 0.0273;

		burst					= 9;
		burstRangeMax			= 9;
		aiBurstTerminable		= 1;
		aiRateOfFire			= 4;
		aiRateOfFireDistance	= 500;
		aiRateOfFireDispersion	= 2;

		minRange				= 400;
		minRangeProbab			= 0.2;
		midRange				= 520;
		midRangeProbab			= 0.7;
		maxRange				= 750;
		maxRangeProbab			= 0.1;
	};
	class far: far
	{
		reloadTime = 0.0273;

		burst					= 7;
		burstRangeMax			= 10;
		aiBurstTerminable		= 1;
		aiRateOfFire			= 4;
		aiRateOfFireDistance	= 950;
		aiRateOfFireDispersion	= 2;

		minRange				= 700;
		minRangeProbab			= 0.2;
		midRange				= 920;
		midRangeProbab			= 0.7;
		maxRange				= 1350;
		maxRangeProbab			= 0.1;
	};
	magazines[] =
	{
		"rhs_mag_100rnd_127x99_mag",
		"rhs_mag_100rnd_127x99_mag_Tracer_Red",
		"rhs_mag_100rnd_127x99_mag_Tracer_Green",
		"rhs_mag_100rnd_127x99_mag_Tracer_Yellow",
		"rhs_mag_100rnd_127x99_SLAP_mag",
		"rhs_mag_100rnd_127x99_SLAP_mag_Tracer_Red",
		"rhs_mag_100rnd_127x99_SLAP_mag_Tracer_Green",
		"rhs_mag_100rnd_127x99_SLAP_mag_Tracer_Yellow",
		"rhs_mag_200rnd_127x99_mag",
		"rhs_mag_200rnd_127x99_mag_Tracer_Red",
		"rhs_mag_200rnd_127x99_SLAP_mag",
		"rhs_mag_200rnd_127x99_SLAP_mag_Tracer_Red",
		"rhs_mag_300rnd_127x99_mag",
		"rhs_mag_300rnd_127x99_mag_Tracer_Red",
		"rhs_mag_300rnd_127x99_SLAP_mag",
		"rhs_mag_300rnd_127x99_SLAP_mag_Tracer_Red",
		"rhs_mag_400rnd_127x99_mag",
		"rhs_mag_400rnd_127x99_mag_Tracer_Red",
		"rhs_mag_400rnd_127x99_SLAP_mag",
		"rhs_mag_400rnd_127x99_SLAP_mag_Tracer_Red",
		"rhs_mag_400rnd_127x99_mag_AI",
		"rhs_mag_400rnd_127x99_mag_Tracer_Red_AI",
		"rhs_mag_400rnd_127x99_SLAP_mag_AI",
		"rhs_mag_400rnd_127x99_SLAP_mag_Tracer_Red_AI",
		"rhs_mag_400rnd_127x99_mag_Plane",
		"rhs_mag_400rnd_127x99_mag_Tracer_Red_Plane",
		"rhs_mag_400rnd_127x99_SLAP_mag_Plane",
		"rhs_mag_400rnd_127x99_SLAP_mag_Tracer_Red_Plane"
	};
	class GunParticles
	{
		class effect1
		{
			positionName = "usti hlavne 1";
			directionName = "konec hlavne 1";
			effectName = "MachineGunCloud";
		};
		class effect2
		{
			positionName = "MGCasingL";
			directionName = "MGCasingDirL";
			effectName = "MachineGunCartridge1";
		};
		class effect3: effect1
		{
			positionName = "usti hlavne 2";
			directionName = "konec hlavne 2";
		};
		class effect4: effect2
		{
			positionName = "MGCasingR";
			directionName = "MGCasingDirR";
		};
	};
};

class LMG_RCWS;
class LMG_M200 : LMG_RCWS {
	class manual;
	class close;
	class short;
	class medium;
	class far;
};
class rhs_weap_m240veh: LMG_M200
{
	type = 1;
	ballisticsComputer = 2; // Manual zeroing
	canLock = 0;
	initspeed=0;
	cursor = "EmptyCursor";
	cursoraim = "EmptyCursor";
	cursoraimon = "EmptyCursor";
	scope = 1;
	aidispersioncoefx = __EVAL(7*1.2);
	aidispersioncoefy = __EVAL(8*1.2);
	displayName = "M240";
	displaynameshort = "M240";

	class manual: manual
	{
		reloadTime = .0631;
	};
	class close: close
	{
		reloadTime = .0631;
	};
	class short: short
	{
		reloadTime = .0631;
	};
	class medium: medium
	{
		reloadTime = .0631;
	};
	class far: far
	{
		reloadTime = .0631;
	};

	magazines[] =
	{
		"rhs_mag_1100Rnd_762x51_M240",
		"rhs_mag_762x51_M240_1200",
		"rhs_mag_762x51_M240_200",
		"rhs_mag_762x51_M240_200_M80"
	};
	magazineReloadTime = 12;
	class GunParticles
	{
		class effect1 {
			directionname = "kulas";
			positionname = "kulas start";
			effectname = "MachineGunCloud";
		};
	};
};
class rhs_weap_m240veh_mounted: rhs_weap_m240veh
{
	magazinereloadtime	= 7;
};
//M240
class rhs_weap_m240_abrams: rhs_weap_m240veh
{
	class GunParticles
	{
		class effect1
		{
			positionname = "usti hlavne5";
			directionname = "konec hlavne5";
			effectname = "MachineGunCloud";
		};
		class RHSUSF_BarrelRefract
		{
			positionname = "usti hlavne5";
			directionname = "konec hlavne5";
			effectName = "RHSUSF_BarrelRefractHeavy";
		};
	};
};
//M240B
class rhs_weap_m240_m113: rhs_weap_m240veh_mounted
{
	reloadMagazineSound[] = {"rhsusf\addons\rhsusf_sounds\m240\reload",1.3,1,30};
	cursorAim = "mg";
	displayName = "M240B";
	displaynameshort = "M240B";
	class manual: manual
	{
		reloadTime = .075;
	};
	class close: close
	{
		reloadTime = .075;
	};
	class short: short
	{
		reloadTime = .075;
	};
	class medium: medium
	{
		reloadTime = .075;
	};
	class far: far
	{
		reloadTime = .075;
	};

	class GunParticles
	{
		class M240_AmmoBeltLinkEject
		{
			positionName = "ammobeltlinks_start";
			directionName = "ammobeltlinks_end";
			effectName = "MachineGunEject2";
		};
		class M240_AmmoBeltCaseEject
		{
			positionName = "shelleject_start";
			directionName = "shelleject_end";
			effectName = "RHSUSF_762Cartridge";
		};
		class M240_WhiteGas
		{
			positionName = "usti hlavne";
			directionName = "konec hlavne";
			effectName = "RifleAssaultCloud";
		};
		class M240_RHSUSF_BarrelRefract
		{
			positionName = "usti hlavne";
			directionName = "usti hlavne up";
			effectName = "RHSUSF_BarrelRefractHeavy";
		};
	};
};
class rhs_weap_m240_m1134: rhs_weap_m240_m113
{
	class GunParticles
	{
		class M240_AmmoBeltLinkEject
		{
			positionName = "ammobeltlinks_start";
			directionName = "ammobeltlinks_end";
			effectName = "MachineGunEject2";
		};
		class M240_AmmoBeltCaseEject
		{
			positionName = "shelleject_start";
			directionName = "shelleject_end";
			effectName = "RHSUSF_762Cartridge";
		};
		class M240_WhiteGas
		{
			positionName = "Weapon_Gun_Beg";
			directionName = "Weapon_Gun_End";
			effectName = "RifleAssaultCloud";
		};
		class M240_RHSUSF_BarrelRefract
		{
			positionName = "Weapon_Gun_Beg";
			directionName = "Weapon_Gun_Beg_Up";
			effectName = "RHSUSF_BarrelRefractHeavy";
		};
	};
};
class rhs_weap_m240_gmv_r: rhs_weap_m240veh_mounted
{
	cursorAim = "mg";
	displayName = "M240B";
	displaynameshort = "M240B";
	class manual: manual
	{
		reloadTime = 0.075;
	};
	class close: close
	{
		reloadTime = 0.075;
	};
	class short: short
	{
		reloadTime = 0.075;
	};
	class medium: medium
	{
		reloadTime = 0.075;
	};
	class far: far
	{
		reloadTime = 0.075;
	};

	class GunParticles
	{
		class M240_AmmoBeltLinkEject
		{
			positionName = "swingarm_r_ammobeltlinks_start";
			directionName = "swingarm_r_ammobeltlinks_end";
			effectName = "MachineGunEject2";
		};
		class M240_AmmoBeltCaseEject
		{
			positionName = "swingarm_r_shelleject_start";
			directionName = "swingarm_r_shelleject_end";
			effectName = "RHSUSF_762Cartridge";
		};
		class M240_WhiteGas
		{
			positionName = "swingarm_r_usti";
			directionName = "swingarm_r_konec";
			effectName = "RifleAssaultCloud";
		};
		class M240_RHSUSF_BarrelRefract
		{
			positionName = "swingarm_r_usti";
			directionName = "swingarm_r_usti_up";
			effectName = "RHSUSF_BarrelRefractHeavy";
		};
	};
};
class rhs_weap_m240_gmv_l: rhs_weap_m240_gmv_r
{
	class GunParticles
	{
		class M240_AmmoBeltLinkEject
		{
			positionName	= "swingarm_l_ammobeltlinks_start";
			directionName	= "swingarm_l_ammobeltlinks_end";
			effectName		= "MachineGunEject2";
		};
		class M240_AmmoBeltCaseEject
		{
			positionName	= "swingarm_l_shelleject_start";
			directionName	= "swingarm_l_shelleject_end";
			effectName		= "RHSUSF_762Cartridge";
		};
		class M240_WhiteGas
		{
			positionName	= "swingarm_l_usti";
			directionName	= "swingarm_l_konec";
			effectName		= "RifleAssaultCloud";
		};
		class M240_RHSUSF_BarrelRefract
		{
			positionName	= "swingarm_l_usti";
			directionName	= "swingarm_l_usti_up";
			effectName		= "RHSUSF_BarrelRefractHeavy";
		};
	};
};
//M240
class rhs_weap_m240_abrams_coax: rhs_weap_m240veh
{
	class GunParticles
	{
		class effect1
		{
			positionname = "usti hlavne2";
			directionname = "konec hlavne2";
			effectname = "MachineGunCloud";
		};
	};
};
//M240C (right hand feed for BFV's and LAV-25)
class rhs_weap_m240_bradley_coax: rhs_weap_m240veh
{
	displayName = "M240C";
	displaynameshort = "M240C";

	ballisticsComputer = "2 + 16";
	minZeroing = 200;
};

class rhs_weap_m240H : rhs_weap_m240veh_mounted
{
	displayName = "M240H";
	displaynameshort = "M240H";
	cursor = "EmptyCursor";
	cursoraim = "mg";
	cursoraimon = "EmptyCursor";
	class manual: manual
	{
		displayName = "M240H";
	};
};

class rhs_weap_m240H_1 : rhs_weap_m240H
{
	class GunParticles
	{
		class FirstEffect
		{
			effectName = "MachineGun1";
			positionName = "muzzle_1";
			directionName = "chamber_1";
		};
		class effect1
		{
			positionName = "shelleject_1_start";
			directionName = "shelleject_1_end";
			effectName = "RHSUSF_762Cartridge";
		};
		class RHSUSF_BarrelRefract
		{
			positionName = "muzzle_1";
			directionName = "muzzle_1";
			effectName = "RHSUSF_BarrelRefractHeavy";
		};
	};
};
class rhs_weap_m240H_2 : rhs_weap_m240H_1
{
	class GunParticles
	{
		class SecondEffect
		{
			effectName = "MachineGun1";
			positionName = "muzzle_2";
			directionName = "chamber_2";
		};
		class effect2
		{
			positionName = "shelleject_2_start";
			directionName = "shelleject_2_end";
			effectName = "RHSUSF_762Cartridge";
		};
		class RHSUSF_BarrelRefract
		{
			positionName = "muzzle_2";
			directionName = "muzzle_2";
			effectName = "RHSUSF_BarrelRefractHeavy";
		};
	};
};

class MGunCore;
class M134_minigun : MGunCore
{
	class LowROF;
};
class rhs_weap_m134_minigun_1: M134_minigun
{
	displayName = "M134 Minigun 7.62mm";
	magazines[] = {"rhs_mag_762x51_m80a1_4000"};
	class GunParticles
	{
		class FirstEffect
		{
			effectName = "MachineGun1";
			positionName = "muzzle_1";
			directionName = "chamber_1";
		};
		class effect1
		{
			positionName = "machinegun_eject_pos";
			directionName = "machinegun_eject_dir";
			effectName = "MachineGunCartridge";
		};
		class RHSUSF_BarrelRefract
		{
			positionName = "muzzle_1";
			directionName = "muzzle_1";
			effectName = "RHSUSF_BarrelRefractHeavy";
		};
	};
};
class rhs_weap_m134_minigun_2: rhs_weap_m134_minigun_1
{
	class GunParticles
	{
		class SecondEffect
		{
			effectName = "MachineGun1";
			positionName = "muzzle_2";
			directionName = "chamber_2";
		};
		class effect2
		{
			positionName = "machinegun_eject_2_pos";
			directionName = "machinegun_eject_2_dir";
			effectName = "MachineGunCartridge";
		};
		class RHSUSF_BarrelRefract
		{
			positionName = "muzzle_2";
			directionName = "muzzle_2";
			effectName = "RHSUSF_BarrelRefractHeavy";
		};
	};
};
class rhs_weap_m134_mounted: M134_minigun
{
	displayName = "M134D Minigun 7.62mm";
	magazines[] = {"rhs_mag_762x51_m80a1_4000"};
	class GunParticles
	{
		class FirstEffect
		{
			effectName = "MachineGun1";
			positionName = "usti hlavne";
			directionName = "konec hlavne";
		};
		class effect1
		{
			positionName = "machinegun_eject_pos";
			directionName = "machinegun_eject_dir";
			effectName = "RHSUSF_762Cartridge";
		};
		class RHSUSF_BarrelRefract
		{
			positionName = "usti hlavne";
			directionName = "usti hlavne";
			effectName = "RHSUSF_BarrelRefractHeavy";
		};
	};
};
class RHS_MKV_M134: rhs_weap_m134_minigun_1
{
	magazines[] = {"2000Rnd_762x51_Belt_T_Red"};
	displayName = "Port M134";
	class gunParticles
	{
		class effect1
		{
			positionName = "m134_p_caseStart";
			directionName = "m134_p_caseEnd";
			effectName = "MachineGunCartridge1";
		};
		class effect2
		{
			positionName = "m134_p_beginBarrel";
			directionName = "m134_p_endBarrel";
			effectName = "MachineGun1";
		};
	};
};
class RHS_weap_m134_pylon: rhs_weap_m134_minigun_1
{
	scope = 1;
	displayname = "M134D-H";
	cursor = "EmptyCursor";
	cursorAim = "EmptyCursor";
	magazines[] = {"rhs_mag_m134_pylon_3000"}; //rhsusf_c_airweapons
	canLock = 0;
	modes[] = {"LowROF","HighROF","close","short","medium","far"};
	weight = 40;
	class GunParticles
	{
		class FirstEffect
		{
			effectName = "MachineGun1";
			positionName = "z_gunR_muzzle";
			directionName = "z_gunR_chamber";
		};
		class SecondEffect
		{
			effectName = "MachineGun1";
			positionName = "z_gunL_muzzle";
			directionName = "z_gunL_chamber";
		};
		class effect1
		{
			positionName = "machinegun_eject_pos";
			directionName = "machinegun_eject_dir";
			effectName = "MachineGunCartridge";
		};
		class effect2
		{
			positionName = "machinegun_eject_2_pos";
			directionName = "machinegun_eject_2_dir";
			effectName = "MachineGunCartridge";
		};
		class effect3
		{
			positionName = "machinegun_eject_pos";
			directionName = "machinegun_eject_dir";
			effectName = "MachineGunEject";
		};
		class effect4
		{
			positionName = "machinegun_eject_2_pos";
			directionName = "machinegun_eject_2_dir";
			effectName = "MachineGunEject";
		};
	};
	class LowROF: LowROF
	{
		displayName = "LO";
		textureType = "burst";
		soundContinuous = 1;
		flash = "gunfire";
		flashSize = 0.1;
		recoil = "Empty";
		aiDispersionCoefX = 3;
		aiDispersionCoefY = 3;
		reloadTime = 0.03;
		dispersion = 0.0055;
		minRange = 1;
		minRangeProbab = 0.06;
		midRange = 2;
		midRangeProbab = 0.06;
		maxRange = 3;
		maxRangeProbab = 0.004;
		showToPlayer = 1;
		multiplier = 1;
	};
	class HighROF: LowROF
	{
		displayName = "HI";
		textureType = "fullAuto";
		minRangeProbab = 0.08;
		midRangeProbab = 0.058;
		reloadTime = 0.015;
	};
	class close: HighROF
	{
		showToPlayer = 0;
		soundBurst = 0;
		burst = 15;
		aiRateOfFire = 0.3;//0.5
		aiRateOfFireDistance = 50;
		minRange = 0;
		minRangeProbab = 0.70; //0.05
		midRange = 500;
		midRangeProbab = 0.95; //0.7
		maxRange = 1000;
		maxRangeProbab = 0.95;//0.1
	};
	class short: close
	{
		burst = 25;
		burstRangeMax = 45;
		aiRateOfFire = 0.5;//2
		aiRateOfFireDistance = 300;
		minRange = 500;
		minRangeProbab = 0.95;//0.05
		midRange = 1000;
		midRangeProbab = 0.90;
		maxRange = 1500;
		maxRangeProbab = 0.85;
	};
	class medium: LowROF
	{
		showToPlayer = 0;
		soundBurst = 0;
		burst = 33;
		burstRangeMax = 66;
		aiRateOfFire = 0.7;
		aiRateOfFireDistance = 600;
		minRange = 1000;
		minRangeProbab = 0.90;
		midRange = 1500;
		midRangeProbab = 0.85;
		maxRange = 2000;
		maxRangeProbab = 0.70;
	};
	class far: medium
	{
		burst = 15;
		burstRangeMax = 35;
		aiRateOfFire = 1;
		aiRateOfFireDistance = 1000;
		minRange = 1500;
		minRangeProbab = 0.85;
		midRange = 2500;
		midRangeProbab = 0.65;
		maxRange = 3000;
		maxRangeProbab = 0.60;
	};
};

class gatling_30mm;
class rhs_weap_M197: gatling_30mm
{
	aiDispersionCoefX=2;
	scope=1;
	cursor="mg";
	cursorAim="EmptyCursor";
	cursorSize=0;
	muzzles[] = {"this"};
	class GunParticles {
		class Effect {
			effectName = "MachineGun2";
			positionName = "machinegun";
			directionName = "machinegun_end";
		};
	};

	displayName="M197";
	ballisticsComputer=16;
	autoFire=1;
	nameSound="cannon";
	magazines[]=
	{
		"rhs_mag_M197_750"
	};
	canLock=2;
	modes[]=
	{
		"manual",
		"close",
		"short",
		"medium",
		"far"
	};
	class manual: Mode_FullAuto
	{
		displayName="M197";
		autoFire=1;
		sounds[] = {StandardSound};
			class StandardSound
			{
			weaponSoundEffect = "DefaultRifle";
			begin1[] = {"\rhsusf\addons\rhsusf_a2port_air\data\sounds\a10vulcanVII",3.1622777,1,1100};
			soundBegin[]={"begin1",1};
		};
		reloadTime=0.06;
		dispersion=0.0085;
		showToPlayer=1;
		burst=1;
		aiRateOfFire=0.5;
		aiRateOfFireDistance=50;
		minRange=1;
		minRangeProbab=0.01;
		midRange=2;
		midRangeProbab=0.01;
		maxRange=3;
		maxRangeProbab=0.01;
	};
	class close: manual
	{
		showToPlayer=0;
		soundBurst=0;
		burst = 8;
		burstRangeMax = 16;
		aiRateOfFire=0.5;
		aiRateOfFireDistance=50;
		minRange=0;
		minRangeProbab=0.35;
		midRange=200;
		midRangeProbab=0.88;
		maxRange=500;
		maxRangeProbab=0.34;
	};
	class short: close
	{
		burst = 6;
		burstRangeMax = 12;
		aiRateOfFire=2;
		aiRateOfFireDistance=300;
		minRange=300;
		minRangeProbab=0.35;
		midRange=600;
		midRangeProbab=0.88;
		maxRange=800;
		maxRangeProbab=0.34;
	};
	class medium: close
	{
		burst = 4;
		burstRangeMax = 8;
		aiRateOfFire=3;
		aiRateOfFireDistance=600;
		minRange=700;
		minRangeProbab=0.05;
		midRange=900;
		midRangeProbab=0.58;
		maxRange=1000;
		maxRangeProbab=0.04;
	};
	class far: close
	{
		burst = 4;
		burstRangeMax = 9;
		aiRateOfFire=5;
		aiRateOfFireDistance=1000;
		minRange=1000;
		minRangeProbab=0.05;
		midRange=1200;
		midRangeProbab=0.4;
		maxRange=1400;
		maxRangeProbab=0.01;
	};
};

class rhs_weap_M301: rhs_weap_M197
{
	displayName="M301";
	modes[]=
	{"manual","HighROF","close","short","medium","far"};
	magazines[]=
	{
		"rhs_mag_M301_500"
	};
	class manual: manual
	{
		displayName="M301(LO)";
		reloadTime=0.08;
	};
	class HighROF: manual
	{
		displayName="M301(HI)";
		reloadTime=0.04;
		dispersion=0.0095;
		textureType = "fastAuto";
	};
};


class rhs_weap_M230: rhs_weap_M197
{
	displayName="M230";
	magazines[]=
	{
		"rhs_mag_30x113mm_M789_HEDP_1200",
		"rhs_mag_30x113mm_M789_HEDP_laser_1200"
	};
	shotFromTurret = 0;
	aiDispersionCoefX=2;
	modes[]=
	{
		"manual",
		"burst_20",
		"burst_50",
		"burst_100",
		"burst_all",
		"close",
		"short",
		"medium",
		"far"
	};
	/*
	The gun duty cycle is as follows:
		• Six 50 round bursts with 5 seconds between bursts
		followed by a 10 minute cooling period.
		• For BURST LIMITER settings other than 50, the
		cycle can be generalized as no more than 300
		rounds fired within 60 seconds before allowing the
		gun to cool for 10 minutes, after which the cycle
		may be repeated.
	*/
	class manual: Mode_FullAuto
	{
		displayName				= "BURST: 10";
		rhs_burstLimiter 		= 10;
		sounds[]				= {StandardSound};
		autoFire				= 1;
		reloadTime				= 0.096;
		dispersion				= 0.0075;
		soundContinuous			= 0;
		showToPlayer			= true;
		burst					= 1;
		multiplier				= 1;
		aiRateOfFire			= 0.5;
		aiRateOfFireDistance	= 50;
		minRange				= 1;
		minRangeProbab			= 0.001;
		midRange				= 2;
		midRangeProbab			= 0.001;
		maxRange				= 3;
		maxRangeProbab			= 0.001;
	};
	class burst_20: manual
	{
		displayName			= "BURST: 20";
		rhs_burstLimiter	= 20;
	};
	class burst_50: manual
	{
		displayName			= "BURST: 50";
		rhs_burstLimiter	= 50;
	};
	class burst_100: manual
	{
		displayName			= "BURST: 100";
		rhs_burstLimiter	= 100;
	};
	class burst_all: manual
	{
		displayName			= "BURST: ALL";
		rhs_burstLimiter	= 1200;
	};
	class close: manual
	{
		showToPlayer			= 0;
		soundBurst				= 0;
		burst					= 10;
		burstRangeMax			= 20;
		aiRateOfFire			= 0.5;
		aiRateOfFireDistance	= 400;
		minRange				= 0;
		minRangeProbab			= 0.35;
		midRange				= 200;
		midRangeProbab			= 0.88;
		maxRange				= 400;
		maxRangeProbab			= 0.3;
	};
	class short: close
	{
		burst					= 8;
		burstRangeMax			= 16;
		aiRateOfFire			= 1;
		aiRateOfFireDistance	= 600;
		minRange				= 200;
		midRange				= 500;
		maxRange				= 800;
	};
	class medium: close
	{
		burst					= 6;
		burstRangeMax			= 12;
		aiRateOfFire			= 2;
		aiRateOfFireDistance	= 800;
		minRange				= 600;
		minRangeProbab			= 0.35;
		midRange				= 800;
		midRangeProbab			= 0.78;
		maxRange				= 1000;
		maxRangeProbab			= 0.3;
	};
	class far: close
	{
		burst					= 3;
		burstRangeMax			= 7;
		aiRateOfFire			= 3;
		aiRateOfFireDistance	= 1000;
		minRange				= 800;
		minRangeProbab			= 0.2;
		midRange				= 1000;
		midRangeProbab			= 0.6;
		maxRange				= 1500;
		maxRangeProbab			= 0.1;
	};
	class EventHandlers
	{
		class RHS_EventHandlers
		{
			fired = "_this call rhs_fnc_burstLimiterShots";
		};
	};
};

class RHS_weap_gau8 : Gatling_30mm_Plane_CAS_01_F
{
	displayName="GAU-8";
	cursorSize=0;
	cursor = "mg";
	cursorAim="EmptyCursor";
	initspeed=0;

	magazines[]=
	{
		rhs_mag_1150Rnd_30x173,
		rhs_mag_1150Rnd_30x173_mixed,
		rhs_mag_1000Rnd_30x173,
		rhs_mag_1000Rnd_30x173_mixed
	};
	modes[] = {"LowROF","HighROF", "close", "short", "medium", "far"};
	class LowROF : LowROF {
		class StandardSound;
		displayName = "LO";
		textureType = "burst";
		reloadTime = 0.03;
		//reloadtime = 0.02857; //this is real one (2100rpm) but due to sound configuration default value is there
	};
	class HighROF : LowROF {
		class StandardSound:  StandardSound{
			begin1[] = {"A3\Sounds_F\arsenal\weapons_vehicles\gatling_30mm\30mm_01_burst", 5.62341, 1, 1500, {12852, 16079.5}};
			soundBegin[] = {"begin1", 1};
		};
		displayName = "HI";
		textureType = "fullAuto";
		reloadtime = 0.015;
	};
};

class RHS_weap_gau19: HMG_127
{
	scope = 1;
	displayName = "GAU-19/A";
	cursor = "EmptyCursor";
	cursorAim = "EmptyCursor";
	magazines[] = {
		"rhsusf_mag_gau19_melb_right",
		"rhsusf_mag_gau19_melb_left"
	};
	canLock = 0;
	modes[] = {"LowROF","HighROF","close","short","medium","far"};
	weight = 60;
	class GunParticles
	{
		class effect1
		{
			effectName = "MachineGunCloud";
			positionName = "z_gauL_muzzle";
			directionName = "z_gauL_chamber";
		};
		class effect2
		{
			positionName = "gauL_eject_pos";
			directionName = "gauL_eject_dir";
			effectName = "MachineGunEject";
		};
		class effect3
		{
			positionName = "gauL_eject_pos";
			directionName = "gauL_eject_dir";
			effectName = "MachineGunCartridge1";
		};
	};
	class LowROF: Mode_FullAuto
	{
		displayName = "GAU/LO";
		textureType = "burst";
		sounds[] = {"StandardSound"};
		class StandardSound
		{
			begin1[] = {"rhsusf\addons\rhsusf_melb\Sound\Gau19\Gau19_1",2.5,1,2600};
			begin2[] = {"rhsusf\addons\rhsusf_melb\Sound\Gau19\Gau19_2",2.5,1,2600};
			begin3[] = {"rhsusf\addons\rhsusf_melb\Sound\Gau19\Gau19_3",2.5,1,2600};
			soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin3",0.33};
			closure1[] = {"A3\sounds_f\weapons\gatling\gatling_rotation_short_2",0.31622776,1,20};
			closure2[] = {"A3\sounds_f\weapons\gatling\gatling_rotation_short_3",0.31622776,1,20};
			soundClosure[] = {"closure1",0.5,"closure2",0.5};
		};

		soundContinuous = 0;
		soundBurst = 0;
		flash = "gunfire";
		flashSize = 0.1;
		recoil = "Empty";
		reloadTime = 0.060;
		dispersion = 0.005;
		minRange = 1;
		minRangeProbab = 0.06;
		midRange = 2;
		midRangeProbab = 0.06;
		maxRange = 3;
		maxRangeProbab = 0.004;
		showToPlayer = 1;
		multiplier = 1;
	};
	class HighROF: LowROF
	{
		displayName = "GAU/HI";
		textureType = "fullAuto";
		minRangeProbab = 0.08;
		midRangeProbab = 0.058;
		reloadTime = 0.030;
	};
	class close: LowROF
	{
		showToPlayer = 0;
		burst = 15;
		burstRangeMax = 25;
		aiRateOfFire = 0.5;
		aiRateOfFireDistance = 100; //50
		minRange = 0;
		minRangeProbab = 0.05;
		midRange = 500;
		midRangeProbab = 0.7;
		maxRange = 1000;
		maxRangeProbab = 0.1; //0.1
	};
	class short: close
	{
		burst = 21;
		burstRangeMax = 31;
		aiRateOfFire = 1; //2
		aiRateOfFireDistance = 200; //300
		minRange = 500;
		minRangeProbab = 0.05; //0.05;
		midRange = 1000;
		midRangeProbab = 0.7; //0.7;
		maxRange = 1500;
		maxRangeProbab = 0.1; //0.1;
	};
	class medium: close
	{
		showToPlayer = 0;
		soundBurst = 0;
		burst = 10;
		burstRangeMax = 20;
		aiRateOfFire = 1.5; //3
		aiRateOfFireDistance = 600; //600
		minRange = 1000;
		minRangeProbab = 0.05; //0.05;
		midRange = 1500;
		midRangeProbab = 0.58; //0.58;
		maxRange = 2000;
		maxRangeProbab = 0.04; //0.04;
	};
	class far: close
	{
		burst = 10;
		burstRangeMax = 20;
		aiRateOfFire = 3; //5
		aiRateOfFireDistance = 100; //1000
		minRange = 1500;
		minRangeProbab = 0.05; //0.05;
		midRange = 2500;
		midRangeProbab = 0.4; //0.4;
		maxRange = 3000;
		maxRangeProbab = 0.01; //0.01
	};
};

class GMG_F;
class GMG_20mm;
class RHS_MK19: GMG_20mm
{
	type = 1;
	scope				= 1;
	ballisticsComputer	= 2; // Manual zeroing
	class GunParticles
	{
		class effect1
		{
			positionName = "usti hlavne";
			directionName = "konec hlavne";
			effectName = "GrenadeLauncherCloud";
		};
	};
	autoreload			= 1;
	canlock				= 0;
	initspeed			= 0;
	maxZeroing			= 1500;
	dispersion			= 0.006;
	aiDispersionCoefY=6.0;
	aiDispersionCoefX=5.0;
	reloadtime			= 0.4;
	magazinereloadtime	= 6;

	class manual: GMG_F {
		displayname ="Mk. 19 Grenade Launcher";
		sounds[] = {"StandardSound"};
		soundBurst = 0;
		aiBurstTerminable = 1;
		minRange = 1;
		minRangeProbab = 0.01;
		midRange = 2;
		midRangeProbab = 0.01;
		maxRange = 3;
		maxRangeProbab = 0.01;
		reloadtime = 0.15; //rof 400
	};
	class close : manual {
		burst = 5;
		burstRangeMax = 8;
		aiRateOfFire = 1;
		aiRateOfFireDistance = 50;
		minRange = 8;
		minRangeProbab = 0.05;
		midRange = 20;
		midRangeProbab = 0.7;
		maxRange = 50;
		maxRangeProbab = 0.1;
		showToPlayer = 0;

	};
	class short : close {
		burst = 4;
		burstRangeMax = 8;
		aiRateOfFire = 2;
		aiRateOfFireDistance = 300;
		minRange = 50;
		minRangeProbab = 0.05;
		midRange = 150;
		midRangeProbab = 0.7;
		maxRange = 300;
		maxRangeProbab = 0.1;
	};
	class medium : close {
		burst = 2;
		burstRangeMax = 6;
		aiRateOfFire = 4;
		aiRateOfFireDistance = 600;
		minRange = 200;
		minRangeProbab = 0.05;
		midRange = 400;
		midRangeProbab = 0.7;
		maxRange = 600;
		maxRangeProbab = 0.1;
	};
	class far : close {
		burst = 2;
		burstRangeMax = 6;
		aiRateOfFire = 5;
		aiRateOfFireDistance = 1000;
		minRange = 400;
		minRangeProbab = 0.05;
		midRange = 750;
		midRangeProbab = 0.4;
		maxRange = 1000;
		maxRangeProbab = 0.01;
	};
	displayName = "Mk. 19";
	magazines[] =
	{
		"RHS_48Rnd_40mm_MK19",
		"RHS_48Rnd_40mm_MK19_M430I",
		"RHS_48Rnd_40mm_MK19_M430A1",
		"RHS_48Rnd_40mm_MK19_M1001",
		"RHS_96Rnd_40mm_MK19",
		"RHS_96Rnd_40mm_MK19_M430I",
		"RHS_96Rnd_40mm_MK19_M430A1",
		"RHS_96Rnd_40mm_MK19_M1001"
	};
};

class RHS_MKV_MK19: RHS_MK19
{
	displayName = "Stbd MK19";
	class GunParticles
	{
		class effect1
		{
			positionName = "mk19_s_muzzle";
			directionName = "mk19_s_endBarrel";
			effectName = "GrenadeLauncherCloud";
		};
	};
};

class RHS_MK19_CROWS_M151: RHS_MK19
{
	magazineReloadTime = 25;
	ballisticsComputer = "2 + 16"; // Manual zeroing + FCS, Prediction based on laser distance and speed measurement; since Arma 3 1.70
	magazines[] =
	{
		"RHS_48Rnd_40mm_MK19",
		"RHS_48Rnd_40mm_MK19_M430I",
		"RHS_48Rnd_40mm_MK19_M430A1",
		"RHS_48Rnd_40mm_MK19_M1001",
		"RHS_96Rnd_40mm_MK19",
		"RHS_96Rnd_40mm_MK19_M430I",
		"RHS_96Rnd_40mm_MK19_M430A1",
		"RHS_96Rnd_40mm_MK19_M1001"
	};
};
class RHS_MK19_CROWS_M153: RHS_MK19_CROWS_M151
{
};