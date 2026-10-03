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
	displayname = "";
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
	weaponLockSystem = 4;
	class gunParticles {};
	class Eventhandlers {
		fired = "[_this select 0,_this select 1,true] call rhs_fnc_firedFCS";
	};
};
class rhs_weap_fcs_noLRF: rhs_weap_fcs
{
	weaponLockSystem = 0;
	class Eventhandlers {
		fired = "[_this select 0,_this select 1] call rhs_fnc_firedFCS";
	};
};
class rhs_weap_fcs_ammo: rhs_weap_fcs
{
	class Eventhandlers {
		fired = "[_this select 0,_this select 1,true,true] call rhs_fnc_firedFCS";
	};
};
class rhs_weap_fcs_nolrf_ammo: rhs_weap_fcs
{
	weaponLockSystem = 0;
	class Eventhandlers {
		fired = "[_this select 0,_this select 1,false,true] call rhs_fnc_firedFCS";
	};
};
class rhs_weap_fcs_mi24: rhs_weap_fcs
{
	weaponLockSystem = 0;
	class Eventhandlers {
		fired = "_this call rhs_fnc_firedFCS_mi24";
	};
};
class rhs_weap_fcs_su25: rhs_weap_fcs
{
	minRange		= 500;
	minRangeProbab	= 1;
	midRange		= 4000;
	midRangeProbab	= 1;
	maxRange		= 8000;
	maxRangeProbab	= 1;
	reloadTime		= 6;
	class Eventhandlers 
	{
		fired = "_this call rhs_fnc_Su25_AI_fire";
	};
};

class Laserdesignator_mounted;
class RHS_T72_FCS: Laserdesignator_mounted
{
	cursor = "EmptyCursor";
	cursoraim = "EmptyCursor";
	cursoraimon = "EmptyCursor";
	displayname = "$STR_RHS_FIRECONTROLSYSTEM_NAME";
	minRange = 1;
	minRangeProbab = 0.06;
	midRange = 2;
	midRangeProbab = 0.06;
	maxRange = 3;
	maxRangeProbab = 0.004;
	magazines[] = {rhs_lasermag};
};
//laser designatin device
class rhs_weap_PL1: RHS_T72_FCS
{
	displayname = "$STR_RHS_PL1LASERDESIGNATOR_NAME";
};
//laser designatin device
class rhs_weap_klen_ps: RHS_T72_FCS
{
	showtoplayer = 0;
	displayname = "Klen-PS";
};
#define RELOAD_TIME_MACRO(rTime,rofDistance,rofTimee)\
	class player: player\
	{\
		reloadtime				= rTime;\
		aiRateOfFireDistance	= rofDistance;\
		aiRateOfFire			= rofTimee;\
	};\
	class close: close\
	{\
		reloadtime				= rTime;\
		aiRateOfFireDistance	= rofDistance;\
		aiRateOfFire			= rofTimee;\
	};\
	class short: short\
	{\
		reloadtime				= rTime;\
		aiRateOfFireDistance	= rofDistance;\
		aiRateOfFire			= rofTimee;\
	};\
	class medium: medium\
	{\
		reloadtime				= rTime;\
		aiRateOfFireDistance	= rofDistance;\
		aiRateOfFire			= rofTimee;\
	};\
	class far: far\
	{\
		reloadtime				= rTime;\
		aiRateOfFireDistance	= rofDistance;\
		aiRateOfFire			= rofTimee;\
	};

class rhs_weap_d81: cannon_120mm
{
	//tpd k1
	aiDispersioncoefX = 4;
	aiDispersioncoefY = 8;

	canLock=0;

	scope = protected;
	nameSound = "cannon";

	showaimcursorinternal	= 0;
	cursor					= "EmptyCursor";
	cursoraim				= "cannon";
	cursoraimon				= "cannon";

	reloadSound[]			= {"",  db+0, 1, 200};
	reloadMagazineSound[]	= {"",  db+0, 1, 200};
	ballisticsComputer = 0;
	flash = "gunfire";
	flashSize = 10;
	maxLeadSpeed = 100;  // max estimated speed km/h
	reloadTime = 6.5;
	aiRateOfFire=6.6;
	aiRateOfFireDistance = 10;
	magazineReloadTime = 6.5;
	autoReload = 0;

	magazines[] = {"rhs_mag_dummy"};
	magazineWell[] = {RHS_Cannon_125mm_D81};

	modes[] =
	{
		player,
		close,
		short,
		medium,
		far
	};
	class player: player
	{
		autoReload=0;
	};
	class close: close
	{
	};
	class short: short
	{
	};
	class medium: medium
	{
	};
	class far: far
	{
		aiRateOfFireDistance = 2500;
		minRange = 1500;
		minRangeProbab = 0.75;
		midRange = 2000;
		midRangeProbab = 0.8;
		maxRange = 4000;
		maxRangeProbab = 0.4;
	};
};

class rhs_weap_2a26 : rhs_weap_d81
{
	//no rangefinder
	aiDispersioncoefX = 5;
	aiDispersioncoefY = 9;
	displayName = WEAP_STR(2A26);

	magazines[] = {
		"rhs_mag_dummy",
		"rhs_mag_3bm9_10",
		"rhs_mag_3bm12_10",
		"rhs_mag_3bm15_10",
		"rhs_mag_3bm17_10",
		"rhs_mag_3bm17_14",
		"rhs_mag_3bm22_10",
		"rhs_mag_3bm22_14",
		"rhs_mag_3bm26_10",
		"rhs_mag_3bk12_8",
		"rhs_mag_3bk14_8",
		"rhs_mag_3bk18_8",
		"rhs_mag_3bk18m_8",
		"rhs_mag_3of11_6",
		"rhs_mag_3of26_6"
	};
	magazineWell[] = {};
};

class rhs_weap_2a46_2 : rhs_weap_d81
{
	//1g42
	aiDispersioncoefX = 3.5;
	aiDispersioncoefY = 6.5;
	displayName = WEAP_STR(2A462);
	class medium: medium {
		aiRateOfFireDistance = 1500;
		minRange = 1000;
		minRangeProbab = 0.6;
		midRange = 2000;
		midRangeProbab = 0.85;
		maxRange = 3000;
		maxRangeProbab = 0.8;
	 };
	class far: far
	{
		aiRateOfFireDistance = 3500;
		minRange = 1500;
		minRangeProbab = 0.75;
		midRange = 2000;
		midRangeProbab = 0.8;
		maxRange = 6000;
		maxRangeProbab = 0.4;
	};

};

class rhs_weap_2a46m_2 : rhs_weap_d81
{
	//1g46 mounted on t80a
	aiDispersioncoefX = 3.5;
	aiDispersioncoefY = 5;
	displayName = WEAP_STR(2A46M2);
	magazineWell[] = {RHS_Cannon_125mm_D81,RHS_Cannon_125mm_2A46M};
	class far: far
	{
		aiRateOfFireDistance = 4500;
		minRange = 1500;
		minRangeProbab = 0.75;
		midRange = 2000;
		midRangeProbab = 0.8;
		maxRange = 6000;
		maxRangeProbab = 0.4;
	};
};

class rhs_weap_2a46m : rhs_weap_2a46m_2
{
	//1a40 complex on t72
	// has lead indicator but vertical accuracy should be same as tpd 1k
	aiDispersioncoefX = 4;
	aiDispersioncoefY = 7;
	displayName = WEAP_STR(2A46M);
};
class rhs_weap_2a46m_4 : rhs_weap_2a46m_2
{
	//1g46 on t80u
	aiDispersioncoefX = 3.5;
	aiDispersioncoefY = 5;
	displayName = WEAP_STR(2A46M4);
};
class rhs_weap_2a46m_5 : rhs_weap_2a46m_2
{
	//sosna-u
	//autotracking
	aiDispersioncoefX = 3;
	aiDispersioncoefY = 5;
	displayName = WEAP_STR(2A46M5);
	magazineWell[] = {RHS_Cannon_125mm_D81,RHS_Cannon_125mm_2A46M,RHS_Cannon_125mm_2A46M_5};

	RELOAD_TIME_MACRO(6,10,5)
	magazineReloadTime		= 6;
};
class rhs_weap_2a82 : rhs_weap_2a46m_2
{
	aiDispersioncoefX = 2.5;
	aiDispersioncoefY = 4;
	displayName = WEAP_STR(2A82);
	magazineWell[] = {RHS_Cannon_125mm_D81,RHS_Cannon_125mm_2A46M,RHS_Cannon_125mm_2A46M_5,RHS_Cannon_125mm_2A82};
};
class rhs_weap_2a82_1m : rhs_weap_2a82
{
	aiDispersioncoefX = 2.5;
	aiDispersioncoefY = 3;
	displayName = WEAP_STR(2A82_1M);

	magazineReloadTime		= 5.5;
	RELOAD_TIME_MACRO(5.5,10,5)
	ballisticsComputer = "2 + 16"; // Manual zeroing + FCS, Temp BI FCS
};
//old unused

class rhs_weap_d10t2s_2 : rhs_weap_d81
{
	scope = public;
	displayName = WEAP_STR(D10T2S);
	magazines[] = {
		"rhs_mag_bm25_14",
		"rhs_mag_of412_17",
		"rhs_mag_of412_21",
		"rhs_mag_9m117_3",
		"rhs_mag_bk17_8"
	};
	magazineWell[] = {};
	reloadTime = 12;
	magazineReloadTime = 6.5;
};

class rhs_weap_d10tg : rhs_weap_d10t2s_2
{
	scope = public;
	displayName = WEAP_STR(D10TG);
	magazines[] = {
		"rhs_mag_br412_14",
		"rhs_mag_br412_17",
		"rhs_mag_of412_17",
		"rhs_mag_of412_18",
		"rhs_mag_of412_21"
	};
};

class rhs_weap_d10t2s : rhs_weap_d10t2s_2
{
	scope = public;
	displayName = WEAP_STR(D10T2S);
	magazines[] = {
		"rhs_mag_br412_14",
		"rhs_mag_br412_17",
		"rhs_mag_of412_17",
		"rhs_mag_of412_18",
		"rhs_mag_of412_21",
		"rhs_mag_bk5_8",
		"rhs_mag_bk17_8",
		"rhs_mag_bm25_14",
		"rhs_mag_bm8_14",
		"rhs_mag_9m117_3"
	};
};

class rhs_weap_u5ts : rhs_weap_d81
{
	scope = public;
	displayName = WEAP_STR(2A20);
	sound[] = {"\rhsafrf\addons\rhs_c_heavyweapons\sounds\rhs_s_u5ts.ogg", db+8, 1,1500};
	reloadSound[] = {"\rhsafrf\addons\rhs_c_heavyweapons\sounds\rhs_s_u5ts_reload.ogg", 1.0, 1};
	magazines[] = {
		"rhs_mag_bm4_15",
		"rhs_mag_of11_20",
		"rhs_mag_of28_20",
		"rhs_mag_bk4_5",
		"rhs_mag_bk15_5",
		"rhs_mag_bm23_15",
		"rhs_mag_9m118_3"
	};
	magazineWell[] = {};
	reloadTime = 12;
	magazineReloadTime = 8.5;
	class gunParticles
	{
		class Effect
		{
			positionname = "Usti hlavne";
			directionname = "Konec hlavne";
			effectname = "CannonFired";
		};
	};
};

class autocannon_30mm_CTWS;
class rhs_weap_2a42_base : autocannon_30mm_CTWS
{
	aiDispersioncoefX		= 2;
	aiDispersioncoefY		= 3;
	airateoffire			= 1;
	airateoffiredistance	= 1000;

	scope				= 1;
	displayName			= WEAP_STR(2A42);
	nameSound			= "cannon";
	reloadTime			= 0.02;
	magazinereloadtime	= 0.2;
	autoFire			= 1;
	canLock				= 0;

	magazines[] = {};
	magazineWell[] = {"RHS_AutoCannon_30mm_2A42_AP","RHS_AutoCannon_30mm_2A42_HE"};

	modes[] = {
		"LowROFBMD2",
		"HighROFBMD2",
		"closeBMD2",
		"shortBMD2",
		"mediumBMD2",
		"farBMD2"
	};

	cursor = "EmptyCursor";
	cursorAim = "mg";
	cursorSize = 1;
	ballisticsComputer = 0;

	class gunParticles
	{
		class Shell
		{
			positionName="ejector_30mm";
			directionName="ejector_30mm_dir";
			effectName="RHS_30mm_Catridge";
		};
		class Effect
		{
			positionname = "Usti hlavne";
			directionname = "Konec hlavne";
			effectname = "AutoCannonFired";
		};
		class EffectL
		{
			positionname = "barrel_smoke_l";
			directionname = "barrel_smoke_l_dir";
			effectname = "RHS_2a42_Fired";
		};
		class EffectR
		{
			positionname = "barrel_smoke_r";
			directionname = "barrel_smoke_r_dir";
			effectname = "RHS_2a42_Fired";
		};
	};

	class LowROFBMD2 : Mode_FullAuto
	{
		displayName			= $STR_RHS_WEAP_MODE_300;
		displayNameShort	= $STR_RHS_WEAP_MODE_300;
		reloadTime			= 0.2;
		soundContinuous		= 0;
		flash				= "gunfire";
		flashSize			= 0.1;
		aiBurstTerminable	= 1;
		minRange			= 1;
		minRangeProbab		= 0.06;
		midRange			= 2;
		midRangeProbab		= 0.06;
		maxRange			= 3;
		maxRangeProbab		= 0.004;
		dispersion			= __EVAL(0.0015/1.6);
		textureType			= "burst";
	};

	class HighROFBMD2 : LowROFBMD2
	{
		displayName			= $STR_RHS_WEAP_MODE_600;
		displayNameShort	= $STR_RHS_WEAP_MODE_600;
		reloadTime			= 0.1;
		soundContinuous		= 0;
		minRange			= 1;
		minRangeProbab		= 0.08;
		midRange			= 2;
		midRangeProbab		= 0.058;
		maxRange			= 3;
		maxRangeProbab		= 0.004;
		dispersion			= __EVAL(0.0065/2);
		textureType			= "fullAuto";
	};

	class closeBMD2 : HighROFBMD2
	{
		showToPlayer			= 0;
		soundBurst				= 0;
		burst					= 10;
		burstRangeMax			= 15;
		aiRateOfFire			= 0.5;
		aiRateOfFireDistance	= 50;
		minRange				= 0;
		minRangeProbab			= 0.05;
		midRange				= 150;
		midRangeProbab			= 0.58;
		maxRange				= 300;
		maxRangeProbab			= 0.04;
	};

	class shortBMD2 : closeBMD2
	{
		burst					= 6;
		burstRangeMax			= 14;
		aiRateOfFire			= 4;
		aiRateOfFireDistance	= 300;
		aiRateOfFireDispersion	= 2;
		minRange				= 50;
		minRangeProbab			= 0.05;
		midRange				= 400;
		midRangeProbab			= 0.58;
		maxRange				= 600;
		maxRangeProbab			= 0.04;
	};

	class mediumBMD2 : LowROFBMD2
	{
		showToPlayer			= 0;
		soundBurst				= 0;
		burst					= 5;
		burstRangeMax			= 12;
		aiRateOfFire			= 4;
		aiRateOfFireDistance	= 600;
		aiRateOfFireDispersion	= 3;
		minRange				= 600;
		minRangeProbab			= 0.05;
		midRange				= 1500;
		midRangeProbab			= 0.58;
		maxRange				= 2000;
		maxRangeProbab			= 0.04;
	};

	class farBMD2 : mediumBMD2
	{
		burst					= 4;
		burstRangeMax			= 9;
		aiRateOfFire			= 6;
		aiRateOfFireDistance	= 1000;
		aiRateOfFireDispersion	= 3;
		minRange				= 2000;
		minRangeProbab			= 0.05;
		midRange				= 2500;
		midRangeProbab			= 0.4;
		maxRange				= 3000;
		maxRangeProbab			= 0.01;
	};
};

class rhs_weap_2a42 : rhs_weap_2a42_base
{
	muzzles[] = {"HE","AP"};
	class HE: rhs_weap_2a42_base {};
	class AP: rhs_weap_2a42_base
	{
		magazineWell[] = {"RHS_AutoCannon_30mm_2A42_HE"};
		modes[] = {"closeBMD2","shortBMD2","mediumBMD2","farBMD2"};
	};
};

class rhs_weap_2a72_base : rhs_weap_2a42
{
	displayName = WEAP_STR(2A72);
	class gunParticles
	{
		class Shell
		{
			positionName="ejector_30mm";
			directionName="ejector_30mm_dir";
			effectName="RHS_30mm_Catridge";
		};
		class Effect
		{
			positionname = "Usti hlavne3";
			directionname = "Konec hlavne3";
			effectname = "AutoCannonFired";
		};
	};

	cursor = "EmptyCursor";
	cursorAim = "mg";
	cursorSize = 1;
	ballisticsComputer = 0;

	class LowROFBMD2 : LowROFBMD2
	{
		displayName			= $STR_RHS_WEAP_MODE_SINGLE;
		displayNameShort	= $STR_RHS_WEAP_MODE_SINGLE;
		reloadTime			= 0.2;
		autofire			=0;

		soundContinuous	= 0;
		flash			= "gunfire";
		flashSize		= 0.1;
		recoil			= "Empty";
		minRange		= 1;
		minRangeProbab	= 0.06;
		midRange		= 2;
		midRangeProbab	= 0.06;
		maxRange		= 3;
		maxRangeProbab	= 0.004;
		dispersion		= __EVAL(0.0015/2.1);
		textureType		= "semi";
	};

	class HighROFBMD2 : LowROFBMD2
	{
		displayName			= $STR_RHS_WEAP_MODE_330;
		displayNameShort	= $STR_RHS_WEAP_MODE_330;
		reloadTime			= __EVAL(60/330);
		autofire			=1;
		soundContinuous		= 0;
		minRange			= 1;
		minRangeProbab		= 0.08;
		midRange			= 2;
		midRangeProbab		= 0.058;
		maxRange			= 3;
		maxRangeProbab		= 0.004;
		textureType			= "fullAuto";
	};

	class closeBMD2 : HighROFBMD2
	{
		showToPlayer = 0;
		soundBurst = 0;
		burst			= 10;
		burstRangeMax	= 15;
		aiRateOfFire = 0.5;
		aiRateOfFireDistance = 50;
		minRange = 0;
		minRangeProbab = 0.05;
		midRange = 150;
		midRangeProbab = 0.58;
		maxRange = 300;
		maxRangeProbab = 0.04;
	};

	class shortBMD2 : closeBMD2
	{
		burst			= 6;
		burstRangeMax	= 14;
		aiRateOfFire = 4;
		aiRateOfFireDistance = 300;
		aiRateOfFireDispersion = 2;
		minRange = 50;
		minRangeProbab = 0.05;
		midRange = 400;
		midRangeProbab = 0.58;
		maxRange = 600;
		maxRangeProbab = 0.04;
	};

	class mediumBMD2 : LowROFBMD2
	{
		showToPlayer = 0;
		soundBurst = 0;
		burst			= 5;
		burstRangeMax	= 12;
		aiRateOfFire = 4;
		aiRateOfFireDistance = 600;
		aiRateOfFireDispersion = 3;
		minRange = 600;
		minRangeProbab = 0.05;
		midRange = 1500;
		midRangeProbab = 0.58;
		maxRange = 2000;
		maxRangeProbab = 0.04;
	};

	class farBMD2 : mediumBMD2
	{
		burst			= 4;
		burstRangeMax	= 9;
		aiRateOfFire = 6;
		aiRateOfFireDistance = 1000;
		aiRateOfFireDispersion = 3;
		minRange = 2000;
		minRangeProbab = 0.05;
		midRange = 2500;
		midRangeProbab = 0.4;
		maxRange = 3000;
		maxRangeProbab = 0.01;
	};
};

class rhs_weap_2a72 : rhs_weap_2a72_base
{
	class HE: rhs_weap_2a72_base {};
	class AP: rhs_weap_2a72_base
	{
		magazineWell[] = {"RHS_AutoCannon_30mm_2A42_HE"};
		modes[] = {"closeBMD2","shortBMD2","mediumBMD2","farBMD2"};
	};
};

class rhs_weap_2a72_btr : rhs_weap_2a72_base
{
	class HE: rhs_weap_2a72_base
	{
		class LowROFBMD2 : LowROFBMD2
		{
			dispersion = __EVAL(0.0015/1.4);
		};

		class HighROFBMD2 : HighROFBMD2
		{
			dispersion = __EVAL(0.0015/0.3);
		};
	};
	class AP: rhs_weap_2a72_base
	{
		class LowROFBMD2 : LowROFBMD2
		{
			dispersion = __EVAL(0.0015/1.4);
		};

		class HighROFBMD2 : HighROFBMD2
		{
			dispersion = __EVAL(0.0015/0.3);
		};
		magazineWell[] = {"RHS_AutoCannon_30mm_2A42_AP"};
		modes[] = {"closeBMD2","shortBMD2","mediumBMD2","farBMD2"};
	};
};
class rhs_weap_2a70 : rhs_weap_d81
{
	aiDispersioncoefX	= 2;
	aiDispersioncoefY	= 4;
	displayName			= WEAP_STR(2A70);
	magazineReloadTime	= 5.5;
	magazines[]			= { rhs_mag_3UOF17_22, rhs_mag_3UOF19_22, rhs_mag_3UOF191_22, rhs_mag_9m117_3, rhs_mag_9m117_8, rhs_mag_9m117m_3, rhs_mag_9m117m_8 , rhs_mag_9m117m1_3, rhs_mag_9m117m1_8 };
	magazineWell[]		= {RHS_Cannon_100mm_2A70};
	minRange			=5;minRangeProbab=0.7;
	midRange			=1200;midRangeProbab=0.7;
	maxRange			=2500;maxRangeProbab=0.1;
	reloadSound[] = {"\rhsafrf\addons\rhs_c_heavyweapons\sounds\autoloader",  db+10, 1, 200};
	class gunParticles
	{
		class Effect
		{
			positionname = "Usti hlavne";
			directionname = "Konec hlavne";
			effectname = "CannonFired";
		};
	};
	#define S2_Macro \
	reloadTime=5.5;\
	dispersion = __EVAL(0.00025*11);

	class player: player
	{
		S2_Macro
	};
	class close: close
	{
		S2_Macro
	};
	class short: short
	{
		S2_Macro
	};
	class medium: medium
	{
		S2_Macro
	};
	class far: far
	{
		S2_Macro
	};
};
class rhs_weap_2a75 : rhs_weap_d81
{
	aiDispersioncoefX = 3;
	aiDispersioncoefY = 4;
	scope = public;
	displayName = WEAP_STR(2A75);
	#define S3_Macro \
	reloadTime=7.5;\
	dispersion = 0.00025*2.6;
	magazineReloadTime=7.5;

	class player: player
	{
		S3_Macro
	};
	class close: close
	{
		S3_Macro
	};
	class short: short
	{
		S3_Macro
	};
	class medium: medium
	{
		S3_Macro
	};
	class far: far
	{
		S3_Macro
	};
};
class rhs_weap_2a28_base : cannon_120mm
{
	aiDispersioncoefX = 3;
	aiDispersioncoefY = 8;

	canLock=0;
	ballisticsComputer = 0;

	scope = 1;
	cursor = "EmptyCursor";
	displayName = WEAP_STR(2A28);
	reloadSound[] = {"A3\sounds_f\vehicles\armor\noises\reload_tank_cannon_3",3.1622777,1,10};
	magazines[] = {
		"rhs_mag_pg15v_24",
		"rhs_mag_pg15v_20",
		"rhs_mag_pg15v_12",
		"rhs_mag_og15v_16",
		"rhs_mag_og15v_20",
		"rhs_mag_og15v_8"
	};
	minRange = 1;
	minRangeProbab = 0.1;
	midRange = 765;
	midRangeProbab = 1;
	maxRange = 1300;
	maxRangeProbab = 0.1;
	reloadTime = 7;
	magazineReloadTime = 5.5;
	aiRateOfFire = 12;
	aiRateOfFireDistance = 1000;
	maxLeadSpeed = 100;
	class gunParticles
	{
		class Effect
		{
			positionname = "Usti hlavne";
			directionname = "Konec hlavne";
			effectname = "RHS_2A28_Fired";
		};
	};
	class player: player
	{
		Disp_Modiffer(15)
	};
	class close: close
	{
		Disp_Modiffer(15)
	};
	class short: short
	{
		Disp_Modiffer(15)
	};
	class medium: medium
	{
		Disp_Modiffer(15)
	};
	class far: far
	{
		Disp_Modiffer(15)
	};

};
class rhs_weap_2a28 : rhs_weap_2a28_base
{
	muzzles[] = {"HE","AP"};
	class AP: rhs_weap_2a28_base {};
	class HE: rhs_weap_2a28_base
	{
		modes[] = {"close","short","medium","far"};
		magazines[] =
		{
			"rhs_mag_og15v_16",
			"rhs_mag_og15v_20",
			"rhs_mag_og15v_8"
		};
	};
};

class rhs_weap_2a41_base : rhs_weap_2a28_base
{
	displayName = WEAP_STR(2A41);
	class player: player
	{
		Disp_Modiffer(10)
	};
	class close: close
	{
		Disp_Modiffer(10)
	};
	class short: short
	{
		Disp_Modiffer(10)
	};
	class medium: medium
	{
		Disp_Modiffer(10)
	};
	class far: far
	{
		Disp_Modiffer(10)
	};
};
class rhs_weap_2a41 : rhs_weap_2a41_base
{
	muzzles[] = {"AP","HE"};
	class AP: rhs_weap_2a41_base {};
	class HE: rhs_weap_2a41_base
	{
		modes[] = {"close","short","medium","far"};
		magazines[] =
		{
			"rhs_mag_og15v_16",
			"rhs_mag_og15v_20",
			"rhs_mag_og15v_8"
		};
	};
};
#define ARTY_RANGES(rangeMin,rangeMax) \
		minRange=rangeMin;minRangeProbab=0.6;\
		midRange=__EVAL(rangeMin + (rangeMax - rangeMin)*0.5);midRangeProbab=0.65;\
		maxRange=rangeMax;maxRangeProbab=0.6;\

#define ARTY_RANGE_NO_AI \
		minRange		= 0;\
		minRangeProbab	= 0.01;\
		midRange		= 1;\
		midRangeProbab	= 0.01;\
		maxRange		= 2;\
		maxRangeProbab	= 0.01;

class mortar_155mm_AMOS;

class rhs_weap_2a33: mortar_155mm_AMOS
{

	displayname = "2A33";
	magazinereloadtime = 6;
	magazines[] =
	{
		"rhs_mag_HE_2a33",
		"rhs_mag_WP_2a33",
		"rhs_mag_Atomic_2a33",
		"rhs_mag_LASER_2a33",
		"rhs_mag_SMOKE_2a33",
		"rhs_mag_ILLUM_2a33",

		"rhs_mag_53vof546v",
		"rhs_mag_53vof546v_26",
		"rhs_mag_53vof546v_32",
		"rhs_mag_53vof546v_46",
		"rhs_mag_53vof546v_direct",
		"rhs_mag_53vof546v_direct_32",

		"rhs_mag_br540_10",
		"rhs_mag_br540",
		"rhs_mag_bp540_4",
		"rhs_mag_bp540",


		"rhs_mag_HE_2a33_46",
		"rhs_mag_WP_2a33_46",
		"rhs_mag_Atomic_2a_2633_46",
		"rhs_mag_LASER_2a33_46",
		"rhs_mag_SMOKE_2a33_46",
		"rhs_mag_ILLUM_2a33_46",
		"rhs_mag_HE_2a33_32",
		"rhs_mag_HE_2a33_26",
		"rhs_mag_WP_2a33_26",
		"rhs_mag_Atomic_2a_2633_26",
		"rhs_mag_LASER_2a33_26",
		"rhs_mag_SMOKE_2a33_26",
		"rhs_mag_ILLUM_2a33_26"
	};

	class GunParticles
	{
		class Effect1 {
			directionname = "Konec hlavne";
			effectname = "ArtilleryFired1";
			positionname = "Usti hlavne";
		};
		class Effect2 {
			directionname = "Usti hlavne b";
			effectname = "ArtilleryFiredL";
			positionname = "Usti hlavne";
		};
		class Effect3 {
			directionname = "Usti hlavne b";
			effectname = "ArtilleryFiredR";
			positionname = "Usti hlavne";
		};
	};
	
	modes[] = {"Single1","Single2","Single3","Single4","Single5","Single6","Single7"};

	class Single1: Mode_SemiAuto
	{
		displayName = "Charge 6";
		reloadTime = 8;
		artilleryDispersion = 7.2;
		artilleryCharge = 0.256;
		ARTY_RANGES(2050,2867)
	};
	class Single2: Single1
	{
		displayName = "Charge 5";
		artilleryCharge = 0.298;
		ARTY_RANGES(2807,3885)
	};
	class Single3: Single1
	{
		displayName = "Charge 4";
		artilleryCharge = 0.346;
		ARTY_RANGES(3784,5237)
	};
	class Single4: Single1
	{
		displayName = "Charge 3";
		artilleryCharge = 0.4;
		ARTY_RANGES(5058,6999)
	};
	class Single5: Single1
	{
		displayName = "Charge 2";
		artilleryCharge = 0.47;
		ARTY_RANGES(6983,9664)
	};
	class Single6: Single1
	{
		displayName = "Charge 1";
		artilleryCharge = 0.54;
		ARTY_RANGES(9218,12757)
	};
	class Single7: Single1
	{
		displayName = "Full charge";
		artilleryCharge = 0.634;
		ARTY_RANGES(12707,17500)
	};
	class close: Single1
	{
		artilleryCharge = 1;
		artilleryDispersion = 1;
		showToPlayer = 0;
		burst = 1;
		burstRangeMax = 1;
		aiRateOfFire = 6;
		aiRateOfFireDispersion = 0.5;
		aiRateOfFireDistance = 500;
		minRange = 5;
		minRangeProbab = 0.1;
		midRange = 500;
		midRangeProbab = 0.8;
		maxRange = 1000;
		maxRangeProbab = 0.85;
	};
	class short: close
	{
		aiRateOfFire = 6;
		aiRateOfFireDispersion = 1;
		aiRateOfFireDistance = 2000;
		minRange = 500;
		minRangeProbab = 0.3;
		midRange = 1500;
		midRangeProbab = 0.85;
		maxRange = 2000;
		maxRangeProbab = 0.85;
	};
	class medium: close
	{
		aiRateOfFire = 8;
		aiRateOfFireDispersion = 4;
		aiRateOfFireDistance = 2250;
		minRange = 1500;
		minRangeProbab = 0.6;
		midRange = 2500;
		midRangeProbab = 0.85;
		maxRange = 3000;
		maxRangeProbab = 0.8;
	};
	class far: close
	{
		aiRateOfFire = 10;
		aiRateOfFireDispersion = 8;
		aiRateOfFireDistance = 3500;
		minRange = 2500;
		minRangeProbab = 0.75;
		midRange = 5000;
		midRangeProbab = 0.8;
		maxRange = 6500;
		maxRangeProbab = 0.05;
	};
};
class rhs_weap_2a33_at : rhs_weap_2a33
{
	modes[] = {"Single7","Single6","Single5","Single4","Single3","Single2","Single1","close","short","medium","far"};
	aiDispersioncoefX = 3.5;
	aiDispersioncoefY = 5;
	class Single1: Single1
	{
		artilleryCharge = 0.43; // 282 m/s with OF-540
		ARTY_RANGE_NO_AI
	};
	class Single2: Single2
	{
		artilleryCharge = 0.51; // 335 m/s with OF-540
		ARTY_RANGE_NO_AI
	};
	class Single3: Single3
	{
		artilleryCharge = 0.58; // 383 m/s with OF-540
		ARTY_RANGE_NO_AI
	};
	class Single4: Single4
	{
		artilleryCharge = 0.64; // 425 m/s with OF-540
		ARTY_RANGE_NO_AI
	};
	class Single5: Single5
	{
		artilleryCharge = 0.78; // 511 m/s with OF-540
		ARTY_RANGE_NO_AI
	};
	class Single6: Single6
	{
		artilleryCharge = 0.92; // 606 m/s with OF-540
		ARTY_RANGE_NO_AI
	};
	class Single7: Single7
	{
		artilleryCharge = 1; // 655 m/s with OF-540
		ARTY_RANGE_NO_AI
	};
};

class rhs_weap_2a31 : rhs_weap_2a33
{
	displayname = "2A31";
	magazinereloadtime = 6;
	modes[] = {"Single1","Single2","Single3","Single4","Single5","Single6"};
	
	class Single1: Single1
	{
		displayName = "Charge 4";
		artilleryCharge = 0.26;
		ARTY_RANGES(1900,3200)
	};
	class Single2: Single2
	{
		displayName = "Charge 3";
		artilleryCharge = 0.32;
		ARTY_RANGES(3000,4900)
	};
	class Single3: Single3
	{
		displayName = "Charge 2";
		artilleryCharge = 0.39;
		ARTY_RANGES(4300,7300)
	};
	class Single4: Single4
	{
		displayName = "Charge 1";
		artilleryCharge = 0.44;
		ARTY_RANGES(5500,9300)
	};
	class Single5: Single5
	{
		displayName = "Reduced charge";
		artilleryCharge = 0.5;
		ARTY_RANGES(7000,12000)
	};
	class Single6: Single6
	{
		displayName = "Full charge";
		artilleryCharge = 0.564;
		ARTY_RANGES(9000,15400)
	};
	magazines[] =
	{
		"rhs_mag_of462",
		"rhs_mag_of462_10",
		"rhs_mag_3of56",
		"rhs_mag_3of56_10",
		"rhs_mag_3of56_30",
		"rhs_mag_3of56_35",
		"rhs_mag_3of56_5",
		"rhs_mag_of462_direct",
		"rhs_mag_of462_direct_10",
		"rhs_mag_3of56_direct",
		"rhs_mag_3of56_direct_10",
		"rhs_mag_3of56_direct_30",
		"rhs_mag_3of56_direct_5",
		"rhs_mag_bk6m",
		"rhs_mag_bk6m_26",
		"rhs_mag_bk6m_5",
		"rhs_mag_bk13",
		"rhs_mag_bk13_26",
		"rhs_mag_bk13_5",
		"rhs_mag_bk13_10",
		"rhs_mag_d462",
		"rhs_mag_d462_2",
		"rhs_mag_s463",
		"rhs_mag_s463_2",
		"rhs_mag_3of69m",
		"rhs_mag_3of69m_2"
	};
	class EventHandlers
	{
		class RHS_EventHandlers
		{
			fired = "(_this + [35000,'konec hlavne']) call rhs_fnc_scriptedRecoil";
		};
	};
};

class rhs_weap_2a31_at : rhs_weap_2a31
{
	modes[] = {"Single6","Single5","Single4","Single3","Single2","Single1","close","short","medium","far"};
	aiDispersioncoefX = 3.5;
	aiDispersioncoefY = 5;
	class Single1: Single1
	{
		artilleryCharge = 0.4; // 276 m/s with OF-462
		ARTY_RANGE_NO_AI
	};
	class Single2: Single2
	{
		artilleryCharge = 0.48; // 335 m/s with OF-462
		ARTY_RANGE_NO_AI
	};
	class Single3: Single3
	{
		artilleryCharge = 0.6; // 417 m/s with OF-462
		ARTY_RANGE_NO_AI
	};
	class Single4: Single4
	{
		artilleryCharge = 0.71; // 493 m/s with OF-462
		ARTY_RANGE_NO_AI
	};
	class Single5: Single5
	{
		artilleryCharge = 0.81; // 565 m/s with OF-462
		ARTY_RANGE_NO_AI
	};
	class Single6: Single6
	{
		artilleryCharge = 1; // 690 m/s with OF-462
		ARTY_RANGE_NO_AI
	};
	class EventHandlers: EventHandlers
	{
		class RHS_Artillery_EventHandlers
		{
			fired = "_this call rhs_fnc_scriptedArtilleryCharge";
		};
	};
};


class rhs_weap_d30 : mortar_155mm_AMOS
{
	displayName = $STR_RHS_DN_D30;
	ballisticscomputer = 2;
	reloadTime = 6;
	magazineReloadTime = 6;

	class GunParticles {
		class Effect1
		{
			directionname = "Konec hlavne";
			positionname = "Usti hlavne";
			effectname = "ArtilleryFired1";
		};
		class Effec2
		{
			directionname = "ejector_pos";
			positionname = "ejector_dir";
			effectname = "RHS_D30_Fired";
		};
	};

	modes[] = {"Single1","Single2","Single3","Single4","Single5","Single6"};
	class Single1: Mode_SemiAuto
	{
		displayName = "Charge 4";
		reloadTime = 8;
		artilleryDispersion = 7.2;
		artilleryCharge = 0.26;
		ARTY_RANGES(1900,3200)
	};
	class Single2: Single1
	{
		displayName = "Charge 3";
		artilleryCharge = 0.32;
		ARTY_RANGES(3000,4900)
	};
	class Single3: Single1
	{
		displayName = "Charge 2";
		artilleryCharge = 0.39;
		ARTY_RANGES(4300,7300)
	};
	class Single4: Single1
	{
		displayName = "Charge 1";
		artilleryCharge = 0.44;
		ARTY_RANGES(5500,9300)
	};
	class Single5: Single1
	{
		displayName = "Reduced charge";
		artilleryCharge = 0.5;
		ARTY_RANGES(7000,12000)
	};
	class Single6: Single1
	{
		displayName = "Full charge";
		artilleryCharge = 0.564;
		ARTY_RANGES(9000,15400)
	};
	class close: Single1
	{
		artilleryCharge = 1;
		artilleryDispersion = 1;
		showToPlayer = 0;
		burst = 1;
		burstRangeMax = 1;
		aiRateOfFire = 6;
		aiRateOfFireDispersion = 0.5;
		aiRateOfFireDistance = 500;
		minRange = 5;
		minRangeProbab = 0.1;
		midRange = 500;
		midRangeProbab = 0.8;
		maxRange = 1000;
		maxRangeProbab = 0.85;
	};
	class short: close
	{
		aiRateOfFire = 6;
		aiRateOfFireDispersion = 1;
		aiRateOfFireDistance = 2000;
		minRange = 500;
		minRangeProbab = 0.3;
		midRange = 1500;
		midRangeProbab = 0.85;
		maxRange = 2000;
		maxRangeProbab = 0.85;
	};
	class medium: close
	{
		aiRateOfFire = 8;
		aiRateOfFireDispersion = 4;
		aiRateOfFireDistance = 2250;
		minRange = 1500;
		minRangeProbab = 0.6;
		midRange = 2500;
		midRangeProbab = 0.85;
		maxRange = 3000;
		maxRangeProbab = 0.8;
	};
	class far: close
	{
		aiRateOfFire = 10;
		aiRateOfFireDispersion = 8;
		aiRateOfFireDistance = 3500;
		minRange = 2500;
		minRangeProbab = 0.75;
		midRange = 5000;
		midRangeProbab = 0.8;
		maxRange = 6500;
		maxRangeProbab = 0.05;
	};

	magazines[] =
	{
		"rhs_mag_of462",
		"rhs_mag_of462_10",
		"rhs_mag_3of56",
		"rhs_mag_3of56_10",
		"rhs_mag_3of56_5",
		"rhs_mag_of462_direct",
		"rhs_mag_of462_direct_10",
		"rhs_mag_3of56_direct",
		"rhs_mag_3of56_direct_10",
		"rhs_mag_3of56_direct_5",
		"rhs_mag_bk6m",
		"rhs_mag_bk6m_26",
		"rhs_mag_bk6m_5",
		"rhs_mag_bk13",
		"rhs_mag_bk13_26",
		"rhs_mag_bk13_5",
		"rhs_mag_d462",
		"rhs_mag_d462_2",
		"rhs_mag_s463",
		"rhs_mag_s463_2",
		"rhs_mag_3of69m",
		"rhs_mag_3of69m_2"
	};

};

class rhs_weap_d30_at : rhs_weap_d30
{
	modes[] = {"Single6","Single5","Single4","Single3","Single2","Single1","close","short","medium","far"};
	class Single1: Single1
	{
		artilleryCharge = 0.4; // 276 m/s with OF-462
		ARTY_RANGE_NO_AI
	};
	class Single2: Single2
	{
		artilleryCharge = 0.48; // 335 m/s with OF-462
		ARTY_RANGE_NO_AI
	};
	class Single3: Single3
	{
		artilleryCharge = 0.6; // 417 m/s with OF-462
		ARTY_RANGE_NO_AI
	};
	class Single4: Single4
	{
		artilleryCharge = 0.71; // 493 m/s with OF-462
		ARTY_RANGE_NO_AI
	};
	class Single5: Single5
	{
		artilleryCharge = 0.81; // 565 m/s with OF-462
		ARTY_RANGE_NO_AI
	};
	class Single6: Single6
	{
		artilleryCharge = 1; // 690 m/s with OF-462
		ARTY_RANGE_NO_AI
	};
	class EventHandlers
	{
		class RHS_Artillery_EventHandlers
		{
			fired = "_this call rhs_fnc_scriptedArtilleryCharge";
		};
	};
};

class rhs_weap_gsh30 : gatling_30mm
{
	scope				= 2;
	//aidispersioncoefx	= __EVAL(1.2*2);
	//aidispersioncoefy	= __EVAL(1.2*2);
	canlock				= 2;
	cursor				= "mg";
	cursoraim			= "EmptyCursor";
	cursorsize			= 0;

	muzzles[]		= {"this"};
	displayname		= $STR_RHS_GSH302K_NAME;
	initspeed		= 940;
	shotFromTurret	= 0;ballisticsComputer = 8;
	class gunParticles
	{
		class effect2
		{
			directionname = "chamber_1_dir";
			positionname = "chamber_1";
			effectname = "RHS_AutoCannonFired";
		};
		class effect1 {
			effectname = "RHS_30mm_Catridge";
			directionname = "mgun_eject_dir";
			positionname = "mgun_eject_pos";
		};
	};
	magazines[]=
	{
		"rhs_mag_gsh30_ofzt_750",
		"rhs_mag_gsh30_ofzt_250",
		"rhs_mag_gsh30_bt_750",
		"rhs_mag_gsh30_bt_250",
		"rhs_mag_gsh30_bt_150",
		"rhs_mag_gsh30_mixed_150"
	};
	namesound="cannon";
	soundcontinuous=1;
	flash = "gunfire";
	flashSize = 0.5;

	modes[]=
	{
		"manual",
		"manual_low",
		"close",
		"short",
		"medium",
		"far"
	};
	class manual : Mode_FullAuto
	{
		airateoffire=0.5;
		airateoffiredistance=50;
		autofire=1;
		burst=2;
		dispersion=0.006;
		displayname="$STR_RHS_GSH302K_NAME";
		maxrange=3;
		maxrangeprobab=0.01;
		midrange=2;
		midrangeprobab=0.01;
		minrange=1;
		minrangeprobab=0.01;
		multiplier=1;
		reloadtime=0.025; //2400RPM
		flash = "gunfire";
		flashSize = 0.5;
		showtoplayer=1;
		sound[]=
		{
			"",
			10,
			1
		};
		soundburst=0;
		soundcontinuous=0;
	};
	class manual_low : manual
	{
		reloadtime=0.2; //300RPM
		textureType = "semi";
		burst=0;
	};
	class close: manual
	{
		airateoffire=0.001;
		airateoffiredistance=50;
		aiRateOfFireDispersion = 3;
		burst=1;
		maxrange=300;
		maxrangeprobab=0.04;
		midrange=100;
		midrangeprobab=0.88;
		minrange=0;
		minrangeprobab=0.5;
		showtoplayer=0;
		soundburst=0;
	};
	class short: close
	{
		aiRateOfFire = 0.25;
		airateoffiredistance=300;
		aiRateOfFireDispersion = 3;
		burst			= 10;
		burstRangeMax	= 15;
		maxrange=800;
		midrange=500;
		minrange=200;
	};
	class medium: manual_low
	{
		airateoffire=3;
		airateoffiredistance=600;
		burst			= 7;
		burstRangeMax	= 12;
		maxrangeprobab=0.04;
		midrangeprobab=0.88;
		minrangeprobab=0.5;
		maxrange=1000;
		midrange=800;
		minrange=600;
		showtoplayer=0;
	};
	class far: medium
	{
		airateoffire=4;
		airateoffiredistance=1000;
		aiRateOfFireDispersion = 3;
		burst			= 4;
		burstRangeMax	= 9;
		maxrange=1250;
		maxrangeprobab=0.11;
		midrange=1050;
		midrangeprobab=0.4;
		minrange=850;
		minrangeprobab=0.15;
	};
};

class rhs_weap_gsh302 : rhs_weap_gsh30
{
	initspeed=870;
	displayname = "$STR_RHS_GSH302_NAME";
	modes[]=
	{
		"manual",
		"close",
		"short",
		"medium",
		"far"
	};
	class manual : manual
	{
		displayname = "$STR_RHS_GSH302_NAME";
		reloadtime = 0.02; //3000RPM
		dispersion = 0.003;
	};
	class close: close
	{
		reloadtime = 0.02; //3000RPM
	};
	class short: short
	{
		reloadtime = 0.02; //3000RPM
	};
	class medium: close
	{
		airateoffire=3;
		airateoffiredistance=600;
		burst			= 7;
		burstRangeMax	= 12;
		maxrange=1000;
		midrange=800;
		minrange=600;
	};
	class far: close
	{
		airateoffire=4;
		airateoffiredistance=1000;
		aiRateOfFireDispersion = 3;
		burst			= 4;
		burstRangeMax	= 9;
		maxrange=1250;
		maxrangeprobab=0.11;
		midrange=1050;
		midrangeprobab=0.4;
		minrange=850;
		minrangeprobab=0.15;
	};
};

class rhs_weap_gsh301 : rhs_weap_gsh30
{
	initspeed=900;
	holdsterAnimValue = 1.5;
	displayname = "$STR_RHS_GSH301_NAME";
	ballisticscomputer = BCTargetLead + BCImpactPoint;

	class gunParticles
	{
		class effect2
		{
			directionname = "chamber_1_dir";
			positionname = "chamber_1";
			effectname = "AutoCannonFired";
		};
	};

	modes[]=
	{
		"manual",
		"close",
		"short",
		"medium",
		"far"
	};
	muzzles[] = {"this","rhs_burst_safe"};
	class rhs_burst_safe: RHS_weap_GSh30
	{
		displayName = "Burst Lock - GSh-30-1";
		modes[]=
		{
			"manual"
		};
		class manual : manual
		{
			showtoplayer	= 0;
			autofire		= 0;
			maxrangeprobab	= 0;
			midrangeprobab	= 0;
			minrangeprobab	= 0;
			maxrange		= 0;
			midrange		= 0;
			minrange		= 0;
			textureType 	= "default";
		};
	};
	class manual : manual
	{
		autofire = 1;
		textureType = "burst";
		displayname = "$STR_RHS_GSH301_NAME";
		reloadtime = 0.04;
		dispersion = 0.003;
		burst = 1;
	};
	class close: close
	{
		reloadtime = 0.04;
	};
	class short: short
	{
		reloadtime = 0.04;
	};
	class medium: close
	{
		airateoffire=3;
		airateoffiredistance=600;
		burst			= 7;
		burstRangeMax	= 12;
		maxrange=1000;
		midrange=800;
		minrange=600;
	};
	class far: close
	{
		airateoffire=4;
		airateoffiredistance=1000;
		aiRateOfFireDispersion = 3;
		burst			= 4;
		burstRangeMax	= 9;
		maxrange=1250;
		maxrangeprobab=0.11;
		midrange=1050;
		midrangeprobab=0.4;
		minrange=850;
		minrangeprobab=0.15;
	};
};

class rhs_weap_gsh23l : rhs_weap_gsh30
{
	initspeed=715;
	displayname="$STR_RHS_GSH23L_NAME";
	magazines[]=
	{
		rhs_mag_AM23_500,
		rhs_mag_upk23_ofz,
		rhs_mag_upk23_ofzt,
		rhs_mag_upk23_btz,
		rhs_mag_upk23_mixed,
		rhs_mag_upk23_ka52_ofz,
		rhs_mag_upk23_ka52_ofzt,
		rhs_mag_upk23_ka52_btz,
		rhs_mag_upk23_ka52_mixed
	};
	namesound="cannon";
	shotFromTurret=0;
	soundcontinuous=1;
	modes[] =
	{
		"manual",
		"close",
		"short",
		"medium",
		"far"
	};
	class manual: manual
	{
		airateoffire=0.5;
		airateoffiredistance=50;
		burst=4;
		dispersion=0.0035;
		displayname="$STR_RHS_GSH23L_NAME";
		maxrange=3;
		maxrangeprobab=0.01;
		midrange=2;
		midrangeprobab=0.01;
		minrange=1;
		minrangeprobab=0.01;
		multiplier=1;
		reloadtime=0.01875;
	};
	class close: manual
	{
		airateoffire=0.001;
		airateoffiredistance=50;
		burst=1;
		maxrange=300;
		maxrangeprobab=0.04;
		midrange=100;
		midrangeprobab=0.58;
		minrange=0;
		minrangeprobab=0.5;
		showtoplayer=0;
	};
	class short: close
	{
		airateoffire="2 + random 2";
		airateoffiredistance=300;
		aiRateOfFireDispersion = 3;
		burst			= 10;
		burstRangeMax	= 15;
		maxrange=800;
		midrange=500;
		minrange=200;
	};
	class medium: close
	{
		airateoffire=3;
		airateoffiredistance=600;
		aiRateOfFireDispersion = 3;
		burst			= 7;
		burstRangeMax	= 11;

		maxrange=1000;
		midrange=800;
		minrange=600;
	};
	class far: close
	{
		airateoffire=4;
		airateoffiredistance=1000;
		aiRateOfFireDispersion = 3;
		burst			= 4;
		burstRangeMax	= 9;
		maxrange=1250;
		maxrangeprobab=0.01;
		midrange=1050;
		midrangeprobab=0.4;
		minrange=850;
		minrangeprobab=0.05;
	};
	class gunParticles
	{
		class mg1
		{
			positionName="chase01";
			directionName="chase01dir";
			effectName="MachineGun1";
		};
		class mg2
		{
			positionName="chase03";
			directionName="chase03dir";
			effectName="MachineGun1";
		};
		class mg3
		{
			positionName="chase03";
			directionName="chase03dir";
			effectName="MachineGun1";
		};
		class mg4
		{
			positionName="chase04";
			directionName="chase04dir";
			effectName="MachineGun1";
		};
	};
};

class rhs_weap_gsh23lx2 : rhs_weap_gsh23l
{
	class manual: manual
	{
		reloadtime = 0.009375; //3000RPM x 2
	};
	class close: close
	{
		reloadtime = 0.009375; //3000RPM x 2
	};
	class short: short
	{
		reloadtime = 0.009375; //3000RPM x 2
	};
	class medium: medium
	{
		reloadtime = 0.009375; //3000RPM x 2
	};
	class far: far
	{
		reloadtime = 0.009375; //3000RPM x 2
	};
};

class rhs_weap_azp23 : CannonCore
{
	scope				= 1;
	ballisticsComputer	= 4;
	displayName			= "$STR_RHS_AZP23_NAME";
	nameSound			= "cannon";
	cartridgePos		= "eject1";
	cartridgeVel		= "eject1dir";
	cursor				= "emptyCursor";
	cursorAim			= "mg";
	cursorAimOn			= "";
	cursorSize			= 1;
	canLock				= 2;
	weaponLockSystem	= 8;
	flash				= "gunfire";
	flashSize			= 0.1;
	class gunParticles
	{
		class effect1
		{
			positionName="eject1";
			directionName="eject1dir";
			effectName="MachineGunCartridge2";
		};
		class effect2
		{
			positionName="eject2";
			directionName="eject2dir";
			effectName="MachineGunCartridge2";
		};
		class effect3
		{
			positionName="eject3";
			directionName="eject3dir";
			effectName="MachineGunCartridge2";
		};
		class effect4
		{
			positionName="eject4";
			directionName="eject4dir";
			effectName="MachineGunCartridge2";
		};
		class mg1
		{
			positionName="chase01e";
			directionName="chase01dir";
			effectName="MachineGun1";
		};
		class mg2
		{
			positionName="chase03e";
			directionName="chase03dir";
			effectName="MachineGun1";
		};
		class mg3
		{
			positionName="chase03e";
			directionName="chase03dir";
			effectName="MachineGun1";
		};
		class mg4
		{
			positionName="chase04e";
			directionName="chase04dir";
			effectName="MachineGun1";
		};
	};
	magazines[]=
	{
		rhs_mag_AZP23_2000,
		rhs_mag_AZP23_2000_mixed,
		RHS_mag_AZP23_250,
		RHS_mag_AZP23_250_mixed,
		rhs_mag_AZP23_250_ap
	};
	magazineReloadTime=14;
	modes[]=
	{
		"manual",
		"close",
		"short",
		"medium",
		"far"
	};
	class manual: CannonCore
	{
		displayName="$STR_RHS_AZP23_NAME";
		autoFire				= 1;
		reloadTime				= 0.024;
		dispersion				= 0.005;
		multiplier				= 2;
		soundContinuous			= 0;
		showToPlayer			= 1;
		burst					= 1;
		aiRateOfFire			= 0.5;
		aiRateOfFireDistance	= 50;
		minRange				= 1;
		minRangeProbab			= 0.01;
		midRange				= 2;
		midRangeProbab			= 0.01;
		maxRange				= 3;
		maxRangeProbab			= 0.01;
	};
	class close: manual
	{
		showToPlayer			= 0;
		soundBurst				= 0;
		burst					= 10;
		burstRangeMax 			= 15;
		aiRateOfFire			= 2;
		aiRateOfFireDistance	= 1000;
		aiRateOfFireDispersion	= 2;
		minRange				= 0;
		minRangeProbab			= 0.05;
		midRange				= 1000;
		midRangeProbab			= 0.58;
		maxRange				= 1600;
		maxRangeProbab			= 0.3;
	};
	class short: close
	{
		burst					= 10;
		burstRangeMax 			= 16;
		aiRateOfFire			= 4;
		aiRateOfFireDistance	= 1600;
		aiRateOfFireDispersion	= 3;
		minRange				= 1000;
		minRangeProbab			= 0.3;
		midRange				= 1600;
		midRangeProbab			= 0.58;
		maxRange				= 2200;
		maxRangeProbab			= 0.3;
	};
	class medium: close
	{
		burst					= 15;
		burstRangeMax 			= 25;
		aiRateOfFire			= 4;
		aiRateOfFireDistance	= 2200;
		aiRateOfFireDispersion	=  3;
		minRange				= 1600;
		minRangeProbab			= 0.3;
		midRange				= 2000;
		midRangeProbab			= 0.58;
		maxRange				= 2800;
		maxRangeProbab			= 0.3;
	};
	class far: close
	{
		burst					= 9;
		burstRangeMax 			= 18;
		aiRateOfFire			= 5;
		aiRateOfFireDistance	= 3000;
		aiRateOfFireDispersion	= 4;
		minRange				= 1600;
		minRangeProbab			= 0.3;
		midRange				= 2200;
		midRangeProbab			= 0.4;
		maxRange				= 8500;
		maxRangeProbab			= 0.01;
	};
};

class rhs_weap_2a14 : rhs_weap_azp23
{
	type = 1;
	ballisticsComputer = 2;
	canLock = 0;
	weaponLockSystem	= 1;
	displayName="2A14";
	reloadMagazineSound[]={"rhsafrf\addons\rhs_c_heavyweapons\sounds\rhs_2a14_reload", db20, 1, 20};
	class gunParticles
	{
		class effect1
		{
			positionName="eject1";
			directionName="eject1dir";
			effectName="RHS_23mm_Catridge";
		};
		class effect2
		{
			positionName="eject2";
			directionName="eject2dir";
			effectName="RHS_23mm_AmmoBeltLink";
		};
		class effect3
		{
			positionName="eject3";
			directionName="eject3dir";
			effectName="RHS_23mm_Catridge";
		};
		class effect4
		{
			positionName="eject4";
			directionName="eject4dir";
			effectName="RHS_23mm_AmmoBeltLink";
		};
	};
	magazineReloadTime=9;
	magazines[]=
	{
		"RHS_mag_AZP23_100",
		"rhs_mag_AZP23_100_veh",
		"rhs_mag_AZP23_100_ap",
		"rhs_mag_AZP23_100_ap_veh"
	};
	class manual: manual
	{
		displayName="2A14";
		reloadTime=0.03; //2000 RPM
	};
};
