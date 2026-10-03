
class rhs_weap_m84 : Rifle_Long_Base_F
{
	INVENTORY_PICTURE(rhs_weap_m84)

	DLC_AUTHOR;
	displayName = $STR_RHSSAF_WEAP_M84;
	SCOPE_PUBLIC;
	magazines[] =
	{
		"rhs_100Rnd_762x54mmR",
		"rhs_100Rnd_762x54mmR_green",
		"rhssaf_250Rnd_762x54R",
		"rhs_100Rnd_762x54mmR_7N13",
		"rhs_100Rnd_762x54mmR_7N26",
		"rhs_100Rnd_762x54mmR_7BZ3"
	};
	magazineWell[] =
	{
		PK_762x54R,
		CBA_762x54R_LINKS
	};

	reloadAction = "GestureReloadM200";
	recoil = "recoil_zafir";
	maxZeroing = 1500;
	handanim[] = {"OFP2_ManSkeleton","\rhssaf\addons\rhssaf_m_weapon_m84\data\anim\m84.rtm"};
	model = "\rhssaf\addons\rhssaf_m_weapon_m84\rhssaf_m84";
	nameSound = "Mgun";
	UiPicture = "\rhssaf\addons\rhssaf_c_weapons\icons\gear_m84_x_ca.paa";
	hiddenSelections[] = {"camo1"};
	hiddenSelectionsTextures[] = {"rhssaf\addons\rhssaf_t_weapon_m84\data\pkm_co.paa"};
	class Library
	{
		libTextDesc = "The Zastava M84 is a general-purpose machine gun manufactured by – then – Yugoslav Zastava Arms company.<br/>The M84 is a direct copy of the Soviet PK machine gun, the sole difference being in stock, which is not hollowed like on the original and is made out of a different wood type.<br/>Machine gun M84 is intended for infantry units and its main feature is excellent precision at large distances; tripod provides easy adaptation to various terrains.";
	};
	descriptionShort = "General Purpose Machine Gun<br />Caliber: 7.62x54 mm";
	cursor = "mg";
	cursorAim = "EmptyCursor";
	magazineReloadSwitchPhase = 0.46;
	aimTransitionSpeed = 0.5;
	class WeaponSlotsInfo: WeaponSlotsInfo
	{
		mass = 193.6;
		class MuzzleSlot {};
		class CowsSlot {ICON_OVERLAY_DISABLED};
		class PointerSlot{};
	};
	inertia = 0.85;
	dexterity = 1.0;
	modes[]=
	{
		"FullAuto",
		"close",
		"short",
		"medium",
		"far_optic1",
		"far_optic2"
	};
	bullet1[] = {"A3\sounds_f\weapons\shells\7_62\metal_762_01", 0.794328, 1, 15};
	bullet2[] = {"A3\sounds_f\weapons\shells\7_62\metal_762_02", 0.794328, 1, 15};
	bullet3[] = {"A3\sounds_f\weapons\shells\7_62\metal_762_03", 0.794328, 1, 15};
	bullet4[] = {"A3\sounds_f\weapons\shells\7_62\metal_762_04", 0.794328, 1, 15};
	bullet5[] = {"A3\sounds_f\weapons\shells\7_62\dirt_762_01", 0.794328, 1, 15};
	bullet6[] = {"A3\sounds_f\weapons\shells\7_62\dirt_762_02", 0.794328, 1, 15};
	bullet7[] = {"A3\sounds_f\weapons\shells\7_62\dirt_762_03", 0.794328, 1, 15};
	bullet8[] = {"A3\sounds_f\weapons\shells\7_62\dirt_762_04", 0.794328, 1, 15};
	bullet9[] = {"A3\sounds_f\weapons\shells\7_62\grass_762_01", 0.794328, 1, 15};
	bullet10[] = {"A3\sounds_f\weapons\shells\7_62\grass_762_02", 0.794328, 1, 15};
	bullet11[] = {"A3\sounds_f\weapons\shells\7_62\grass_762_03", 0.794328, 1, 15};
	bullet12[] = {"A3\sounds_f\weapons\shells\7_62\grass_762_04", 0.794328, 1, 15};
	soundBullet[] = {"bullet1", 0.083, "bullet2", 0.083, "bullet3", 0.083, "bullet4", 0.083, "bullet5", 0.083, "bullet6", 0.083, "bullet7", 0.083, "bullet8", 0.083, "bullet9", 0.083, "bullet10", 0.083, "bullet11", 0.083, "bullet12", 0.083};
	discreteDistance[] = {100,200,300,400,500,600,700,800,900,1000,1100,1200,1300,1400,1500};
	discreteDistanceInitIndex = 2;
	weaponInfoType = "rhs_rscOptics_m84";
	optics = 0;
	opticsZoomMin = 0.25;
	opticsZoomMax = 1.1;
	opticsZoomInit = 0.75;
	distanceZoomMin = 300;
	distanceZoomMax = 300;
	drySound[] = {"A3\Sounds_F\arsenal\weapons\Machineguns\Mk200\dry_Mk200", 0.446684, 1, 10};
	reloadMagazineSound[] = {"rhsafrf\addons\rhs_sounds\pkp\reload",1.1,1,12};
	soundBipodDeploy[] = {"A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_generic_deploy", 0.707946, 1, 20};
	soundBipodFold[] = {"A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_generic_fold", 0.707946, 1, 20};
	soundBipodDown[] = {"A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_generic_down", 0.707946, 1, 20};
	soundBipodUp[] = {"A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_generic_up", 0.707946, 1, 20};
	jsrs_soundeffect = "JSRS2_Distance_Effects_PK";
	class FullAuto: Mode_FullAuto
	{
		reloadTime = 0.0857142857142857;
		dispersion = 0.00087;
		recoil = "recoil_auto_mk200";
		recoilProne = "recoil_auto_prone_mk200";
		sounds[] = {"StandardSound", "SilencedSound"};
		class StandardSound
		{
		};
		class SilencedSound
		{

		};
		soundContinuous=0;
		soundBurst=0;
		minRange=0;
		minRangeProbab=0.3;
		midRange=5;
		midRangeProbab=0.7;
		maxRange=10;
		maxRangeProbab=0.04;
		showToPlayer=1;
	};
	class close: FullAuto
	{
		burst=10;
		aiRateOfFire=0.5;
		aiRateOfFireDistance=50;
		minRange=10;
		minRangeProbab=0.05;
		midRange=20;
		midRangeProbab=0.7;
		maxRange=50;
		maxRangeProbab=0.04;
		showToPlayer=0;
	};
	class short: close
	{
		burst=8;
		aiRateOfFire=2;
		aiRateOfFireDistance=300;
		minRange=50;
		minRangeProbab=0.05;
		midRange=150;
		midRangeProbab=0.7;
		maxRange=300;
		maxRangeProbab=0.04;
	};
	class medium: close
	{
		burst=7;
		aiRateOfFire=4;
		aiRateOfFireDistance=600;
		minRange=200;
		minRangeProbab=0.05;
		midRange=300;
		midRangeProbab=0.7;
		maxRange=500;
		maxRangeProbab=0.1;
	};
	class far_optic1: medium
	{
		requiredOpticType=1;
		showToPlayer=0;
		burst=3;
		aiRateOfFire=10;
		aiRateOfFireDistance=1000;
		minRange=300;
		minRangeProbab=0.05;
		midRange=500;
		midRangeProbab=0.4;
		maxRange=650;
		maxRangeProbab=0.009;
	};
	class far_optic2: far_optic1
	{
		burst=3;
		requiredOpticType=2;
		minRange=400;
		minRangeProbab=0.05;
		midRange=750;
		midRangeProbab=0.7;
		maxRange=900;
		maxRangeProbab=0.009;
		aiRateOfFire=10;
		aiRateOfFireDistance=900;
	};
	aiDispersionCoefY = 23;
	aiDispersionCoefX = 19;
	deployedPivot = "bipod";
	hasBipod = 1;
	class GunParticles : GunParticles
	{
		class SecondEffect
		{
			positionName = "Nabojnicestart";
			directionName = "Nabojniceend";
			effectName = "CaselessAmmoCloud";
		};
		class RHS_BarrelRefract
		{
			positionName = "usti hlavne";
			directionName = "usti hlavne up";
			effectName = "RHS_BarrelRefract";
		};
	};
	baseWeapon="rhs_weap_m84";
};

class rhs_weap_lmg_minimipara;

class rhs_weap_minimi_para_railed : rhs_weap_lmg_minimipara
{
	INVENTORY_PICTURE(rhs_weap_minimi_para_railed)

	DLC_AUTHOR;
	SCOPE_PUBLIC;
	model = "\rhsusf\addons\rhsusf_weapons2\M249\merged\SAF_minimi_para";
	displayName = $STR_RHSSAF_WEAP_MINIMI;
	inertia = 0.71;
	initspeed = -1;
	weaponInfoType = "rhs_rscOptics_m249_para";
	class WeaponSlotsInfo
	{
		mass=149.49;
		allowedSlots[] = {901};
		class CowsSlot: rhs_western_rifle_scopes_slot_short {};
		class PointerSlot: rhs_western_rifle_laser_slot {};
		class MuzzleSlot: rhs_western_rifle_muzzle_slot {};
		class GripodSlot: rhs_western_mg_gripod_slot {};
		class UnderBarrelSlot: rhs_Underslot_m249_ris {};
	};
	class LinkedItems
	{
		class LinkedItemsUnder
		{
			slot = "UnderBarrelSlot";
			item = "rhsusf_acc_saw_bipod";
		};
	};
	baseWeapon="rhs_weap_minimi_para_railed";
	rhs_grip1_change = "rhs_weap_minimi_para_railed_vfg1";
	rhs_grip2_change = "rhs_weap_minimi_para_railed_vfg2";
	rhs_grip3_change = "rhs_weap_minimi_para_railed_vfg3";
	rhs_fold_checkOptic = 0;
	rhs_fold = "rhs_weap_minimi_para_railed_folded";
};

class rhs_weap_minimi_para_railed_vfg1 : rhs_weap_minimi_para_railed
{
	DLC_AUTHOR;
	handanim[] = { "OFP2_ManSkeleton", "\rhsusf\addons\rhsusf_c_weapons\anims\rhs_hand_m249_grippod.rtm" };
	rhs_fold = "rhs_weap_minimi_para_railed_folded_vfg1";
};

class rhs_weap_minimi_para_railed_vfg2 : rhs_weap_minimi_para_railed
{
	DLC_AUTHOR;
	handanim[] = { "OFP2_ManSkeleton", "\rhsusf\addons\rhsusf_c_weapons\anims\rhs_hand_m249_VFG.rtm" };
	rhs_fold = "rhs_weap_minimi_para_railed_folded_vfg2";
};

class rhs_weap_minimi_para_railed_vfg3 : rhs_weap_minimi_para_railed
{
	DLC_AUTHOR;
	handanim[] = { "OFP2_ManSkeleton", "\rhsusf\addons\rhsusf_c_weapons\anims\rhs_hand_m249_grippod.rtm" };
	rhs_fold = "rhs_weap_minimi_para_railed_folded_vfg3";
};

class rhs_weap_minimi_para_railed_folded : rhs_weap_minimi_para_railed
{
	INVENTORY_PICTURE(rhs_weap_minimi_para_railed_folded)

	DLC_AUTHOR;
	SCOPE_PRIVATE;
	model = "\rhsusf\addons\rhsusf_weapons2\M249\merged\SAF_minimi_para_folded.p3d";
	class WeaponSlotsInfo: WeaponSlotsInfo
	{
		mass			= 145.44;
	};
	recoil = "rhs_recoil_m240";
	rhs_grip1_change = "rhs_weap_minimi_para_railed_folded_vfg1";
	rhs_grip2_change = "rhs_weap_minimi_para_railed_folded_vfg2";
	rhs_grip3_change = "rhs_weap_minimi_para_railed_folded_vfg3";
	rhs_fold = "rhs_weap_minimi_para_railed";
};

class rhs_weap_minimi_para_railed_folded_vfg1 : rhs_weap_minimi_para_railed_folded
{
	DLC_AUTHOR;
	handanim[] = { "OFP2_ManSkeleton", "\rhsusf\addons\rhsusf_c_weapons\anims\rhs_hand_m249_grippod.rtm" };
	rhs_fold = "rhs_weap_minimi_para_railed_vfg1";
};

class rhs_weap_minimi_para_railed_folded_vfg2 : rhs_weap_minimi_para_railed_folded
{
	DLC_AUTHOR;
	handanim[] = { "OFP2_ManSkeleton", "\rhsusf\addons\rhsusf_c_weapons\anims\rhs_hand_m249_VFG.rtm" };
	rhs_fold = "rhs_weap_minimi_para_railed_vfg2";
};

class rhs_weap_minimi_para_railed_folded_vfg3 : rhs_weap_minimi_para_railed_folded
{
	DLC_AUTHOR;
	handanim[] = { "OFP2_ManSkeleton", "\rhsusf\addons\rhsusf_c_weapons\anims\rhs_hand_m249_grippod.rtm" };
	rhs_fold = "rhs_weap_minimi_para_railed_vfg3";
};
