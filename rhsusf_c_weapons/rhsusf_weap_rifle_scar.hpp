//////////////////
///////SCAR///////
///Base Classes///
//////////////////
class rhs_weap_SCAR_Base : arifle_MX_Base_F
{
	// Core
	dlc					= "RHS_USAF";
	scope				= 0;
	// Handling
	inertia 			= 0.65;
	handAnim[]			= {"OFP2_ManSkeleton","\rhsusf\addons\rhsusf_c_weapons\anims\rhs_hand_SCAR.rtm"};
	dexterity			= 1.8;
	maxRecoilSway		= 0.0125;
	swayDecaySpeed		= 1.25;
	aiDispersionCoefY	= 6.0;
	aiDispersionCoefX	= 4.0;
	// Ironsights
	weaponInfoType		= "rhs_rscOptics_scar";
	opticsZoomMin		= 0.275;
	opticsZoomMax		= 1.1;
	opticsZoomInit		= 0.75;
	distanceZoomMin		= 200;
	distanceZoomMax		= 200;
	discreteDistance[]	= {200,300,400,500};
	discreteDistanceCameraPoint[]={"eye","eye_300","eye_400","eye_500"};
	cameraDir			= "eye_look";
	// Inventory
	UiPicture			= "\A3\weapons_f\data\UI\icon_regular_CA.paa";
	class Library
	{
		libTextDesc		= "TEMPORARY DESCRIPTION";
	};
	class ItemInfo
	{
		priority		= 1;
		RMBhint			= "FN SCAR";
		onHoverText		= "TODO SCAR DSS";
	};
	class WeaponSlotsInfo
	{
		mass			= 73.04;
		allowedSlots[]	= {901};
		class UnderBarrelSlot: rhs_western_rifle_underbarrel_slot {};
		class CowsSlot: rhs_western_rifle_scopes_slot_long {};
		class PointerSlot: rhs_western_rifle_laser_slot_top {};
		class GripodSlot: rhs_western_rifle_gripod_slot {};
	};
	// Magazine
	magazineReloadSwitchPhase = 0.46;
	// Shooting
	initSpeed			= -1;
	modes[]=
	{
		"Single",
		"Single_AI",
		"FullAuto",
		"single_medium_optics1",
		"single_far_optics2",
		"fullauto_medium"
	};
	class Single: Mode_SemiAuto
	{
		sounds[]=
		{
			"StandardSound",
			"SilencedSound"
		};
		class StandardSound {};
		class SilencedSound {};
		reloadTime		= 0.075;
		dispersion		= 0.0008727;
		minRange		= 2;
		minRangeProbab  = 0.5;
		midRange		= 150;
		midRangeProbab  = 0.7;
		maxRange		= 250;
		maxRangeProbab  = 0.2;
	};
	class Single_AI: Single
	{
		showToPlayer	= 0;
		burstRangeMax   = 3;
		minRange		= 200;
		minRangeProbab  = 0.5;
		midRange		= 300;
		midRangeProbab  = 0.7;
		maxRange		= 500;
		maxRangeProbab  = 0.3;
		aiRateOfFire	= 1;
		aiRateOfFireDispersion = 2;
	};
	class FullAuto : Mode_FullAuto
	{
		sounds[]=
		{
			"StandardSound",
			"SilencedSound"
		};
		class StandardSound {};
		class SilencedSound {};
		reloadTime		= 0.075;
		dispersion		= 0.0022;
		minRange		= 0;
		minRangeProbab  = 0.9;
		midRange		= 15;
		midRangeProbab  = 0.7;
		maxRange		= 30;
		maxRangeProbab  = 0.1;
		aiRateOfFire	= 1e-006;
	};
	class single_medium_optics1: Single
	{
		burstRangeMax	= 3;
		requiredOpticType=1;
		showToPlayer	= 0;
		minRange		= 2;
		minRangeProbab	= 0.2;
		midRange		= 550;
		midRangeProbab	= 0.69;
		maxRange		= 700;
		maxRangeProbab	= 0.1;
		aiRateOfFire	= 3;
		aiRateOfFireDistance	= 600;
		aiRateOfFireDispersion	= 3;
	};
	class single_far_optics2: single_medium_optics1
	{
		requiredOpticType	= 2;
	};
	class fullauto_medium: FullAuto
	{
		showToPlayer	= 0;
		burst			= 2;
		burstRangeMax	= 6;
		minRange		= 2;
		minRangeProbab	= 0.5;
		midRange		= 75;
		midRangeProbab	= 0.69;
		maxRange		= 150;
		maxRangeProbab	= 0.05;
		aiRateOfFire	= 2;
	};
	muzzles[]			= {"this","SAFE","FOLD"};
	class SAFE: RHSUSF_SAFE_BASE
	{
		discreteDistanceCameraPoint[]={"eye"};
		cameraDir		= "eye_look";
	};
	class FOLD: RHS_FOLD_BASE {};
	class GunParticles: GunParticles
	{
		class SecondEffect
		{
			positionName	= "Nabojnicestart";
			directionName	= "Nabojniceend";
			effectName		= "CaselessAmmoCloud";
		};
		class RHSUSF_BarrelRefract
		{
			positionName	= "usti hlavne";
			directionName	= "usti hlavne up";
			effectName		= "RHSUSF_BarrelRefract";
		};
	};
	// Sounds
	changeFiremodeSound[]	= {"rhsusf\addons\rhsusf_sounds\ar15_shared\firemode",0.6,1,5};
	reloadMagazineSound[]	= {"rhsusf\addons\rhsusf_sounds\ar15_shared\reload",1.0,1,10};
	// RHS Features
	rhsusf_acc_anpeq15		= 2; // 0 - for M4, 1 - for M27IAR/HK with higher top rail, 2 - for SCAR
	rhs_fold_checkOptic 	= 0;
	rhs_fold_anim 			= "RHS_GestureFoldSCAR";
	rhs_fold_sound[] 		= {"rhsusf\addons\rhsusf_c_weapons\sounds\stock_folding.wss", 1.42, 1, 20};
};
class rhs_weap_SCAR_L_Base : rhs_weap_SCAR_Base
{
	// Handling
	recoil				= "rhs_recoil_m4";
	// Inventory
	descriptionShort="Assault rifle<br/>Caliber: 5.56x45mm NATO";
	class WeaponSlotsInfo: WeaponSlotsInfo
	{
		class MuzzleSlot: rhs_western_rifle_muzzle_slot {};
	};
	// Magazine
	magazineWell[]		= {STANAG_556x45};
	reloadAction		= "RHS_GestureReloadAR15";
	// Sounds
	bullet1[]			= {"A3\sounds_f\weapons\shells\5_56\metal_556_01.wss", 0.1, 1, 15};
	bullet2[]			= {"A3\sounds_f\weapons\shells\5_56\metal_556_02.wss", 0.1, 1, 15};
	bullet3[]			= {"A3\sounds_f\weapons\shells\5_56\metal_556_03.wss", 0.177828, 1, 15};
	bullet4[]			= {"A3\sounds_f\weapons\shells\5_56\metal_556_04.wss", 0.177828, 1, 15};
	bullet5[]			= {"A3\sounds_f\weapons\shells\5_56\asphlat_556_01.wss", 0.1, 1, 15};
	bullet6[]			= {"A3\sounds_f\weapons\shells\5_56\asphlat_556_02.wss", 0.1, 1, 15};
	bullet7[]			= {"A3\sounds_f\weapons\shells\5_56\asphlat_556_03.wss", 0.1, 1, 15};
	bullet8[]			= {"A3\sounds_f\weapons\shells\5_56\asphlat_556_04.wss", 0.1, 1, 15};
	bullet9[]			= {"A3\sounds_f\weapons\shells\5_56\grass_556_01.wss", 0.01, 1, 15};
	bullet10[]			= {"A3\sounds_f\weapons\shells\5_56\grass_556_02.wss", 0.01, 1, 15};
	bullet11[]			= {"A3\sounds_f\weapons\shells\5_56\grass_556_03.wss", 0.01, 1, 15};
	bullet12[]			= {"A3\sounds_f\weapons\shells\5_56\grass_556_04.wss", 0.01, 1, 15};
	soundBullet[]		= {"bullet1", 0.083, "bullet2", 0.083, "bullet3", 0.083, "bullet4", 0.083, "bullet5", 0.083, "bullet6", 0.083, "bullet7", 0.083, "bullet8", 0.083, "bullet9", 0.083, "bullet10", 0.083, "bullet11", 0.083, "bullet12", 0.083};
};
class rhs_weap_SCAR_H_Base : rhs_weap_SCAR_Base
{
	// Core
	hiddenSelections[]	= {"camo01"};
	hiddenSelectionsTextures[] =
	{
		"rhsusf\addons\rhsusf_weapons3\mk17\data\mk17_co.paa"
	};
	// Handling
	recoil				= "rhs_weap_scarh_recoil";
	// Inventory
	descriptionShort= "Assault rifle<br/>Caliber: 7.62x51mm NATO";
	class WeaponSlotsInfo: WeaponSlotsInfo
	{
		class MuzzleSlot: rhs_western_762rifle_muzzle_slot {};
	};
	// Magazine
	magazines[]			= {"rhs_mag_20Rnd_SCAR_762x51_m80_ball","rhs_mag_20Rnd_SCAR_762x51_m61_ap","rhs_mag_20Rnd_SCAR_762x51_m62_tracer","rhs_mag_20Rnd_SCAR_762x51_m80a1_epr","rhs_mag_20Rnd_SCAR_762x51_m118_special","rhs_mag_20Rnd_SCAR_762x51_mk316_special"};
	magazineWell[]		= {CBA_762x51_SCAR};
	reloadAction		= "RHS_GestureReloadSR25";
	// Shooting
	class Single : Single
	{
		reloadTime		= 0.100;
	};
	class FullAuto: FullAuto
	{
		reloadTime		= 0.100;
	};
	// Sounds
	bullet1[]			= {"A3\sounds_f\weapons\shells\7_62\metal_762_01",0.398107,1,15};
	bullet2[]			= {"A3\sounds_f\weapons\shells\7_62\metal_762_02",0.398107,1,15};
	bullet3[]			= {"A3\sounds_f\weapons\shells\7_62\metal_762_03",0.398107,1,15};
	bullet4[]			= {"A3\sounds_f\weapons\shells\7_62\metal_762_04",0.398107,1,15};
	bullet5[]			= {"A3\sounds_f\weapons\shells\7_62\dirt_762_01",0.281838,1,15};
	bullet6[]			= {"A3\sounds_f\weapons\shells\7_62\dirt_762_02",0.281838,1,15};
	bullet7[]			= {"A3\sounds_f\weapons\shells\7_62\dirt_762_03",0.281838,1,15};
	bullet8[]			= {"A3\sounds_f\weapons\shells\7_62\dirt_762_04",0.281838,1,15};
	bullet9[]			= {"A3\sounds_f\weapons\shells\7_62\grass_762_01",0.281838,1,15};
	bullet10[]			= {"A3\sounds_f\weapons\shells\7_62\grass_762_02",0.281838,1,15};
	bullet11[]			= {"A3\sounds_f\weapons\shells\7_62\grass_762_03",0.281838,1,15};
	bullet12[]			= {"A3\sounds_f\weapons\shells\7_62\grass_762_04",0.281838,1,15};
	soundBullet[]		= {"bullet1",0.083,"bullet2",0.083,"bullet3",0.083,"bullet4",0.083,"bullet5",0.083,"bullet6",0.083,"bullet7",0.083,"bullet8",0.083,"bullet9",0.083,"bullet10",0.083,"bullet11",0.083,"bullet12",0.083};
};
class rhs_weap_SCAR_H_CQC_Base : rhs_weap_SCAR_H_Base
{
	// Core
	model = "\rhsusf\addons\rhsusf_weapons3\MK17\Mk17_CQC";
	// Inventory
	weaponInfoType		= "rhs_rscOptics_scar_h_cqc";
	class WeaponSlotsInfo: WeaponSlotsInfo
	{
		mass			= 76.78;
	};
	// Shooting
	initSpeed			= -0.93;
	class Single: Single
	{
		dispersion		= 0.00087;
	};
	class FullAuto: FullAuto
	{
		dispersion		= 0.00290;
	};
};
class rhs_weap_SCAR_H_STD_Base : rhs_weap_SCAR_H_Base
{
	// Core
	model				= "\rhsusf\addons\rhsusf_weapons3\MK17\Mk17";
	// Inventory
	weaponInfoType		= "rhs_rscOptics_scar_h_std";
	class WeaponSlotsInfo: WeaponSlotsInfo
	{
		mass			= 78.76;
	};
	// Shooting
	initSpeed			= -1;
	class Single: Single
	{
		dispersion		= 0.00044;
	};
	class FullAuto: FullAuto
	{
		dispersion		= 0.00147;
	};
};
class rhs_weap_SCAR_H_LB_Base : rhs_weap_SCAR_H_Base
{
	// Core
	model				=	"\rhsusf\addons\rhsusf_weapons3\MK17\Mk17_LB";
	// Inventory
	weaponInfoType		= "rhs_rscOptics_scar_h_lb";
	class WeaponSlotsInfo: WeaponSlotsInfo
	{
		mass			= 81.84;
	};
	// Shooting
	initSpeed			= -1.04;
	class Single: Single
	{
		dispersion		= 0.00029;
	};
	class FullAuto: FullAuto
	{
		dispersion		= 0.00145;
	};
};
//////////////////
//////SCAR-H//////
//Ingame Classes//
//////////////////
class rhs_weap_mk17_CQC : rhs_weap_SCAR_H_CQC_Base
{
	AUTHOR_MACRO
	scope 				= 2;
	INVENTORY_PICTURE(rhs_weap_mk17_CQC)
	displayName			= $STR_RHS_CFGWEAPONS_RIFLE_MK17_CQC;
	baseweapon			= "rhs_weap_mk17_CQC";
	rhs_grip1_change	= "rhs_weap_mk17_CQC_grip";
	rhs_grip2_change	= "rhs_weap_mk17_CQC_grip3";
	rhs_grip3_change	= "rhs_weap_mk17_CQC_grip2";
	rhs_fold			= "rhs_weap_mk17_CQC_Folded";
};
class rhs_weap_mk17_CQC_grip : rhs_weap_mk17_CQC
{
	AUTHOR_MACRO
	Grip_Macro(1,SCAR_vfg)
	rhs_fold = "rhs_weap_mk17_CQC_Folded_grip";
};
class rhs_weap_mk17_CQC_grip2 : rhs_weap_mk17_CQC
{
	AUTHOR_MACRO
	Grip_Macro(3,SCAR_vfg)
	rhs_fold = "rhs_weap_mk17_CQC_Folded_grip2";
};
class rhs_weap_mk17_CQC_grip3 : rhs_weap_mk17_CQC
{
	AUTHOR_MACRO
	Grip_Macro(2,SCAR_afg)
	rhs_fold = "rhs_weap_mk17_CQC_Folded_grip3";
};
class rhs_weap_mk17_STD : rhs_weap_SCAR_H_STD_Base
{
	AUTHOR_MACRO
	scope 				= 2;
	INVENTORY_PICTURE(rhs_weap_mk17_STD)
	displayName			= $STR_RHS_CFGWEAPONS_RIFLE_MK17_STD;
	baseweapon			= "rhs_weap_mk17_STD";
	rhs_grip1_change	= "rhs_weap_mk17_STD_grip";
	rhs_grip2_change	= "rhs_weap_mk17_STD_grip3";
	rhs_grip3_change	= "rhs_weap_mk17_STD_grip2";
	rhs_fold			= "rhs_weap_mk17_STD_Folded";
};
class rhs_weap_mk17_STD_grip : rhs_weap_mk17_STD
{
	AUTHOR_MACRO
	Grip_Macro(1,SCAR_vfg)
	rhs_fold = "rhs_weap_mk17_STD_Folded_grip";
};
class rhs_weap_mk17_STD_grip2 : rhs_weap_mk17_STD
{
	AUTHOR_MACRO
	Grip_Macro(3,SCAR_vfg)
	rhs_fold = "rhs_weap_mk17_STD_Folded_grip2";
};
class rhs_weap_mk17_STD_grip3 : rhs_weap_mk17_STD
{
	AUTHOR_MACRO
	Grip_Macro(2,SCAR_afg)
	rhs_fold = "rhs_weap_mk17_STD_Folded_grip3";
};
class rhs_weap_mk17_LB : rhs_weap_SCAR_H_LB_Base
{
	AUTHOR_MACRO
	scope				= 2;
	INVENTORY_PICTURE(rhs_weap_mk17_LB)
	displayName			= $STR_RHS_CFGWEAPONS_RIFLE_MK17_LB;
	baseweapon			= "rhs_weap_mk17_LB";
	rhs_grip1_change	= "rhs_weap_mk17_LB_grip";
	rhs_grip2_change	= "rhs_weap_mk17_LB_grip3";
	rhs_grip3_change	= "rhs_weap_mk17_LB_grip2";
	rhs_fold			= "rhs_weap_mk17_LB_Folded";
};
class rhs_weap_mk17_LB_grip : rhs_weap_mk17_LB
{
	AUTHOR_MACRO
	Grip_Macro(1,SCAR_vfg)
	rhs_fold = "rhs_weap_mk17_LB_Folded_grip";
};
class rhs_weap_mk17_LB_grip2 : rhs_weap_mk17_LB
{
	AUTHOR_MACRO
	Grip_Macro(3,SCAR_vfg)
	rhs_fold = "rhs_weap_mk17_LB_Folded_grip2";
};
class rhs_weap_mk17_LB_grip3 : rhs_weap_mk17_LB
{
	AUTHOR_MACRO
	Grip_Macro(2,SCAR_afg)
	rhs_fold = "rhs_weap_mk17_LB_Folded_grip3";
};

/////USA SCARs////

class rhs_weap_SCARH_USA_CQC : rhs_weap_mk17_CQC
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_weap_SCARH_USA_CQC)
	hiddenSelectionsTextures[] =
	{
		"rhsusf\addons\rhsusf_weapons3\mk17\data\murican_co.paa"
	};
	displayName			= "SCAR-H (USA/CQC)";
	baseweapon			= "rhs_weap_SCARH_USA_CQC";
	rhs_grip1_change	= "rhs_weap_SCARH_USA_CQC_grip";
	rhs_grip2_change	= "rhs_weap_SCARH_USA_CQC_grip3";
	rhs_grip3_change	= "rhs_weap_SCARH_USA_CQC_grip2";
	rhs_fold			= "rhs_weap_SCARH_USA_CQC_Folded";
};
class rhs_weap_SCARH_USA_CQC_grip : rhs_weap_SCARH_USA_CQC
{
	AUTHOR_MACRO
	Grip_Macro(1,SCAR_vfg)
	rhs_fold = "rhs_weap_SCARH_USA_CQC_Folded_grip";
};
class rhs_weap_SCARH_USA_CQC_grip2 : rhs_weap_SCARH_USA_CQC
{
	AUTHOR_MACRO
	Grip_Macro(3,SCAR_vfg)
	rhs_fold = "rhs_weap_SCARH_USA_CQC_Folded_grip2";
};
class rhs_weap_SCARH_USA_CQC_grip3 : rhs_weap_SCARH_USA_CQC
{
	AUTHOR_MACRO
	Grip_Macro(2,SCAR_afg)
	rhs_fold = "rhs_weap_SCARH_USA_CQC_Folded_grip3";
};
class rhs_weap_SCARH_USA_STD : rhs_weap_mk17_STD
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_weap_SCARH_USA_STD)
	hiddenSelectionsTextures[] =
	{
		"rhsusf\addons\rhsusf_weapons3\mk17\data\murican_co.paa"
	};
	displayName 		= "SCAR-H (USA/STD)";
	baseweapon			= "rhs_weap_SCARH_USA_STD";
	rhs_grip1_change	= "rhs_weap_SCARH_USA_STD_grip";
	rhs_grip2_change	= "rhs_weap_SCARH_USA_STD_grip3";
	rhs_grip3_change	= "rhs_weap_SCARH_USA_STD_grip2";
	rhs_fold			= "rhs_weap_SCARH_USA_STD_Folded";
};
class rhs_weap_SCARH_USA_STD_grip : rhs_weap_SCARH_USA_STD
{
	AUTHOR_MACRO
	Grip_Macro(1,SCAR_vfg)
	rhs_fold = "rhs_weap_SCARH_USA_STD_Folded_grip";
};
class rhs_weap_SCARH_USA_STD_grip2 : rhs_weap_SCARH_USA_STD
{
	AUTHOR_MACRO
	Grip_Macro(3,SCAR_vfg)
	rhs_fold = "rhs_weap_SCARH_USA_STD_Folded_grip2";
};
class rhs_weap_SCARH_USA_STD_grip3 : rhs_weap_SCARH_USA_STD
{
	AUTHOR_MACRO
	Grip_Macro(2,SCAR_afg)
	rhs_fold = "rhs_weap_SCARH_USA_STD_Folded_grip3";
};
class rhs_weap_SCARH_USA_LB : rhs_weap_mk17_LB
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_weap_SCARH_USA_LB)
	hiddenSelectionsTextures[] =
	{
		"rhsusf\addons\rhsusf_weapons3\mk17\data\murican_co.paa"
	};
	displayName 		= "SCAR-H (USA/LB)";
	baseweapon			= "rhs_weap_SCARH_USA_LB";
	rhs_grip1_change	= "rhs_weap_SCARH_USA_LB_grip";
	rhs_grip2_change	= "rhs_weap_SCARH_USA_LB_grip3";
	rhs_grip3_change	= "rhs_weap_SCARH_USA_LB_grip2";
	rhs_fold			= "rhs_weap_SCARH_USA_LB_Folded";
};
class rhs_weap_SCARH_USA_LB_grip : rhs_weap_SCARH_USA_LB
{
	AUTHOR_MACRO
	Grip_Macro(1,SCAR_vfg)
	rhs_fold = "rhs_weap_SCARH_USA_LB_Folded_grip";
};
class rhs_weap_SCARH_USA_LB_grip2 : rhs_weap_SCARH_USA_LB
{
	AUTHOR_MACRO
	Grip_Macro(3,SCAR_vfg)
	rhs_fold = "rhs_weap_SCARH_USA_LB_Folded_grip2";
};
class rhs_weap_SCARH_USA_LB_grip3 : rhs_weap_SCARH_USA_LB
{
	AUTHOR_MACRO
	Grip_Macro(2,SCAR_afg)
	rhs_fold = "rhs_weap_SCARH_USA_LB_Folded_grip3";
};
//////////////////
//////SCAR-H//////
//Folded Classes//
//////////////////
class rhs_weap_mk17_CQC_Folded : rhs_weap_mk17_CQC
{
	AUTHOR_MACRO
	scope				= 1;
	baseweapon			= "rhs_weap_mk17_CQC";
	INVENTORY_PICTURE(rhs_weap_mk17_CQC_folded)
	displayName 		= $STR_RHS_CFGWEAPONS_RIFLE_MK17_CQC_FOLD;
	// Core
	model = "\rhsusf\addons\rhsusf_weapons3\MK17\Mk17_CQC_folded";
	// Inventory
	class WeaponSlotsInfo: WeaponSlotsInfo
	{
		mass			= 76.78;
	};
	// Handling
	inertia 			= 0.5;
	// Shooting
	recoil 				= "rhs_weap_scarh_folded_recoil";
	rhs_grip1_change 	= "rhs_weap_mk17_CQC_Folded_grip";
	rhs_grip2_change 	= "rhs_weap_mk17_CQC_Folded_grip3";
	rhs_grip3_change	= "rhs_weap_mk17_CQC_Folded_grip2";
	rhs_fold			= "rhs_weap_mk17_CQC";
};
class rhs_weap_mk17_CQC_Folded_grip : rhs_weap_mk17_CQC_Folded
{
	AUTHOR_MACRO
	Grip_Macro(1,SCAR_vfg)
	rhs_fold = "rhs_weap_mk17_CQC_grip";
};
class rhs_weap_mk17_CQC_Folded_grip2 : rhs_weap_mk17_CQC_Folded
{
	AUTHOR_MACRO
	Grip_Macro(3,SCAR_vfg)
	rhs_fold = "rhs_weap_mk17_CQC_grip2";
};
class rhs_weap_mk17_CQC_Folded_grip3 : rhs_weap_mk17_CQC_Folded
{
	AUTHOR_MACRO
	Grip_Macro(2,SCAR_afg)
	rhs_fold = "rhs_weap_mk17_CQC_grip3";
};
class rhs_weap_mk17_STD_Folded : rhs_weap_mk17_STD
{
	AUTHOR_MACRO
	scope				= 1;
	baseweapon			= "rhs_weap_mk17_STD";
	INVENTORY_PICTURE(rhs_weap_mk17_CQC_folded)
	displayName 		= $STR_RHS_CFGWEAPONS_RIFLE_MK17_STD_FOLD;
	// Core
	model = "\rhsusf\addons\rhsusf_weapons3\MK17\Mk17_folded";
	// Inventory
	class WeaponSlotsInfo: WeaponSlotsInfo
	{
		mass			= 76.78;
	};
	// Handling
	inertia 			= 0.5;
	// Shooting
	recoil 				= "rhs_weap_scarh_folded_recoil";
	rhs_grip1_change	= "rhs_weap_mk17_STD_Folded_grip";
	rhs_grip2_change	= "rhs_weap_mk17_STD_Folded_grip3";
	rhs_grip3_change	= "rhs_weap_mk17_STD_Folded_grip2";
	rhs_fold			= "rhs_weap_mk17_STD";
	rhs_fold_anim		= "RHS_GestureUnfoldSCAR";
};
class rhs_weap_mk17_STD_Folded_grip : rhs_weap_mk17_STD_Folded
{
	AUTHOR_MACRO
	Grip_Macro(1,SCAR_vfg)
	rhs_fold = "rhs_weap_mk17_STD_grip";
};
class rhs_weap_mk17_STD_Folded_grip2 : rhs_weap_mk17_STD_Folded
{
	AUTHOR_MACRO
	Grip_Macro(3,SCAR_vfg)
	rhs_fold = "rhs_weap_mk17_STD_grip2";
};
class rhs_weap_mk17_STD_Folded_grip3 : rhs_weap_mk17_STD_Folded
{
	AUTHOR_MACRO
	Grip_Macro(2,SCAR_afg)
	rhs_fold = "rhs_weap_mk17_STD_grip3";
};
class rhs_weap_mk17_LB_Folded : rhs_weap_mk17_LB
{
	AUTHOR_MACRO
	scope				= 1;
	baseweapon			= "rhs_weap_mk17_LB";
	INVENTORY_PICTURE(rhs_weap_mk17_CQC_folded)
	displayName 		= $STR_RHS_CFGWEAPONS_RIFLE_MK17_LB_FOLD;
	// Core
	model = "\rhsusf\addons\rhsusf_weapons3\MK17\Mk17_LB_folded";
	// Inventory
	class WeaponSlotsInfo: WeaponSlotsInfo
	{
		mass			= 76.78;
	};
	// Handling
	inertia 			= 0.5;
	// Shooting
	recoil 				= "rhs_weap_scarh_folded_recoil";
	rhs_grip1_change	= "rhs_weap_mk17_LB_Folded_grip";
	rhs_grip2_change	= "rhs_weap_mk17_LB_Folded_grip3";
	rhs_grip3_change	= "rhs_weap_mk17_LB_Folded_grip2";
	rhs_fold			= "rhs_weap_mk17_LB";
};
class rhs_weap_mk17_LB_Folded_grip : rhs_weap_mk17_LB_Folded
{
	AUTHOR_MACRO
	Grip_Macro(1,SCAR_vfg)
	rhs_fold = "rhs_weap_mk17_LB_grip";
};
class rhs_weap_mk17_LB_Folded_grip2 : rhs_weap_mk17_LB_Folded
{
	AUTHOR_MACRO
	Grip_Macro(3,SCAR_vfg)
	rhs_fold = "rhs_weap_mk17_LB_grip2";
};
class rhs_weap_mk17_LB_Folded_grip3 : rhs_weap_mk17_LB_Folded
{
	AUTHOR_MACRO
	Grip_Macro(2,SCAR_afg)
	rhs_fold = "rhs_weap_mk17_LB_grip3";
};

/////USA SCARs////

class rhs_weap_SCARH_USA_CQC_Folded : rhs_weap_SCARH_USA_CQC
{
	AUTHOR_MACRO
	scope 				= 2;
	baseweapon			= "rhs_weap_SCARH_USA_CQC";
	INVENTORY_PICTURE(rhs_weap_SCARH_USA_CQC_folded)
	displayName 		= "SCAR-H (CQC) Folded";
	// Core
	model = "rhssaf\addons\rhssaf_m_weapon_scar\SCARH_CQC_folded";
	// Inventory
	class WeaponSlotsInfo: WeaponSlotsInfo
	{
		mass			= 76.78;
	};
	// Handling
	inertia 			= 0.5;
	// Shooting
	recoil 				= "rhs_weap_scarh_folded_recoil";
	rhs_grip1_change	= "rhs_weap_SCARH_USA_CQC_Folded_grip";
	rhs_grip2_change	= "rhs_weap_SCARH_USA_CQC_Folded_grip3";
	rhs_grip3_change	= "rhs_weap_SCARH_USA_CQC_Folded_grip2";
	rhs_fold			= "rhs_weap_SCARH_USA_CQC";
	rhs_fold_anim		= "RHS_GestureUnfoldSCAR";
};
class rhs_weap_SCARH_USA_CQC_Folded_grip : rhs_weap_SCARH_USA_CQC_Folded
{
	AUTHOR_MACRO
	Grip_Macro(1,SCAR_vfg)
	rhs_fold = "rhs_weap_SCARH_USA_CQC_grip";
};
class rhs_weap_SCARH_USA_CQC_Folded_grip2 : rhs_weap_SCARH_USA_CQC_Folded
{
	AUTHOR_MACRO
	Grip_Macro(3,SCAR_vfg)
	rhs_fold = "rhs_weap_SCARH_USA_CQC_grip2";
};
class rhs_weap_SCARH_USA_CQC_Folded_grip3 : rhs_weap_SCARH_USA_CQC_Folded
{
	AUTHOR_MACRO
	Grip_Macro(2,SCAR_afg)
	rhs_fold = "rhs_weap_SCARH_USA_CQC_grip3";
};
class rhs_weap_SCARH_USA_STD_Folded : rhs_weap_SCARH_USA_STD
{
	AUTHOR_MACRO
	scope 				= 2;
	baseweapon			= "rhs_weap_SCARH_USA_STD";
	INVENTORY_PICTURE(rhs_weap_SCARH_USA_STD_Folded)
	displayName 		= "SCAR-H (STD) Folded";
	// Core
	model = "rhssaf\addons\rhssaf_m_weapon_scar\SCARH_folded";
	// Inventory
	class WeaponSlotsInfo: WeaponSlotsInfo
	{
		mass			= 76.78;
	};
	// Handling
	inertia 			= 0.5;
	// Shooting
	recoil 				= "rhs_weap_scarh_folded_recoil";
	rhs_grip1_change	= "rhs_weap_SCARH_USA_STD_Folded_grip";
	rhs_grip2_change	= "rhs_weap_SCARH_USA_STD_Folded_grip3";
	rhs_grip3_change	= "rhs_weap_SCARH_USA_STD_Folded_grip2";
	rhs_fold			= "rhs_weap_SCARH_USA_STD";
	rhs_fold_anim		= "RHS_GestureUnfoldSCAR";
};
class rhs_weap_SCARH_USA_STD_Folded_grip : rhs_weap_SCARH_USA_STD_Folded
{
	AUTHOR_MACRO
	Grip_Macro(1,SCAR_vfg)
	rhs_fold = "rhs_weap_SCARH_USA_STD_grip";
};
class rhs_weap_SCARH_USA_STD_Folded_grip2 : rhs_weap_SCARH_USA_STD_Folded
{
	AUTHOR_MACRO
	Grip_Macro(3,SCAR_vfg)
	rhs_fold = "rhs_weap_SCARH_USA_STD_grip2";
};
class rhs_weap_SCARH_USA_STD_Folded_grip3 : rhs_weap_SCARH_USA_STD_Folded
{
	AUTHOR_MACRO
	Grip_Macro(2,SCAR_afg)
	rhs_fold = "rhs_weap_SCARH_USA_STD_grip3";
};
class rhs_weap_SCARH_USA_LB_Folded : rhs_weap_SCARH_USA_LB
{
	AUTHOR_MACRO
	scope 				= 2;
	baseweapon			= "rhs_weap_SCARH_USA_LB";
	INVENTORY_PICTURE(rhs_weap_SCARH_USA_LB_folded)
	displayName 		= "SCAR-H (LB) Folded";
	// Core
	model = "rhssaf\addons\rhssaf_m_weapon_scar\SCARH_LB_folded";
	// Inventory
	class WeaponSlotsInfo: WeaponSlotsInfo
	{
		mass			= 76.78;
	};
	// Handling
	inertia 			= 0.5;
	// Shooting
	recoil 				= "rhs_weap_scarh_folded_recoil";
	rhs_grip1_change	= "rhs_weap_SCARH_USA_LB_Folded_grip";
	rhs_grip2_change	= "rhs_weap_SCARH_USA_LB_Folded_grip3";
	rhs_grip3_change	= "rhs_weap_SCARH_USA_LB_Folded_grip2";
	rhs_fold			= "rhs_weap_SCARH_USA_LB";
	rhs_fold_anim		= "RHS_GestureUnfoldSCAR";
};
class rhs_weap_SCARH_USA_LB_Folded_grip : rhs_weap_SCARH_USA_LB_Folded
{
	AUTHOR_MACRO
	Grip_Macro(1,SCAR_vfg)
	rhs_fold = "rhs_weap_SCARH_USA_LB_grip";
};
class rhs_weap_SCARH_USA_LB_Folded_grip2 : rhs_weap_SCARH_USA_LB_Folded
{
	AUTHOR_MACRO
	Grip_Macro(3,SCAR_vfg)
	rhs_fold = "rhs_weap_SCARH_USA_LB_grip2";
};
class rhs_weap_SCARH_USA_LB_Folded_grip3 : rhs_weap_SCARH_USA_LB_Folded
{
	AUTHOR_MACRO
	Grip_Macro(2,SCAR_afg)
	rhs_fold = "rhs_weap_SCARH_USA_LB_grip3";
};