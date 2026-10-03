class rhs_weap_ag36_base: UGL_F
{
	cameradir = "gl_look";
	discreteDistance[] = {50,100,150,200,250,300,350};
	discreteDistanceCameraPoint[] = {"gl_eye_50m","gl_eye_100m","gl_eye_150m","gl_eye_200m","gl_eye_250m","gl_eye_300m","gl_eye_350m"};
	discreteDistanceInitIndex = 1;
	displayname = $STR_RHS_WEAP_AG36_BASE_DISPLAYNAME;
	magazines[] =
	{
			"rhs_mag_M441_HE",
			"rhs_mag_M433_HEDP",
			"rhs_mag_M397_HET",
			"rhs_mag_m576",
			"rhs_mag_M4009",
			"rhs_mag_M583A1_white",
			"rhs_mag_M661_green",
			"rhs_mag_M662_red",
			"rhs_mag_M585_white_cluster",
			"rhs_mag_M663_green_cluster",
			"rhs_mag_M664_red_cluster",
			"rhs_mag_M713_red",
			"rhs_mag_M714_white",
			"rhs_mag_M715_green",
			"rhs_mag_M716_yellow",
			"rhs_mag_M781_Practice",

			//bis compatibility
			"1Rnd_HE_Grenade_shell",
			"UGL_FlareWhite_F",
			"UGL_FlareGreen_F",
			"UGL_FlareRed_F",
			"UGL_FlareYellow_F",
			"UGL_FlareCIR_F",
			"1Rnd_Smoke_Grenade_shell",
			"1Rnd_SmokeRed_Grenade_shell",
			"1Rnd_SmokeGreen_Grenade_shell",
			"1Rnd_SmokeYellow_Grenade_shell",
			"1Rnd_SmokePurple_Grenade_shell",
			"1Rnd_SmokeBlue_Grenade_shell",
			"1Rnd_SmokeOrange_Grenade_shell"
	};
	magazineWell[] =
	{
		UGL_40x36,
		CBA_40mm_M203,
		CBA_40mm_EGLM
	};

	useModelOptics = 0;
	useExternalOptic = 0;
	optics = 1;
	cursoraim = "gl";
	magazinereloadtime = 2;
	reloadtime = 0.1;
	reloadAction = "RHS_GestureReloadAG36";
	reloadMagazineSound[] = {"rhssaf\addons\rhssaf_sounds\G36\ag36_reload",1.0,1,10};
	magazineReloadSwitchPhase = 0.55;
	drySound[] = {"rhssaf\addons\rhssaf_sounds\G36\ag36_drystrike",0.66,1,10};
	modes[] = {"Single"};
	class Single: Mode_SemiAuto
	{
		sounds[] = {"StandardSound"};
		class StandardSound
		{
			closure1[] = {"rhssaf\addons\rhssaf_sounds\G36\ag36_striker",1.0,1,10};
			soundClosure[] = {"closure1",1};
			begin1[] = {"rhssaf\addons\rhssaf_sounds\G36\ag36_launch",0.70794576,1,200};
			begin2[] = {"rhssaf\addons\rhssaf_sounds\G36\ag36_launch",0.70794576,1,200};
			soundBegin[] = {"begin1",0.5,"begin2",0.5};
		};
		class SoundTails
		{
			class TailInterior
			{
				sound[] = {"\rhssaf\addons\rhssaf_sounds\G36\AG36_indoor",1,1,200};
				frequency = 1;
				volume = "interior";
			};
		};
		recoil = "M240Recoil";
		recoilProne = "M240Recoil";
		minRange = 30;
		minRangeProbab = 0.1;
		midRange = 200;
		midRangeProbab = 0.7;
		maxRange = 400;
		maxRangeProbab = 0.05;
	};
};
class rhs_weap_g36_base: Rifle_Base_F
{
	scope = 1;
	recoil = "rhs_recoil_g36";
	maxRecoilSway = 0.008;
	swayDecaySpeed = 1.25;
	maxZeroing = 1600;
	deployedpivot = "deploypivot";
	hasBipod = 0;
	magazineReloadSwitchPhase = 0.5;
	magazines[] = {"rhssaf_30rnd_556x45_EPR_G36","rhssaf_30rnd_556x45_SOST_G36","rhssaf_100rnd_556x45_EPR_G36","rhssaf_30rnd_556x45_SPR_G36","rhssaf_30rnd_556x45_Tracers_G36","rhssaf_30rnd_556x45_MDIM_G36","rhssaf_30rnd_556x45_TDIM_G36","150Rnd_556x45_Drum_Mag_F","150Rnd_556x45_Drum_Mag_Tracer_F"};
	magazineWell[] = {CBA_556x45_G36};
	class Library
	{
		libTextDesc = "H&K Gewehr36";
	};
	reloadAction = "GestureReloadEBR";
	aidispersioncoefx = 4;
	aidispersioncoefy = 6;
	cameraDir = "";
	bullet1[] = {"A3\sounds_f\weapons\shells\7_62\metal_762_01",0.398107,1,15};
	bullet10[] = {"A3\sounds_f\weapons\shells\7_62\grass_762_02",0.281838,1,15};
	bullet11[] = {"A3\sounds_f\weapons\shells\7_62\grass_762_03",0.281838,1,15};
	bullet12[] = {"A3\sounds_f\weapons\shells\7_62\grass_762_04",0.281838,1,15};
	bullet2[] = {"A3\sounds_f\weapons\shells\7_62\metal_762_02",0.398107,1,15};
	bullet3[] = {"A3\sounds_f\weapons\shells\7_62\metal_762_03",0.398107,1,15};
	bullet4[] = {"A3\sounds_f\weapons\shells\7_62\metal_762_04",0.398107,1,15};
	bullet5[] = {"A3\sounds_f\weapons\shells\7_62\dirt_762_01",0.281838,1,15};
	bullet6[] = {"A3\sounds_f\weapons\shells\7_62\dirt_762_02",0.281838,1,15};
	bullet7[] = {"A3\sounds_f\weapons\shells\7_62\dirt_762_03",0.281838,1,15};
	bullet8[] = {"A3\sounds_f\weapons\shells\7_62\dirt_762_04",0.281838,1,15};
	bullet9[] = {"A3\sounds_f\weapons\shells\7_62\grass_762_01",0.281838,1,15};
	drysound[] = {"rhssaf\addons\rhssaf_sounds\G36\g36_dryfire",1.01,1,10};
	reloadmagazinesound[] = {"rhssaf\addons\rhssaf_sounds\G36\G36_reload",0.9,1,35};
	changeFiremodeSound[] = {"\rhssaf\addons\rhssaf_sounds\G36\g36_switch",1,1,8};
	UiPicture = "\A3\weapons_f\data\UI\icon_regular_CA.paa";
	soundbullet[] = {"bullet1",0.083,"bullet2",0.083,"bullet3",0.083,"bullet4",0.083,"bullet5",0.083,"bullet6",0.083,"bullet7",0.083,"bullet8",0.083,"bullet9",0.083,"bullet10",0.083,"bullet11",0.083,"bullet12",0.083};
	class SAFE: RHS_SAFE_BASE {};
	class FOLD: RHS_FOLD_BASE {};
	class AG36Muzzle: rhs_weap_ag36_base {};
	muzzles[]={"this","SAFE","FOLD"};
	weaponInfoType = "rhs_rscOptics_g36";
	rhs_fold_checkOptic 	= 0;
	rhs_fold_anim 			= "RHS_GestureFoldSCAR";
	rhs_fold_sound[] 		= {"rhsusf\addons\rhsusf_c_weapons\sounds\stock_folding.wss", 1.42, 1, 20};
	class WeaponSlotsInfo: WeaponSlotsInfo
	{
		class PointerSlot{};
		class MuzzleSlot{};
	};
	modes[] = {"Single","FullAuto","fullauto_medium","single_medium_optics1","single_far_optics2"};
	class Single: Mode_SemiAuto
	{
		sounds[] = {"StandardSound","SilencedSound"};
		dispersion = 0.000555596;
		reloadtime = __EVAL(60/750);
		aiRateOfFire = 1;
		aiRateOfFireDistance = 250;
		aiRateOfFireDispersion = 2;
		minRange = 30;
		minRangeProbab = 0.7;
		midRange = 150;
		midRangeProbab = 0.5;
		maxRange = 500;
		maxRangeProbab = 0.1;
	};
	class Burst: Mode_Burst
	{
		dispersion = 0.000555596;
		reloadtime = __EVAL(60/750);
		aiRateOfFire = 1;
		aiRateOfFireDistance = 100;
		aiRateOfFireDispersion = 2;
		minRange = 10;
		minRangeProbab = 0.8;
		midRange = 15;
		midRangeProbab = 0.7;
		maxRange = 30;
		maxRangeProbab = 0.1;
	};
	class FullAuto: Mode_FullAuto
	{
		sounds[] = {"StandardSound","SilencedSound"};
		dispersion = 0.000555596;
		reloadtime = __EVAL(60/750);
		aiRateOfFire = 0.2;
		aiRateOfFireDistance = 50;
		aiRateOfFireDispersion = 1;
		minRange = 0;
		minRangeProbab = 0.9;
		midRange = 5;
		midRangeProbab = 0.8;
		maxRange = 10;
		maxRangeProbab = 0.1;
	};
	class Burst2rnd: Burst
	{
		burst = 2;
		textureType = "dual";
	};
	class fullauto_medium: FullAuto
	{
		showToPlayer = 0;
		burst = 5;
		aiRateOfFire = 1;
		aiRateOfFireDistance = 100;
		aiRateOfFireDispersion = 2;
		minRange = 10;
		minRangeProbab = 0.8;
		midRange = 15;
		midRangeProbab = 0.7;
		maxRange = 30;
		maxRangeProbab = 0.1;
	};
	class single_medium_optics1: Single
	{
		requiredOpticType = 1;
		showToPlayer = 0;
		aiRateOfFire = 2;
		aiRateOfFireDistance = 450;
		aiRateOfFireDispersion = 3;
		minRange = 30;
		minRangeProbab = 0.8;
		midRange = 300;
		midRangeProbab = 0.6;
		maxRange = 700;
		maxRangeProbab = 0.2;
	};
	class single_far_optics2: single_medium_optics1
	{
		requiredOpticType = 2;
		showToPlayer = 0;
		aiRateOfFire = 3;
		aiRateOfFireDistance = 500;
		aiRateOfFireDispersion = 4;
		minRange = 30;
		minRangeProbab = 0.8;
		midRange = 300;
		midRangeProbab = 0.6;
		maxRange = 900;
		maxRangeProbab = 0.2;
	};

	hiddenSelections[] = {"camo","camo1","camo2","camo3","camo4","camo5","camo6","camo7"};
};

class rhs_weap_g36c: rhs_weap_g36_base
{
	INVENTORY_PICTURE(rhs_weap_g36c)

	DLC_AUTHOR;
	scope = 2;
	deployedpivot = "deploypivot";
	hasBipod = 0;
	displayName = $STR_RHSSAF_WEAP_G36C;
	descriptionShort = "Compact Carbine<br/>Caliber: 5.56mm NATO";
	reloadAction = "RHS_GestureReloadG36A1";
	handAnim[] = {"OFP2_ManSkeleton","\A3\Weapons_F_beta\Smgs\SMG_02\data\Anim\SMG_02.rtm"};
	discretedistance[] = {100};
	discretedistanceinitindex = 0;
	model = "rhssaf\addons\rhssaf_m_weapon_g36\rhssaf_g36c";
	hiddenSelectionsTextures[] =
	{
		"rhssaf\addons\rhssaf_t_weapon_g36\data\commonmaps\g36_commonmap_c_co.paa",
		"rhssaf\addons\rhssaf_t_weapon_g36\data\placeholder\g36_opticrails_co.paa",
		"rhssaf\addons\rhssaf_t_weapon_g36\data\placeholder\g36_magwell_co.paa",
		"rhssaf\addons\rhssaf_t_weapon_g36\data\placeholder\g36_stockfurniture_co.paa",
		"rhssaf\addons\rhssaf_t_weapon_g36\data\placeholder\g36_ag36_co.paa",
		"rhssaf\addons\rhssaf_t_weapon_g36\data\toadie_smrrail\smr_co.paa",
		"rhssaf\addons\rhssaf_t_weapon_g36\data\frontsight_co.paa",
		"rhssaf\addons\rhssaf_t_weapon_g36\data\rearsight_co.paa"
	};
	memoryPointCamera = "eye";

	rhs_grip1_change = "rhs_weap_g36c_grip1";
	rhs_grip2_change = "rhs_weap_g36c_grip2";
	rhs_grip3_change = "rhs_weap_g36c_grip3";
	rhs_fold = "rhs_weap_g36c_Folded";
	baseWeapon="rhs_weap_g36c";

	class WeaponSlotsInfo
	{
		mass = 65.74;
		allowedSlots[] = {901};
		class UnderBarrelSlot {};
		class CowsSlot: rhs_western_rifle_scopes_slot_short {};
		class PointerSlot: rhs_western_rifle_laser_slot {};
		class MuzzleSlot: rhs_western_rifle_muzzle_slot 
		{
			class compatibleItems: compatibleItems
			{
				rhssaf_acc_G36_Rotex=1;
			};
		};
		class GripodSlot: rhs_western_rifle_gripod_slot {};
	};
	inertia = 0.28;
	dexterity = 1.7388076;
	aimTransitionSpeed = 0.75;
	weaponInfoType = "rhs_rscOptics_g36c";
	muzzles[]={"this","SAFE","FOLD"};
	modes[] = {"Single","Burst","FullAuto","single_medium_optics1","single_far_optics2"};
	class Single: Single
	{
		dispersion = 0.0008727;
		reloadtime = __EVAL(60/750);
		aiRateOfFire = 1;
		aiRateOfFireDistance = 250;
		aiRateOfFireDispersion = 2;
		minRange = 30;
		minRangeProbab = 0.7;
		midRange = 150;
		midRangeProbab = 0.5;
		maxRange = 400;
		maxRangeProbab = 0.1;
	};
	class Burst: Burst
	{
		burst = 2;
		textureType = "dual";
		dispersion = 0.0008727;
		reloadtime = __EVAL(60/750);
		aiRateOfFire = 1;
		aiRateOfFireDistance = 100;
		aiRateOfFireDispersion = 2;
		minRange = 10;
		minRangeProbab = 0.8;
		midRange = 15;
		midRangeProbab = 0.7;
		maxRange = 30;
		maxRangeProbab = 0.1;
	};
	class FullAuto: FullAuto
	{
		dispersion = 0.0008727;
		reloadtime = __EVAL(60/750);
		aiRateOfFire = 0.2;
		aiRateOfFireDistance = 50;
		aiRateOfFireDispersion = 1;
		minRange = 0;
		minRangeProbab = 0.9;
		midRange = 5;
		midRangeProbab = 0.8;
		maxRange = 10;
		maxRangeProbab = 0.1;
	};
	class single_medium_optics1: Single
	{
		requiredOpticType = 1;
		showToPlayer = 0;
		aiRateOfFire = 2;
		aiRateOfFireDistance = 450;
		aiRateOfFireDispersion = 3;
		minRange = 30;
		minRangeProbab = 0.8;
		midRange = 200;
		midRangeProbab = 0.6;
		maxRange = 600;
		maxRangeProbab = 0.2;
	};
	class single_far_optics2: single_medium_optics1
	{
		requiredOpticType = 2;
	};
};

class rhs_weap_g36c_grip1 : rhs_weap_g36c
{
    DLC_AUTHOR;
    displayName			= $STR_RHSSAF_WEAP_G36C_GRIP1;
	dexterity			= 1.5388076;
	rhs_fold			= "rhs_weap_g36c_Folded_grip1";
		//handAnim[] = {"OFP2_ManSkeleton","\A3\Weapons_F_Exp\Rifles\SPAR_02\Data\Anim\SPAR_02.rtm"};
    GRIP_MACRO(1,g36c_grip)
};

class rhs_weap_g36c_grip2 : rhs_weap_g36c
{
    DLC_AUTHOR;
    displayName			= $STR_RHSSAF_WEAP_G36C_GRIP2;
	dexterity			= 1.5388076;
	rhs_fold			= "rhs_weap_g36c_Folded_grip2";
    GRIP_MACRO(2,g36c_afg)
};

class rhs_weap_g36c_grip3 : rhs_weap_g36c
{
    DLC_AUTHOR;
    displayName			= $STR_RHSSAF_WEAP_G36C_GRIP3;
	dexterity			= 1.5388076;
	rhs_fold			= "rhs_weap_g36c_Folded_grip3";
    GRIP_MACRO(3,g36c_grip)
		//handAnim[] = {"OFP2_ManSkeleton","\A3\Weapons_F_Exp\Rifles\SPAR_02\Data\Anim\SPAR_02.rtm"};
};

class rhs_weap_g36kv: rhs_weap_g36_base
{
	INVENTORY_PICTURE(rhs_weap_g36kv)

	DLC_AUTHOR;
	scope = 2;
	displayName = $STR_RHSSAF_WEAP_G36KV;
	reloadAction = "RHS_GestureReloadG36V";
	reloadmagazinesound[] = {"rhssaf\addons\rhssaf_sounds\G36\G36EV_reload",0.9,1,35};
	model = "rhssaf\addons\rhssaf_m_weapon_g36\rhssaf_g36k";
	hiddenSelectionsTextures[] =
	{
		"rhssaf\addons\rhssaf_t_weapon_g36\data\commonmaps\g36_commonmap_kv_co.paa",
		"rhssaf\addons\rhssaf_t_weapon_g36\data\placeholder\g36_opticrails_co.paa",
		"rhssaf\addons\rhssaf_t_weapon_g36\data\placeholder\g36_magwell_co.paa",
		"rhssaf\addons\rhssaf_t_weapon_g36\data\placeholder\g36_stockfurniture_co.paa",
		"rhssaf\addons\rhssaf_t_weapon_g36\data\placeholder\g36_ag36_co.paa",
		"rhssaf\addons\rhssaf_t_weapon_g36\data\toadie_smrrail\smr_co.paa",
		"rhssaf\addons\rhssaf_t_weapon_g36\data\frontsight_co.paa",
		"rhssaf\addons\rhssaf_t_weapon_g36\data\rearsight_co.paa"
	};
	discretedistance[] = {300};
	discretedistanceinitindex = 0;
	class WeaponSlotsInfo
	{
		mass = 74.14;
		allowedSlots[] = {901};
		class UnderBarrelSlot{};
		class CowsSlot: rhs_western_rifle_scopes_slot_short {};
		class PointerSlot: rhs_western_rifle_laser_slot {};
		class MuzzleSlot: rhs_western_rifle_muzzle_slot
		{
			class compatibleItems: compatibleItems
			{
				rhssaf_acc_G36_Rotex=1;
			};
		};
		class GripodSlot: rhs_western_rifle_gripod_slot {};
	};

	rhs_grip1_change = "rhs_weap_g36kv_grip1";
	rhs_grip2_change = "rhs_weap_g36kv_grip2";
	rhs_grip3_change = "rhs_weap_g36kv_grip3";
	rhs_fold = "rhs_weap_g36kv_Folded";
	baseWeapon="rhs_weap_g36kv";

	muzzles[]={"this","SAFE","FOLD"};
	modes[] = {"Single","Burst2rnd","FullAuto","single_medium_optics1","single_far_optics2"};
	weaponInfoType = "rhs_rscOptics_g36kv";
	inertia = 0.3;
	dexterity = 1.6495835;
	aimTransitionSpeed = 0.847084;
};

class rhs_weap_g36kv_grip1 : rhs_weap_g36kv
{
    DLC_AUTHOR;
    displayName			= $STR_RHSSAF_WEAP_G36KV_GRIP1;
	dexterity			= 1.5495835;
	rhs_fold			= "rhs_weap_g36kv_Folded_grip1";
    GRIP_MACRO(1,g36k_grip)
};

class rhs_weap_g36kv_grip2 : rhs_weap_g36kv
{
    DLC_AUTHOR;
    displayName			= $STR_RHSSAF_WEAP_G36KV_GRIP2;
	dexterity			= 1.5495835;
	rhs_fold			= "rhs_weap_g36kv_Folded_grip2";
    GRIP_MACRO(2,g36k_afg)
};

class rhs_weap_g36kv_grip3 : rhs_weap_g36kv
{
    DLC_AUTHOR;
    displayName			= $STR_RHSSAF_WEAP_G36KV_GRIP3;
	dexterity			= 1.5495835;
	rhs_fold			= "rhs_weap_g36kv_Folded_grip3";
    GRIP_MACRO(3,g36k_grip)
		//handAnim[] = {"OFP2_ManSkeleton","\A3\Weapons_F_Exp\Rifles\SPAR_02\Data\Anim\SPAR_02.rtm"};
};

class rhs_weap_g36kv_ag36: rhs_weap_g36kv
{
	INVENTORY_PICTURE(rhs_weap_g36kv_ag36)

	DLC_AUTHOR;
	scope = 2;
	displayName = $STR_RHSSAF_WEAP_G36KV_AG36;
	muzzles[] = {"this","AG36Muzzle","SAFE","FOLD"};
	weaponInfoType = "rhs_rscOptics_g36kv_ag36";
	model = "rhssaf\addons\rhssaf_m_weapon_g36\rhssaf_g36k_ag36";
	handanim[] = {"OFP2_ManSkeleton","rhssaf\addons\rhssaf_m_weapon_g36\anim\handpose_ag36.rtm"};
	class WeaponSlotsInfo: WeaponSlotsInfo
	{
		mass = 107.14;
		class UnderBarrelSlot{};
		class CowsSlot: rhs_western_rifle_scopes_slot_short {};
		class PointerSlot: rhs_western_rifle_laser_slot {};
		class MuzzleSlot{}; // disabled wont look good due to short muzzle inside the UGL
		class GripodSlot{};
	};
	inertia = 0.48;
	dexterity = 1.1810873;
	aimTransitionSpeed = 0.82676107;

	rhs_fold = "rhs_weap_g36kv_ag36_Folded";
	baseWeapon="rhs_weap_g36kv_ag36";
};

//////////////////
//////HK G36//////
//Folded Classes//
//////////////////

class rhs_weap_g36c_Folded : rhs_weap_g36c
{
	DLC_AUTHOR;
	INVENTORY_PICTURE(rhs_weap_g36c_Folded)
	scopeArsenal		= 0;
	baseweapon			= "rhs_weap_g36c_Folded";
	displayName			= $STR_RHSSAF_WEAP_G36C_FOLDED;
	// Core
	model = "rhssaf\addons\rhssaf_m_weapon_g36\rhssaf_g36c_folded";
	handAnim[] = {};
// Inventory
	class WeaponSlotsInfo: WeaponSlotsInfo
	{
		mass			= 65.74;
	};
// Shooting
	recoil				= "rhs_recoil_g36_folded";
	rhs_grip1_change	= "rhs_weap_g36c_Folded_grip1";
	rhs_grip2_change	= "rhs_weap_g36c_Folded_grip2";
	rhs_grip3_change	= "rhs_weap_g36c_Folded_grip3";
	rhs_fold			= "rhs_weap_g36c";
	rhs_fold_anim		= "RHS_GestureUnfoldSCAR";
};
class rhs_weap_g36c_Folded_grip1 : rhs_weap_g36c_Folded
{
	DLC_AUTHOR;
	GRIP_MACRO(1,g36c_grip)
	rhs_fold = "rhs_weap_g36c_grip1";
};
class rhs_weap_g36c_Folded_grip2 : rhs_weap_g36c_Folded
{
	DLC_AUTHOR;
	GRIP_MACRO(3,g36c_afg)
	rhs_fold = "rhs_weap_g36c_grip2";
};
class rhs_weap_g36c_Folded_grip3 : rhs_weap_g36c_Folded
{
	DLC_AUTHOR;
	GRIP_MACRO(2,g36c_grip)
	rhs_fold = "rhs_weap_g36c_grip3";
};

class rhs_weap_g36kv_Folded : rhs_weap_g36kv
{
	DLC_AUTHOR;
	INVENTORY_PICTURE(rhs_weap_g36kv_Folded)
	scope				= 2;
	baseweapon			= "rhs_weap_g36kv";
	displayName			= $STR_RHSSAF_WEAP_G36KV_FOLDED;
	// Core
	model = "rhssaf\addons\rhssaf_m_weapon_g36\rhssaf_g36k_folded";
// Inventory
	class WeaponSlotsInfo: WeaponSlotsInfo
	{
		mass			= 65.74;
	};
// Shooting
	recoil				= "rhs_recoil_g36_folded";
	rhs_grip1_change	= "rhs_weap_g36kv_Folded_grip1";
	rhs_grip2_change	= "rhs_weap_g36kv_Folded_grip2";
	rhs_grip3_change	= "rhs_weap_g36kv_Folded_grip3";
	rhs_fold			= "rhs_weap_g36kv";
	rhs_fold_anim		= "RHS_GestureUnfoldSCAR";
};
class rhs_weap_g36kv_Folded_grip1 : rhs_weap_g36kv_Folded
{
	DLC_AUTHOR;
	GRIP_MACRO(1,g36k_grip)
	rhs_fold = "rhs_weap_g36kv_grip1";
};
class rhs_weap_g36kv_Folded_grip2 : rhs_weap_g36kv_Folded
{
	DLC_AUTHOR;
	GRIP_MACRO(3,g36k_afg)
	rhs_fold = "rhs_weap_g36kv_grip2";
};
class rhs_weap_g36kv_Folded_grip3 : rhs_weap_g36kv_Folded
{
	DLC_AUTHOR;
	GRIP_MACRO(2,g36k_grip)
	rhs_fold = "rhs_weap_g36kv_grip3";
};

class rhs_weap_g36kv_ag36_Folded : rhs_weap_g36kv_ag36
{
	DLC_AUTHOR;
	INVENTORY_PICTURE(rhs_weap_g36kv_ag36_Folded)
	scope 				= 2;
	baseweapon			= "rhs_weap_g36kv_ag36";
	displayName 		= $STR_RHSSAF_WEAP_G36KV_AG36_FOLDED;
	// Core
	model = "rhssaf\addons\rhssaf_m_weapon_g36\rhssaf_g36k_ag36_folded";
// Inventory
	class WeaponSlotsInfo: WeaponSlotsInfo
	{
		mass			= 87.14;
	};
// Shooting
	recoil				= "rhs_recoil_g36_folded";
	rhs_fold			= "rhs_weap_g36kv_ag36";
	rhs_fold_anim		= "RHS_GestureUnfoldSCAR";
};