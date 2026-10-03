class rhs_weap_902a : SmokeLauncher
{
	scope = public;
	displayName = WEAP_STR(902A);
	magazines[] = {
		"rhs_mag_902a",
		"rhs_mag_3d17_4",
		"rhs_mag_3d17_6",
		"rhs_mag_3d17_12",
		"rhs_mag_3d17"
	};
	reloadTime = 0.099;
	showToPlayer = true;
	autoFire = true;
	minRange = 0;
	maxRange = 10000;
};
class rhs_weap_902b : rhs_weap_902a
{
	displayName = WEAP_STR(902B);

	modes[] = { "Double", "Volley", "AIDouble", "AIVolley" };
	class Double : rhs_weap_902a
	{
		reloadTime = 0.099;
		burst = 2;
		showToPlayer = true;
		multiplier = 1;
		minRange = 0;
		maxRange = 10000;
		soundBurst = 0;
		autoFire = true;
		displayName = WEAP_STR(902B);
	};
	class Volley : Double
	{
		burst = 6;
		autoFire = true;
		displayName = WEAP_STR(902B_BURST);
	};
	class AIDouble : Double
	{
		showToPlayer = 0;
	};
	class AIVolley : Volley
	{
		showToPlayer = 0;
	};
};
class rhs_weap_smokegen : Default
{
	scope = 2;
	magazines[] = {
		"rhs_mag_smokegen"
	};
	reloadTime = 8;
	simulation = "cmlauncher";
	modes[] = { "Single","Continuos" };
	class Single : Mode_SemiAuto
	{
		cursor = "EmptyCursor";
		displayName = WEAP_STR(SMOKEGEN);
		showToPlayer = true;
		autoFire = true;
		burst = 1;
		reloadTime = 8;
		minRange = 0;
		maxRange = 1000;
		sounds[] = { "StandardSound" };
		class StandardSound
		{
			begin1[] = {};
			soundBegin[] = {};
			weaponSoundEffect = "";
		};
	};
	class Continuos : Single
	{
		displayName = "Smokegen (cont)";
		burst = 999;
		reloadTime = 8;
	};
};
class rhs_weap_dazzler : rhs_weap_smokegen
{
	displayName = "Dazzler";
	magazines[] = {
		"rhs_mag_dazzler"
	};
	reloadTime = 20;
};
class CMFlareLauncher : SmokeLauncher
{
	class Single;
	class Burst;
};
class rhs_weap_CMFlareLauncher : CMFlareLauncher
{
	magazines[] = {
		"rhs_128Rnd_CMFlare_Chaff_Magazine",
		"rhs_60Rnd_CMFlare_Magazine",
		"60Rnd_CMFlareMagazine","120Rnd_CMFlareMagazine","240Rnd_CMFlareMagazine","60Rnd_CMFlare_Chaff_Magazine","120Rnd_CMFlare_Chaff_Magazine","240Rnd_CMFlare_Chaff_Magazine","192Rnd_CMFlare_Chaff_Magazine","168Rnd_CMFlare_Chaff_Magazine","300Rnd_CMFlare_Chaff_Magazine"
	};
	modes[] = { "Burst", "AIBurst", "Timed", "AITimed", "LongTimed" };
	class Timed : Single
	{
		displayName = "Timed";
		burst = 8;
		reloadTime = 1.3;
	};
	class AITimed : Timed
	{
		showToPlayer = 0;
		minRange = 0;
		maxRange = 3000;
	};
	class LongTimed : Single
	{
		displayName = "Timed 16f/4s";
		burst = 8;
		reloadTime = 4;
	};
};
class rhs_weap_CMDispenser_ASO2: rhs_weap_CMFlareLauncher
{
	magazines[] = {
		"rhs_ASO2_CMFlare_Magazine","rhs_ASO2_CMFlare_Magazine_x2","rhs_ASO2_CMFlare_Magazine_x4","rhs_ASO2_CMFlare_Magazine_x6",
		"rhs_ASO2_CMFlare_Chaff_Magazine","rhs_ASO2_CMFlare_Chaff_Magazine_x2","rhs_ASO2_CMFlare_Chaff_Magazine_x4","rhs_ASO2_CMFlare_Chaff_Magazine_x6"
	};
};
class rhs_weap_CMDispenser_BVP3026: rhs_weap_CMFlareLauncher
{
	magazines[] = {
		"rhs_BVP3026_CMFlare_Magazine","rhs_BVP3026_CMFlare_Magazine_x2",
		"rhs_BVP3026_CMFlare_Chaff_Magazine","rhs_BVP3026_CMFlare_Chaff_Magazine_x2"
	};
};
class rhs_weap_CMDispenser_UV26: rhs_weap_CMFlareLauncher
{
	magazines[] = {
		"rhs_UV26_CMFlare_Magazine","rhs_UV26_CMFlare_Magazine_x2","rhs_UV26_CMFlare_Magazine_x4",
		"rhs_UV26_CMFlare_Chaff_Magazine","rhs_UV26_CMFlare_Chaff_Magazine_x2","rhs_UV26_CMFlare_Chaff_Magazine_x4"
	};
};

class rhs_weap_DIRCM_Vitebsk: MGun
{
	scope					= 2;
	displayName				= "Vitebsk DIRCM";
	magazines[]				= {"RHS_mag_DIRCM_Vitebsk"};
	magazineReloadTime		= 60;
	simulation				= "cmlauncher";
	modes[]					= {"Burst1"};
	reloadMagazineSound[]	= {"A3\sounds_f\dummysound",2,1,5};
	class Burst1: Mode_Burst
	{
		displayName = "DIRCM";
		reloadTime = 0.5;
		burst = 120;
		sounds[] = {"StandardSound"};
		class StandardSound
		{
			begin1[] = {"rhsafrf\addons\rhs_c_heavyweapons\Sounds\ircm_on1",2,1,5};
			begin2[] = {"rhsafrf\addons\rhs_c_heavyweapons\Sounds\ircm_on2",2,1,5};
			soundBegin[] = {"begin1",0.5,"begin2",0.5};
			weaponSoundEffect = "";
		};
		showToPlayer = 1;
		multiplier = 1;
		minRange = 0;
		maxRange = 200;
		soundContinuos = 0;
	};
};

class rhs_weap_DIRCM_Lipa : rhs_weap_DIRCM_Vitebsk
{
	displayName = "Lipa DIRCM";
	magazines[] = { "rhs_mag_DIRCM_Lipa" };
	class Burst1 : Mode_Burst
	{
		displayName = "DIRCM";
		reloadTime = 1;
		burst = 80;
		sounds[] = { "StandardSound" };
		class StandardSound
		{
			begin1[] = { "rhsafrf\addons\rhs_c_heavyweapons\Sounds\ircm_on1",2,1,5 };
			begin2[] = { "rhsafrf\addons\rhs_c_heavyweapons\Sounds\ircm_on2",2,1,5 };
			soundBegin[] = { "begin1",0.5,"begin2",0.5 };
			weaponSoundEffect = "";
		};
		showToPlayer = 1;
		multiplier = 1;
		minRange = 0;
		maxRange = 200;
		soundContinuos = 0;
	};
};
class rhs_weap_afganit_base: MGun
{
	scope = 1;
	showToPlayer = 0;
	modes[] = {"Single"};
	autReload = 0;
	class Single: Mode_SemiAuto
	{
		cursor			= "EmptyCursor";
		showToPlayer	= 0;
		autoFire		= true;
		burst			= 1;
		reloadTime		= 8;
		minRange		= 0;
		maxRange		= 1000;
		sounds[] = {"StandardSound"};
		class StandardSound
		{
			soundSetShot[] = {"rhs_afganitAPS_soundset","Launcher_Firefist_Tail_SoundSet"};
		};
	};
	class EventHandlers
	{
		class RHS_CM_EH
		{
			fired = "_this call rhs_fnc_aps_afganit_fired";
		};
	};
};
class rhs_weap_afganit_1: rhs_weap_afganit_base {magazines[] = {rhs_mag_aps_afganit};};
class rhs_weap_afganit_2: rhs_weap_afganit_base {magazines[] = {rhs_mag_aps_afganit};};
class rhs_weap_afganit_3: rhs_weap_afganit_base {magazines[] = {rhs_mag_aps_afganit};};
class rhs_weap_afganit_4: rhs_weap_afganit_base {magazines[] = {rhs_mag_aps_afganit};};
class rhs_weap_afganit_5: rhs_weap_afganit_base {magazines[] = {rhs_mag_aps_afganit};};
class rhs_weap_afganit_6: rhs_weap_afganit_base {magazines[] = {rhs_mag_aps_afganit};};
class rhs_weap_afganit_7: rhs_weap_afganit_base {magazines[] = {rhs_mag_aps_afganit};};
class rhs_weap_afganit_8: rhs_weap_afganit_base {magazines[] = {rhs_mag_aps_afganit};};
class rhs_weap_afganit_9: rhs_weap_afganit_base {magazines[] = {rhs_mag_aps_afganit};};
class rhs_weap_afganit_10: rhs_weap_afganit_base {magazines[] = {rhs_mag_aps_afganit};};

class rhs_weap_afganit_smoke : rhs_weap_902a
{
	displayName = "Smoke Launcher";
	magazines[] = {rhs_mag_afganit_smoke_12};
	modes[] = { "Double", "Volley", "AIDouble", "AIVolley" };
	class Double : rhs_weap_902a
	{
		reloadTime = 0.099;
		burst = 2;
		showToPlayer = true;
		multiplier = 1;
		minRange = 0;
		maxRange = 10000;
		soundBurst = 0;
		autoFire = true;
		displayName = "Smoke (Single)";
	};
	class Volley : Double
	{
		burst = 6;
		autoFire = true;
		displayName = "Smoke (Burst)";
	};
	class AIDouble : Double
	{
		showToPlayer = 0;
	};
	class AIVolley : Volley
	{
		showToPlayer = 0;
	};
};
