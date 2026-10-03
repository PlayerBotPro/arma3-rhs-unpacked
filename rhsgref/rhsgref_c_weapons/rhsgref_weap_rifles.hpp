class Rifle;
class Rifle_Base_F : Rifle {
	class WeaponSlotsInfo;
	class GunParticles;
	class Eventhandlers;
};
class Pistol;
class Pistol_Base_F : Pistol {
	class WeaponSlotsInfo;
	class GunParticles;
};
class Rifle_Long_Base_F : Rifle_Base_F {
	class WeaponSlotsInfo;
};
class UGL_F;
class EBR_base_F;
class srifle_EBR_F : EBR_base_F {
	class WeaponSlotsInfo;
	class GunParticles;
};

class SMG_01_Base;
class SMG_01_F : SMG_01_Base {
	class Single;
	class FullAuto;
	class WeaponSlotsInfo;
	class GunParticles;
};

class RHS_SAFE_BASE;
class GP25_Base;

class RifleGrenade_Base: GP25_Base
{
	displayName = "Rifle Grenade";
	descriptionShort = "Rifle Grenade launcher<br/>Caliber: 20mm";

	useModelOptics = 0;
	useExternalOptic = 0;
	reloadaction = "RHS_GestureReloadGP30";
	reloadMagazineSound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\MX\Mx_UGL_reload", 1, 1, 10};

	magazines[] = {};
	magazineWell[] = {};
	modes[] = {"Single"};
	class Single: Mode_SemiAuto
	{
		sounds[] = {"StandardSound"};
		class StandardSound
		{
			soundSetShot[] = {"rhs_gp25_shot_SoundSet","UGL_Tail_SoundSet","UGL_InteriorTail_SoundSet"};
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
	cameraDir = "OP_look";
	//0.125
	discreteDistance[] = {50,100,150,200,250};
	discreteDistanceCameraPoint[] = {"OP_eye","OP_eye1","OP_eye2","OP_eye3","OP_eye4"};
	discreteDistanceInitIndex = 1;
	magazineReloadSwitchPhase = 0.63;
	//weaponInfoType = "rhs_rscOptics_m70_rifle_gnd"; add custom Rsc and add onLoad handler, call the function from here
};


class rhs_weap_kar98k_Base_F: Rifle_Base_F
{
	dlc = "RHS_GREF";

	magazines[] = {"rhsgref_5Rnd_792x57_kar98k"};
	magazineWell[] = {CBA_792x57_K98};

	// TODO: Librbary description required
	class Library
	{
		libTextDesc = "";
	};
	descriptionShort = "Bolt action Rifle<br />Caliber: 7.92x57mm";

	optics = 0;

	maxRecoilSway	= 0.0125;
	swayDecaySpeed	= 1.25;
	dexterity		= 1.8;
	recoil			= "recoil_dmr_01";

	class GunParticles : GunParticles
	{
		class SecondEffect
		{
			positionName = "Nabojnicestart";
			directionName = "Nabojniceend";
			effectName = "RifleAssaultCloud";
		};
		class RHSUSF_BarrelRefract
		{
			positionName = "usti hlavne";
			directionName = "usti hlavne up";
			effectName = "RHSUSF_BarrelRefract";
		};
	};

	weaponInfoType = "RscWeaponZeroing";
	discreteDistance[] = {100,200,300,400,500,600,700,800,900,1000,1100,1200,1300,1400,1500,1600,1700,1800,1900,2000};
	discreteDistanceCameraPoint[] = {"eye","eye_200","eye_300","eye_400","eye_500","eye_600","eye_700","eye_800","eye_900","eye_1000","eye_1100","eye_1200","eye_1300","eye_1400","eye_1500","eye_1600","eye_1700","eye_1800","eye_1900","eye_2000"};
	discreteDistanceInitIndex = 0;
	cameraDir="eye_look";
	maxZeroing = 2000;

	class WeaponSlotsInfo: WeaponSlotsInfo
	{
		class PointerSlot {};
		class CowsSlot {};
		class MuzzleSlot {};
		class UnderBarrelSlot {};
	};

	opticsZoomMin = 0.275;
	opticsZoomMax = 1.1;
	opticsZoomInit = 0.75;
	distanceZoomMin = 300;
	distanceZoomMax = 300;

	reloadAction = "RHS_GestureReloadM1903A1";
	handAnim[] = {"OFP2_ManSkeleton","\rhsgref\addons\rhsgref_c_weapons\anims\awmhands.rtm"};

	BULLET_SOUNDS_762

	drySound[]				= {"A3\sounds_f\weapons\Other\dry_1",0.01,1};
	reloadMagazineSound[]	= {"\rhsgref\addons\rhsgref_weapons\kar98k\data\sounds\1903A1_reload_noscope",0.8,1,10};

	modes[]=
	{
		"Single",
		"far_optic1",
		"medium_optic2",
		"far_optic2"
	};

	class Single: Mode_SemiAuto
	{
		reloadTime = 1.6;
		dispersion		= DISPERSION_MOA(1.5);
		minRange = 2;
		minRangeProbab = 0.3;
		midRange = 250;
		midRangeProbab = 0.7;
		maxRange = 400;
		maxRangeProbab = 0.04;
	};
	class far_optic1: Single
	{
		showToPlayer=0;
		minRange=150;
		minRangeProbab=0.1;
		midRange=500;
		midRangeProbab=0.7;
		maxRange=1000;
		maxRangeProbab=0.3;
		aiRateOfFire=5;
		aiRateOfFireDistance=700;
		requiredOpticType=1;
	};
	class medium_optic2: Single
	{
		showToPlayer=0;
		minRange=250;
		minRangeProbab=0.1;
		midRange=750;
		midRangeProbab=0.7;
		maxRange=1000;
		maxRangeProbab=0.3;
		aiRateOfFire=6;
		aiRateOfFireDistance=1000;
		requiredOpticType=2;
	};
	class far_optic2: far_optic1
	{
		minRange=500;
		minRangeProbab=0.1;
		midRange=1050;
		midRangeProbab=0.7;
		maxRange=2000;
		maxRangeProbab=0.3;
		aiRateOfFire=8;
		aiRateOfFireDistance=2000;
		requiredOpticType=2;
	};

	aiDispersionCoefY = 10;
	aiDispersionCoefX = 8;

	class Eventhandlers: Eventhandlers
	{
		class RHS_BoltAction {
			fired = "[_this select 0,_this select 1,_this select 1] call rhs_fnc_boltAction;";
		};
	};
	rhs_boltActionSound[]	= {"rhsgref\addons\rhsgref_weapons\kar98k\data\sounds\kar98k_bolt.wss", 1.42, 1, 20};
	rhs_boltActionAnim		= "RHS_GestureRechamberM1903A1";
};

class rhs_weap_kar98k : rhs_weap_kar98k_Base_F
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_weap_kar98k)
	scope = 2;
	dlc = "RHS_GREF";
	displayName = $STR_RHS_WEAP_KAR98K_DISPLAYNAME;

	model = "\rhsgref\addons\rhsgref_weapons\kar98k\kar98k.p3d";


	UiPicture = "\A3\weapons_f\data\UI\icon_regular_CA.paa";
	inertia = 0.95;

	weaponInfoType = "rhs_kar98k_handler";

	class WeaponSlotsInfo: WeaponSlotsInfo
	{
		mass = 81.4;
	};

	class ItemInfo
	{
		priority = 1;
		RMBhint = "Kar98k";
		onHoverText = "Kar98k";
	};

	baseWeapon="rhs_weap_kar98k";
};

class rhs_weap_m38_Base_F: Rifle_Base_F
{
	dlc = "RHS_GREF";

	magazines[] = {"rhsgref_5Rnd_762x54_m38"};
	magazineWell[] = {CBA_762x54R_Mosin};

	// TODO: Librbary description required
	class Library
	{
		libTextDesc = "";
	};

	optics = 0;

	reloadAction = "RHS_GestureReloadM38";
	maxRecoilSway = 0.0125;
	swayDecaySpeed = 1.25;
	recoil = "recoil_dmr_01";

	class GunParticles : GunParticles
	{
	//	class SecondEffect
	//	{
	//		positionName = "Nabojnicestart";
	//		directionName = "Nabojniceend";
	//		effectName = "RifleAssaultCloud";
	//	};
		class RHSUSF_BarrelRefract
		{
			positionName = "usti hlavne";
			directionName = "usti hlavne up";
			effectName = "RHSUSF_BarrelRefract";
		};
	};

	weaponInfoType = "rhs_mosin_handler";
	discreteDistance[] = {100,200,300,400,500,600,700,800,900,1000};
	discreteDistanceInitIndex = 0;
	discreteDistanceCameraPoint[] = {"eye", "eye2", "eye3","eye4","eye5","eye6","eye7","eye8","eye9","eye10"};
	cameraDir = "eye_look";

	class WeaponSlotsInfo: WeaponSlotsInfo
	{
		class PointerSlot {
			iconPosition[] = {0.0, 0.45};
			iconScale = 0.2;
			iconPicture = "\A3\Weapons_F\Data\UI\attachment_muzzle.paa";
			iconPinpoint = "Center";
		};
		class CowsSlot {
			iconPosition[] = {0.0, 0.45};
			iconScale = 0.2;
			iconPicture = "\A3\Weapons_F\Data\UI\attachment_muzzle.paa";
			iconPinpoint = "Center";
		};
		class MuzzleSlot {
			iconPosition[] = {0.0, 0.45};
			iconScale = 0.2;
			iconPicture = "\A3\Weapons_F\Data\UI\attachment_muzzle.paa";
			iconPinpoint = "Center";
		};
		class UnderBarrelSlot {
			iconPosition[] = {0.0, 0.45};
			iconScale = 0.2;
			iconPicture = "\A3\Weapons_F\Data\UI\attachment_muzzle.paa";
			iconPinpoint = "Center";
		};
	};

	opticsZoomMin = 0.275;
	opticsZoomMax = 1.1;
	opticsZoomInit = 0.75;
	distanceZoomMin = 300;
	distanceZoomMax = 300;

	descriptionShort = "Bolt action Rifle<br/>Caliber: 7.62x54mm";
	handAnim[] = {"OFP2_ManSkeleton","\rhsgref\addons\rhsgref_c_weapons\anims\rhs_hand_m38.rtm"};
	dexterity = 1.8;

	drySound[]				= {"A3\sounds_f\weapons\Other\dry_1",0.01,1};
	reloadMagazineSound[]	= {"\rhsgref\addons\rhsgref_weapons\kar98k\data\sounds\1903A1_reload_noscope",0.8,1,10};

	BULLET_SOUNDS_762

	modes[]=
	{
		"Single",
		"far_optic1",
		"medium_optic2",
		"far_optic2"
	};
	class Single: Mode_SemiAuto
	{
		reloadTime		= 1.6;
		dispersion		= DISPERSION_MOA(2);
		minRange		= 2;
		minRangeProbab	= 0.3;
		midRange		= 250;
		midRangeProbab	= 0.7;
		maxRange		= 400;
		maxRangeProbab	= 0.04;
	};
	class far_optic1: Single
	{
		requiredOpticType		= 1;
		showToPlayer			= 0;
		minRange				= 150;
		minRangeProbab			= 0.1;
		midRange				= 500;
		midRangeProbab			= 0.7;
		maxRange				= 1000;
		maxRangeProbab			= 0.3;
		aiRateOfFire			= 3;
		aiRateOfFireDispersion	= 3;
		aiRateOfFireDistance	= 700;
	};
	class medium_optic2: far_optic1
	{
		requiredOpticType		= 2;
		minRange				= 250;
		minRangeProbab			= 0.1;
		midRange				= 750;
		midRangeProbab			= 0.7;
		maxRange				= 1000;
		maxRangeProbab			= 0.3;
		aiRateOfFire			= 4;
		aiRateOfFireDispersion	= 3;
		aiRateOfFireDistance	= 1000;
	};
	class far_optic2: far_optic1
	{
		minRange				= 500;
		minRangeProbab			= 0.1;
		midRange				= 1050;
		midRangeProbab			= 0.7;
		maxRange				= 2000;
		maxRangeProbab			= 0.3;
		aiRateOfFire			= 5;
		aiRateOfFireDispersion	= 5;
		aiRateOfFireDistance	= 2000;
		requiredOpticType		= 2;
	};

	aiDispersionCoefY = 10;
	aiDispersionCoefX = 8;


	hiddenSelections[] = {"camo"};
	hiddenSelectionsTextures[] = {"rhsgref\addons\rhsgref_weapons\m38\data\m38_co.paa"};


	class Eventhandlers: Eventhandlers
	{
		class RHS_BoltAction {
			fired = "[_this select 0,_this select 1,_this select 1] call rhs_fnc_boltAction;";
		};
	};
	rhs_boltActionSound[] ={"rhsgref\addons\rhsgref_weapons\kar98k\data\sounds\kar98k_bolt.wss", 1.42, 1, 20};
	rhs_boltActionAnim = "RHS_GestureRechamberM38";
};

class rhs_weap_m38: rhs_weap_m38_Base_F
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_weap_m38)
	scopeArsenal=2;
	scope=2;

	displayName = "$STR_RHSGREF_WEAP_M38";
	model = "\rhsgref\addons\rhsgref_weapons\m38\m38.p3d";

	weaponInfoType = "rhs_mosin_handler";

	initSpeed = -0.96;
	inertia = 0.87;

	class WeaponSlotsInfo: WeaponSlotsInfo
	{
		mass = 74.8;
	};

	class ItemInfo
	{
		priority = 1;
		RMBhint = "m38";
		onHoverText = "m38";
	};
	//hiddenSelections[] = {"camo"};
	//hiddenSelectionsTextures[] = {"rhsgref\addons\rhsgref_weapons\m38\data\m38_co.paa"};
	baseWeapon="rhs_weap_m38";
};

class rhs_weap_m38_rail: rhs_weap_m38
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_weap_m38_rail)
	scopeArsenal=2;
	scope=2;

	model = "\rhsgref\addons\rhsgref_weapons\m38\m38_rail.p3d";

	displayName = "$STR_RHSGREF_WEAP_M38_2";

	discreteDistance[] = {100};
	discreteDistanceInitIndex = 0;
	discreteDistanceCameraPoint[] = {"eye"};

	hiddenSelections[] = {"camo"};
	hiddenSelectionsTextures[] = {"rhsgref\addons\rhsgref_weapons\m38\data\m38_2_co.paa"};
	//hiddenSelectionsMaterials[] = {"rhsgref\addons\rhsgref_weapons\m38\data\m38_2.rvmat"};//don't enable this

	class WeaponSlotsInfo: WeaponSlotsInfo
	{
		class CowsSlot : rhs_picattinny_russian_rifle_scopes_slot {
			iconPosition[] = {0.45, 0.25};
			iconScale = 0.2;
			iconPicture = "\A3\Weapons_F\Data\UI\attachment_top.paa";
			iconPinpoint = "Center";
		};
		icon = "\rhsgref\addons\rhsgref_weapons\icons\w_m382_inv_ca.paa";
		mass = 74.8;
	};
	baseWeapon="rhs_weap_m38_rail";
};

class rhs_weap_mosin_sbr: rhs_weap_m38_rail
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_weap_mosin_sbr)

	model = "\rhsgref\addons\rhsgref_weapons\m38\rhs_mosin_sbr.p3d";
	handAnim[] = {"OFP2_ManSkeleton","\rhsgref\addons\rhsgref_c_weapons\anims\rhs_hand_mosin_sbr.rtm"};//update

	initSpeed = -0.90;//find more accurate values
	inertia = 0.62;

	recoil = "recoil_mmg_02";//testing

	displayName = $STR_RHSGREF_WEAP_M38_SBR;

	discreteDistance[] = {100};
	discreteDistanceInitIndex = 0;
	discreteDistanceCameraPoint[] = {"eye"};

	class Single: Single
	{
		reloadTime		= 1.6;
		dispersion		= DISPERSION_MOA(2);
		minRange		= 2;
		minRangeProbab	= 0.3;
		midRange		= 250;
		midRangeProbab	= 0.7;
		maxRange		= 400;
		maxRangeProbab	= 0.04;
	};
	class far_optic1: Single
	{
		requiredOpticType		= 1;
		showToPlayer			= 0;
		minRange				= 150;
		minRangeProbab			= 0.1;
		midRange				= 500;
		midRangeProbab			= 0.7;
		maxRange				= 1000;
		maxRangeProbab			= 0.3;
		aiRateOfFire			= 3;
		aiRateOfFireDispersion	= 3;
		aiRateOfFireDistance	= 700;
	};
	class medium_optic2: far_optic1
	{
		requiredOpticType		= 2;
		minRange				= 250;
		minRangeProbab			= 0.1;
		midRange				= 750;
		midRangeProbab			= 0.7;
		maxRange				= 1000;
		maxRangeProbab			= 0.3;
		aiRateOfFire			= 4;
		aiRateOfFireDispersion	= 3;
		aiRateOfFireDistance	= 1000;
	};
	class far_optic2: far_optic1
	{
		minRange				= 500;
		minRangeProbab			= 0.1;
		midRange				= 1050;
		midRangeProbab			= 0.7;
		maxRange				= 2000;
		maxRangeProbab			= 0.3;
		aiRateOfFire			= 5;
		aiRateOfFireDispersion	= 5;
		aiRateOfFireDistance	= 2000;
		requiredOpticType		= 2;
	};
	hiddenSelections[] = {""};
	//hiddenSelectionsTextures[] = {"rhsgref\addons\rhsgref_weapons\m38\data\rhs_mosib_sbr_co.paa"};
	//hiddenSelectionsMaterials[] = {"rhsgref\addons\rhsgref_weapons\m38\data\m38_2.rvmat"};//don't enable this

	class WeaponSlotsInfo: WeaponSlotsInfo
	{
		class CowsSlot : rhs_picattinny_russian_rifle_scopes_slot {
			iconPosition[] = {0.45, 0.25};
			iconScale = 0.2;
			iconPicture = "\A3\Weapons_F\Data\UI\attachment_top.paa";
			iconPinpoint = "Center";
		};
		class MuzzleSlot: rhs_western_762rifle_muzzle_slot {
			iconPosition[] = {0.0, 0.45};
			iconScale = 0.2;
			iconPicture = "\A3\Weapons_F\Data\UI\attachment_muzzle.paa";
			iconPinpoint = "Center";
		};
		//icon = "\rhsgref\addons\rhsgref_weapons\icons\w_mosinsbr_inv_ca.paa.paa";
		mass = 74.8;
	};
	baseWeapon="rhs_weap_mosin_sbr";
};

class rhs_weap_XM2010_Base_F;
class rhs_weap_dsr1: rhs_weap_XM2010_Base_F
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_weap_dsr1)
	scopeArsenal=1;
	scope=1;

	dlc = "RHS_GREF";
	displayName = "DSR-1";

	magazines[] = {rhsusf_5Rnd_762x51_m118_special_Mag,rhsusf_5Rnd_762x51_m993_Mag,rhsusf_5Rnd_762x51_m62_Mag};

	model = "\rhsgref\addons\rhsgref_weapons\dsr\dsr1.p3d";
	UiPicture = "\A3\weapons_f\data\UI\icon_regular_CA.paa";

	hiddenSelectionsTextures[]= {"rhsgref\addons\rhsgref_weapons\dsr\data\dsr-1_co.paa"};

	weaponInfoType = "rhs_m2010_handler";

	initSpeed = -0.96;
	inertia = 0.87;

	class WeaponSlotsInfo
	{
		/*
		class MuzzleSlot: SlotInfo
		{
			linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
			compatibleItems[] = {"rhsusf_acc_M2010S"};
		};
		*/
		class CowsSlot: rhs_picattinny_russian_rifle_scopes_slot {};
		class rhs_mtz_slot {};

		mass = 129.8;
	};

	class ItemInfo
	{
		priority = 1;
		RMBhint = "DSR-Precision DSR-1";
		onHoverText = "DSR-Precision DSR-1";
	};
	baseWeapon="rhs_weap_dsr1";
};

class rhs_weap_m70_base: Rifle_Base_F
{
	dlc = "RHS_GREF";

	magazines[] =
	{
		"rhs_30Rnd_762x39mm",
		"rhs_30Rnd_762x39mm_tracer",
		"rhs_30Rnd_762x39mm_89",
		"rhs_30Rnd_762x39mm_U"
	};
	magazineWell[] = {CBA_762x39_AK};
	magazineReloadSwitchPhase = 0.25;

	// TODO: Librbary description required
	class Library
	{
		libTextDesc = "";
	};
	descriptionShort = $STR_A3_CfgWeapons_XM_base_F0;

	optics = 0;

	dexterity		= 1.8;
	maxRecoilSway	= 0.008;
	swayDecaySpeed	= 1.25;

	recoil = "recoil_mk20";
	recoilProne = "assaultRifleBase";

	class GunParticles: GunParticles
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

	weaponInfoType = "rhs_rscOptics_akm";
	discreteDistance[] = {440,100,200,300,400,500,600,700,800,900,1000};
	discreteDistanceInitIndex = 0;

	class WeaponSlotsInfo: WeaponSlotsInfo
	{
		class CowsSlot{};
		class MuzzleSlot: SlotInfo
		{
			linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
			compatibleItems[] = {"rhs_acc_pbs1","rhs_acc_dtk1l"};
		};
		class rhs_npz_slot {};
		class PointerSlot : rhs_russian_ak_barrel_slot {};
	};

	opticsZoomMin = 0.25;
	opticsZoomMax = 1.1;
	opticsZoomInit = 0.75;
	distanceZoomMin = 300;
	distanceZoomMax = 300;

	reloadAction = "RHS_GestureReloadAK762";
	handAnim[] = {"OFP2_ManSkeleton","\rhsgref\addons\rhsgref_c_weapons\anims\rhs_hand_m70_stock.rtm"};

	class SAFE: RHS_SAFE_BASE {};
	class RGMuzzle: RifleGrenade_Base {};
	muzzles[]={"this","SAFE"};

	BULLET_SOUNDS_762

	drySound[]				= {"A3\sounds_f\weapons\Other\dry_1",0.562341,1,10};
	reloadMagazineSound[]	= {"A3\Sounds_F\weapons\Khaybar\reload_khaibar",1,1,10};
	changeFiremodeSound[]	= {"A3\sounds_f\weapons\closure\firemode_changer_2", 0.56234133, 1, 20};

	modes[]=
	{
		"Single",
		"FullAuto",
		"single_medium_optics1",
		"single_far_optics2",
		"fullauto_medium"
	};
	class Single: Mode_SemiAuto
	{
		reloadTime		= 0.1;
		dispersion		= 0.0021;
		minRange		= 2;
		minRangeProbab	= 0.5;
		midRange		= 200;
		midRangeProbab	= 0.7;
		maxRange		= 400;
		maxRangeProbab	= 0.3;
	};
	class FullAuto: Mode_FullAuto
	{
		reloadTime		= 0.1;
		dispersion		= 0.0021;
		minRange		= 0;
		minRangeProbab	= 0.9;
		midRange		= 15;
		midRangeProbab	= 0.7;
		maxRange		= 30;
		maxRangeProbab	= 0.1;
		aiRateOfFire	= 1e-006;
	};
	class single_medium_optics1: Single
	{
		requiredOpticType		= 1;
		showToPlayer			= 0;
		minRange				= 2;
		minRangeProbab			= 0.2;
		midRange				= 450;
		midRangeProbab			= 0.7;
		maxRange				= 600;
		maxRangeProbab			= 0.2;
		aiRateOfFire			= 3;
		aiRateOfFireDispersion	= 4;
		aiRateOfFireDistance	= 600;
	};
	class single_far_optics2: single_medium_optics1
	{
		requiredOpticType		= 2;
		minRange				= 100;
		minRangeProbab			= 0.1;
		midRange				= 450;
		midRangeProbab			= 0.6;
		maxRange				= 800;
		maxRangeProbab			= 0.05;
		aiRateOfFire			= 6;
		aiRateOfFireDispersion	= 4;
		aiRateOfFireDistance	= 800;
	};
	class fullauto_medium: FullAuto
	{
		aiBurstTerminable		= true;
		showToPlayer			= 0;
		burst					= 3;
		minRange				= 2;
		minRangeProbab			= 0.5;
		midRange				= 75;
		midRangeProbab			= 0.7;
		maxRange				= 150;
		maxRangeProbab			= 0.05;
		aiRateOfFire			= 2;
		aiRateOfFireDispersion	= 2;
		aiRateOfFireDistance	= 200;
	};

	aiDispersionCoefY = 10;
	aiDispersionCoefX = 8;
};

class rhs_weap_m70ab2 : rhs_weap_m70_base
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_weap_m70ab2)
	scope = 2;

	displayName = $STR_RHSGREF_WEAP_M70AB2;

	model = "\rhsgref\addons\rhsgref_weapons\m70\rhs_m70ab2";

	discreteDistanceCameraPoint[] = {"eye","eye_100","eye_200","eye_300","eye_400","eye_500","eye_600","eye_700","eye_800","eye_900","eye_1000"};
	discreteDistance[] = {350,100,200,300,400,500,600,700,800,900,1000};
	discreteDistanceInitIndex = 0;
	cameraDir="eye_look";

	weaponInfoType = "rhs_rscOptics_m70ab2";

	dexterity = 1.81;

	recoil = "recoil_mk20";
	recoilProne = "assaultRifleBase";

	muzzles[]={"this","RGMuzzle","SAFE"};
	magazineWell[] = {AK_762x39};

	class WeaponSlotsInfo: WeaponSlotsInfo
	{
		mass = 87.34;
	};
	rhs_fold="rhs_weap_m70ab2_fold";
	baseWeapon="rhs_weap_m70ab2";
};

class rhs_weap_m70ab2_fold : rhs_weap_m70ab2
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_weap_m70ab2_fold)
	scope = 1;

	displayName = $STR_RHSGREF_WEAP_M70AB2_FOLD;

	model = "\rhsgref\addons\rhsgref_weapons\m70\rhs_m70ab2_fold";
	recoil = "recoil_mmg_01";

	rhs_fold="rhs_weap_m70ab2";
	class WeaponSlotsInfo: WeaponSlotsInfo
	{
		mass = 65.51;
	};
};

class rhs_weap_m70b1 : rhs_weap_m70ab2
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_weap_m70b1)
	scope = 2;

	displayName = $STR_RHSGREF_WEAP_M70B1;
	model = "\rhsgref\addons\rhsgref_weapons\m70\rhs_m70b1";
	weaponInfoType = "rhs_rscOptics_m70b1";

	recoil = "recoil_mk20";
	recoilProne = "assaultRifleBase";

	class WeaponSlotsInfo: WeaponSlotsInfo
	{
		mass = 91.74;
	};
	baseWeapon="rhs_weap_m70b1";
};

class rhs_weap_m92 : rhs_weap_m70_base
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_weap_m92)
	scope = 2;

	displayName = $STR_RHSGREF_WEAP_M92;
	weaponInfoType = "rhs_rscOptics_m92";

	discreteDistance[] = {300,500};
	discreteDistanceInitIndex = 0;
	handAnim[] = {"OFP2_ManSkeleton","\rhsgref\addons\rhsgref_c_weapons\anims\rhs_hand_m92_stock.rtm"};

	magazineWell[] = {AK_762x39};

	// Size of recoil sway of the cursor
	maxRecoilSway=0.0125;
	 // Speed at which the recoil sway goes back to zero (from maxRecoilSway to 0 in 1/swayDecaySpeed seconds)
	 swayDecaySpeed=1.25;
	/// inertia coefficient of the weapon
	inertia = 0.37;
	//Muzzle velocity coefficient, -0.87 means a reduction of 13%
	initSpeed = -0.92; //~678m/s assuming 730m/s ammo
	recoil = "recoil_akm";

	model = "\rhsgref\addons\rhsgref_weapons\m92\rhs_m92";
	UiPicture = "\rhsgref\addons\rhsgref_weapons\icons\saf_m92_gear_x.paa";

	class Single : Single
	{
		dispersion = 0.00255;
	};
	class FullAuto : FullAuto
	{
		dispersion = 0.00255;
	};
	class WeaponSlotsInfo: WeaponSlotsInfo
	{
		class PointerSlot {ICON_OVERLAY_DISABLED};
		mass = 78.54;
	};
	rhs_fold="rhs_weap_m92_fold";
	baseWeapon="rhs_weap_m92";
};
class rhs_weap_m92_fold : rhs_weap_m92
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_weap_m92_fold)
	scope = 1;
	displayName = $STR_RHSGREF_WEAP_M92_FOLD;
	model = "\rhsgref\addons\rhsgref_weapons\m92\rhs_m92_fold";
	recoil = "recoil_mmg_02";

	class WeaponSlotsInfo: WeaponSlotsInfo
	{
		class PointerSlot {};
		mass = 58.91;
	};

	rhs_fold="rhs_weap_m92";
};

class rhs_weap_m76 : rhs_weap_m70_base
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_weap_m76)
	scope = 2;

	displayName = $STR_RHSGREF_WEAP_M76;

	descriptionShort = "Sniper Rifle <br/>Caliber: 7.92x57 mm";

	magazines[] = {"rhsgref_10Rnd_792x57_m76"};
	magazineWell[] = {CBA_792x57_M76};


	// Size of recoil sway of the cursor
	maxRecoilSway=0.0125;
	 // Speed at which the recoil sway goes back to zero (from maxRecoilSway to 0 in 1/swayDecaySpeed seconds)
	 swayDecaySpeed=1.25;
	/// inertia coefficient of the weapon
	inertia = 0.5;
	aimTransitionSpeed = 0.75;

	recoil = "recoil_akm";

	discreteDistanceCameraPoint[] = {"eye","eye_100","eye_200","eye_300","eye_400","eye_500","eye_600","eye_700","eye_800","eye_900","eye_1000"};
	discreteDistance[] = {350,100,200,300,400,500,600,700,800,900,1000};
	discreteDistanceInitIndex = 0;
	cameraDir="eye_look";

	model = "\rhsgref\addons\rhsgref_weapons\m76\rhs_wep_m76";
	weaponInfoType = "rhs_rscOptics_m76";

	modes[]=
	{
		"Single",
		"single_medium_optics1",
		"single_far_optics2"
	};
	class Single: Mode_SemiAuto
	{
		reloadTime		= 0.1;
		dispersion 		= 0.00095;
		minRange		= 2;
		minRangeProbab	= 0.5;
		midRange		= 200;
		midRangeProbab	= 0.7;
		maxRange		= 400;
		maxRangeProbab	= 0.3;
	};
	class single_medium_optics1: Single
	{
		requiredOpticType		= 1;
		showToPlayer			= 0;
		minRange				= 2;
		minRangeProbab			= 0.2;
		midRange				= 450;
		midRangeProbab			= 0.7;
		maxRange				= 600;
		maxRangeProbab			= 0.2;
		aiRateOfFire			= 3;
		aiRateOfFireDispersion	= 4;
		aiRateOfFireDistance	= 600;
	};
	class single_far_optics2: single_medium_optics1
	{
		requiredOpticType		= 2;
		minRange				= 100;
		minRangeProbab			= 0.1;
		midRange				= 450;
		midRangeProbab			= 0.6;
		maxRange				= 1000;
		maxRangeProbab			= 0.05;
		aiRateOfFire			= 6;
		aiRateOfFireDispersion	= 4;
		aiRateOfFireDistance	= 800;
	};

	class WeaponSlotsInfo: WeaponSlotsInfo
	{
		class CowsSlot : rhs_russian_rifle_scopes_slot {};
		class PointerSlot {};
		mass = 95.7;
	};
	baseWeapon="rhs_weap_m76";
};

class rhs_weap_m21_base : rhs_weap_m70_base
{
	scope = 0;

	AUTHOR_MACRO
	displayName = "M-21";

	descriptionShort = "Assault rifle <br/>Caliber: 5.56x45 mm NATO";

	magazines[] = {"rhsgref_30rnd_556x45_m21", "rhsgref_30rnd_556x45_m21_t"};
	magazineWell[] = {CBA_556x45_M21};
	handAnim[] = {"OFP2_ManSkeleton","\rhsgref\addons\rhsgref_c_weapons\anims\rhs_hand_m21_stock.rtm"};

	discreteDistance[] = {300,500};
	discreteDistanceInitIndex = 0;

	// Size of recoil sway of the cursor
	maxRecoilSway=0.0125;
	 // Speed at which the recoil sway goes back to zero (from maxRecoilSway to 0 in 1/swayDecaySpeed seconds)
	 swayDecaySpeed=1.25;
	/// inertia coefficient of the weapon
	inertia = 0.5;

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
		reloadTime		= 0.1;
		dispersion		= 0.0021;
		minRange		= 2;
		minRangeProbab	= 0.5;
		midRange		= 200;
		midRangeProbab	= 0.7;
		maxRange		= 400;
		maxRangeProbab	= 0.3;
	};
	class FullAuto: Mode_FullAuto
	{
		reloadTime		= 0.1;
		dispersion		= 0.0021;
		minRange		= 0;
		minRangeProbab	= 0.9;
		midRange		= 15;
		midRangeProbab	= 0.7;
		maxRange		= 30;
		maxRangeProbab	= 0.1;
		aiRateOfFire	= 1e-006;
	};
	class Single_AI: Single
	{
		aiBurstTerminable 		= true;
		showToPlayer			= 0;
		burstRangeMax			= 3;
		minRange				= 200;
		minRangeProbab			= 0.5;
		midRange				= 300;
		midRangeProbab			= 0.7;
		maxRange				= 400;
		maxRangeProbab			= 0.3;
		aiRateOfFire			= 1;
		aiRateOfFireDispersion	= 2;
	};
	class single_medium_optics1: Single
	{
		requiredOpticType		= 1;
		showToPlayer			= 0;
		minRange				= 2;
		minRangeProbab			= 0.2;
		midRange				= 450;
		midRangeProbab			= 0.7;
		maxRange				= 600;
		maxRangeProbab			= 0.2;
		aiRateOfFire			= 3;
		aiRateOfFireDispersion	= 4;
		aiRateOfFireDistance	= 600;
	};
	class single_far_optics2: single_medium_optics1
	{
		requiredOpticType		= 2;
		minRange				= 100;
		minRangeProbab			= 0.1;
		midRange				= 450;
		midRangeProbab			= 0.6;
		maxRange				= 800;
		maxRangeProbab			= 0.05;
		aiRateOfFire			= 6;
		aiRateOfFireDispersion	= 4;
		aiRateOfFireDistance	= 800;
	};
	class fullauto_medium: FullAuto
	{
		aiBurstTerminable		= true;
		showToPlayer			= 0;
		burst					= 3;
		burstRangeMax			= 3;
		minRange				= 2;
		minRangeProbab			= 0.5;
		midRange				= 75;
		midRangeProbab			= 0.7;
		maxRange				= 150;
		maxRangeProbab			= 0.05;
		aiRateOfFire			= 2;
		aiRateOfFireDispersion	= 2;
		aiRateOfFireDistance	= 200;
	};

	reloadAction = "RHS_GestureReloadAKS";

	class WeaponSlotsInfo: WeaponSlotsInfo
	{
		class CowsSlot : rhs_russian_rifle_scopes_slot {};
		class MuzzleSlot : rhs_western_rifle_muzzle_slot {};
		class rhs_mtz_slot: SlotInfo { compatibleItems[] = {"rhs_acc_mtz"};};
		mass = 91.3;
	};
	rhs_fold_checkOptic = 0;
};

class rhs_weap_m21a : rhs_weap_m21_base
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_weap_m21a)
	scope = 2;

	displayName = $STR_RHSGREF_WEAP_M21A;
	weaponInfoType = "rhs_rscOptics_m21a";

	model = "\rhsgref\addons\rhsgref_weapons\m21\rhs_m21a";
	rhs_mtz="rhs_weap_m21a_pr";
	rhs_fold="rhs_weap_m21a_fold";
	baseWeapon="rhs_weap_m21a";
};

class rhs_weap_m21a_pr : rhs_weap_m21_base
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_weap_m21a_pr)
	scope = 2;

	displayName = $STR_RHSGREF_WEAP_M21A_PIC;
	weaponInfoType = "rhs_rscOptics_m21s_mtz";

	model = "\rhsgref\addons\rhsgref_weapons\m21\rhs_m21a_pr";

	class WeaponSlotsInfo: WeaponSlotsInfo
	{
		mass = 91.3;
		class CowsSlot: rhs_picattinny_russian_rifle_scopes_slot {};
		class rhs_mtz_slot {};
	};
	rhs_mtz="rhs_weap_m21a";
	baseWeapon="rhs_weap_m21a_pr";
};

class rhs_weap_m21a_fold : rhs_weap_m21a
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_weap_m21a_fold)
	scopeArsenal = 0;
	displayName = $STR_RHSGREF_WEAP_M21A_FOLD;

	model = "\rhsgref\addons\rhsgref_weapons\m21\rhs_m21a_fold";
	recoil = "recoil_mxc";
	rhs_fold="rhs_weap_m21a";
	baseWeapon = "rhs_weap_m21a_fold";
	class WeaponSlotsInfo: WeaponSlotsInfo
	{
		mass = 68.48;
	};
};

class rhs_weap_m21s : rhs_weap_m21_base
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_weap_m21s)
	scope = 2;

	displayName = $STR_RHSGREF_WEAP_M21S;
	weaponInfoType = "rhs_rscOptics_m21s";

	initSpeed = -0.98;

	class Single : Single
	{
		dispersion = 0.00325;
	};
	class FullAuto : FullAuto
	{
		dispersion = 0.00325;
	};

	model = "\rhsgref\addons\rhsgref_weapons\m21\rhs_m21s";
	reloadAction = "RHS_GestureReloadAK_1hand";
	rhs_mtz="rhs_weap_m21s_pr";
	rhs_fold="rhs_weap_m21s_fold";
	baseWeapon="rhs_weap_m21s";

	class WeaponSlotsInfo: WeaponSlotsInfo
	{
		mass = 89.54;
	};
};

class rhs_weap_m21s_pr : rhs_weap_m21a_pr
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_weap_m21s_pr)
	displayName = $STR_RHSGREF_WEAP_M21S_PIC;
	weaponInfoType = "rhs_rscOptics_m21s_mtz";

	initSpeed = -0.98;

	class Single : Single
	{
		dispersion = 0.00325;
	};
	class FullAuto : FullAuto
	{
		dispersion = 0.00325;
	};

	model = "\rhsgref\addons\rhsgref_weapons\m21\rhs_m21s_pr";
	reloadAction = "RHS_GestureReloadAK_1hand";
	rhs_mtz="rhs_weap_m21s";
	baseWeapon="rhs_weap_m21s_pr";
	class WeaponSlotsInfo: WeaponSlotsInfo
	{
		mass = 89.54;
	};
};

class rhs_weap_m21s_fold : rhs_weap_m21s
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_weap_m21s_fold)
	scopeArsenal = 0;
	displayName = $STR_RHSGREF_WEAP_M21S_FOLD;

	model = "\rhsgref\addons\rhsgref_weapons\m21\rhs_m21s_fold";
	recoil = "recoil_mxc";
	rhs_fold="rhs_weap_m21s";
	baseWeapon = "rhs_weap_m21s_fold";
	class WeaponSlotsInfo: WeaponSlotsInfo
	{
		mass = 67.16;
	};
};

class rhs_weap_savz61: SMG_01_F
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_weap_savz61)

	dlc = "RHS_GREF";

	displayName = "$STR_RHS_WEAP_SAVZ61_DISPLAYNAME";
	scope = 2;

	weaponInfoType = "rhs_rscOptics_vz61";
	rhs_fold="rhs_weap_savz61_folded";

	magazines[] = {"rhsgref_20rnd_765x17_vz61", "rhsgref_10rnd_765x17_vz61"};
	magazineWell[] = {CBA_32ACP_Vz61};

	class Library
	{
		libTextDesc = "The Škorpion vz. 61 is a Czechoslovak 7.65 mm machine pistol developed in 1959 by Miroslav Rybář (1924–1970) and produced under the official designation Samopal vzor 61 by the Česká zbrojovka arms factory in Uherský Brod from 1961 to 1979.";
	};

	model = "\rhsgref\addons\rhsgref_weapons\savz61\rhs_savz61";
	reloadAction = "GestureReloadSMG_02";
	//	maxZeroing = 900;
	//	discreteDistanceInitIndex = 0;
	maxRecoilSway = 0.0125;
	swayDecaySpeed = 1.25;

	class GunParticles: GunParticles
	{
		class FirstEffect
		{
			effectName = "PistolCloud";
			positionName = "Usti hlavne";
			directionName = "Konec hlavne";
		};
		class SecondEffect
		{
			positionName = "Nabojnicestart";
			directionName = "Nabojniceend";
			effectName = "CaselessAmmoCloud";
		};
	};
	class WeaponSlotsInfo: WeaponSlotsInfo
	{
		mass = 28.16;
		allowedSlots[] = {901};
		class MuzzleSlot: MuzzleSlot
		{
			linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE"; 	/// this can be set, but having some common helps a bit
			compatibleItems[] = {/*"rhsgref_savz61_suppressor"*/}; 				/// A custom made suppressor for this weapon
			iconPosition[] = {0.0, 0.45};							/// position of the slot icon inside of the weapon icon, relative to top-left corner in {right, down} format
			iconScale = 0.2;										/// scale of icon described in iconPicture
			iconPicture = "\A3\Weapons_F\Data\UI\attachment_muzzle.paa"; 	/// icon for selected slot
			iconPinpoint = "Center"; 										/// top, bottom, left, right, center alignment of the icon on snap point
		};
		class CowsSlot: CowsSlot /// default accessories for this slot
		{
			iconPosition[] = {0.5, 0.35};
			iconScale = 0.2;
			compatibleItems[] = {/*"rhsgref_acc_oko21"*/};
		};
		class PointerSlot {};
	};
	opticsZoomMin = 0.375;
	opticsZoomMax = 1.1;
	opticsZoomInit = 0.75;
	distanceZoomMin = 300;
	distanceZoomMax = 300;
	descriptionShort = "Sub-machine gun <br/>Caliber: 7.65x17 mm";
	handAnim[] = {"OFP2_ManSkeleton","\rhsgref\addons\rhsgref_c_weapons\anims\rhs_hand_savz61.rtm"};
	selectionfireanim="zasleh";
	discreteDistance[] = {75,150};

	modes[] = {"Single", "FullAuto"};
	class Single : Single
	{
		reloadTime = 0.075000;
		dispersion		= DISPERSION_MOA(10);
		minRange = 2;
		minRangeProbab = 0.3;
		midRange = 200;
		midRangeProbab = 0.7;
		maxRange = 350;
		maxRangeProbab = 0.05;
		aiRateOfFire = 2;
		aiRateOfFireDistance = 500;
	};
	class FullAuto : FullAuto
	{
		reloadTime = 0.075000;
		dispersion		= DISPERSION_MOA(10);
		minRange = 0;
		minRangeProbab = 0.1;
		midRange = 25;
		midRangeProbab = 0.7;
		maxRange = 70;
		maxRangeProbab = 0.05;
		aiRateOfFire = 0.2;
		aiRateOfFireDistance = 50;
	};
	baseWeapon = "rhs_weap_savz61";
};

//pistol
class rhs_weap_savz61_folded: rhs_weap_savz61
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_weap_savz61_folded)
	type = 2;
	mass = 28.16;
	recoil = "recoil_ebr";
	reloadAction = "GestureReloadPistol";
	model = "\rhsgref\addons\rhsgref_weapons\savz61\rhs_savz61_folded";
	handAnim[] = {};

	class SAFE_PISTOL : RHS_SAFE_BASE {};

	muzzles[]={"this","SAFE_PISTOL"};

	displayName = "$STR_RHS_WEAP_SAVZ61_FOLDED_DISPLAYNAME";
	descriptionShort = "$STR_RHS_WEAP_SAVZ61_FOLDED_DESCRIPTIONSHORT";
	rhs_fold="rhs_weap_savz61";
	baseWeapon="rhs_weap_savz61_folded";
};

//Vz58
class rhs_weap_savz58_base: Rifle_Base_F
{
	dlc = "RHS_GREF";

	magazines[] =
	{
		"rhs_30Rnd_762x39mm_Savz58",
		"rhs_30Rnd_762x39mm_Savz58_tracer"
	};
	magazineWell[] = {CBA_762x39_VZ58};

	UiPicture        = "\A3\weapons_f\data\UI\icon_regular_CA.paa";
	// TODO: Librbary description required
	class Library
	{
		libTextDesc = "";
	};

	optics = 0;

	hiddenSelections[] = {"camo1","camo2"};
	hiddenSelectionsTextures[] =
	{
		"\rhsgref\addons\rhsgref_weapons\savz58\data\main_co",
		"\rhsgref\addons\rhsgref_weapons\savz58\data\sec_co"
	};

	maxRecoilSway	= 0.0125;
	swayDecaySpeed	= 1.25;
	dexterity		= 1.6;

	recoil = "recoil_ktbc";
	//recoilProne = "assaultRifleBase";

	class GunParticles: GunParticles
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

	weaponInfoType					= "rhs_rscOptics_vz58p";
	cameraDir						= "eye_look";
	discreteDistanceCameraPoint[]	= {"eye","eye_100","eye_200","eye_300","eye_400","eye_500","eye_600","eye_700","eye_800","eye_900","eye_1000"};
	discreteDistance[]				= {350,100,200,300,400,500,600,700,800};
	discreteDistanceInitIndex		= 0;

	class WeaponSlotsInfo: WeaponSlotsInfo
	{
		mass = 68.2;

		class CowsSlot{};

		class MuzzleSlot: SlotInfo
		{
			linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
			compatibleItems[] = {"rhsgref_acc_zendl"};
			iconPosition[] = {-0.05, 0.36};
			iconScale = 0.2;
			iconPicture = "\A3\Weapons_F\Data\UI\attachment_muzzle.paa";
			iconPinpoint = "Center";
		};

		class PointerSlot {};
	};

	opticsZoomMin = 0.25;
	opticsZoomMax = 1.1;
	opticsZoomInit = 0.75;
	distanceZoomMin = 300;
	distanceZoomMax = 300;

	descriptionShort = "Assault rifle <br/>Caliber: 7.62x39 mm";
	handAnim[] = {"OFP2_ManSkeleton","\rhsgref\addons\rhsgref_c_weapons\anims\rhs_hand_savz58.rtm"};
	reloadAction = "RHS_GestureReloadAK762";

	class SAFE : RHS_SAFE_BASE {};
	muzzles[]={"this","SAFE"};

	BULLET_SOUNDS_762

	drySound[]				= {"A3\sounds_f\weapons\Other\dry_1",0.562341,1,10};
	reloadMagazineSound[]	= {"A3\Sounds_F\weapons\Khaybar\reload_khaibar",1,1,10};
	changeFiremodeSound[]	= {"A3\sounds_f\weapons\closure\firemode_changer_2", 0.56234133, 1, 20};

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
		reloadTime		= 0.075;
		dispersion		= DISPERSION_MOA(5.5);
		minRange		= 2;
		minRangeProbab	= 0.5;
		midRange		= 200;
		midRangeProbab	= 0.7;
		maxRange		= 400;
		maxRangeProbab	= 0.3;
	};
	class FullAuto: Mode_FullAuto
	{
		reloadTime		= 0.075;
		dispersion		= DISPERSION_MOA(5.5);
		minRange		= 0;
		minRangeProbab	= 0.9;
		midRange		= 15;
		midRangeProbab	= 0.7;
		maxRange		= 30;
		maxRangeProbab	= 0.1;
		aiRateOfFire	= 1e-006;
	};
	class Single_AI: Single
	{
		aiBurstTerminable 		= true;
		showToPlayer			= 0;
		burstRangeMax			= 3;
		minRange				= 200;
		minRangeProbab			= 0.5;
		midRange				= 300;
		midRangeProbab			= 0.7;
		maxRange				= 400;
		maxRangeProbab			= 0.3;
		aiRateOfFire			= 1;
		aiRateOfFireDispersion	= 2;
		aiRateOfFireDistance	= 300;
	};
	class single_medium_optics1: Single
	{
		requiredOpticType		= 1;
		showToPlayer			= 0;
		minRange				= 2;
		minRangeProbab			= 0.2;
		midRange				= 450;
		midRangeProbab			= 0.7;
		maxRange				= 600;
		maxRangeProbab			= 0.2;
		aiRateOfFire			= 3;
		aiRateOfFireDispersion 	= 4;
		aiRateOfFireDistance	= 600;
	};
	class single_far_optics2: single_medium_optics1
	{
		requiredOpticType		= 2;
		minRange				= 100;
		minRangeProbab			= 0.1;
		midRange				= 450;
		midRangeProbab			= 0.6;
		maxRange				= 800;
		maxRangeProbab			= 0.05;
		aiRateOfFire			= 4;
		aiRateOfFireDispersion 	= 6;
		aiRateOfFireDistance	= 800;
	};
	class fullauto_medium: FullAuto
	{
		aiBurstTerminable 		= true;
		showToPlayer			= 0;
		burst					= 3;
		burstRangeMax 			= 3;
		minRange				= 2;
		minRangeProbab			= 0.5;
		midRange				= 75;
		midRangeProbab			= 0.7;
		maxRange				= 150;
		maxRangeProbab			= 0.1;
		aiRateOfFire			= 1;
		aiRateOfFireDispersion 	= 3;
		aiRateOfFireDistance	= 200;
	};

	aiDispersionCoefY = 10;
	aiDispersionCoefX = 8;
};

class rhs_weap_savz58_rail_base : rhs_weap_savz58_base
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_weap_savz58_rail_base)

	weaponInfoType = "rhs_rscOptics_vz58p_rail";

	hiddenSelections[] = {"camo1","camo2","camo3"};
	hiddenSelectionsTextures[] =
	{
		"\rhsgref\addons\rhsgref_weapons\savz58\data\main_co",
		"\rhsgref\addons\rhsgref_weapons\savz58\data\sec_co",
		"\rhsgref\addons\rhsgref_weapons\savz58\data\vz58TopRailCover_co"
	};
	class WeaponSlotsInfo: WeaponSlotsInfo
	{
		mass = 69.2;
		class CowsSlot: rhs_picattinny_russian_rifle_scopes_slot {};
		class MuzzleSlot: MuzzleSlot {};
		class PointerSlot {};
	};
};

class rhs_weap_savz58_ris_base : rhs_weap_savz58_base
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_weap_savz58_ris_base)

	weaponInfoType = "rhs_rscOptics_vz58v_ris";

	hiddenSelections[] = {"camo1","camo2","camo3","camo4","camo5","camo6"};
	hiddenSelectionsTextures[] =
	{
		"\rhsgref\addons\rhsgref_weapons\savz58\data\main_co",
		"\rhsgref\addons\rhsgref_weapons\savz58\data\sec_co",
		"\rhsgref\addons\rhsgref_weapons\savz58\data\vz58TopRailCover_co",
		"rhsgref\addons\rhsgref_weapons\savz58\data\vz_ups_co",
		"rhsusf\addons\rhsusf_weapons\m4\data\magpulstock_co",
		"rhsusf\addons\rhsusf_weapons\m4\data\m4a1_actual_co"
	};
	class WeaponSlotsInfo: WeaponSlotsInfo
	{
		mass = 70;
		class CowsSlot: rhs_picattinny_russian_rifle_scopes_slot_long {};
		class MuzzleSlot: MuzzleSlot {};
		class PointerSlot: rhs_western_rifle_laser_slot {};
		class GripodSlot: rhs_western_rifle_gripod_slot {};
	};
};

class rhs_weap_savz58p: rhs_weap_savz58_base
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_weap_savz58p)
	scope            = 2;

	displayName      = "$STR_RHSGREF_WEAP_SAVZ58P";

	model            = "\rhsgref\addons\rhsgref_weapons\savz58\rhs_savz58p";


	baseWeapon       = "rhs_weap_savz58p";
};

class rhs_weap_savz58v: rhs_weap_savz58_base
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_weap_savz58v)
	scope            = 2;

	displayName      = "$STR_RHSGREF_WEAP_SAVZ58V";

	model            = "\rhsgref\addons\rhsgref_weapons\savz58\rhs_savz58v";

	recoil      = "recoil_mxc";//slightly more than vz58p

	baseWeapon       = "rhs_weap_savz58v";
	weaponInfoType   = "rhs_rscOptics_vz58v";

	rhs_fold         = "rhs_weap_savz58v_fold";
};

class rhs_weap_savz58v_fold : rhs_weap_savz58v
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_weap_savz58v_fold)
	scopeArsenal       = 0;

	displayName = "$STR_RHSGREF_WEAP_SAVZ58V_FOLD";

	model       = "\rhsgref\addons\rhsgref_weapons\savz58\rhs_savz58v_folded";
	recoil      = "recoil_mmg_01";

	rhs_fold    = "rhs_weap_savz58v";
	baseWeapon = "rhs_weap_savz58v_fold";
};


//Vz58 rail variants
class rhs_weap_savz58p_rail: rhs_weap_savz58_rail_base
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_weap_savz58p_rail)
	scope            = 2;

	displayName      = "$STR_RHSGREF_WEAP_SAVZ58P_RAIL";

	model            = "\rhsgref\addons\rhsgref_weapons\savz58\rhs_savz58p_rail";

	baseWeapon       = "rhs_weap_savz58p_rail";
};

class rhs_weap_savz58v_rail: rhs_weap_savz58_rail_base
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_weap_savz58v_rail)
	scope            = 2;

	displayName      = "$STR_RHSGREF_WEAP_SAVZ58V_RAIL";

	model            = "\rhsgref\addons\rhsgref_weapons\savz58\rhs_savz58v_rail";

	recoil      = "recoil_mxc";

	baseWeapon       = "rhs_weap_savz58v_rail";
	weaponInfoType   = "rhs_rscOptics_vz58v_rail";

	rhs_fold         = "rhs_weap_savz58v_rail_fold";
};

class rhs_weap_savz58v_rail_fold : rhs_weap_savz58v_rail
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_weap_savz58v_rail_fold)
	scopeArsenal       = 0;
	displayName = "$STR_RHSGREF_WEAP_SAVZ58V_RAIL_FOLD";

	model       = "\rhsgref\addons\rhsgref_weapons\savz58\rhs_savz58v_rail_folded";
	recoil      = "recoil_mmg_01";

	rhs_fold    = "rhs_weap_savz58v_rail";
	baseWeapon = "rhs_weap_savz58v_rail_fold";
};

//Vz58 RIS variants
class rhs_weap_savz58v_ris: rhs_weap_savz58_ris_base
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_weap_savz58v_ris)
	scope            = 2;

	displayName      = "$STR_RHSGREF_WEAP_SAVZ58V_RIS";

	model            = "\rhsgref\addons\rhsgref_weapons\savz58\rhs_savz58p_rail_ris";

	recoil      = "recoil_mxc";

	baseWeapon       = "rhs_weap_savz58v_ris";
	weaponInfoType   = "rhs_rscOptics_vz58v_ris";

	rhs_fold         = "rhs_weap_savz58v_ris_fold";

	rhs_grip1_change = "rhs_weap_savz58v_ris_grip1";
	rhs_grip2_change = "rhs_weap_savz58v_ris_grip2";
	rhs_grip3_change = "rhs_weap_savz58v_ris_grip3";
};

class rhs_weap_savz58v_ris_fold : rhs_weap_savz58v_ris
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_weap_savz58v_ris_fold)
	scopeArsenal       = 0;

	displayName = "$STR_RHSGREF_WEAP_SAVZ58V_RIS_FOLD";

	model       = "\rhsgref\addons\rhsgref_weapons\savz58\rhs_savz58p_rail_ris_folded";
	recoil      = "recoil_mmg_01";

	rhs_fold    = "rhs_weap_savz58v_ris";
	baseWeapon = "rhs_weap_savz58v_ris_fold";

	rhs_grip1_change = "rhs_weap_savz58v_ris_fold_grip1";
	rhs_grip2_change = "rhs_weap_savz58v_ris_fold_grip2";
	rhs_grip3_change = "rhs_weap_savz58v_ris_fold_grip3";
};

class rhs_weap_savz58v_ris_grip1 : rhs_weap_savz58v_ris
{
	Grip_Macro(1,savz58_vfg)
};
class rhs_weap_savz58v_ris_grip2 : rhs_weap_savz58v_ris
{
	Grip_Macro(2,savz58_afg)
};
class rhs_weap_savz58v_ris_grip3 : rhs_weap_savz58v_ris
{
	Grip_Macro(3,savz58_vfg)
};

class rhs_weap_savz58v_ris_fold_grip1 : rhs_weap_savz58v_ris_fold
{
	Grip_Macro(1,savz58_vfg)
};
class rhs_weap_savz58v_ris_fold_grip2 : rhs_weap_savz58v_ris_fold
{
	Grip_Macro(2,savz58_afg)
};
class rhs_weap_savz58v_ris_fold_grip3 : rhs_weap_savz58v_ris_fold
{
	Grip_Macro(3,savz58_vfg)
};

//Vz58 black variants
class rhs_weap_savz58p_black: rhs_weap_savz58p
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_weap_savz58p_black)
	scope            = 2;

	displayName      = "$STR_RHSGREF_WEAP_SAVZ58P_BLACK";

	baseWeapon       = "rhs_weap_savz58p_black";

	hiddenSelectionsTextures[] =
	{
		"\rhsgref\addons\rhsgref_weapons\savz58\data\main_co",
		"\rhsgref\addons\rhsgref_weapons\savz58\data\sec_black_co"
	};
	hiddenSelectionsMaterials[] =
	{
		"\rhsgref\addons\rhsgref_weapons\savz58\data\main.rvmat",
		"\rhsgref\addons\rhsgref_weapons\savz58\data\sec_black.rvmat"
	};
};

class rhs_weap_savz58v_black: rhs_weap_savz58v
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_weap_savz58v_black)
	scope            = 2;

	displayName      = "$STR_RHSGREF_WEAP_SAVZ58V_BLACK";

	baseWeapon       = "rhs_weap_savz58v_black";
	weaponInfoType   = "rhs_rscOptics_vz58v";

	rhs_fold         = "rhs_weap_savz58v_fold_black";

	hiddenSelectionsTextures[] =
	{
		"\rhsgref\addons\rhsgref_weapons\savz58\data\main_co",
		"\rhsgref\addons\rhsgref_weapons\savz58\data\sec_black_co"
	};
	hiddenSelectionsMaterials[] =
	{
		"\rhsgref\addons\rhsgref_weapons\savz58\data\main.rvmat",
		"\rhsgref\addons\rhsgref_weapons\savz58\data\sec_black.rvmat"
	};
};

class rhs_weap_savz58v_fold_black : rhs_weap_savz58v_fold
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_weap_savz58v_fold_black)
	scope       = 1;

	displayName = "$STR_RHSGREF_WEAP_SAVZ58V_FOLD_BLACK";

	rhs_fold    = "rhs_weap_savz58v_black";

	hiddenSelectionsTextures[] =
	{
		"\rhsgref\addons\rhsgref_weapons\savz58\data\main_co",
		"\rhsgref\addons\rhsgref_weapons\savz58\data\sec_black_co"
	};
	hiddenSelectionsMaterials[] =
	{
		"\rhsgref\addons\rhsgref_weapons\savz58\data\main.rvmat",
		"\rhsgref\addons\rhsgref_weapons\savz58\data\sec_black.rvmat"
	};
};

//Vz58 black variants - rail

class rhs_weap_savz58p_rail_black: rhs_weap_savz58p_rail
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_weap_savz58p_rail_black)
	scope            = 2;

	displayName      = "$STR_RHSGREF_WEAP_SAVZ58P_RAIL_BLACK";

	baseWeapon       = "rhs_weap_savz58p_rail_black";

	hiddenSelectionsTextures[] =
	{
		"\rhsgref\addons\rhsgref_weapons\savz58\data\main_co",
		"\rhsgref\addons\rhsgref_weapons\savz58\data\sec_black_co",
		"\rhsgref\addons\rhsgref_weapons\savz58\data\vz58TopRailCover_co"
	};
	hiddenSelectionsMaterials[] =
	{
		"\rhsgref\addons\rhsgref_weapons\savz58\data\main.rvmat",
		"\rhsgref\addons\rhsgref_weapons\savz58\data\sec_black.rvmat",
		"\rhsgref\addons\rhsgref_weapons\savz58\data\vz58railcover.rvmat"
	};
};

class rhs_weap_savz58v_rail_black: rhs_weap_savz58v_rail
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_weap_savz58v_rail_black)
	scope            = 2;

	displayName      = "$STR_RHSGREF_WEAP_SAVZ58V_RAIL_BLACK";

	baseWeapon       = "rhs_weap_savz58v_rail_black";
	weaponInfoType   = "rhs_rscOptics_vz58v_rail";

	rhs_fold         = "rhs_weap_savz58v_rail_fold_black";

	hiddenSelectionsTextures[] =
	{
		"\rhsgref\addons\rhsgref_weapons\savz58\data\main_co",
		"\rhsgref\addons\rhsgref_weapons\savz58\data\sec_black_co",
		"\rhsgref\addons\rhsgref_weapons\savz58\data\vz58TopRailCover_co"
	};
	hiddenSelectionsMaterials[] =
	{
		"\rhsgref\addons\rhsgref_weapons\savz58\data\main.rvmat",
		"\rhsgref\addons\rhsgref_weapons\savz58\data\sec_black.rvmat",
		"\rhsgref\addons\rhsgref_weapons\savz58\data\vz58railcover.rvmat"
	};
};

class rhs_weap_savz58v_rail_fold_black : rhs_weap_savz58v_rail_fold
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_weap_savz58v_rail_fold_black)
	scope       = 1;

	displayName = "$STR_RHSGREF_WEAP_SAVZ58V_RAIL_FOLD_BLACK";

	rhs_fold    = "rhs_weap_savz58v_rail_black";

	hiddenSelectionsTextures[] =
	{
		"\rhsgref\addons\rhsgref_weapons\savz58\data\main_co",
		"\rhsgref\addons\rhsgref_weapons\savz58\data\sec_black_co",
		"\rhsgref\addons\rhsgref_weapons\savz58\data\vz58TopRailCover_co"
	};
	hiddenSelectionsMaterials[] =
	{
		"\rhsgref\addons\rhsgref_weapons\savz58\data\main.rvmat",
		"\rhsgref\addons\rhsgref_weapons\savz58\data\sec_black.rvmat",
		"\rhsgref\addons\rhsgref_weapons\savz58\data\vz58railcover.rvmat"
	};
};

//Izh-18 12 gauge
class rhs_weap_Izh18 : Rifle_Base_F
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_weap_Izh18)
	dlc = "RHS_GREF";
	scope = 2;

	model = "\rhsgref\addons\rhsgref_weapons\izh_18\rhs_izh_18.p3d";
	handAnim[] = {"OFP2_ManSkeleton","\rhsgref\addons\rhsgref_c_weapons\anims\rhs_hand_izh18.rtm"};

	magazines[] = {rhsgref_1Rnd_00Buck,rhsgref_1Rnd_Slug};
	magazineWell[] = {CBA_12g_1rnd};

	optics = 1;
	modelOptics = "-";
	displayname = "$STR_RHS_WEAP_IZH18_DISPLAYNAME";
	descriptionShort = "Shotgun <br />Caliber: 12 gauge";
	weaponInfoType = "RscWeaponZeroing";

	modes[] = {"Single"};
	distanceZoomMin=50;
	distanceZoomMax=50;
	discreteDistance[] = {50};
	discreteDistanceInitIndex = 0;
	reloadAction = "RHS_GestureReloadIZh18";
	magazineReloadSwitchPhase = 0.43;
	reloadSound[] =  {"A3\sounds_f\weapons\M320\M320_reload",0.1,1,30};
	reloadMagazineSound[] = {"\rhsgref\addons\rhsgref_weapon_sounds\reloads\izh18_reload",1,1,30};

	class Single: Mode_SemiAuto
	{
		sounds[]={"StandardSound"};
		class StandardSound
		{
			soundsetshot[] = {"HunterShotgun_01_Shot_SoundSet","HunterShotgun_01_Tail_SoundSet"};
		};
		reloadTime=0.5;
		minRange = 1;
		minRangeProbab = 0.45;
	};
	inertia = 0.6;
	dexterity = 1.5;
	fireSpreadAngle=0.95;

	class WeaponSlotsInfo
	{
		class CowsSlot: rhs_picattinny_russian_rifle_scopes_slot {};
		allowedSlots[] = {901};
		mass = 71.72;
	};
};

//VHS-2
class rhs_weap_vhs2_base: Rifle_Base_F
{
	dlc = "RHS_GREF";

	model = "\rhsgref\addons\rhsgref_weapons\vhs2\vhs_d2.p3d";

	magazines[] =
	{
		"rhsgref_30rnd_556x45_vhs2",
		"rhsgref_30rnd_556x45_vhs2_t"
	};
	magazineWell[] = {CBA_556x45_G36};

	UiPicture        = "\A3\weapons_f\data\UI\icon_regular_CA.paa";
	// TODO: Library description required
	class Library
	{
		libTextDesc = "";
	};

	optics = 0;

	hiddenSelections[] = {"Mat_1","Mat_2"};
	hiddenSelectionsTextures[] =
	{
		"\rhsgref\addons\rhsgref_weapons\vhs2\data\vhsmatone_co",
		"\rhsgref\addons\rhsgref_weapons\vhs2\data\vhsmattwo_co"
	};

	maxRecoilSway	= 0.008;
	swayDecaySpeed	= 1.25;
	dexterity		= 1.6;

	recoil = "recoil_ktb";

	class GunParticles: GunParticles
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

	memoryPointCamera = "eye";
	discreteDistance[] = {100,200,300,400};

	opticsZoomMin = 0.25;
	opticsZoomMax = 1.1;
	opticsZoomInit = 0.75;
	distanceZoomMin = 300;
	distanceZoomMax = 300;

	descriptionShort = $STR_A3_CfgWeapons_XM_base_F0;
	handAnim[] = {"OFP2_ManSkeleton","\rhsgref\addons\rhsgref_c_weapons\anims\rhs_hand_vhs.rtm"};
	reloadAction = "GestureReloadKatiba";
	magazineReloadSwitchPhase = 0.53;

	weaponInfoType = "rhs_rscOptics_vhs";
	class SAFE : RHS_SAFE_BASE {};
	muzzles[]={"this","SAFE"};

	BULLET_SOUNDS_556

	drySound[]				= {"A3\sounds_f\weapons\Other\dry_1",0.562341,1,10};
	reloadMagazineSound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Katiba\reload_Katiba",1,1,10};
	changeFiremodeSound[]	= {"A3\sounds_f\weapons\closure\firemode_changer_2", 0.56234133, 1, 20};

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
		reloadTime		= 0.071;
		dispersion		= DISPERSION_MOA(2.8);
		minRange		= 2;
		minRangeProbab	= 0.5;
		midRange		= 200;
		midRangeProbab	= 0.7;
		maxRange		= 400;
		maxRangeProbab	= 0.3;
	};
	class FullAuto: Mode_FullAuto
	{
		reloadTime		= 0.071;
		dispersion		= DISPERSION_MOA(2.8);
		minRange		= 0;
		minRangeProbab	= 0.9;
		midRange		= 15;
		midRangeProbab	= 0.7;
		maxRange		= 30;
		maxRangeProbab	= 0.1;
		aiRateOfFire	= 1e-006;
	};
	class Single_AI: Single
	{
		aiBurstTerminable 		= true;
		showToPlayer			= 0;
		burstRangeMax			= 3;
		minRange				= 200;
		minRangeProbab			= 0.5;
		midRange				= 300;
		midRangeProbab			= 0.7;
		maxRange				= 400;
		maxRangeProbab			= 0.3;
		aiRateOfFire			= 1;
		aiRateOfFireDispersion	= 2;
		aiRateOfFireDistance	= 300;
	};
	class single_medium_optics1: Single
	{
		requiredOpticType		= 1;
		showToPlayer			= 0;
		minRange				= 2;
		minRangeProbab			= 0.2;
		midRange				= 450;
		midRangeProbab			= 0.7;
		maxRange				= 600;
		maxRangeProbab			= 0.2;
		aiRateOfFire			= 3;
		aiRateOfFireDispersion 	= 4;
		aiRateOfFireDistance	= 600;
	};
	class single_far_optics2: single_medium_optics1
	{
		requiredOpticType		= 2;
		minRange				= 100;
		minRangeProbab			= 0.1;
		midRange				= 450;
		midRangeProbab			= 0.6;
		maxRange				= 800;
		maxRangeProbab			= 0.05;
		aiRateOfFire			= 4;
		aiRateOfFireDispersion 	= 6;
		aiRateOfFireDistance	= 800;
	};
	class fullauto_medium: FullAuto
	{
		aiBurstTerminable 		= true;
		showToPlayer			= 0;
		burst					= 3;
		burstRangeMax 			= 3;
		minRange				= 2;
		minRangeProbab			= 0.5;
		midRange				= 75;
		midRangeProbab			= 0.7;
		maxRange				= 150;
		maxRangeProbab			= 0.1;
		aiRateOfFire			= 1;
		aiRateOfFireDispersion 	= 3;
		aiRateOfFireDistance	= 200;
	};

	aiDispersionCoefY = 10;
	aiDispersionCoefX = 8;
	class VHS_BG: UGL_F
	{
		displayName = "VHS-BG";
		useModelOptics = false;
		useExternalOptic = false;
		reloadAction = "rhs_GestureReloadM320_ugl";
		reloadMagazineSound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Katiba\Katiba_UGL_reload", 0.794328, 1, 10};

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
			"rhs_mag_M781_Practice"
		};
		magazineWell[] =
		{
			UGL_40x36,
			CBA_40mm_M203,
			CBA_40mm_EGLM
		};

		cameraDir = "gl_look";
		discreteDistance[] = {50, 100, 150, 200, 250, 300, 350};
		discreteDistanceCameraPoint[] = {"gl_eye_50m", "gl_eye_100m", "gl_eye_150m", "gl_eye_200m", "gl_eye_250m", "gl_eye_300m", "gl_eye_350m"};
		discreteDistanceInitIndex = 1; /// 100 is the default zero
		magazineReloadSwitchPhase = 0.56;
	};
};

class rhs_weap_vhsd2: rhs_weap_vhs2_base
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_weap_vhsd2)
	scope            = 2;

	class WeaponSlotsInfo
	{
		mass = 85.8;
		allowedSlots[] = {901};
		class CowsSlot: rhs_western_rifle_scopes_slot_short {};
		class PointerSlot: rhs_western_rifle_laser_slot {};
		class MuzzleSlot: rhs_western_rifle_muzzle_slot {};
		class GripodSlot: rhs_western_rifle_gripod_slot {};
	};

	displayName      = "VHS-D2";

	baseWeapon       = "rhs_weap_vhsd2";

	rhs_grip1_change = "rhs_weap_vhsd2_grip1";
	rhs_grip2_change = "rhs_weap_vhsd2_grip2";
	rhs_grip3_change = "rhs_weap_vhsd2_grip3";
};
class rhs_weap_vhsd2_grip1: rhs_weap_vhsd2
{
	Grip_Macro(1,vhs_vfg)
};
class rhs_weap_vhsd2_grip2: rhs_weap_vhsd2
{
	Grip_Macro(2,vhs_afg)
};
class rhs_weap_vhsd2_grip3: rhs_weap_vhsd2
{
	Grip_Macro(3,vhs_vfg)
};

class rhs_weap_vhsd2_bg: rhs_weap_vhs2_base
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_weap_vhsd2_bg)
	scope            = 2;

	model = "\rhsgref\addons\rhsgref_weapons\vhs2\vhs_d2_GL.p3d";
	handAnim[] = {"OFP2_ManSkeleton","\rhsgref\addons\rhsgref_c_weapons\anims\rhs_hand_vhs_gl.rtm"};

	muzzles[]={"this","VHS_BG","SAFE"};

	class WeaponSlotsInfo
	{
		mass = 127.6;
		allowedSlots[] = {901};
		class CowsSlot: rhs_western_rifle_scopes_slot_short {};
		class PointerSlot: rhs_western_rifle_laser_slot {};
		class MuzzleSlot: rhs_western_rifle_muzzle_slot {};
	};

	displayName      = "VHS-D2 (VHS-BG)";

	baseWeapon       = "rhs_weap_vhsd2_bg";
};

class rhs_weap_vhsd2_ct15x: rhs_weap_vhs2_base
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_weap_vhsd2_ct15x)
	scope            = 2;

	model = "\rhsgref\addons\rhsgref_weapons\vhs2\vhs_d2_ct15x.p3d";

	class WeaponSlotsInfo
	{
		mass = 94.6;
		allowedSlots[] = {901};
		class PointerSlot: rhs_western_rifle_laser_slot {};
		class MuzzleSlot: rhs_western_rifle_muzzle_slot {};
		class GripodSlot: rhs_western_rifle_gripod_slot {};
	};

	class OpticsModes
	{
		class Optic
		{
			opticsID						= 1;
			useModelOptics					= 0;
			opticsZoomMin					= __EVAL(0.25/1.5);
			opticsZoomMax					= __EVAL(0.25/1.5);
			opticsZoomInit					= __EVAL(0.25/1.5);
			memoryPointCamera				= "opticview";
			opticsFlare						= true;
			opticsDisablePeripherialVision	= true;
			distanceZoomMin					= 300;
			distanceZoomMax					= 300;
			opticsPPEffects[]				= {};
		};

		class Ironsight: Optic
		{
			opticsID						= 2;
			opticsFlare						= false;
			opticsDisablePeripherialVision	= false;
			opticsZoomMin					= 0.25;
			opticsZoomMax					= 1.1;
			opticsZoomInit					= 0.75;
			memoryPointCamera				= "eye";
			distanceZoomMin					= 100;
			distanceZoomMax					= 100;
		};
	};

	displayName      = "VHS-D2 (CT-1.5x)";

	baseWeapon       = "rhs_weap_vhsd2_ct15x";

	rhs_grip1_change = "rhs_weap_vhsd2_ct15x_grip1";
	rhs_grip2_change = "rhs_weap_vhsd2_ct15x_grip2";
	rhs_grip3_change = "rhs_weap_vhsd2_ct15x_grip3";
};
class rhs_weap_vhsd2_ct15x_grip1: rhs_weap_vhsd2_ct15x
{
	Grip_Macro(1,vhs_vfg)
};
class rhs_weap_vhsd2_ct15x_grip2: rhs_weap_vhsd2_ct15x
{
	Grip_Macro(2,vhs_afg)
};
class rhs_weap_vhsd2_ct15x_grip3: rhs_weap_vhsd2_ct15x
{
	Grip_Macro(3,vhs_vfg)
};

class rhs_weap_vhsd2_bg_ct15x: rhs_weap_vhsd2_ct15x
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_weap_vhsd2_bg_ct15x)
	scope            = 2;

	model = "\rhsgref\addons\rhsgref_weapons\vhs2\vhs_d2_ct15x_GL.p3d";
	handAnim[] = {"OFP2_ManSkeleton","\rhsgref\addons\rhsgref_c_weapons\anims\rhs_hand_vhs_gl.rtm"};

	muzzles[]={"this","VHS_BG","SAFE"};

	class WeaponSlotsInfo
	{
		mass = 136.4;
		allowedSlots[] = {901};
		class PointerSlot: rhs_western_rifle_laser_slot {};
		class MuzzleSlot: rhs_western_rifle_muzzle_slot {};
	};

	displayName      = "VHS-D2 (VHS-BG/CT-1.5x)";

	baseWeapon       = "rhs_weap_vhsd2_bg_ct15x";
};

class rhs_weap_vhsk2: rhs_weap_vhsd2
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_weap_vhsk2)
	model = "\rhsgref\addons\rhsgref_weapons\vhs2\vhs_k2.p3d";
	initspeed = -0.967;
	recoil = "recoil_ktbc";
	class Single: Single
	{
		dispersion		= DISPERSION_MOA(3.2);
	};
	class FullAuto: FullAuto
	{
		dispersion		= DISPERSION_MOA(3.2);
	};
	class WeaponSlotsInfo : WeaponSlotsInfo
	{
		mass = 82.5;
	};
	displayName      = "VHS-K2";

	baseWeapon       = "rhs_weap_vhsk2";

	rhs_grip1_change = "rhs_weap_vhsk2_grip1";
	rhs_grip2_change = "rhs_weap_vhsk2_grip2";
	rhs_grip3_change = "rhs_weap_vhsk2_grip3";
};
class rhs_weap_vhsk2_grip1: rhs_weap_vhsk2
{
	Grip_Macro(1,vhs_vfg)
};
class rhs_weap_vhsk2_grip2: rhs_weap_vhsk2
{
	Grip_Macro(2,vhs_afg)
};
class rhs_weap_vhsk2_grip3: rhs_weap_vhsk2
{
	Grip_Macro(3,vhs_vfg)
};

//StGw 57
class rhs_weap_stgw57_base: Rifle_Base_F
{
	dlc = "RHS_GREF";

	magazines[] =
	{
		"rhsgref_24rnd_75x55_Stgw57"
	};
	magazineWell[] = {CBA_75x55_STGW57};

	optics = 0;

	hiddenSelections[] = {"camo"};
	hiddenSelectionsTextures[] =
	{
		"rhsgref\addons\rhsgref_weapons\stgw57\Data\stgw57_ca"
	};

	reloadAction = "RHS_GestureReloadAK";
	maxRecoilSway = 0.008;
	swayDecaySpeed = 1.25;

	recoil = "recoil_mk20";
	recoilProne = "assaultRifleBase";

	class GunParticles: GunParticles
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

	weaponInfoType					= "rhs_rscOptics_stgw57";


	class WeaponSlotsInfo: WeaponSlotsInfo
	{
		mass = 125.4;
		class CowsSlot{};
		class MuzzleSlot{};
		class PointerSlot {};
	};

	opticsZoomMin = 0.25;
	opticsZoomMax = 1.1;
	opticsZoomInit = 0.75;
	distanceZoomMin = 300;
	distanceZoomMax = 300;

	descriptionShort = $STR_A3_CfgWeapons_XM_base_F0;
	handAnim[] = {"OFP2_ManSkeleton","\rhsgref\addons\rhsgref_c_weapons\anims\rhs_hand_savz58.rtm"};
	dexterity = 1.6;

	class SAFE: RHS_SAFE_BASE {};
	muzzles[]={"this","SAFE"};

	BULLET_SOUNDS_762
	changeFiremodeSound[]	= {"A3\sounds_f\weapons\closure\firemode_changer_2", 0.56234133, 1, 20};

	modes[]=
	{
		"Single",
		"FullAuto",
		"single_medium_optics1",
		"single_far_optics2",
		"fullauto_medium"
	};

	class Single: Mode_SemiAuto
	{
		reloadTime=0.12;
		dispersion=0.0021;
		minRange=2;
		minRangeProbab=0.5;
		midRange=200;
		midRangeProbab=0.7;
		maxRange=400;
		maxRangeProbab=0.3;
	};

	class FullAuto: Mode_FullAuto
	{
		reloadTime=0.12;
		dispersion=0.0021;
		minRange=0;
		minRangeProbab=0.9;
		midRange=15;
		midRangeProbab=0.7;
		maxRange=30;
		maxRangeProbab=0.1;
		aiRateOfFire=1e-006;
	};

	class single_medium_optics1: Single
	{
		requiredOpticType=1;
		showToPlayer=0;
		minRange=2;
		minRangeProbab=0.2;
		midRange=450;
		midRangeProbab=0.7;
		maxRange=600;
		maxRangeProbab=0.2;
		aiRateOfFire=6;
		aiRateOfFireDistance=600;
	};

	class single_far_optics2: single_medium_optics1
	{
		requiredOpticType=2;
		minRange=100;
		minRangeProbab=0.1;
		midRange=450;
		midRangeProbab=0.6;
		maxRange=800;
		maxRangeProbab=0.05;
		aiRateOfFire=8;
		aiRateOfFireDistance=800;
	};

	class fullauto_medium: FullAuto
	{
		showToPlayer=0;
		burst=3;
		minRange=2;
		minRangeProbab=0.5;
		midRange=75;
		midRangeProbab=0.7;
		maxRange=150;
		maxRangeProbab=0.05;
		aiRateOfFire=2;
		aiRateOfFireDistance=200;
	};

	aiDispersionCoefY = 10;
	aiDispersionCoefX = 8;

	drySound[] = {"A3\sounds_f\weapons\Other\dry_1",0.562341,1,10};
	reloadMagazineSound[] = {"A3\Sounds_F\weapons\Khaybar\reload_khaibar",1,1,10};
};

class rhs_weap_stgw57: rhs_weap_stgw57_base
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_weap_stgw57)
	scope            = 0;

	displayName      = "Stgw 57";

	model			 = "\rhsgref\addons\rhsgref_weapons\stgw57\rhs_stgw57.p3d";

	UiPicture        = "\A3\weapons_f\data\UI\icon_regular_CA.paa";

	baseWeapon       = "rhs_weap_stgw57";
};
//From WW
class rhs_weap_m3a1_base: Rifle_Base_F
{
	dlc         = "RHS_GREF";
	AUTHOR_MACRO
	magazines[] = {
		"rhsgref_30rnd_1143x23_M1911B_SMG",
		"rhsgref_30rnd_1143x23_M1T_SMG",
		"rhsgref_30rnd_1143x23_M1911B_2mag_SMG",
		"rhsgref_30rnd_1143x23_M1T_2mag_SMG"
	};
	magazineWell[] = {CBA_45ACP_Grease};

	// TODO: Librbary description required
	class Library
	{
		libTextDesc = "";
	};

	class SAFE: RHS_SAFE_BASE {};

	muzzles[]={"this","SAFE"};

	optics         = 0;
	reloadAction   = "RHS_GestureReloadM3Grease";
	magazineReloadSwitchPhase = 0.36;
	recoil         = "recoil_mx";
	cursor         = "smg";
	maxRecoilSway  = 0.0325;
	swayDecaySpeed = 1.25;
	class GunParticles: GunParticles
	{
		class SecondEffect
		{
			positionName  = "Nabojnicestart";
			directionName = "Nabojniceend";
			effectName    = "RifleAssaultCloud";
		};
	};

	weaponInfoType            = "rhs_rscOptics_m3a1";
	discreteDistance[]        = {90};
	discreteDistanceInitIndex = 0;
	class WeaponSlotsInfo: WeaponSlotsInfo
	{
		class PointerSlot {};

		class CowsSlot {};

		class MuzzleSlot {};

		class UnderBarrelSlot {};
	};

	class OpticsModes
	{
		class IronSight
		{
			opticsID                       = 1;
			useModelOptics                 = 0;
			visionMode[]                   = {};
			opticsPPEffects[]              = {};
			opticsZoomMin                  = 0.275;
			opticsZoomMax                  = 1.1;
			opticsZoomInit                 = 0.75;
			memoryPointCamera              = "eye";
			opticsFlare                    = false;
			opticsDisablePeripherialVision = false;
			distanceZoomMin                = 90;
			distanceZoomMax                = 90;
			cameraDir                      = "";
		};

		class Overview: IronSight
		{
			opticsID                       = 2;
			opticsFlare                    = true;
			opticsDisablePeripherialVision = false;
			memoryPointCamera              = "opticsView";
			visionMode[]                   = {};
			opticsPPEffects[]              = {};
		};
	};

	descriptionShort      = "SMG Rifle<br />Caliber: .45 ACP";
	handAnim[]            = {"OFP2_ManSkeleton", "\rhsgref\addons\rhsgref_c_weapons\anims\rhs_hand_m3a1.rtm"};
	dexterity             = 1.8;
	aiDispersionCoefY     = 10;
	aiDispersionCoefX     = 8;

	BULLET_SOUNDS_9

	drySound[]            = {"A3\Sounds_F\arsenal\weapons\SMG\Vermin\Dry_Vermin", 0.5011872, 1, 10};
	reloadMagazineSound[] = {"rhsgref\addons\rhsgref_weapon_sounds\reloads\m3a1_reload", 1.0, 1, 10};
	changeFiremodeSound[]	= {"A3\sounds_f\weapons\closure\firemode_changer_2", 0.56234133, 1, 20};
	modes[]               = {"FullAuto"};
	class FullAuto: Mode_FullAuto
	{
		reloadTime				= 0.15;
		dispersion				= DISPERSION_MOA(10);
		recoil					= "recoil_auto_smg_01";
		recoilProne				= "recoil_auto_prone_smg_01";
		minRange				= 0;
		minRangeProbab			= 0.9;
		midRange				= 15;
		midRangeProbab			= 0.7;
		maxRange				= 30;
		maxRangeProbab			= 0.1;
		aiRateOfFire			= 1e-006;
		aiRateOfFireDistance	= 50;
	};
};

class rhs_weap_m3a1: rhs_weap_m3a1_base
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_weap_m3a1)
	scope         = 2;
	scopeCurator  = 2;
	model         = "\rhsgref\addons\rhsgref_weapons2\m3a1\rhs_m3a1.p3d";
	class WeaponSlotsInfo: WeaponSlotsInfo
	{
		mass = 79.4;
	};

	inertia     = 0.35;
	dexterity   = 1.7;
	initSpeed   = 280;
	displayName = "$STR_RHSGREF_WEAP_M3A1_DISPLAY_NAME";
	UiPicture   = "\A3\Weapons_F\data\UI\icon_regular_CA.paa";
	class Library
	{
		libTextDesc = "$str_a3_cfgweapons_hgun_smg_01_library0";
	};

	descriptionShort = "Submachine Gun<br />Caliber: .45ACP";
};


class rhs_weap_m3a1_specops: rhs_weap_m3a1_base
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_weap_m3a1_specops)
	scope         = 2;
	scopeCurator  = 2;
	model         = "\rhsgref\addons\rhsgref_weapons2\m3a1\rhs_m3a1_specops.p3d";
	class WeaponSlotsInfo: WeaponSlotsInfo
	{
		mass = 79.4;
		class CowsSlot: rhs_picattinny_russian_rifle_scopes_slot {};
	};

	dexterity   = 1.7;
	initSpeed   = 280;
	displayName = "$STR_RHSGREF_WEAP_M3A1_SPECOPS_DISPLAY_NAME";
	UiPicture   = "\A3\Weapons_F\data\UI\icon_regular_CA.paa";
	class Library
	{
		libTextDesc = "$str_a3_cfgweapons_hgun_smg_01_library0";
	};

	descriptionShort = "Submachine Gun<br />Caliber: .45ACP";

	weaponInfoType = "rhs_rscOptics_m3a1";
};

class rhs_weap_MP44_base: Rifle_Base_F
{
	AUTHOR_MACRO
	dlc   = "RHS_GREF";
	model = "\rhsgref\addons\rhsgref_weapons2\mp44\rhs_mp44.p3d";
	UiPicture   = "\A3\Weapons_F\data\UI\icon_regular_CA.paa";
	magazines[]     =
	{
		"rhsgref_30Rnd_792x33_SmE_StG",
		"rhsgref_25Rnd_792x33_SmE_StG"
	};
	magazineWell[] = {CBA_792x33_StG};

	// TODO: Librbary description required
	class Library
	{
		libTextDesc = "";
	};
	descriptionShort = "Assault Rifle<br />Caliber: 7.92x33mm";

	optics = 0;

	hiddenSelections[] = {"camo"};
	hiddenSelectionsTextures[] =
	{
		"\rhsgref\addons\rhsgref_weapons2\mp44\data\mp44_co.paa"
	};

	reloadAction = "RHS_GestureReloadMP44";
	handAnim[] = {"OFP2_ManSkeleton","rhsgref\addons\rhsgref_c_weapons\anims\rhs_hand_mp44.rtm"};
	maxRecoilSway = 0.008;
	swayDecaySpeed = 1.25;
	dexterity = 1.6;
	inertia = 0.6;

	recoil = "recoil_mk20";
	recoilProne = "assaultRifleBase";

	class GunParticles: GunParticles
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

	cameraDir						= "eye_look";
	discreteDistanceCameraPoint[]	= {"eye","eye_200","eye_300","eye_400","eye_500","eye_600","eye_700","eye_800"};
	discreteDistance[]				= {100,200,300,400,500,600,700,800};
	discreteDistanceInitIndex		= 0;

	class WeaponSlotsInfo: WeaponSlotsInfo
	{
		mass = 101.2;
		class CowsSlot{};
		class MuzzleSlot{};
		class PointerSlot {};
	};

	opticsZoomMin   = 0.25;
	opticsZoomMax   = 1.1;
	opticsZoomInit  = 0.75;
	distanceZoomMin = 300;
	distanceZoomMax = 300;


	class SAFE: RHS_SAFE_BASE {};

	muzzles[]={"this","SAFE"};

	BULLET_SOUNDS_762

	changeFiremodeSound[]	= {"A3\sounds_f\weapons\closure\firemode_changer_2", 0.56234133, 1, 20};
	reloadMagazineSound[]	= {"\rhsgref\addons\rhsgref_weapon_sounds\reloads\mp44_reload",1.5,1,30};
	drySound[]				= {"A3\sounds_f\weapons\Other\dry_1",0.562341,1,10};

	modes[]=
	{
		"Single",
		"FullAuto",
		"single_medium_optics1",
		"single_far_optics2",
		"fullauto_medium"
	};

	class Single: Mode_SemiAuto
	{
		WEAPON_RPM(580)
		dispersion		= DISPERSION_MOA(4.5);
		minRange=2;
		minRangeProbab=0.5;
		midRange=200;
		midRangeProbab=0.7;
		maxRange=400;
		maxRangeProbab=0.3;
	};

	class FullAuto: Mode_FullAuto
	{
		WEAPON_RPM(580)
		dispersion		= DISPERSION_MOA(4.5);
		minRange=0;
		minRangeProbab=0.9;
		midRange=15;
		midRangeProbab=0.7;
		maxRange=30;
		maxRangeProbab=0.1;
		aiRateOfFire=1e-006;
	};

	class single_medium_optics1: Single
	{
		requiredOpticType=1;
		showToPlayer=0;
		minRange=2;
		minRangeProbab=0.2;
		midRange=450;
		midRangeProbab=0.7;
		maxRange=600;
		maxRangeProbab=0.2;
		aiRateOfFire=6;
		aiRateOfFireDistance=600;
	};

	class single_far_optics2: single_medium_optics1
	{
		requiredOpticType=2;
		minRange=100;
		minRangeProbab=0.1;
		midRange=450;
		midRangeProbab=0.6;
		maxRange=800;
		maxRangeProbab=0.05;
		aiRateOfFire=8;
		aiRateOfFireDistance=800;
	};

	class fullauto_medium: FullAuto
	{
		showToPlayer=0;
		burst=3;
		minRange=2;
		minRangeProbab=0.5;
		midRange=75;
		midRangeProbab=0.7;
		maxRange=150;
		maxRangeProbab=0.05;
		aiRateOfFire=2;
		aiRateOfFireDistance=200;
	};

	aiDispersionCoefY = 10;
	aiDispersionCoefX = 8;
};

class rhs_weap_MP44: rhs_weap_MP44_base
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_weap_MP44)

	scope         = 2;
	scopeCurator  = 2;

	displayName = "$STR_RHSGREF_WEAP_MP44_DISPLAY_NAME";
};
/*
// K98k RIFLE
class rhs_weap_K98k_Base_F: Rifle_Base_F
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_weap_K98k_Base_F)
	dlc         = "RHS_GREF";
	magazines[] = {"rhsgref_5Rnd_792x57_SmE_k98", "rhsgref_5Rnd_792x57_SmK_k98"};

	// TODO: Librbary description required
	class Library
	{
		libTextDesc = "";
	};

	optics         = 0;
	reloadAction   = "rhsgref_GestureReloadM1903A1";
	maxRecoilSway  = 0.0125;
	swayDecaySpeed = 1.25;
	recoil         = "recoil_dmr_01";
	model          = "\rhsgref\addons\rhsgref_weapons2\k98k\rhs_k98k_byf43.p3d";
	class GunParticles: GunParticles
	{
		class SecondEffect
		{
			positionName  = "Nabojnicestart";
			directionName = "Nabojniceend";
			effectName    = "RifleAssaultCloud";
		};
	};

	weaponInfoType                = "RscWeaponZeroing";
	discreteDistance[]            = {100, 200, 300, 400, 500, 600, 700, 800, 900, 1000, 1100, 1200, 1300, 1400, 1500, 1600, 1700, 1800, 1900, 2000};
	discreteDistanceCameraPoint[] = {"eye", "eye_200", "eye_300", "eye_400", "eye_500", "eye_600", "eye_700", "eye_800", "eye_900", "eye_1000", "eye_1100", "eye_1200", "eye_1300", "eye_1400", "eye_1500", "eye_1600", "eye_1700", "eye_1800", "eye_1900", "eye_2000"};
	discreteDistanceInitIndex     = 0;
	cameraDir                     = "eye_look";
	maxZeroing                    = 2000;
	class WeaponSlotsInfo: WeaponSlotsInfo
	{
		class PointerSlot: PointerSlot
		{
			linkProxy         = "\A3\data_f\proxies\weapon_slots\SIDE";
			displayName       = "Front sight";
			compatibleItems[] = {"rhsgref_K98k_acc_sighthood_add"};
		};

		class CowsSlot {};

		class MuzzleSlot {};

		class UnderBarrelSlot {};
	};

	opticsZoomMin    = 0.275;
	opticsZoomMax    = 1.1;
	opticsZoomInit   = 0.75;
	distanceZoomMin  = 300;
	distanceZoomMax  = 300;
	descriptionShort = "Bolt action Rifle<br />Caliber: 7.92x57mm";
	handAnim[]       = {"OFP2_ManSkeleton", "\rhsgref\addons\rhsgref_c_weapons\anims\awmhands.rtm"};

	//dexterity = 1.8;
	dexterity     = 1.8;
	caseless[]    = {"", 1, 1, 1};
	soundBullet[] = {"caseless", 1};
	modes[]       =	{
		"Single",
		"far_optic1",
		"medium_optic2",
		"far_optic2"
	};
	class Single: Mode_SemiAuto
	{
		sounds[] = {"StandardSound"};
		class StandardSound
		{
			weaponSoundEffect = "DefaultRifle";
			begin1[]          = {"A3\sounds_f\weapons\M320\M320_st_1", 1.4125376, 1, 1200};
			begin2[]          = {"A3\sounds_f\weapons\M320\M320_st_2", 1.4125376, 1, 1200};
			soundBegin[]      = {"begin1", 0.5, "begin2", 0.5};
			closure1[]        = {"A3\sounds_f\weapons\closure\closure_rifle_6.wss", 3.1622777, 1, 300};
			closure2[]        = {"A3\sounds_f\weapons\closure\closure_rifle_7.wss", 3.1622777, 1, 300};
			soundClosure[]    = {"closure1", 0.5, "closure2", 0.5};
		};

		reloadTime = 1.6;

		//MOA <=1
		//dispersion = 0;
		dispersion     = 0.0002909;
		minRange       = 2;
		minRangeProbab = 0.3;
		midRange       = 250;
		midRangeProbab = 0.7;
		maxRange       = 400;
		maxRangeProbab = 0.04;
	};

	class far_optic1: Single
	{
		showToPlayer         = 0;
		minRange             = 150;
		minRangeProbab       = 0.1;
		midRange             = 500;
		midRangeProbab       = 0.7;
		maxRange             = 1000;
		maxRangeProbab       = 0.3;
		aiRateOfFire         = 5;
		aiRateOfFireDistance = 700;
		requiredOpticType    = 1;
	};

	class medium_optic2: Single
	{
		showToPlayer         = 0;
		minRange             = 250;
		minRangeProbab       = 0.1;
		midRange             = 750;
		midRangeProbab       = 0.7;
		maxRange             = 1000;
		maxRangeProbab       = 0.3;
		aiRateOfFire         = 6;
		aiRateOfFireDistance = 1000;
		requiredOpticType    = 2;
	};

	class far_optic2: far_optic1
	{
		minRange             = 500;
		minRangeProbab       = 0.1;
		midRange             = 1050;
		midRangeProbab       = 0.7;
		maxRange             = 2000;
		maxRangeProbab       = 0.3;
		aiRateOfFire         = 8;
		aiRateOfFireDistance = 2000;
		requiredOpticType    = 2;
	};

	aiDispersionCoefY     = 10;
	aiDispersionCoefX     = 8;
	drySound[]            = {"A3\sounds_f\weapons\Other\dry_1", 0.01, 1};
	reloadMagazineSound[] = {"\rhsgref\addons\rhsgref_weapons\kar98k\data\sounds\1903A1_reload_noscope", 0.8, 1, 10};

	class Eventhandlers: Eventhandlers
	{
		class RHS_BoltAction {
			fired = "[_this select 0,_this select 1,_this select 1] call rhs_fnc_boltAction;";
		};
	};
	rhs_boltActionSound[] ={"rhsgref\addons\rhsgref_weapons\kar98k\data\sounds\kar98k_bolt.wss", 1.42, 1, 20};
	rhs_boltActionAnim = "RHS_GestureRechamberM1903A1";
};

class rhs_weap_K98k_byf43: rhs_weap_K98k_Base_F
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_weap_K98k_byf43)
	scope        = 2;
	scopeCurator = 2;
	dlc          = "RHS_GREF";
	displayName  = "$STR_RHSGREF_WEAP_K98K1943_DISPLAY_NAME";
	model        = "\rhsgref\addons\rhsgref_weapons2\k98k\rhs_k98k_byf43.p3d";
	class WeaponSlotsInfo: WeaponSlotsInfo
	{
		mass = 121;
		class MuzzleSlot {};

		class CowsSlot {};

		class PointerSlot: PointerSlot {};

		class UnderBarrelSlot {};
	};

	class LinkedItems
	{
		class LinkedItemsOptic {};

		class LinkedItemsAcc
		{
			slot = "PointerSlot";
			item = "rhsgref_K98k_acc_sighthood_add";
		};
	};

	UiPicture = "\A3\weapons_f\data\UI\icon_regular_CA.paa";
	inertia   = 0.95;
	class ItemInfo
	{
		priority    = 1;
		RMBhint     = "K98k";
		onHoverText = "K98k";
	};

	baseWeapon = "rhs_weap_K98k_byf43";
};
*/
//M1 Garand Rifle
class rhs_weap_M1garand_Base_F: Rifle_Base_F
{
	AUTHOR_MACRO
	dlc         = "RHS_GREF";
	magazines[] = {"rhsgref_8Rnd_762x63_M2B_M1rifle", "rhsgref_8Rnd_762x63_Tracer_M1T_M1rifle"};
	magazineWell[] = {CBA_3006_Garand};
	magazineReloadSwitchPhase = 0.15;
	// TODO: Librbary description required
	class Library
	{
		libTextDesc = "";
	};

	class SAFE: RHS_SAFE_BASE {};
	class ADS: RHS_SAFE_BASE {
		magazines[] = {rhs_mag_m1garand_ads};
	};

	muzzles[]={"this","SAFE","ADS"};

	optics					= 0;
	reloadAction			= "RHS_GestureReloadM1Garand";
	maxRecoilSway			= 0.0125;
	swayDecaySpeed			= 1.25;
	recoil					= "recoil_dmr_01";
	model					= "\rhsgref\addons\rhsgref_weapons2\m1garand\rhs_m1garand_sa43.p3d";
	class GunParticles: GunParticles
	{
		class SecondEffect
		{
			positionName  = "Nabojnicestart";
			directionName = "Nabojniceend";
			effectName    = "RifleAssaultCloud";
		};
	};

	weaponInfoType					= "rhs_rscOptics_m1garand_handler";
	discreteDistance[]				= {100, 200, 300, 400, 500, 600, 700, 800, 900, 1000, 1100, 1200};
	discreteDistanceCameraPoint[]	= {"eye", "eye_200", "eye_300", "eye_400", "eye_500", "eye_600", "eye_700", "eye_800", "eye_900", "eye_1000", "eye_1100", "eye_1200"};
	discreteDistanceInitIndex		= 0;
	cameraDir						= "eye_look";
	maxZeroing						= 1200;
	class WeaponSlotsInfo: WeaponSlotsInfo
	{
		class PointerSlot{};
		class CowsSlot {};
		class MuzzleSlot {};
		class UnderBarrelSlot {};
	};

	opticsZoomMin    = 0.275;
	opticsZoomMax    = 1.1;
	opticsZoomInit   = 0.75;
	distanceZoomMin  = 300;
	distanceZoomMax  = 300;
	descriptionShort = "Semi-automatic Rifle<br />Caliber: .30-06";
	handAnim[]       = {"OFP2_ManSkeleton", "\rhsgref\addons\rhsgref_c_weapons\anims\rhs_hand_m1garand.rtm"};

	dexterity	= 1.8;
	inertia   	= 0.95;

	BULLET_SOUNDS_762

	modes[]       =	{
		"Single",
		"far_optic1",
		"medium_optic2",
		"far_optic2"
	};

	class Single: Mode_SemiAuto
	{
		dispersion     = 0.00045;
		//dispersion		= 0.0;
		minRange		= 2;
		minRangeProbab	= 0.3;
		midRange		= 350;
		midRangeProbab	= 0.7;
		maxRange		= 500;
		maxRangeProbab	= 0.05;
		displayName		= "";

	};

	class far_optic1: Single
	{
		showToPlayer			= 0;
		minRange				= 150;
		minRangeProbab			= 0.1;
		midRange				= 500;
		midRangeProbab			= 0.7;
		maxRange				= 1000;
		maxRangeProbab			= 0.3;
		aiRateOfFire			= 5;
		aiRateOfFireDistance	= 700;
		requiredOpticType		= 1;
	};

	class medium_optic2: Single
	{
		showToPlayer			= 0;
		minRange				= 250;
		minRangeProbab			= 0.1;
		midRange				= 750;
		midRangeProbab			= 0.7;
		maxRange				= 1000;
		maxRangeProbab			= 0.3;
		aiRateOfFire			= 6;
		aiRateOfFireDistance	= 1000;
		requiredOpticType		= 2;
	};

	class far_optic2: far_optic1
	{
		minRange				= 500;
		minRangeProbab			= 0.1;
		midRange				= 1050;
		midRangeProbab			= 0.7;
		maxRange				= 2000;
		maxRangeProbab			= 0.3;
		aiRateOfFire			= 8;
		aiRateOfFireDistance	= 2000;
		requiredOpticType		= 2;
	};

	aiDispersionCoefY		= 10;
	aiDispersionCoefX		= 8;
	drySound[]				= {"A3\sounds_f\weapons\Other\dry_1", 0.01, 1};
	reloadMagazineSound[]	= {"\rhsgref\addons\rhsgref_weapon_sounds\reloads\m1garand_reload",1,1,20};
	class Eventhandlers: Eventhandlers
	{
		class RHSGREF_garandPing
		{
			fired = "_this call RHS_fnc_m1Handler;";
		};
	};
};

class rhs_weap_m1garand_sa43: rhs_weap_M1garand_Base_F
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_weap_m1garand_sa43)
	scope        = 2;
	scopeCurator = 2;
	dlc          = "RHS_GREF";
	displayName  = "$STR_RHSGREF_WEAP_M1RIFLE_DISPLAY_NAME";
	model        = "\rhsgref\addons\rhsgref_weapons2\m1garand\rhs_m1garand_sa43.p3d";
	class WeaponSlotsInfo: WeaponSlotsInfo
	{
		mass = 94.8;
		class MuzzleSlot {};
		class CowsSlot {};
		class PointerSlot: PointerSlot {};
		class UnderBarrelSlot {};
	};

	class LinkedItems
	{
		class LinkedItemsOptic {};
		class LinkedItemsAcc {};
	};

	UiPicture = "\A3\weapons_f\data\UI\icon_regular_CA.paa";
	class ItemInfo
	{
		priority    = 1;
		RMBhint     = "M1 Garand";
		onHoverText = "M1 Garand";
	};

	baseWeapon = "rhs_weap_m1garand_sa43";
};

class rhs_weap_mg42_base: Rifle_Base_F
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_weap_mg42_base)
	dlc         = "RHS_GREF";
	//author      = "Kickapoo and Snorri"; //Uhh should we leave it?s
	scope       = 1;
	magazines[] = {
		"rhsgref_50Rnd_792x57_SmE_drum",
		"rhsgref_50Rnd_792x57_SmE_notracers_drum",
		"rhsgref_50Rnd_792x57_SmK_drum",
		"rhsgref_50Rnd_792x57_SmK_alltracers_drum",
		"rhsgref_296Rnd_792x57_SmE_belt",
		"rhsgref_296Rnd_792x57_SmE_notracers_belt",
		"rhsgref_296Rnd_792x57_SmK_belt",
		"rhsgref_296Rnd_792x57_SmK_alltracers_belt"
	};
	magazineWell[] =
	{		
		CBA_792x57_LINKS
	};
	weaponInfoType					= "rhs_rscOptics_mg42_handler";
	discreteDistance[]				= {100, 200, 300, 400, 500, 600, 700, 800, 900, 1000, 1100, 1200, 1300, 1400, 1500, 1600, 1700, 1800, 1900, 2000};
	discreteDistanceCameraPoint[]	= {"eye", "eye_200", "eye_300", "eye_400", "eye_500", "eye_600", "eye_700", "eye_800", "eye_900", "eye_1000", "eye_1100", "eye_1200", "eye_1300", "eye_1400", "eye_1500", "eye_1600", "eye_1700", "eye_1800", "eye_1900", "eye_2000"};
	discreteDistanceInitIndex		= 0;
	cameraDir						= "eye_look";
	maxZeroing						= 2000;

	class GunParticles
	{
		class MG42_WhiteGas
		{
			positionName  = "usti hlavne";
			directionName = "konec hlavne";
			effectName    = "RifleAssaultCloud";
		};

		class MuzzleRefract
		{
			positionName  = "usti hlavne";
			directionName = "usti hlavne up";
			effectName    = "RHS_BarrelRefractHeavy";
		};

		//Reusable belt, not disintegrating links
		/* class MachineGunEject
		{
			positionName  = "linkeject_start";
			directionName = "linkeject_end";
			effectName    = "MachineGunEject";
		}; */

		class MachineGunCartridge
		{
			positionName  = "shelleject_start";
			directionName = "shelleject_end";
			effectName    = "rhsgref_792CartridgeEject";
		};
	};

	class WeaponSlotsInfo: WeaponSlotsInfo
	{
		mass = 254.5;
		class PointerSlot {};
		class CowsSlot
		{
			linkProxy         = "\A3\data_f\proxies\weapon_slots\TOP";
			displayName       = "AA Sight";
			compatibleItems[] = {"rhsgref_mg42_acc_AAsight"};
		};
		class MuzzleSlot {};
		class UnderBarrelSlot {};
	};

	maxRecoilSway		= 0.008;
	swayDecaySpeed		= 1.25;
	recoil				= "recoil_zafir";
	opticsZoomMin		= 0.275;
	opticsZoomMax		= 1;
	opticsZoomInit		= 0.75;
	distanceZoomMin		= 300;
	distanceZoomMax		= 300;
	dexterity			= 1.8;
	aimTransitionSpeed	= 0.29627356;
	reloadAction		= "RHS_GestureReloadMG42";
	handAnim[]			= {"OFP2_ManSkeleton", "\rhsgref\addons\rhsgref_c_weapons\anims\rhs_hand_MG42.rtm"};
	descriptionShort	= "Machine Gun<br />Caliber: 7.92×57mm";
	class Library
	{
		libTextDesc = "The MG42 is a 7.92×57mm Mauser general purpose machine gun used extensively by the German armed forces during the second half of World War II.";
	};

	BULLET_SOUNDS_556

	muzzles[]	= {"this"};
	modes[]		=	{
		"manual",
		"close",
		"short",
		"medium",
		"far"
	};
	inertia = 0.8;
	class manual: Mode_FullAuto
	{
		reloadTime		= __EVAL(60 / 1200); //1200 rpm
		dispersion		= 0.0008;    // 0.0038;
		
		soundContinuous	= 0;
		soundBurst		= false;
		minRange		= 0; minRangeProbab = 0.30;
		midRange		= 5; midRangeProbab = 0.58;
		maxRange		= 10; maxRangeProbab = 0.04;
		showToPlayer	= true;
	};

	class close: manual
	{
		burst					= 8;
		burstRangeMax			= 12;
		aiRateOfFire			= 0.5;
		aiRateOfFireDistance	= 50;
		minRange				= 10; minRangeProbab = 0.05;
		midRange				= 20; midRangeProbab = 0.58;
		maxRange				= 50; maxRangeProbab = 0.04;
		showToPlayer			= false;
		aiBurstTerminable 		= true;
	};

	class short: close
	{
		burst					= 8;
		burstRangeMax			= 12;
		aiRateOfFire			= 2;
		aiRateOfFireDistance	= 300;
		minRange				= 50; minRangeProbab = 0.05;
		midRange				= 150; midRangeProbab = 0.58;
		maxRange				= 300; maxRangeProbab = 0.04;
	};

	class medium: close
	{
		burst					= 6;
		burstRangeMax			= 12;
		aiRateOfFire			= 3;
		aiRateOfFireDistance	= 600;
		minRange				= 200; minRangeProbab = 0.05;
		midRange				= 400; midRangeProbab = 0.58;
		maxRange				= 600; maxRangeProbab = 0.04;
	};

	class far: close
	{
		burst					= 5;
		burstRangeMax			= 12;
		aiRateOfFire			= 5;
		aiRateOfFireDistance	= 1000;
		minRange				= 400; minRangeProbab = 0.05;
		midRange				= 600; midRangeProbab = 0.4;
		maxRange				= 900; maxRangeProbab = 0.01;
	};

	aiDispersionCoefY			= 12.0;
	aiDispersionCoefX			= 6.0;
	magazineReloadSwitchPhase	= 0.56;
	rhs_deployedHandAnim 		= "RHS_GestureHoldMG42";
};

class rhs_weap_mg42: rhs_weap_mg42_base
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_weap_mg42)
	scope       = 2;
	displayName = "$STR_RHSGREF_WEAP_MG42_DISPLAY_NAME";
	model       = "\rhsgref\addons\rhsgref_weapons2\mg42\rhs_mg42.p3d";
	baseWeapon  = "rhs_weap_mg42";
};

class rhs_weap_mg42_aa: rhs_weap_mg42
{
	AUTHOR_MACRO
	scope = 1;
	class LinkedItems
	{
		class LinkedItemsOptic
		{
			slot = "CowsSlot";
			item = "rhsgref_mg42_acc_AAsight";
		};

		class LinkedItemsAcc {};
	};
};

class rhs_weap_m79: Rifle_Base_F
{
	AUTHOR_MACRO_BIS_PORT
	INVENTORY_PICTURE(rhs_weap_m79_x)
	dlc = "RHS_GREF";

	scope = 2;
	displayname = "M79";
	descriptionShort = "Grenade Launcher<br />Caliber: 40mm";

	UiPicture = "\A3\Weapons_F\data\UI\icon_regular_CA.paa";

	model = "\rhsgref\addons\rhsgref_weapons2\m79\rhs_M79";

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
		"rhs_mag_M781_Practice"
	};
	magazineWell[] =
	{
		UGL_40x36,
		CBA_40mm_M203,
		CBA_40mm_EGLM
	};
	magazineReloadSwitchPhase	= 0.26;

	// TODO: Librbary description required
	class Library
	{
		libTextDesc = "";
	};

	optics = 0;

	reloadAction = "RHS_GestureReloadM79GL";
	reloadMagazineSound[] = {"\rhsgref\addons\rhsgref_weapon_sounds\reloads\m79_reload", 0.794328, 1, 20};
	maxRecoilSway = 0.0125;
	swayDecaySpeed = 1.25;
	dexterity = 1.8;
	aimTransitionSpeed = 0.65;
	recoil = "recoil_gm6";

	class GunParticles : GunParticles
	{
		class SecondEffect
		{
			positionName = "Nabojnicestart";
			directionName = "Nabojniceend";
			effectName = "RifleAssaultCloud";
		};
	};

	weaponInfoType = "RscWeaponZeroing";
	cameraDir = "gl_look";
	discreteDistance[] = {50,75,100,125,150,175,200,225,250,275,300,325,350,375};
	discreteDistanceCameraPoint[] = {"gl_eye_50m", "gl_eye_75m", "gl_eye_100m", "gl_eye_125m", "gl_eye_150m", "gl_eye_175m", "gl_eye_200m", "gl_eye_225m", "gl_eye_250m", "gl_eye_275m", "gl_eye_300m", "gl_eye_325m", "gl_eye_350m", "gl_eye_375m"};
	discreteDistanceInitIndex = 0;

	opticsZoomMin = 0.275;
	opticsZoomMax = 1.1;
	opticsZoomInit = 0.75;
	distanceZoomMin = 50;
	distanceZoomMax = 375;

	class WeaponSlotsInfo: WeaponSlotsInfo
	{
		mass = 59.4;
		class PointerSlot {};
		class CowsSlot {};
		class MuzzleSlot {};
		class UnderBarrelSlot {};
	};

	handAnim[] = {"OFP2_ManSkeleton","\rhsgref\addons\rhsgref_c_weapons\anims\rhs_hand_M79.rtm"};
	caseless[] = {"",1,1,1};

	class SAFE: RHS_SAFE_BASE {};
	muzzles[]={"this","SAFE"};

	soundBullet[] = {"caseless",1};
	modes[]=
	{
		"Single",
		"far_optic1",
		"medium_optic2",
		"far_optic2"
	};
	class Single : Mode_SemiAuto
	{
		sounds[]={"StandardSound"};
		class StandardSound
		{
			soundSetShot[] = {"rhs_m203_shot_SoundSet","UGL_Tail_SoundSet","UGL_InteriorTail_SoundSet"};
		};
		reloadTime = 0.075;
		//MOA <=1
		dispersion = 0.0002909;
		minRange = 2;
		minRangeProbab = 0.3;
		midRange = 250;
		midRangeProbab = 0.7;
		maxRange = 400;
		maxRangeProbab = 0.04;
	};
	class far_optic1: Single
	{
		showToPlayer=0;
		minRange=150;
		minRangeProbab=0.1;
		midRange=500;
		midRangeProbab=0.7;
		maxRange=1000;
		maxRangeProbab=0.3;
		aiRateOfFire=5;
		aiRateOfFireDistance=700;
		requiredOpticType=1;
	};
	class medium_optic2: Single
	{
		showToPlayer=0;
		minRange=250;
		minRangeProbab=0.1;
		midRange=750;
		midRangeProbab=0.7;
		maxRange=1000;
		maxRangeProbab=0.3;
		aiRateOfFire=6;
		aiRateOfFireDistance=1000;
		requiredOpticType=2;
	};
	class far_optic2: far_optic1
	{
		minRange=500;
		minRangeProbab=0.1;
		midRange=1050;
		midRangeProbab=0.7;
		maxRange=2000;
		maxRangeProbab=0.3;
		aiRateOfFire=8;
		aiRateOfFireDistance=2000;
		requiredOpticType=2;
	};
	aiDispersionCoefY = 10;
	aiDispersionCoefX = 8;
	drySound[] = {"A3\sounds_f\weapons\Other\dry_1",0.01,1};
};

class rhs_weap_fnfal_base: Rifle_Base_F
{
	dlc = "RHS_GREF";

	magazines[] =
	{
		"rhs_mag_20Rnd_762x51_m80_fnfal"
	};
	magazineWell[] =  {CBA_762x51_FAL, CBA_762x51_FAL_L};

	UiPicture        = "\A3\weapons_f\data\UI\icon_regular_CA.paa";

	optics = 0;

	maxRecoilSway	= 0.0125;
	swayDecaySpeed	= 1.25;
	dexterity		= 1.6;
	inertia 		= 0.6;

	recoil = "rhs_recoil_fnfal";

	class GunParticles: GunParticles
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

	weaponInfoType					= "rhs_rscOptics_fnfal";
	cameraDir						= "eye_look";
	discreteDistanceCameraPoint[]	= {"eye","eye_300","eye_400","eye_500","eye_600"};
	discreteDistance[]				= {182,274,365,457,548};
	discreteDistanceInitIndex		= 0;

	class WeaponSlotsInfo: WeaponSlotsInfo
	{
		mass = 95;
		class CowsSlot {};
		class MuzzleSlot: rhs_FAL_muzzle_slot
		{
			ICON_OVERLAY_DISABLED
		};
		class PointerSlot {};
	};

	opticsZoomMin = 0.25;
	opticsZoomMax = 1.1;
	opticsZoomInit = 0.75;
	distanceZoomMin = 300;
	distanceZoomMax = 300;

	descriptionShort = "Battle Rifle<br />Caliber: 7.62x51mm";
	handAnim[] = {"OFP2_ManSkeleton","\rhsgref\addons\rhsgref_c_weapons\anims\rhs_hand_fnfal.rtm"};
	reloadAction = "RHS_GestureReloadFNFAL";

	class SAFE : RHS_SAFE_BASE {};
	muzzles[]={"this","SAFE"};

	BULLET_SOUNDS_762

	drySound[]				= {"A3\sounds_f\weapons\Other\dry_1",0.562341,1,10};
	reloadMagazineSound[]	= {"\rhsgref\addons\rhsgref_weapon_sounds\reloads\l1a1_reload",1,1,20};
	changeFiremodeSound[]	= {"A3\sounds_f\weapons\closure\firemode_changer_2", 0.56234133, 1, 20};

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
		reloadTime		= __EVAL(60/700);
		dispersion		= DISPERSION_MOA(4);
		minRange		= 2;
		minRangeProbab	= 0.5;
		midRange		= 200;
		midRangeProbab	= 0.7;
		maxRange		= 400;
		maxRangeProbab	= 0.3;
	};
	class FullAuto: Mode_FullAuto
	{
		reloadTime		= __EVAL(60/700);
		dispersion		= DISPERSION_MOA(4);
		minRange		= 0;
		minRangeProbab	= 0.9;
		midRange		= 15;
		midRangeProbab	= 0.7;
		maxRange		= 30;
		maxRangeProbab	= 0.1;
		aiRateOfFire	= 1e-006;
	};
	class Single_AI: Single
	{
		aiBurstTerminable 		= true;
		showToPlayer			= 0;
		burstRangeMax			= 3;
		minRange				= 200;
		minRangeProbab			= 0.5;
		midRange				= 300;
		midRangeProbab			= 0.7;
		maxRange				= 400;
		maxRangeProbab			= 0.3;
		aiRateOfFire			= 1;
		aiRateOfFireDispersion	= 2;
		aiRateOfFireDistance	= 300;
	};
	class single_medium_optics1: Single
	{
		requiredOpticType		= 1;
		showToPlayer			= 0;
		minRange				= 2;
		minRangeProbab			= 0.2;
		midRange				= 450;
		midRangeProbab			= 0.7;
		maxRange				= 600;
		maxRangeProbab			= 0.2;
		aiRateOfFire			= 3;
		aiRateOfFireDispersion 	= 4;
		aiRateOfFireDistance	= 600;
	};
	class single_far_optics2: single_medium_optics1
	{
		requiredOpticType		= 2;
		minRange				= 100;
		minRangeProbab			= 0.1;
		midRange				= 450;
		midRangeProbab			= 0.6;
		maxRange				= 800;
		maxRangeProbab			= 0.05;
		aiRateOfFire			= 4;
		aiRateOfFireDispersion 	= 6;
		aiRateOfFireDistance	= 800;
	};
	class fullauto_medium: FullAuto
	{
		aiBurstTerminable 		= true;
		showToPlayer			= 0;
		burst					= 3;
		burstRangeMax 			= 3;
		minRange				= 2;
		minRangeProbab			= 0.5;
		midRange				= 75;
		midRangeProbab			= 0.7;
		maxRange				= 150;
		maxRangeProbab			= 0.1;
		aiRateOfFire			= 1;
		aiRateOfFireDispersion 	= 3;
		aiRateOfFireDistance	= 200;
	};

	aiDispersionCoefY = 10;
	aiDispersionCoefX = 8;
};
class rhs_weap_fnfal50_61_base: rhs_weap_fnfal_base
{
};
class rhs_weap_fnfal50_62_base: rhs_weap_fnfal_base
{
};
class rhs_weap_fnfal50_63_base: rhs_weap_fnfal_base
{
};
class rhs_weap_fnfal50_64_base: rhs_weap_fnfal_base
{
};

class rhs_weap_l1a1_base: rhs_weap_fnfal_base
{
	displayname	= "L1A1 (Polymer)";
	model		= "\rhsgref\addons\rhsgref_weapons3\fnfal\rhs_l1a1.p3d";
	class WeaponSlotsInfo: WeaponSlotsInfo
	{
		class CowsSlot: rhs_l1a1_rifle_scopes_slot {};
	};
	class LinkedItems
	{
		class LinkedItemsMuzzle
		{
			slot = "MuzzleSlot";
			item = "rhsgref_acc_falMuzzle_l1a1";
		};
	};

	modes[] 	= {Single,Single_AI,single_medium_optics1,single_far_optics2};
	class Single: Single
	{
		reloadTime		= __EVAL(60/675);
	};
	class Single_AI: Single
	{
		aiBurstTerminable 		= true;
		showToPlayer			= 0;
		burstRangeMax			= 3;
		minRange				= 200;
		minRangeProbab			= 0.5;
		midRange				= 300;
		midRangeProbab			= 0.7;
		maxRange				= 400;
		maxRangeProbab			= 0.3;
		aiRateOfFire			= 1;
		aiRateOfFireDispersion	= 2;
		aiRateOfFireDistance	= 300;
	};
	class single_medium_optics1: Single
	{
		requiredOpticType		= 1;
		showToPlayer			= 0;
		minRange				= 2;
		minRangeProbab			= 0.2;
		midRange				= 450;
		midRangeProbab			= 0.7;
		maxRange				= 600;
		maxRangeProbab			= 0.2;
		aiRateOfFire			= 3;
		aiRateOfFireDispersion 	= 4;
		aiRateOfFireDistance	= 600;
	};
	class single_far_optics2: single_medium_optics1
	{
		requiredOpticType		= 2;
		minRange				= 100;
		minRangeProbab			= 0.1;
		midRange				= 450;
		midRangeProbab			= 0.6;
		maxRange				= 800;
		maxRangeProbab			= 0.05;
		aiRateOfFire			= 4;
		aiRateOfFireDispersion 	= 6;
		aiRateOfFireDistance	= 800;
	};
};
class rhs_weap_l1a1_wood_base: rhs_weap_l1a1_base
{
	displayname	= "L1A1 (Wood)";
	model		= "\rhsgref\addons\rhsgref_weapons3\fnfal\rhs_l1a1_wood.p3d";
};
class rhs_weap_l1a1: rhs_weap_l1a1_base
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_weap_l1a1)
	scope			= 2;
	scopeArsenal	= 2;
	baseWeapon		= rhs_weap_l1a1;
};
class rhs_weap_l1a1_wood: rhs_weap_l1a1_wood_base
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_weap_l1a1_wood)
	scope			= 2;
	scopeArsenal	= 2;
	baseWeapon		= rhs_weap_l1a1_wood;
};

// FN MAG
class rhs_weap_M249_base;
class rhs_weap_m240_base: rhs_weap_M249_base
{
	class WeaponSlotsInfo;
};
class rhs_weap_fnmag_base: rhs_weap_m240_base
{
	displayname		= "FN MAG";
	model			= "\rhsgref\addons\rhsgref_weapons3\fnmag\mag58.p3d";
	hiddenSelections[] = {"camo1","camo2","camo3"};
	hiddenSelectionsTextures[] =
	{
		"\rhsgref\addons\rhsgref_weapons3\fnmag\data\rhs_mag58_co.paa",
		"\rhsgref\addons\rhsgref_weapons3\fnmag\data\rhs_mag58_co.paa",
		"\rhsgref\addons\rhsgref_weapons3\fnmag\data\fnmag58_co.paa"
	};
	class WeaponSlotsInfo : WeaponSlotsInfo
	{
		mass		= 255.2;
	};
};
class rhs_weap_fnmag : rhs_weap_fnmag_base
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_weap_fnmag)
	scope = 2;

	hiddenSelectionsTextures[] =
	{
		"\rhsgref\addons\rhsgref_weapons3\fnmag\data\rhs_mag58_co.paa",
		"\rhsgref\addons\rhsgref_weapons3\fnmag\data\rhs_mag58_co.paa",
		"\rhsgref\addons\rhsgref_weapons3\fnmag\data\fnmag58_co.paa"
	};

	weaponInfoType	= "rhs_fnmag_handler";
	baseWeapon		= "rhs_weap_fnmag";
};
