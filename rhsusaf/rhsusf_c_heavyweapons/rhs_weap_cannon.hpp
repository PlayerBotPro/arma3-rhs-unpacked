#define Disp_Modiffer(dispM) dispersion = 0.00025*##dispM##;

class CannonCore;
class cannon_120mm: CannonCore
{
	class player;
	class close;
	class short;
	class medium;
	class far;
};

class rhs_weap_fcs: cannon_120mm
{
	minRange = 1;
	minRangeProbab = 1;
	midRange = 2000;
	midRangeProbab = 1;
	maxRange = 5000;
	maxRangeProbab = 1;
	aiRateOfFire=0.6;
	aiRateOfFireDistance = 5000;
	modes[] = {"this"};
	magazines[] = {"rhs_laserfcsmag"};
	showToPlayer = 0;
	reloadTime=2;
	magazineReloadTime=2;
	class gunParticles {};
	weaponLockSystem = 4;
	class Eventhandlers
	{
		fired = "[_this select 0,_this select 1,true] call rhs_fnc_firedFCS";
	};
};
class rhs_weap_fcs_noLRF: rhs_weap_fcs
{
	weaponLockSystem = 0;
	class Eventhandlers
	{
		fired = "[_this select 0,_this select 1] call rhs_fnc_firedFCS";
	};
};
class rhs_weap_fcs_ammo: rhs_weap_fcs
{
	class Eventhandlers
	{
		fired = "[_this select 0,_this select 1,true,true] call rhs_fnc_firedFCS";
	};
};
class rhs_weap_planeAI: rhs_weap_fcs
{
	weaponLockSystem = 0;
	class Eventhandlers
	{
		fired = "_this call rhs_fnc_firedPlaneAI";
	};
};
class rhs_weap_fcs_ah64: rhs_weap_fcs
{
	midRange		= 4000;
	midRangeProbab	= 1;
	maxRange		= 8000;
	maxRangeProbab	= 1;
	reloadTime		= 6;
	class Eventhandlers
	{
		fired = "_this call rhs_fnc_AH64_AI_fire";
	};
};
class laserDesignator_vehicle;
class rhs_weap_laserDesignator_AI: laserDesignator_vehicle
{
	magazines[] = {"rhs_LaserMag_ai"};
	modes[] = {"this"};
	minRange = 1;
	minRangeProbab = 1;
	midRange = 1;
	midRangeProbab = 1;
	maxRange = 1;
	maxRangeProbab = 1;
	aiRateOfFire=0.6;
};

class rhs_weap_m256: cannon_120mm
{
	canLock = 0;

	scope = protected;
	nameSound = "cannon";

	showaimcursorinternal	= 0;
	cursor					= "EmptyCursor";
	cursoraim				= "EmptyCursor";
	cursoraimon				= "EmptyCursor";

	displayname = "120mm M256A1";
	ballisticsComputer = 1;
	flash = "gunfire";
	flashSize = 10;

	aiDispersioncoefX		= 1.4;
	aiDispersioncoefY		= 2;
	reloadSound[]			= { "\rhsusf\addons\rhsusf_c_heavyweapons\sounds\reload_tank_cannon_loader", 3.622776, 1, 15 };
	reloadMagazineSound[]	= { "\rhsusf\addons\rhsusf_c_heavyweapons\sounds\reload_tank_cannon_loader", 3.622776, 1, 15 };

	reloadTime = 17; //reload time without loader
	magazineReloadTime = 12;
	autoReload = 1;
	magazines[] = {
		//SABOT
		"rhs_mag_M829A4",
		"rhs_mag_M829A3",
		"rhs_mag_M829A2",
		"rhs_mag_M829A1",
		"rhs_mag_M829",
		//HEAT
		"rhs_mag_M830",
		"rhs_mag_M830A1",
		//HE
		"rhs_mag_M1069",
		"rhs_mag_M1147",
		//Canister
		"rhs_mag_M1028",
		//Smoke/WP
		"rhs_mag_M416",

		"rhs_mag_M829A4_max",
		"rhs_mag_M829A3_max",
		"rhs_mag_M829A2_max",
		"rhs_mag_M829A1_max",
		"rhs_mag_M829_max",
		"rhs_mag_M830_max",
		"rhs_mag_M830A1_max",
		"rhs_mag_M1069_max",
		"rhs_mag_M1147_max",
		"rhs_mag_M1028_max",
		"rhs_mag_M416_max"
	};
	magazineWell[] = {RHS_Cannon_120mm_M256};

	#define S_Macro reloadTime = 11;
	class player: player { S_Macro };
	class close: close {
		S_Macro
	 };
	class short: short {
		S_Macro
	 };
	class medium: medium {
		aiRateOfFireDistance = 1500;
		S_Macro
		minRange = 1000;
		minRangeProbab = 0.6;
		midRange = 2000;
		midRangeProbab = 0.85;
		maxRange = 3000;
		maxRangeProbab = 0.8;
	 };
	class far: far {
		aiRateOfFireDistance = 3500;
		S_Macro
		minRange = 1500;
		minRangeProbab = 0.75;
		midRange = 2500;
		midRangeProbab = 0.8;
		maxRange = 5000;
		maxRangeProbab = 0.4;
	 };
	 class EventHandlers
	 {
	 	class RHS_Fired_EH
	 	{
	 		fired = "_this call rhs_fnc_tankLoader";
	 	};
	 };
};

class mortar_155mm_AMOS;
class cannon_155mm : mortar_155mm_AMOS
{
	class Single1;
	class Single2;
	class Single3;
	class Single4;
	class Single5;
	class Burst1;
	class Burst2;
	class Burst3;
	class Burst4;
	class Burst5;
};
class rhs_weap_m284 : cannon_155mm
{
	scope = 1;
	displayName = "$STR_A3_mortar_120mm_AMOS0";
	nameSound = "cannon";
	cursor = "mortar";
	cursorAim = "EmptyCursor";
	reloadSound[] = { "A3\Sounds_F\vehicles\armor\noises\reload_tank_cannon_2", 31.622776, 1, 15 };
	minRange = 10;
	minRangeProbab = 0.7;
	midRange = 1800;
	midRangeProbab = 0.7;
	maxRange = 3000;
	maxRangeProbab = 0.1;
	reloadTime = 6;
	magazineReloadTime = 7;
	autoReload = 1;
	canLock = 0;
	magazines[] =
	{
		rhs_mag_155mm_m795_28,
		rhs_mag_155mm_m825a1_2,
		rhs_mag_155mm_485_2,
		rhs_mag_155mm_m712_2,
		rhs_mag_155mm_m731_1,
		rhs_mag_155mm_raams_1,
		rhs_mag_155mm_m864_3
	 };
	modes[] = { "Single1", "Single2", "Single3", "Single4", "Single5", "Burst1", "Burst2", "Burst3", "Burst4", "Burst5" };
	class Single1 : Single1{  };
	class Single2 : Single2{  };
	class Single3 : Single3{  };
	class Single4 : Single4{  };
	class Single5 : Single5{  };
	class Burst1 : Burst1{  };
	class Burst2 : Burst2{  };
	class Burst3 : Burst3{  };
	class Burst4 : Burst4{  };
	class Burst5 : Burst5{  };
};

class autocannon_Base_F;
class autocannon_30mm_CTWS: autocannon_Base_F
{
	class HE: autocannon_Base_F
	{
		class player;
		class close;
		class short;
		class medium;
		class far;
	};
	class AP: autocannon_Base_F
	{
		class player;
		class close;
		class short;
		class medium;
		class far;
	};
};

class RHS_weap_M242BC: autocannon_30mm_CTWS
{
	aiDispersioncoefX = 4;
	aiDispersioncoefY = 6;
	airateoffire = 2;
	airateoffiredistance = 1000;
	canlock = 0;

	FCSMaxLeadSpeed = 0;

	class GunParticles
	{
		class Effect
		{
			effectName = "AutoCannonFired";
			positionName = "Usti hlavne";
			directionName = "Konec hlavne";
		};
		class Shell
		{
			positionName = "shell_eject_pos";
			directionName = "shell_eject_dir";
			effectName = "RHS_HeavyGunCartridge1";
		};
	};

	displayName = "25mm M242";
	muzzles[] = {"AP","HE"};
	class HE: HE {
		// - M792 HEI-T
		displayName = "25mm M242";
		magazines[] = {"rhs_mag_230Rnd_25mm_M242_HEI","rhs_mag_70Rnd_25mm_M242_APFSDS"};
		magazineWell[] = {RHS_AutoCannon_25mm_M242_HE,RHS_AutoCannon_25mm_M242_AP};
		canlock = 0;
		magazineReloadTime = 0.3;
		modes[] = {"single","100rpm","player","close","short","medium","far"};
		//200rpm
		class player: player
		{
			reloadTime=__EVAL(60/200);
			textureType = "fullAuto";
		};
		class 100rpm: player
		{
			reloadTime=__EVAL(60/100);
			textureType = "burst";
		};
		class single: player
		{
			autofire=0;
			textureType = "semi";
		};
		FCSMaxLeadSpeed = 0;
		minZeroing = 200;
	};
	class AP: AP {
		displayName = "25mm M242 - M919 APFSDS-T";
		magazines[] = {"rhs_mag_70Rnd_25mm_M242_APFSDS"};
		magazineWell[] = {RHS_AutoCannon_25mm_M242_AP};
		canlock = 0;
		showToPlayer=0;
		class player: player
		{
			showToPlayer = 0;
			reloadTime=__EVAL(60/200);
		};
		class close: close
		{
			showToPlayer=0;
			reloadTime=__EVAL(60/200);
		};
		class short: short
		{
			showToPlayer = 0;
			reloadTime=__EVAL(60/200);
		};
		class medium: medium
		{
			showToPlayer=0;
			reloadTime=__EVAL(60/200);
		};
		class far: far
		{
			showToPlayer=0;
			reloadTime=__EVAL(60/100);
		};
	};
};
//Manually ranged M242 for M2A0, M2A1, and original (non-ODS) M2A2
class RHS_weap_M242BC_manual: RHS_weap_M242BC
{
	ballisticsComputer = 2;
	class HE: HE
	{
		ballisticsComputer = 2;
	};
};
class RHS_weap_M119: mortar_155mm_AMOS
{
	displayName = $STR_RHS_DN_M119;
	ballisticscomputer = 2;
	reloadTime = 6;
	magazineReloadTime = 6;

	class GunParticles {
		class Effect1
		{
			directionname = "Konec hlavne";
			effectname = "ArtilleryFired1";
			positionname = "Usti hlavne";
		};
	};

	modes[] = {"Single1","Single2","Single3","Burst1","Burst2","Burst3"};

	magazines[] =
	{
		"RHS_mag_m1_he_12",
		"rhs_mag_m314_ilum_4",
		"rhs_mag_m60a2_smoke_4"
	};

};