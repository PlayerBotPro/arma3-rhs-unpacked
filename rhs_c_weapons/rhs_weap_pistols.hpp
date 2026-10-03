class hgun_Rook40_F;

class rhs_weap_pya : hgun_Rook40_F
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_weap_pya)
	dlc = "RHS_AFRF";

	initSpeed = -1;
	scope = 2;
	model = "\rhsafrf\addons\rhs_weapons\rhs_Pya";
	modelOptics = "-";
	minRange = 0;
	minRangeProbab = 0.1;
	midRange = 30;
	midRangeProbab = 0.3;
	maxRange = 50;
	maxRangeProbab = 0.04;
	optics = 1;
	distanceZoomMin = 50;
	distanceZoomMax = 50;
	displayName = "$STR_RHS_WEAP_PYA";
	begin1[] = {"rhsafrf\addons\rhs_weapons\sounds\pya_2",0.7943282,1,700};
	soundBegin[] = {"begin1",1};


	weaponInfoType = "rhs_rscOptics_pistol";
	class SAFE_PISTOL: RHS_SAFE_BASE {};
	muzzles[]={"this","SAFE_PISTOL"};
	class WeaponSlotsInfo
	{
		mass=18.86;
		//holsterOffset = "holster";
		holsterScale = 1;
		class CowsSlot 
		{
			ICON_OVERLAY_DISABLED
		};
	};

	magazines[] = {"rhs_mag_9x19_17","rhs_mag_9x19_7n31_17"};
	magazineWell[] = {CBA_9x19_MP443};

	dispersion = 0.02;
	ffCount = 1;
	aiRateOfFire = 0.5;
	aiRateOfFireDistance = 50;
	class Library
	{
		libTextDesc = "$STR_RHS_WEAP_PYA";
	};
	descriptionShort = "Pistol<br/>Caliber: 9x19mm";

	baseWeapon = "rhs_weap_pya";
};

class Pistol;
class Pistol_Base_F: Pistol {
	class Eventhandlers;
};

class rhs_weap_rsp30_white: Pistol_Base_F
{
	AUTHOR_MACRO
	dlc = "RHS_AFRF";

	scope = 2;

	magazines[] = {"rhs_mag_rsp30_white"};

	weaponInfoType = "rhs_rscOptics_rsp30";

	displayname = "$STR_RHS_RSP30_WHITE_NAME";
	displaynameShort = "$STR_RHS_RSP30_SHORT";
	descriptionShort = "$STR_RHS_RSP30_WHITE_DESC";

	model = "\rhsafrf\addons\rhs_weapons\rsp30\rhs_rsp30";
	picture = "\rhsafrf\addons\rhs_weapons\icons\rsp30_white.paa";

	handAnim[]= {"OFP2_ManSkeleton","\rhsafrf\addons\rhs_c_weapons\anims\rsp30.rtm"};

	//recoil = "recoil_pistol_signal"; //bugged for no raisin
	recoil = "recoil_pistol";

	hiddenSelections[]= {"camo1"};
	hiddenSelectionsTextures[]=
	{
		"rhsafrf\addons\rhs_weapons\rsp30\rhs_rsp30_white_co.paa"
	};
	hiddenSelectionsMaterials[]=
	{
		"rhsafrf\addons\rhs_weapons\rsp30\rhs_rsp30_white.rvmat"
	};

	optics=0;

	sounds[] = {"StandardSound"};
	class BaseSoundModeType
	{
		weaponSoundEffect = "DefaultRifle";
		closure1[] = {"",1.03514,1,10};
		closure2[] = {"",1.03514,1.1,10};
		soundClosure[] = {"closure1",0.5,"closure2",0.5};
	};
	class StandardSound: BaseSoundModeType
	{
		begin1[] = {"A3\Sounds_F_Kart\Weapons\starting_pistol_1",1,1,700};
		begin2[] = {"A3\Sounds_F_Kart\Weapons\starting_pistol_2",1,1,700};
		begin3[] = {"A3\Sounds_F_Kart\Weapons\starting_pistol_3",1,1,700};
		soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin3",0.34};
	};
	class GunParticles
	{
		class Effect1
		{
			effectName = "StarterPistolCloud1";
			positionName = "usti hlavne";
			directionName = "konec hlavne";
		};
		class Effect2
		{
			effectName = "StarterPistolCloud2";
			positionName = "konec hlavne";
			directionName = "usti hlavne";
		};
	};
	muzzleEffect="BIS_fnc_effectFiredFlares";

	class WeaponSlotsInfo
	{
		mass=10;
			holsterScale = 0;
	};
	class Eventhandlers: Eventhandlers {
		class RHS_DisposableWeapon {
			fired = "_this call rhs_fnc_disposable;";
		};
	};
	baseWeapon = "rhs_weap_rsp30_white";
};

class rhs_weap_rsp30_white_used: rhs_weap_rsp30_white
{
	scope=1;
	magazines[] = {};
};

class rhs_weap_rsp30_red: rhs_weap_rsp30_white
{
	AUTHOR_MACRO
	displayname = "$STR_RHS_RSP30_RED_NAME";
	descriptionShort = "$STR_RHS_RSP30_RED_DESC";
	magazines[] = {"rhs_mag_rsp30_red"};
	picture = "\rhsafrf\addons\rhs_weapons\icons\rsp30_red.paa";
	hiddenSelectionsTextures[]=
	{
		"rhsafrf\addons\rhs_weapons\rsp30\rhs_rsp30_red_co.paa"
	};
	hiddenSelectionsMaterials[]=
	{
		"rhsafrf\addons\rhs_weapons\rsp30\rhs_rsp30_red.rvmat"
	};

	baseWeapon = "rhs_weap_rsp30_red";
};

class rhs_weap_rsp30_red_used: rhs_weap_rsp30_red
{
	scope=1;
	magazines[] = {};
};

class rhs_weap_rsp30_green: rhs_weap_rsp30_white
{
	AUTHOR_MACRO
	displayname = "$STR_RHS_RSP30_GREEN_NAME";
	descriptionShort = "$STR_RHS_RSP30_GREEN_DESC";
	magazines[] = {"rhs_mag_rsp30_green"};
	picture = "\rhsafrf\addons\rhs_weapons\icons\rsp30_green.paa";
	hiddenSelectionsTextures[]=
	{
		"rhsafrf\addons\rhs_weapons\rsp30\rhs_rsp30_green_co.paa"
	};
	hiddenSelectionsMaterials[]=
	{
		"rhsafrf\addons\rhs_weapons\rsp30\rhs_rsp30_green.rvmat"
	};

	baseWeapon = "rhs_weap_rsp30_green";
};

class rhs_weap_rsp30_green_used: rhs_weap_rsp30_green
{
	scope=1;
	magazines[] = {};
};

class rhs_weap_tr8: Pistol_Base_F
{
	AUTHOR_MACRO
	dlc = "RHS_AFRF";

	magazines[] =	{};

	// TODO: Librbary description required
	class Library
	{
		libTextDesc = "";
	};

	optics = 1;
	scope = 2;

	muzzlePos = "eye";
	muzzleEnd = "eye_dir";
	weaponInfoType = "RscWeaponZeroing";
	discreteDistance[] = {0};
	discreteDistanceInitIndex = 0;

	displayName = $STR_RHS_MSIC_TR8;
	descriptionShort = $STR_A3_cfgWeapons_Default_Binocular1;

	model = "\rhsafrf\addons\rhs_weapons2\misc\tr8\rhs_tr8_periscope _weap.p3d";
	modelOptics = "\rhsafrf\addons\rhs_weapons2\misc\tr8\rhs_tr8_reticle.p3d";
	picture = "\rhsafrf\addons\rhs_weapons2\icons\rhs_tr8_inventory_ca.paa";

	UiPicture = "\A3\weapons_f\data\UI\icon_regular_CA.paa";

	class OpticsModes
	{
		class periscope
		{
			opticsID=1;
			opticsPPEffects[]=
			{
				"OpticsCHAbera1",
				"OpticsBlur1"
			};
			modelOptics = "\rhsafrf\addons\rhs_weapons2\misc\tr8\rhs_tr8_reticle.p3d";
			useModelOptics=1;
			opticsFlare=0;
			opticsDisablePeripherialVision=0;
			opticsZoomMin = 0.35/8;
			opticsZoomMax = 0.35/8;
			opticsZoomInit = 0.35/8;
			visionMode="";
			discreteDistanceInitIndex=0;
			discreteDistance[]={100};
			memoryPointCamera = "eye";
			cameraDir="eye_dir";
			distanceZoomMin=300;
			distanceZoomMax=300;
		};
	};
	class WeaponSlotsInfo
	{
		//weight: 0.88 - http://www.redoptic.ru/tr8_2.html
		//(x*0.1)/2.2=0.88
		mass=19.36;
		holsterScale = 0;
	};

	sounds[] = {"StandardSound"};
	class BaseSoundModeType
	{
		weaponSoundEffect = "DefaultRifle";
		closure1[] = {"",1.03514,1,10};
		closure2[] = {"",1.03514,1.1,10};
		soundClosure[] = {"closure1",0.5,"closure2",0.5};
	};
	class StandardSound: BaseSoundModeType {};


	handAnim[] = {"OFP2_ManSkeleton","\rhsafrf\addons\rhs_c_weapons\anims\tr8_holdinganim.rtm"};
	//handAnim[] = {"OFP2_ManSkeleton","\rhsafrf\addons\rhs_c_weapons\anims\rhs_hand_ak_gp.rtm"};
	dexterity = 1.8;
	baseWeapon = "rhs_weap_tr8";
};

class rhs_weap_makarov_pm: rhs_weap_pya
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_weap_makarov_pm)
	scope = 2;
	displayName = "$STR_RHS_WEAP_PM";
	descriptionShort = "Pistol<br/>Caliber: 9x18mm";
	model = "\rhsafrf\addons\rhs_weapons2\pistols\pm\rhs_makarov_pm";
	modelOptics = "-";

	class SAFE_PISTOL: RHS_SAFE_BASE {};
	muzzles[]={"this","SAFE_PISTOL"};

	weaponInfoType = "rhs_rscOptics_pistol";
	class WeaponSlotsInfo
	{
		mass=16.72;
		class CowsSlot 
		{
			ICON_OVERLAY_DISABLED
		};
		class MuzzleSlot{};
		class PointerSlot {};
		holsterOffset = "holster";
		holsterScale = 0.95;
	};
	magazines[] = {"rhs_mag_9x18_8_57N181S"};
	magazineWell[] = {CBA_9x18_PM};
	dispersion = 0.02;
	ffCount = 1;
	aiRateOfFire = 0.5;
	aiRateOfFireDistance = 50;
	baseWeapon = "rhs_weap_makarov_pm";
};

class rhs_weap_makarov_pmm : rhs_weap_makarov_pm //legacy class
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_weap_makarov_pmm)
	scope = 1;
	displayName = "$STR_RHS_WEAP_PMM";

	magazines[] = {"rhs_mag_9x18_12_57N181S"};
	magazineWell[] = {CBA_9x18_PMM};
	
	baseWeapon = "rhs_weap_makarov_pmm";
};

class rhs_weap_pb_6p9 : rhs_weap_makarov_pm
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_weap_pb_6p9)
	displayName = "$STR_RHS_WEAP_PB";
	model = "\rhsafrf\addons\rhs_weapons3\pb6p9\6p9";
	baseWeapon = "rhs_weap_pb_6p9";
	initSpeed = -0.47;
	
	class WeaponSlotsInfo: WeaponSlotsInfo
	{
		holsterScale = 0.94;
		class MuzzleSlot: SlotInfo
		{
			ICON_OVERLAY_DISABLED
			linkProxy="\A3\data_f\proxies\weapon_slots\MUZZLE";
			compatibleItems[]=
			{
				"rhs_acc_6p9_suppressor"
			};
		};
	};
	
	class LinkedItems
	{
		class LinkedItemsMuzzle
		{
			slot = "MuzzleSlot";
			item = "rhs_acc_6p9_suppressor";
		};
	};
};

class rhs_weap_6p53 : rhs_weap_makarov_pm
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_weap_6p53)
	displayName = "$STR_RHS_WEAP_6P53";
	model = "\rhsafrf\addons\rhs_weapons3\sr1mp\rhs_sr1mp";
	baseWeapon = "rhs_weap_6p53";

	magazines[] = {"rhs_18rnd_9x21mm_7N28", "rhs_18rnd_9x21mm_7N29", "rhs_18rnd_9x21mm_7BT3"};
	magazineWell[] = {CBA_9x21_SR1M};
};