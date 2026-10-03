
class Rifle;
class Rifle_Base_F : Rifle
{
	class WeaponSlotsInfo;
	class GunParticles;
	class Eventhandlers;
};

class Pistol;
class Pistol_Base_F : Pistol
{
	class WeaponSlotsInfo;
	class GunParticles;
};

class SMG_01_Base;
class SMG_01_F : SMG_01_Base
{
	class Single;
	class FullAuto;
	class WeaponSlotsInfo;
	class GunParticles;
};

class Rifle_Long_Base_F : Rifle_Base_F
{
	class WeaponSlotsInfo;
};

class EBR_base_F;
class srifle_EBR_F : EBR_base_F
{
	class WeaponSlotsInfo;
	class GunParticles;
};

class UGL_F;
class GP25_Base: UGL_F
{
	class Single;
};

class RHS_SAFE_BASE;
class RHS_FOLD_BASE;

class PBG40_Base: GP25_Base
{
	displayName = $STR_RHSSAF_PBG40_NAME;
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
	modes[] = {"Single"};
	class Single: Single
	{
		soundSetShot[] = {"rhs_gp25_shot_SoundSet","UGL_Tail_SoundSet","UGL_InteriorTail_SoundSet"};
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
	discreteDistance[] = {50,100,150,200,250,300,350,400};
	discreteDistanceCameraPoint[] = {"OP_eye","OP_eye1","OP_eye2","OP_eye3","OP_eye4","OP_eye5","OP_eye6","OP_eye7"};
	discreteDistanceInitIndex = 2;
	magazineReloadSwitchPhase = 0.36;
};

class RifleGrenade_Base: GP25_Base
{
	displayName = $STR_RIFLEGRENADE_BASE_DISPLAYNAME;
	descriptionShort = "Rifle Grenade launcher<br/>Caliber: 22mm";

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
			begin1[] = {"rhsafrf\addons\rhs_sounds\ugl\gp-25_1",0.70794576,1,200};
			begin2[] = {"rhsafrf\addons\rhs_sounds\ugl\gp-25_2",0.70794576,1,200};
			soundBegin[] = {"begin1",0.5,"begin2",0.5};

			closure1[] = {"A3\sounds_f\weapons\closure\closure_rifle_6.wss",3.1622777,1,300};
			closure2[] = {"A3\sounds_f\weapons\closure\closure_rifle_7.wss",3.1622777,1,300};
			soundClosure[] = {"closure1",0.5,"closure2",0.5};
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

class rhs_weap_m70_base: Rifle_Base_F
{

	SCOPE_PROTECTED;
	DLC_AUTHOR;
	magazines[] =
	{
		"rhssaf_30Rnd_762x39mm_M67",
		"rhssaf_30Rnd_762x39mm_M78_tracer",
		"rhssaf_30Rnd_762x39_M82_api",
		"rhs_30Rnd_762x39mm",
		"rhs_30Rnd_762x39mm_tracer",
		"rhs_30Rnd_762x39mm_89",
		"rhs_30Rnd_762x39mm_U"
	};
	magazineReloadSwitchPhase = 0.25;

	// TODO: Librbary description required
	class Library
	{
		libTextDesc = "";
	};

	optics = 0;

	jsrs_soundeffect = "JSRS2_Distance_Effects_kaybhar";
	//reloadAction = "RHS_GestureReloadAK";
	reloadAction = "RHS_GestureReloadAK762";
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

	descriptionShort = $STR_A3_CfgWeapons_XM_base_F0;
	handAnim[] = {"OFP2_ManSkeleton","\rhssaf\addons\rhssaf_c_weapons\anims\rhs_hand_m70_stock.rtm"};
	dexterity = 1.8;

	class SAFE: RHS_SAFE_BASE {};
	class PBG40Muzzle: PBG40_Base {};
	class RGMuzzle: RifleGrenade_Base {};
	muzzles[]={"this","SAFE"};

	bullet1[] = {"A3\sounds_f\weapons\shells\7_62\metal_762_01", 0.630957, 1, 15};
	bullet2[] = {"A3\sounds_f\weapons\shells\7_62\metal_762_02", 0.630957, 1, 15};
	bullet3[] = {"A3\sounds_f\weapons\shells\7_62\metal_762_03", 0.630957, 1, 15};
	bullet4[] = {"A3\sounds_f\weapons\shells\7_62\metal_762_04", 0.630957, 1, 15};
	bullet5[] = {"A3\sounds_f\weapons\shells\7_62\dirt_762_01", 0.630957, 1, 15};
	bullet6[] = {"A3\sounds_f\weapons\shells\7_62\dirt_762_02", 0.630957, 1, 15};
	bullet7[] = {"A3\sounds_f\weapons\shells\7_62\dirt_762_03", 0.630957, 1, 15};
	bullet8[] = {"A3\sounds_f\weapons\shells\7_62\dirt_762_04", 0.630957, 1, 15};
	bullet9[] = {"A3\sounds_f\weapons\shells\7_62\grass_762_01", 0.630957, 1, 15};
	bullet10[] = {"A3\sounds_f\weapons\shells\7_62\grass_762_02", 0.630957, 1, 15};
	bullet11[] = {"A3\sounds_f\weapons\shells\7_62\grass_762_03", 0.630957, 1, 15};
	bullet12[] = {"A3\sounds_f\weapons\shells\7_62\grass_762_04", 0.630957, 1, 15};
	soundBullet[] = {"bullet1", 0.083, "bullet2", 0.083, "bullet3", 0.083, "bullet4", 0.083, "bullet5", 0.083, "bullet6", 0.083, "bullet7", 0.083, "bullet8", 0.083, "bullet9", 0.083, "bullet10", 0.083, "bullet11", 0.083, "bullet12", 0.083};

	changeFiremodeSound[]=
	{
		"A3\sounds_f\weapons\closure\firemode_changer_2",
		0.56234133,
		1,
		20
	};

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

	drySound[] = {"A3\sounds_f\weapons\Other\dry_1",0.562341,1,10};
	reloadMagazineSound[] = {"A3\Sounds_F\weapons\Khaybar\reload_khaibar",1,1,10};
};

class rhs_weap_m70ab2 : rhs_weap_m70_base
{
	INVENTORY_PICTURE(rhs_weap_m70ab2)
	SCOPE_PUBLIC;

	DLC_AUTHOR;
	displayName = $STR_RHSSAF_WEAP_M70AB2;
	descriptionShort = $STR_RHS_WEAP_M70AB2_DESCRIPTIONSHORT;

	model = "\rhssaf\addons\rhssaf_m_weapon_m70\rhs_m70ab2";
	UiPicture = "\rhssaf\addons\rhssaf_c_weapons\icons\saf_m70ab2_gear_x.paa";

	discreteDistanceCameraPoint[] = {"eye","eye_100","eye_200","eye_300","eye_400","eye_500","eye_600","eye_700","eye_800","eye_900","eye_1000"};
	discreteDistance[] = {350,100,200,300,400,500,600,700,800,900,1000};
	discreteDistanceInitIndex = 0;
	cameraDir="eye_look";

	weaponInfoType = "rhs_rscOptics_m70ab2";

	dexterity = 1.81;

	recoil = "recoil_mk20";
	recoilProne = "assaultRifleBase";

	muzzles[]={"this","RGMuzzle","SAFE"};
	magazineWell[] =
	{
		AK_762x39,
		CBA_762x39_AK,
		CBA_762x39_RPK
	};

	class WeaponSlotsInfo: WeaponSlotsInfo
	{
		mass = 87.34;
	};
	rhs_fold="rhs_weap_m70ab2_fold";
  baseWeapon="rhs_weap_m70ab2";
};

class rhs_weap_m70ab2_fold : rhs_weap_m70ab2
{
	INVENTORY_PICTURE(rhs_weap_m70ab2_fold)
	SCOPE_PRIVATE;

	DLC_AUTHOR;
	displayName = $STR_RHSSAF_WEAP_M70AB2_FOLD;

	model = "\rhssaf\addons\rhssaf_m_weapon_m70\rhs_m70ab2_fold";
	UiPicture = "\rhssaf\addons\rhssaf_c_weapons\icons\saf_m70ab2_gear_x.paa";
	recoil = "recoil_mmg_01";
	class WeaponSlotsInfo: WeaponSlotsInfo
  {
		mass = 65.51;
  };
	rhs_fold="rhs_weap_m70ab2";
};

class rhs_weap_m70b1 : rhs_weap_m70ab2
{
	INVENTORY_PICTURE(rhs_weap_m70b1)
	SCOPE_PUBLIC;

	DLC_AUTHOR;
	displayName = $STR_RHSSAF_WEAP_M70B1;
	model = "\rhssaf\addons\rhssaf_m_weapon_m70\rhs_m70b1";
	UiPicture = "\rhssaf\addons\rhssaf_c_weapons\icons\saf_m70b1_gear_x.paa";
	weaponInfoType = "rhs_rscOptics_m70b1";

	recoil = "recoil_mk20";
	recoilProne = "assaultRifleBase";

	class WeaponSlotsInfo: WeaponSlotsInfo
	{
		mass = 91.74;
	};
  baseWeapon="rhs_weap_m70b1";
};

class rhs_weap_m70b1n : rhs_weap_m70ab2
{
	INVENTORY_PICTURE(rhs_weap_m70b1n)
	SCOPE_PUBLIC;

	DLC_AUTHOR;
	displayName = $STR_RHSSAF_WEAP_M70B1N;
	model = "\rhssaf\addons\rhssaf_m_weapon_m70\rhs_m70b1n";
	UiPicture = "\rhssaf\addons\rhssaf_c_weapons\icons\saf_m70b1_gear_x.paa";
	weaponInfoType = "rhs_rscOptics_m70b1";

	recoil = "recoil_mk20";
	recoilProne = "assaultRifleBase";

	class WeaponSlotsInfo: WeaponSlotsInfo
	{
		class CowsSlot : rhs_russian_rifle_scopes_slot {};
		mass = 91.74;
	};
  baseWeapon="rhs_weap_m70b1n";
};

class rhs_weap_m70b3n : rhs_weap_m70ab2
{
	INVENTORY_PICTURE(rhs_weap_m70b3n)
	SCOPE_PUBLIC;

	DLC_AUTHOR;
	displayName = $STR_RHSSAF_WEAP_M70B3N;
	model = "\rhssaf\addons\rhssaf_m_weapon_m70\rhs_m70b3n";
	UiPicture = "\rhssaf\addons\rhssaf_c_weapons\icons\saf_m70b1_gear_x.paa";
	weaponInfoType = "rhs_rscOptics_m70b1";

	recoil = "recoil_mk20";
	recoilProne = "assaultRifleBase";

	muzzles[]={"this","SAFE"};

	class WeaponSlotsInfo: WeaponSlotsInfo
	{
		class CowsSlot : rhs_russian_rifle_scopes_slot {};
		mass = 91.74;
	};
  baseWeapon="rhs_weap_m70b3n";
};

class rhs_weap_m70b3n_pbg40 : rhs_weap_m70ab2
{
	INVENTORY_PICTURE(rhs_weap_m70b3n_pbg40)
	SCOPE_PUBLIC;

	DLC_AUTHOR;
	displayName = $STR_RHSSAF_WEAP_M70B3N_PBG40;
	model = "\rhssaf\addons\rhssaf_m_weapon_m70\rhs_m70b3n_pbg40";
	UiPicture = "\rhssaf\addons\rhssaf_c_weapons\icons\saf_m70b1_gear_x.paa";
	weaponInfoType = "rhs_rscOptics_m70b1";
	handAnim[] = {"OFP2_ManSkeleton","\rhsafrf\addons\rhs_c_weapons\anims\rhs_hand_ak_gp.rtm"};

	muzzles[] = {"this","PBG40Muzzle","SAFE"};

	recoil = "recoil_mk20";
	recoilProne = "assaultRifleBase";

	class WeaponSlotsInfo: WeaponSlotsInfo
	{
		class PointerSlot {};
		class CowsSlot : rhs_russian_rifle_scopes_slot {};
		mass = 124.74;
	};
	inertia = 0.6;
	dexterity = 1.4;
  baseWeapon="rhs_weap_m70b3n_pbg40";
};

class rhs_weap_m92 : rhs_weap_m70_base
{
	INVENTORY_PICTURE(rhs_weap_m92)
	SCOPE_PUBLIC;

	DLC_AUTHOR;
	displayName = $STR_RHSSAF_WEAP_M92;

	descriptionShort = $STR_RHS_WEAP_M92_DESCRIPTIONSHORT;
	weaponInfoType = "rhs_rscOptics_m92";

	discreteDistance[] = {300,500};
	discreteDistanceInitIndex = 0;
	handAnim[] = {"OFP2_ManSkeleton","\rhssaf\addons\rhssaf_c_weapons\anims\rhs_hand_m92_stock.rtm"};

	magazineWell[] =
	{
		AK_762x39,
		CBA_762x39_AK,
		CBA_762x39_RPK
	};

	// Size of recoil sway of the cursor
	maxRecoilSway=0.0125;
	// Speed at which the recoil sway goes back to zero (from maxRecoilSway to 0 in 1/swayDecaySpeed seconds)
	swayDecaySpeed=1.25;
	
	/// inertia coefficient of the weapon
	inertia = 0.37;
	
	//Muzzle velocity coefficient, -0.87 means a reduction of 13%
	initSpeed = -0.92; //~678m/s assuming 730m/s ammo
	recoil = "recoil_akm";

	model = "\rhssaf\addons\rhssaf_m_weapon_m92\rhs_m92";
	UiPicture = "\rhssaf\addons\rhssaf_c_weapons\icons\saf_m92_gear_x.paa";

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
	INVENTORY_PICTURE(rhs_weap_m92_fold)
	DLC_AUTHOR;
	SCOPE_PRIVATE;
	displayName = $STR_RHSSAF_WEAP_M92_FOLD;
	model = "\rhssaf\addons\rhssaf_m_weapon_m92\rhs_m92_fold";
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
	INVENTORY_PICTURE(rhs_weap_m76)
	SCOPE_PUBLIC;

	DLC_AUTHOR;
	displayName = $STR_RHSSAF_WEAP_M76;

	descriptionShort = $STR_RHS_WEAP_M76_DESCRIPTIONSHORT;

	magazines[] = {"rhsgref_10Rnd_792x57_m76","rhssaf_10Rnd_792x57_m76_tracer"};
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

	model = "\rhssaf\addons\rhssaf_m_weapon_m76\rhs_wep_m76";
	UiPicture = "\rhssaf\addons\rhssaf_c_weapons\icons\w_m76_icon_ca.paa";
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
	SCOPE_PROTECTED;

	DLC_AUTHOR;
	displayName = $STR_RHSSAF_WEAP_M21A;

	descriptionShort = $STR_RHS_WEAP_M21_BASE_DESCRIPTIONSHORT;

	magazines[] = {"rhsgref_30rnd_556x45_m21", "rhsgref_30rnd_556x45_m21_t"};
	magazineWell[] = {CBA_556x45_M21};

	handAnim[] = {"OFP2_ManSkeleton","\rhssaf\addons\rhssaf_c_weapons\anims\rhs_hand_m21_stock.rtm"};

	discreteDistance[] = {300,500};
	discreteDistanceInitIndex = 0;

	// Size of recoil sway of the cursor
	maxRecoilSway=0.0125;
	// Speed at which the recoil sway goes back to zero (from maxRecoilSway to 0 in 1/swayDecaySpeed seconds)
	swayDecaySpeed=1.25;
	/// inertia coefficient of the weapon
	inertia = 0.5;

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
	
	reloadAction = "RHS_GestureReloadAKS";
	//reloadAction = "RHS_GestureReloadAK2";

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
	INVENTORY_PICTURE(rhs_weap_m21a)
	SCOPE_PUBLIC;

	DLC_AUTHOR;
	displayName = $STR_RHSSAF_WEAP_M21A;
	weaponInfoType = "rhs_rscOptics_m21a";

	model = "\rhssaf\addons\rhssaf_m_weapon_m21\rhs_m21a";
	UiPicture = "\rhssaf\addons\rhssaf_c_weapons\icons\w_m21a_icon_ca.paa";
	rhs_mtz="rhs_weap_m21a_pr";
	rhs_fold="rhs_weap_m21a_fold";
	baseWeapon="rhs_weap_m21a";
};

class rhs_weap_m21a_pr : rhs_weap_m21_base
{
	INVENTORY_PICTURE(rhs_weap_m21a_pr)
	SCOPE_PUBLIC;

	DLC_AUTHOR;
	displayName = $STR_RHSSAF_WEAP_M21A_PIC;
	weaponInfoType = "rhs_rscOptics_m21a_mtz";

	model = "\rhssaf\addons\rhssaf_m_weapon_m21\rhs_m21a_pr";
	UiPicture = "\rhssaf\addons\rhssaf_c_weapons\icons\w_m21apr_icon_ca.paa";

	class WeaponSlotsInfo: WeaponSlotsInfo
	{
		class CowsSlot: rhs_picattinny_russian_rifle_scopes_slot {};
		class rhs_mtz_slot {};
		mass = 91.3;
	};
	rhs_mtz="rhs_weap_m21a";
  baseWeapon="rhs_weap_m21a_pr";
};

class rhs_weap_m21a_pr_pbg40 : rhs_weap_m21_base
{
	INVENTORY_PICTURE(rhs_weap_m21a_pr_pbg40)
	SCOPE_PUBLIC;

	DLC_AUTHOR;
	displayName = $STR_RHSSAF_WEAP_M21A_PIC_PBG40;
	weaponInfoType = "rhs_rscOptics_m21a_mtz";

	model = "\rhssaf\addons\rhssaf_m_weapon_m21\rhs_m21a_pr_pbg40";
	UiPicture = "\rhssaf\addons\rhssaf_c_weapons\icons\w_m21apr_icon_ca.paa";
	handAnim[] = {"OFP2_ManSkeleton","\rhssaf\addons\rhssaf_c_weapons\anims\rhs_hand_m21_gp.rtm"};
	muzzles[] = {"this","PBG40Muzzle","SAFE"};
	reloadAction = "rhs_GestureReloadM21GP";

	class WeaponSlotsInfo: WeaponSlotsInfo
	{
		mass = 124.3;
		class CowsSlot: rhs_picattinny_russian_rifle_scopes_slot {};
		class PointerSlot {};
		class rhs_mtz_slot {};
	};
	inertia = 0.6;
	dexterity = 1.4;
	rhs_mtz="rhs_weap_m21a_pbg40";
  baseWeapon="rhs_weap_m21a_pr_pbg40";
};

class rhs_weap_m21a_fold : rhs_weap_m21a
{
	INVENTORY_PICTURE(rhs_weap_m21a_fold)
	DLC_AUTHOR;
	displayName = $STR_RHSSAF_WEAP_M21A_FOLD;

	scopeArsenal = 0;
	model = "\rhssaf\addons\rhssaf_m_weapon_m21\rhs_m21a_fold";
	UiPicture = "\rhssaf\addons\rhssaf_c_weapons\icons\w_m21afold_icon_ca.paa";
	recoil = "recoil_mxc";
	class WeaponSlotsInfo: WeaponSlotsInfo
	{
		mass = 68.48;
	};
	rhs_fold="rhs_weap_m21a";
	baseWeapon = "rhs_weap_m21a_fold";
};

class rhs_weap_m21a_pbg40 : rhs_weap_m21a
{
	INVENTORY_PICTURE(rhs_weap_m21a_pbg40)
	DLC_AUTHOR;
	displayName = $STR_RHSSAF_WEAP_M21A_PBG40;

	model = "\rhssaf\addons\rhssaf_m_weapon_m21\rhs_m21a_pbg40";
	SCOPE_PUBLIC;
	handAnim[] = {"OFP2_ManSkeleton","\rhssaf\addons\rhssaf_c_weapons\anims\rhs_hand_m21_gp.rtm"};
	muzzles[] = {"this","PBG40Muzzle","SAFE"};
	reloadAction = "rhs_GestureReloadM21GP";

	class WeaponSlotsInfo: WeaponSlotsInfo
	{
		class PointerSlot {};
		mass = 124.3;
	};
	inertia = 0.6;
	dexterity = 1.4;
	rhs_mtz="rhs_weap_m21a_pr_pbg40";
	rhs_fold="rhs_weap_m21a_pbg40_fold";
  baseWeapon="rhs_weap_m21a_pbg40";
};

class rhs_weap_m21a_pbg40_fold : rhs_weap_m21a_pbg40
{
	INVENTORY_PICTURE(rhs_weap_m21a_fold)
	DLC_AUTHOR;
	displayName = $STR_RHSSAF_WEAP_M21A_PBG40_FOLD;

	scopeArsenal = 0;
	model = "\rhssaf\addons\rhssaf_m_weapon_m21\rhs_m21a_pbg40_fold";
	UiPicture = "\rhssaf\addons\rhssaf_c_weapons\icons\w_m21afold_icon_ca.paa";
	recoil = "recoil_mxc";
	class WeaponSlotsInfo: WeaponSlotsInfo
	{
		mass = 68.48;
	};
	rhs_fold="rhs_weap_m21a_pbg40";
	baseWeapon = "rhs_weap_m21a_pbg40_fold";
};

class rhs_weap_m21s : rhs_weap_m21_base
{
	INVENTORY_PICTURE(rhs_weap_m21s)
	SCOPE_PUBLIC;

	DLC_AUTHOR;
	displayName = $STR_RHSSAF_WEAP_M21S;
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

	model = "\rhssaf\addons\rhssaf_m_weapon_m21\rhs_m21s";
	UiPicture = "\rhssaf\addons\rhssaf_c_weapons\icons\w_m21s_icon_ca.paa";
    reloadAction = "RHS_GestureReloadAK_1hand";
	class WeaponSlotsInfo: WeaponSlotsInfo
  	{
    	mass = 89.54;
  	};
	rhs_mtz="rhs_weap_m21s_pr";
	rhs_fold="rhs_weap_m21s_fold";
  baseWeapon="rhs_weap_m21s";
};

class rhs_weap_m21s_pr : rhs_weap_m21a_pr
{
	INVENTORY_PICTURE(rhs_weap_m21s_pr)
	DLC_AUTHOR;
	SCOPE_PUBLIC;
	displayName = $STR_RHSSAF_WEAP_M21S_PIC;
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

	model = "\rhssaf\addons\rhssaf_m_weapon_m21\rhs_m21s_pr";
	UiPicture = "\rhssaf\addons\rhssaf_c_weapons\icons\w_m21spr_icon_ca.paa";
    reloadAction = "RHS_GestureReloadAK_1hand";
	class WeaponSlotsInfo: WeaponSlotsInfo
  	{
    	mass = 89.54;
  	};
	rhs_mtz="rhs_weap_m21s";
  baseWeapon="rhs_weap_m21s_pr";
};

class rhs_weap_m21s_fold : rhs_weap_m21s
{
	INVENTORY_PICTURE(rhs_weap_m21s_fold)
	DLC_AUTHOR;
	scopeArsenal = 0;
	displayName = $STR_RHSSAF_WEAP_M21S_FOLD;

	model = "\rhssaf\addons\rhssaf_m_weapon_m21\rhs_m21s_fold";
	UiPicture = "\rhssaf\addons\rhssaf_c_weapons\icons\w_m21afold_icon_ca.paa";
	class WeaponSlotsInfo: WeaponSlotsInfo
  	{
    	mass = 67.16;
  	};
	recoil = "recoil_mxc";
	rhs_fold="rhs_weap_m21s";
	baseWeapon = "rhs_weap_m21s_fold";
};

class rhs_weap_M107;

class rhs_weap_m82a1: rhs_weap_M107
{
	INVENTORY_PICTURE(rhs_weap_m82a1)

	DLC_AUTHOR;
	SCOPE_PUBLIC;
	displayname = $STR_RHSSAF_WEAP_M82A1;
  baseWeapon="rhs_weap_m82a1";
};

class rhs_weap_scorpion: SMG_01_F
{
	INVENTORY_PICTURE(rhs_weap_scorpion)
	DLC_AUTHOR;
	SCOPE_PUBLIC;

	displayName = $STR_RHS_WEAP_SCORPION_DISPLAYNAME;

	// Placeholder mags
	magazines[] = {"rhsgref_20rnd_765x17_vz61", "rhsgref_10rnd_765x17_vz61"};
	magazineWell[] = {CBA_32ACP_Vz61};

	class Library
	{
		libTextDesc = "The M84A Škorpion is a Czechoslovak 7.65 mm machine pistol, licensed and produced by Yugoslavia between 1984 and 1992, then Serbia.";
	};

	model = "\rhssaf\addons\rhssaf_m_weapon_scorpion\rhs_scorpion";
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
		class MuzzleSlot
		{
			linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE"; 	/// this can be set, but having some common helps a bit
			compatibleItems[] = {}; 				/// A custom made suppressor for this weapon
			iconPosition[] = {0.0, 0.45};							/// position of the slot icon inside of the weapon icon, relative to top-left corner in {right, down} format
			iconScale = 0.2;										/// scale of icon described in iconPicture
			iconPicture = "\A3\Weapons_F\Data\UI\attachment_muzzle.paa"; 	/// icon for selected slot
			iconPinpoint = "Center"; 										/// top, bottom, left, right, center alignment of the icon on snap point
		};
		class CowsSlot /// default accessories for this slot
		{
			iconPosition[] = {0.5, 0.35};
			iconScale = 0.2;
			compatibleItems[] = {};
		};
		class PointerSlot {};
	};
	opticsZoomMin = 0.375;
	opticsZoomMax = 1.1;
	opticsZoomInit = 0.75;
	distanceZoomMin = 300;
	distanceZoomMax = 300;
	descriptionShort = "Sub-machine gun <br/>Caliber: 7.65x17 mm";
	handAnim[] = {"OFP2_ManSkeleton","\rhssaf\addons\rhssaf_c_weapons\anims\rhs_hand_scorpion.rtm"};
	selectionfireanim="zasleh";

	modes[] = {"Single", "FullAuto"};

	class Single : Single
	{
		reloadTime = 0.075000;
		dispersion = 0.000500;
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
		dispersion = 0.000500;
		minRange = 0;
		minRangeProbab = 0.1;
		midRange = 25;
		midRangeProbab = 0.7;
		maxRange = 70;
		maxRangeProbab = 0.05;
		aiRateOfFire = 0.2;
		aiRateOfFireDistance = 50;
	};
	baseWeapon = "rhs_weap_scorpion";
};

#include "rhssaf_weap_g36.hpp"
#include "rhssaf_weap_rifle_scar.hpp"

#include "rhssaf_weap_machineguns.hpp"
