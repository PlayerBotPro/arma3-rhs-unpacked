
#define ITEM_AKM_MASS 				69.08
#define ITEM_AKM_ZENITCO_MASS 		69.08
#define ITEM_AKMS_MASS 				72.6
#define ITEM_PM63_MASS 				82.08

#define ITEM_AK74_MASS 				81.4
#define ITEM_AK74_POLYMER_MASS 		80

#define ITEM_AKS74_MASS 			65.34
#define ITEM_AKS74_POLYMER_MASS 	64

#define ITEM_AKS74U_MASS 			59.62

#define ITEM_AK74M_MASS 			74.5
#define ITEM_AK74M_ZENITCO_MASS 	74.5
#define ITEM_AK74M_UUK_MASS 		70

#define ITEM_AK105_MASS 			57.2
#define ITEM_AK105_ZENITCO_MASS 	57.2

#define ITEM_DOVETAIL_MASS 			1
#define ITEM_NPZ_MASS 				8.8
#define ITEM_B33_MASS 				4
#define ITEM_GP25_MASS 				33
#define ITEM_FOLDED_MODIFIER 		0.75

#define ITEM_ASVAL_MASS 			55
#define ITEM_VSS_MASS 				57.2

#define ITEM_SVD_MASS 				77
#define ITEM_SVDM_MASS 				81.62
#define ITEM_SVDS_MASS 				85.58

class Rifle;
class Rifle_Base_F : Rifle {
	class WeaponSlotsInfo;
	class GunParticles;
	class Eventhandlers;
};
class UGL_F;
class RHS_SAFE_BASE: Rifle_Base_F
{
	showToPlayer				= 0;
	magazines[]					= {};
	displayName					= "SAFE";
	descriptionShort			= "SAFE";
	modes[]						= {"Safe"};
	discreteDistance[]			= {0};
	discreteDistanceInitIndex	= 0;
	drySound[]					= {"A3\Sounds_F\arsenal\weapons\Rifles\MX\dry_Mx",0.562341,1,10};
	changeFiremodeSound[]		= {"A3\sounds_f\weapons\closure\firemode_changer_2",0.551189,1,5};
	class Safe: Mode_SemiAuto
	{
		sounds[]					= {};
		displayName					= "SAFE";
		descriptionShort			= "SAFE";
		showToPlayer				= 0;
		minRange					= 0;
		minRangeProbab				= 0.001;
		midRange					= 0.001;
		midRangeProbab				= 0.001;
		maxRange					= 0.001;
		maxRangeProbab				= 0.001;
	};
};
class RHS_FOLD_BASE: Rifle_Base_F
{
	showToPlayer				= 0;
	magazines[] 				= {"rhs_mag_fold_stock"};
	displayName					= "Action in progress...";
	descriptionShort			= "Action in progress...";
	modes[]						= {"Safe"};
	discreteDistance[]			= {0};
	discreteDistanceInitIndex	= 0;
	drySound[]					= {"A3\Sounds_F\arsenal\weapons\Rifles\MX\dry_Mx",0.562341,1,10};
	changeFiremodeSound[]		= {"A3\sounds_f\weapons\closure\firemode_changer_2",0.551189,1,5};
	reloadTime			= 2.5;
	magazineReloadTime	= 2.5;
	class Safe: Mode_SemiAuto
	{
		reloadTime = 2.5;
		sounds[]					= {};
		displayName					= "FOLDING STOCK";
		descriptionShort			= "FOLDING STOCK";
		showToPlayer				= 0;
		minRange					= 0;
		minRangeProbab				= 0.001;
		midRange					= 0.001;
		midRangeProbab				= 0.001;
		maxRange					= 0.001;
		maxRangeProbab				= 0.001;
	};
};
class RHS_DUMMYMUZZLE_BASE: RHS_FOLD_BASE
{
	magazines[] 				= {};
};

class GP25_Base: UGL_F
{
	displayName = "$STR_RHS_GP25_NAME";
	descriptionShort = "Grenade launcher<br/>Caliber: 40mm";
	useModelOptics = 0;
	useExternalOptic = 0;
	reloadaction = "RHS_GestureReloadGP30";
	reloadMagazineSound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\MX\Mx_UGL_reload", 1, 1, 10};

	magazines[] =
	{
		"rhs_VOG25",
		"rhs_VOG25p",
		"rhs_vg40tb",
		"rhs_vg40sz",
		"rhs_vg40op_white",
		"rhs_vg40op_green",
		"rhs_vg40op_red",
		"rhs_GRD40_white",
		"rhs_GRD40_green",
		"rhs_GRD40_red",
		"rhs_VG40MD_White",
		"rhs_VG40MD_Green",
		"rhs_VG40MD_Red",
		"rhs_GDM40"
	};
	magazineWell[] =
	{
		VOG_40mm,
		CBA_40mm_GP
	};
	modes[] = {"Single"};
	recoil = "rhs_recoil_gp25";
	class Single: Mode_SemiAuto
	{
		sounds[] = {"StandardSound"};
		minRange = 30;
		minRangeProbab = 0.1;
		midRange = 200;
		midRangeProbab = 0.7;
		maxRange = 400;
		maxRangeProbab = 0.05;
	};
	cameraDir = "OP_look";
	//0.125
	discreteDistance[] = {50,100,150,200,250,300,350,400};
	discreteDistanceCameraPoint[] = {"OP_eye","OP_eye1","OP_eye2","OP_eye3","OP_eye4","OP_eye5","OP_eye6","OP_eye7"};
	discreteDistanceInitIndex = 2;
	magazineReloadSwitchPhase = 0.36;
};

class rhs_weap_ak74m_Base_F: Rifle_Base_F
{
	dlc = "RHS_AFRF";
	magazines[] =
	{
		rhs_30Rnd_545x39_7N10_AK,
		rhs_30Rnd_545x39_7N10_plum_AK,
		rhs_30Rnd_545x39_7N10_desert_AK,
		rhs_30Rnd_545x39_7N10_camo_AK
	};
	magazineWell[] =
	{
		AK_545x39,
		CBA_545x39_AK,
		CBA_545x39_RPK
	};

	// TODO: Librbary description required
	class Library
	{
		libTextDesc = "";
	};
	optics = 0;

	reloadAction = "RHS_GestureReloadAK_1hand";
	magazineReloadSwitchPhase = 0.3;
	maxRecoilSway = 0.0125;
	swayDecaySpeed = 1.25;
	recoil = "rhs_recoil_ak74m";
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

	weaponInfoType = "RscWeaponZeroing";
	discreteDistance[] = {440,100,200,300,400,500,600,700,800,900,1000};
	discreteDistanceInitIndex = 0;

	class WeaponSlotsInfo: WeaponSlotsInfo
	{
		class MuzzleSlot: rhs_russian_ak74_muzzle_slot {};
		class CowsSlot: rhs_russian_rifle_scopes_slot{};
		class rhs_npz_slot: SlotInfo { compatibleItems[] = {"rhs_acc_npz"};};
		class PointerSlot : rhs_russian_ak_barrel_slot {};
	};

	opticsZoomMin = 0.25;
	opticsZoomMax = 1.1;
	opticsZoomInit = 0.75;
	distanceZoomMin = 300;
	distanceZoomMax = 300;

	descriptionShort = $STR_RHS_CFGWEAPONS_RIFLE_AK74M1;
	handAnim[] = {"OFP2_ManSkeleton","\A3\Weapons_F\Rifles\MX\data\Anim\mx.rtm"};
	dexterity = 1.8;

	class SAFE: RHS_SAFE_BASE {};
	class FOLD: RHS_FOLD_BASE {};
	muzzles[]={"this","SAFE","FOLD"};
	modes[] = {"Single","Single_AI","FullAuto","single_medium_optics1","single_far_optics2","fullauto_medium"};

	BULLET_SOUNDS_762
	changeFiremodeSound[]=
	{
		"A3\sounds_f\weapons\closure\firemode_changer_2",
		0.56234133,
		1,
		20
	};

	class Single: Mode_SemiAuto
	{
		aiBurstTerminable	= 1;
		reloadTime			= 0.0923;
		dispersion			= 0.00093;
		minRange			= 2;
		minRangeProbab		= 0.3;
		midRange			= 100;
		midRangeProbab		= 0.7;
		maxRange			= 250;
		maxRangeProbab		= 0.04;
	};
	class Single_AI: Single
	{
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
	class FullAuto: Mode_FullAuto
	{
		aiBurstTerminable	= 1;
		reloadTime			= 0.0923;
		dispersion			= 0.00093;
		minRange			= 0;
		minRangeProbab		= 0.9;
		midRange			= 15;
		midRangeProbab		= 0.7;
		maxRange			= 30;
		maxRangeProbab		= 0.1;
		aiRateOfFire		= 1e-006;
	};
	class single_medium_optics1: Single
	{
		requiredOpticType		= 1;
		showToPlayer			= 0;
		minRange				= 2;
		minRangeProbab			= 0.2;
		midRange				= 550;
		midRangeProbab			= 0.7;
		maxRange				= 700;
		maxRangeProbab			= 0.1;
		aiRateOfFire			= 3;
		aiRateOfFireDistance	= 600;
		aiRateOfFireDispersion	= 3;
	};
	class single_far_optics2: single_medium_optics1
	{
		requiredOpticType = 2;
	};
	class fullauto_medium: FullAuto
	{
		showToPlayer			= 0;
		burst					= 2;
		burstRangeMax			= 5;
		minRange				= 2;
		minRangeProbab			= 0.5;
		midRange				= 75;
		midRangeProbab			= 0.7;
		maxRange				= 150;
		maxRangeProbab			= 0.05;
		aiRateOfFire			= 1.0;
		aiRateOfFireDispersion	= 2;
	};
	class GP25Muzzle: GP25_Base {};

	aiDispersionCoefY = 10;
	aiDispersionCoefX = 8;

	drySound[] = {"A3\sounds_f\weapons\Other\dry_1",0.562341,1,10};
	reloadMagazineSound[] = {"A3\Sounds_F\weapons\Khaybar\reload_khaibar",1,1,10};

	hiddenSelections[] = {"body","newfront","zenit1","zenit2","zenit3"};
	hiddenSelectionsTextures[] =
	{
		"rhsafrf\addons\rhs_weapons\texture\ak74m_co.paa",
		"rhsafrf\addons\rhs_weapons\texture\ak105_barrel_co.paa",
		"rhsafrf\addons\rhs_weapons3\zenitco\data\rhs_zenitko_01_co.paa",
		"rhsafrf\addons\rhs_weapons3\zenitco\data\rhs_zenitko_02_co.paa",
		"rhsafrf\addons\rhs_weapons3\zenitco\data\rhs_b33_co.paa"
	};
};
class rhs_weap_ak74m : rhs_weap_ak74m_Base_F
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_weap_ak74m)
	scope = 2;
	baseWeapon="rhs_weap_ak74m";

	dexterity = 1.6;

	discreteDistance[] = {440,100,200,300,400,500,600,700,800,900,1000};
	discreteDistanceCameraPoint[] = {"eye","eye_100","eye_200","eye_300","eye_400","eye_500","eye_600","eye_700","eye_800","eye_900","eye_1000"};
	cameraDir="eye_look";

	//opticsZoomMin = 0.025;

	weaponInfoType = "rhs_rscOptics_ak74m";

	displayName = $STR_RHS_CFGWEAPONS_RIFLE_AK74M0;

	model = "\rhsafrf\addons\rhs_weapons\rhs_ak74m";



	UiPicture = "\A3\weapons_f\data\UI\icon_regular_CA.paa";
	handAnim[] = {"OFP2_ManSkeleton","\rhsafrf\addons\rhs_c_weapons\anims\rhs_hand_ak_stock.rtm"};

	//modes[] = {"this"};
	rhs_pkas_type		= "rhs_acc_pkas";
	rhs_1p29_type		= "rhs_acc_1p29";
	rhs_pso1m2_type		= "rhs_acc_pso1m2_ak";
	rhs_pso1m21_type	= "rhs_acc_pso1m21_ak";
	rhs_pgo7v_type		= "rhs_acc_pgo7v_ak";
	rhs_pgo7v2_type		= "rhs_acc_pgo7v2_ak";
	rhs_pgo7v3_type		= "rhs_acc_pgo7v3_ak";
	rhs_fold			= "rhs_weap_ak74m_folded";
	rhs_fold_anim		= "RHS_GestureFoldAK74M";
	rhs_fold_sound[] 	= {"rhsafrf\addons\rhs_c_weapons\sounds\stock_folding.wss", 1.42, 1, 20};
	rhs_npz				= "rhs_weap_ak74m_npz";


	class WeaponSlotsInfo: WeaponSlotsInfo
	{
		mass = __EVAL(ITEM_AK74M_MASS);
	};

	class ItemInfo
	{
		priority = 1;
		RMBhint = "AK-74M";
		onHoverText = "AK-74M";
	};

	class LinkedItems
	{
		class LinkedItemsMuzzle
		{
			slot = "MuzzleSlot";
			item = "rhs_acc_dtk";
		};
	};
};

#define MAC_TEX_CAMO hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_weapons\texture\AK74MCamo_co.paa"};\
	magazines[] =\
	{\
		rhs_30Rnd_545x39_7N22_camo_AK,\
		rhs_30Rnd_545x39_7N22_AK,\
		rhs_30Rnd_545x39_7N22_plum_AK,\
		rhs_30Rnd_545x39_7N22_desert_AK\
	};\
	AUTHOR_MACRO

class rhs_weap_ak74m_camo : rhs_weap_ak74m
{
	MAC_TEX_CAMO

	INVENTORY_PICTURE(rhs_weap_ak74m_camo)
	weaponInfoType = "rhs_rscOptics_ak74m_camo";
	displayName = $STR_RHS_CFGWEAPONS_RIFLE_AK74M_CAMO0;

	rhs_fold="rhs_weap_ak74m_camo_folded";
	rhs_npz="rhs_weap_ak74m_camo_npz";
	baseWeapon="rhs_weap_ak74m_camo";
};

class rhs_weap_ak74m_npz : rhs_weap_ak74m
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_weap_ak74m_npz)
	displayName = $STR_RHS_CFGWEAPONS_RIFLE_AK74M_NPZ0;
	descriptionShort = $STR_RHS_CFGWEAPONS_RIFLE_AK74M1;

	baseWeapon="rhs_weap_ak74m_npz";
	model = "\rhsafrf\addons\rhs_weapons\rhs_ak74m_npz";
	weaponInfoType = "rhs_rscOptics_ak74m_npz";

	class WeaponSlotsInfo: WeaponSlotsInfo
	{
		mass = __EVAL(ITEM_AK74M_MASS + ITEM_NPZ_MASS);
		class MuzzleSlot: MuzzleSlot {};
		class CowsSlot: rhs_picattinny_russian_rifle_scopes_slot {};
		class PointerSlot : rhs_russian_ak_barrel_slot {};
		class rhs_npz_slot {};
	};
	rhs_npz="rhs_weap_ak74m";
};

#define MAC_TEX_DESERT hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_weapons\texture\AK74MPaint_co.paa"};\
	magazines[] =\
	{\
		rhs_30Rnd_545x39_7N22_desert_AK,\
		rhs_30Rnd_545x39_7N22_AK,\
		rhs_30Rnd_545x39_7N22_plum_AK,\
		rhs_30Rnd_545x39_7N22_camo_AK\
	};\
	AUTHOR_MACRO

class rhs_weap_ak74m_desert_npz : rhs_weap_ak74m_npz
{
	MAC_TEX_DESERT
	INVENTORY_PICTURE(rhs_weap_ak74m_desert_npz)
	displayName		= $STR_RHS_CFGWEAPONS_RIFLE_AK74M_DESERT0_NPZ0;
	rhs_npz			= "rhs_weap_ak74m_desert";
	weaponInfoType	= "rhs_rscOptics_ak74m_desert_npz";
	baseWeapon		= "rhs_weap_ak74m_desert_npz";
};

class rhs_weap_ak74m_camo_npz : rhs_weap_ak74m_npz
{
	MAC_TEX_CAMO
	INVENTORY_PICTURE(rhs_weap_ak74m_camo_npz)
	displayName		= $STR_RHS_CFGWEAPONS_RIFLE_AK74M_CAMO0_NPZ0;
	rhs_npz			= "rhs_weap_ak74m_camo";
	weaponInfoType	= "rhs_rscOptics_ak74m_camo_npz";
	baseWeapon		= "rhs_weap_ak74m_camo_npz";
};

class rhs_weap_ak74m_folded : rhs_weap_ak74m
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_weap_ak74m_folded)
	displayName = $STR_RHS_CFGWEAPONS_RIFLE_AK74M_FOLD0;

	model = "\rhsafrf\addons\rhs_weapons\rhs_ak74m_folded";
	//moved by 0.1 in X axis
	handAnim[] = {"OFP2_ManSkeleton","\rhsafrf\addons\rhs_c_weapons\anims\rhs_hand_ak_stock_fold.rtm"};
	recoil = "rhs_recoil_ak74m_folded";
	scopeArsenal=0;
	scope=1;

	class WeaponSlotsInfo: WeaponSlotsInfo
	{
		mass = __EVAL((ITEM_AK74M_MASS)*ITEM_FOLDED_MODIFIER);
		class MuzzleSlot: MuzzleSlot {};
		class CowsSlot {};
		class PointerSlot: rhs_russian_ak_barrel_slot{};
		class rhs_npz_slot {};
	};

	inertia = 0.7;
	rhs_fold		= "rhs_weap_ak74m";
	rhs_fold_anim	= "RHS_GestureUnfoldAK74M";
	baseWeapon		= "rhs_weap_ak74m_folded";
};

class rhs_weap_ak74m_camo_folded : rhs_weap_ak74m_folded
{
	MAC_TEX_CAMO

	weaponInfoType = "rhs_rscOptics_ak74m_camo";
	displayName = $STR_RHS_CFGWEAPONS_RIFLE_AK74M_FOLD0;

	rhs_fold="rhs_weap_ak74m_camo";
	baseWeapon="rhs_weap_ak74m_camo_folded";
};

class rhs_weap_ak74m_desert_folded : rhs_weap_ak74m_folded
{
	MAC_TEX_DESERT

	weaponInfoType = "rhs_rscOptics_ak74m_desert";
	displayName = $STR_RHS_CFGWEAPONS_RIFLE_AK74M_FOLD0;
	rhs_fold="rhs_weap_ak74m_desert";
	baseWeapon="rhs_weap_ak74m_desert_folded";
};

class rhs_weap_ak74m_plummag_folded : rhs_weap_ak74m_folded
{
	AUTHOR_MACRO
	scope = 1;
	scopeArsenal = 1;
	weaponInfoType = "rhs_rscOptics_ak74m_plummag";
	displayName = $STR_RHS_CFGWEAPONS_RIFLE_AK74M_FOLD0;
	hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_weapons\texture\ak74m_plum_co.paa"};
	rhs_fold="rhs_weap_ak74m_plummag";
	baseWeapon="rhs_weap_ak74m_folded";
};

class rhs_weap_ak74m_gp25_folded : rhs_weap_ak74m_folded
{
	AUTHOR_MACRO
	displayName = $STR_RHS_CFGWEAPONS_RIFLE_AK74M_GP250;

	//need folded model
	model = "\rhsafrf\addons\rhs_weapons\rhs_ak74m_gp25";

	handAnim[] = {"OFP2_ManSkeleton","\rhsafrf\addons\rhs_c_weapons\anims\rhs_hand_ak_gp.rtm"};
	muzzles[] = {"this","GP25Muzzle","SAFE"};

	class WeaponSlotsInfo: WeaponSlotsInfo
	{
		mass = __EVAL((ITEM_AK74M_MASS + ITEM_GP25_MASS)*ITEM_FOLDED_MODIFIER);
		class PointerSlot {};
	};
};

class rhs_weap_ak74m_2mag : rhs_weap_ak74m
{
	AUTHOR_MACRO
	scope = 1;
	INVENTORY_PICTURE(rhs_weap_ak74m_2mag)
	weaponInfoType = "rhs_rscOptics_ak74m_2mag";
	displayName = $STR_RHS_CFGWEAPONS_RIFLE_AK74M_2MAG0;

	model = "\rhsafrf\addons\rhs_weapons\rhs_ak74m_2mag";
	handAnim[] = {"OFP2_ManSkeleton","\rhsafrf\addons\rhs_c_weapons\anims\rhs_hand_ak_stock.rtm"};

	rhs_npz="rhs_weap_ak74m_2mag_npz";
	baseWeapon="rhs_weap_ak74m_2mag";
};

class rhs_weap_ak74m_2mag_npz : rhs_weap_ak74m_2mag
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_weap_ak74m_2mag_npz)
	displayName = $STR_RHS_CFGWEAPONS_RIFLE_AK74M_2MAG0_NPZ0;

	model = "\rhsafrf\addons\rhs_weapons\rhs_ak74m_2mag_npz";

	class WeaponSlotsInfo: WeaponSlotsInfo
	{
		class MuzzleSlot: MuzzleSlot {};
		class CowsSlot: rhs_picattinny_russian_rifle_scopes_slot {};
		class PointerSlot : rhs_russian_ak_barrel_slot {};
		class rhs_npz_slot {};
	};
	rhs_npz="rhs_weap_ak74m_2mag";
	weaponInfoType = "rhs_rscOptics_ak74m_2mag_npz";
	baseWeapon="rhs_weap_ak74m_2mag_npz";
};

class rhs_weap_ak74m_2mag_camo_npz : rhs_weap_ak74m_2mag_npz
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_weap_ak74m_2mag_camo_npz)
	displayName = $STR_RHS_CFGWEAPONS_RIFLE_AK74M_2MAG0_CAMO0_NPZ0;

	rhs_npz="rhs_weap_ak74m_2mag_camo";
	weaponInfoType = "rhs_rscOptics_ak74m_2mag_camo_npz";
	hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_weapons\texture\AK74MCamo_co.paa"};

};

class rhs_weap_ak74m_2mag_camo : rhs_weap_ak74m_2mag
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_weap_ak74m_2mag_camo)
	displayName = $STR_RHS_WEAP_AK74M_2MAGCAMO;

	hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_weapons\texture\AK74MCamo_co.paa"};
	rhs_npz="rhs_weap_ak74m_2mag_camo_npz";
	baseWeapon="rhs_weap_ak74m_2mag_camo";
};

class rhs_weap_ak74m_desert : rhs_weap_ak74m
{
	MAC_TEX_DESERT

	INVENTORY_PICTURE(rhs_weap_ak74m_desert)
	weaponInfoType = "rhs_rscOptics_ak74m_desert";
	displayName = $STR_RHS_CFGWEAPONS_RIFLE_AK74M_DESERT0;

	rhs_fold="rhs_weap_ak74m_desert_folded";
	rhs_npz="rhs_weap_ak74m_desert_npz";
	baseWeapon="rhs_weap_ak74m_desert";
};

class rhs_weap_ak74m_plummag : rhs_weap_ak74m
{
	AUTHOR_MACRO
	scope = 1;
	INVENTORY_PICTURE(rhs_weap_ak74m_plummag)
	weaponInfoType = "rhs_rscOptics_ak74m_plummag";
	displayName = $STR_RHS_CFGWEAPONS_RIFLE_AK74M_PMAG0;

	hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_weapons\texture\ak74m_plum_co.paa"};
	rhs_fold	="rhs_weap_ak74m_plummag_folded";
	rhs_npz		="rhs_weap_ak74m_plummag_npz";
	baseWeapon	="rhs_weap_ak74m";
};

class rhs_weap_ak74m_plummag_npz : rhs_weap_ak74m_npz
{
	AUTHOR_MACRO
	scope = 1;
	INVENTORY_PICTURE(rhs_weap_ak74m_plummag_npz)
	displayName = $STR_RHS_CFGWEAPONS_RIFLE_AK74M_PMAG0_NPZ0;
	hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_weapons\texture\ak74m_plum_co.paa"};
	weaponInfoType	= "rhs_rscOptics_ak74m_plummag_npz";
	rhs_npz			= "rhs_weap_ak74m_plummag";
	baseWeapon		= "rhs_weap_ak74m_npz";
};

class rhs_weap_ak74m_gp25 : rhs_weap_ak74m
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_weap_ak74m_gp25)
	weaponInfoType = "rhs_rscOptics_ak74m_gp25";
	displayName = $STR_RHS_CFGWEAPONS_RIFLE_AK74M_GP250;

	model = "\rhsafrf\addons\rhs_weapons\rhs_ak74m_gp25";

	handAnim[] = {"OFP2_ManSkeleton","\rhsafrf\addons\rhs_c_weapons\anims\rhs_hand_ak_gp.rtm"};
	muzzles[] = {"this","GP25Muzzle","SAFE"};

	class WeaponSlotsInfo: WeaponSlotsInfo
	{
		mass = __EVAL((ITEM_AK74M_MASS + ITEM_GP25_MASS));
		class PointerSlot {};
	};
	inertia = 0.6;
	dexterity = 1.4;
	baseWeapon="rhs_weap_ak74m_gp25";
	rhs_npz="rhs_weap_ak74m_gp25_npz";

};

class rhs_weap_ak74m_gp25_npz : rhs_weap_ak74m_gp25
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_weap_ak74m_gp25_npz)
	displayName = $STR_RHS_CFGWEAPONS_RIFLE_AK74M_GP250_NPZ0;

	model = "\rhsafrf\addons\rhs_weapons\rhs_ak74m_gp25_npz";

	class WeaponSlotsInfo: WeaponSlotsInfo
	{
		mass = __EVAL(ITEM_AK74M_MASS + ITEM_GP25_MASS + ITEM_NPZ_MASS);
		class MuzzleSlot: MuzzleSlot {};
		class CowsSlot: rhs_picattinny_russian_rifle_scopes_slot {};
		class PointerSlot {};
		class rhs_npz_slot {};
	};
	rhs_npz="rhs_weap_ak74m_gp25";
	weaponInfoType = "rhs_rscOptics_ak74m_gp25_npz";
	baseWeapon="rhs_weap_ak74m_gp25_npz";
};

//- Full Plum AKs
#define MAC_TEX_FULLPLUM hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_weapons\texture\rhs_ak74_new_co.paa"};\
	magazines[] =\
	{\
		rhs_30Rnd_545x39_7N10_plum_AK,\
		rhs_30Rnd_545x39_7N10_AK,\
		rhs_30Rnd_545x39_7N10_desert_AK,\
		rhs_30Rnd_545x39_7N10_camo_AK\
	};\
	AUTHOR_MACRO

// Full Plum AK74M
class rhs_weap_ak74m_fullplum : rhs_weap_ak74m
{
	MAC_TEX_FULLPLUM
	displayName = $STR_RHS_CFGWEAPONS_RIFLE_AK74M0_PLUM0;
	rhs_fold	= "rhs_weap_ak74m_fullplum_folded";
	rhs_npz		= "rhs_weap_ak74m_fullplum_npz";
	baseWeapon	= "rhs_weap_ak74m_fullplum";
};

class rhs_weap_ak74m_fullplum_npz : rhs_weap_ak74m_npz
{
	MAC_TEX_FULLPLUM
	displayName	= $STR_RHS_CFGWEAPONS_RIFLE_AK74M_PLUM_NPZ0;
	rhs_npz		= "rhs_weap_ak74m_fullplum";
	baseWeapon	= "rhs_weap_ak74m_fullplum_npz";
};

class rhs_weap_ak74m_fullplum_folded : rhs_weap_ak74m_folded
{
	MAC_TEX_FULLPLUM
	displayName		= $STR_RHS_CFGWEAPONS_RIFLE_AK74M_FOLD0;
	rhs_fold		= "rhs_weap_ak74m_fullplum";
	rhs_fold_anim	= "RHS_GestureUnfoldAK74M";
	baseWeapon		= "rhs_weap_ak74m_fullplum_folded";
};

// Full Plum AK74 w/ GP-25
class rhs_weap_ak74m_fullplum_gp25 : rhs_weap_ak74m_gp25
{
	MAC_TEX_FULLPLUM
	displayName = $STR_RHS_WEAP_AK74M_PLUM0_GP25;
	baseWeapon	= "rhs_weap_ak74m_fullplum_gp25";
	rhs_npz		= "rhs_weap_ak74m_fullplum_gp25_npz";
	rhs_fold	= "rhs_weap_ak74m_fullplum_gp25_folded";
};

class rhs_weap_ak74m_fullplum_gp25_npz : rhs_weap_ak74m_gp25_npz
{
	MAC_TEX_FULLPLUM
	displayName	= $STR_RHS_WEAP_AK74M_PLUM0_GP25_NPZ0;
	rhs_npz		= "rhs_weap_ak74m_fullplum_gp25";
	baseWeapon	= "rhs_weap_ak74m_fullplum_gp25_npz";
};

class rhs_weap_ak74m_fullplum_gp25_folded : rhs_weap_ak74m_gp25_folded
{
	MAC_TEX_FULLPLUM
	displayName	= $STR_RHS_CFGWEAPONS_RIFLE_AK74M_GP250;
	rhs_fold	= "rhs_weap_ak74m_fullplum_gp25";
};

class rhs_weap_ak74m_zenitco01 : rhs_weap_ak74m
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_weap_ak74m_zenitco01)
	displayName = "$STR_RHS_WEAP_AK74M_ZENIT";
	model = "\rhsafrf\addons\rhs_weapons3\zenitco\rhs_ak74m_zenit";

	magazines[] =
	{
		rhs_30Rnd_545x39_7N22_AK,
		rhs_30Rnd_545x39_7N22_plum_AK,
		rhs_30Rnd_545x39_7N22_desert_AK,
		rhs_30Rnd_545x39_7N22_camo_AK
	};

	// mag grip anim
	handAnim[] = {"OFP2_ManSkeleton","\rhsafrf\addons\rhs_c_weapons\anims\rhs_hand_akmr.rtm"};

	weaponInfoType = "rhs_rscOptics_ak74m_zenitco01";

	class WeaponSlotsInfo
	{
		mass = __EVAL(ITEM_AK74M_ZENITCO_MASS);
		allowedSlots[] = {901};
		class MuzzleSlot: rhs_russian_ak74_muzzle_slot {};
		class CowsSlot: rhs_russian_rifle_scopes_slot_npz {};
		class GripodSlot: rhs_russian_rifle_gripod_slot {};
		class PointerSlot : rhs_russian_ris_handguard_slot {};
		class AuxPointerSlot : rhs_russian_aux_barrel_slot {};
	};

	rhs_fold="";
	rhs_npz="rhs_weap_ak74m_zenitco01_npz";

	rhs_grip1_change = "rhs_weap_ak74m_zenitco01_grip1";
	rhs_grip2_change = "rhs_weap_ak74m_zenitco01_afg";
	rhs_grip3_change = "rhs_weap_ak74m_zenitco01_grip1";
	rhsusf_acc_anpeq15 = 1;
	rhsusf_acc_t1 = 1;

	baseWeapon="rhs_weap_ak74m_zenitco01";
};

class rhs_weap_ak74m_zenitco01_grip1 : rhs_weap_ak74m_zenitco01
{
	handAnim[] = {"OFP2_ManSkeleton","\rhsafrf\addons\rhs_c_weapons\anims\rhs_hand_akmr_grip.rtm"};
};

class rhs_weap_ak74m_zenitco01_afg : rhs_weap_ak74m_zenitco01
{
	handAnim[] = {"OFP2_ManSkeleton","\rhsafrf\addons\rhs_c_weapons\anims\rhs_hand_akmr_afg.rtm"};
};

class rhs_weap_ak74m_zenitco01_npz : rhs_weap_ak74m_zenitco01
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_weap_ak74m_zenitco01_npz)
	displayName = "$STR_RHS_WEAP_AK74M_ZENIT_NPZ";
	scopeArsenal=0;
	model = "\rhsafrf\addons\rhs_weapons3\zenitco\rhs_ak74m_zenit_npz";
	class WeaponSlotsInfo: WeaponSlotsInfo
	{
		mass = __EVAL(ITEM_AK74M_ZENITCO_MASS + ITEM_NPZ_MASS);
		class CowsSlot: rhs_picattinny_russian_rifle_scopes_slot {};
	};

	rhs_npz="rhs_weap_ak74m_zenitco01";
	weaponInfoType = "rhs_rscOptics_ak74m_zenitco01_npz";
	baseWeapon="rhs_weap_ak74m_zenitco01_npz";

	rhs_grip1_change = "rhs_weap_ak74m_zenitco01_npz_grip1";
	rhs_grip2_change = "rhs_weap_ak74m_zenitco01_npz_afg";
	rhs_grip3_change = "rhs_weap_ak74m_zenitco01_npz_grip1";
	rhsusf_acc_anpeq15 = 1;
};

class rhs_weap_ak74m_zenitco01_npz_grip1 : rhs_weap_ak74m_zenitco01_npz
{
	handAnim[] = {"OFP2_ManSkeleton","\rhsafrf\addons\rhs_c_weapons\anims\rhs_hand_akmr_grip.rtm"};
};

class rhs_weap_ak74m_zenitco01_npz_afg : rhs_weap_ak74m_zenitco01_npz
{
	handAnim[] = {"OFP2_ManSkeleton","\rhsafrf\addons\rhs_c_weapons\anims\rhs_hand_akmr_afg.rtm"};
};

class rhs_weap_ak74m_zenitco01_b33 : rhs_weap_ak74m_zenitco01
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_weap_ak74m_zenitco01_b33)
	displayName	= "$STR_RHS_WEAP_AK74M_ZENIT_B33";
	model		= "\rhsafrf\addons\rhs_weapons3\zenitco\rhs_ak74m_zenit_b33";
	class WeaponSlotsInfo
	{
		mass = __EVAL(ITEM_AK74M_ZENITCO_MASS + ITEM_B33_MASS);
		allowedSlots[] = {901};
		class MuzzleSlot: rhs_russian_ak74_muzzle_slot {};
		class CowsSlot: rhs_picattinny_russian_rifle_scopes_slot_long {};
		class GripodSlot: rhs_russian_rifle_gripod_slot {};
		class PointerSlot : rhs_russian_ris_handguard_slot {};
		class AuxPointerSlot : rhs_russian_aux_barrel_slot {};
	};

	rhs_npz="";
	weaponInfoType = "rhs_rscOptics_ak74m_zenitco01_b33";
	baseWeapon="rhs_weap_ak74m_zenitco01_b33";

	rhs_grip1_change = "rhs_weap_ak74m_zenitco01_b33_grip1";
	rhs_grip2_change = "rhs_weap_ak74m_zenitco01_b33_afg";
	rhs_grip3_change = "rhs_weap_ak74m_zenitco01_b33_grip1";
	rhsusf_acc_anpeq15 = 1;
	rhsusf_acc_t1 = 0;
};

class rhs_weap_ak74m_zenitco01_b33_grip1 : rhs_weap_ak74m_zenitco01_b33
{
	handAnim[] = {"OFP2_ManSkeleton","\rhsafrf\addons\rhs_c_weapons\anims\rhs_hand_akmr_grip.rtm"};
};

class rhs_weap_ak74m_zenitco01_b33_afg : rhs_weap_ak74m_zenitco01_b33
{
	handAnim[] = {"OFP2_ManSkeleton","\rhsafrf\addons\rhs_c_weapons\anims\rhs_hand_akmr_afg.rtm"};
};

class rhs_weap_ak74mr : rhs_weap_ak74m
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_weap_ak74mr)
	displayName = "$STR_RHS_CFGWEAPONS_RIFLE_AK74MR";
	model = "\rhsafrf\addons\rhs_weapons3\ak74mr\rhs_ak74mr";
	handAnim[] = {"OFP2_ManSkeleton","\rhsafrf\addons\rhs_c_weapons\anims\rhs_hand_akmr.rtm"};


	weaponInfoType = "rhs_rscOptics_ak74mr";
	discreteDistance[] = {100,500};
	discreteDistanceInitIndex = 0;
	discreteDistanceCameraPoint[] = {"eye_100","eye_500"};
	cameraDir="eye_look";

	class WeaponSlotsInfo
	{
		mass = __EVAL(ITEM_AK74M_UUK_MASS);
		allowedSlots[] = {901};
		class MuzzleSlot: rhs_russian_ak74_muzzle_slot {};
		class CowsSlot: rhs_picattinny_russian_rifle_scopes_slot_long {};
		class GripodSlot: rhs_russian_rifle_gripod_slot {};
		class PointerSlot : rhs_russian_ris_handguard_slot {};
		class AuxPointerSlot : rhs_russian_aux_barrel_slot {};
	};

	class LinkedItems
	{
		class LinkedItemsMuzzle
		{
			slot = "MuzzleSlot";
			item = "rhs_acc_uuk";
		};
	};

	rhs_fold			="rhs_weap_ak74mr_folded";
	rhs_fold_checkOptic	= 0;
	rhs_npz				= "";
	rhs_grip1_change	= "rhs_weap_ak74mr_grip1";
	rhs_grip2_change	= "rhs_weap_ak74mr_afg";
	rhs_grip3_change	= "rhs_weap_ak74mr_grip1";
	rhsusf_acc_anpeq15	= 0;
	rhsusf_acc_t1		= 0;

	baseWeapon="rhs_weap_ak74mr";
};

class rhs_weap_ak74mr_grip1 : rhs_weap_ak74mr
{
	handAnim[] = {"OFP2_ManSkeleton","\rhsafrf\addons\rhs_c_weapons\anims\rhs_hand_akmr_grip.rtm"};
};

class rhs_weap_ak74mr_afg : rhs_weap_ak74mr
{
	handAnim[] = {"OFP2_ManSkeleton","\rhsafrf\addons\rhs_c_weapons\anims\rhs_hand_akmr_afg.rtm"};
};

class rhs_weap_ak74mr_folded : rhs_weap_ak74mr
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_weap_ak74mr_folded)
	displayName = "$STR_RHS_CFGWEAPONS_RIFLE_AK74MR_FOLD";
	scopeArsenal=0;
	scope=1;


	model = "\rhsafrf\addons\rhs_weapons3\ak74mr\rhs_ak74mr_folded";

	handAnim[] = {"OFP2_ManSkeleton","\rhsafrf\addons\rhs_c_weapons\anims\rhs_hand_akmr_stock.rtm"};
	recoil = "rhs_recoil_ak74m_folded";
	inertia = 0.7;

	rhs_fold="rhs_weap_ak74mr";
	rhs_grip1_change = "rhs_weap_ak74mr_folded_grip1";
	rhs_grip2_change = "rhs_weap_ak74mr_folded_afg";
	rhs_grip3_change = "rhs_weap_ak74mr_folded_grip1";
	rhsusf_acc_anpeq15 = 0;

	baseWeapon="rhs_weap_ak74mr_folded";
	class WeaponSlotsInfo: WeaponSlotsInfo
	{
		mass = __EVAL((ITEM_AK74M_UUK_MASS)*ITEM_FOLDED_MODIFIER);
	};
};

class rhs_weap_ak74mr_folded_grip1 : rhs_weap_ak74mr_folded
{
	handAnim[] = {"OFP2_ManSkeleton","\rhsafrf\addons\rhs_c_weapons\anims\rhs_hand_akmr_grip.rtm"};
	scope=1;
};

class rhs_weap_ak74mr_folded_afg : rhs_weap_ak74mr_folded
{
	handAnim[] = {"OFP2_ManSkeleton","\rhsafrf\addons\rhs_c_weapons\anims\rhs_hand_akmr_afg.rtm"};
	scope=1;
};

class rhs_weap_ak74mr_gp25 : rhs_weap_ak74mr
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_weap_ak74mr_gp25)
	weaponInfoType = "rhs_rscOptics_ak74mr_gp25";
	displayName = $STR_RHS_CFGWEAPONS_RIFLE_AK74MR_GP250;
	model = "\rhsafrf\addons\rhs_weapons3\ak74mr\rhs_ak74mr_gp25";

	handAnim[] = {"OFP2_ManSkeleton","\rhsafrf\addons\rhs_c_weapons\anims\rhs_hand_akmr_gp.rtm"};
	muzzles[] = {"this","GP25Muzzle","SAFE"};

	class WeaponSlotsInfo: WeaponSlotsInfo
	{
		mass = __EVAL(ITEM_AK74M_UUK_MASS + ITEM_GP25_MASS);
		class PointerSlot : rhs_russian_ris_handguard_slot
		{
			class compatibleItems: compatibleItems
			{
				rhs_acc_perst3_2dp=0;
				rhs_acc_perst3_2dp_h=0;
				rhs_acc_perst3_2dp_light=0;
				rhs_acc_perst3_2dp_light_h=0;
			};
		};
		class GripodSlot {};
		class AuxPointerSlot {};
	};
	inertia = 0.6;
	dexterity = 1.4;
	baseWeapon="rhs_weap_ak74mr_gp25";
};

class rhs_weap_ak105 : rhs_weap_ak74m
{
	scopeArsenal=2;
	scope=2;
	AUTHOR_MACRO
	displayName = "$STR_RHS_WEAP_AK105";
	model = "\rhsafrf\addons\rhs_weapons\rhs_ak105";
	hiddenSelectionsTextures[] =
	{
		"rhsafrf\addons\rhs_weapons\texture\AK105_co.paa",
		"rhsafrf\addons\rhs_weapons\texture\ak105_barrel_co.paa",
		"rhsafrf\addons\rhs_weapons3\zenitco\data\rhs_zenitko_01_co.paa",
		"rhsafrf\addons\rhs_weapons3\zenitco\data\rhs_zenitko_02_co.paa",
		"rhsafrf\addons\rhs_weapons3\zenitco\data\rhs_b33_co.paa"
	};

	class WeaponSlotsInfo: WeaponSlotsInfo
	{
		mass = __EVAL(ITEM_AK105_MASS);
		class MuzzleSlot: rhs_russian_ak105_muzzle_slot {};
		class CowsSlot: rhs_russian_rifle_scopes_slot{};
		class rhs_npz_slot: SlotInfo { compatibleItems[] = {"rhs_acc_npz"};};
		class PointerSlot : rhs_russian_ak_barrel_slot {};
	};
	class LinkedItems
	{
		class LinkedItemsMuzzle
		{
			slot = "MuzzleSlot";
			item = "rhs_acc_pgs64";
		};
	};
	class Single: Single
	{
		dispersion			= DISPERSION_MOA(5.0);
	};
	class FullAuto: FullAuto
	{
		dispersion			= DISPERSION_MOA(5.0);
	};
	initSpeed = -0.954; //840m/s with 7n10
	rhs_fold="rhs_weap_ak105_folded";
	rhs_npz="rhs_weap_ak105_npz";
	baseWeapon="rhs_weap_ak105";

};

class rhs_weap_ak105_zenitco01 : rhs_weap_ak105
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_weap_ak105_zenitco01)
	displayName = "$STR_RHS_WEAP_AK105_ZENIT";
	model = "\rhsafrf\addons\rhs_weapons3\zenitco\rhs_ak105_zenit";

	// mag grip anim
	handAnim[] = {"OFP2_ManSkeleton","\rhsafrf\addons\rhs_c_weapons\anims\rhs_hand_ak.rtm"};

	weaponInfoType = "rhs_rscOptics_ak105_zenitco01";

	class WeaponSlotsInfo: WeaponSlotsInfo
	{
		mass = __EVAL(ITEM_AK105_ZENITCO_MASS);
		class MuzzleSlot: MuzzleSlot {};
		class CowsSlot: rhs_russian_rifle_scopes_slot_npz{};
		class GripodSlot: rhs_russian_rifle_gripod_slot {};
		class PointerSlot : rhs_russian_ris_handguard_slot {};
	};

	rhs_fold="";
	rhs_npz="rhs_weap_ak105_zenitco01_npz";

	rhs_grip1_change = "rhs_weap_ak105_zenitco01_grip1";
	rhs_grip2_change = "rhs_weap_ak105_zenitco01_afg";
	rhs_grip3_change = "rhs_weap_ak105_zenitco01_grip1";
	rhsusf_acc_anpeq15 = 1;
	rhsusf_acc_t1 = 1;

	baseWeapon="rhs_weap_ak105_zenitco01";
};

class rhs_weap_ak105_zenitco01_grip1 : rhs_weap_ak105_zenitco01
{
	handAnim[] = {"OFP2_ManSkeleton","\rhsafrf\addons\rhs_c_weapons\anims\rhs_hand_akmr_grip.rtm"};
};

class rhs_weap_ak105_zenitco01_afg : rhs_weap_ak105_zenitco01
{
	handAnim[] = {"OFP2_ManSkeleton","\rhsafrf\addons\rhs_c_weapons\anims\rhs_hand_akmr_afg.rtm"};
};

class rhs_weap_ak105_zenitco01_npz : rhs_weap_ak105_zenitco01
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_weap_ak105_zenitco01_npz)
	displayName = $STR_RHS_WEAP_AK105_NPZ0_ZENIT;
	scopeArsenal=0;

	model = "\rhsafrf\addons\rhs_weapons3\zenitco\rhs_ak105_zenit_npz";

	class WeaponSlotsInfo: WeaponSlotsInfo
	{
		mass = __EVAL(ITEM_AK105_ZENITCO_MASS + ITEM_NPZ_MASS);
		class MuzzleSlot: MuzzleSlot {};
		class CowsSlot: rhs_picattinny_russian_rifle_scopes_slot {};
		class PointerSlot: rhs_russian_ris_handguard_slot {};
		class rhs_npz_slot {};
	};

	rhs_npz="rhs_weap_ak105_zenitco01";
	weaponInfoType = "rhs_rscOptics_ak105_zenitco01_npz";
	baseWeapon="rhs_weap_ak105_zenitco01_npz";

	rhs_grip1_change = "rhs_weap_ak105_zenitco01_npz_grip1";
	rhs_grip2_change = "rhs_weap_ak105_zenitco01_npz_afg";
	rhs_grip3_change = "rhs_weap_ak105_zenitco01_npz_grip1";
	rhsusf_acc_anpeq15 = 1;
};

class rhs_weap_ak105_zenitco01_npz_grip1 : rhs_weap_ak105_zenitco01_npz
{
	handAnim[] = {"OFP2_ManSkeleton","\rhsafrf\addons\rhs_c_weapons\anims\rhs_hand_akmr_grip.rtm"};
};

class rhs_weap_ak105_zenitco01_npz_afg : rhs_weap_ak105_zenitco01_npz
{
	handAnim[] = {"OFP2_ManSkeleton","\rhsafrf\addons\rhs_c_weapons\anims\rhs_hand_akmr_afg.rtm"};
};

class rhs_weap_ak105_npz : rhs_weap_ak105
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_weap_ak105_npz)
	displayName = $STR_RHS_WEAP_AK105_NPZ0;

	model = "\rhsafrf\addons\rhs_weapons\rhs_ak105_npz";

	muzzles[] = {"this","SAFE"};

	class WeaponSlotsInfo: WeaponSlotsInfo
	{
		mass = __EVAL(ITEM_AK105_MASS + ITEM_NPZ_MASS);
		class MuzzleSlot: MuzzleSlot {};
		class CowsSlot: rhs_picattinny_russian_rifle_scopes_slot {};
		class PointerSlot: rhs_russian_ak_barrel_slot{};
		class rhs_npz_slot {};
	};
	rhs_npz="rhs_weap_ak105";
	weaponInfoType = "rhs_rscOptics_ak105_npz";
	baseWeapon="rhs_weap_ak105_npz";
};

class rhs_weap_ak105_folded : rhs_weap_ak105
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_weap_ak105_folded)
	displayName = $STR_RHS_CFGWEAPONS_RIFLE_AK105_FOLD0;
	scopeArsenal=0;
	scope=1;

	model = "\rhsafrf\addons\rhs_weapons\rhs_ak105_folded";
	handAnim[] = {"OFP2_ManSkeleton","\rhsafrf\addons\rhs_c_weapons\anims\rhs_hand_ak_stock_fold.rtm"};
	recoil = "rhs_recoil_ak74m_folded";
	inertia = 0.7;

	class WeaponSlotsInfo: WeaponSlotsInfo
	{
		mass = __EVAL(ITEM_AK105_MASS * ITEM_FOLDED_MODIFIER);
		class MuzzleSlot: MuzzleSlot {};
		class CowsSlot {};
		class PointerSlot: rhs_russian_ak_barrel_slot{};
		class rhs_npz_slot {};
	};

	rhs_fold="rhs_weap_ak105";
	baseWeapon="rhs_weap_ak105_folded";
};

class rhs_weap_ak105_zenitco01_b33 : rhs_weap_ak105_zenitco01
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_weap_ak105_zenitco01_b33)
	displayName = "$STR_RHS_WEAP_AK105_ZENIT_B33";

	model = "\rhsafrf\addons\rhs_weapons3\zenitco\rhs_ak105_zenit_b33";


	class WeaponSlotsInfo
	{
		mass = __EVAL(ITEM_AK105_ZENITCO_MASS + ITEM_B33_MASS);
		allowedSlots[] = {901};
		class MuzzleSlot: rhs_russian_ak105_muzzle_slot {};
		class CowsSlot: rhs_picattinny_russian_rifle_scopes_slot_long {};
		class GripodSlot: rhs_russian_rifle_gripod_slot {};
		class PointerSlot : rhs_russian_ris_handguard_slot {};
	};

	rhs_npz="";
	weaponInfoType = "rhs_rscOptics_ak105_zenitco01_b33";
	baseWeapon="rhs_weap_ak105_zenitco01_b33";

	rhs_grip1_change = "rhs_weap_ak105_zenitco01_b33_grip1";
	rhs_grip2_change = "rhs_weap_ak105_zenitco01_b33_afg";
	rhs_grip3_change = "rhs_weap_ak105_zenitco01_b33_grip1";
	rhsusf_acc_anpeq15 = 1;
	rhsusf_acc_t1 = 0;
};

class rhs_weap_ak105_zenitco01_b33_grip1 : rhs_weap_ak105_zenitco01_b33
{
	handAnim[] = {"OFP2_ManSkeleton","\rhsafrf\addons\rhs_c_weapons\anims\rhs_hand_akmr_grip.rtm"};
};

class rhs_weap_ak105_zenitco01_b33_afg : rhs_weap_ak105_zenitco01_b33
{
	handAnim[] = {"OFP2_ManSkeleton","\rhsafrf\addons\rhs_c_weapons\anims\rhs_hand_akmr_afg.rtm"};
};


class rhs_weap_akm : rhs_weap_ak74m
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_weap_akm)
	scope			= 2;

	discreteDistance[]				= {350,100,200,300,400,500,600,700,800,900,1000};
	discreteDistanceInitIndex		= 0;
	discreteDistanceCameraPoint[]	= {"eye","eye_100","eye_200","eye_300","eye_400","eye_500","eye_600","eye_700","eye_800","eye_900","eye_1000"};
	cameraDir						= "eye_look";

	displayName			= $STR_RHS_WEAP_AKM;
	descriptionShort	= $STR_RHS_WEAP_AK_DESC;
	model				= \rhsafrf\addons\rhs_weapons\akm\rhs_akm;

	hiddenSelections[]	= {"body","acc"};
	hiddenSelectionsTextures[] = {
		"rhsafrf\addons\rhs_weapons\akm\data\rhs_akm_prm_co.paa",
		"rhsafrf\addons\rhs_weapons\akm\data\rhs_akm_acc_co.paa"
	};
	dexterity		= 1.81;
	maxRecoilSway	= 0.0125;
	swayDecaySpeed	= 1.25;
	recoil			= "rhs_recoil_akm";
	reloadAction	= "RHS_GestureReloadAK762";
	class WeaponSlotsInfo: WeaponSlotsInfo
	{
		mass = __EVAL(ITEM_AKM_MASS);
		class CowsSlot {};
		class MuzzleSlot: rhs_russian_akm_muzzle_slot {};
		class rhs_npz_slot {};
		class PointerSlot : rhs_russian_ak_barrel_slot {};
	};
	class LinkedItems
	{
		class LinkedItemsMuzzle
		{
			slot = "MuzzleSlot";
			item = "rhs_acc_dtkakm";
		};
	};
	magazines[] =
	{
		rhs_30Rnd_762x39mm_bakelite,
		rhs_30Rnd_762x39mm_bakelite_tracer,
		rhs_30Rnd_762x39mm_bakelite_89,
		rhs_30Rnd_762x39mm_bakelite_U
	};
	magazineWell[] =
	{
		AK_762x39,
		CBA_762x39_AK,
		CBA_762x39_RPK
	};

	muzzles[] = {"this","SAFE"};
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
		aiBurstTerminable	= 0;
		reloadTime			= 0.1;
		dispersion			= DISPERSION_MOA(5.5);
		minRange			= 2;
		minRangeProbab		= 0.5;
		midRange			= 100;
		midRangeProbab		= 0.7;
		maxRange			= 200;
		maxRangeProbab		= 0.3;
	};
	class Single_AI: Single
	{
		aiBurstTerminable		= true;
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
	class FullAuto: Mode_FullAuto
	{
		reloadTime		= 0.1;
		dispersion		= DISPERSION_MOA(5.5);
		minRange		= 0;
		minRangeProbab	= 0.9;
		midRange		= 15;
		midRangeProbab	= 0.7;
		maxRange		= 30;
		maxRangeProbab	= 0.1;
		aiRateOfFire	= 1e-006;
	};
	class fullauto_medium: FullAuto
	{
		aiBurstTerminable		= true;
		showToPlayer			= 0;
		burst					= 2;
		burstRangeMax			= 6;
		minRange				= 2;
		minRangeProbab			= 0.5;
		midRange				= 75;
		midRangeProbab			= 0.7;
		maxRange				= 150;
		maxRangeProbab			= 0.05;
		aiRateOfFire			= 1;
		aiRateOfFireDistance	= 200;
		aiRateOfFireDispersion	= 2;
	};
	class single_medium_optics1: Single
	{
		burstRangeMax			= 3;
		requiredOpticType		= 1;
		showToPlayer			= 0;
		minRange				= 2;
		minRangeProbab			= 0.2;
		midRange				= 450;
		midRangeProbab			= 0.7;
		maxRange				= 600;
		maxRangeProbab			= 0.2;
		aiRateOfFire			= 4;
		aiRateOfFireDistance	= 600;
		aiRateOfFireDispersion	= 2;
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
		aiRateOfFire			= 5;
		aiRateOfFireDistance	= 800;
		aiRateOfFireDispersion	= 3;
	};

	class GP25Muzzle: GP25_Base {};

	baseWeapon			= rhs_weap_akm;
	weaponInfoType		= rhs_rscOptics_akm;
};

class rhs_weap_akm_gp25 : rhs_weap_akm
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_weap_akm_gp25)
	displayName = $STR_RHS_WEAP_AKM_GP25;

	model	= \rhsafrf\addons\rhs_weapons\akm\rhs_akm_gp25;


	handAnim[] = {"OFP2_ManSkeleton","\rhsafrf\addons\rhs_c_weapons\anims\rhs_hand_ak_gp.rtm"};
	muzzles[] = {"this","GP25Muzzle","SAFE"};

	class WeaponSlotsInfo: WeaponSlotsInfo
	{
		mass = __EVAL(ITEM_AKM_MASS + ITEM_GP25_MASS);
		class CowsSlot {iconPosition[] = {0.0,0.0};iconScale = 0.0;};
		class MuzzleSlot: MuzzleSlot {};
		class rhs_npz_slot {};
		class PointerSlot {};
	};

	weaponInfoType	= "rhs_rscOptics_akm_gp25";
	baseWeapon		= "rhs_weap_akm_gp25";
};

class rhs_weap_akmn : rhs_weap_akm
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_weap_akmn)
	displayName		= $STR_RHS_WEAP_AKMN;
	model			= "\rhsafrf\addons\rhs_weapons\akm\rhs_akmn";

	class WeaponSlotsInfo: WeaponSlotsInfo
	{
		mass = __EVAL(ITEM_AKM_MASS + ITEM_DOVETAIL_MASS);
		class CowsSlot: rhs_russian_rifle_scopes_slot {};
		class MuzzleSlot: MuzzleSlot {};
		class rhs_npz_slot: SlotInfo { compatibleItems[] = {"rhs_acc_npz"};};
	};

	rhs_npz			= "rhs_weap_akmn_npz";
	weaponInfoType	= "rhs_rscOptics_akmn";
	baseWeapon		= "rhs_weap_akmn";
};
class rhs_weap_akmn_gp25 : rhs_weap_akmn
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_weap_akmn_gp25)
	displayName		= $STR_RHS_WEAP_AKMN_GP25;
	model			= "\rhsafrf\addons\rhs_weapons\akm\rhs_akmn_gp25";

	handAnim[]		= {"OFP2_ManSkeleton","\rhsafrf\addons\rhs_c_weapons\anims\rhs_hand_ak_gp.rtm"};
	muzzles[]		= {"this","GP25Muzzle","SAFE"};

	class WeaponSlotsInfo: WeaponSlotsInfo
	{
		mass = __EVAL(ITEM_AKM_MASS + ITEM_DOVETAIL_MASS + ITEM_GP25_MASS);
		class PointerSlot {};
	};

	rhs_npz			= "rhs_weap_akmn_gp25_npz";
	weaponInfoType	= "rhs_rscOptics_akmn_gp25";
	baseWeapon		= "rhs_weap_akmn_gp25";
};
class rhs_weap_akmn_npz : rhs_weap_akmn
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_weap_akmn_npz)
	displayName		= $STR_RHS_WEAP_AKMN_NPZ;
	model			= "\rhsafrf\addons\rhs_weapons\akm\rhs_akmn_npz";

	class WeaponSlotsInfo: WeaponSlotsInfo
	{
		mass = __EVAL(ITEM_AKM_MASS + ITEM_DOVETAIL_MASS + ITEM_NPZ_MASS);
		class CowsSlot: rhs_picattinny_russian_rifle_scopes_slot {};
		class rhs_npz_slot {};
	};

	rhs_npz			= "rhs_weap_akmn";
	weaponInfoType	= "rhs_rscOptics_akmn_npz";
	baseWeapon		= "rhs_weap_akmn_npz";
};
class rhs_weap_akmn_gp25_npz : rhs_weap_akmn_gp25
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_weap_akmn_gp25_npz)
	displayName		= $STR_RHS_WEAP_AKMN_GP25_NPZ;
	model			= "\rhsafrf\addons\rhs_weapons\akm\rhs_akmn_gp25_npz";


	class WeaponSlotsInfo: WeaponSlotsInfo
	{
		mass = __EVAL(ITEM_AKM_MASS + ITEM_DOVETAIL_MASS + ITEM_GP25_MASS + ITEM_NPZ_MASS);
		class CowsSlot: rhs_picattinny_russian_rifle_scopes_slot {};
		class rhs_npz_slot {};
		class PointerSlot {};
	};

	rhs_npz			= "rhs_weap_akmn_gp25";
	weaponInfoType	= "rhs_rscOptics_akmn_gp25_npz";
	baseWeapon		= "rhs_weap_akmn_gp25_npz";
};

class rhs_weap_akm_zenitco01_b33 : rhs_weap_akmn
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_weap_akm_zenitco01_b33)
	displayName	= $STR_RHS_WEAP_AKM_ZENIT_B33;

	model		= "\rhsafrf\addons\rhs_weapons\akm\rhs_akm_zenit";

	handAnim[]	= {"OFP2_ManSkeleton","\rhsafrf\addons\rhs_c_weapons\anims\rhs_hand_ak.rtm"};

	class WeaponSlotsInfo
	{
		mass = __EVAL(ITEM_AKM_ZENITCO_MASS + ITEM_B33_MASS);
		class MuzzleSlot:  rhs_russian_akm_muzzle_slot {};
		class CowsSlot: rhs_picattinny_russian_rifle_scopes_slot {};
		class GripodSlot: rhs_russian_rifle_gripod_slot {};
		class PointerSlot : rhs_russian_ris_half_handguard_slot {};
	};

	weaponInfoType	= "rhs_rscOptics_akm_zenitco01_b33";
	baseWeapon		= "rhs_weap_akm_zenitco01_b33";

	rhs_npz				= "";
	rhs_grip1_change	= "rhs_weap_akm_zenitco01_b33_grip1";
	rhs_grip2_change	= "rhs_weap_akm_zenitco01_b33_afg";
	rhs_grip3_change	= "rhs_weap_akm_zenitco01_b33_grip1";
	rhsusf_acc_anpeq15	= 1;
};

class rhs_weap_akm_zenitco01_b33_grip1 : rhs_weap_akm_zenitco01_b33
{
	scope=1;
	handAnim[] = {"OFP2_ManSkeleton","\rhsafrf\addons\rhs_c_weapons\anims\rhs_hand_akmr_grip.rtm"};
};

class rhs_weap_akm_zenitco01_b33_afg : rhs_weap_akm_zenitco01_b33
{
	scope=1;
	handAnim[] = {"OFP2_ManSkeleton","\rhsafrf\addons\rhs_c_weapons\anims\rhs_hand_akmr_afg.rtm"};
};

class rhs_weap_akms : rhs_weap_akm
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_weap_akms)
	displayName	= $STR_RHS_WEAP_AKMS;
	model		= "\rhsafrf\addons\rhs_weapons\akm\rhs_akms";

	muzzles[] = {"this","SAFE","FOLD"};
	recoil		= "rhs_recoil_akms";
	class WeaponSlotsInfo: WeaponSlotsInfo
	{
		mass = __EVAL(ITEM_AKMS_MASS);
	};
	rhs_fold		= "rhs_weap_akms_folded";
	rhs_fold_anim	= "RHS_GestureFoldAKMS";
	weaponInfoType	= "rhs_rscOptics_akms";
	baseWeapon		= "rhs_weap_akms";
};

class rhs_weap_akms_folded : rhs_weap_akms
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_weap_akms_folded)
	scope = 1;
	scopeArsenal=0;
	displayName		= $STR_RHS_WEAP_AKMS_FOLDED;

	//moved by 0.1 in X axis
	model			= "\rhsafrf\addons\rhs_weapons\akm\rhs_akms_folded";
	handAnim[]		= {"OFP2_ManSkeleton","\rhsafrf\addons\rhs_c_weapons\anims\rhs_hand_ak_stock_fold.rtm"};
	reloadAction	= "RHS_GestureReloadAKSU";
	class WeaponSlotsInfo: WeaponSlotsInfo
	{
		mass = __EVAL(ITEM_AKMS_MASS*ITEM_FOLDED_MODIFIER);
		allowedSlots[] = {901};
	};
	recoil			= "rhs_recoil_akms_folded";
	rhs_fold		= "rhs_weap_akms";
	rhs_fold_anim	= "RHS_GestureUnfoldAKMS";
	baseWeapon		= "rhs_weap_akms_folded";
};

class rhs_weap_akms_gp25 : rhs_weap_akm
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_weap_akms_gp25)
	weaponInfoType	= "rhs_rscOptics_akms_gp25";
	displayName		= $STR_RHS_WEAP_AKMS_GP25;

	model			= "\rhsafrf\addons\rhs_weapons\akm\rhs_akms_gp25";
	handAnim[]		= {"OFP2_ManSkeleton","\rhsafrf\addons\rhs_c_weapons\anims\rhs_hand_ak_gp.rtm"};
	muzzles[]		= {"this","GP25Muzzle","SAFE"};

	class WeaponSlotsInfo: WeaponSlotsInfo
	{
		mass = __EVAL(ITEM_AKMS_MASS + ITEM_GP25_MASS);
		class CowsSlot{};
		class MuzzleSlot: MuzzleSlot {};
		class rhs_npz_slot {};
		class PointerSlot {};
	};

	baseWeapon = "rhs_weap_akms_gp25";
};

class rhs_weap_pm63 : rhs_weap_akm
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_weap_pm63)
	displayName		= $STR_RHS_WEAP_PM63;

	model			= "\rhsafrf\addons\rhs_weapons\akm\rhs_pm63";
	handAnim[]		= {"OFP2_ManSkeleton","\rhsafrf\addons\rhs_c_weapons\anims\rhs_hand_pm63.rtm"};

	class WeaponSlotsInfo: WeaponSlotsInfo
	{
		mass = __EVAL(ITEM_PM63_MASS);
	};
	baseWeapon = "rhs_weap_pm63";
	magazines[] =
	{
		"rhs_30Rnd_762x39mm",
		"rhs_30Rnd_762x39mm_tracer",
		"rhs_30Rnd_762x39mm_89",
		"rhs_30Rnd_762x39mm_U"
	};
};

class rhs_weap_ak103_base : rhs_weap_akm
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_weap_ak103_base)
	scope			= 0;
	model			= "\rhsafrf\addons\rhs_weapons\rhs_ak103";

	recoil			= "recoil_sdar";
	weaponInfoType	= "rhs_rscOptics_ak103";
	hiddenSelections[] = {"body","newfront","zenit1","zenit2","zenit3"};
	hiddenSelectionsTextures[] =
	{
		"rhsafrf\addons\rhs_weapons\texture\AK103_co.paa",
		"rhsafrf\addons\rhs_weapons\texture\ak105_barrel_co.paa",
		"rhsafrf\addons\rhs_weapons3\zenitco\data\rhs_zenitko_01_co.paa",
		"rhsafrf\addons\rhs_weapons3\zenitco\data\rhs_zenitko_02_co.paa",
		"rhsafrf\addons\rhs_weapons3\zenitco\data\rhs_b33_co.paa"
	};
	reloadAction = "RHS_GestureReloadAK762_1hand";
	modes[]=
	{
		"Single",
		"FullAuto",
		"single_medium_optics1",
		"single_far_optics2",
		"fullauto_medium"
	};

	class WeaponSlotsInfo: WeaponSlotsInfo
	{
		mass = __EVAL(ITEM_AK74M_MASS);
		class CowsSlot: rhs_russian_rifle_scopes_slot {};
		class MuzzleSlot: rhs_russian_ak103_muzzle_slot {};
		class rhs_npz_slot: SlotInfo { compatibleItems[] = {"rhs_acc_npz"};};
		class PointerSlot : rhs_russian_ak_barrel_slot {};
	};
	class Single: Single
	{
		reloadTime		= 0.1;
		dispersion		= DISPERSION_MOA(4.0);
		minRange		= 2;
		minRangeProbab	= 0.5;
		midRange		= 200;
		midRangeProbab	= 0.7;
		maxRange		= 400;
		maxRangeProbab	= 0.3;
	};
	class Burst: Mode_Burst
	{
		aiBurstTerminable	= 0;
		reloadTime			= 0.1;
		dispersion			= DISPERSION_MOA(4.0);
		minRange			= 2;
		minRangeProbab		= 0.5;
		midRange			= 200;
		midRangeProbab		= 0.7;
		maxRange			= 400;
		maxRangeProbab		= 0.3;
	};
	class FullAuto: FullAuto
	{
		reloadTime		= 0.1;
		dispersion		= DISPERSION_MOA(4.0);
		minRange		= 0;
		minRangeProbab	= 0.9;
		midRange		= 15;
		midRangeProbab	= 0.7;
		maxRange		= 30;
		maxRangeProbab	= 0.1;
		aiRateOfFire	= 1e-006;
	};
	class fullauto_medium: FullAuto
	{
		showToPlayer			= 0;
		burst					= 2;
		burstRangeMax			= 5;
		minRange				= 2;
		minRangeProbab			= 0.5;
		midRange				= 75;
		midRangeProbab			= 0.7;
		maxRange				= 150;
		maxRangeProbab			= 0.05;
		aiRateOfFire			= 2;
		aiRateOfFireDistance	= 200;
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
		aiRateOfFire			= 6;
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
		aiRateOfFire			= 8;
		aiRateOfFireDistance	= 800;
	};
	class GP25Muzzle: GP25_Base {};
	magazines[] =
	{
		rhs_30Rnd_762x39mm_polymer
	};
};

class rhs_weap_ak103 : rhs_weap_ak103_base
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_weap_ak103)
	scope=2;
	displayName	= $STR_RHS_WEAP_AK103;
	rhs_npz		= "rhs_weap_ak103_npz";
	rhs_fold	= "rhs_weap_ak103_folded";
	baseWeapon	= "rhs_weap_ak103";
	class LinkedItems
	{
		class LinkedItemsMuzzle
		{
			slot = "MuzzleSlot";
			item = "rhs_acc_dtk";
		};
	};
};

class rhs_weap_ak103_npz : rhs_weap_ak103
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_weap_ak103_npz)
	displayName = $STR_RHS_WEAP_AK103_NPZ0;

	model = "\rhsafrf\addons\rhs_weapons\rhs_ak103_npz";

	class WeaponSlotsInfo: WeaponSlotsInfo
	{
		mass = __EVAL(ITEM_AK74M_MASS + ITEM_NPZ_MASS);
		class MuzzleSlot: MuzzleSlot {};
		class CowsSlot: rhs_picattinny_russian_rifle_scopes_slot {};
		class PointerSlot: rhs_russian_ak_barrel_slot{};
		class rhs_npz_slot {};
	};

	rhs_npz="rhs_weap_ak103";
	weaponInfoType = "rhs_rscOptics_ak103_npz";
	baseWeapon="rhs_weap_ak103_npz";
};

class rhs_weap_ak103_folded : rhs_weap_ak103
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_weap_ak103_folded)
	displayName = $STR_RHS_CFGWEAPONS_RIFLE_AK103_FOLD0;
	scopeArsenal=0;
	scope=1;

	model = "\rhsafrf\addons\rhs_weapons\rhs_ak103_folded";
	handAnim[] = {"OFP2_ManSkeleton","\rhsafrf\addons\rhs_c_weapons\anims\rhs_hand_ak_stock_fold.rtm"};
	recoil = "rhs_recoil_ak74m_folded";
	inertia = 0.7;

	class WeaponSlotsInfo: WeaponSlotsInfo
	{
		mass = __EVAL(ITEM_AK74M_MASS*ITEM_FOLDED_MODIFIER);
		class MuzzleSlot: MuzzleSlot {};
		class CowsSlot {};
		class PointerSlot: rhs_russian_ak_barrel_slot{};
		class rhs_npz_slot {};
	};

	rhs_fold="rhs_weap_ak103";
	baseWeapon="rhs_weap_ak103_folded";
};

class rhs_weap_ak103_zenitco01 : rhs_weap_ak103
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_weap_ak103_zenitco01)
	displayName = "$STR_RHS_WEAP_AK103_ZENIT";
	model = "\rhsafrf\addons\rhs_weapons3\zenitco\rhs_ak103_zenit";

	// mag grip anim
	handAnim[] = {"OFP2_ManSkeleton","\rhsafrf\addons\rhs_c_weapons\anims\rhs_hand_ak.rtm"};

	class WeaponSlotsInfo
	{
		mass = __EVAL(ITEM_AK74M_ZENITCO_MASS);
		allowedSlots[] = {901};
		class MuzzleSlot: rhs_russian_ak103_muzzle_slot {};
		class CowsSlot: rhs_russian_rifle_scopes_slot_npz {};
		class GripodSlot: rhs_russian_rifle_gripod_slot {};
		class PointerSlot : rhs_russian_ris_handguard_slot {};
		class AuxPointerSlot : rhs_russian_aux_barrel_slot {};
	};

	weaponInfoType = "rhs_rscOptics_ak103_zenitco01";

	rhs_fold="rhs_weap_ak103_zenitco01_folded";
	rhs_npz="rhs_weap_ak103_zenitco01_npz";

	rhs_grip1_change = "rhs_weap_ak103_zenitco01_grip1";
	rhs_grip2_change = "rhs_weap_ak103_zenitco01_afg";
	rhs_grip3_change = "rhs_weap_ak103_zenitco01_grip1";
	rhsusf_acc_anpeq15 = 1;
	rhsusf_acc_t1 = 1;

	baseWeapon="rhs_weap_ak103_zenitco01";
};

class rhs_weap_ak103_zenitco01_folded : rhs_weap_ak103_zenitco01
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_weap_ak103_zenitco01_folded)
	displayName = $STR_RHS_CFGWEAPONS_RIFLE_AK103_FOLD0;
	scopeArsenal=0;

	model = "\rhsafrf\addons\rhs_weapons3\zenitco\rhs_ak103_zenit_folded";
	handAnim[] = {"OFP2_ManSkeleton","\rhsafrf\addons\rhs_c_weapons\anims\rhs_hand_ak_stock_fold.rtm"};
	recoil = "rhs_recoil_ak74m_folded";
	inertia = 0.7;

	class WeaponSlotsInfo: WeaponSlotsInfo
	{
		mass = __EVAL(ITEM_AK74M_ZENITCO_MASS*ITEM_FOLDED_MODIFIER);
		class CowsSlot: rhs_picattinny_russian_handguard_scopes_slot {};
	};

	rhs_fold="rhs_weap_ak103_zenitco01";
	baseWeapon="rhs_weap_ak103_zenitco01_folded";

	rhs_grip1_change = "rhs_weap_ak103_zenitco01_folded_grip1";
	rhs_grip2_change = "rhs_weap_ak103_zenitco01_folded_afg";
	rhs_grip3_change = "rhs_weap_ak103_zenitco01_folded_grip1";
	rhsusf_acc_anpeq15 = 1;
	rhsusf_acc_t1 = 1;
};

class rhs_weap_ak103_zenitco01_grip1 : rhs_weap_ak103_zenitco01
{
	scope=1;
	handAnim[] = {"OFP2_ManSkeleton","\rhsafrf\addons\rhs_c_weapons\anims\rhs_hand_akmr_grip.rtm"};
};

class rhs_weap_ak103_zenitco01_afg : rhs_weap_ak103_zenitco01
{
	scope=1;
	handAnim[] = {"OFP2_ManSkeleton","\rhsafrf\addons\rhs_c_weapons\anims\rhs_hand_akmr_afg.rtm"};
};

class rhs_weap_ak103_zenitco01_folded_grip1 : rhs_weap_ak103_zenitco01_folded
{
	handAnim[] = {"OFP2_ManSkeleton","\rhsafrf\addons\rhs_c_weapons\anims\rhs_hand_akmr_grip_stock_fold.rtm"};
	scope=1;
};

class rhs_weap_ak103_zenitco01_folded_afg : rhs_weap_ak103_zenitco01_folded
{
	handAnim[] = {"OFP2_ManSkeleton","\rhsafrf\addons\rhs_c_weapons\anims\rhs_hand_akmr_afg_stock_fold.rtm"};
	scope=1;
};

class rhs_weap_ak103_zenitco01_npz : rhs_weap_ak103_zenitco01
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_weap_ak103_zenitco01_npz)
	displayName = $STR_RHS_WEAP_AK103_NPZ0_ZENIT;
	scopeArsenal=0;

	model = "\rhsafrf\addons\rhs_weapons3\zenitco\rhs_ak103_zenit_npz";

	class WeaponSlotsInfo: WeaponSlotsInfo
	{
		mass = __EVAL(ITEM_AK74M_ZENITCO_MASS + ITEM_NPZ_MASS);
		class CowsSlot: rhs_picattinny_russian_rifle_scopes_slot {};
	};

	rhs_npz="rhs_weap_ak103_zenitco01";
	weaponInfoType = "rhs_rscOptics_ak103_zenitco01_npz";
	baseWeapon="rhs_weap_ak103_zenitco01_npz";

	rhs_grip1_change = "rhs_weap_ak103_zenitco01_npz_grip1";
	rhs_grip2_change = "rhs_weap_ak103_zenitco01_npz_afg";
	rhs_grip3_change = "rhs_weap_ak103_zenitco01_npz_grip1";
	rhsusf_acc_anpeq15 = 1;
};

class rhs_weap_ak103_zenitco01_npz_grip1 : rhs_weap_ak103_zenitco01_npz
{
	scope=1;
	handAnim[] = {"OFP2_ManSkeleton","\rhsafrf\addons\rhs_c_weapons\anims\rhs_hand_akmr_grip.rtm"};
};

class rhs_weap_ak103_zenitco01_npz_afg : rhs_weap_ak103_zenitco01_npz
{
	scope=1;
	handAnim[] = {"OFP2_ManSkeleton","\rhsafrf\addons\rhs_c_weapons\anims\rhs_hand_akmr_afg.rtm"};
};

class rhs_weap_ak103_zenitco01_b33 : rhs_weap_ak103_zenitco01
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_weap_ak103_zenitco01_b33)
	displayName = "$STR_RHS_WEAP_AK103_ZENIT_B33";

	model = "\rhsafrf\addons\rhs_weapons3\zenitco\rhs_ak103_zenit_b33";

	class WeaponSlotsInfo
	{
		mass = __EVAL(ITEM_AK74M_ZENITCO_MASS + ITEM_B33_MASS);
		allowedSlots[] = {901};
		class MuzzleSlot: rhs_russian_ak103_muzzle_slot {};
		class CowsSlot: rhs_picattinny_russian_rifle_scopes_slot_long {};
		class GripodSlot: rhs_russian_rifle_gripod_slot {};
		class PointerSlot : rhs_russian_ris_handguard_slot {};
		class AuxPointerSlot : rhs_russian_aux_barrel_slot {};
	};

	rhs_npz="";
	weaponInfoType = "rhs_rscOptics_ak103_zenitco01_b33";
	baseWeapon="rhs_weap_ak103_zenitco01_b33";

	rhs_grip1_change = "rhs_weap_ak103_zenitco01_b33_grip1";
	rhs_grip2_change = "rhs_weap_ak103_zenitco01_b33_afg";
	rhs_grip3_change = "rhs_weap_ak103_zenitco01_b33_grip1";
	rhsusf_acc_anpeq15 = 1;
	rhsusf_acc_t1 = 0;
};

class rhs_weap_ak103_zenitco01_b33_grip1 : rhs_weap_ak103_zenitco01_b33
{
	scope=1;
	handAnim[] = {"OFP2_ManSkeleton","\rhsafrf\addons\rhs_c_weapons\anims\rhs_hand_akmr_grip.rtm"};
};

class rhs_weap_ak103_zenitco01_b33_afg : rhs_weap_ak103_zenitco01_b33
{
	scope=1;
	handAnim[] = {"OFP2_ManSkeleton","\rhsafrf\addons\rhs_c_weapons\anims\rhs_hand_akmr_afg.rtm"};
};

class rhs_weap_ak103_1 : rhs_weap_ak103_base
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_weap_ak103_1)
	displayName = $STR_RHS_WEAP_AK1031;
	scope=2;
	modes[] = {"Single","single_medium_optics1","single_far_optics2"};
	weaponInfoType ="rhs_rscOptics_ak103_1";
	baseWeapon="rhs_weap_ak103_1";
	rhs_fold="rhs_weap_ak103_1_folded";
	rhs_npz="rhs_weap_ak103_1_npz";

	class WeaponSlotsInfo: WeaponSlotsInfo
	{
		mass = __EVAL(ITEM_AK74M_MASS);
		class CowsSlot: rhs_russian_rifle_scopes_slot {};
		class MuzzleSlot: MuzzleSlot {};
		class PointerSlot : rhs_russian_ak_barrel_slot {};
	};

	class Single: Single
	{
		reloadTime=0.1;
		minRange=2;
		minRangeProbab=0.5;
		midRange=200;
		midRangeProbab=0.7;
		maxRange=400;
		maxRangeProbab=0.3;
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
	class LinkedItems
	{
		class LinkedItemsMuzzle
		{
			slot = "MuzzleSlot";
			item = "rhs_acc_dtk";
		};
	};
	class GP25Muzzle: GP25_Base {};
};

class rhs_weap_ak103_1_npz : rhs_weap_ak103_1
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_weap_ak103_1_npz)
	displayName = $STR_RHS_WEAP_AK1031_NPZ0;

	model = "\rhsafrf\addons\rhs_weapons\rhs_ak103_npz";

	class WeaponSlotsInfo: WeaponSlotsInfo
	{
		mass = __EVAL(ITEM_AK74M_MASS + ITEM_NPZ_MASS);
		class MuzzleSlot: MuzzleSlot {};
		class CowsSlot: rhs_picattinny_russian_rifle_scopes_slot {};
		class PointerSlot: rhs_russian_ak_barrel_slot{};
		class rhs_npz_slot {};
	};
	rhs_npz="rhs_weap_ak103_1";
	weaponInfoType = "rhs_rscOptics_ak103_npz";
	baseWeapon="rhs_weap_ak103_1_npz";
};

class rhs_weap_ak103_1_folded : rhs_weap_ak103_1
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_weap_ak103_1_folded)
	displayName = $STR_RHS_CFGWEAPONS_RIFLE_AK103_1_FOLD0;
	scopeArsenal=0;
	scope=1;

	model = "\rhsafrf\addons\rhs_weapons\rhs_ak103_folded";
	handAnim[] = {"OFP2_ManSkeleton","\rhsafrf\addons\rhs_c_weapons\anims\rhs_hand_ak_stock_fold.rtm"};
	recoil = "rhs_recoil_ak74m_folded";
	inertia = 0.7;

	class WeaponSlotsInfo: WeaponSlotsInfo
	{
		mass = 56.1;
		class MuzzleSlot: MuzzleSlot {};
		class CowsSlot {};
		class PointerSlot: rhs_russian_ak_barrel_slot{};
		class rhs_npz_slot {};
	};

	rhs_fold="rhs_weap_ak103_1";
	baseWeapon="rhs_weap_ak103_1_folded";
};

class rhs_weap_ak103_2 : rhs_weap_ak103_base
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_weap_ak103_2)
	displayName = $STR_RHS_WEAP_AK1032;
	weaponInfoType ="rhs_rscOptics_ak103_2";
	scope=2;
	class WeaponSlotsInfo: WeaponSlotsInfo
	{
		mass = __EVAL(ITEM_AK74M_MASS);
		class CowsSlot: rhs_russian_rifle_scopes_slot {};
		class MuzzleSlot: MuzzleSlot {};
		class PointerSlot : rhs_russian_ak_barrel_slot {};
	};
	class LinkedItems
	{
		class LinkedItemsMuzzle
		{
			slot = "MuzzleSlot";
			item = "rhs_acc_dtk";
		};
	};
	modes[] = {"Single","Burst","single_medium_optics1","single_far_optics2"};

	class Single: Single
	{
		reloadTime=0.1;
		minRange=2;
		minRangeProbab=0.5;
		midRange=200;
		midRangeProbab=0.7;
		maxRange=400;
		maxRangeProbab=0.3;
	};
	class Burst : Burst
	{
		aiBurstTerminable = 0;
		reloadTime=0.1;
		dispersion=0.0021;
		minRange=2;
		minRangeProbab=0.5;
		midRange=200;
		midRangeProbab=0.7;
		maxRange=400;
		maxRangeProbab=0.3;
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

	class GP25Muzzle: GP25_Base {};
	baseWeapon="rhs_weap_ak103_2";
	rhs_fold="rhs_weap_ak103_2_folded";
	rhs_npz="rhs_weap_ak103_2_npz";
};

class rhs_weap_ak103_2_npz : rhs_weap_ak103_2
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_weap_ak103_2_npz)
	displayName = $STR_RHS_WEAP_AK1032_NPZ0;

	model = "\rhsafrf\addons\rhs_weapons\rhs_ak103_npz";


	class WeaponSlotsInfo: WeaponSlotsInfo
	{
		mass = __EVAL(ITEM_AK74M_MASS + ITEM_NPZ_MASS);
		class MuzzleSlot: MuzzleSlot {};
		class CowsSlot: rhs_picattinny_russian_rifle_scopes_slot {};
		class PointerSlot: rhs_russian_ak_barrel_slot{};
		class rhs_npz_slot {};
	};
	rhs_npz="rhs_weap_ak103_2";
	weaponInfoType = "rhs_rscOptics_ak103_npz";
	baseWeapon="rhs_weap_ak103_2_npz";
};

class rhs_weap_ak103_2_folded : rhs_weap_ak103_2
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_weap_ak103_2_folded)
	displayName = $STR_RHS_CFGWEAPONS_RIFLE_AK103_2_FOLD0;
	scopeArsenal=0;
	scope=1;

	model = "\rhsafrf\addons\rhs_weapons\rhs_ak103_folded";
	handAnim[] = {"OFP2_ManSkeleton","\rhsafrf\addons\rhs_c_weapons\anims\rhs_hand_ak_stock_fold.rtm"};
	recoil = "recoil_mmg_01";
	inertia = 0.7;

	class WeaponSlotsInfo: WeaponSlotsInfo
	{
		mass = __EVAL(ITEM_AK74M_MASS*ITEM_FOLDED_MODIFIER);
		class MuzzleSlot: MuzzleSlot {};
		class CowsSlot {};
		class PointerSlot: rhs_russian_ak_barrel_slot{};
		class rhs_npz_slot {};
	};

	rhs_fold="rhs_weap_ak103_2";
	baseWeapon="rhs_weap_ak103_2_folded";
};

class rhs_weap_ak103_gp25: rhs_weap_ak103_base
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_weap_ak103_gp25)
	scope=2;
	weaponInfoType = "rhs_rscOptics_ak103_gp25";
	displayName = $STR_RHS_WEAP_AK103_GP25;

	model = "\rhsafrf\addons\rhs_weapons\rhs_ak103_gp25";

	handAnim[] = {"OFP2_ManSkeleton","\rhsafrf\addons\rhs_c_weapons\anims\rhs_hand_ak_gp.rtm"};
	muzzles[] = {"this","GP25Muzzle","SAFE"};

	class WeaponSlotsInfo: WeaponSlotsInfo
	{
		mass = __EVAL(ITEM_AK74M_MASS + ITEM_GP25_MASS);
		class PointerSlot {};
	};
	class LinkedItems
	{
		class LinkedItemsMuzzle
		{
			slot = "MuzzleSlot";
			item = "rhs_acc_dtk";
		};
	};

	baseWeapon="rhs_weap_ak103_gp25";
	rhs_npz="rhs_weap_ak103_gp25_npz";
};

class rhs_weap_ak103_gp25_npz: rhs_weap_ak103_base
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_weap_ak103_gp25_npz)
	scope=2;
	displayName = $STR_RHS_WEAP_AK103_GP25_NPZ;
	weaponInfoType = "rhs_rscOptics_ak103_gp25_npz";
	model = "\rhsafrf\addons\rhs_weapons\rhs_ak103_gp25_npz";
	handAnim[] = {"OFP2_ManSkeleton","\rhsafrf\addons\rhs_c_weapons\anims\rhs_hand_ak_gp.rtm"};
	muzzles[] = {"this","GP25Muzzle","SAFE"};

	class WeaponSlotsInfo: WeaponSlotsInfo
	{
		mass = __EVAL(ITEM_AK74M_MASS + ITEM_NPZ_MASS + ITEM_GP25_MASS);
		class MuzzleSlot: MuzzleSlot {};
		class CowsSlot: rhs_picattinny_russian_rifle_scopes_slot {};
		class PointerSlot {};
		class rhs_npz_slot {};
	};

	class LinkedItems
	{
		class LinkedItemsMuzzle
		{
			slot = "MuzzleSlot";
			item = "rhs_acc_dtk";
		};
	};

	baseWeapon="rhs_weap_ak103_gp25_npz";
	rhs_npz="rhs_weap_ak103_gp25";
};

class rhs_weap_ak104 : rhs_weap_ak103_base
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_weap_ak104)
	scopeArsenal	= 2;
	scope			= 2;
	displayName		= $STR_RHS_WEAP_AK104;
	weaponInfoType	= "rhs_rscOptics_ak104";
	model			= "\rhsafrf\addons\rhs_weapons\rhs_ak104";
	hiddenSelectionsTextures[] =
	{
		"rhsafrf\addons\rhs_weapons\texture\AK104_co.paa",
		"rhsafrf\addons\rhs_weapons\texture\ak105_barrel_co.paa",
		"rhsafrf\addons\rhs_weapons3\zenitco\data\rhs_zenitko_01_co.paa",
		"rhsafrf\addons\rhs_weapons3\zenitco\data\rhs_zenitko_02_co.paa",
		"rhsafrf\addons\rhs_weapons3\zenitco\data\rhs_b33_co.paa"
	};

	class WeaponSlotsInfo: WeaponSlotsInfo
	{
		mass = __EVAL(ITEM_AK105_MASS);
		class MuzzleSlot: rhs_russian_ak104_muzzle_slot {};
		class CowsSlot: rhs_russian_rifle_scopes_slot{};
		class rhs_npz_slot: SlotInfo { compatibleItems[] = {"rhs_acc_npz"};};
		class PointerSlot : rhs_russian_ak_barrel_slot {};
	};
	class LinkedItems
	{
		class LinkedItemsMuzzle
		{
			slot = "MuzzleSlot";
			item = "rhs_acc_pgs64";
		};
	};
	class Single: Single
	{
		dispersion			= DISPERSION_MOA(5.5);
	};
	class FullAuto: FullAuto
	{
		dispersion			= DISPERSION_MOA(5.5);
	};

	initSpeed	= -0.891364; //640m/s w/ 57-N-231 round
	rhs_npz		= "rhs_weap_ak104_npz";
	rhs_fold	= "rhs_weap_ak104_folded";
	baseWeapon	= "rhs_weap_ak104";
};

class rhs_weap_ak104_npz : rhs_weap_ak104
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_weap_ak104_npz)
	displayName	= $STR_RHS_WEAP_AK104_NPZ0;
	model		= "\rhsafrf\addons\rhs_weapons\rhs_ak104_npz";


	class WeaponSlotsInfo: WeaponSlotsInfo
	{
		mass = __EVAL(ITEM_AK105_MASS + ITEM_NPZ_MASS);
		class MuzzleSlot: MuzzleSlot {};
		class CowsSlot: rhs_picattinny_russian_rifle_scopes_slot {};
		class PointerSlot: rhs_russian_ak_barrel_slot{};
		class rhs_npz_slot {};
	};
	rhs_npz			= "rhs_weap_ak104";
	weaponInfoType	= "rhs_rscOptics_ak104_npz";
	baseWeapon		= "rhs_weap_ak104_npz";
};

class rhs_weap_ak104_zenitco01 : rhs_weap_ak104
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_weap_ak104_zenitco01)
	displayName = "$STR_RHS_WEAP_AK104_ZENIT";
	model = "\rhsafrf\addons\rhs_weapons3\zenitco\rhs_ak104_zenit";

	// mag grip anim
	handAnim[] = {"OFP2_ManSkeleton","\rhsafrf\addons\rhs_c_weapons\anims\rhs_hand_ak.rtm"};

	weaponInfoType = "rhs_rscOptics_ak104_zenitco01";

	class WeaponSlotsInfo: WeaponSlotsInfo
	{
		mass = __EVAL(ITEM_AK105_ZENITCO_MASS);
		class MuzzleSlot: MuzzleSlot {};
		class CowsSlot: rhs_russian_rifle_scopes_slot_npz{};
		class GripodSlot: rhs_russian_rifle_gripod_slot {};
		class PointerSlot : rhs_russian_ris_handguard_slot {};
	};

	rhs_fold="";
	rhs_npz="rhs_weap_ak104_zenitco01_npz";

	rhs_grip1_change = "rhs_weap_ak104_zenitco01_grip1";
	rhs_grip2_change = "rhs_weap_ak104_zenitco01_afg";
	rhs_grip3_change = "rhs_weap_ak104_zenitco01_grip1";
	rhsusf_acc_anpeq15 = 1;
	rhsusf_acc_t1 = 1;

	baseWeapon="rhs_weap_ak104_zenitco01";
};

class rhs_weap_ak104_zenitco01_grip1 : rhs_weap_ak104_zenitco01
{
	scope=1;
	handAnim[] = {"OFP2_ManSkeleton","\rhsafrf\addons\rhs_c_weapons\anims\rhs_hand_akmr_grip.rtm"};
};

class rhs_weap_ak104_zenitco01_afg : rhs_weap_ak104_zenitco01
{
	scope=1;
	handAnim[] = {"OFP2_ManSkeleton","\rhsafrf\addons\rhs_c_weapons\anims\rhs_hand_akmr_afg.rtm"};
};

class rhs_weap_ak104_zenitco01_npz : rhs_weap_ak104_zenitco01
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_weap_ak104_zenitco01_npz)
	displayName = $STR_RHS_WEAP_AK104_NPZ0_ZENIT;
	scopeArsenal=0;

	model = "\rhsafrf\addons\rhs_weapons3\zenitco\rhs_ak104_zenit_npz";



	class WeaponSlotsInfo: WeaponSlotsInfo
	{
		mass = __EVAL(ITEM_AK105_ZENITCO_MASS + ITEM_NPZ_MASS);
		class MuzzleSlot: MuzzleSlot {};
		class CowsSlot: rhs_picattinny_russian_rifle_scopes_slot {};
		class PointerSlot: rhs_russian_ris_handguard_slot {};
		class rhs_npz_slot {};
	};

	rhs_npz="rhs_weap_ak104_zenitco01";
	weaponInfoType = "rhs_rscOptics_ak104_zenitco01_npz";
	baseWeapon="rhs_weap_ak104_zenitco01_npz";

	rhs_grip1_change = "rhs_weap_ak104_zenitco01_npz_grip1";
	rhs_grip2_change = "rhs_weap_ak104_zenitco01_npz_afg";
	rhs_grip3_change = "rhs_weap_ak104_zenitco01_npz_grip1";
	rhsusf_acc_anpeq15 = 1;
};

class rhs_weap_ak104_zenitco01_npz_grip1 : rhs_weap_ak104_zenitco01_npz
{
	scope=1;
	handAnim[] = {"OFP2_ManSkeleton","\rhsafrf\addons\rhs_c_weapons\anims\rhs_hand_akmr_grip.rtm"};
};

class rhs_weap_ak104_zenitco01_npz_afg : rhs_weap_ak104_zenitco01_npz
{
	scope=1;
	handAnim[] = {"OFP2_ManSkeleton","\rhsafrf\addons\rhs_c_weapons\anims\rhs_hand_akmr_afg.rtm"};
};

class rhs_weap_ak104_zenitco01_b33 : rhs_weap_ak104_zenitco01
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_weap_ak104_zenitco01_b33)
	displayName = "$STR_RHS_WEAP_AK104_ZENIT_B33";

	model = "\rhsafrf\addons\rhs_weapons3\zenitco\rhs_ak104_zenit_b33";


	class WeaponSlotsInfo
	{
		mass = __EVAL(ITEM_AK105_ZENITCO_MASS + ITEM_B33_MASS);
		allowedSlots[] = {901};
		class MuzzleSlot: rhs_russian_ak104_muzzle_slot {};
		class CowsSlot: rhs_picattinny_russian_rifle_scopes_slot_long {};
		class GripodSlot: rhs_russian_rifle_gripod_slot {};
		class PointerSlot : rhs_russian_ris_handguard_slot {};
	};

	rhs_npz="";
	weaponInfoType = "rhs_rscOptics_ak104_zenitco01_b33";
	baseWeapon="rhs_weap_ak104_zenitco01_b33";

	rhs_grip1_change = "rhs_weap_ak104_zenitco01_b33_grip1";
	rhs_grip2_change = "rhs_weap_ak104_zenitco01_b33_afg";
	rhs_grip3_change = "rhs_weap_ak104_zenitco01_b33_grip1";
	rhsusf_acc_anpeq15 = 1;
	rhsusf_acc_t1 = 0;
};

class rhs_weap_ak104_zenitco01_b33_grip1 : rhs_weap_ak104_zenitco01_b33
{
	scope=1;
	handAnim[] = {"OFP2_ManSkeleton","\rhsafrf\addons\rhs_c_weapons\anims\rhs_hand_akmr_grip.rtm"};
};

class rhs_weap_ak104_zenitco01_b33_afg : rhs_weap_ak104_zenitco01_b33
{
	scope=1;
	handAnim[] = {"OFP2_ManSkeleton","\rhsafrf\addons\rhs_c_weapons\anims\rhs_hand_akmr_afg.rtm"};
};

class rhs_weap_ak104_folded : rhs_weap_ak104
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_weap_ak104_folded)
	displayName = $STR_RHS_CFGWEAPONS_RIFLE_AK104_FOLD0;
	scopeArsenal=0;
	scope=1;

	model = "\rhsafrf\addons\rhs_weapons\rhs_ak104_folded";
	handAnim[] = {"OFP2_ManSkeleton","\rhsafrf\addons\rhs_c_weapons\anims\rhs_hand_ak_stock_fold.rtm"};
	recoil = "rhs_recoil_ak74m_folded";
	inertia = 0.7;

	class WeaponSlotsInfo: WeaponSlotsInfo
	{
		mass = __EVAL(ITEM_AK105_MASS*ITEM_FOLDED_MODIFIER);
		class MuzzleSlot: MuzzleSlot {};
		class CowsSlot {};
		class PointerSlot: rhs_russian_ak_barrel_slot{};
		class rhs_npz_slot {};
	};

	rhs_fold="rhs_weap_ak104";
	baseWeapon="rhs_weap_ak104_folded";
};

class rhs_weap_ak74 : rhs_weap_ak74m
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_weap_ak74)
	scope = 2;
	displayName = $STR_RHS_WEAP_AK74;
	weaponInfoType = "rhs_rscOptics_ak74";
	inertia = 0.5;
	dexterity = 1.75;

	handAnim[] = {"OFP2_ManSkeleton","\rhsafrf\addons\rhs_c_weapons\anims\rhs_hand_ak74.rtm"}; //testing ak74
	reloadAction = "RHS_GestureReloadAK74";

	model = "\rhsafrf\addons\rhs_weapons3\aks74\rhs_ak74";


	hiddenSelections[] = {"body"};
	hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_weapons3\aks74\data\rhs_ak74_co.paa"};

	muzzles[] = {"this","SAFE"};

	class ItemInfo
	{
		priority = 1;
		RMBhint = "AK-74";
		onHoverText = "AK-74"; //TODO ?
	};

	class WeaponSlotsInfo: WeaponSlotsInfo
	{
		mass = __EVAL(ITEM_AK74_MASS);
		class CowsSlot {};
		class rhs_npz_slot {};
	};
	class LinkedItems
	{
		class LinkedItemsMuzzle
		{
			slot = "MuzzleSlot";
			item = "rhs_acc_dtk1983";
		};
	};
	magazines[] =
	{
		rhs_30Rnd_545x39_7N6M_AK,
		rhs_30Rnd_545x39_7N6M_green_AK,
		rhs_30Rnd_545x39_7N6M_plum_AK,
		rhs_30Rnd_545x39_7N6_AK,
		rhs_30Rnd_545x39_7N6_green_AK
	};
	rhs_fold="";
	baseWeapon="rhs_weap_ak74";
};

class rhs_weap_ak74_gp25 : rhs_weap_ak74
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_weap_ak74_gp25)
	weaponInfoType = "rhs_rscOptics_ak74_gp25";
	dexterity = 1.8;
	inertia = 0.68;
	displayName = $STR_RHS_WEAP_AK74_GP25;

	model = "\rhsafrf\addons\rhs_weapons3\aks74\rhs_ak74_gp25";
	handAnim[] = {"OFP2_ManSkeleton","\rhsafrf\addons\rhs_c_weapons\anims\rhs_hand_ak74_gp.rtm"};

	class WeaponSlotsInfo: WeaponSlotsInfo
	{
		mass = __EVAL(ITEM_AK74_MASS + ITEM_GP25_MASS);
		class CowsSlot {};
		class PointerSlot {};
	};

	muzzles[] = {"this","GP25Muzzle","SAFE"};
	baseWeapon="rhs_weap_ak74_gp25";
};

class rhs_weap_ak74n : rhs_weap_ak74
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_weap_ak74n)
	scope=2;
	displayName = $STR_RHS_WEAP_AK74N;

	model = "\rhsafrf\addons\rhs_weapons3\aks74\rhs_ak74n";


	class WeaponSlotsInfo: WeaponSlotsInfo
	{
		class CowsSlot : rhs_russian_rifle_scopes_slot {};
		class rhs_picattinny_russian_rifle_bis_scopes_slot {};
		class rhs_npz_slot: SlotInfo { compatibleItems[] = {"rhs_acc_npz"};};
	};
	baseWeapon="rhs_weap_ak74n";
	rhs_npz="rhs_weap_ak74n_npz";
};

class rhs_weap_ak74n_gp25 : rhs_weap_ak74_gp25
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_weap_ak74n_gp25)
	scope=2;
	weaponInfoType = "rhs_rscOptics_ak74n_gp25";
	displayName = $STR_RHS_WEAP_AK74N_GP25;
	model = "\rhsafrf\addons\rhs_weapons3\aks74\rhs_ak74n_gp25";
	class WeaponSlotsInfo: WeaponSlotsInfo
	{
		mass = __EVAL(ITEM_AK74_MASS + ITEM_DOVETAIL_MASS + ITEM_GP25_MASS);
		class CowsSlot : rhs_russian_rifle_scopes_slot {};
		class PointerSlot {};
		class rhs_npz_slot: SlotInfo { compatibleItems[] = {"rhs_acc_npz"};};
	};
	baseWeapon="rhs_weap_ak74n_gp25";
	rhs_npz="rhs_weap_ak74n_gp25_npz";
};

class rhs_weap_ak74n_npz : rhs_weap_ak74
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_weap_ak74n_npz)
	displayName = $STR_RHS_WEAP_AK74N_NPZ;
	weaponInfoType = "rhs_rscOptics_ak74n_npz";

	model = "\rhsafrf\addons\rhs_weapons3\aks74\rhs_ak74n_npz";
	class WeaponSlotsInfo: WeaponSlotsInfo
	{
		mass = __EVAL(ITEM_AK74_MASS + ITEM_NPZ_MASS);
		class MuzzleSlot: MuzzleSlot {};
		class CowsSlot: rhs_picattinny_russian_rifle_scopes_slot {};
		class PointerSlot: rhs_russian_ak_barrel_slot {};
		class rhs_npz_slot {};
	};

	rhs_npz="rhs_weap_ak74n";
	baseWeapon="rhs_weap_ak74n_npz";
};

class rhs_weap_ak74n_gp25_npz : rhs_weap_ak74_gp25
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_weap_ak74n_gp25_npz)
	weaponInfoType = "rhs_rscOptics_ak74n_gp25_npz";
	displayName = $STR_RHS_WEAP_AK74N_GP25_NPZ;
	model = "\rhsafrf\addons\rhs_weapons3\aks74\rhs_ak74n_gp25_npz";

	class WeaponSlotsInfo: WeaponSlotsInfo
	{
		mass = __EVAL(ITEM_AK74_MASS + ITEM_GP25_MASS + ITEM_NPZ_MASS);
		class MuzzleSlot: MuzzleSlot {};
		class CowsSlot: rhs_picattinny_russian_rifle_scopes_slot {};
		class PointerSlot {};
		class rhs_npz_slot {};
	};
	baseWeapon="rhs_weap_ak74n_gp25_npz";
	rhs_npz="rhs_weap_ak74n_gp25";
};
#define PLUM_AK74_MAGAZINE magazines[] = {rhs_30Rnd_545x39_7N6M_plum_AK};
class rhs_weap_ak74_2 : rhs_weap_ak74 // plum AK-74
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_weap_ak74_2)
	scope = 2;
	displayName = $STR_RHS_WEAP_AK74_2;

	model = "\rhsafrf\addons\rhs_weapons3\aks74\rhs_ak74_2";
	PLUM_AK74_MAGAZINE


	hiddenSelections[] = {"body"};
	hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_weapons3\aks74\data\rhs_ak74_2_co.paa"};

	class ItemInfo
	{
		priority = 1;
		RMBhint = "AK-74";
		onHoverText = "AK-74"; //TODO ?
	};
	class WeaponSlotsInfo: WeaponSlotsInfo
	{
		mass = __EVAL(ITEM_AK74_POLYMER_MASS);
		class CowsSlot {};
	};
	rhs_fold="";
	baseWeapon="rhs_weap_ak74_2";
};

class rhs_weap_ak74n_2 : rhs_weap_ak74
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_weap_ak74n_2)
	scope=2;
	displayName = $STR_RHS_WEAP_AK74N_2;
	model = "\rhsafrf\addons\rhs_weapons3\aks74\rhs_ak74n_2";
	PLUM_AK74_MAGAZINE

	class WeaponSlotsInfo: WeaponSlotsInfo
	{
		class CowsSlot : rhs_russian_rifle_scopes_slot {};
		class rhs_picattinny_russian_rifle_bis_scopes_slot {};
		class rhs_npz_slot: SlotInfo { compatibleItems[] = {"rhs_acc_npz"};};
	};
	baseWeapon="rhs_weap_ak74n_2";
	rhs_npz="rhs_weap_ak74n_2_npz";
};

class rhs_weap_ak74n_2_npz : rhs_weap_ak74
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_weap_ak74n_2_npz)
	displayName = $STR_RHS_WEAP_AK74N_2_NPZ;
	weaponInfoType = "rhs_rscOptics_ak74n_npz";

	model = "\rhsafrf\addons\rhs_weapons3\aks74\rhs_ak74n_2_npz";
	PLUM_AK74_MAGAZINE

	class WeaponSlotsInfo: WeaponSlotsInfo
	{
		mass = __EVAL(ITEM_AK74_MASS + ITEM_NPZ_MASS);
		class MuzzleSlot: MuzzleSlot {};
		class CowsSlot: rhs_picattinny_russian_rifle_scopes_slot {};
		class PointerSlot: rhs_russian_ak_barrel_slot {};
		class rhs_npz_slot {};
	};

	baseWeapon="rhs_weap_ak74n_2_npz";
	rhs_npz="rhs_weap_ak74n_2";
};

class rhs_weap_ak74n_2_gp25 : rhs_weap_ak74_gp25
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_weap_ak74n_2_gp25)
	scope=2;
	displayName = $STR_RHS_WEAP_AK74N_2_GP25;
	model = "\rhsafrf\addons\rhs_weapons3\aks74\rhs_ak74n_2_gp25";
	PLUM_AK74_MAGAZINE

	class WeaponSlotsInfo: WeaponSlotsInfo
	{
		class CowsSlot : rhs_russian_rifle_scopes_slot {};
		class rhs_picattinny_russian_rifle_bis_scopes_slot {};
		class PointerSlot {};
		class rhs_npz_slot: SlotInfo { compatibleItems[] = {"rhs_acc_npz"};};
	};
	baseWeapon="rhs_weap_ak74n_2_gp25";
	rhs_npz="rhs_weap_ak74n_2_gp25_npz";
};

class rhs_weap_ak74n_2_gp25_npz : rhs_weap_ak74_gp25
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_weap_ak74n_2_gp25_npz)
	scope=2;
	displayName = $STR_RHS_WEAP_AK74N_2_GP25_NPZ;
	weaponInfoType = "rhs_rscOptics_ak74n_gp25_npz";
	model = "\rhsafrf\addons\rhs_weapons3\aks74\rhs_ak74n_2_gp25_npz";
	PLUM_AK74_MAGAZINE

	class WeaponSlotsInfo: WeaponSlotsInfo
	{
		mass = __EVAL(ITEM_AK74_MASS + ITEM_GP25_MASS + ITEM_NPZ_MASS);
		class MuzzleSlot: MuzzleSlot {};
		class CowsSlot: rhs_picattinny_russian_rifle_scopes_slot {};
		class PointerSlot {};
		class rhs_npz_slot {};
	};
	baseWeapon="rhs_weap_ak74n_2_gp25_npz";
	rhs_npz="rhs_weap_ak74n_2_gp25";
};

class rhs_weap_ak74_3 : rhs_weap_ak74 // emerald AK-74
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_weap_ak74_3)
	scope = 2;
	displayName = $STR_RHS_WEAP_AK74_3;

	model = "\rhsafrf\addons\rhs_weapons3\aks74\rhs_ak74_3";


	hiddenSelections[] = {"body"};
	hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_weapons3\aks74\data\rhs_ak74_3_co.paa"};

	class ItemInfo
	{
		priority = 1;
		RMBhint = "AK-74";
		onHoverText = "AK-74"; //TODO ?
	};
	class WeaponSlotsInfo: WeaponSlotsInfo
	{
		mass = __EVAL(ITEM_AK74_POLYMER_MASS);
		class CowsSlot {};
	};
	magazines[] =
	{
		rhs_30Rnd_545x39_7N6_green_AK,
		rhs_30Rnd_545x39_7N6_AK,
		rhs_30Rnd_545x39_7N6M_AK,
		rhs_30Rnd_545x39_7N6M_green_AK,
		rhs_30Rnd_545x39_7N6M_plum_AK
	};
	rhs_fold="";
	baseWeapon="rhs_weap_ak74_3";
};

class rhs_weap_aks74: rhs_weap_ak74
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_weap_aks74)
	scope = 2;
	weaponInfoType = "rhs_rscOptics_aks74";

	inertia = 0.52;
	dexterity = 1.58;

	displayName = $STR_RHS_WEAP_AKS74;
	descriptionShort = $STR_RHS_CFGWEAPONS_RIFLE_AK74M1;

	handAnim[] = {"OFP2_ManSkeleton","\rhsafrf\addons\rhs_c_weapons\anims\rhs_hand_aks74.rtm"};//TESTING

	model = "\rhsafrf\addons\rhs_weapons3\aks74\rhs_aks74";
	muzzles[] = {"this","SAFE","FOLD"};



	hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_weapons3\aks74\data\rhs_aks74_co.paa"};
	reloadAction = "RHS_GestureReloadAKS";
	class ItemInfo
	{
		priority = 1;
		RMBhint = "AKS-74";
		onHoverText = "AKS-74"; //TODO ?
	};
	class WeaponSlotsInfo: WeaponSlotsInfo
	{
		mass = __EVAL(ITEM_AKS74_MASS);
		class CowsSlot {};
	};
	class LinkedItems
	{
		class LinkedItemsMuzzle
		{
			slot = "MuzzleSlot";
			item = "rhs_acc_dtk1983";
		};
	};
	rhs_fold="rhs_weap_aks74_folded";

	//NEED TO STOP NPZ
	rhs_npz="";
	baseWeapon="rhs_weap_aks74";
};

class rhs_weap_aks74_folded: rhs_weap_aks74
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_weap_aks74_folded)
	scopeArsenal=0;
	scope=1;
	inertia = 0.55;
	dexterity = 1.58;

	class WeaponSlotsInfo: WeaponSlotsInfo
	{
		mass = 45; //lower mass for folded version
		class CowsSlot {};
	};

	recoil = "rhs_recoil_ak74m_folded";

	displayName = $STR_RHS_WEAP_AKS74_FOLD;

	model = "\rhsafrf\addons\rhs_weapons3\aks74\rhs_aks74_folded";


	class ItemInfo
	{
		priority = 1;
		RMBhint = "AKS-74 (Folded)";
		onHoverText = "AKS-74 (Folded)"; //TODO ?
	};

	rhs_fold		= "rhs_weap_aks74";
	rhs_fold_anim	= "RHS_GestureUnfoldAK74M";
	rhs_npz			= "";
	baseWeapon		= "rhs_weap_aks74_folded";
};

class rhs_weap_aks74_2: rhs_weap_aks74
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_weap_aks74_2)
	displayName = $STR_RHS_WEAP_AKS74_2;
	model = "\rhsafrf\addons\rhs_weapons3\aks74\rhs_aks74_2";
	PLUM_AK74_MAGAZINE
	class ItemInfo
	{
		mass = __EVAL(ITEM_AKS74_POLYMER_MASS);
		priority = 1;
		RMBhint = "AKS-74 (Folded)";
		onHoverText = "AKS-74 (Folded)"; //TODO ?
	};

	rhs_fold="rhs_weap_aks74_2_folded";
	rhs_npz="";
	baseWeapon="rhs_weap_aks74_2";
};

class rhs_weap_aks74_2_folded: rhs_weap_aks74_folded
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_weap_aks74_2_folded)
	scopeArsenal=0;
	scope=1;

	displayName = $STR_RHS_WEAP_AKS74_2_FOLD;
	model = "\rhsafrf\addons\rhs_weapons3\aks74\rhs_aks74_2_folded";
	PLUM_AK74_MAGAZINE

	class ItemInfo
	{
		priority = 1;
		RMBhint = "AKS-74 (Folded)";
		onHoverText = "AKS-74 (Folded)"; //TODO ?
	};

	rhs_fold		= "rhs_weap_aks74_2";
	rhs_fold_anim	= "RHS_GestureUnfoldAK74M";
	rhs_npz			= "";
	baseWeapon		= "rhs_weap_aks74_2_folded";
};

class rhs_weap_aks74_gp25 : rhs_weap_aks74
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_weap_aks74_gp25)
	weaponInfoType = "rhs_rscOptics_aks74_gp25";
	scope=2;
	dexterity = 1.8;
	inertia = 0.67;
	displayName = $STR_RHS_WEAP_AKS74_GP25;

	model = "\rhsafrf\addons\rhs_weapons3\aks74\rhs_aks74_gp25";
	rhs_fold="";

	class WeaponSlotsInfo: WeaponSlotsInfo
	{
		mass = __EVAL(ITEM_AKS74_MASS + ITEM_GP25_MASS);
		class CowsSlot {};
		class PointerSlot {};
	};

	handAnim[] = {"OFP2_ManSkeleton","\rhsafrf\addons\rhs_c_weapons\anims\rhs_hand_ak_gp.rtm"};
	muzzles[] = {"this","GP25Muzzle","SAFE"};

	baseWeapon="rhs_weap_aks74_gp25";
};

class rhs_weap_aks74n : rhs_weap_aks74
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_weap_aks74n)
	weaponInfoType = "rhs_rscOptics_aks74n";
	displayName = $STR_RHS_WEAP_AKS74N;
	model = "\rhsafrf\addons\rhs_weapons3\aks74\rhs_aks74n";

	class WeaponSlotsInfo: WeaponSlotsInfo
	{
		mass = __EVAL(ITEM_AKS74_MASS + ITEM_DOVETAIL_MASS);
		class CowsSlot : rhs_russian_rifle_scopes_slot {};
		class rhs_npz_slot: SlotInfo { compatibleItems[] = {"rhs_acc_npz"};};
	};
	rhs_fold="rhs_weap_aks74n_folded";
	rhs_npz="rhs_weap_aks74n_npz";
	baseWeapon="rhs_weap_aks74n";
};

class rhs_weap_aks74n_npz : rhs_weap_aks74n
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_weap_aks74n_npz)
	displayName = $STR_RHS_WEAP_AKS74N_NPZ;
	weaponInfoType = "rhs_rscOptics_aks74n_npz";

	muzzles[] = {"this","SAFE"};

	model = "\rhsafrf\addons\rhs_weapons3\aks74\rhs_aks74n_npz";

	class WeaponSlotsInfo: WeaponSlotsInfo
	{
		mass = __EVAL(ITEM_AKS74_MASS + ITEM_NPZ_MASS);
		class MuzzleSlot: MuzzleSlot {};
		class CowsSlot: rhs_picattinny_russian_rifle_scopes_slot {};
		class PointerSlot: rhs_russian_ak_barrel_slot {};
		class rhs_npz_slot {};
	};

	rhs_npz="rhs_weap_aks74n";
	baseWeapon="rhs_weap_aks74n_npz";
};

class rhs_weap_aks74n_2 : rhs_weap_aks74n
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_weap_aks74n_2)
	displayName = $STR_RHS_WEAP_AKS74N_2;
	model = "\rhsafrf\addons\rhs_weapons3\aks74\rhs_aks74n_2";
	PLUM_AK74_MAGAZINE
	class WeaponSlotsInfo: WeaponSlotsInfo
	{
		mass = __EVAL(ITEM_AKS74_POLYMER_MASS + ITEM_DOVETAIL_MASS);
	};
	rhs_fold="rhs_weap_aks74n_2_folded";
	rhs_npz="rhs_weap_aks74n_2_npz";
	baseWeapon="rhs_weap_aks74n_2";
};

class rhs_weap_aks74n_2_npz : rhs_weap_aks74n
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_weap_aks74n_2_npz)
	displayName = $STR_RHS_WEAP_AKS74N_2_NPZ;

	model = "\rhsafrf\addons\rhs_weapons3\aks74\rhs_aks74n_2_npz";
	muzzles[] = {"this","SAFE"};
	PLUM_AK74_MAGAZINE

	class WeaponSlotsInfo: WeaponSlotsInfo
	{
		mass = __EVAL(ITEM_AKS74_POLYMER_MASS + ITEM_DOVETAIL_MASS + ITEM_NPZ_MASS);
		class MuzzleSlot: MuzzleSlot {};
		class CowsSlot: rhs_picattinny_russian_rifle_scopes_slot {};
		class PointerSlot: rhs_russian_ak_barrel_slot {};
		class rhs_npz_slot {};
	};
	weaponInfoType = "rhs_rscOptics_ak74n_npz";
	rhs_fold="rhs_weap_aks74n_2_folded";
	rhs_npz="rhs_weap_aks74n_2";
	baseWeapon="rhs_weap_aks74n_2_npz";
};

class rhs_weap_aks74n_folded : rhs_weap_aks74
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_weap_aks74n_folded)
	scopeArsenal=0;
	scope=1;
	inertia = 0.55;
	weaponInfoType = "rhs_rscOptics_aks74n";
	displayName = $STR_RHS_WEAP_AKS74N_FOLD;
	model = "\rhsafrf\addons\rhs_weapons3\aks74\rhs_aks74n_folded";

	class WeaponSlotsInfo: WeaponSlotsInfo
	{
		mass = 46;//lower mass for folded version
		class CowsSlot {};
	};
	rhs_fold		="rhs_weap_aks74n";
	rhs_fold_anim	= "RHS_GestureUnfoldAK74M";
	rhs_npz			="rhs_weap_aks74n_npz";
	baseWeapon		="rhs_weap_aks74n_folded";
};

class rhs_weap_aks74n_2_folded : rhs_weap_aks74n_folded
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_weap_aks74n_2_folded)
	scopeArsenal=0;
	scope=1;
	displayName = $STR_RHS_WEAP_AKS74N_2_FOLD;
	model = "\rhsafrf\addons\rhs_weapons3\aks74\rhs_aks74n_2_folded";
	PLUM_AK74_MAGAZINE

	rhs_fold="rhs_weap_aks74n_2";
	rhs_npz="";
	baseWeapon="rhs_weap_aks74n_2_folded";
};

class rhs_weap_aks74n_gp25 : rhs_weap_aks74_gp25
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_weap_aks74n_gp25)
	weaponInfoType = "rhs_rscOptics_ak74n_gp25";
	displayName = $STR_RHS_WEAP_AKS74N_GP25;
	model = "\rhsafrf\addons\rhs_weapons3\aks74\rhs_aks74n_gp25";
	class WeaponSlotsInfo: WeaponSlotsInfo
	{
		mass = __EVAL(ITEM_AKS74_POLYMER_MASS + ITEM_DOVETAIL_MASS + ITEM_GP25_MASS);
		class CowsSlot : rhs_russian_rifle_scopes_slot {};
		class PointerSlot {};
		class rhs_npz_slot: SlotInfo { compatibleItems[] = {"rhs_acc_npz"};};
	};
	baseWeapon="rhs_weap_aks74n_gp25";
	rhs_npz="rhs_weap_aks74n_gp25_npz";
};

class rhs_weap_aks74n_gp25_npz : rhs_weap_aks74n_gp25
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_weap_aks74n_gp25_npz)
	displayName = $STR_RHS_WEAP_AKS74N_GP25_NPZ;

	model = "\rhsafrf\addons\rhs_weapons3\aks74\rhs_aks74n_gp25_npz";

	class WeaponSlotsInfo: WeaponSlotsInfo
	{
		mass = __EVAL(ITEM_AKS74_POLYMER_MASS + ITEM_DOVETAIL_MASS + ITEM_GP25_MASS + ITEM_NPZ_MASS);
		class MuzzleSlot: MuzzleSlot {};
		class CowsSlot: rhs_picattinny_russian_rifle_scopes_slot {};
		class PointerSlot {};
		class rhs_npz_slot {};
	};

	rhs_npz="rhs_weap_aks74n_gp25";
	weaponInfoType = "rhs_rscOptics_ak74m_gp25_npz";
	baseWeapon="rhs_weap_aks74n_gp25_npz";
};

class rhs_weap_aks74u : rhs_weap_aks74
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_weap_aks74u)
	scope=2;

	displayName = $STR_RHS_WEAP_AKS74U;

	model = "\rhsafrf\addons\rhs_weapons2\aks74u\rhs_aks74u";
	handAnim[] = {"OFP2_ManSkeleton","\rhsafrf\addons\rhs_c_weapons\anims\rhs_hand_aks74u.rtm"};
	
	hiddenSelections[] = {"camo"};
	hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_weapons2\aks74u\data\rhs_aks74u_co.paa"};

	dexterity = 1.6;
	inertia = 0.33;
	weaponInfoType = "rhs_rscOptics_aks74u";
	reloadAction = "RHS_GestureReloadAKSU";
	recoil = "recoil_ktb";
	initSpeed = -0.835; //735 m/s assuming 880m/s ammo
	discreteDistance[] = {350,500};
	discreteDistanceInitIndex = 0;
	discreteDistanceCameraPoint[] = {"eye","eye_500"};
	modes[] = {"FullAuto","Single","single_medium_optics1","single_far_optics2","fullauto_medium"};

	class Single: Single
	{
		reloadTime		= 0.0923;
		dispersion		= DISPERSION_MOA(6);
		minRange		= 2;
		minRangeProbab	= 0.3;
		midRange		= 200;
		midRangeProbab	= 0.7;
		maxRange		= 400;
		maxRangeProbab	= 0.04;
	};
	class FullAuto: FullAuto
	{
		reloadTime		= 0.0923;
		dispersion		= DISPERSION_MOA(6);
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
		midRange				= 350;
		midRangeProbab			= 0.7;
		maxRange				= 550;
		maxRangeProbab			= 0.1;
		aiRateOfFire			= 6;
		aiRateOfFireDistance	= 600;
	};
	class single_far_optics2: single_medium_optics1
	{
		requiredOpticType = 2;
	};
	class fullauto_medium: FullAuto
	{
		showToPlayer	= 0;
		burst			= 2;
		burstRangeMax	= 5;
		minRange		= 2;
		minRangeProbab	= 0.5;
		midRange		= 75;
		midRangeProbab	= 0.7;
		maxRange		= 150;
		maxRangeProbab	= 0.05;
		aiRateOfFire	= 2.0;
	};

	aiDispersionCoefY = 10;
	aiDispersionCoefX = 8;


	class WeaponSlotsInfo: WeaponSlotsInfo
	{
		mass = __EVAL(ITEM_AKS74U_MASS);
		class MuzzleSlot: rhs_russian_aks74u_muzzle_slot {};
		class CowsSlot {};
		class rhs_npz_slot {};
		class PointerSlot {};
	};
	class LinkedItems
	{
		class LinkedItemsMuzzle
		{
			slot = "MuzzleSlot";
			item = "rhs_acc_pgs64_74u";
		};
	};

	rhs_fold="rhs_weap_aks74u_folded";
	baseWeapon="rhs_weap_aks74u";
};

class rhs_weap_aks74u_folded : rhs_weap_aks74u
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_weap_aks74u_folded)
	displayName = $STR_RHS_WEAP_AKS74U_FOLD;

	model = "\rhsafrf\addons\rhs_weapons2\aks74u\rhs_aks74u_folded";
	handAnim[] = {"OFP2_ManSkeleton","\rhsafrf\addons\rhs_c_weapons\anims\rhs_hand_aks74u.rtm"};
	recoil = "recoil_mmg_01";
	scopeArsenal=0;
	scope=1;
	inertia = 0.28;

	class WeaponSlotsInfo: WeaponSlotsInfo
	{
		mass = __EVAL(ITEM_AKS74U_MASS*ITEM_FOLDED_MODIFIER);
		class MuzzleSlot: MuzzleSlot {};
		class CowsSlot {};
		class PointerSlot {};
		class rhs_npz_slot {};
	};

	rhs_fold		= "rhs_weap_aks74u";
	rhs_fold_anim	= "RHS_GestureUnfoldAK74M";
	baseWeapon		= "rhs_weap_aks74u_folded";
};

class rhs_weap_aks74un : rhs_weap_aks74u
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_weap_aks74un)
	displayName = $STR_RHS_WEAP_AKS74UN;
	model = "\rhsafrf\addons\rhs_weapons2\aks74u\rhs_aks74un";
	
	hiddenSelections[] = {"camo1","camo2"};
	hiddenSelectionsTextures[] = {	"rhsafrf\addons\rhs_weapons2\aks74u\data\rhs_aks74un_co.paa",
									"rhsafrf\addons\rhs_weapons2\aks74u\data\rhs_aks74u_plum_co.paa" 
								 };

	weaponInfoType = "rhs_rscOptics_aks74un";

	class WeaponSlotsInfo: WeaponSlotsInfo
	{
		mass = __EVAL(ITEM_AKS74U_MASS + ITEM_DOVETAIL_MASS);
		class MuzzleSlot: MuzzleSlot {};
		class CowsSlot: rhs_russian_rifle_scopes_slot {};
		class rhs_npz_slot {};
		class PointerSlot {};
	};

	class LinkedItems
	{
		class LinkedItemsMuzzle
		{
			slot = "MuzzleSlot";
			item = "rhs_acc_pgs64_74un";
		};
	};

	rhs_fold="rhs_weap_aks74un_folded";
	baseWeapon="rhs_weap_aks74un";
};

class rhs_weap_aks74un_folded : rhs_weap_aks74un
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_weap_aks74un_folded)
	displayName = $STR_RHS_WEAP_AKS74UN_FOLD;

	model = "\rhsafrf\addons\rhs_weapons2\aks74u\rhs_aks74un_folded";
	handAnim[] = {"OFP2_ManSkeleton","\rhsafrf\addons\rhs_c_weapons\anims\rhs_hand_aks74u.rtm"};
	recoil = "recoil_mmg_01";
	scopeArsenal=0;
	scope=1;
	inertia = 0.28;

	class WeaponSlotsInfo: WeaponSlotsInfo
	{
		mass = __EVAL((ITEM_AKS74U_MASS + ITEM_DOVETAIL_MASS)*ITEM_FOLDED_MODIFIER);
		class MuzzleSlot: MuzzleSlot {};
		class CowsSlot {};
		class PointerSlot {};
		class rhs_npz_slot {};
	};

	rhs_fold		= "rhs_weap_aks74un";
	rhs_fold_anim	= "RHS_GestureUnfoldAK74M";
	baseWeapon		= "rhs_weap_aks74un_folded";
};

class rhs_weap_asval : rhs_weap_ak74m
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_weap_asval)
	scopeArsenal		= 2;
	scope				= 2;
	displayName			= "$STR_RHS_WEAP_ASVAL";
	descriptionShort	= "$STR_RHS_WEAP_ASVAL_DESC";
	recoil				= "rhs_recoil_asval";
	aiDispersionCoefX	= 2;
	aiDispersionCoefY	= 3;

	magazines[] =
	{
		"rhs_20rnd_9x39mm_SP5",
		"rhs_20rnd_9x39mm_SP6",
		"rhs_10rnd_9x39mm_SP5",
		"rhs_10rnd_9x39mm_SP6"
	};
	magazineWell[] = {CBA_9x39_VSS};

	discreteDistance[] = { 100, 150, 200, 220, 250, 270, 300, 320, 350, 370, 400, 420 };
	discreteDistanceCameraPoint[] = {"eye","eye_150","eye_200","eye_220","eye_250","eye_270","eye_300","eye_320","eye_350","eye_370","eye_400","eye_420"};
	cameraDir="eye_look";
	maxZeroing = 420; //no more sniping with regular pso at 1km!

	weaponInfoType = "rhs_rscOptics_asval";

	model = "\rhsafrf\addons\rhs_weapons2\asval\rhs_asval";
	hiddenSelections[] = {"camo1","camo2"};
	hiddenSelectionsTextures[] = {
		"rhsafrf\addons\rhs_weapons2\asval\data\asval_co.paa",
		"rhsafrf\addons\rhs_weapons2\asval\data\mag_co.paa"
	};

	handAnim[] = {"OFP2_ManSkeleton","\rhsafrf\addons\rhs_c_weapons\anims\rhs_hand_asval.rtm"};

	fireLightDuration	= 0;
	fireLightIntensity	= 0;
	initSpeed			= -1.0535;
	dexterity			= 1.7;
	inertia				= 0.45;

	modes[] = {"Single","FullAuto","single_medium_optics1","single_far_optics2","fullauto_medium"};
	class Single : Single
	{
		aiDispersionCoefX = 1.2;
		aiDispersionCoefY = 1.4;
		reloadTime = 0.0667;
		minRange = 2;
		minRangeProbab = 0.3;
		midRange = 100;
		midRangeProbab = 0.7;
		maxRange = 420;
		maxRangeProbab = 0.45;
		aiRateOfFire = 3;
		aiRateOfFireDistance = 400;
		dispersion = 0.00163;
	};
	class FullAuto : FullAuto
	{
		aiDispersionCoefX = 1.4;
		aiDispersionCoefY = 1.7;
		reloadTime = 0.0667;
		minRange = 0;
		minRangeProbab = 0.9;
		midRange = 20;
		midRangeProbab = 0.7;
		maxRange = 35;
		maxRangeProbab = 0.1;
		dispersion = 0.00163;
	};
	class single_medium_optics1 : Single
	{
		showToPlayer=0;
		requiredOpticType = 1;
		midRange = 125;
	};
	class single_far_optics2 : Single
	{
		showToPlayer=0;
		requiredOpticType = 2;

		minRange = 2;
		minRangeProbab = 0.1;
		midRange = 200;
		midRangeProbab = 0.7;
		maxRange = 420;
		maxRangeProbab = 0.05;
		aiRateOfFire = 3.5;
		aiRateOfFireDistance = 400;
	};
	class fullauto_medium : FullAuto
	{
		showToPlayer=0;
		burst = 2;
		burstRangeMax = 5;
		minRange = 2;
		minRangeProbab = 0.5;
		midRange = 50;
		midRangeProbab = 0.7;
		maxRange = 75;
		maxRangeProbab = 0.05;
		aiRateOfFire = 2;
		aiRateOfFireDistance = 75;
	};

	class WeaponSlotsInfo: WeaponSlotsInfo
	{
		mass = __EVAL(ITEM_ASVAL_MASS);
		class MuzzleSlot{};
		class CowsSlot : rhs_russian_rifle_scopes_slot {
			class compatibleItems: compatibleItems
			{
				rhs_acc_pso1m2=1;
				rhs_acc_pso1m21=1;
			};
		};
		class rhs_npz_slot: SlotInfo { compatibleItems[] = {"rhs_acc_npz"};};
		class PointerSlot {};
	};
	class LinkedItems {};

	rhs_npz		="rhs_weap_asval_npz";
	rhs_fold	="rhs_weap_asval_folded";
	baseWeapon	="rhs_weap_asval";

	rhs_pkas_type		="rhs_acc_pkas_asval";
	rhs_1p29_type		="rhs_acc_1p29_asval";
	rhs_pso1m2_type		="rhs_acc_pso1m2_asval";
	rhs_pso1m21_type	="rhs_acc_pso1m21";
	rhs_pgo7v_type		="rhs_acc_pgo7v_asval";
	rhs_pgo7v2_type		="rhs_acc_pgo7v2_asval";
	rhs_pgo7v3_type		="rhs_acc_pgo7v3_asval";
};


class rhs_weap_asval_folded : rhs_weap_asval
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_weap_asval_folded)
	scopeArsenal=0;
	model = "\rhsafrf\addons\rhs_weapons2\asval\rhs_asval_folded";
	baseweapon="rhs_weap_asval_folded";
	rhs_fold		= "rhs_weap_asval";
	rhs_fold_anim	= "RHS_GestureUnfoldAK74M";
	class WeaponSlotsInfo: WeaponSlotsInfo
	{
		mass = __EVAL(ITEM_ASVAL_MASS*ITEM_FOLDED_MODIFIER);
		class CowsSlot {};
		class rhs_npz_slot {};
	};
	inertia = 0.65;
	recoil = "rhs_recoil_asval_folded";
};

class rhs_weap_asval_grip : rhs_weap_asval
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_weap_asval_grip)
	displayName = "$STR_RHS_WEAP_ASVAL_GRIP";

	weaponInfoType = "rhs_rscOptics_asval_grip";
	model = "\rhsafrf\addons\rhs_weapons2\asval\rhs_asval_grip";

	hiddenSelections[] = {"camo1","camo2","camo3"};
	hiddenSelectionsTextures[] = {
		"rhsafrf\addons\rhs_weapons2\asval\data\asval_co.paa",
		"rhsafrf\addons\rhs_weapons2\asval\data\mag_co.paa",
		"rhsafrf\addons\rhs_weapons2\asval\data\grip_co.paa"
	};

	class WeaponSlotsInfo: WeaponSlotsInfo
	{
		class MuzzleSlot{};
		class CowsSlot : rhs_russian_rifle_scopes_slot {
			class compatibleItems: compatibleItems
			{
				rhs_acc_pso1m2	=1;
				rhs_acc_pso1m21	=1;
			};
		};
		class GripodSlot: rhs_russian_rifle_gripod_slot {};
		class rhs_npz_slot: SlotInfo { compatibleItems[] = {"rhs_acc_npz"};};
		class PointerSlot : rhs_russian_ris_side_slot {};
	};
	rhs_npz				= "rhs_weap_asval_grip_npz";
	rhs_fold			= "rhs_weap_asval_grip_folded";
	rhs_grip1_change	= "rhs_weap_asval_grip1";
	rhs_grip2_change	= "rhs_weap_asval_afg";
	rhs_grip3_change	= "rhs_weap_asval_grip1";
	baseWeapon			= "rhs_weap_asval_grip";
};

class rhs_weap_asval_grip1 : rhs_weap_asval_grip
{
	scope		= 1;
	handAnim[]	= {"OFP2_ManSkeleton","\rhsafrf\addons\rhs_c_weapons\anims\rhs_hand_asval_grip.rtm"};
	rhs_fold	= "rhs_weap_asval_folded_grip1";
};

class rhs_weap_asval_afg : rhs_weap_asval_grip
{
	scope		= 1;
	handAnim[]	= {"OFP2_ManSkeleton","\rhsafrf\addons\rhs_c_weapons\anims\rhs_hand_asval_afg.rtm"};
	rhs_fold	= "rhs_weap_asval_folded_afg";
};

class rhs_weap_asval_grip_folded : rhs_weap_asval_grip
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_weap_asval_grip_folded)
	scopeArsenal=0;
	scope=1;
	model = "\rhsafrf\addons\rhs_weapons2\asval\rhs_asval_grip_folded";
	class WeaponSlotsInfo: WeaponSlotsInfo
	{
		mass = __EVAL(ITEM_ASVAL_MASS*ITEM_FOLDED_MODIFIER);
		class CowsSlot {};
		class rhs_npz_slot {};
	};
	inertia				= 0.65;
	recoil				= "rhs_recoil_asval_folded";
	rhs_fold			= "rhs_weap_asval_grip";
	rhs_fold_anim		= "RHS_GestureUnfoldAK74M";
	rhs_grip1_change	= "rhs_weap_asval_folded_grip1";
	rhs_grip2_change	= "rhs_weap_asval_folded_afg";
	rhs_grip3_change	= "rhs_weap_asval_folded_grip1";
	baseweapon			= "rhs_weap_asval_grip_folded";
};
class rhs_weap_asval_folded_grip1 : rhs_weap_asval_grip_folded
{
	scope		= 1;
	handAnim[]	= {"OFP2_ManSkeleton","\rhsafrf\addons\rhs_c_weapons\anims\rhs_hand_asval_grip.rtm"};
	rhs_fold	= "rhs_weap_asval_grip1";
};

class rhs_weap_asval_folded_afg : rhs_weap_asval_grip_folded
{
	scope		= 1;
	handAnim[]	= {"OFP2_ManSkeleton","\rhsafrf\addons\rhs_c_weapons\anims\rhs_hand_asval_afg.rtm"};
	rhs_fold	= "rhs_weap_asval_afg";
};


class rhs_weap_asval_npz : rhs_weap_asval
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_weap_asval_npz)
	displayName = "$STR_RHS_WEAP_ASVAL_NPZ";

	model = "\rhsafrf\addons\rhs_weapons2\asval\rhs_asval_npz";

	class WeaponSlotsInfo: WeaponSlotsInfo
	{
		mass = __EVAL(ITEM_ASVAL_MASS + ITEM_NPZ_MASS);
		class MuzzleSlot{};
		class CowsSlot: rhs_picattinny_russian_rifle_scopes_slot {};
		class PointerSlot{};
		class rhs_npz_slot {};
	};
	rhs_fold="";
	rhs_npz="rhs_weap_asval";
	weaponInfoType = "rhs_rscOptics_ak74m_npz";
	baseWeapon="rhs_weap_asval_npz";
};

class rhs_weap_asval_grip_npz : rhs_weap_asval_grip
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_weap_asval_grip_npz)
	displayName = "$STR_RHS_WEAP_ASVAL_GRIP_NPZ";

	model = "\rhsafrf\addons\rhs_weapons2\asval\rhs_asval_grip_npz";

	weaponInfoType	= "rhs_rscOptics_ak74m_npz";

	class WeaponSlotsInfo: WeaponSlotsInfo
	{
		mass = __EVAL(ITEM_ASVAL_MASS + ITEM_NPZ_MASS);
		class MuzzleSlot{};
		class CowsSlot: rhs_picattinny_russian_rifle_scopes_slot {};
		class PointerSlot : rhs_russian_ris_side_slot {};
		class GripodSlot: rhs_russian_rifle_gripod_slot {};
		class rhs_npz_slot {};
	};
	rhs_npz				= "rhs_weap_asval_grip";
	rhs_grip1_change	= "rhs_weap_asval_npz_grip1";
	rhs_grip2_change	= "rhs_weap_asval_npz_afg";
	rhs_grip3_change	= "rhs_weap_asval_npz_grip1";
	baseWeapon			= "rhs_weap_asval_grip_npz";
};
class rhs_weap_asval_npz_grip1 : rhs_weap_asval_grip_npz
{
	scope = 1;
	handAnim[] = {"OFP2_ManSkeleton","\rhsafrf\addons\rhs_c_weapons\anims\rhs_hand_asval_grip.rtm"};
};

class rhs_weap_asval_npz_afg : rhs_weap_asval_grip_npz
{
	scope = 1;
	handAnim[] = {"OFP2_ManSkeleton","\rhsafrf\addons\rhs_c_weapons\anims\rhs_hand_asval_afg.rtm"};
};


class rhs_weap_vss : rhs_weap_asval
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_weap_vss)
	displayName = "$STR_RHS_WEAP_VSS";
	descriptionShort = "$STR_RHS_WEAP_VSS_DESC";
	fireLightDuration = 0;
	fireLightIntensity = 0;
	initSpeed = -1.0535;
	dexterity = 1.7;
	inertia = 0.45;

	weaponInfoType = "rhs_rscOptics_vss";

	magazines[] =
	{
		"rhs_10rnd_9x39mm_SP5",
		"rhs_10rnd_9x39mm_SP6",
		"rhs_20rnd_9x39mm_SP5",
		"rhs_20rnd_9x39mm_SP6"
	};

	model = "\rhsafrf\addons\rhs_weapons2\vss\rhs_vss";
	hiddenSelections[] = {"camo1","camo2","camo3"};
	hiddenSelectionsTextures[] = {
		"rhsafrf\addons\rhs_weapons2\asval\data\asval_co.paa",
		"rhsafrf\addons\rhs_weapons2\asval\data\mag_co.paa",
		"rhsafrf\addons\rhs_weapons2\vss\data\vss_stock_co.paa"
	};


	muzzles[] = {"this","SAFE"};
	// 600 RPM
	class Single : Single
	{
		reloadTime = 0.1;
		dispersion = 0.00143;
	};

	class FullAuto : FullAuto
	{
		reloadTime = 0.1;
		dispersion = 0.00143;
	};

	class WeaponSlotsInfo: WeaponSlotsInfo
	{
		mass = ITEM_VSS_MASS;
		class MuzzleSlot{};
		class CowsSlot : rhs_russian_rifle_scopes_slot {
			class compatibleItems: compatibleItems
			{
				rhs_acc_pso1m2=1;
				rhs_acc_pso1m21=1;
			};
		};
		class rhs_npz_slot: SlotInfo { compatibleItems[] = {"rhs_acc_npz"};};
		class PointerSlot {};
	};
	rhs_fold			= "";
	rhs_npz				= "rhs_weap_vss_npz";
	baseWeapon			= "rhs_weap_vss";
};

class rhs_weap_vss_grip : rhs_weap_vss
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_weap_vss_grip)
	displayName = "$STR_RHS_WEAP_VSS_GRIP";


	model = "\rhsafrf\addons\rhs_weapons2\vss\rhs_vss_grip";
	hiddenSelections[] = {"camo1","camo2","camo3"};
	hiddenSelectionsTextures[] = {
		"rhsafrf\addons\rhs_weapons2\asval\data\asval_co.paa",
		"rhsafrf\addons\rhs_weapons2\asval\data\mag_co.paa",
		"rhsafrf\addons\rhs_weapons2\vss\data\vss_stock_co.paa"
	};

	class WeaponSlotsInfo: WeaponSlotsInfo
	{
		class MuzzleSlot{};
		class CowsSlot : rhs_russian_rifle_scopes_slot {
			class compatibleItems: compatibleItems
			{
				rhs_acc_pso1m2=1;
				rhs_acc_pso1m21=1;
			};
		};
		class rhs_npz_slot: SlotInfo { compatibleItems[] = {"rhs_acc_npz"};};
		class GripodSlot: rhs_russian_rifle_gripod_slot {};
		class PointerSlot : rhs_russian_ris_side_slot {};
	};
	rhs_npz				= "rhs_weap_vss_grip_npz";
	rhs_grip1_change	= "rhs_weap_vss_grip1";
	rhs_grip2_change	= "rhs_weap_vss_afg";
	rhs_grip3_change	= "rhs_weap_vss_grip1";
	baseWeapon			= "rhs_weap_vss_grip";
};
class rhs_weap_vss_grip1 : rhs_weap_vss_grip
{
	scope = 1;
	handAnim[] = {"OFP2_ManSkeleton","\rhsafrf\addons\rhs_c_weapons\anims\rhs_hand_asval_grip.rtm"};
};

class rhs_weap_vss_afg : rhs_weap_vss_grip
{
	scope = 1;
	handAnim[] = {"OFP2_ManSkeleton","\rhsafrf\addons\rhs_c_weapons\anims\rhs_hand_asval_afg.rtm"};
};


class rhs_weap_vss_npz : rhs_weap_vss
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_weap_vss_npz)
	displayName = "$STR_RHS_WEAP_VSS_NPZ";

	model = "\rhsafrf\addons\rhs_weapons2\vss\rhs_vss_npz";
	hiddenSelections[] = {"camo1","camo2","camo3","camo4"};
	hiddenSelectionsTextures[] = {
		"rhsafrf\addons\rhs_weapons2\asval\data\asval_co.paa",
		"rhsafrf\addons\rhs_weapons2\asval\data\mag_co.paa",
		"rhsafrf\addons\rhs_weapons2\vss\data\vss_stock_co.paa",
		"rhsafrf\addons\rhs_weapons2\asval\data\grip_co.paa"
	};

	class WeaponSlotsInfo: WeaponSlotsInfo
	{
		mass = __EVAL(ITEM_VSS_MASS + ITEM_NPZ_MASS);
		class MuzzleSlot{};
		class CowsSlot: rhs_picattinny_russian_rifle_scopes_slot {};
		class PointerSlot{};
		class rhs_npz_slot {};
	};
	rhs_npz="rhs_weap_vss";
	weaponInfoType = "rhs_rscOptics_ak74m_npz";
	baseWeapon="rhs_weap_vss_npz";
};

class rhs_weap_vss_grip_npz : rhs_weap_vss
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_weap_vss_grip_npz)
	displayName = "$STR_RHS_WEAP_VSS_GRIP_NPZ";

	weaponInfoType	= "rhs_rscOptics_ak74m_npz";
	model = "\rhsafrf\addons\rhs_weapons2\vss\rhs_vss_grip_npz";

	class WeaponSlotsInfo: WeaponSlotsInfo
	{
		mass = __EVAL(ITEM_VSS_MASS + ITEM_NPZ_MASS);
		class MuzzleSlot{};
		class CowsSlot: rhs_picattinny_russian_rifle_scopes_slot {};
		class PointerSlot : rhs_russian_ris_side_slot {};
		class GripodSlot: rhs_russian_rifle_gripod_slot {};
		class rhs_npz_slot {};
	};
	rhs_npz				= "rhs_weap_vss_grip";
	rhs_grip1_change	= "rhs_weap_vss_npz_grip1";
	rhs_grip2_change	= "rhs_weap_vss_npz_afg";
	rhs_grip3_change	= "rhs_weap_vss_npz_grip1";
	baseWeapon			= "rhs_weap_vss_grip_npz";
};
class rhs_weap_vss_npz_grip1 : rhs_weap_vss_grip_npz
{
	scope = 1;
	handAnim[] = {"OFP2_ManSkeleton","\rhsafrf\addons\rhs_c_weapons\anims\rhs_hand_asval_grip.rtm"};
};

class rhs_weap_vss_npz_afg : rhs_weap_vss_grip_npz
{
	scope = 1;
	handAnim[] = {"OFP2_ManSkeleton","\rhsafrf\addons\rhs_c_weapons\anims\rhs_hand_asval_afg.rtm"};
};


//ported a2 weapons for test purposes
class rhs_weap_svd : rhs_weap_ak74m
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_weap_svd)
	baseWeapon="rhs_weap_svd";
	weaponInfoType = "rhs_rscOptics_svd";
	scope=1;

	// not visible in arsenal
	displayname = "$STR_RHS_SVD_NAME";
	descriptionShort = "$STR_RHS_SVD_DESC";
	recoil = "rhs_recoil_svd";
	aimTransitionSpeed = 0.75;

	class WeaponSlotsInfo: WeaponSlotsInfo
	{
		mass = __EVAL(ITEM_SVD_MASS);
		class MuzzleSlot: rhs_russian_svd_muzzle_slot {};
		class CowsSlot: rhs_russian_svd_scopes_slot{};
		class PointerSlot {};
	};


	model = "\rhsafrf\addons\rhs_weapons\SVD\svd_polymer";

	discreteDistance[] = {440,100,200,300,400,500,600,700,800,900,1000,1100,1200};
	maxZeroing = 1200;

	reloadAction = "RHS_GestureReloadSVDS";
	handAnim[] = {"OFP2_ManSkeleton","\rhsafrf\addons\rhs_c_weapons\anims\rhs_hand_svd_mag.rtm"};

	magazines[] =
	{
		rhs_10Rnd_762x54mmR_7N1,
		rhs_10Rnd_762x54mmR_7N14
	};
	magazineWell[] = {CBA_762x54R_SVD};

	muzzles[] = {"this","SAFE"};
	modes[]=
	{
		"Single",
		"single_close_optics1",
		"single_medium_optics1",
		"single_far_optics1"
	};
	class Single: Mode_SemiAuto
	{
		reloadTime		= 0.085;
		dispersion		= 0.0007;
		minRange		= 2;
		minRangeProbab	= 0.3;
		midRange		= 350;
		midRangeProbab	= 0.7;
		maxRange		= 500;
		maxRangeProbab	= 0.05;
	};
	class single_close_optics1: Single
	{
		requiredOpticType		= 1;
		showToPlayer			= 0;
		minRange				= 2;
		minRangeProbab			= 0.05;
		midRange				= 300;
		midRangeProbab			= 0.8;
		maxRange				= 500;
		maxRangeProbab			= 0.0099;
		aiRateOfFire			= 1;
		aiRateOfFireDistance	= 300;
		aiRateOfFireDispersion	= 2;
	};
	class single_medium_optics1: single_close_optics1
	{
		minRange				= 300;
		minRangeProbab			= 0.05;
		midRange				= 500;
		midRangeProbab			= 0.7;
		maxRange				= 700;
		maxRangeProbab			= 0.05;
		aiRateOfFire			= 1;
		aiRateOfFireDistance	= 500;
		aiRateOfFireDispersion	= 2;
	};
	class single_far_optics1: single_medium_optics1
	{
		requiredOpticType		= 2;
		minRange				= 300;
		minRangeProbab			= 0.05;
		midRange				= 600;
		midRangeProbab			= 0.4;
		maxRange				= 900;
		maxRangeProbab			= 0.05;
		aiRateOfFire			= 2;
		aiRateOfFireDistance	= 600;
		aiRateOfFireDispersion	= 2;
	};
	class LinkedItems {};
	reloadMagazineSound[]={"A3\sounds_f\weapons\reloads\new_ebr",0.63095701,1,35};
	hiddenSelections[] = {};
	hiddenSelectionsTextures[] = {};
	inertia = 0.65;
	dexterity = 1.4;

	rhs_pso1m2_type="rhs_acc_pso1m2";
	rhs_pso1m21_type="rhs_acc_pso1m21_svd";
};

class rhs_weap_svdp : rhs_weap_svd
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_weap_svdp)
	scope=2;
	displayname = "$STR_RHS_WEAP_SVDM";

	model = "\rhsafrf\addons\rhs_weapons\SVD\svd_polymer";

	discreteDistanceCameraPoint[] = {"eye","eye_100","eye_200","eye_300","eye_400","eye_500","eye_600","eye_700","eye_800","eye_900","eye_1000","eye_1100","eye_1200"};

	modes[]=
	{
		"Single",
		"single_close_optics1",
		"single_medium_optics1",
		"single_far_optics1"
	};

	class WeaponSlotsInfo: WeaponSlotsInfo
	{
		mass = __EVAL(ITEM_SVDM_MASS);
		class MuzzleSlot: rhs_russian_svd_muzzle_slot {};
		class CowsSlot: rhs_russian_svd_scopes_slot{};
		class PointerSlot {ICON_OVERLAY_DISABLED};
	};

	class Single: Mode_SemiAuto
	{
		reloadTime		= 0.085;
		dispersion		= DISPERSION_MOA(2.2);
		minRange		= 2;
		minRangeProbab	= 0.3;
		midRange		= 350;
		midRangeProbab	= 0.7;
		maxRange		= 500;
		maxRangeProbab	= 0.05;
	};

	class single_close_optics1: Single
	{
		requiredOpticType		= 1;
		showToPlayer			= 0;
		minRange				= 2;
		minRangeProbab			= 0.05;
		midRange				= 300;
		midRangeProbab			= 0.8;
		maxRange				= 500;
		maxRangeProbab			= 0.0099;
		aiRateOfFire			= 1;
		aiRateOfFireDistance	= 300;
		aiRateOfFireDispersion	= 2;
	};
	class single_medium_optics1: single_close_optics1
	{
		minRange				= 300;
		minRangeProbab			= 0.05;
		midRange				= 500;
		midRangeProbab			= 0.7;
		maxRange				= 700;
		maxRangeProbab			= 0.05;
		aiRateOfFire			= 1;
		aiRateOfFireDistance	= 500;
		aiRateOfFireDispersion	= 2;
	};
	class single_far_optics1: single_medium_optics1
	{
		requiredOpticType		= 2;
		minRange				= 300;
		minRangeProbab			= 0.05;
		midRange				= 600;
		midRangeProbab			= 0.4;
		maxRange				= 900;
		maxRangeProbab			= 0.05;
		aiRateOfFire			= 2;
		aiRateOfFireDistance	= 600;
		aiRateOfFireDispersion	= 2;
	};

	hiddenSelections[] = {"Camo1", "Camo2"}; //turned for now - selections need to be tweaked on model
	hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_weapons\svd\data\svdp_co.paa", "rhsafrf\addons\rhs_weapons\svd\data\svds_co.paa"};

	rhs_npz="rhs_weap_svdp_npz";
	baseWeapon="rhs_weap_svdp";
};

class rhs_weap_svdp_npz : rhs_weap_svdp
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_weap_svdp_npz)
	displayName = $STR_RHS_WEAP_SVDM_NPZ0;

	model = "\rhsafrf\addons\rhs_weapons\SVD\svd_polymer_npz";

	class WeaponSlotsInfo: WeaponSlotsInfo
	{
		mass = __EVAL(ITEM_SVDM_MASS + ITEM_NPZ_MASS);
		class MuzzleSlot: MuzzleSlot {};
		class CowsSlot: rhs_picattinny_russian_rifle_scopes_slot {};
		class PointerSlot {};
		class rhs_npz_slot {};
	};
	rhs_npz="rhs_weap_svdp";
	weaponInfoType = "rhs_rscOptics_svdp_npz";
	baseWeapon="rhs_weap_svdp_npz";
};


class rhs_weap_svdp_wd : rhs_weap_svdp
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_weap_svdp_wd)
	displayname = "$STR_RHS_WEAP_SVDM_CAMO";
	model = "\rhsafrf\addons\rhs_weapons\SVD\svd_polymer_wd";
	rhs_npz="rhs_weap_svdp_wd_npz";
	baseWeapon="rhs_weap_svdp_wd";
};

class rhs_weap_svdp_wd_npz : rhs_weap_svdp_wd
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_weap_svdp_wd_npz)
	displayName = $STR_RHS_WEAP_SVDM_CAMO_NPZ0;

	model = "\rhsafrf\addons\rhs_weapons\SVD\svd_polymer_wd_npz";

	class WeaponSlotsInfo: WeaponSlotsInfo
	{
		mass = __EVAL(ITEM_SVDM_MASS + ITEM_NPZ_MASS);
		class MuzzleSlot: MuzzleSlot {};
		class CowsSlot: rhs_picattinny_russian_rifle_scopes_slot {};
		class PointerSlot {};
		class rhs_npz_slot {};
	};
	rhs_npz="rhs_weap_svdp_wd";
	weaponInfoType = "rhs_rscOptics_svdp_wd_npz";
	baseWeapon="rhs_weap_svdp_wd_npz";
};

class rhs_weap_svds : rhs_weap_svdp
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_weap_svds)
	displayname = "$STR_RHS_WEAP_SVDS";
	model = "\rhsafrf\addons\rhs_weapons\SVD\svds";
	rhs_npz="rhs_weap_svds_npz";

	class WeaponSlotsInfo: WeaponSlotsInfo
	{
		mass = __EVAL(ITEM_SVDS_MASS);
	};
	class Single: Single
	{
		dispersion			= DISPERSION_MOA(2.4);
	};
	//830 m/s (2,723 ft/s) (SVD)
	//810 m/s (2,657.5 ft/s) (SVDS)
	initSpeed = -0.9759036;
	baseWeapon="rhs_weap_svds";
};

class rhs_weap_svds_npz : rhs_weap_svds
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_weap_svds_npz)
	displayName = $STR_RHS_WEAP_SVDS_NPZ0;

	model = "\rhsafrf\addons\rhs_weapons\SVD\svds_npz";

	class WeaponSlotsInfo: WeaponSlotsInfo
	{
		mass = __EVAL(ITEM_SVDS_MASS + ITEM_NPZ_MASS);
		class MuzzleSlot: MuzzleSlot {};
		class CowsSlot: rhs_picattinny_russian_rifle_scopes_slot {};
		class PointerSlot {};
		class rhs_npz_slot {};
	};
	rhs_npz="rhs_weap_svds";
	weaponInfoType = "rhs_rscOptics_svds_npz";
	baseWeapon="rhs_weap_svds_npz";
};

class rhs_weap_orsis_Base_F: Rifle_Base_F
{
	dlc = "RHS_AFRF";

	magazines[] = {"rhs_5Rnd_338lapua_t5000"};
	magazineWell[] = {CBA_338LM_T5000};

	// TODO: Librbary description required
	class Library
	{
		libTextDesc = "";
	};

	optics = 0;

	reloadAction = "RHS_GestureReloadOrsis";
	handAnim[] = {"OFP2_ManSkeleton","\rhsafrf\addons\rhs_c_weapons\anims\rhs_hand_orsis.rtm"};
	maxRecoilSway = 0.0125;
	swayDecaySpeed = 1.25;
	recoil = "rhs_recoil_orsis";

	class GunParticles : GunParticles
	{
		class SecondEffect
		{
			positionName = "Nabojnicestart";
			directionName = "Nabojniceend";
			effectName = "RifleAssaultCloud";
		};
		class RHS_BarrelRefract
		{
			positionName = "usti hlavne";
			directionName = "usti hlavne up";
			effectName = "RHS_BarrelRefract";
		};
	};

	weaponInfoType = "RscWeaponZeroing";
	discreteDistance[] = {100};
	discreteDistanceInitIndex = 0;
	maxZeroing = 1800;

	class WeaponSlotsInfo: WeaponSlotsInfo
	{
		class CowsSlot: rhs_picattinny_russian_rifle_scopes_slot {};
		class PointerSlot {};
		class UnderBarrelSlot: rhs_russian_rifle_underbarrel_slot {};
	};

	opticsZoomMin = 0.275;
	opticsZoomMax = 1.1;
	opticsZoomInit = 0.75;
	distanceZoomMin = 300;
	distanceZoomMax = 300;

	descriptionShort = "Sniper Rifle<br />Caliber: .338 Lapua";
	inertia = 0.65;
	dexterity = 1.8;
	aimTransitionSpeed = 0.5;
	caseless[] = {"",1,1,1};

	soundBullet[] = {"caseless",1};
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

	reloadMagazineSound[] = {"A3\sounds_f\weapons\M320\M320_reload",0.1,1,30};
	hiddenSelections[] = {"Camo"};
	hiddenSelectionsTextures[] = {"\rhsafrf\addons\rhs_weapons3\orsis\data\t5000_co.paa"};

	muzzles[]={"this","SAFE"};
	class SAFE: RHS_SAFE_BASE {};
	class Eventhandlers: Eventhandlers
	{
		class RHS_BoltAction {
			fired = "[_this select 0,_this select 1,_this select 1] call rhs_fnc_boltAction;";
		};
	};
	rhs_boltActionSound[] ={"rhsafrf\addons\rhs_c_weapons\sounds\bolt.wss", 1.42, 1, 20};
	rhs_boltActionAnim = "RHS_GestureRechamberOrsis";

};

class rhs_weap_t5000 : rhs_weap_orsis_Base_F
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_weap_t5000)
	scope = 2;

	displayName = $STR_RHS_WEAP_T5000;

	model = "\rhsafrf\addons\rhs_weapons3\orsis\rhs_t5000.p3d";

	UiPicture = "\A3\weapons_f\data\UI\icon_regular_CA.paa";
	handAnim[] = {"OFP2_ManSkeleton","\rhsafrf\addons\rhs_c_weapons\anims\rhs_hand_orsis.rtm"};

	weaponInfoType = "rhs_orsis_handler";

	class WeaponSlotsInfo: WeaponSlotsInfo
	{
		mass = 132.2;
	};

	class ItemInfo
	{
		priority = 1;
		RMBhint = "T-5000";
		onHoverText = "T-5000 .338 sniper rifle";
	};
	baseWeapon="rhs_weap_t5000";

};

class pdw2000_base_F;

class hgun_PDW2000_F : pdw2000_base_F {
	class Single;
	class FullAuto;
	class WeaponSlotsInfo;
};

class rhs_weap_pp2000: hgun_PDW2000_F
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_weap_pp2000)
	dlc = "RHS_AFRF";
	scope=2;
	displayName = "PP-2000";
	descriptionShort = "PP-2000";

	weaponInfoType = "rhs_rscOptics_pp2000";

	magazineReloadSwitchPhase = 0.3;
	initSpeed = -0.97826; //450m/s from 7n21
	recoil = "rhs_recoil_pp2000";
	model = "\rhsafrf\addons\rhs_weapons2\PP2000\rhs_PP2000";

	handAnim[] = {"OFP2_ManSkeleton","\rhsafrf\addons\rhs_c_weapons\anims\rhs_hand_pp2000_weapon.rtm"};

	class SAFE: RHS_SAFE_BASE {};
	muzzles[]={"this","SAFE"};

	magazines[] =
	{
		"rhs_mag_9x19mm_7n21_20",
		"rhs_mag_9x19mm_7n31_20",
		"rhs_mag_9x19mm_7n21_44",
		"rhs_mag_9x19mm_7n31_44"
	};
	magazineWell[] = {CBA_9x19_PP2000};

	modes[] = {"Single", "FullAuto"};
	class Single : Single {
		reloadTime = 0.075; //600-800, set at 800 rpm
		dispersion = 0.00203;
		minRange = 2;
		minRangeProbab = 0.3;
		midRange = 200;
		midRangeProbab = 0.7;
		maxRange = 350;
		maxRangeProbab = 0.05;
		aiRateOfFire = 2;
		aiRateOfFireDistance = 500;
	};
	class FullAuto : FullAuto {
		reloadTime = 0.075; //600-800, set at 800 rpm
		dispersion = 0.00203;
		minRange = 0;
		minRangeProbab = 0.1;
		midRange = 25;
		midRangeProbab = 0.7;
		maxRange = 70;
		maxRangeProbab = 0.05;
		aiRateOfFire = 0.2;
		aiRateOfFireDistance = 50;
	};
	class WeaponSlotsInfo: WeaponSlotsInfo
	{
		holsterScale = 0;
		class MuzzleSlot {};
		class CowsSlot: rhs_picattinny_russian_rifle_scopes_slot_short {};
	};
	rhs_fold="rhs_weap_pp2000_folded";
	baseWeapon="rhs_weap_pp2000";
};

//pistol
class rhs_weap_pp2000_folded: rhs_weap_pp2000
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_weap_pp2000_folded)
	type = 2;
	mass = 30.8;
	recoil = "rhs_recoil_pp2000_folded";
	reloadAction = "GestureReloadPistol";
	model = "\rhsafrf\addons\rhs_weapons2\PP2000\rhs_PP2000_folded_pistol";

	handAnim[] = {"OFP2_ManSkeleton","\rhsafrf\addons\rhs_c_weapons\anims\rhs_hand_pp2000_pistol.rtm"};

	class SAFE_PISTOL: RHS_SAFE_BASE {};
	muzzles[]={"this","SAFE_PISTOL"};

	displayName = "PP-2000 (Folded)";
	descriptionShort = "PP-2000 (Folded)";
	rhs_fold="rhs_weap_pp2000";
	baseWeapon="rhs_weap_pp2000_folded";
};


class rhs_weap_an94_base: Rifle_Base_F
{
	dlc = "RHS_AFRF";

	model = "\rhsafrf\addons\rhs_weapons\rhs_ak74m";
	handAnim[] = {"OFP2_ManSkeleton","\rhsafrf\addons\rhs_c_weapons\anims\rhs_hand_ak_stock.rtm"};
	hiddenSelections[] = {};
	hiddenSelectionsTextures[] = {};

	descriptionShort = $STR_RHS_CFGWEAPONS_RIFLE_AK74M1;

	magazines[] =
	{
		rhs_30Rnd_545x39_7N10_AK,
		rhs_30Rnd_545x39_7N10_plum_AK,
		rhs_30Rnd_545x39_7N10_desert_AK,
		rhs_30Rnd_545x39_7N10_camo_AK
	};
	magazineWell[] =
	{
		AK_545x39,
		CBA_545x39_AK,
		CBA_545x39_RPK
	};
	optics = 0;

	reloadAction = "RHS_GestureReloadAK_1hand";
	magazineReloadSwitchPhase = 0.3;
	maxRecoilSway = 0.0125;
	swayDecaySpeed = 1.25;
	recoil = "rhs_recoil_an94";
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

	weaponInfoType = "RscWeaponZeroing";
	discreteDistance[] = {200,300,400,500,600,700};
	discreteDistanceInitIndex = 0;

	class WeaponSlotsInfo: WeaponSlotsInfo
	{
		class MuzzleSlot: rhs_russian_ak74_muzzle_slot {};
		class CowsSlot: rhs_russian_rifle_scopes_slot{};
		class rhs_npz_slot: SlotInfo { compatibleItems[] = {"rhs_acc_npz"};};
		class PointerSlot : rhs_russian_ak_barrel_slot {};
	};

	opticsZoomMin = 0.25;
	opticsZoomMax = 1.1;
	opticsZoomInit = 0.75;
	distanceZoomMin = 300;
	distanceZoomMax = 300;

	dexterity = 1.8;

	class SAFE: RHS_SAFE_BASE {};
	class FOLD: RHS_FOLD_BASE {};
	muzzles[]={"this","SAFE","FOLD"};
	modes[] = {"Single","Burst","Single_AI","FullAuto","single_medium_optics1","single_far_optics2","fullauto_medium"};

	BULLET_SOUNDS_762
	changeFiremodeSound[] = {"A3\sounds_f\weapons\closure\firemode_changer_2",0.56234133,1,20};

	#define AN94_SOUND sounds[] = {"StandardSound"};class StandardSound {soundSetShot[] = {"RHS_ak74_Shot_SoundSet","RHS_rifle_small_Tail_SoundSet"};};
	class Single: Mode_SemiAuto
	{
		WEAPON_RPM(600)
		aiBurstTerminable	= 1;
		dispersion			= 0.00093;
		minRange			= 2;
		minRangeProbab		= 0.3;
		midRange			= 100;
		midRangeProbab		= 0.7;
		maxRange			= 250;
		maxRangeProbab		= 0.04;
		AN94_SOUND
	};
	class Single_AI: Single
	{
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
	class Burst: Mode_Burst
	{
		textureType = "dual";
		displayname = "HYPER BURST!!11oneone";
		WEAPON_RPM(1800)
		burst = 2;
		dispersion			= 0.00093;
		minRange			= 2;
		minRangeProbab		= 0.3;
		midRange			= 200;
		midRangeProbab		= 0.7;
		maxRange			= 250;
		maxRangeProbab		= 0.04;
		AN94_SOUND
	};
	class FullAuto: Mode_FullAuto
	{
		aiBurstTerminable	= 1;
		WEAPON_RPM(600)
		dispersion			= 0.00093;
		minRange			= 0;
		minRangeProbab		= 0.9;
		midRange			= 15;
		midRangeProbab		= 0.7;
		maxRange			= 30;
		maxRangeProbab		= 0.1;
		aiRateOfFire		= 1e-006;
		AN94_SOUND
	};
	class single_medium_optics1: Single
	{
		requiredOpticType		= 1;
		showToPlayer			= 0;
		minRange				= 2;
		minRangeProbab			= 0.2;
		midRange				= 550;
		midRangeProbab			= 0.7;
		maxRange				= 700;
		maxRangeProbab			= 0.1;
		aiRateOfFire			= 3;
		aiRateOfFireDistance	= 600;
		aiRateOfFireDispersion	= 3;
	};
	class single_far_optics2: single_medium_optics1
	{
		requiredOpticType = 2;
	};
	class fullauto_medium: FullAuto
	{
		showToPlayer			= 0;
		burst					= 2;
		burstRangeMax			= 5;
		minRange				= 2;
		minRangeProbab			= 0.5;
		midRange				= 75;
		midRangeProbab			= 0.7;
		maxRange				= 150;
		maxRangeProbab			= 0.05;
		aiRateOfFire			= 1.0;
		aiRateOfFireDispersion	= 2;
	};

	class GP25Muzzle: GP25_Base {};

	aiDispersionCoefY = 10;
	aiDispersionCoefX = 8;

	drySound[] = {"A3\sounds_f\weapons\Other\dry_1",0.562341,1,10};
	reloadMagazineSound[] = {"A3\Sounds_F\weapons\Khaybar\reload_khaibar",1,1,10};

	class Eventhandlers: Eventhandlers
	{
		class RHS_AN94_Handler 
		{
			fired = "_this call rhs_fnc_an94_fired;";
		};
	};
};
class rhs_weap_an94: rhs_weap_an94_base
{
	scope = 1;
	displayname = "AN-94";
	baseweapon = "rhs_weap_an94";
};




class rhs_weap_rifle_empty: rhs_weap_ak74m_Base_F
{
	scope = 1;
	displayname	= "Magazine proxy picture";
	model		= rhsafrf\addons\rhs_weapons\rhs_empty_rifle;
	magazineWell[] =
	{
		RPG7,
		AK_545x39,
		AK_762x39,
		CBA_762x54R_SVD,
		CBA_9x39_VSS,
		CBA_762x51_SCAR,
		STANAG_556x45,
		M249_556x45,
		M240_762x51,
		CBA_762x51_FAL
	};
	class WeaponSlotsInfo
	{
		mass = 132.2;
		class DummySlot1: rhs_optics_debug {linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";};
		class DummySlot2: rhs_bipod_debug {linkProxy = "\a3\Data_f\proxies\weapon_slots\SIDE";};
		class DummySlot3: rhs_grip_debug {linkProxy = "\a3\data_f_mark\proxies\weapon_slots\underbarrel";};
		class DummySlot4: rhs_side_debug {linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";};
		class DummySlot5: rhs_muzzle_debug {linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";};
	};
};
class rhs_weap_rifle_empty_front: rhs_weap_rifle_empty
{
	model		= rhsafrf\addons\rhs_weapons\rhs_empty_rifle_front;
};
class rhs_weap_rifle_empty_m249: rhs_weap_rifle_empty
{
	model		= rhsafrf\addons\rhs_weapons\rhs_empty_rifle_m249;
};

