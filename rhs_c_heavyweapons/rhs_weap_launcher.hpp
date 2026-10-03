class MissileLauncher;

class rhs_weap_9k11 : MissileLauncher
{
	displayName = WEAP_STR(9K11);
	minRange = 300;
	minRangeProbab = 0.1;
	midRange = 1000;
	midRangeProbab = 0.7;
	maxRange = 2000;
	maxRangeProbab = 0.001;
	sounds[] = {StandardSound};
 	class StandardSound
 	{
		weaponSoundEffect = "DefaultRifle";
		begin1[] = {"\rhsafrf\addons\rhs_c_heavyweapons\sounds\rhs_s_atgm.ogg", db+8,1200};
		soundBegin[]={"begin1",1};
	};
	reloadTime = 3.0;
	magazineReloadTime = 14;
	magazines[] = {"rhs_mag_9m14","rhs_mag_9m14m","rhs_mag_9m14m_3","rhs_mag_9m14m_4","rhs_mag_mclos_training"};
	aiRateOfFire = 5.0;
	aiRateOfFireDistance = 500;
	autoreload=0;
	textureType = "semi";
	class EventHandlers
	{
		class RHS_EventHandlers
		{
			fired		= "_this call rhs_fnc_9m14_fired;";
			reloaded	= "_this call rhs_fnc_9m14_reload;";
		};
	}
};

class missiles_Zephyr;	// External class reference
class missiles_titan;

class rhs_weap_9m111 : MissileLauncher
{
	canLock=1;
	minRange=10;
	minRangeProbab=0.5;
	midRange=1450;
	midRangeProbab=1;
	maxRange=2550;
	maxRangeProbab=0.6;
	aiRateOfFireDistance=500;

	reloadTime = 30;
	magazineReloadTime = 30;
	displayName = WEAP_STR(9M111);
	sounds[] = {StandardSound};
 	class StandardSound
 	{
		weaponSoundEffect = "DefaultRifle";
		begin1[] = {"\rhsafrf\addons\rhs_c_heavyweapons\sounds\rhs_s_atgm.ogg", db+8,1200};
		soundBegin[]={"begin1",1};
	};
	magazines[] = {"rhs_mag_9m111","rhs_mag_9m111_3","rhs_mag_9m111_4","rhs_mag_9m111_5","rhs_mag_9m111m","rhs_mag_9m111m_3","rhs_mag_9m111m_4","rhs_mag_9m111m_5","rhs_mag_9m113","rhs_mag_9m113_3","rhs_mag_9m113_4","rhs_mag_9m113_5"};
	aiRateOfFire=5;
	autoreload=0;
	holdsterAnimValue = 1;
	textureType = "semi";
	class gunParticles
	{
		class effect1
		{
			effectname = "RHS_ATGM_Cap";
			positionname = "spice rakety";
			directionname = "cap_ejection_dir1";
		};
		class effect2
		{
			effectName="RHS_ATGM_Cap";
			positionname = "konec rakety";
			directionname = "cap_ejection_dir2";
		};
	};
};
class rhs_weap_9m113 : rhs_weap_9m111
{
	autoreload=0;
	minRange=10;
	minRangeProbab=0.5;
	midRange=1450;
	midRangeProbab=1;
	maxRange=3750;
	maxRangeProbab=0.6;
	displayName = WEAP_STR(9M113);
	magazines[] = {"rhs_mag_9m113m","rhs_mag_9m113M_3","rhs_mag_9m113M_4","rhs_mag_9m113M_5","rhs_mag_9m113","rhs_mag_9m113_3","rhs_mag_9m113_4","rhs_mag_9m113_5"};
};
class rhs_weap_9P148 : rhs_weap_9m111
{
	autoreload=0;
	reloadTime = 1.5;
	magazines[] = {rhs_mag_9m113_5_9P148_pylon,rhs_mag_9m113_5};
	class EventHandlers
	{
		class RHS_EventHandlers
		{
			fired = "_this call rhs_fnc_firedPylon;(_this + [true]) call RHS_fnc_at14_fired ";
		};
	};
	class gunParticles {};
};
class rhs_weap_9m119 : rhs_weap_9m111
{
	minRange=10;
	midRange=2450;
	maxRange=5000;

	reloadTime = 30;
	magazineReloadTime = 30;
	displayName = WEAP_STR(9M111);
	magazines[] = {"rhs_mag_9m113_3","rhs_mag_9m113_4"};
	aiRateOfFire=5;
	class gunParticles {};
};


class rhs_weap_2k4 : rhs_weap_9m111
{
	reloadTime = 10;
	magazineReloadTime = 8.5;
	displayName = "2K4";
	reloadSound[] = {"\rhsafrf\addons\rhs_c_heavyweapons\sounds\rhs_s_2a37_reload.ogg", 1.0, 1};
	magazines[] = {"rhs_mag_3m7_12"};
	class gunParticles {};
};

class rhs_weap_9k133 : rhs_weap_9m111
{
	displayName = WEAP_STR(9K133);
	magazines[] = {"rhs_mag_9m133_2"};
	reloadTime = 0.1;
};

class RocketPods;

class rhs_weap_SPG9: RocketPods
{
	scope = 2;
	canlock=0;
	displayName=$STR_RHS_DN_SPG9;
	type = WeaponHardMounted;
	reloadTime = 3;
	magazineReloadTime=10;
	modelOptics = "";
	magazines[]=
	{
		rhs_mag_PG9V,
		rhs_mag_PG9N,
		rhs_mag_PG9VNT,

		rhs_mag_OG9VM,
		rhs_mag_OG9V
	};
	sounds[] = {StandardSound};
 	class StandardSound
 	{
		weaponSoundEffect = "DefaultRifle";
		begin1[]={"rhsafrf\addons\rhs_sounds\rpg\rpg_1",2.35,1,1100};
		begin2[]={"rhsafrf\addons\rhs_sounds\rpg\rpg_2",2.35,1,1100};
		soundBegin[]={"begin1",0.5,"begin2",0.5};
	};
	reloadMagazineSound[]={"\rhsafrf\addons\rhs_c_heavyweapons\sounds\flare_reload",db-70,1,20};
	recoil=launcherBase;
	aiRateOfFire = 10;
	aiRateOfFireDistance = 450;
	minRange = 50;
	midRange = 450;
	maxRange = 800;
	cursor = Rocket; //\ca\UI\Data\cursor_w_rocket_gs;
	cursorSize = 1;
	textureType = "semi";
};
class rhs_weap_9K114_launcher: MissileLauncher
{
	canlock				= 1;
	cursoraim			= "";
	weaponLockSystem	= CM_Lock_Visual;

	displayname="9K114";
	magazines[]=
	{
		rhs_mag_9M114,
		rhs_mag_9M114_Mi24_2x,
		rhs_mag_9M114M_Mi24_2x,
		rhs_mag_9M114M1_Mi24_2x,
		rhs_mag_9M114M2_Mi24_2x
	};

	airateoffire			= 4;
	airateoffiredistance	= 700;
	maxrange				= 6000;
	maxrangeprobab			= 0.87;
	midrange				= 2700;
	midrangeprobab			= 0.95;
	minrange				= 400;
	minrangeprobab			= 0.65;
	reloadtime				= 1;

	textureType="fullAuto";
};
class rhs_weap_9K114F_launcher: rhs_weap_9K114_launcher
{
	displayname="9K114F";
	magazines[]=
	{
		rhs_mag_9M114F_Mi24_2x
	};
};


class rhs_weap_2K8_launcher: rhs_weap_9K114_launcher
{
	displayname="2K8";
	magazines[]=
	{
		rhs_mag_9m17,
		rhs_mag_9m17p,
		rhs_mag_9M17_Mi24_2x,
		rhs_mag_9M17p_Mi24_2x
	};

	maxrange=4000;
	maxrangeprobab=0.1;
	midrange=2000;
	midrangeprobab=0.7;
	minrange=400;
	minrangeprobab=0.35;
};


class rhs_weap_9K115_launcher: rhs_weap_9K114_launcher
{
	displayname="9K115 Metis";
	magazines[]=
	{
		"rhs_mag_9M115"
	};
	maxrange=1000;
	midrange=500;
	minrange=80;
	magazineReloadTime = 15;
	autoReload = 0;
	textureType = "semi";

	class gunParticles
	{
		class effect1
		{
			effectname = "RHS_ATGM_Cap_x2";
			positionname = "spice rakety";
			directionname = "cap_ejection_dir1";
		};
		class effect2
		{
			effectName="RHS_ATGM_Cap_x2";
			positionname = "konec rakety";
			directionname = "cap_ejection_dir2";
		};
	};
};
class rhs_weap_9K115_1_launcher: rhs_weap_9K115_launcher
{
	displayname="9K115-1 Metis-M";
	magazines[]=
	{
		rhs_mag_9M131
	};
	maxrange	= 1500;
	midrange	= 500;
	minrange	= 80;
};
class rhs_weap_9K115_2_launcher: rhs_weap_9K115_launcher
{
	displayname="9K115-2 Metis-M1";
	magazines[]=
	{
		rhs_mag_9M131M,
		rhs_mag_9M131F
	};
	maxrange	= 2000;
	midrange	= 500;
	minrange	= 80;
};

class rhs_weap_9K133_launcher: rhs_weap_9K115_launcher
{
	displayname = $STR_rhs_DN_kornet;
	magazines[]=
	{
		rhs_mag_9m133,
		rhs_mag_9m133f,
		rhs_mag_9m1331,
		rhs_mag_9m133m2
	};
	maxrange	= 5500;
	midrange	= 2500;
	minrange	= 80;
};
class rhs_weap_9K133M_9M133: rhs_weap_9K133_launcher
{
	displayname = "9M133";
	magazines[]= {rhs_mag_9m133_pylon};
	class gunParticles {};
	class EventHandlers
	{
		class RHS_EventHandlers
		{
			fired = "_this call rhs_fnc_firedPylon;(_this + [true]) call RHS_fnc_at14_fired ";
			//reloaded = "_this execVM 'pylonMissileReload.sqf'";
		};
	};
	reloadTime = 0;
	magazineReloadTime = 0;
	autoReload = 0;
};
class rhs_weap_9K133M_9M133f: rhs_weap_9K133M_9M133
{
	displayname = "9M133F";
	magazines[]= {rhs_mag_9m133f_pylon};
};
class rhs_weap_9K133M_9M1331: rhs_weap_9K133M_9M133
{
	displayname = "9M133-1";
	magazines[]= {rhs_mag_9m1331_pylon};
};
class rhs_weap_9K133M_9M133M2: rhs_weap_9K133M_9M133
{
	displayname = "9M133M2";
	magazines[]= {rhs_mag_9m133m2_pylon};
};
class rhs_weap_9K133M_spare : MissileLauncher
{
	showToPlayer = 0;
	maxrange	= 3;
	midrange	= 2;
	minrange	= 1;
	magazines[] =
	{
		rhs_mag_9m133_spare_pylon,
		rhs_mag_9m133f_spare_pylon,
		rhs_mag_9m1331_spare_pylon,
		rhs_mag_9m133m2_spare_pylon
	};
};

class rhs_weap_9M120_launcher: rhs_weap_9K114_launcher
{
	displayname="9M120";
	magazines[]=
	{
		rhs_mag_9M120,
		rhs_mag_9M120_8,
		rhs_mag_9M120_16,
		rhs_mag_9M120M,
		rhs_mag_9M120M_8,
		rhs_mag_9M120M_16,
		rhs_mag_9M120_Mi24_2x,
		rhs_mag_9M120M_Mi24_2x,
		rhs_mag_9M120_Mi28_8x,
		rhs_mag_9M120M_Mi28_8x
	};
	maxrange	= 8000;
	midrange	= 3500;
};
class rhs_weap_9M120F_launcher: rhs_weap_9M120_launcher
{
	displayname="9M120F";
	magazines[]=
	{
		rhs_mag_9M120F,
		rhs_mag_9M120F_8,
		rhs_mag_9M120F_16,
		rhs_mag_9M120F_Mi24_2x,
		rhs_mag_9M120F_Mi28_8x
	};
};
class rhs_weap_9M120O_launcher: rhs_weap_9M120_launcher
{
	displayname="9M120O";
	magazines[]=
	{
		rhs_mag_9M120F,
		rhs_mag_9M120F_8,
		rhs_mag_9M120F_16,
		rhs_mag_9M120O_Mi24_2x,
		rhs_mag_9M120O_Mi28_8x
	};
};

class missiles_titan_static;
class rhs_weap_Igla_twice: missiles_titan_static
{
	scope=2;
	displayName				= $STR_RHS_DN_IGLA_TWICE;

	reloadMagazineSound[] = {"A3\Sounds_F\weapons\Reloads\reload_magazine_MissileLauncher",0.891251,1,10};
	magazineReloadTime = 20;
	magazines[]={rhs_mag_2Rnd_Igla};
	weaponLockSystem = CM_Lock_IR;

	modes[] = {"Single","Burst"};
	class Single: missiles_titan_static
	{
		aiRateOfFire			= 5.0;
		aiRateOfFireDistance	= 2100;
		displayName				= $STR_RHS_DN_IGLA_TWICE;
		minRange				= 500;minRangeProbab=0.30;
		midRange				= 3100;midRangeProbab=0.8;
		maxRange				= 5200;maxRangeProbab=0.10;
		reloadtime				= 0.05;
		textureType				= "semi";
		sounds[]				= {StandardSound};
		class StandardSound
		{
			soundsetshot[] 	= {"RocketsHeavy_Shot_SoundSet"};
		};
	};
	class Burst: Single
	{
		reloadtime = 0;
		multiplier = 1;
		burst = 2;
		salvo = 2;
		textureType ="burst";
	};
};



class rockets_230mm_GAT;
class rhs_weap_grad: rockets_230mm_GAT
{
	displayname = "$STR_RHS_122MMGRAD_NAME";
	magazines[] = {"rhs_mag_40Rnd_122mm_rockets"};

	modes[] = 
	{
		Mode_1,
		Mode_2,
		Mode_3,
		Mode_4,
		Mode_5,
		Mode_6
	};
	magazineReloadTime = 0.15;
	class Close: RocketPods
	{
		artillerycharge = 0.17;
		artillerydispersion =0.9;
		dispersion = 0.05;
		autofire = 0;
		burst = 1;
		salvo = 1;

		maxrange = 4600;
		maxrangeprobab = 0.05;
		midrange = 2500;
		midrangeprobab = 0.65;
		minrange = 800;
		minrangeprobab = 0.15;
		reloadtime = 0.2;

		soundBurst = 0;
		sounds[] = {"StandardSound"};
		class StandardSound
		{
			soundSetShot[] = {"Launcher_Titan_Shot_SoundSet","Launcher_Titan_Tail_SoundSet"};
		};
	};
	// New firemodes
	#define MODE_MACRO(numb,charge,rangeMin,rangeMax)\
	class Mode_##numb##: Close\
	{\
		displayName = ##rangeMin##m-##rangeMax##m;\
		artilleryCharge = ##charge##;\
		minRange=rangeMin;minRangeProbab=0.15;\
		midRange=__EVAL(rangeMin + (rangeMax - rangeMin)*0.5);midRangeProbab=0.65;\
		maxRange=rangeMax;maxRangeProbab=0.05;\
	};
	MODE_MACRO(1,0.365,5000,6500)
	MODE_MACRO(2,0.415,6500,8300)
	MODE_MACRO(3,0.47,8300,10000)
	MODE_MACRO(4,0.518,10000,13000)
	MODE_MACRO(5,0.58,13000,16000)
	MODE_MACRO(6,0.65,16000,20000)

	class EventHandlers
	{
		class RHS_EH
		{
			fired = "_this call rhs_fnc_bm21_fired";
		};
	};
};
class rhs_weap_bm21: rhs_weap_grad
{
	magazines[] = {"rhs_mag_m21of_1"};
};

class rhs_weap_bm21_9m28f: rhs_weap_grad
{
	magazines[] = {"rhs_mag_9m28f_1"};
	modes[] = 
	{
		Mode_1,
		Mode_2,
		Mode_3,
		Mode_4,
		Mode_5,
		Mode_6,
		Mode_7,
		Mode_8,
		Mode_9,
		Mode_10
	};
	MODE_MACRO(1,0.2,1500,1900)
	MODE_MACRO(2,0.226,1900,2400)
	MODE_MACRO(3,0.255,2400,3100)
	MODE_MACRO(4,0.288,3100,4000)
	MODE_MACRO(5,0.33,4000,3100)
	MODE_MACRO(6,0.365,5000,6500)
	MODE_MACRO(7,0.415,6500,8300)
	MODE_MACRO(8,0.47,8300,10000)
	MODE_MACRO(9,0.518,10000,13000)
	MODE_MACRO(10,0.56,13000,15000)
};
class rhs_weap_bm21_9m28k: rhs_weap_grad
{
	magazines[] = {"rhs_mag_9m28k_1"};
	modes[] = 
	{
		Mode_1,
		Mode_2,
		Mode_3,
		Mode_4,
		Mode_5,
		Mode_6,
		Mode_7,
		Mode_8,
		Mode_9
	};
	MODE_MACRO(1,0.2,1500,1900)
	MODE_MACRO(2,0.226,1900,2400)
	MODE_MACRO(3,0.255,2400,3100)
	MODE_MACRO(4,0.288,3100,4000)
	MODE_MACRO(5,0.33,4000,3100)
	MODE_MACRO(6,0.365,5000,6500)
	MODE_MACRO(7,0.415,6500,8300)
	MODE_MACRO(8,0.47,8300,10000)
	MODE_MACRO(9,0.518,10000,13000)
};
class rhs_weap_bm21_9m218: rhs_weap_grad
{
	magazines[] = {"rhs_mag_9m218_1"};
	modes[] = 
	{
		Mode_1,
		Mode_2,
		Mode_3,
		Mode_4,
		Mode_5,
		Mode_6,
		Mode_7,
		Mode_8
	};
	MODE_MACRO(1,0.365,5000,6500)
	MODE_MACRO(2,0.415,6500,8300)
	MODE_MACRO(3,0.47,8300,10000)
	MODE_MACRO(4,0.518,10000,13000)
	MODE_MACRO(5,0.58,13000,16000)
	MODE_MACRO(6,0.65,16000,20000)
	MODE_MACRO(7,0.72,20000,25000)
	MODE_MACRO(8,0.79,25000,30000)
};
class rhs_weap_bm21_9m521: rhs_weap_grad
{
	magazines[] = {"rhs_mag_9m521_1"};
	modes[] = 
	{
		Mode_1,
		Mode_2,
		Mode_3,
		Mode_4,
		Mode_5,
		Mode_6,
		Mode_7,
		Mode_9,
		Mode_10
	};
	MODE_MACRO(1,0.365,5000,6500)
	MODE_MACRO(2,0.415,6500,8300)
	MODE_MACRO(3,0.47,8300,10000)
	MODE_MACRO(4,0.518,10000,13000)
	MODE_MACRO(5,0.58,13000,16000)
	MODE_MACRO(6,0.65,16000,20000)
	MODE_MACRO(7,0.72,20000,25000)
	MODE_MACRO(8,0.79,25000,30000)
	MODE_MACRO(9,0.85,30000,35000)
	MODE_MACRO(10,0.91,35000,40000)
};
class rhs_weap_bm21_9m522: rhs_weap_grad
{
	magazines[] = {"rhs_mag_9m522_1"};
	modes[] = 
	{
		Mode_1,
		Mode_2,
		Mode_3,
		Mode_4,
		Mode_5,
		Mode_6,
		Mode_7,
		Mode_8,
		Mode_9
	};
	MODE_MACRO(1,0.365,5000,6500)
	MODE_MACRO(2,0.415,6500,8300)
	MODE_MACRO(3,0.47,8300,10000)
	MODE_MACRO(4,0.518,10000,13000)
	MODE_MACRO(5,0.58,13000,16000)
	MODE_MACRO(6,0.65,16000,20000)
	MODE_MACRO(7,0.72,20000,25000)
	MODE_MACRO(8,0.79,25000,30000)
	MODE_MACRO(9,0.879,30000,37500)
};