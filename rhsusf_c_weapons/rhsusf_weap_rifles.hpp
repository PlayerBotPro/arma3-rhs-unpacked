

#define CarryhandleSight \
	discreteDistance[]={25,100,200,300,400,500,600};\
	discreteDistanceCameraPoint[]={"eye","eye_100","eye_200","eye_300","eye_400","eye_500","eye_600"};\
	discreteDistanceInitIndex=1;

#define Grip_Macro(numb,name) \
	handAnim[] = {"OFP2_ManSkeleton",\rhsusf\addons\rhsusf_c_weapons\anims\rhs_hand_##name##.rtm};\
	class LinkedItems\
	{\
		class LinkedItemsUnder\
		{\
			item = rhsusf_acc_grip##numb##;\
			slot = "UnderBarrelSlot";\
		};\
	};

#define DesertM4_Macro \
	hiddenSelectionsTextures[] =\
	{\
		"\rhsusf\addons\rhsusf_weapons\m4\data\m4a1_actual_d_co.paa",\
		"\rhsusf\addons\rhsusf_weapons\m4\data\magazine_co.paa",\
		"\rhsusf\addons\rhsusf_weapons\m4\data\m4acc_d_co.paa",\
		"\rhsusf\addons\rhsusf_weapons\m4\data\kacrailcover_d_co.paa",\
		"\rhsusf\addons\rhsusf_weapons\acc\grips\grippod\data\acc_co.paa",\
		"\rhsusf\addons\rhsusf_weapons\m4\data\magpulstock_d_co.paa",\
		"\rhsusf\addons\rhsusf_weapons\m4\data\m203s_d_co.paa",\
		"\rhsusf\addons\rhsusf_weapons\m4\data\kacleaf_d_co.paa",\
		"\rhsusf\addons\rhsusf_weapons\m320\data\m320_co.paa",\
		"\rhsusf\addons\rhsusf_weapons\m4\data\m4a1_actual_d_co.paa"\
	};


class Rifle;
class Rifle_Base_F : Rifle {
	class WeaponSlotsInfo;
	class GunParticles;
	class Eventhandlers;
};
class Rifle_Short_Base_F: Rifle_Base_F
{
	class WeaponSlotsInfo;
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
class Launcher;
class Launcher_Base_F : Launcher
{
	class WeaponSlotsInfo;
	class Eventhandlers;
};
class RHSUSF_SAFE_BASE: Rifle_Base_F
{
	magazines[]={};
	displayName = "SAFE";
	descriptionShort = "SAFE";
	showToPlayer = 0;
	modes[]={"Safe"};
	discreteDistance[]={0};
	discreteDistanceInitIndex=0;
	drySound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\MX\dry_Mx",0.562341,1,10};
	changeFiremodeSound[] = {"A3\sounds_f\weapons\closure\firemode_changer_2",0.551189,1,5};
	class Safe: Mode_SemiAuto
	{
		sounds[]={};
		displayName = "SAFE";
		descriptionShort = "SAFE";
		showToPlayer = 0;
		minRange=0;
		minRangeProbab=0.001;
		midRange=0.001;
		midRangeProbab=0.001;
		maxRange=0.001;
		maxRangeProbab=0.001;
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

class rhs_weap_M320_Base_F: Pistol_Base_F
{
	dlc = "RHS_USAF";

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

	// TODO: Librbary description required
	class Library
	{
		libTextDesc = "";
	};

	optics = 0;

	maxRecoilSway = 0.0125;
	swayDecaySpeed = 1.25;
	recoil = "recoil_mx";
	inertia = 0.2;

	class GunParticles: GunParticles
	{
		class SecondEffect
		{
			positionName = "Nabojnicestart";
			directionName = "Nabojniceend";
			effectName = "RifleAssaultCloud";
		};
	};

	weaponInfoType = "rhs_rscOptics_pistol";
	discreteDistance[] = {100, 200, 300, 400};
	discreteDistanceInitIndex = 1;

	opticsZoomMin = 0.275;
	opticsZoomMax = 1.1;
	opticsZoomInit = 0.75;
	distanceZoomMin = 300;
	distanceZoomMax = 300;


	class WeaponSlotsInfo: WeaponSlotsInfo
	{
		class MuzzleSlot {};
		class CowsSlot {};
		holsterScale = 0;

	};

	reloadAction = "rhs_GestureReloadM320_pistol";
	descriptionShort = "Grenade Launcher<br />Caliber: 40mm";
	handAnim[] = {"OFP2_ManSkeleton","\rhsusf\addons\rhsusf_c_weapons\anims\rhs_hand_m320.rtm"};

	dexterity = 1.8;
	caseless[] = {"",1,1,1};

	soundBullet[] = {"caseless",1};
	modes[] = {"Single","single_medium_optics1","single_far_optics2"};

	class Single: Mode_SemiAuto
	{
		reloadTime = 0.1;
		dispersion = 0.00093;
		minRange = 2;
		minRangeProbab = 0.3;
		midRange = 250;
		midRangeProbab = 0.7;
		maxRange = 400;
		maxRangeProbab = 0.04;
	};
	class single_medium_optics1: Single
	{
		requiredOpticType = 1;
		showToPlayer = 0;
		minRange = 2;
		minRangeProbab = 0.2;
		midRange = 550;
		midRangeProbab = 0.7;
		maxRange = 700;
		maxRangeProbab = 0.1;
		aiRateOfFire = 6;
		aiRateOfFireDistance = 600;
	};
	class single_far_optics2: single_medium_optics1
	{
		requiredOpticType = 2;
	};

	aiDispersionCoefY = 10;
	aiDispersionCoefX = 8;
	drySound[] = {"A3\sounds_f\weapons\Other\dry_1",0.01,1};

	reloadMagazineSound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Katiba\Katiba_UGL_reload", 0.794328, 1, 10};

	hiddenSelections[] = {""};
	hiddenSelectionsTextures[] = {""};
	muzzles[]={"this","SAFE_PISTOL"};
	class SAFE_PISTOL: RHSUSF_SAFE_BASE
	{
		discreteDistanceCameraPoint[]={"gl_eye_50m"};
		cameraDir = "gl_look";
	};
	//type=2;
	magazineReloadSwitchPhase = 0.56;
};

class rhs_weap_M320 : rhs_weap_M320_Base_F
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_weap_M320)
	scope = 2;

	displayName= $STR_RHS_CFGWEAPONS_RIFLE_M320;

	model = "\rhsusf\addons\rhsusf_weapons\m320\M320standalone.p3d";



	UiPicture = "\A3\weapons_f\data\UI\icon_regular_CA.paa";

	//modes[] = {"this"};

	weaponInfoType = "rhs_rscOptics_pistol_usf";
	cameraDir = "gl_look";
	discreteDistance[] = {50, 100, 150, 200, 250, 300, 350};
	discreteDistanceCameraPoint[] = {"gl_eye_50m", "gl_eye_100m", "gl_eye_150m", "gl_eye_200m", "gl_eye_250m", "gl_eye_300m", "gl_eye_350m"};
	discreteDistanceInitIndex = 0;
	maxZeroing = 350;

	class WeaponSlotsInfo: WeaponSlotsInfo
	{
		mass = 33;
	};

	class ItemInfo
	{
		priority = 1;
		RMBhint = "M320";
		onHoverText = "M320";
	};

};

class rhs_weap_XM2010_Base_F: Rifle_Base_F
{
	dlc = "RHS_USAF";

	magazines[] = {"rhsusf_5Rnd_300winmag_xm2010"};
	magazineWell[] = {CBA_300WM_AICS};

	// TODO: Librbary description required
	class Library
	{
		libTextDesc = "";
	};

	optics = 0;

	reloadAction = "RHS_GestureReloadM2010";
	maxRecoilSway = 0.0125;
	swayDecaySpeed = 1.25;
	recoil = "recoil_gm6";

	class GunParticles : GunParticles
	{
		/* class SecondEffect
		{
			positionName = "Nabojnicestart";
			directionName = "Nabojniceend";
			effectName = "RifleAssaultCloud";
		}; */
		class RHSUSF_BarrelRefract
		{
			positionName = "usti hlavne";
			directionName = "usti hlavne up";
			effectName = "RHSUSF_BarrelRefract";
		};
	};

	weaponInfoType = "RscWeaponZeroing";
	discreteDistance[] = {100};
	discreteDistanceInitIndex = 0;
	maxZeroing = 1500;

	class WeaponSlotsInfo: WeaponSlotsInfo
	{
		class MuzzleSlot: SlotInfo
		{
			linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
			compatibleItems[] = {"rhsusf_acc_M2010S","rhsusf_acc_M2010S_d","rhsusf_acc_M2010S_sa","rhsusf_acc_M2010S_wd"};
		};
		class CowsSlot: rhs_western_rifle_scopes_slot_long {};
		class PointerSlot: rhs_western_rifle_laser_slot {};
		class UnderBarrelSlot: rhs_western_rifle_underbarrel_slot {};
	};

	opticsZoomMin = 0.275;
	opticsZoomMax = 1.1;
	opticsZoomInit = 0.75;
	distanceZoomMin = 300;
	distanceZoomMax = 300;

	descriptionShort = "Sniper Rifle<br />Caliber: .300 winmag";
	handAnim[] = {"OFP2_ManSkeleton","\rhsusf\addons\rhsusf_c_weapons\anims\rhs_hand_mk12.rtm"};
	dexterity = 1.8;
	inertia = 0.65;
	aimTransitionSpeed = 0.75;
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
	hiddenSelectionsTextures[] = {"\rhsusf\addons\rhsusf_weapons\XM2010\Data\XM2010_co.paa"};

	muzzles[]={"this","SAFE"};
	class SAFE: RHSUSF_SAFE_BASE {};
	class Eventhandlers: Eventhandlers
	{
		class RHS_BoltAction {
			fired = "[_this # 0,_this # 1,_this # 1,_this # 4] call rhs_fnc_boltAction;";
		};
	};
	rhs_boltActionSound[]		= {"rhsusf\addons\rhsusf_sounds\m2010\bolt.wss", 1.42, 1, 20};
	rhs_boltActionAnim			= "RHS_GestureRechamberM2010";
	rhs_boltActionCasePos[]		= {-0.02,-0.15,0.01};
	rhs_boltActionCaseDir[]		= {0.3,-0.15,0.25};
	rhs_boltActionCaseDelay		= 0.25;
	rhs_boltActionCaseSelection	= "leftHand";
};

class rhs_weap_XM2010 : rhs_weap_XM2010_Base_F
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_weap_XM2010)
	scope = 2;

	displayName = $STR_RHS_CFGWEAPONS_RIFLE_xm2010;

	model = "\rhsusf\addons\rhsusf_weapons\XM2010\xm2010.p3d";



	UiPicture = "\A3\weapons_f\data\UI\icon_regular_CA.paa";
	handAnim[] = {"OFP2_ManSkeleton","\rhsusf\addons\rhsusf_c_weapons\anims\rhs_hand_mk12.rtm"};

	weaponInfoType = "rhs_m2010_handler";

	class WeaponSlotsInfo: WeaponSlotsInfo
	{
		mass = 121;
	};

	class ItemInfo
	{
		priority = 1;
		RMBhint = "M2010 ESR";
		onHoverText = "M2010";
	};
	baseWeapon="rhs_weap_XM2010";

};

class rhs_weap_XM2010_d : rhs_weap_XM2010
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_weap_XM2010_d)
	displayName = $STR_RHS_CFGWEAPONS_RIFLE_xm2010_d;


	hiddenSelections[] = {"Camo"};
	hiddenSelectionsTextures[] = {"\rhsusf\addons\rhsusf_weapons\XM2010\Data\XM2010_d_co.paa"};
	baseWeapon="rhs_weap_XM2010_d";
};

class rhs_weap_XM2010_wd : rhs_weap_XM2010
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_weap_XM2010_wd)
	displayName = $STR_RHS_CFGWEAPONS_RIFLE_xm2010_wd;


	hiddenSelections[] = {"Camo"};
	hiddenSelectionsTextures[] = {"\rhsusf\addons\rhsusf_weapons\XM2010\Data\XM2010_wd_co.paa"};
	baseWeapon="rhs_weap_XM2010_wd";
};

class rhs_weap_XM2010_sa : rhs_weap_XM2010
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_weap_XM2010_sa)
	displayName = $STR_RHS_CFGWEAPONS_RIFLE_xm2010_sa;


	hiddenSelections[] = {"Camo"};
	hiddenSelectionsTextures[] = {"\rhsusf\addons\rhsusf_weapons\XM2010\Data\XM2010_sa_co.paa"};
	baseWeapon="rhs_weap_XM2010_sa";
};

class rhs_weap_m24sws : rhs_weap_XM2010_Base_F
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_weap_m24sws)
	scope = 2;

	displayName = "M24 SWS";

	// 5 mag 7.62

	magazines[] = {rhsusf_5Rnd_762x51_m118_special_Mag,rhsusf_5Rnd_762x51_m993_Mag,rhsusf_5Rnd_762x51_m62_Mag};
	magazineWell[] =
	{
		CBA_762x51_1rnd,
		CBA_762x51_2rnds,
		CBA_762x51_3rnds,
		CBA_762x51_4rnds,
		CBA_762x51_5rnds	
	};

	model = "\rhsusf\addons\rhsusf_weapons2\M24\M24_Base.p3d";

	UiPicture = "\A3\weapons_f\data\UI\icon_regular_CA.paa";
	handAnim[] = {"OFP2_ManSkeleton","\rhsusf\addons\rhsusf_c_weapons\anims\rhs_hand_M24.rtm"};

	hiddenSelections[] = {"Camo1","Camo2"};
	hiddenSelectionsTextures[] = {"\rhsusf\addons\rhsusf_weapons2\M24\Data\M24_metallic_co.paa","\rhsusf\addons\rhsusf_weapons2\M24\Data\M24_nonmetallic_co.paa"};

	weaponInfoType = "rhs_m2010_handler";
	maxZeroing = 1000;

	class WeaponSlotsInfo: WeaponSlotsInfo
	{
		mass = 120.78;
		class MuzzleSlot: rhs_western_m24_muzzle_slot {};
		class CowsSlot: rhs_western_rifle_scopes_slot_short {};
		class PointerSlot {};
		class UnderBarrelSlot: SlotInfo
		{
			linkProxy = "\A3\Data_F_Mark\Proxies\Weapon_Slots\UNDERBARREL";
			compatibleItems[] = {"rhsusf_acc_harris_swivel"};
		};
	};

	class ItemInfo
	{
		priority = 1;
		RMBhint = "M24 SWS";
		onHoverText = "M24";
	};

	baseWeapon="rhs_weap_m24sws";
};

class rhs_weap_m24sws_d : rhs_weap_m24sws
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_weap_m24sws_d)

	displayName = "M24 SWS (Desert)";

	// 5 mag 7.62
	hiddenSelectionsTextures[] = {"\rhsusf\addons\rhsusf_weapons2\M24\Data\M24_metallic_d_co.paa","\rhsusf\addons\rhsusf_weapons2\M24\Data\M24_nonmetallic_d_co.paa"};

	baseWeapon="rhs_weap_m24sws_d";
};

class rhs_weap_m24sws_wd : rhs_weap_m24sws
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_weap_m24sws_wd)

	displayName = "M24 SWS (Woodland)";

	// 5 mag 7.62
	hiddenSelectionsTextures[] = {"\rhsusf\addons\rhsusf_weapons2\M24\Data\M24_metallic_wd_co.paa","\rhsusf\addons\rhsusf_weapons2\M24\Data\M24_nonmetallic_wd_co.paa"};

	baseWeapon="rhs_weap_m24sws_wd";
};
//Legacy M24 classnames
class rhs_weap_m24sws_blk : rhs_weap_m24sws
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_weap_m24sws_blk)
	scope = 1;

	displayName = "M24 SWS (Black)";

	// 5 mag 7.62
	hiddenSelectionsTextures[] = {"\rhsusf\addons\rhsusf_weapons2\M24\Data\M24_metallic_co.paa","\rhsusf\addons\rhsusf_weapons2\M24\Data\M24_nonmetallic_co.paa"};
};

class rhs_weap_m24sws_ghillie : rhs_weap_m24sws
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_weap_m24sws_ghillie)
	scope = 1;

	displayName = "M24 SWS (Ghillie)";
	// 5 mag 7.62
	//model = "\rhsusf\addons\rhsusf_weapons2\M24\M24_ghillie.p3d";
	hiddenSelectionsTextures[] = {"\rhsusf\addons\rhsusf_weapons2\M24\Data\M24_metallic_wd_co.paa","\rhsusf\addons\rhsusf_weapons2\M24\Data\M24_nonmetallic_wd_co.paa"};

	baseWeapon="rhs_weap_m24sws_ghillie";
};

class rhs_weap_m40a5 : rhs_weap_XM2010_Base_F
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_weap_m40a5)
	scope = 2;

	displayName = "M40A5";

	// 10 mag 7.62

	magazines[] =
	{
		rhsusf_5Rnd_762x51_AICS_m118_special_Mag,
		rhsusf_5Rnd_762x51_AICS_m993_Mag,
		rhsusf_5Rnd_762x51_AICS_m62_Mag,
		rhsusf_10Rnd_762x51_m118_special_Mag,
		rhsusf_10Rnd_762x51_m993_Mag,
		rhsusf_10Rnd_762x51_m62_Mag,
		rhsusf_5Rnd_762x51_m118_special_Mag,
		rhsusf_5Rnd_762x51_m993_Mag,
		rhsusf_5Rnd_762x51_m62_Mag
	};
	magazineWell[] =
	{
		CBA_762x51_AICS,
		CBA_762x51_1rnd,
		CBA_762x51_2rnds,
		CBA_762x51_3rnds,
		CBA_762x51_4rnds,
		CBA_762x51_5rnds
	};
	magazineReloadSwitchPhase = 0.50;

	model = "\rhsusf\addons\rhsusf_weapons3\M40\rhs_m40a5.p3d";

	hiddenSelections[] = {"Camo"};
	hiddenSelectionsTextures[] = {"rhsusf\addons\rhsusf_weapons3\M40\data\rhs_m40a5_co.paa"};



	UiPicture = "\A3\weapons_f\data\UI\icon_regular_CA.paa";
	handAnim[] = {"OFP2_ManSkeleton","\rhsusf\addons\rhsusf_c_weapons\anims\rhs_hand_M40a5.rtm"};

	class WeaponSlotsInfo: WeaponSlotsInfo
	{
		mass = 165;
		class MuzzleSlot {};
		class CowsSlot: rhs_western_rifle_scopes_slot_short {};
		class PointerSlot: rhs_western_rifle_laser_slot {};
		class UnderBarrelSlot: SlotInfo
		{
			linkProxy = "\A3\Data_F_Mark\Proxies\Weapon_Slots\UNDERBARREL";
			compatibleItems[] = {"rhsusf_acc_harris_swivel"};
		};
	};

	weaponInfoType = "rhs_m2010_handler";
	maxZeroing = 1000;

	class ItemInfo
	{
		priority = 1;
		RMBhint = "M40A5";
		onHoverText = "M40A5";
	};

	baseWeapon="rhs_weap_m40a5";
};

class rhs_weap_m40a5_d : rhs_weap_m40a5
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_weap_m40a5_d)
	displayName = "M40A5 (Desert)";

	hiddenSelections[] = {"Camo"};
	hiddenSelectionsTextures[] = {"rhsusf\addons\rhsusf_weapons3\M40\data\rhs_m40a5_des_co.paa"};

	baseWeapon="rhs_weap_m40a5_d";
};

class rhs_weap_m40a5_wd : rhs_weap_m40a5
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_weap_m40a5_wd)
	displayName = "M40A5 (Woodland)";

	hiddenSelections[] = {"Camo"};
	hiddenSelectionsTextures[] = {"rhsusf\addons\rhsusf_weapons3\M40\data\rhs_m40a5_wdl_co.paa"};

	baseWeapon="rhs_weap_m40a5_wd";
};

class arifle_MX_Base_F: Rifle_Base_F {};
class rhs_weap_m4_Base : arifle_MX_Base_F
{
	dlc = "RHS_USAF";

	scope = 0;
	UiPicture = "\A3\weapons_f\data\UI\icon_regular_CA.paa";
	magazines[] =
	{
		//30 round STANAGs
		"rhs_mag_30Rnd_556x45_M855A1_Stanag",
		"rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red",
		"rhs_mag_30Rnd_556x45_M855_Stanag",
		"rhs_mag_30Rnd_556x45_M855_Stanag_Tracer_Red",
		"rhs_mag_30Rnd_556x45_Mk318_Stanag",
		"rhs_mag_30Rnd_556x45_Mk262_Stanag",
		"rhs_mag_30Rnd_556x45_M193_Stanag",
		"rhs_mag_30Rnd_556x45_M196_Stanag_Tracer_Red",
		"rhs_mag_30Rnd_556x45_M200_Stanag"
	};
	magazineWell[] =
	{
		STANAG_556x45,
		STANAG_556x45_Large,
		CBA_556x45_STANAG,
		CBA_556x45_STANAG_L,
		CBA_556x45_STANAG_XL,
		CBA_556x45_STANAG_2D,
		CBA_556x45_STANAG_2D_XL
	};

	reloadAction = "RHS_GestureReloadAR15";
	weaponInfoType = "rhs_rscOptics_m4";

	maxRecoilSway = 0.0125;
	swayDecaySpeed = 1.25;

	recoil = "rhs_recoil_m4";
	opticsZoomMin=0.275;
	opticsZoomMax=1.1;
	opticsZoomInit=0.75;
	distanceZoomMin=300;
	distanceZoomMax=300;
	aiDispersionCoefY = 6.0;
	aiDispersionCoefX = 4.0;
	dexterity = 1.8;
	initSpeed = -0.94; //14.5 inch barrel

	hiddenSelections[] = {"camo1","camo2","camo3","camo4","camo5","camo6","camo7","camo8","camo9","camo10"};
	hiddenSelectionsTextures[] =
	{
		"\rhsusf\addons\rhsusf_weapons\m4\data\m4a1_co.paa",
		"\rhsusf\addons\rhsusf_weapons\m4\data\magazine_co.paa",
		"\rhsusf\addons\rhsusf_weapons\m4\data\m4acc_co.paa",
		"\rhsusf\addons\rhsusf_weapons\m4\data\kacrailcover_co.paa",
		"\rhsusf\addons\rhsusf_weapons\acc\grips\grippod\data\acc_co.paa",
		"\rhsusf\addons\rhsusf_weapons\m4\data\magpulstock_co.paa",
		"\rhsusf\addons\rhsusf_weapons\m4\data\m203_co.paa",
		"\rhsusf\addons\rhsusf_weapons\m4\data\kacleaf_co.paa",
		"\rhsusf\addons\rhsusf_weapons\m320\data\m320_co.paa",
		"a3\data_f\clear_empty.paa"
	};

	discreteDistance[]={200,300,400,450,500,550,600};
	discreteDistanceCameraPoint[]={"eye","eye_300","eye_400","eye_450","eye_500","eye_550","eye_600"};
	cameraDir = "eye_look";
	muzzles[]={"this","SAFE"};
	descriptionShort="Assault rifle<br/>Caliber: 5.56x45mm NATO";
	class Library
	{
		libTextDesc = "TEMPORARY DESCRIPTION";
	};

	class ItemInfo
	{
		priority = 1;
		RMBhint = "M4";
		onHoverText = "TODO M4 DSS";
	};

	class GunParticles: GunParticles
	{
		class SecondEffect
		{
			positionName = "Nabojnicestart";
			directionName = "Nabojniceend";
			effectName = "CaselessAmmoCloud";
		};
		class RHSUSF_BarrelRefract
		{
			positionName = "usti hlavne";
			directionName = "usti hlavne up";
			effectName = "RHSUSF_BarrelRefract";
		};
	};
	//MAX 5 slots
	class WeaponSlotsInfo
	{
		mass = 73.04;
		allowedSlots[] = {901};
		class UnderBarrelSlot: rhs_western_rifle_underbarrel_slot {};
		class CowsSlot: rhs_western_rifle_scopes_slot_short {
			class compatibleItems: compatibleItems {
				rhsusf_acc_nxs_3515x50f1_md_sun = 0;
				rhsusf_acc_nxs_3515x50f1_h58_sun = 0;
				rhsusf_acc_nxs_5522x56_md_sun = 0;
			};
		};
		class PointerSlot: rhs_western_rifle_laser_slot_top {};
		class MuzzleSlot: rhs_western_rifle_muzzle_slot {};
		class GripodSlot: rhs_western_rifle_gripod_slot {};
	};

	bullet1[] = {"A3\sounds_f\weapons\shells\5_56\metal_556_01.wss", 0.1, 1, 15};
	bullet2[] = {"A3\sounds_f\weapons\shells\5_56\metal_556_02.wss", 0.1, 1, 15};
	bullet3[] = {"A3\sounds_f\weapons\shells\5_56\metal_556_03.wss", 0.177828, 1, 15};
	bullet4[] = {"A3\sounds_f\weapons\shells\5_56\metal_556_04.wss", 0.177828, 1, 15};
	bullet5[] = {"A3\sounds_f\weapons\shells\5_56\asphlat_556_01.wss", 0.1, 1, 15};
	bullet6[] = {"A3\sounds_f\weapons\shells\5_56\asphlat_556_02.wss", 0.1, 1, 15};
	bullet7[] = {"A3\sounds_f\weapons\shells\5_56\asphlat_556_03.wss", 0.1, 1, 15};
	bullet8[] = {"A3\sounds_f\weapons\shells\5_56\asphlat_556_04.wss", 0.1, 1, 15};
	bullet9[] = {"A3\sounds_f\weapons\shells\5_56\grass_556_01.wss", 0.01, 1, 15};
	bullet10[] = {"A3\sounds_f\weapons\shells\5_56\grass_556_02.wss", 0.01, 1, 15};
	bullet11[] = {"A3\sounds_f\weapons\shells\5_56\grass_556_03.wss", 0.01, 1, 15};
	bullet12[] = {"A3\sounds_f\weapons\shells\5_56\grass_556_04.wss", 0.01, 1, 15};
	soundBullet[] = {"bullet1", 0.083, "bullet2", 0.083, "bullet3", 0.083, "bullet4", 0.083, "bullet5", 0.083, "bullet6", 0.083, "bullet7", 0.083, "bullet8", 0.083, "bullet9", 0.083, "bullet10", 0.083, "bullet11", 0.083, "bullet12", 0.083};


	modes[]=
	{
		"Single",
		"Single_AI",
		"Burst",
		"single_medium_optics1",
		"single_far_optics2"
	};
	class Single: Mode_SemiAuto
	{
		reloadTime = 0.075;
		dispersion = DISPERSION_MOA(3.2);
		minRange = 2;
		minRangeProbab = 0.5;
		midRange = 150;
		midRangeProbab = 0.7;
		maxRange = 250;
		maxRangeProbab = 0.2;
	};
	class Single_AI: Single
	{
		showToPlayer = 0;
		burstRangeMax = 3;
		minRange=200;
		minRangeProbab=0.5;
		midRange=300;
		midRangeProbab=0.7;
		maxRange=500;
		maxRangeProbab=0.3;
		aiRateOfFire = 1;
		aiRateOfFireDispersion = 2;
	};

	class Burst : Mode_Burst
	{
		reloadTime = 0.075;
		dispersion = DISPERSION_MOA(3.2);
		minRange = 1;
		minRangeProbab = 0.7;
		midRange = 60;
		midRangeProbab = 0.8;
		maxRange = 120;
		maxRangeProbab = 0.2;
	};

	class FullAuto : Mode_FullAuto
	{
		reloadTime = 0.075;
		dispersion = DISPERSION_MOA(3.2);
		minRange = 0;
		minRangeProbab = 0.9;
		midRange = 15;
		midRangeProbab = 0.7;
		maxRange = 30;
		maxRangeProbab = 0.1;
		aiRateOfFire = 1e-006;
	};
	class single_medium_optics1: Single
	{
		burstRangeMax = 3;
		requiredOpticType=1;
		showToPlayer=0;
		minRange=2;
		minRangeProbab=0.2;
		midRange=550;
		midRangeProbab=0.69;
		maxRange=700;
		maxRangeProbab=0.1;
		aiRateOfFire=3;
		aiRateOfFireDistance=600;
		aiRateOfFireDispersion = 3;
	};
	class single_far_optics2: single_medium_optics1
	{
		requiredOpticType=2;
	};
	class fullauto_medium: FullAuto
	{
		showToPlayer=0;
		burst=2;
		burstRangeMax = 6;
		minRange=2;
		minRangeProbab=0.5;
		midRange=75;
		midRangeProbab=0.69;
		maxRange=150;
		maxRangeProbab=0.05;
		aiRateOfFire=2;
	};


	class M203_GL: UGL_F
	{
		displayName = "M203 grenade launcher";
		descriptionShort = "M203";
		useModelOptics = false;
		useExternalOptic = false;
		reloadAction = "GestureReloadMk20UGL";
		reloadMagazineSound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\MK20_UGL_reload", 0.794328, 1, 10};
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
			CBA_40mm_M203
		};
		cameraDir = "gl_look";
		discreteDistance[] = {50, 100, 150, 200, 250};
		discreteDistanceCameraPoint[] = {"gl_eye_50m", "gl_eye_100m", "gl_eye_150m", "gl_eye_200m", "gl_eye_250m" };
		discreteDistanceInitIndex = 1; /// 100 is the default zero
		magazineReloadSwitchPhase = 0.49;
	};
	class M320_GL: M203_GL
	{
		displayName = "M320 GLM";
		descriptionShort = "M320";
		useModelOptics = false;
		useExternalOptic = false;
		reloadAction = "rhs_GestureReloadM320_ugl";
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
		cameraDir = "gl_look";
		discreteDistance[] = {50, 100, 150, 200, 250, 300, 350};
		discreteDistanceCameraPoint[] = {"gl_eye_50m", "gl_eye_100m", "gl_eye_150m", "gl_eye_200m", "gl_eye_250m", "gl_eye_300m", "gl_eye_350m"};
		discreteDistanceInitIndex = 1; /// 100 is the default zero
		reloadMagazineSound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Katiba\Katiba_UGL_reload", 0.794328, 1, 10};
		magazineReloadSwitchPhase = 0.56;
	};
	class Six12: Rifle_Base_F
	{
		displayName 	= "SIX-12";
		magazines[]		= {rhs_mag_six12_slug};
		//magazineWell[]	= {UBS_12GA};

		discreteDistance[]			= {50};
		discreteDistanceInitIndex	= 0;
		maxZeroing					= 50;
		ballisticsComputer 			= 0;

		muzzlePos			= "usti granatometu";
		muzzleEnd			= "konec granatometu";
		cursor 				= sgun;

		recoil 				= recoil_MSBS65_ubs;
		fireSpreadAngle 	= 0.95; // spread value for shotgun simulation bullets
		autoFire 			= 0;
		reloadTime 			= 0.35;
		reloadAction		= "GestureReloadMSBS_UBS";
		modes[] 			= {Single};

		aiDispersionCoefY = 2;
		aiDispersionCoefX = 2;
		class Single: Mode_SemiAuto
		{
			reloadTime 			= 0.3;
			dispersion 			= 0.01245;

			minRange = 2;	minRangeProbab = 0.95;
			midRange = 30;	midRangeProbab = 0.95;
			maxRange = 100;	maxRangeProbab = 0.3;
			aiRateOfFire = 1;
			aiRateOfFireDistance = 30;
			sounds[] = {StandardSound};
			class StandardSound
			{
				  soundSetShot[] = {"Msbs65_01_Shotgun_Shot_SoundSet", "Msbs65_01_Shotgun_Tail_SoundSet"};
			};
		};
	};
	class SAFE: RHSUSF_SAFE_BASE
	{
		discreteDistanceCameraPoint[]={"eye"};
		cameraDir = "eye_look";
	};
	magazineReloadSwitchPhase = 0.46;

	changeFiremodeSound[] = {"A3\sounds_f\weapons\closure\firemode_changer_2",0.551189,1,5};
};

class rhs_weap_m4 : rhs_weap_m4_Base
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_weap_m4)
	scope = 2;
	displayName = $STR_RHS_CFGWEAPONS_RIFLE_M4;

	model = "\rhsusf\addons\rhsusf_weapons\M4\m4_ris.p3d";
	handAnim[] = {"OFP2_ManSkeleton","\rhsusf\addons\rhsusf_c_weapons\anims\rhs_hand_m4a1_stock.rtm"};

	hiddenSelectionsMaterials[] =
	{
		"\rhsusf\addons\rhsusf_weapons\m4\data\m4a1.rvmat",
		"\rhsusf\addons\rhsusf_weapons\m4\data\magazine.rvmat",
		"\rhsusf\addons\rhsusf_weapons\m4\data\m4acc_co.rvmat",
		"\rhsusf\addons\rhsusf_weapons\m4\data\kacrailcover.rvmat",
		"\rhsusf\addons\rhsusf_weapons\acc\grips\grippod\data\acc_co.rvmat",
		"\rhsusf\addons\rhsusf_weapons\m4\data\magpulstock.rvmat",
		"\rhsusf\addons\rhsusf_weapons\m4\data\m203.rvmat",
		"\rhsusf\addons\rhsusf_weapons\m4\data\kacleaf.rvmat",
		"\rhsusf\addons\rhsusf_weapons\m320\data\M320.rvmat",
		"\rhsusf\addons\rhsusf_weapons\m4\data\m4a1.rvmat"
	};

	class WeaponSlotsInfo: WeaponSlotsInfo
	{
		mass = 73.04;
	};
	//used to determine animation switch
	rhs_grip1_change = "rhs_weap_m4_grip";
	rhs_grip2_change = "rhs_weap_m4_grip2";
	rhs_grip3_change = "rhs_weap_m4_grip3";
	rhsusf_acc_anpeq15 = 0; // 0 - for M4, 1 - for M27IAR/HK with higher top rail
	baseWeapon = "rhs_weap_m4";
};

class rhs_weap_m4_pmag : rhs_weap_m4
{
	scope = 1;
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_weap_m4_pmag)
	displayName = $STR_RHS_CFGWEAPONS_RIFLE_M4_pmag;

	handAnim[] = {"OFP2_ManSkeleton","\rhsusf\addons\rhsusf_c_weapons\anims\rhs_hand_m4a1.rtm"};
	rhs_grip1_change = "rhs_weap_m4_pmag_grip";
	rhs_grip2_change = "rhs_weap_m4_pmag_grip2";
	rhs_grip3_change = "rhs_weap_m4_pmag_grip3";
	class WeaponSlotsInfo: WeaponSlotsInfo
	{
		mass = 73.04;
	};
};


class rhs_weap_m4_mstock : rhs_weap_m4
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_weap_m4_mstock)
	displayName = $STR_RHS_CFGWEAPONS_RIFLE_M4_mstock;

	model = "\rhsusf\addons\rhsusf_weapons\M4\m4_ris_mstock.p3d";
	handAnim[] = {"OFP2_ManSkeleton","\rhsusf\addons\rhsusf_c_weapons\anims\rhs_hand_m4a1.rtm"};
	class WeaponSlotsInfo: WeaponSlotsInfo
	{
		mass = 73.04;
	};
	rhs_grip1_change = "rhs_weap_m4_mstock_grip";
	rhs_grip2_change = "rhs_weap_m4_mstock_grip2";
	rhs_grip3_change = "rhs_weap_m4_mstock_grip3";
	baseWeapon = "rhs_weap_m4_mstock";
};

class rhs_weap_m4_carryhandle : rhs_weap_m4
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_weap_m4_carryhandle)
	displayName = $STR_RHS_CFGWEAPONS_RIFLE_M4_carry;

	model = "\rhsusf\addons\rhsusf_weapons\M4\m4_ris_carryhandle.p3d";
	handAnim[] = {"OFP2_ManSkeleton","\rhsusf\addons\rhsusf_c_weapons\anims\rhs_hand_m4a1_stock.rtm"};
	class WeaponSlotsInfo: WeaponSlotsInfo
	{
		mass = 73.04;
	};
	CarryhandleSight
	rhs_grip1_change = "rhs_weap_m4_carryhandle_grip";
	rhs_grip2_change = "rhs_weap_m4_carryhandle_grip2";
	rhs_grip3_change = "rhs_weap_m4_carryhandle_grip3";
	baseWeapon = "rhs_weap_m4_carryhandle";
};


class rhs_weap_m4_carryhandle_pmag : rhs_weap_m4_carryhandle
{
	scope = 1;
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_weap_m4_carryhandle_pmag)
	displayName = $STR_RHS_CFGWEAPONS_RIFLE_M4_carryp;

	handAnim[] = {"OFP2_ManSkeleton","\rhsusf\addons\rhsusf_c_weapons\anims\rhs_hand_m4a1.rtm"};
	rhs_grip1_change = "rhs_weap_m4_carryhandle_pmag_grip";
	rhs_grip2_change = "rhs_weap_m4_carryhandle_pmag_grip2";
	rhs_grip3_change = "rhs_weap_m4_carryhandle_pmag_grip3";
};


class rhs_weap_m4_carryhandle_mstock : rhs_weap_m4_carryhandle
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_weap_m4_carryhandle_mstock)
	displayName = $STR_RHS_CFGWEAPONS_RIFLE_M4_carrymstock;

	model = "\rhsusf\addons\rhsusf_weapons\M4\m4_ris_carryhandle_mstock.p3d";
	handAnim[] = {"OFP2_ManSkeleton","\rhsusf\addons\rhsusf_c_weapons\anims\rhs_hand_m4a1.rtm"};
	class WeaponSlotsInfo: WeaponSlotsInfo
	{
		mass = 73.04;
	};
	CarryhandleSight
	rhs_grip1_change = "rhs_weap_m4_carryhandle_mstock_grip";
	rhs_grip2_change = "rhs_weap_m4_carryhandle_mstock_grip2";
	rhs_grip3_change = "rhs_weap_m4_carryhandle_mstock_grip3";
	baseWeapon = "rhs_weap_m4_carryhandle_mstock";
};


////////////M4 GRIPPOD VARIANTS////////

class rhs_weap_m4_grip : rhs_weap_m4
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_weap_m4_grip)
	//displayName = $STR_RHS_CFGWEAPONS_RIFLE_M4_foreg;

	class WeaponSlotsInfo: WeaponSlotsInfo
	{
		mass = 73.04;
		class UnderBarrelSlot {};
	};
	Grip_Macro(1,m16a4)
};

class rhs_weap_m4_grip2 : rhs_weap_m4_grip
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_weap_m4_grip2)
	//displayName = $STR_RHS_CFGWEAPONS_RIFLE_M4_afg;

	Grip_Macro(2,m4a1_afg)
};

class rhs_weap_m4_grip3 : rhs_weap_m4_grip
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_weap_m4_grip3)
	//displayName = $STR_RHS_CFGWEAPONS_RIFLE_M4_grip;

	Grip_Macro(3,m16a4)
};

class rhs_weap_m4_pmag_grip : rhs_weap_m4_pmag
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_weap_m4_pmag_grip)
	//displayName = $STR_RHS_CFGWEAPONS_RIFLE_M4_foreg;
	Grip_Macro(1,m16a4)
};
class rhs_weap_m4_pmag_grip2 : rhs_weap_m4_pmag_grip
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_weap_m4_pmag_grip2)
	//displayName = $STR_RHS_CFGWEAPONS_RIFLE_M4_afg;
	Grip_Macro(2,m4a1_afg)
};

class rhs_weap_m4_pmag_grip3 : rhs_weap_m4_pmag_grip
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_weap_m4_pmag_grip3)
	//displayName = $STR_RHS_CFGWEAPONS_RIFLE_M4_grip;
	Grip_Macro(3,m16a4)
};

class rhs_weap_m4_mstock_grip : rhs_weap_m4_mstock
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_weap_m4_mstock_grip)
	//displayName = $STR_RHS_CFGWEAPONS_RIFLE_M4_foreg;
	Grip_Macro(1,m16a4)
};
class rhs_weap_m4_mstock_grip2 : rhs_weap_m4_mstock_grip
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_weap_m4_mstock_grip2)
	//displayName = $STR_RHS_CFGWEAPONS_RIFLE_M4_afg;
	Grip_Macro(2,m4a1_afg)
};

class rhs_weap_m4_mstock_grip3 : rhs_weap_m4_mstock_grip
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_weap_m4_mstock_grip3)
	//displayName = $STR_RHS_CFGWEAPONS_RIFLE_M4_grip;
	Grip_Macro(3,m16a4)
};

class rhs_weap_m4_carryhandle_grip : rhs_weap_m4_carryhandle
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_weap_m4_carryhandle_grip)
	//displayName = $STR_RHS_CFGWEAPONS_RIFLE_M4_foreg;
	Grip_Macro(1,m16a4)
};
class rhs_weap_m4_carryhandle_grip2 : rhs_weap_m4_carryhandle_grip
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_weap_m4_carryhandle_grip2)
	//displayName = $STR_RHS_CFGWEAPONS_RIFLE_M4_afg;

	Grip_Macro(2,m4a1_afg)
};

class rhs_weap_m4_carryhandle_grip3 : rhs_weap_m4_carryhandle_grip
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_weap_m4_carryhandle_grip3)
	//displayName = $STR_RHS_CFGWEAPONS_RIFLE_M4_grip;

	Grip_Macro(3,m16a4)
};

class rhs_weap_m4_carryhandle_pmag_grip : rhs_weap_m4_carryhandle_pmag
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_weap_m4_carryhandle_pmag_grip)
	//displayName = $STR_RHS_CFGWEAPONS_RIFLE_M4_foreg;
	Grip_Macro(1,m16a4)
};
class rhs_weap_m4_carryhandle_pmag_grip2 : rhs_weap_m4_carryhandle_pmag_grip
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_weap_m4_carryhandle_pmag_grip2)
	//displayName = $STR_RHS_CFGWEAPONS_RIFLE_M4_afg;
	Grip_Macro(2,m4a1_afg)
};

class rhs_weap_m4_carryhandle_pmag_grip3 : rhs_weap_m4_carryhandle_pmag_grip
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_weap_m4_carryhandle_pmag_grip3)
	//displayName = $STR_RHS_CFGWEAPONS_RIFLE_M4_grip;
	Grip_Macro(3,m16a4)
};

class rhs_weap_m4_carryhandle_mstock_grip : rhs_weap_m4_carryhandle_mstock
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_weap_m4_carryhandle_mstock_grip)
	//displayName = $STR_RHS_CFGWEAPONS_RIFLE_M4_foreg;
	Grip_Macro(1,m16a4)
};
class rhs_weap_m4_carryhandle_mstock_grip2 : rhs_weap_m4_carryhandle_mstock_grip
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_weap_m4_carryhandle_mstock_grip2)
	//displayName = $STR_RHS_CFGWEAPONS_RIFLE_M4_afg;
	Grip_Macro(2,m4a1_afg)
};

class rhs_weap_m4_carryhandle_mstock_grip3 : rhs_weap_m4_carryhandle_mstock_grip
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_weap_m4_carryhandle_mstock_grip3)
	//displayName = $STR_RHS_CFGWEAPONS_RIFLE_M4_grip;
	Grip_Macro(3,m16a4)
};


class rhs_weap_m4_m320 : rhs_weap_m4
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_weap_m4_m320)
	displayName = $STR_RHS_CFGWEAPONS_RIFLE_M4_M320;

	model = "\rhsusf\addons\rhsusf_weapons\M4\m4_ris_m320.p3d";
	handAnim[] = {"OFP2_ManSkeleton","\rhsusf\addons\rhsusf_c_weapons\anims\rhs_hand_m4a1_m320.rtm"};
	muzzles[] = {"this","M320_GL","SAFE"};
	class WeaponSlotsInfo: WeaponSlotsInfo
	{
		mass = 106.04;
		class UnderBarrelSlot {};
		class GripodSlot {};
	};
	inertia = 0.6;
	dexterity = 1.4;
	baseWeapon="rhs_weap_m4_m320";
};

class rhs_weap_m4_m203 : rhs_weap_m4_m320
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_weap_m4_m203)
	displayName = $STR_RHS_CFGWEAPONS_RIFLE_M4_M203;

	model = "\rhsusf\addons\rhsusf_weapons\M4\m4_ris_m203.p3d";
	handAnim[] = {"OFP2_ManSkeleton","\rhsusf\addons\rhsusf_c_weapons\anims\rhs_hand_m16a4_m203.rtm"};
	muzzles[] = {"this","M203_GL","SAFE"};
	class WeaponSlotsInfo: WeaponSlotsInfo
	{
		mass = 102.96;
		class PointerSlot: rhs_western_rifle_laser_slot {};
		class GripodSlot: rhs_western_m203_gripod_slot {};
	};
	rhs_grip1_change = "rhs_weap_m4_m203_grip";
	rhs_grip2_change = "rhs_weap_m4_m203_grip";
	rhs_grip3_change = "rhs_weap_m4_m203_grip";
	baseWeapon="rhs_weap_m4_m203";
};

class rhs_weap_m4_m203S : rhs_weap_m4_m203
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_weap_m4_m203S)
	displayName = $STR_RHS_CFGWEAPONS_RIFLE_M4_M203S;

	model = "\rhsusf\addons\rhsusf_weapons\M4\m4_ris_m203s.p3d";
	class WeaponSlotsInfo: WeaponSlotsInfo
	{
		mass = 102.96;
	};
	rhs_grip1_change = "rhs_weap_m4_m203S_grip";
	rhs_grip2_change = "rhs_weap_m4_m203S_grip";
	rhs_grip3_change = "rhs_weap_m4_m203S_grip";
	baseWeapon="rhs_weap_m4_m203S";
};

class rhs_weap_m4_carryhandle_m203 : rhs_weap_m4_m203
{
	AUTHOR_MACRO
	//INVENTORY_PICTURE(rhs_weap_m4_carryhandle_m203) TODO
	displayName = $STR_RHS_CFGWEAPONS_RIFLE_M4_CARRYHANDLE_M203;

	model = "\rhsusf\addons\rhsusf_weapons\M4\m4_ris_carryhandle_m203.p3d";

	CarryhandleSight

	rhs_grip1_change = "rhs_weap_m4_carryhandle_m203_grip";
	rhs_grip2_change = "rhs_weap_m4_carryhandle_m203_grip";
	rhs_grip3_change = "rhs_weap_m4_carryhandle_m203_grip";
	baseWeapon="rhs_weap_m4_carryhandle_m203";
};

class rhs_weap_m4_carryhandle_m203S : rhs_weap_m4_carryhandle_m203
{
	AUTHOR_MACRO
	//INVENTORY_PICTURE(rhs_weap_m4_carryhandle_m203S) TODO
	displayName = $STR_RHS_CFGWEAPONS_RIFLE_M4_CARRYHANDLE_M203S;

	model = "\rhsusf\addons\rhsusf_weapons\M4\m4_ris_carryhandle_m203s.p3d";

	class WeaponSlotsInfo: WeaponSlotsInfo
	{
		mass = 93.40;
	};
	rhs_grip1_change = "rhs_weap_m4_carryhandle_m203S_grip";
	rhs_grip2_change = "rhs_weap_m4_carryhandle_m203S_grip";
	rhs_grip3_change = "rhs_weap_m4_carryhandle_m203S_grip";
	baseWeapon="rhs_weap_m4_carryhandle_m203S";
};

////////////M4 M203 GRIPPOD VARIANTS////////

class rhs_weap_m4_m203_grip : rhs_weap_m4_m203
{
	AUTHOR_MACRO
	Grip_Macro(_m203_blk,m203gripod)
};
class rhs_weap_m4_m203S_grip : rhs_weap_m4_m203S
{
	AUTHOR_MACRO
	Grip_Macro(_m203_blk,m203gripod)
};

class rhs_weap_m4_carryhandle_m203_grip : rhs_weap_m4_carryhandle_m203
{
	AUTHOR_MACRO
	Grip_Macro(_m203_blk,m203gripod)
};
class rhs_weap_m4_carryhandle_m203S_grip : rhs_weap_m4_carryhandle_m203S
{
	AUTHOR_MACRO
	Grip_Macro(_m203_blk,m203gripod)
};

//
// M4A1 PIP
//

class rhs_weap_m4a1 : rhs_weap_m4_Base
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_weap_m4a1)
	scope = 2;
	displayName = $STR_RHS_CFGWEAPONS_RIFLE_M4A1;
	model = "\rhsusf\addons\rhsusf_weapons\M4\m4_ris.p3d";

	handAnim[] = {"OFP2_ManSkeleton","\rhsusf\addons\rhsusf_c_weapons\anims\rhs_hand_m4a1_stock.rtm"};

	hiddenSelectionsTextures[] =
	{
		"\rhsusf\addons\rhsusf_weapons\m4\data\m4a1_actual_co.paa",
		"\rhsusf\addons\rhsusf_weapons\m4\data\magazine_co.paa",
		"\rhsusf\addons\rhsusf_weapons\m4\data\m4acc_co.paa",
		"\rhsusf\addons\rhsusf_weapons\m4\data\kacrailcover_co.paa",
		"\rhsusf\addons\rhsusf_weapons\acc\grips\grippod\data\acc_co.paa",
		"\rhsusf\addons\rhsusf_weapons\m4\data\magpulstock_co.paa",
		"\rhsusf\addons\rhsusf_weapons\m4\data\m203_co.paa",
		"\rhsusf\addons\rhsusf_weapons\m4\data\kacleaf_co.paa",
		"\rhsusf\addons\rhsusf_weapons\m320\data\m320_co.paa",
		"\rhsusf\addons\rhsusf_weapons\m4\data\m4a1_actual_co.paa"
	};

	modes[] =
	{
		"Single",
		"Single_AI",
		"FullAuto",
		"single_medium_optics1",
		"single_far_optics2"
	};

	class WeaponSlotsInfo: WeaponSlotsInfo
	{
		mass = 63.8;
	};
	rhs_grip1_change = "rhs_weap_m4a1_grip";
	rhs_grip2_change = "rhs_weap_m4a1_grip2";
	rhs_grip3_change = "rhs_weap_m4a1_grip3";
	baseWeapon = "rhs_weap_m4a1";
};

class rhs_weap_m4a1_d : rhs_weap_m4a1
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_weap_m4a1_d)
	displayName = $STR_RHS_CFGWEAPONS_RIFLE_M4A1_D;


	rhs_grip1_change = "rhs_weap_m4a1_d_grip";
	rhs_grip2_change = "rhs_weap_m4a1_d_grip2";
	rhs_grip3_change = "rhs_weap_m4a1_d_grip3";
	baseWeapon = "rhs_weap_m4a1_d";

	DesertM4_Macro
};

class rhs_weap_m4a1_wd : rhs_weap_m4a1
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_weap_m4a1_wd)
	displayName = $STR_RHS_CFGWEAPONS_RIFLE_M4A1_WD;


	rhs_grip1_change = "rhs_weap_m4a1_wd_grip";
	rhs_grip2_change = "rhs_weap_m4a1_wd_grip2";
	rhs_grip3_change = "rhs_weap_m4a1_wd_grip3";
	baseWeapon = "rhs_weap_m4a1_wd";

	hiddenSelectionsTextures[] =
	{
		"\rhsusf\addons\rhsusf_weapons\m4\data\m4a1_actual_wd_co.paa",
		"\rhsusf\addons\rhsusf_weapons\m4\data\magazine_co.paa",
		"\rhsusf\addons\rhsusf_weapons\m4\data\m4acc_wd_co.paa",
		"\rhsusf\addons\rhsusf_weapons\m4\data\kacrailcover_wd_co.paa",
		"\rhsusf\addons\rhsusf_weapons\acc\grips\grippod\data\acc_co.paa",
		"\rhsusf\addons\rhsusf_weapons\m4\data\magpulstock_wd_co.paa",
		"\rhsusf\addons\rhsusf_weapons\m4\data\m203s_wd_co.paa",
		"\rhsusf\addons\rhsusf_weapons\m4\data\kacleaf_wd_co.paa",
		"\rhsusf\addons\rhsusf_weapons\m320\data\m320_co.paa",
		"\rhsusf\addons\rhsusf_weapons\m4\data\m4a1_actual_wd_co.paa"
	};
};

class rhs_weap_m4a1_mstock : rhs_weap_m4a1
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_weap_m4a1_mstock)
	displayName = $STR_RHS_CFGWEAPONS_RIFLE_M4A1_mstock;
	model = "\rhsusf\addons\rhsusf_weapons\M4\m4_ris_mstock.p3d";

	handAnim[] = {"OFP2_ManSkeleton","\rhsusf\addons\rhsusf_c_weapons\anims\rhs_hand_m4a1.rtm"};
	rhs_grip1_change = "rhs_weap_m4a1_mstock_grip";
	rhs_grip2_change = "rhs_weap_m4a1_mstock_grip2";
	rhs_grip3_change = "rhs_weap_m4a1_mstock_grip3";
	baseWeapon = "rhs_weap_m4a1_mstock";
};
class rhs_weap_m4a1_d_mstock : rhs_weap_m4a1_d
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_weap_m4a1_d_mstock)
	displayName = $STR_RHS_CFGWEAPONS_RIFLE_M4A1_D_mstock;
	model = "\rhsusf\addons\rhsusf_weapons\M4\m4_ris_mstock.p3d";

	handAnim[] = {"OFP2_ManSkeleton","\rhsusf\addons\rhsusf_c_weapons\anims\rhs_hand_m4a1.rtm"};
	rhs_grip1_change = "rhs_weap_m4a1_d_mstock_grip";
	rhs_grip2_change = "rhs_weap_m4a1_d_mstock_grip2";
	rhs_grip3_change = "rhs_weap_m4a1_d_mstock_grip3";
	baseWeapon = "rhs_weap_m4a1_d_mstock";
};

class rhs_weap_m4a1_wd_mstock : rhs_weap_m4a1_wd
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_weap_m4a1_wd_mstock)
	displayName = $STR_RHS_CFGWEAPONS_RIFLE_M4A1_WD_mstock;
	model = "\rhsusf\addons\rhsusf_weapons\M4\m4_ris_mstock.p3d";

	handAnim[] = {"OFP2_ManSkeleton","\rhsusf\addons\rhsusf_c_weapons\anims\rhs_hand_m4a1.rtm"};

	rhs_grip1_change = "rhs_weap_m4a1_wd_mstock_grip";
	rhs_grip2_change = "rhs_weap_m4a1_wd_mstock_grip2";
	rhs_grip3_change = "rhs_weap_m4a1_wd_mstock_grip3";
	baseWeapon = "rhs_weap_m4a1_wd_mstock";
};

class rhs_weap_m4a1_pmag : rhs_weap_m4a1
{
	scope = 1;
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_weap_m4a1_pmag)
	displayName = $STR_RHS_CFGWEAPONS_RIFLE_M4A1_pmag;

	handAnim[] = {"OFP2_ManSkeleton","\rhsusf\addons\rhsusf_c_weapons\anims\rhs_hand_m4a1.rtm"};
	rhs_grip1_change = "rhs_weap_m4a1_pmag_grip";
	rhs_grip2_change = "rhs_weap_m4a1_pmag_grip2";
	rhs_grip3_change = "rhs_weap_m4a1_pmag_grip3";
};
/*
class rhs_weap_m4a1_d_pmag : rhs_weap_m4a1_d
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_weap_m4a1_d_pmag)
	displayName = $STR_RHS_CFGWEAPONS_RIFLE_M4A1_pmag;
	model = "\rhsusf\addons\rhsusf_weapons\M4\m4_ris_pmag.p3d";

	handAnim[] = {"OFP2_ManSkeleton","\rhsusf\addons\rhsusf_c_weapons\anims\rhs_hand_m4a1.rtm"};
	rhs_grip1_change = "rhs_weap_m4a1_d_pmag_grip";
	rhs_grip2_change = "rhs_weap_m4a1_d_pmag_grip2";
	rhs_grip3_change = "rhs_weap_m4a1_d_pmag_grip3";
	baseWeapon = "rhs_weap_m4a1_d_pmag";

	DesertM4_Macro
};
*/

class rhs_weap_m4a1_carryhandle : rhs_weap_m4a1
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_weap_m4a1_carryhandle)
	displayName = $STR_RHS_CFGWEAPONS_RIFLE_M4A1_carryhandle;
	model = "\rhsusf\addons\rhsusf_weapons\M4\m4_ris_carryhandle.p3d";

	//Non-PIP variants have no ambidexterous selector, but m4a1_actual_co.paa is missing selector indicator... Disabled for now.
	/* hiddenSelectionsTextures[] =
	{
		"\rhsusf\addons\rhsusf_weapons\m4\data\m4a1_actual_co.paa",
		"\rhsusf\addons\rhsusf_weapons\m4\data\magazine_co.paa",
		"\rhsusf\addons\rhsusf_weapons\m4\data\m4acc_co.paa",
		"\rhsusf\addons\rhsusf_weapons\m4\data\kacrailcover_co.paa",
		"\rhsusf\addons\rhsusf_weapons\acc\grips\grippod\data\acc_co.paa",
		"\rhsusf\addons\rhsusf_weapons\m4\data\magpulstock_co.paa",
		"\rhsusf\addons\rhsusf_weapons\m4\data\m203_co.paa",
		"\rhsusf\addons\rhsusf_weapons\m4\data\kacleaf_co.paa",
		"\rhsusf\addons\rhsusf_weapons\m320\data\m320_co.paa",
		"a3\data_f\clear_empty.paa"
	}; */

	handAnim[] = {"OFP2_ManSkeleton","\rhsusf\addons\rhsusf_c_weapons\anims\rhs_hand_m4a1_stock.rtm"};
	CarryhandleSight
	rhs_grip1_change = "rhs_weap_m4a1_carryhandle_grip";
	rhs_grip2_change = "rhs_weap_m4a1_carryhandle_grip2";
	rhs_grip3_change = "rhs_weap_m4a1_carryhandle_grip3";
	baseWeapon = "rhs_weap_m4a1_carryhandle";
};

class rhs_weap_m4a1_carryhandle_mstock : rhs_weap_m4a1_carryhandle
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_weap_m4a1_carryhandle_mstock)
	displayName = $STR_RHS_CFGWEAPONS_RIFLE_M4A1_carrymstock;
	model = "\rhsusf\addons\rhsusf_weapons\M4\m4_ris_carryhandle_mstock.p3d";

	handAnim[] = {"OFP2_ManSkeleton","\rhsusf\addons\rhsusf_c_weapons\anims\rhs_hand_m4a1.rtm"};
	rhs_grip1_change = "rhs_weap_m4a1_carryhandle_mstock_grip";
	rhs_grip2_change = "rhs_weap_m4a1_carryhandle_mstock_grip2";
	rhs_grip3_change = "rhs_weap_m4a1_carryhandle_mstock_grip3";
	baseWeapon = "rhs_weap_m4a1_carryhandle_mstock";
};

class rhs_weap_m4a1_carryhandle_pmag : rhs_weap_m4a1_carryhandle
{
	scope = 1;
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_weap_m4a1_carryhandle_pmag)
	displayName = $STR_RHS_CFGWEAPONS_RIFLE_M4A1_carryp;

	handAnim[] = {"OFP2_ManSkeleton","\rhsusf\addons\rhsusf_c_weapons\anims\rhs_hand_m4a1.rtm"};
	rhs_grip1_change = "rhs_weap_m4a1_carryhandle_pmag_grip";
	rhs_grip2_change = "rhs_weap_m4a1_carryhandle_pmag_grip2";
	rhs_grip3_change = "rhs_weap_m4a1_carryhandle_pmag_grip3";
};

/*class rhs_weap_m4a1_six12 : rhs_weap_m4a1
{
	scope = 1;
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_weap_m4a1_pmag)
	displayName = "M4A1 (SIX-12)";
	muzzles[] = {"this","six12","safe"};
	class WeaponSlotsInfo: WeaponSlotsInfo
	{
		delete UnderBarrelSlot;
		delete GripodSlot;
	};

	handAnim[] = {"OFP2_ManSkeleton","\rhsusf\addons\rhsusf_c_weapons\anims\rhs_hand_m4a1_six12.rtm"};
	baseweapon = "rhs_weap_m4a1_six12";
};*/
////////////M4A1 GRIPPOD VARIANTS////////

class rhs_weap_m4a1_grip : rhs_weap_m4a1
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_weap_m4a1_grip)
	//displayName = $STR_RHS_CFGWEAPONS_RIFLE_M4A1_foreg;

	class WeaponSlotsInfo: WeaponSlotsInfo
	{
		mass = 65;
		class UnderBarrelSlot {};
	};
	Grip_Macro(1,m16a4)
};
class rhs_weap_m4a1_grip2 : rhs_weap_m4a1_grip
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_weap_m4a1_grip2)
	//displayName = $STR_RHS_CFGWEAPONS_RIFLE_M4A1_afg;
	Grip_Macro(2,m4a1_afg)
};
class rhs_weap_m4a1_grip3 : rhs_weap_m4a1_grip
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_weap_m4a1_grip3)
	//displayName = $STR_RHS_CFGWEAPONS_RIFLE_M4A1_grip;
	Grip_Macro(3,m16a4)
};

class rhs_weap_m4a1_d_grip : rhs_weap_m4a1_d
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_weap_m4a1_d_grip)
	//displayName = $STR_RHS_CFGWEAPONS_RIFLE_M4A1_D_foreg;

	class WeaponSlotsInfo: WeaponSlotsInfo
	{
		mass = 65;
		class UnderBarrelSlot {};
	};
	Grip_Macro(1,m16a4)
};

class rhs_weap_m4a1_d_grip2 : rhs_weap_m4a1_d_grip
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_weap_m4a1_d_grip2)
	//displayName = $STR_RHS_CFGWEAPONS_RIFLE_M4A1_D_afg;

	Grip_Macro(2,m4a1_afg)
};
class rhs_weap_m4a1_d_grip3 : rhs_weap_m4a1_d_grip
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_weap_m4a1_d_grip3)
	//displayName = $STR_RHS_CFGWEAPONS_RIFLE_M4A1_D_grip;

	Grip_Macro(3,m16a4)
};

class rhs_weap_m4a1_wd_grip : rhs_weap_m4a1_wd
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_weap_m4a1_wd_grip)
	Grip_Macro(1,m16a4)
};

class rhs_weap_m4a1_wd_grip2 : rhs_weap_m4a1_wd_grip
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_weap_m4a1_wd_grip2)
	Grip_Macro(2,m4a1_afg)
};
class rhs_weap_m4a1_wd_grip3 : rhs_weap_m4a1_wd_grip
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_weap_m4a1_wd_grip3)
	Grip_Macro(3,m16a4)
};

class rhs_weap_m4a1_pmag_grip : rhs_weap_m4a1_pmag
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_weap_m4a1_pmag_grip)
	//displayName = $STR_RHS_CFGWEAPONS_RIFLE_m4a1_foreg;
	Grip_Macro(1,m16a4)
};
/*
class rhs_weap_m4a1_d_pmag_grip : rhs_weap_m4a1_pmag_grip
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_weap_m4a1_d_pmag_grip)
	displayName = "M4A1 Gripod (Pmag/Desert)";

	DesertM4_Macro
};*/

class rhs_weap_m4a1_pmag_grip2 : rhs_weap_m4a1_pmag_grip
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_weap_m4a1_pmag_grip2)
	//displayName = $STR_RHS_CFGWEAPONS_RIFLE_m4a1_afg;
	Grip_Macro(2,m4a1_afg)
};
/*
class rhs_weap_m4a1_d_pmag_grip2 : rhs_weap_m4a1_pmag_grip2
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_weap_m4a1_d_pmag_grip2)
	displayName = $STR_RHS_CFGWEAPONS_RIFLE_m4a1_afg;

	DesertM4_Macro
};*/

class rhs_weap_m4a1_pmag_grip3 : rhs_weap_m4a1_pmag_grip
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_weap_m4a1_pmag_grip3)
	//displayName = $STR_RHS_CFGWEAPONS_RIFLE_m4a1_grip;
	Grip_Macro(3,m16a4)
};
/*
class rhs_weap_m4a1_d_pmag_grip3 : rhs_weap_m4a1_pmag_grip3
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_weap_m4a1_d_pmag_grip3)
	displayName = $STR_RHS_CFGWEAPONS_RIFLE_m4a1_grip;

	DesertM4_Macro
};*/

class rhs_weap_m4a1_mstock_grip : rhs_weap_m4a1_mstock
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_weap_m4a1_mstock_grip)
	//displayName = $STR_RHS_CFGWEAPONS_RIFLE_m4a1_foreg;
	Grip_Macro(1,m16a4)
};

class rhs_weap_m4a1_mstock_grip2 : rhs_weap_m4a1_mstock_grip
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_weap_m4a1_mstock_grip2)
	//displayName = $STR_RHS_CFGWEAPONS_RIFLE_m4a1_afg;
	Grip_Macro(2,m4a1_afg)
};

class rhs_weap_m4a1_mstock_grip3 : rhs_weap_m4a1_mstock_grip
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_weap_m4a1_mstock_grip3)
	//displayName = $STR_RHS_CFGWEAPONS_RIFLE_m4a1_grip;
	Grip_Macro(3,m16a4)
};

class rhs_weap_m4a1_d_mstock_grip : rhs_weap_m4a1_d_mstock
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_weap_m4a1_d_mstock_grip)
	//displayName =  $STR_RHS_CFGWEAPONS_RIFLE_M4A1_D_foreg;
	Grip_Macro(1,m16a4)
};
class rhs_weap_m4a1_d_mstock_grip2 : rhs_weap_m4a1_d_mstock_grip
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_weap_m4a1_d_mstock_grip2)
	//displayName =  $STR_RHS_CFGWEAPONS_RIFLE_M4A1_D_afg;
	Grip_Macro(2,m4a1_afg)
};
class rhs_weap_m4a1_d_mstock_grip3 : rhs_weap_m4a1_d_mstock_grip
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_weap_m4a1_d_mstock_grip3)
	//displayName =  $STR_RHS_CFGWEAPONS_RIFLE_M4A1_D_grip;
	Grip_Macro(3,m16a4)
};

class rhs_weap_m4a1_wd_mstock_grip : rhs_weap_m4a1_wd_mstock
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_weap_m4a1_wd_mstock_grip)
	Grip_Macro(1,m16a4)
};
class rhs_weap_m4a1_wd_mstock_grip2 : rhs_weap_m4a1_wd_mstock_grip
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_weap_m4a1_wd_mstock_grip2)
	Grip_Macro(2,m4a1_afg)
};
class rhs_weap_m4a1_wd_mstock_grip3 : rhs_weap_m4a1_wd_mstock_grip
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_weap_m4a1_wd_mstock_grip3)
	Grip_Macro(3,m16a4)
};

class rhs_weap_m4a1_carryhandle_grip : rhs_weap_m4a1_carryhandle
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_weap_m4a1_carryhandle_grip)
	//displayName = $STR_RHS_CFGWEAPONS_RIFLE_m4a1_foreg;
	Grip_Macro(1,m16a4)
};
class rhs_weap_m4a1_carryhandle_grip2 : rhs_weap_m4a1_carryhandle_grip
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_weap_m4a1_carryhandle_grip2)
	//displayName = $STR_RHS_CFGWEAPONS_RIFLE_m4a1_afg;

	Grip_Macro(2,m4a1_afg)
};

class rhs_weap_m4a1_carryhandle_grip3 : rhs_weap_m4a1_carryhandle_grip
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_weap_m4a1_carryhandle_grip3)
	//displayName = $STR_RHS_CFGWEAPONS_RIFLE_M4A1_CARRYHANDLE_grip;

	Grip_Macro(3,m16a4)
};

class rhs_weap_m4a1_carryhandle_pmag_grip : rhs_weap_m4a1_carryhandle_pmag
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_weap_m4a1_carryhandle_pmag_grip)
	//displayName = $STR_RHS_CFGWEAPONS_RIFLE_m4a1_foreg;
	Grip_Macro(1,m16a4)
};
class rhs_weap_m4a1_carryhandle_pmag_grip2 : rhs_weap_m4a1_carryhandle_pmag_grip
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_weap_m4a1_carryhandle_pmag_grip2)
	//displayName = $STR_RHS_CFGWEAPONS_RIFLE_m4a1_afg;
	Grip_Macro(2,m4a1_afg)
};

class rhs_weap_m4a1_carryhandle_pmag_grip3 : rhs_weap_m4a1_carryhandle_pmag_grip
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_weap_m4a1_carryhandle_pmag_grip3)
	//displayName = $STR_RHS_CFGWEAPONS_RIFLE_m4a1_grip;
	Grip_Macro(3,m16a4)
};

class rhs_weap_m4a1_carryhandle_mstock_grip : rhs_weap_m4a1_carryhandle_mstock
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_weap_m4a1_carryhandle_mstock_grip)
	//displayName = $STR_RHS_CFGWEAPONS_RIFLE_m4a1_foreg;
	Grip_Macro(1,m16a4)
};
class rhs_weap_m4a1_carryhandle_mstock_grip2 : rhs_weap_m4a1_carryhandle_mstock_grip
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_weap_m4a1_carryhandle_mstock_grip2)
	//displayName = $STR_RHS_CFGWEAPONS_RIFLE_m4a1_afg;
	Grip_Macro(2,m4a1_afg)
};

class rhs_weap_m4a1_carryhandle_mstock_grip3 : rhs_weap_m4a1_carryhandle_mstock_grip
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_weap_m4a1_carryhandle_mstock_grip3)
	//displayName = $STR_RHS_CFGWEAPONS_RIFLE_m4a1_grip;
	Grip_Macro(3,m16a4)
};


class rhs_weap_m4a1_m203 : rhs_weap_m4a1
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_weap_m4a1_m203)
	displayName = $STR_RHS_CFGWEAPONS_RIFLE_M4A1_M203;

	model = "\rhsusf\addons\rhsusf_weapons\M4\m4_ris_m203.p3d";

	handAnim[] = {"OFP2_ManSkeleton","\rhsusf\addons\rhsusf_c_weapons\anims\rhs_hand_m16a4_m203.rtm"};
	muzzles[] = {"this","M203_GL","SAFE"};

	class WeaponSlotsInfo: WeaponSlotsInfo
	{
		mass = 93.72;
		class UnderBarrelSlot {};
		class GripodSlot: rhs_western_m203_gripod_slot {};
		class PointerSlot: rhs_western_rifle_laser_slot {};
	};
	inertia = 0.6;
	dexterity = 1.4;

	rhs_grip1_change = "rhs_weap_m4a1_m203_grip";
	rhs_grip2_change = "rhs_weap_m4a1_m203_grip";
	rhs_grip3_change = "rhs_weap_m4a1_m203_grip";
	baseWeapon="rhs_weap_m4a1_m203";
};

class rhs_weap_m4a1_m203s : rhs_weap_m4a1_m203
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_weap_m4a1_m203s)
	displayName = $STR_RHS_CFGWEAPONS_RIFLE_M4A1_M203S;

	model = "\rhsusf\addons\rhsusf_weapons\M4\m4_ris_m203s.p3d";
	class WeaponSlotsInfo: WeaponSlotsInfo
	{
		mass = 93.72;
	};
	rhs_grip1_change = "rhs_weap_m4a1_m203s_grip";
	rhs_grip2_change = "rhs_weap_m4a1_m203s_grip";
	rhs_grip3_change = "rhs_weap_m4a1_m203s_grip";
	baseWeapon="rhs_weap_m4a1_m203s";
};

class rhs_weap_m4a1_m203s_wd : rhs_weap_m4a1_m203s
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_weap_m4a1_m203s_wd)
	displayName = $STR_RHS_CFGWEAPONS_RIFLE_M4A1_M203S_wd;
	hiddenSelectionsTextures[] =
	{
		"\rhsusf\addons\rhsusf_weapons\m4\data\m4a1_actual_wd_co.paa",
		"\rhsusf\addons\rhsusf_weapons\m4\data\magazine_co.paa",
		"\rhsusf\addons\rhsusf_weapons\m4\data\m4acc_wd_co.paa",
		"\rhsusf\addons\rhsusf_weapons\m4\data\kacrailcover_wd_co.paa",
		"\rhsusf\addons\rhsusf_weapons\acc\grips\grippod\data\acc_co.paa",
		"\rhsusf\addons\rhsusf_weapons\m4\data\magpulstock_wd_co.paa",
		"\rhsusf\addons\rhsusf_weapons\m4\data\m203s_wd_co.paa",
		"\rhsusf\addons\rhsusf_weapons\m4\data\kacleaf_wd_co.paa",
		"\rhsusf\addons\rhsusf_weapons\m320\data\m320_co.paa",
		"\rhsusf\addons\rhsusf_weapons\m4\data\m4a1_actual_wd_co.paa"
	};

	rhs_grip1_change = "rhs_weap_m4a1_m203s_wd_grip";
	rhs_grip2_change = "rhs_weap_m4a1_m203s_wd_grip";
	rhs_grip3_change = "rhs_weap_m4a1_m203s_wd_grip";
	baseWeapon="rhs_weap_m4a1_m203s_wd";
};

class rhs_weap_m4a1_m203s_d : rhs_weap_m4a1_m203s
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_weap_m4a1_m203s_d)
	displayName = $STR_RHS_CFGWEAPONS_RIFLE_M4A1_M203S_d;

	hiddenSelectionsTextures[] =
	{
		"\rhsusf\addons\rhsusf_weapons\m4\data\m4a1_actual_d_co.paa",
		"\rhsusf\addons\rhsusf_weapons\m4\data\magazine_co.paa",
		"\rhsusf\addons\rhsusf_weapons\m4\data\m4acc_d_co.paa",
		"\rhsusf\addons\rhsusf_weapons\m4\data\kacrailcover_d_co.paa",
		"\rhsusf\addons\rhsusf_weapons\acc\grips\grippod\data\acc_co.paa",
		"\rhsusf\addons\rhsusf_weapons\m4\data\magpulstock_d_co.paa",
		"\rhsusf\addons\rhsusf_weapons\m4\data\m203s_d_co.paa",
		"\rhsusf\addons\rhsusf_weapons\m4\data\kacleaf_d_co.paa",
		"\rhsusf\addons\rhsusf_weapons\m320\data\m320_co.paa",
		"\rhsusf\addons\rhsusf_weapons\m4\data\m4a1_actual_d_co.paa"
	};

	rhs_grip1_change = "rhs_weap_m4a1_m203s_d_grip";
	rhs_grip2_change = "rhs_weap_m4a1_m203s_d_grip";
	rhs_grip3_change = "rhs_weap_m4a1_m203s_d_grip";
	baseWeapon="rhs_weap_m4a1_m203s_d";
};

class rhs_weap_m4a1_m203s_sa : rhs_weap_m4a1_m203s
{
	scope = 0;
	AUTHOR_MACRO
	displayName = "M4A1 (M203S/Semi-Arid)";
	hiddenSelectionsTextures[] =
	{
		"\rhsusf\addons\rhsusf_weapons\m4\data\m4a1_sa_co.paa",
		"\rhsusf\addons\rhsusf_weapons\m4\data\magazine_co.paa",
		"\rhsusf\addons\rhsusf_weapons\m4\data\m4acc_sa_co.paa",
		"\rhsusf\addons\rhsusf_weapons\m4\data\kacrailcover_sa_co.paa",
		"\rhsusf\addons\rhsusf_weapons\acc\grips\grippod\data\acc_co.paa",
		"\rhsusf\addons\rhsusf_weapons\m4\data\magpulstock_co.paa",
		"\rhsusf\addons\rhsusf_weapons\m4\data\m203s_sa_co.paa",
		"\rhsusf\addons\rhsusf_weapons\m4\data\kacleaf_sa_co.paa",
		"\rhsusf\addons\rhsusf_weapons\m320\data\m320_co.paa",
		"\rhsusf\addons\rhsusf_weapons\m4\data\m4a1_sa_co.paa"
	};

	rhs_grip1_change = "rhs_weap_m4a1_m203s_sa_grip";
	rhs_grip2_change = "rhs_weap_m4a1_m203s_sa_grip";
	rhs_grip3_change = "rhs_weap_m4a1_m203s_sa_grip";
	baseWeapon="rhs_weap_m4a1_m203s_sa";
};

class rhs_weap_m4a1_carryhandle_m203 : rhs_weap_m4a1_m203
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_weap_m4a1_carryhandle_m203)
	displayName = $STR_RHS_CFGWEAPONS_RIFLE_M4A1_carryhandle_M203;

	model = "\rhsusf\addons\rhsusf_weapons\M4\m4_ris_carryhandle_m203.p3d";

	//Non-PIP variants have no ambidexterous selector, but m4a1_actual_co.paa is missing selector indicator... Disabled for now.
	/* hiddenSelectionsTextures[] =
	{
		"\rhsusf\addons\rhsusf_weapons\m4\data\m4a1_actual_co.paa",
		"\rhsusf\addons\rhsusf_weapons\m4\data\magazine_co.paa",
		"\rhsusf\addons\rhsusf_weapons\m4\data\m4acc_co.paa",
		"\rhsusf\addons\rhsusf_weapons\m4\data\kacrailcover_co.paa",
		"\rhsusf\addons\rhsusf_weapons\acc\grips\grippod\data\acc_co.paa",
		"\rhsusf\addons\rhsusf_weapons\m4\data\magpulstock_co.paa",
		"\rhsusf\addons\rhsusf_weapons\m4\data\m203_co.paa",
		"\rhsusf\addons\rhsusf_weapons\m4\data\kacleaf_co.paa",
		"\rhsusf\addons\rhsusf_weapons\m320\data\m320_co.paa",
		"a3\data_f\clear_empty.paa"
	}; */

	CarryhandleSight

	rhs_grip1_change = "rhs_weap_m4a1_carryhandle_m203_grip";
	rhs_grip2_change = "rhs_weap_m4a1_carryhandle_m203_grip";
	rhs_grip3_change = "rhs_weap_m4a1_carryhandle_m203_grip";
	baseWeapon="rhs_weap_m4a1_carryhandle_m203";
};

class rhs_weap_m4a1_carryhandle_m203S : rhs_weap_m4a1_carryhandle_m203
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_weap_m4a1_carryhandle_m203S)
	displayName = $STR_RHS_CFGWEAPONS_RIFLE_M4A1_carryhandle_M203S;

	model = "\rhsusf\addons\rhsusf_weapons\M4\m4_ris_carryhandle_m203s.p3d";

	class WeaponSlotsInfo: WeaponSlotsInfo
	{
		mass = 93.40;
	};

	rhs_grip1_change = "rhs_weap_m4a1_carryhandle_m203S_grip";
	rhs_grip2_change = "rhs_weap_m4a1_carryhandle_m203S_grip";
	rhs_grip3_change = "rhs_weap_m4a1_carryhandle_m203S_grip";
	baseWeapon="rhs_weap_m4a1_carryhandle_m203S";
};

class rhs_weap_m4a1_m320 : rhs_weap_m4a1
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_weap_m4a1_m320)
	displayName = $STR_RHS_CFGWEAPONS_RIFLE_M4A1_M320;

	model = "\rhsusf\addons\rhsusf_weapons\M4\m4_ris_m320.p3d";
	handAnim[] = {"OFP2_ManSkeleton","\rhsusf\addons\rhsusf_c_weapons\anims\rhs_hand_m4a1_m320.rtm"};

	muzzles[] = {"this","M320_GL","SAFE"};
	class WeaponSlotsInfo: WeaponSlotsInfo
	{
		mass = 96.8;
		class UnderBarrelSlot {};
		class GripodSlot {};
	};
	inertia = 0.6;
	dexterity = 1.4;
	baseWeapon="rhs_weap_m4a1_m320";
};

////////////M4A1 M203 GRIPPOD VARIANTS////////

class rhs_weap_m4a1_m203_grip : rhs_weap_m4a1_m203
{
	AUTHOR_MACRO
	Grip_Macro(_m203_blk,m203gripod)
};
class rhs_weap_m4a1_m203S_grip : rhs_weap_m4a1_m203S
{
	AUTHOR_MACRO
	Grip_Macro(_m203_blk,m203gripod)
};
class rhs_weap_m4a1_m203S_wd_grip : rhs_weap_m4a1_m203S_wd
{
	AUTHOR_MACRO
	Grip_Macro(_m203_blk,m203gripod)
};
class rhs_weap_m4a1_m203S_d_grip : rhs_weap_m4a1_m203S_d
{
	AUTHOR_MACRO
	Grip_Macro(_m203_blk,m203gripod)
};
class rhs_weap_m4a1_m203S_sa_grip : rhs_weap_m4a1_m203S_sa
{
	AUTHOR_MACRO
	Grip_Macro(_m203_blk,m203gripod)
};

class rhs_weap_m4a1_carryhandle_m203_grip : rhs_weap_m4a1_carryhandle_m203
{
	AUTHOR_MACRO
	Grip_Macro(_m203_blk,m203gripod)
};
class rhs_weap_m4a1_carryhandle_m203S_grip : rhs_weap_m4a1_carryhandle_m203S
{
	AUTHOR_MACRO
	Grip_Macro(_m203_blk,m203gripod)
};

//- M4A1 SOPMOD 2 (Block II & MK18)

class rhs_weap_m4a1_blockII : rhs_weap_m4a1
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_weap_m4a1_blockII)
	displayName = $STR_RHS_CFGWEAPONS_RIFLE_M4A1BLII;
	model = "\rhsusf\addons\rhsusf_weapons3\M4BII\m4a1_blockII.p3d";

	handAnim[] = {"OFP2_ManSkeleton","\rhsusf\addons\rhsusf_c_weapons\anims\rhs_hand_m16a4_stock.rtm"};

	discreteDistance[]={200,300,400,500,600};
	discreteDistanceCameraPoint[]=
	{
		"eye",
		"eye_300",
		"eye_400",
		"eye_500",
		"eye_600"
	};
	discreteDistanceInitIndex=0;

	modes[] =
	{
		"Single",
		"Single_AI",
		"FullAuto",
		"single_medium_optics1",
		"single_far_optics2"
	};
	class Single : Single
	{
		dispersion = DISPERSION_MOA(1.8);
	};
	class FullAuto : FullAuto
	{
		dispersion = DISPERSION_MOA(1.8);
	};

	class WeaponSlotsInfo: WeaponSlotsInfo
	{
		mass = 67.78;
		class CowsSlot: rhs_western_rifle_scopes_slot_long {};
	};

	hiddenSelections[] = {"camo1","camo2","camo3","camo4","camo5","camo6","camo8"};
	hiddenSelectionsTextures[] =
	{
		"rhsusf\addons\rhsusf_weapons\m4\data\m4a1_actual_co.paa",
		"\rhsusf\addons\rhsusf_weapons3\M4BII\Data\rhs_block2rail_t_co.paa",
		"rhsusf\addons\rhsusf_weapons\acc\grips\grippod\data\acc_co.paa",
		"rhsusf\addons\rhsusf_weapons\m4\data\m4acc_co.paa",
		"rhsusf\addons\rhsusf_weapons\m4\data\magpulstock_co.paa",
		"rhsusf\addons\rhsusf_weapons\m4\data\m203_co.paa",
		"\rhsusf\addons\rhsusf_weapons\m4\data\kacleaf_co.paa"
	};
	rhs_grip1_change = "rhs_weap_m4a1_blockII_grip";
	rhs_grip2_change = "rhs_weap_m4a1_blockII_grip2";
	rhs_grip3_change = "rhs_weap_m4a1_blockII_grip";

	baseWeapon = "rhs_weap_m4a1_blockII";
};

class rhs_weap_m4a1_blockII_bk : rhs_weap_m4a1_blockII
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_weap_m4a1_blockII_bk)

	displayName = $STR_RHS_CFGWEAPONS_RIFLE_M4A1BLII_bk;


	// Hidden sels
	hiddenSelectionsTextures[] =
	{
		"\rhsusf\addons\rhsusf_weapons\m4\data\m4a1_actual_co.paa",
		"\rhsusf\addons\rhsusf_weapons3\M4BII\Data\rhs_block2rail_b_co.paa",
		"\rhsusf\addons\rhsusf_weapons\acc\grips\grippod\data\acc_co.paa",
		"\rhsusf\addons\rhsusf_weapons\m4\data\m4acc_co.paa",
		"\rhsusf\addons\rhsusf_weapons\m4\data\magpulstock_co.paa"
	};

	rhs_grip1_change = "rhs_weap_m4a1_blockII_grip_bk";
	rhs_grip2_change = "rhs_weap_m4a1_blockII_grip2_bk";
	rhs_grip3_change = "rhs_weap_m4a1_blockII_grip_bk";

	baseWeapon = "rhs_weap_m4a1_blockII_bk";
};

class rhs_weap_m4a1_blockII_wd : rhs_weap_m4a1_blockII
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_weap_m4a1_blockII_wd)

	displayName = $STR_RHS_CFGWEAPONS_RIFLE_M4A1BLII_wd;


	// Hidden sels
	hiddenSelectionsTextures[] =
	{
		"\rhsusf\addons\rhsusf_weapons\m4\data\m4a1_actual_wd_co.paa",
		"\rhsusf\addons\rhsusf_weapons3\M4BII\Data\rhs_block2rail_wd_co.paa",
		"\rhsusf\addons\rhsusf_weapons\acc\grips\grippod\data\acc_co.paa",
		"\rhsusf\addons\rhsusf_weapons\m4\data\m4acc_wd_co.paa",
		"\rhsusf\addons\rhsusf_weapons\m4\data\magpulstock_wd_co.paa"
	};

	rhs_grip1_change = "rhs_weap_m4a1_blockII_grip_wd";
	rhs_grip2_change = "rhs_weap_m4a1_blockII_grip2_wd";
	rhs_grip3_change = "rhs_weap_m4a1_blockII_grip_wd";

	baseWeapon = "rhs_weap_m4a1_blockII_wd";
};

class rhs_weap_m4a1_blockII_d : rhs_weap_m4a1_blockII
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_weap_m4a1_blockII_d)

	displayName = $STR_RHS_CFGWEAPONS_RIFLE_M4A1BLII_d;


	// Hidden sels
	hiddenSelectionsTextures[] =
	{
		"\rhsusf\addons\rhsusf_weapons\m4\data\m4a1_actual_d_co.paa",
		"\rhsusf\addons\rhsusf_weapons3\M4BII\Data\rhs_block2rail_d_co.paa",
		"\rhsusf\addons\rhsusf_weapons\acc\grips\grippod\data\acc_co.paa",
		"\rhsusf\addons\rhsusf_weapons\m4\data\m4acc_d_co.paa",
		"\rhsusf\addons\rhsusf_weapons\m4\data\magpulstock_d_co.paa"
	};

	rhs_grip1_change = "rhs_weap_m4a1_blockII_grip_d";
	rhs_grip2_change = "rhs_weap_m4a1_blockII_grip2_d";
	rhs_grip3_change = "rhs_weap_m4a1_blockII_grip_d";

	baseWeapon = "rhs_weap_m4a1_blockII_d";
};


// M4A1 Block II KAC variants

class rhs_weap_m4a1_blockII_KAC : rhs_weap_m4a1_blockII
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_weap_m4a1_blockII_KAC)
	displayName = $STR_RHS_CFGWEAPONS_RIFLE_M4A1BLII_KAC;
	model = "\rhsusf\addons\rhsusf_weapons3\M4BII\m4a1_blockII_KACSTOCK.p3d";


	hiddenSelectionsTextures[] =
	{
		"rhsusf\addons\rhsusf_weapons\m4\data\m4a1_actual_co.paa",
		"\rhsusf\addons\rhsusf_weapons3\M4BII\Data\rhs_block2rail_t_co.paa",
		"rhsusf\addons\rhsusf_weapons\acc\grips\grippod\data\acc_co.paa",
		"rhsusf\addons\rhsusf_weapons\m4\data\m4acc_co.paa",
		"rhsusf\addons\rhsusf_weapons2\sr25\data\buttstock2_co.paa"
	};

	rhs_grip1_change = "rhs_weap_m4a1_blockII_grip_KAC";
	rhs_grip2_change = "rhs_weap_m4a1_blockII_grip2_KAC";
	rhs_grip3_change = "rhs_weap_m4a1_blockII_grip_KAC";

	baseWeapon = "rhs_weap_m4a1_blockII_KAC";
};

class rhs_weap_m4a1_blockII_KAC_bk : rhs_weap_m4a1_blockII_KAC
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_weap_m4a1_blockII_KAC_bk)

	displayName = $STR_RHS_CFGWEAPONS_RIFLE_M4A1BLII_KAC_bk;


	// Hidden sels
	hiddenSelectionsTextures[] =
	{
		"\rhsusf\addons\rhsusf_weapons\m4\data\m4a1_actual_co.paa",
		"\rhsusf\addons\rhsusf_weapons3\M4BII\Data\rhs_block2rail_b_co.paa",
		"\rhsusf\addons\rhsusf_weapons\acc\grips\grippod\data\acc_co.paa",
		"\rhsusf\addons\rhsusf_weapons\m4\data\m4acc_co.paa",
		"\rhsusf\addons\rhsusf_weapons2\sr25\data\buttstock2_co.paa"
	};

	rhs_grip1_change = "rhs_weap_m4a1_blockII_grip_KAC_bk";
	rhs_grip2_change = "rhs_weap_m4a1_blockII_grip2_KAC_bk";
	rhs_grip3_change = "rhs_weap_m4a1_blockII_grip_KAC_bk";

	baseWeapon = "rhs_weap_m4a1_blockII_KAC_bk";
};

class rhs_weap_m4a1_blockII_KAC_wd : rhs_weap_m4a1_blockII_KAC
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_weap_m4a1_blockII_KAC_wd)

	displayName = $STR_RHS_CFGWEAPONS_RIFLE_M4A1BLII_KAC_wd;


	// Hidden sels
	hiddenSelectionsTextures[] =
	{
		"\rhsusf\addons\rhsusf_weapons\m4\data\m4a1_actual_wd_co.paa",
		"\rhsusf\addons\rhsusf_weapons3\M4BII\Data\rhs_block2rail_wd_co.paa",
		"\rhsusf\addons\rhsusf_weapons\acc\grips\grippod\data\acc_co.paa",
		"\rhsusf\addons\rhsusf_weapons\m4\data\m4acc_wd_co.paa",
		"\rhsusf\addons\rhsusf_weapons2\sr25\data\buttstock2_wd_co.paa"
	};

	rhs_grip1_change = "rhs_weap_m4a1_blockII_grip_KAC_wd";
	rhs_grip2_change = "rhs_weap_m4a1_blockII_grip2_KAC_wd";
	rhs_grip3_change = "rhs_weap_m4a1_blockII_grip_KAC_wd";

	baseWeapon = "rhs_weap_m4a1_blockII_KAC_wd";
};

class rhs_weap_m4a1_blockII_KAC_d : rhs_weap_m4a1_blockII_KAC
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_weap_m4a1_blockII_KAC_d)

	displayName = $STR_RHS_CFGWEAPONS_RIFLE_M4A1BLII_KAC_d;


	// Hidden sels
	hiddenSelectionsTextures[] =
	{
		"\rhsusf\addons\rhsusf_weapons\m4\data\m4a1_actual_d_co.paa",
		"\rhsusf\addons\rhsusf_weapons3\M4BII\Data\rhs_block2rail_d_co.paa",
		"\rhsusf\addons\rhsusf_weapons\acc\grips\grippod\data\acc_co.paa",
		"\rhsusf\addons\rhsusf_weapons\m4\data\m4acc_d_co.paa",
		"\rhsusf\addons\rhsusf_weapons2\sr25\data\buttstock2_d_co.paa"
	};

	rhs_grip1_change = "rhs_weap_m4a1_blockII_grip_KAC_d";
	rhs_grip2_change = "rhs_weap_m4a1_blockII_grip2_KAC_d";
	rhs_grip3_change = "rhs_weap_m4a1_blockII_grip_KAC_d";

	baseWeapon = "rhs_weap_m4a1_blockII_KAC_d";
};

// M4A1 BK2 Grip variants

class rhs_weap_m4a1_blockII_grip : rhs_weap_m4a1_blockII
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_weap_m4a1_blockII_grip)
	inertia = 0.4;
	dexterity = 1.6;
	Grip_Macro(1,m16a4)

	class WeaponSlotsInfo: WeaponSlotsInfo
	{
		mass = 67.78;
	};
};
class rhs_weap_m4a1_blockII_grip2 : rhs_weap_m4a1_blockII_grip
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_weap_m4a1_blockII_grip2)
	displayName = $STR_RHS_CFGWEAPONS_RIFLE_M4A1BLII_afg;
	class WeaponSlotsInfo: WeaponSlotsInfo
	{
		class GripodSlot: rhs_western_rifle_afg_slot{};
	};
	Grip_Macro(2,m4b2_afg)
};

class rhs_weap_m4a1_blockII_grip_bk : rhs_weap_m4a1_blockII_bk
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_weap_m4a1_blockII_grip_bk)
	Grip_Macro(1,m16a4)

	class WeaponSlotsInfo: WeaponSlotsInfo
	{
		mass = 67.78;
	};
};
class rhs_weap_m4a1_blockII_grip2_bk : rhs_weap_m4a1_blockII_grip_bk
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_weap_m4a1_blockII_grip2_bk)
	displayName = $STR_RHS_CFGWEAPONS_RIFLE_M4A1BLII_afg_bk;
	class WeaponSlotsInfo: WeaponSlotsInfo
	{
		class GripodSlot: rhs_western_rifle_afg_slot{};
	};
	Grip_Macro(2,m4b2_afg)
};

class rhs_weap_m4a1_blockII_grip_wd : rhs_weap_m4a1_blockII_wd
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_weap_m4a1_blockII_grip_wd)
	Grip_Macro(1,m16a4)
	class WeaponSlotsInfo: WeaponSlotsInfo
	{
		mass = 67.78;
	};
};
class rhs_weap_m4a1_blockII_grip2_wd : rhs_weap_m4a1_blockII_grip_wd
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_weap_m4a1_blockII_grip2_wd)
	displayName = $STR_RHS_CFGWEAPONS_RIFLE_M4A1BLII_afg;
	class WeaponSlotsInfo: WeaponSlotsInfo
	{
		class GripodSlot: rhs_western_rifle_afg_slot{};
	};
	Grip_Macro(2,m4b2_afg)
};

class rhs_weap_m4a1_blockII_grip_d : rhs_weap_m4a1_blockII_d
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_weap_m4a1_blockII_grip_d)
	Grip_Macro(1,m16a4)
	class WeaponSlotsInfo: WeaponSlotsInfo
	{
		mass = 67.78;
	};
};
class rhs_weap_m4a1_blockII_grip2_d : rhs_weap_m4a1_blockII_grip_d
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_weap_m4a1_blockII_grip2_d)
	displayName = $STR_RHS_CFGWEAPONS_RIFLE_M4A1BLII_afg;
	class WeaponSlotsInfo: WeaponSlotsInfo
	{
		class GripodSlot: rhs_western_rifle_afg_slot{};
	};
	Grip_Macro(2,m4b2_afg)
};

// M4A1 BK2 SOPMOD stock variants

class rhs_weap_m4a1_blockII_grip_KAC : rhs_weap_m4a1_blockII_KAC
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_weap_m4a1_blockII_grip_KAC)
	Grip_Macro(1,m16a4)
	class WeaponSlotsInfo: WeaponSlotsInfo
	{
		mass = 67.78;
	};
};
class rhs_weap_m4a1_blockII_grip2_KAC : rhs_weap_m4a1_blockII_grip_KAC
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_weap_m4a1_blockII_grip2_KAC)
	displayName = $STR_RHS_CFGWEAPONS_RIFLE_M4A1BLII_afg_kac;
	class WeaponSlotsInfo: WeaponSlotsInfo
	{
		class GripodSlot: rhs_western_rifle_afg_slot{};
	};
	Grip_Macro(2,m4b2_afg)
};

class rhs_weap_m4a1_blockII_grip_KAC_bk : rhs_weap_m4a1_blockII_KAC_bk
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_weap_m4a1_blockII_grip_KAC_bk)
	Grip_Macro(1,m16a4)
	class WeaponSlotsInfo: WeaponSlotsInfo
	{
		mass = 67.78;
	};
};
class rhs_weap_m4a1_blockII_grip2_KAC_bk : rhs_weap_m4a1_blockII_grip_KAC_bk
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_weap_m4a1_blockII_grip2_KAC_bk)
	displayName = $STR_RHS_CFGWEAPONS_RIFLE_M4A1BLII_afg_kac_bk;
	class WeaponSlotsInfo: WeaponSlotsInfo
	{
		class GripodSlot: rhs_western_rifle_afg_slot{};
	};
	Grip_Macro(2,m4b2_afg)
};

class rhs_weap_m4a1_blockII_grip_KAC_wd : rhs_weap_m4a1_blockII_KAC_wd
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_weap_m4a1_blockII_grip_KAC_wd)
	Grip_Macro(1,m16a4)
	class WeaponSlotsInfo: WeaponSlotsInfo
	{
		mass = 67.78;
	};
};
class rhs_weap_m4a1_blockII_grip2_KAC_wd : rhs_weap_m4a1_blockII_grip_KAC_wd
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_weap_m4a1_blockII_grip2_KAC_wd)
	displayName = $STR_RHS_CFGWEAPONS_RIFLE_M4A1BLII_afg_kac;
	class WeaponSlotsInfo: WeaponSlotsInfo
	{
		class GripodSlot: rhs_western_rifle_afg_slot{};
	};
	Grip_Macro(2,m4b2_afg)
};

class rhs_weap_m4a1_blockII_grip_KAC_d : rhs_weap_m4a1_blockII_KAC_d
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_weap_m4a1_blockII_grip_KAC_d)
	Grip_Macro(1,m16a4)

	class WeaponSlotsInfo: WeaponSlotsInfo
	{
		mass = 67.78;
	};
};
class rhs_weap_m4a1_blockII_grip2_KAC_d : rhs_weap_m4a1_blockII_grip_KAC_d
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_weap_m4a1_blockII_grip2_KAC_d)
	displayName = $STR_RHS_CFGWEAPONS_RIFLE_M4A1BLII_afg_kac;
	class WeaponSlotsInfo: WeaponSlotsInfo
	{
		class GripodSlot: rhs_western_rifle_afg_slot{};
	};
	Grip_Macro(2,m4b2_afg)
};

class rhs_weap_m4a1_blockII_M203 : rhs_weap_m4a1_blockII
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_weap_m4a1_blockII_M203)
	displayName = $STR_RHS_CFGWEAPONS_RIFLE_M4A1BLII_M203;


	model = "\rhsusf\addons\rhsusf_weapons3\M4BII\m4a1_blockII_M203.p3d";
	handAnim[] = {"OFP2_ManSkeleton","\rhsusf\addons\rhsusf_c_weapons\anims\rhs_hand_m16a4_m203.rtm"};
	muzzles[] = {"this","M203_GL","SAFE"};

	class WeaponSlotsInfo: WeaponSlotsInfo
	{
		mass = 97.7;
		class UnderBarrelSlot {};
		class GripodSlot: rhs_western_m203_gripod_slot {};
		class PointerSlot: rhs_western_rifle_laser_slot {};
	};

	inertia = 0.6;
	dexterity = 1.4;

	rhs_grip1_change = "rhs_weap_m4a1_blockII_m203_grip";
	rhs_grip2_change = "rhs_weap_m4a1_blockII_m203_grip";
	rhs_grip3_change = "rhs_weap_m4a1_blockII_m203_grip";
	baseWeapon="rhs_weap_m4a1_blockII_M203";
};

class rhs_weap_m4a1_blockII_M203_bk : rhs_weap_m4a1_blockII_M203
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_weap_m4a1_blockII_M203_bk)

	displayName = $STR_RHS_CFGWEAPONS_RIFLE_M4A1BLII_M203_bk;


	// Hidden sels
	hiddenSelectionsTextures[] =
	{
		"rhsusf\addons\rhsusf_weapons\m4\data\m4a1_actual_co.paa",
		"\rhsusf\addons\rhsusf_weapons3\M4BII\Data\rhs_block2rail_b_co.paa",
		"rhsusf\addons\rhsusf_weapons\acc\grips\grippod\data\acc_co.paa",
		"rhsusf\addons\rhsusf_weapons\m4\data\m4acc_co.paa",
		"rhsusf\addons\rhsusf_weapons\m4\data\magpulstock_co.paa",
		"rhsusf\addons\rhsusf_weapons\m4\data\m203_co.paa",
		"\rhsusf\addons\rhsusf_weapons\m4\data\kacleaf_co.paa"
	};

	rhs_grip1_change = "rhs_weap_m4a1_blockII_m203_bk_grip";
	rhs_grip2_change = "rhs_weap_m4a1_blockII_m203_bk_grip";
	rhs_grip3_change = "rhs_weap_m4a1_blockII_m203_bk_grip";
	baseWeapon="rhs_weap_m4a1_blockII_M203_bk";
};

class rhs_weap_m4a1_blockII_M203_d : rhs_weap_m4a1_blockII_M203
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_weap_m4a1_blockII_M203_d)

	displayName = $STR_RHS_CFGWEAPONS_RIFLE_M4A1BLII_M203_d;


	// Hidden sels
	hiddenSelectionsTextures[] =
	{
		"\rhsusf\addons\rhsusf_weapons\m4\data\m4a1_actual_d_co.paa",
		"\rhsusf\addons\rhsusf_weapons3\M4BII\Data\rhs_block2rail_d_co.paa",
		"\rhsusf\addons\rhsusf_weapons\acc\grips\grippod\data\acc_co.paa",
		"\rhsusf\addons\rhsusf_weapons\m4\data\m4acc_d_co.paa",
		"\rhsusf\addons\rhsusf_weapons\m4\data\magpulstock_d_co.paa",
		"rhsusf\addons\rhsusf_weapons\m4\data\m203s_d_co.paa",
		"\rhsusf\addons\rhsusf_weapons\m4\data\kacleaf_d_co.paa"
	};

	rhs_grip1_change = "rhs_weap_m4a1_blockII_m203_d_grip";
	rhs_grip2_change = "rhs_weap_m4a1_blockII_m203_d_grip";
	rhs_grip3_change = "rhs_weap_m4a1_blockII_m203_d_grip";
	baseWeapon="rhs_weap_m4a1_blockII_M203_d";
};

class rhs_weap_m4a1_blockII_M203_wd : rhs_weap_m4a1_blockII_M203
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_weap_m4a1_blockII_M203_wd)

	displayName = $STR_RHS_CFGWEAPONS_RIFLE_M4A1BLII_M203_wd;


	// Hidden sels
	hiddenSelectionsTextures[] =
	{
		"\rhsusf\addons\rhsusf_weapons\m4\data\m4a1_actual_wd_co.paa",
		"\rhsusf\addons\rhsusf_weapons3\M4BII\Data\rhs_block2rail_wd_co.paa",
		"\rhsusf\addons\rhsusf_weapons\acc\grips\grippod\data\acc_co.paa",
		"\rhsusf\addons\rhsusf_weapons\m4\data\m4acc_wd_co.paa",
		"\rhsusf\addons\rhsusf_weapons\m4\data\magpulstock_wd_co.paa",
		"rhsusf\addons\rhsusf_weapons\m4\data\m203s_wd_co.paa",
		"\rhsusf\addons\rhsusf_weapons\m4\data\kacleaf_wd_co.paa"
	};

	rhs_grip1_change = "rhs_weap_m4a1_blockII_m203_wd_grip";
	rhs_grip2_change = "rhs_weap_m4a1_blockII_m203_wd_grip";
	rhs_grip3_change = "rhs_weap_m4a1_blockII_m203_wd_grip";
	baseWeapon="rhs_weap_m4a1_blockII_M203_wd";
};

////////////M4A1 BKII M203 GRIPPOD VARIANTS////////

class rhs_weap_m4a1_blockII_M203_grip : rhs_weap_m4a1_blockII_M203
{
	AUTHOR_MACRO
	Grip_Macro(_m203_blk,m203gripod)
};
class rhs_weap_m4a1_blockII_M203_bk_grip : rhs_weap_m4a1_blockII_M203_bk
{
	AUTHOR_MACRO
	Grip_Macro(_m203_blk,m203gripod)
};
class rhs_weap_m4a1_blockII_M203_d_grip : rhs_weap_m4a1_blockII_M203_d
{
	AUTHOR_MACRO
	Grip_Macro(_m203_blk,m203gripod)
};
class rhs_weap_m4a1_blockII_M203_wd_grip : rhs_weap_m4a1_blockII_M203_wd
{
	AUTHOR_MACRO
	Grip_Macro(_m203_blk,m203gripod)
};

//- Mk18 variants

class rhs_weap_mk18 : rhs_weap_m4a1_blockII
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_weap_mk18)
	displayName = $STR_RHS_CFGWEAPONS_RIFLE_MK18;
	model = "\rhsusf\addons\rhsusf_weapons3\M4BII\MK18.p3d";


	handAnim[] = {"OFP2_ManSkeleton","\rhsusf\addons\rhsusf_c_weapons\anims\rhs_hand_m16a4_stock.rtm"};

	inertia = 0.3;
	dexterity = 1.6;

	recoil = "rhs_recoil_mk18";

	class WeaponSlotsInfo: WeaponSlotsInfo
	{
		mass = 54.56;
	};
	initSpeed = -0.8979; //10.3 inch barrel
	class Single : Single
	{
		dispersion = DISPERSION_MOA(2);
	};
	class FullAuto : FullAuto
	{
		dispersion = DISPERSION_MOA(2);
	};

	//disabled camo2 selection till proper mesh is available
	hiddenSelections[] = {"camo1","camo2","camo3","camo4","camo5","camo6"};
	hiddenSelectionsTextures[] =
	{
		"rhsusf\addons\rhsusf_weapons\m4\data\m4a1_actual_co.paa",
		"\rhsusf\addons\rhsusf_weapons3\M4BII\Data\rhs_mk18rail_t_co.paa",
		"rhsusf\addons\rhsusf_weapons\acc\grips\grippod\data\acc_co.paa",
		"rhsusf\addons\rhsusf_weapons\m4\data\m4acc_co.paa",
		"rhsusf\addons\rhsusf_weapons\m4\data\magpulstock_co.paa",
		"\rhsusf\addons\rhsusf_weapons\m320\data\m320_co.paa"
	};

	rhs_grip1_change = "rhs_weap_mk18_grip";
	rhs_grip2_change = "rhs_weap_mk18_grip2";
	rhs_grip3_change = "rhs_weap_mk18_grip";

	baseWeapon="rhs_weap_mk18";
};

class rhs_weap_mk18_bk : rhs_weap_mk18
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_weap_mk18_bk)

	displayName = $STR_RHS_CFGWEAPONS_RIFLE_MK18_bk;


	// Hidden sels
	hiddenSelectionsTextures[] =
	{
		"\rhsusf\addons\rhsusf_weapons\m4\data\m4a1_actual_co.paa",
		"\rhsusf\addons\rhsusf_weapons3\M4BII\Data\rhs_mk18rail_b_co.paa",
		"\rhsusf\addons\rhsusf_weapons\acc\grips\grippod\data\acc_co.paa",
		"\rhsusf\addons\rhsusf_weapons\m4\data\m4acc_co.paa",
		"\rhsusf\addons\rhsusf_weapons\m4\data\magpulstock_co.paa"
	};

	rhs_grip1_change = "rhs_weap_mk18_grip_bk";
	rhs_grip2_change = "rhs_weap_mk18_grip2_bk";
	rhs_grip3_change = "rhs_weap_mk18_grip_bk";

	baseWeapon = "rhs_weap_mk18_bk";
};

class rhs_weap_mk18_wd : rhs_weap_mk18
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_weap_mk18_wd)

	displayName = $STR_RHS_CFGWEAPONS_RIFLE_MK18_wd;


	// Hidden sels
	hiddenSelectionsTextures[] =
	{
		"\rhsusf\addons\rhsusf_weapons\m4\data\m4a1_actual_wd_co.paa",
		"\rhsusf\addons\rhsusf_weapons3\M4BII\Data\rhs_mk18rail_wd_co.paa",
		"\rhsusf\addons\rhsusf_weapons\acc\grips\grippod\data\acc_co.paa",
		"\rhsusf\addons\rhsusf_weapons\m4\data\m4acc_wd_co.paa",
		"\rhsusf\addons\rhsusf_weapons\m4\data\magpulstock_wd_co.paa"
	};

	rhs_grip1_change = "rhs_weap_mk18_grip_wd";
	rhs_grip2_change = "rhs_weap_mk18_grip2_wd";
	rhs_grip3_change = "rhs_weap_mk18_grip_wd";

	baseWeapon = "rhs_weap_mk18_wd";
};

class rhs_weap_mk18_d : rhs_weap_mk18
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_weap_mk18_d)

	displayName = $STR_RHS_CFGWEAPONS_RIFLE_MK18_d;


	// Hidden sels
	hiddenSelectionsTextures[] =
	{
		"\rhsusf\addons\rhsusf_weapons\m4\data\m4a1_actual_d_co.paa",
		"\rhsusf\addons\rhsusf_weapons3\M4BII\Data\rhs_mk18rail_d_co.paa",
		"\rhsusf\addons\rhsusf_weapons\acc\grips\grippod\data\acc_co.paa",
		"\rhsusf\addons\rhsusf_weapons\m4\data\m4acc_d_co.paa",
		"\rhsusf\addons\rhsusf_weapons\m4\data\magpulstock_d_co.paa"
	};

	rhs_grip1_change = "rhs_weap_mk18_grip_d";
	rhs_grip2_change = "rhs_weap_mk18_grip2_d";
	rhs_grip3_change = "rhs_weap_mk18_grip_d";

	baseWeapon = "rhs_weap_mk18_d";
};

//Mk18 KAC variants

class rhs_weap_mk18_KAC : rhs_weap_mk18
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_weap_mk18_KAC)
	displayName = $STR_RHS_CFGWEAPONS_RIFLE_MK18_KAC;
	model = "\rhsusf\addons\rhsusf_weapons3\M4BII\MK18_KACSTOCK.p3d";


	hiddenSelectionsTextures[] =
	{
		"rhsusf\addons\rhsusf_weapons\m4\data\m4a1_actual_co.paa",
		"\rhsusf\addons\rhsusf_weapons3\M4BII\Data\rhs_mk18rail_t_co.paa",
		"rhsusf\addons\rhsusf_weapons\acc\grips\grippod\data\acc_co.paa",
		"rhsusf\addons\rhsusf_weapons\m4\data\m4acc_co.paa",
		"rhsusf\addons\rhsusf_weapons2\sr25\data\buttstock2_co.paa"
	};

	rhs_grip1_change = "rhs_weap_mk18_grip_KAC";
	rhs_grip2_change = "rhs_weap_mk18_grip2_KAC";
	rhs_grip3_change = "rhs_weap_mk18_grip_KAC";

	baseWeapon="rhs_weap_mk18_KAC";
};

class rhs_weap_mk18_KAC_bk : rhs_weap_mk18_KAC
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_weap_mk18_KAC_bk)

	displayName = $STR_RHS_CFGWEAPONS_RIFLE_MK18_KAC_bk;


	// Hidden sels
	hiddenSelectionsTextures[] =
	{
		"\rhsusf\addons\rhsusf_weapons\m4\data\m4a1_actual_co.paa",
		"\rhsusf\addons\rhsusf_weapons3\M4BII\Data\rhs_mk18rail_b_co.paa",
		"\rhsusf\addons\rhsusf_weapons\acc\grips\grippod\data\acc_co.paa",
		"\rhsusf\addons\rhsusf_weapons\m4\data\m4acc_co.paa",
		"\rhsusf\addons\rhsusf_weapons2\sr25\data\buttstock2_co.paa"
	};

	rhs_grip1_change = "rhs_weap_mk18_grip_KAC_bk";
	rhs_grip2_change = "rhs_weap_mk18_grip2_KAC_bk";
	rhs_grip3_change = "rhs_weap_mk18_grip_KAC_bk";

	baseWeapon = "rhs_weap_mk18_KAC_bk";
};

class rhs_weap_mk18_KAC_wd : rhs_weap_mk18_KAC
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_weap_mk18_KAC_wd)

	displayName = $STR_RHS_CFGWEAPONS_RIFLE_MK18_KAC_wd;


	// Hidden sels
	hiddenSelectionsTextures[] =
	{
		"\rhsusf\addons\rhsusf_weapons\m4\data\m4a1_actual_wd_co.paa",
		"\rhsusf\addons\rhsusf_weapons3\M4BII\Data\rhs_mk18rail_wd_co.paa",
		"\rhsusf\addons\rhsusf_weapons\acc\grips\grippod\data\acc_co.paa",
		"\rhsusf\addons\rhsusf_weapons\m4\data\m4acc_wd_co.paa",
		"\rhsusf\addons\rhsusf_weapons2\sr25\data\buttstock2_wd_co.paa"
	};

	rhs_grip1_change = "rhs_weap_mk18_grip_KAC_wd";
	rhs_grip2_change = "rhs_weap_mk18_grip2_KAC_wd";
	rhs_grip3_change = "rhs_weap_mk18_grip_KAC_wd";

	baseWeapon = "rhs_weap_mk18_KAC_wd";
};

class rhs_weap_mk18_KAC_d : rhs_weap_mk18_KAC
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_weap_mk18_KAC_d)

	displayName = $STR_RHS_CFGWEAPONS_RIFLE_MK18_KAC_d;


	// Hidden sels
	hiddenSelectionsTextures[] =
	{
		"\rhsusf\addons\rhsusf_weapons\m4\data\m4a1_actual_d_co.paa",
		"\rhsusf\addons\rhsusf_weapons3\M4BII\Data\rhs_mk18rail_d_co.paa",
		"\rhsusf\addons\rhsusf_weapons\acc\grips\grippod\data\acc_co.paa",
		"\rhsusf\addons\rhsusf_weapons\m4\data\m4acc_d_co.paa",
		"\rhsusf\addons\rhsusf_weapons2\sr25\data\buttstock2_d_co.paa"
	};

	rhs_grip1_change = "rhs_weap_mk18_grip_KAC_d";
	rhs_grip2_change = "rhs_weap_mk18_grip2_KAC_d";
	rhs_grip3_change = "rhs_weap_mk18_grip_KAC_d";

	baseWeapon = "rhs_weap_mk18_KAC_d";
};

// Mk18 grip variants

class rhs_weap_mk18_grip : rhs_weap_mk18
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_weap_mk18_grip)
	displayName = $STR_RHS_CFGWEAPONS_RIFLE_MK18_afg;


	class WeaponSlotsInfo: WeaponSlotsInfo
	{
		mass = 59.9;
	};
	Grip_Macro(1,m16a4)
};
class rhs_weap_mk18_grip2 : rhs_weap_mk18_grip
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_weap_mk18_grip2)
	displayName = $STR_RHS_CFGWEAPONS_RIFLE_MK18_afg;
	class WeaponSlotsInfo: WeaponSlotsInfo
	{
		class GripodSlot: rhs_western_rifle_afg_slot{};
	};
	Grip_Macro(2,mk18_afg)
};

class rhs_weap_mk18_grip_bk : rhs_weap_mk18_bk
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_weap_mk18_grip_bk)
	displayName = $STR_RHS_CFGWEAPONS_RIFLE_MK18_afg;


	class WeaponSlotsInfo: WeaponSlotsInfo
	{
		mass = 59.9;
	};
	Grip_Macro(1,m16a4)
};
class rhs_weap_mk18_grip2_bk : rhs_weap_mk18_grip_bk
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_weap_mk18_grip2_bk)
	displayName = $STR_RHS_CFGWEAPONS_RIFLE_MK18_afg;
	class WeaponSlotsInfo: WeaponSlotsInfo
	{
		class GripodSlot: rhs_western_rifle_afg_slot{};
	};
	Grip_Macro(2,mk18_afg)
};

class rhs_weap_mk18_grip_wd : rhs_weap_mk18_wd
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_weap_mk18_grip_wd)
	displayName = $STR_RHS_CFGWEAPONS_RIFLE_MK18_afg;


	class WeaponSlotsInfo: WeaponSlotsInfo
	{
		mass = 54.56;
	};
	Grip_Macro(1,m16a4)
};
class rhs_weap_mk18_grip2_wd : rhs_weap_mk18_grip_wd
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_weap_mk18_grip2_wd)
	displayName = $STR_RHS_CFGWEAPONS_RIFLE_MK18_afg;
	class WeaponSlotsInfo: WeaponSlotsInfo
	{
		class GripodSlot: rhs_western_rifle_afg_slot{};
	};
	Grip_Macro(2,mk18_afg)
};

class rhs_weap_mk18_grip_d : rhs_weap_mk18_d
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_weap_mk18_grip_d)
	displayName = $STR_RHS_CFGWEAPONS_RIFLE_MK18_afg;


	class WeaponSlotsInfo: WeaponSlotsInfo
	{
		mass = 54.56;
	};
	Grip_Macro(1,m16a4)
};
class rhs_weap_mk18_grip2_d : rhs_weap_mk18_grip_d
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_weap_mk18_grip2_d)
	displayName = $STR_RHS_CFGWEAPONS_RIFLE_MK18_afg;
	class WeaponSlotsInfo: WeaponSlotsInfo
	{
		class GripodSlot: rhs_western_rifle_afg_slot{};
	};
	Grip_Macro(2,mk18_afg)
};

// Mk18 KAC grip variants

class rhs_weap_mk18_grip_KAC : rhs_weap_mk18_KAC
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_weap_mk18_grip_KAC)
	displayName = $STR_RHS_CFGWEAPONS_RIFLE_MK18_afg_kac;

	class WeaponSlotsInfo: WeaponSlotsInfo
	{
		mass = 54.56;
	};
	Grip_Macro(1,m16a4)
};
class rhs_weap_mk18_grip2_KAC : rhs_weap_mk18_grip_KAC
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_weap_mk18_grip2_KAC)
	displayName = $STR_RHS_CFGWEAPONS_RIFLE_MK18_afg_kac;
	class WeaponSlotsInfo: WeaponSlotsInfo
	{
		class GripodSlot: rhs_western_rifle_afg_slot{};
	};
	Grip_Macro(2,mk18_afg)
};

class rhs_weap_mk18_grip_KAC_bk : rhs_weap_mk18_KAC_bk
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_weap_mk18_grip_KAC_bk)
	displayName = $STR_RHS_CFGWEAPONS_RIFLE_MK18_afg_kac;

	class WeaponSlotsInfo: WeaponSlotsInfo
	{
		mass = 54.56;
	};
	Grip_Macro(1,m16a4)
};
class rhs_weap_mk18_grip2_KAC_bk : rhs_weap_mk18_grip_KAC_bk
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_weap_mk18_grip2_KAC_bk)
	displayName = $STR_RHS_CFGWEAPONS_RIFLE_MK18_afg_kac;
	class WeaponSlotsInfo: WeaponSlotsInfo
	{
		class GripodSlot: rhs_western_rifle_afg_slot{};
	};
	Grip_Macro(2,mk18_afg)
};

class rhs_weap_mk18_grip_KAC_wd : rhs_weap_mk18_KAC_wd
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_weap_mk18_grip_KAC_wd)
	displayName = $STR_RHS_CFGWEAPONS_RIFLE_MK18_afg_kac;

	class WeaponSlotsInfo: WeaponSlotsInfo
	{
		mass = 54.56;
	};
	Grip_Macro(1,m16a4)
};
class rhs_weap_mk18_grip2_KAC_wd : rhs_weap_mk18_grip_KAC_wd
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_weap_mk18_grip2_KAC_wd)
	displayName = $STR_RHS_CFGWEAPONS_RIFLE_MK18_afg_kac;
	class WeaponSlotsInfo: WeaponSlotsInfo
	{
		class GripodSlot: rhs_western_rifle_afg_slot{};
	};
	Grip_Macro(2,mk18_afg)
};

class rhs_weap_mk18_grip_KAC_d : rhs_weap_mk18_KAC_d
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_weap_mk18_grip_KAC_d)
	displayName = $STR_RHS_CFGWEAPONS_RIFLE_MK18_afg_kac;

	class WeaponSlotsInfo: WeaponSlotsInfo
	{
		mass = 54.56;
	};
	Grip_Macro(1,m16a4)
};
class rhs_weap_mk18_grip2_KAC_d : rhs_weap_mk18_grip_KAC_d
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_weap_mk18_grip2_KAC_d)
	displayName = $STR_RHS_CFGWEAPONS_RIFLE_MK18_afg_kac;
	class WeaponSlotsInfo: WeaponSlotsInfo
	{
		class GripodSlot: rhs_western_rifle_afg_slot{};
	};
	Grip_Macro(2,mk18_afg)
};

// M320

class rhs_weap_mk18_m320 : rhs_weap_mk18
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_weap_mk18_m320)
	displayName = $STR_RHS_CFGWEAPONS_RIFLE_MK18_M320;

	model = "\rhsusf\addons\rhsusf_weapons3\M4BII\MK18_m320.p3d";
	handAnim[] = {"OFP2_ManSkeleton","\rhsusf\addons\rhsusf_c_weapons\anims\rhs_hand_m4a1_m320.rtm"};

	muzzles[] = {"this","M320_GL","SAFE"};
	class WeaponSlotsInfo: WeaponSlotsInfo
	{
		mass = 87.56;
		class UnderBarrelSlot {};
		class GripodSlot {};
	};
	baseWeapon="rhs_weap_mk18_m320";
};


//- M16A4 family

class rhs_weap_m16a4: rhs_weap_m4_Base
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_weap_m16a4)
	scope = 2;
	displayName = $STR_RHS_CFGWEAPONS_RIFLE_M16A4;

	model = "\rhsusf\addons\rhsusf_weapons\M16\M16A4_ris.p3d";
	handAnim[] = {"OFP2_ManSkeleton","\rhsusf\addons\rhsusf_c_weapons\anims\rhs_hand_m16a4_stock.rtm"};


	hiddenSelections[] = {"camo1","camo2","camo3","camo4"};
	hiddenSelectionsTextures[] =
	{
		"\rhsusf\addons\rhsusf_weapons\m16\data\m16a4_co.paa",
		"\rhsusf\addons\rhsusf_weapons\m4\data\magazine_co.paa",
		"\rhsusf\addons\rhsusf_weapons\m4\data\m4acc_co.paa",
		"\rhsusf\addons\rhsusf_weapons\m4\data\kacrailcover_co.paa"
	};

	class WeaponSlotsInfo: WeaponSlotsInfo
	{
		mass = 74.8;
		class CowsSlot: rhs_western_rifle_scopes_slot_long {};
	};

	class Single: Single
	{
		dispersion		= DISPERSION_MOA(3);
	};
	class Burst: Burst
	{
		dispersion		= DISPERSION_MOA(3);
	};
	initSpeed = -1; //20 inch barrel

	rhs_grip1_change = "rhs_weap_m16a4_grip";
	rhs_grip2_change = "rhs_weap_m16a4_grip3";
	rhs_grip3_change = "rhs_weap_m16a4_grip2";

	baseWeapon="rhs_weap_m16a4";
};

class rhs_weap_m16a4_pmag : rhs_weap_m16a4
{
	scope = 1;
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_weap_m16a4_pmag)
	displayName = $STR_RHS_CFGWEAPONS_RIFLE_M16A4_pmag;

	hiddenSelections[] = {"camo1","camo2","camo3","camo4","camo7"};
	hiddenSelectionsTextures[] =
	{
		"\rhsusf\addons\rhsusf_weapons\m16\data\m16a4_co.paa",
		"\rhsusf\addons\rhsusf_weapons\m4\data\magazine_co.paa",
		"\rhsusf\addons\rhsusf_weapons\m4\data\m4acc_co.paa",
		"\rhsusf\addons\rhsusf_weapons\m4\data\kacrailcover_co.paa",
		"\rhsusf\addons\rhsusf_weapons\acc\grips\grippod\data\acc_co.paa"
	};

	rhs_grip1_change = "rhs_weap_m16a4_pmag_grip";
	rhs_grip2_change = "rhs_weap_m16a4_pmag_grip2";
	rhs_grip3_change = "rhs_weap_m16a4_pmag_grip3";
};
class rhs_weap_m16a4_imod : rhs_weap_m16a4
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_weap_m16a4_imod)
	displayName = $STR_RHS_CFGWEAPONS_RIFLE_M16A4_IMOD;
	rhs_grip1_change = "rhs_weap_m16a4_imod_grip";
	rhs_grip2_change = "rhs_weap_m16a4_imod_grip2";
	rhs_grip3_change = "rhs_weap_m16a4_imod_grip3";
	baseWeapon="rhs_weap_m16a4_imod";
	model = "\rhsusf\addons\rhsusf_weapons\M16\M16A4_ris_imod.p3d";
};

class rhs_weap_m16a4_carryhandle : rhs_weap_m16a4
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_weap_m16a4_carryhandle)
	displayName = $STR_RHS_CFGWEAPONS_RIFLE_M16A4_carry;

	model = "\rhsusf\addons\rhsusf_weapons\M16\M16A4_ris_carryhandle.p3d";

	hiddenSelections[] = {"camo1","camo2","camo4"};
	hiddenSelectionsTextures[] =
	{
		"\rhsusf\addons\rhsusf_weapons\m16\data\m16a4_co.paa",
		"\rhsusf\addons\rhsusf_weapons\m4\data\magazine_co.paa",
		"\rhsusf\addons\rhsusf_weapons\m4\data\kacrailcover_co.paa"
	};

	class WeaponSlotsInfo: WeaponSlotsInfo
	{
		mass = 74.8;
	};
	CarryhandleSight
	rhs_grip1_change = "rhs_weap_m16a4_carryhandle_grip";
	rhs_grip2_change = "rhs_weap_m16a4_carryhandle_grip3";
	rhs_grip3_change = "rhs_weap_m16a4_carryhandle_grip2";

	baseWeapon="rhs_weap_m16a4_carryhandle";
};

class rhs_weap_m16a4_carryhandle_pmag : rhs_weap_m16a4_carryhandle
{
	scope = 1;
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_weap_m16a4_carryhandle_pmag)
	displayName = $STR_RHS_CFGWEAPONS_RIFLE_M16A4_carryp;

	hiddenSelections[] = {"camo1","camo2","camo4","camo7"};
	hiddenSelectionsTextures[] =
	{
		"\rhsusf\addons\rhsusf_weapons\m16\data\m16a4_co.paa",
		"\rhsusf\addons\rhsusf_weapons\m4\data\magazine_co.paa",
		"\rhsusf\addons\rhsusf_weapons\m4\data\kacrailcover_co.paa",
		"\rhsusf\addons\rhsusf_weapons\acc\grips\grippod\data\acc_co.paa"
	};

	rhs_grip1_change = "rhs_weap_m16a4_carryhandle_grip_pmag";
	rhs_grip2_change = "rhs_weap_m16a4_carryhandle_grip3_pmag";
	rhs_grip3_change = "rhs_weap_m16a4_carryhandle_grip2_pmag";
};


class rhs_weap_m16a4_grip : rhs_weap_m16a4
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_weap_m16a4_grip)
	//displayName = $STR_RHS_CFGWEAPONS_RIFLE_M16A4_foreg;

	class WeaponSlotsInfo: WeaponSlotsInfo
	{
		mass = 74.8;
	};
	Grip_Macro(1,m16a4)
};

class rhs_weap_m16a4_grip2 : rhs_weap_m16a4_grip
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_weap_m16a4_grip2)
	//displayName = $STR_RHS_CFGWEAPONS_RIFLE_M16A4_grip;
	Grip_Macro(3,m16a4)
};
class rhs_weap_m16a4_grip3 : rhs_weap_m16a4_grip
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_weap_m16a4_grip3)
	//displayName = $STR_RHS_CFGWEAPONS_RIFLE_M16A4_grip;
	class WeaponSlotsInfo: WeaponSlotsInfo
	{
		class GripodSlot: rhs_western_rifle_afg_slot{};
	};
	Grip_Macro(2,m16a4_afg)
};

class rhs_weap_m16a4_pmag_grip : rhs_weap_m16a4_pmag
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_weap_m16a4_pmag_grip)
	//displayName = $STR_RHS_CFGWEAPONS_RIFLE_m16a4_pmag_foreg;

	class WeaponSlotsInfo: WeaponSlotsInfo
	{
		mass = 74.8;
	};
	Grip_Macro(1,m16a4)
};

class rhs_weap_m16a4_pmag_grip2 : rhs_weap_m16a4_pmag_grip
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_weap_m16a4_pmag_grip2)
	//displayName = $STR_RHS_CFGWEAPONS_RIFLE_m16a4_pmag_grip;
	class WeaponSlotsInfo: WeaponSlotsInfo
	{
		class GripodSlot: rhs_western_rifle_afg_slot{};
	};
	Grip_Macro(2,m16a4_afg)
};
class rhs_weap_m16a4_pmag_grip3 : rhs_weap_m16a4_pmag_grip
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_weap_m16a4_pmag_grip3)
	//displayName = $STR_RHS_CFGWEAPONS_RIFLE_m16a4_pmag_grip;
	Grip_Macro(3,m16a4)
};

class rhs_weap_m16a4_imod_grip : rhs_weap_m16a4_imod
{
	AUTHOR_MACRO
	class WeaponSlotsInfo: WeaponSlotsInfo
	{
		mass = 74.8;
	};
	Grip_Macro(1,m16a4)
};

class rhs_weap_m16a4_imod_grip2 : rhs_weap_m16a4_imod_grip
{
	AUTHOR_MACRO
	class WeaponSlotsInfo: WeaponSlotsInfo
	{
		class GripodSlot: rhs_western_rifle_afg_slot{};
	};
	Grip_Macro(2,m16a4_afg)
};
class rhs_weap_m16a4_imod_grip3 : rhs_weap_m16a4_imod_grip
{
	AUTHOR_MACRO
	Grip_Macro(3,m16a4)
};

class rhs_weap_m16a4_carryhandle_grip : rhs_weap_m16a4_carryhandle
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_weap_m16a4_carryhandle_grip)
	displayName = $STR_RHS_CFGWEAPONS_RIFLE_M16A4_carry_foreg;

	class WeaponSlotsInfo: WeaponSlotsInfo
	{
		mass = 74.8;
	};
	Grip_Macro(1,m16a4)
};

class rhs_weap_m16a4_carryhandle_grip2 : rhs_weap_m16a4_carryhandle_grip
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_weap_m16a4_carryhandle_grip2)
	displayName = $STR_RHS_CFGWEAPONS_RIFLE_M16A4_grip;
	Grip_Macro(3,m16a4)
};
class rhs_weap_m16a4_carryhandle_grip3 : rhs_weap_m16a4_carryhandle_grip
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_weap_m16a4_carryhandle_grip3)
	displayName = $STR_RHS_CFGWEAPONS_RIFLE_M16A4_grip;
	class WeaponSlotsInfo: WeaponSlotsInfo
	{
		class GripodSlot: rhs_western_rifle_afg_slot{};
	};
	Grip_Macro(2,m16a4_afg)
};

class rhs_weap_m16a4_carryhandle_grip_pmag : rhs_weap_m16a4_carryhandle_pmag
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_weap_m16a4_carryhandle_grip_pmag)
	displayName = $STR_RHS_CFGWEAPONS_RIFLE_M16A4_carryp_foreg;

	class WeaponSlotsInfo: WeaponSlotsInfo
	{
		mass = 74.8;
	};
	Grip_Macro(1,m16a4)
};

class rhs_weap_m16a4_carryhandle_grip2_pmag : rhs_weap_m16a4_carryhandle_grip_pmag
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_weap_m16a4_carryhandle_grip2_pmag)
	displayName = $STR_RHS_CFGWEAPONS_RIFLE_M16A4_carryp_grip;
	Grip_Macro(3,m16a4)
};
class rhs_weap_m16a4_carryhandle_grip3_pmag : rhs_weap_m16a4_carryhandle_grip_pmag
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_weap_m16a4_carryhandle_grip3_pmag)
	displayName = $STR_RHS_CFGWEAPONS_RIFLE_M16A4_carryp_grip;
	class WeaponSlotsInfo: WeaponSlotsInfo
	{
		class GripodSlot: rhs_western_rifle_afg_slot{};
	};
	Grip_Macro(2,m16a4_afg)
};

class rhs_weap_m16a4_carryhandle_M203 : rhs_weap_m16a4
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_weap_m16a4_carryhandle_M203)
	displayName = $STR_RHS_CFGWEAPONS_RIFLE_M16A4_carry_M203;

	model = "\rhsusf\addons\rhsusf_weapons\M16\M16A4_ris_carryhandle_M203.p3d";
	handAnim[] = {"OFP2_ManSkeleton","\rhsusf\addons\rhsusf_c_weapons\anims\rhs_hand_m16a4_m203.rtm"};
	hiddenSelections[] = {"camo1","camo2","camo4","camo5","camo6"};
	hiddenSelectionsTextures[] =
	{
		"\rhsusf\addons\rhsusf_weapons\m16\data\m16a4_co.paa",
		"\rhsusf\addons\rhsusf_weapons\m4\data\magazine_co.paa",
		"\rhsusf\addons\rhsusf_weapons\m4\data\kacrailcover_co.paa",
		"\rhsusf\addons\rhsusf_weapons\m4\data\m203_co.paa",
		"\rhsusf\addons\rhsusf_weapons\m4\data\kacleaf_co.paa"
	};

	class WeaponSlotsInfo: WeaponSlotsInfo
	{
		mass = 104.72;
		class UnderBarrelSlot {};
		class GripodSlot: rhs_western_m203_gripod_slot {};
		class PointerSlot: rhs_western_rifle_laser_slot {};
	};
	muzzles[] = {"this","M203_GL","SAFE"};
	CarryhandleSight
	inertia = 0.6;
	dexterity = 1.4;

	rhs_grip1_change = "rhs_weap_m16a4_carryhandle_M203_grip";
	rhs_grip2_change = "rhs_weap_m16a4_carryhandle_M203_grip";
	rhs_grip3_change = "rhs_weap_m16a4_carryhandle_M203_grip";
	baseWeapon="rhs_weap_m16a4_carryhandle_M203";
};
class rhs_weap_m16a4_imod_M203 : rhs_weap_m16a4_carryhandle_M203
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_weap_m16a4_imod_M203)
	discreteDistance[]={200,300,400,450,500,550,600};
	discreteDistanceCameraPoint[]={"eye","eye_300","eye_400","eye_450","eye_500","eye_550","eye_600"};
	discreteDistanceInitIndex=0;
	displayName = $STR_RHS_CFGWEAPONS_RIFLE_M16A4_IMOD_M203;
	model = "\rhsusf\addons\rhsusf_weapons\M16\M16A4_ris_imod_M203.p3d";

	rhs_grip1_change = "rhs_weap_m16a4_imod_M203_grip";
	rhs_grip2_change = "rhs_weap_m16a4_imod_M203_grip";
	rhs_grip3_change = "rhs_weap_m16a4_imod_M203_grip";
	baseWeapon="rhs_weap_m16a4_imod_M203";
};

////////////M16A4 M203 GRIPPOD VARIANTS////////

class rhs_weap_m16a4_carryhandle_M203_grip : rhs_weap_m16a4_carryhandle_M203
{
	AUTHOR_MACRO
	Grip_Macro(_m203_blk,m203gripod)
};
class rhs_weap_m16a4_imod_M203_grip : rhs_weap_m16a4_imod_M203
{
	AUTHOR_MACRO
	Grip_Macro(_m203_blk,m203gripod)
};

//- HK416
class rhs_weap_hk416d10: rhs_weap_m4a1
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_weap_hk416d10)
	displayName = "$STR_RHS_CFGWEAPONS_RIFLE_HK416D10";


	model = "\rhsusf\addons\rhsusf_weapons2\HK416\rhs_hk416d10.p3d";
	handAnim[] = {"OFP2_ManSkeleton","\rhsusf\addons\rhsusf_c_weapons\anims\rhs_hand_m16a4_stock.rtm"};
	reloadTime = 0.070;

	recoil = "rhs_recoil_mk18";

	discreteDistance[]={100,200,300,400};
	discreteDistanceCameraPoint[]=
	{
		"eye",
		"eye_200",
		"eye_300",
		"eye_400"
	};
	discreteDistanceInitIndex=0;

	hiddenSelections[] = {"camo1","camo2","camo3"};
	hiddenSelectionsTextures[] =
	{
		"\rhsusf\addons\rhsusf_weapons2\hk416\data\wep_hk416d_2_co.paa",
		"\rhsusf\addons\rhsusf_weapons\m4\data\magazine_co.paa",
		"\rhsusf\addons\rhsusf_weapons2\sr25\data\buttstock2_co.paa"
	};
	hiddenSelectionsMaterials[] =
	{
		"\rhsusf\addons\rhsusf_weapons2\hk416\data\wep_hk416d_2.rvmat",
		"\rhsusf\addons\rhsusf_weapons\m4\data\magazine.rvmat",
		"\rhsusf\addons\rhsusf_weapons2\sr25\data\buttstock2_mat.rvmat"
	};

	inertia = 0.3;
	dexterity = 1.6;
	initSpeed = -0.8979; //10.3 inch barrel
	class WeaponSlotsInfo
	{
		mass = 72.82; // 3.02 kg
		allowedSlots[] = {901};
		class UnderBarrelSlot: rhs_western_rifle_underbarrel_slot {};
		class CowsSlot: rhs_western_rifle_scopes_slot_long {};
		class PointerSlot: rhs_western_rifle_laser_slot_top {};
		class MuzzleSlot: rhs_western_rifle_muzzle_slot {};
		class GripodSlot: rhs_western_rifle_gripod_slot {};
	};
	modes[] =
	{
		"Single",
		"Single_AI",
		"FullAuto",
		"single_medium_optics1",
		"single_far_optics2"
	};

	class Single : Single
	{
		reloadTime = 0.075;
		dispersion = DISPERSION_MOA(2.5);
	};
	class FullAuto : FullAuto
	{
		reloadTime = 0.075;
		dispersion = DISPERSION_MOA(2.5);
	};

	rhs_grip1_change = "rhs_weap_hk416d10_grip";
	rhs_grip2_change = "rhs_weap_hk416d10_grip2";
	rhs_grip3_change = "rhs_weap_hk416d10_grip3";
	rhsusf_acc_anpeq15 = 1; // 0 - for M4, 1 - for M27IAR/HK with higher top rail

	baseWeapon="rhs_weap_hk416d10";
};

class rhs_weap_hk416d10_grip: rhs_weap_hk416d10
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_weap_hk416d10_grip)
	Grip_Macro(1,m16a4)
};
class rhs_weap_hk416d10_grip2: rhs_weap_hk416d10_grip
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_weap_hk416d10_grip2)
	class WeaponSlotsInfo: WeaponSlotsInfo
	{
		class GripodSlot: rhs_western_rifle_afg_slot{};
	};
	Grip_Macro(2,hk416_afg)
};
class rhs_weap_hk416d10_grip3: rhs_weap_hk416d10_grip2
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_weap_hk416d10_grip3)
	class WeaponSlotsInfo: WeaponSlotsInfo
	{
		class GripodSlot: rhs_western_rifle_gripod_slot{};
	};
	Grip_Macro(3,m16a4)	
};

class rhs_weap_hk416d145: rhs_weap_hk416d10
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_weap_hk416d145)
	displayName = "$STR_RHS_CFGWEAPONS_RIFLE_HK416D145";
	initSpeed = -0.94; //14.5 inch barrel

	class Single : Single
	{
		dispersion = DISPERSION_MOA(2);
	};
	class FullAuto : FullAuto
	{
		dispersion = DISPERSION_MOA(2);
	};
	inertia = 0.4;
	recoil = "rhs_recoil_mk18145";
	hiddenSelectionsTextures[] =
	{
		"\rhsusf\addons\rhsusf_weapons2\hk416\data\wep_hk416d_1_co.paa",
		"\rhsusf\addons\rhsusf_weapons\m4\data\magazine_co.paa",
		"\rhsusf\addons\rhsusf_weapons2\sr25\data\buttstock2_co.paa"
	};
	hiddenSelectionsMaterials[] =
	{
		"\rhsusf\addons\rhsusf_weapons2\hk416\data\wep_hk416d_1.rvmat",
		"\rhsusf\addons\rhsusf_weapons\m4\data\magazine.rvmat",
		"\rhsusf\addons\rhsusf_weapons2\sr25\data\buttstock2_mat.rvmat"
	};

	model = "\rhsusf\addons\rhsusf_weapons2\HK416\rhs_hk416d145.p3d";


	class WeaponSlotsInfo: WeaponSlotsInfo
	{
		mass = 77; // 3.49 kg
	};

	rhs_grip1_change = "rhs_weap_hk416d145_grip";
	rhs_grip2_change = "rhs_weap_hk416d145_grip2";
	rhs_grip3_change = "rhs_weap_hk416d145_grip3";

	baseWeapon="rhs_weap_hk416d145";
};

class rhs_weap_hk416d145_grip: rhs_weap_hk416d145
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_weap_hk416d145_grip)
	Grip_Macro(1,m16a4)
};
class rhs_weap_hk416d145_grip2: rhs_weap_hk416d145_grip
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_weap_hk416d145_grip2)
	class WeaponSlotsInfo: WeaponSlotsInfo
	{
		class GripodSlot: rhs_western_rifle_afg_slot{};
	};
	Grip_Macro(2,hk416_afg)
};
class rhs_weap_hk416d145_grip3: rhs_weap_hk416d145_grip2
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_weap_hk416d145_grip3)
	class WeaponSlotsInfo: WeaponSlotsInfo
	{
		class GripodSlot: rhs_western_rifle_gripod_slot{};
	};
	Grip_Macro(3,m16a4)
};

class rhs_weap_hk416d10_LMT: rhs_weap_hk416d10
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_weap_hk416d10_LMT)
	displayName = "$STR_RHS_CFGWEAPONS_RIFLE_HK416D10_LMT";
	model = "\rhsusf\addons\rhsusf_weapons2\HK416\rhs_hk416d10_LMT.p3d";


	rhs_grip1_change = "rhs_weap_hk416d10_LMT_grip";
	rhs_grip2_change = "rhs_weap_hk416d10_LMT_grip2";
	rhs_grip3_change = "rhs_weap_hk416d10_LMT_grip3";

	baseWeapon="rhs_weap_hk416d10_LMT";
};

class rhs_weap_hk416d10_LMT_grip: rhs_weap_hk416d10_LMT
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_weap_hk416d10_LMT_grip)
	Grip_Macro(1,m16a4)
};
class rhs_weap_hk416d10_LMT_grip2: rhs_weap_hk416d10_LMT_grip
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_weap_hk416d10_LMT_grip2)
	class WeaponSlotsInfo: WeaponSlotsInfo
	{
		class GripodSlot: rhs_western_rifle_afg_slot{};
	};
	Grip_Macro(2,hk416_afg)
};
class rhs_weap_hk416d10_LMT_grip3: rhs_weap_hk416d10_LMT_grip2
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_weap_hk416d10_LMT_grip3)
	class WeaponSlotsInfo: WeaponSlotsInfo
	{
		class GripodSlot: rhs_western_rifle_gripod_slot{};
	};
	Grip_Macro(3,m16a4)
};

//M320 GL Variants

class rhs_weap_hk416d10_m320: rhs_weap_hk416d10
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_weap_hk416d10_m320)
	displayName = "$STR_RHS_CFGWEAPONS_RIFLE_HK416D10_M320";
	model = "\rhsusf\addons\rhsusf_weapons2\HK416\rhs_hk416d10m320.p3d";

	handAnim[] = {"OFP2_ManSkeleton","\rhsusf\addons\rhsusf_c_weapons\anims\rhs_hand_hk416_m320.rtm"};
	muzzles[] = {"this","M320_GL","SAFE"};

	hiddenSelectionsTextures[] =
	{
		"\rhsusf\addons\rhsusf_weapons2\hk416\data\wep_hk416d_2_co.paa",
		"\rhsusf\addons\rhsusf_weapons\m4\data\magazine_co.paa",
		"\rhsusf\addons\rhsusf_weapons\m320\data\m320_co.paa"
	};
	hiddenSelectionsMaterials[] =
	{
		"\rhsusf\addons\rhsusf_weapons2\hk416\data\wep_hk416d_2.rvmat",
		"\rhsusf\addons\rhsusf_weapons\m4\data\magazine.rvmat",
		"\rhsusf\addons\rhsusf_weapons\m320\data\m320.rvmat"
	};

	class WeaponSlotsInfo: WeaponSlotsInfo
	{
		mass = 105.82; // 3.02 + 1,5kg
		class UnderBarrelSlot {};
		class GripodSlot {};
	};
	class Single : Single
	{
		dispersion = DISPERSION_MOA(3);
	};
	class FullAuto : FullAuto
	{
		dispersion = DISPERSION_MOA(2);
	};

	inertia = 0.6;
	dexterity = 1.4;
	baseWeapon="rhs_weap_hk416d10_m320";
};
class rhs_weap_hk416d145_m320: rhs_weap_hk416d145
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_weap_hk416d145_m320)
	displayName = "$STR_RHS_CFGWEAPONS_RIFLE_HK416D145_M320";
	model = "\rhsusf\addons\rhsusf_weapons2\HK416\rhs_hk416d145m320.p3d";

	handAnim[] = {"OFP2_ManSkeleton","\rhsusf\addons\rhsusf_c_weapons\anims\rhs_hand_hk416_m320.rtm"};
	hiddenSelectionsTextures[] =
	{
		"\rhsusf\addons\rhsusf_weapons2\hk416\data\wep_hk416d_1_co.paa",
		"\rhsusf\addons\rhsusf_weapons\m4\data\magazine_co.paa",
		"\rhsusf\addons\rhsusf_weapons\m320\data\m320_co.paa"
	};
	hiddenSelectionsMaterials[] =
	{
		"\rhsusf\addons\rhsusf_weapons2\hk416\data\wep_hk416d_1.rvmat",
		"\rhsusf\addons\rhsusf_weapons\m4\data\magazine.rvmat",
		"\rhsusf\addons\rhsusf_weapons\m320\data\m320.rvmat"
	};

	class M320_GL: M320_GL
	{
		reloadAction = "rhs_GestureReloadM320_hk";
	};
	muzzles[] = {"this","M320_GL","SAFE"};
	class WeaponSlotsInfo: WeaponSlotsInfo
	{
		mass = 110; // 3.49 + 1.5kg
		class UnderBarrelSlot {};
		class GripodSlot {};
	};
	inertia = 0.6;
	dexterity = 1.4;
	baseWeapon="rhs_weap_hk416d145_m320";
};

//Camo variants

class rhs_weap_hk416d10_LMT_d: rhs_weap_hk416d10_LMT
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_weap_hk416d10_LMT_d)
	displayName = "$STR_RHS_CFGWEAPONS_RIFLE_HK416D10_LMT_D";


	hiddenSelectionsTextures[] =
	{
		"\rhsusf\addons\rhsusf_weapons2\hk416\data\camo\wep_hk416d_2_d_co.paa",
		"\rhsusf\addons\rhsusf_weapons\m4\data\magazine_co.paa",
		"\rhsusf\addons\rhsusf_weapons2\hk416\data\camo\buttstock2_d_co.paa"
	};
	hiddenSelectionsMaterials[] =
	{
		"\rhsusf\addons\rhsusf_weapons2\hk416\data\wep_hk416d_2.rvmat",
		"\rhsusf\addons\rhsusf_weapons\m4\data\magazine.rvmat",
		"\rhsusf\addons\rhsusf_weapons2\sr25\data\buttstock2_mat.rvmat"
	};

	rhs_grip1_change = "rhs_weap_hk416d10_LMT_d_grip";
	rhs_grip2_change = "rhs_weap_hk416d10_LMT_d_grip2";
	rhs_grip3_change = "rhs_weap_hk416d10_LMT_d_grip3";
	baseWeapon="rhs_weap_hk416d10_LMT_d";
};
class rhs_weap_hk416d10_LMT_d_grip: rhs_weap_hk416d10_LMT_d
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_weap_hk416d10_LMT_d_grip)
	Grip_Macro(1,m16a4)
};
class rhs_weap_hk416d10_LMT_d_grip2: rhs_weap_hk416d10_LMT_d_grip
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_weap_hk416d10_LMT_d_grip2)
	class WeaponSlotsInfo: WeaponSlotsInfo
	{
		class GripodSlot: rhs_western_rifle_afg_slot{};
	};
	Grip_Macro(2,hk416_afg)
};
class rhs_weap_hk416d10_LMT_d_grip3: rhs_weap_hk416d10_LMT_d_grip2
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_weap_hk416d10_LMT_d_grip3)
	class WeaponSlotsInfo: WeaponSlotsInfo
	{
		class GripodSlot: rhs_western_rifle_gripod_slot{};
	};
	Grip_Macro(3,m16a4)
};

class rhs_weap_hk416d10_LMT_wd: rhs_weap_hk416d10_LMT
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_weap_hk416d10_LMT_wd)
	displayName = "$STR_RHS_CFGWEAPONS_RIFLE_HK416D10_LMT_WD";


	hiddenSelectionsTextures[] =
	{
		"\rhsusf\addons\rhsusf_weapons2\hk416\data\camo\wep_hk416d_2_w_co.paa",
		"\rhsusf\addons\rhsusf_weapons\m4\data\magazine_co.paa",
		"\rhsusf\addons\rhsusf_weapons2\hk416\data\camo\buttstock2_w_co.paa"
	};
	hiddenSelectionsMaterials[] =
	{
		"\rhsusf\addons\rhsusf_weapons2\hk416\data\wep_hk416d_2.rvmat",
		"\rhsusf\addons\rhsusf_weapons\m4\data\magazine.rvmat",
		"\rhsusf\addons\rhsusf_weapons2\sr25\data\buttstock2_mat.rvmat"
	};

	rhs_grip1_change = "rhs_weap_hk416d10_LMT_wd_grip";
	rhs_grip2_change = "rhs_weap_hk416d10_LMT_wd_grip2";
	rhs_grip3_change = "rhs_weap_hk416d10_LMT_wd_grip3";
	baseWeapon="rhs_weap_hk416d10_LMT_wd";
};
class rhs_weap_hk416d10_LMT_wd_grip: rhs_weap_hk416d10_LMT_wd
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_weap_hk416d10_LMT_wd_grip)
	Grip_Macro(1,m16a4)
};
class rhs_weap_hk416d10_LMT_wd_grip2: rhs_weap_hk416d10_LMT_wd_grip
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_weap_hk416d10_LMT_wd_grip2)
	class WeaponSlotsInfo: WeaponSlotsInfo
	{
		class GripodSlot: rhs_western_rifle_afg_slot{};
	};
	Grip_Macro(2,hk416_afg)
};
class rhs_weap_hk416d10_LMT_wd_grip3: rhs_weap_hk416d10_LMT_wd_grip2
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_weap_hk416d10_LMT_wd_grip3)
	class WeaponSlotsInfo: WeaponSlotsInfo
	{
		class GripodSlot: rhs_western_rifle_gripod_slot{};
	};
	Grip_Macro(3,m16a4)
};

class rhs_weap_hk416d145_d: rhs_weap_hk416d145
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_weap_hk416d145_d)
	displayName = $STR_RHS_CFGWEAPONS_RIFLE_HK416D145_D;

	hiddenSelectionsTextures[] =
	{
		"\rhsusf\addons\rhsusf_weapons2\hk416\data\camo\wep_hk416d_1_grass_d_co.paa",
		"\rhsusf\addons\rhsusf_weapons\m4\data\magazine_co.paa",
		"\rhsusf\addons\rhsusf_weapons2\hk416\data\camo\buttstock2_d_co.paa"
	};
	hiddenSelectionsMaterials[] =
	{
		"\rhsusf\addons\rhsusf_weapons2\hk416\data\camo\wep_hk416d_1_grass.rvmat",
		"\rhsusf\addons\rhsusf_weapons\m4\data\magazine.rvmat",
		"\rhsusf\addons\rhsusf_weapons2\sr25\data\buttstock2_mat.rvmat"
	};

	rhs_grip1_change = "rhs_weap_hk416d145_d_grip";
	rhs_grip2_change = "rhs_weap_hk416d145_d_grip2";
	rhs_grip3_change = "rhs_weap_hk416d145_d_grip3";
	baseWeapon="rhs_weap_hk416d145_d";
};
class rhs_weap_hk416d145_d_grip: rhs_weap_hk416d145_d
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_weap_hk416d145_d_grip)
	Grip_Macro(1,m16a4)
};
class rhs_weap_hk416d145_d_grip2: rhs_weap_hk416d145_d_grip
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_weap_hk416d145_d_grip2)
	class WeaponSlotsInfo: WeaponSlotsInfo
	{
		class GripodSlot: rhs_western_rifle_afg_slot{};
	};
	Grip_Macro(2,hk416_afg)
};
class rhs_weap_hk416d145_d_grip3: rhs_weap_hk416d145_d_grip2
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_weap_hk416d145_d_grip3)
	class WeaponSlotsInfo: WeaponSlotsInfo
	{
		class GripodSlot: rhs_western_rifle_gripod_slot{};
	};
	Grip_Macro(3,m16a4)
};

class rhs_weap_hk416d145_d_2: rhs_weap_hk416d145
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_weap_hk416d145_d_2)
	displayName = $STR_RHS_CFGWEAPONS_RIFLE_HK416D145_D_2;

	hiddenSelectionsTextures[] =
	{
		"\rhsusf\addons\rhsusf_weapons2\hk416\data\camo\wep_hk416d_1_net_d_co.paa",
		"\rhsusf\addons\rhsusf_weapons\m4\data\magazine_co.paa",
		"\rhsusf\addons\rhsusf_weapons2\hk416\data\camo\buttstock2_d_co.paa"
	};
	hiddenSelectionsMaterials[] =
	{
		"\rhsusf\addons\rhsusf_weapons2\hk416\data\camo\wep_hk416d_1_net.rvmat",
		"\rhsusf\addons\rhsusf_weapons\m4\data\magazine.rvmat",
		"\rhsusf\addons\rhsusf_weapons2\sr25\data\buttstock2_mat.rvmat"
	};

	rhs_grip1_change = "rhs_weap_hk416d145_d_2_grip";
	rhs_grip2_change = "rhs_weap_hk416d145_d_2_grip2";
	rhs_grip3_change = "rhs_weap_hk416d145_d_2_grip3";
	baseWeapon="rhs_weap_hk416d145_d_2";
};
class rhs_weap_hk416d145_d_2_grip: rhs_weap_hk416d145_d_2
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_weap_hk416d145_d_2_grip)
	Grip_Macro(1,m16a4)
};
class rhs_weap_hk416d145_d_2_grip2: rhs_weap_hk416d145_d_2_grip
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_weap_hk416d145_d_2_grip2)
	class WeaponSlotsInfo: WeaponSlotsInfo
	{
		class GripodSlot: rhs_western_rifle_afg_slot{};
	};
	Grip_Macro(2,hk416_afg)
};
class rhs_weap_hk416d145_d_2_grip3: rhs_weap_hk416d145_d_2_grip2
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_weap_hk416d145_d_2_grip3)
	class WeaponSlotsInfo: WeaponSlotsInfo
	{
		class GripodSlot: rhs_western_rifle_gripod_slot{};
	};
	Grip_Macro(3,m16a4)
};

class rhs_weap_hk416d145_wd: rhs_weap_hk416d145
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_weap_hk416d145_wd)
	displayName = $STR_RHS_CFGWEAPONS_RIFLE_HK416D145_WD;

	hiddenSelectionsTextures[] =
	{
		"\rhsusf\addons\rhsusf_weapons2\hk416\data\camo\wep_hk416d_1_grass_w_co.paa",
		"\rhsusf\addons\rhsusf_weapons\m4\data\magazine_co.paa",
		"\rhsusf\addons\rhsusf_weapons2\hk416\data\camo\buttstock2_w_co.paa"
	};
	hiddenSelectionsMaterials[] =
	{
		"\rhsusf\addons\rhsusf_weapons2\hk416\data\camo\wep_hk416d_1_grass.rvmat",
		"\rhsusf\addons\rhsusf_weapons\m4\data\magazine.rvmat",
		"\rhsusf\addons\rhsusf_weapons2\sr25\data\buttstock2_mat.rvmat"
	};

	rhs_grip1_change = "rhs_weap_hk416d145_wd_grip";
	rhs_grip2_change = "rhs_weap_hk416d145_wd_grip2";
	rhs_grip3_change = "rhs_weap_hk416d145_wd_grip3";
	baseWeapon="rhs_weap_hk416d145_wd";
};
class rhs_weap_hk416d145_wd_grip: rhs_weap_hk416d145_wd
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_weap_hk416d145_wd_grip)
	Grip_Macro(1,m16a4)
};
class rhs_weap_hk416d145_wd_grip2: rhs_weap_hk416d145_wd_grip
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_weap_hk416d145_wd_grip2)
	class WeaponSlotsInfo: WeaponSlotsInfo
	{
		class GripodSlot: rhs_western_rifle_afg_slot{};
	};
	Grip_Macro(2,hk416_afg)
};
class rhs_weap_hk416d145_wd_grip3: rhs_weap_hk416d145_wd_grip2
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_weap_hk416d145_wd_grip3)
	class WeaponSlotsInfo: WeaponSlotsInfo
	{
		class GripodSlot: rhs_western_rifle_gripod_slot{};
	};
	Grip_Macro(3,m16a4)
};

class rhs_weap_hk416d145_wd_2: rhs_weap_hk416d145
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_weap_hk416d145_wd_2)
	displayName = $STR_RHS_CFGWEAPONS_RIFLE_HK416D145_WD_2;

	hiddenSelectionsTextures[] =
	{
		"\rhsusf\addons\rhsusf_weapons2\hk416\data\camo\wep_hk416d_1_net_w_co.paa",
		"\rhsusf\addons\rhsusf_weapons\m4\data\magazine_co.paa",
		"\rhsusf\addons\rhsusf_weapons2\hk416\data\camo\buttstock2_w_co.paa"
	};
	hiddenSelectionsMaterials[] =
	{
		"\rhsusf\addons\rhsusf_weapons2\hk416\data\camo\wep_hk416d_1_net.rvmat",
		"\rhsusf\addons\rhsusf_weapons\m4\data\magazine.rvmat",
		"\rhsusf\addons\rhsusf_weapons2\sr25\data\buttstock2_mat.rvmat"
	};

	rhs_grip1_change = "rhs_weap_hk416d145_wd_2_grip";
	rhs_grip2_change = "rhs_weap_hk416d145_wd_2_grip2";
	rhs_grip3_change = "rhs_weap_hk416d145_wd_2_grip3";
	baseWeapon="rhs_weap_hk416d145_wd_2";
};
class rhs_weap_hk416d145_wd_2_grip: rhs_weap_hk416d145_wd_2
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_weap_hk416d145_wd_2_grip)
	Grip_Macro(1,m16a4)
};
class rhs_weap_hk416d145_wd_2_grip2: rhs_weap_hk416d145_wd_2_grip
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_weap_hk416d145_wd_2_grip2)
	class WeaponSlotsInfo: WeaponSlotsInfo
	{
		class GripodSlot: rhs_western_rifle_afg_slot{};
	};
	Grip_Macro(2,hk416_afg)
};
class rhs_weap_hk416d145_wd_2_grip3: rhs_weap_hk416d145_wd_2_grip2
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_weap_hk416d145_wd_2_grip3)
	class WeaponSlotsInfo: WeaponSlotsInfo
	{
		class GripodSlot: rhs_western_rifle_gripod_slot{};
	};
	Grip_Macro(3,m16a4)
};

////////////M27 IAR////////

class rhs_weap_m27iar: rhs_weap_m4a1
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_weap_m27iar)
	displayName = $STR_RHS_CFGWEAPONS_RIFLE_M27IAR;


	model = "\rhsusf\addons\rhsusf_weapons2\M27\rhs_m27iar.p3d";
	handAnim[] = {"OFP2_ManSkeleton","\rhsusf\addons\rhsusf_c_weapons\anims\rhs_hand_m16a4_stock.rtm"};
	reloadTime = 0.070;

	recoil = "rhs_recoil_m27";

	inertia = 0.5;
	dexterity = 1.6;
	initSpeed = -0.97; //16.5 inch barrel

	discreteDistance[]={200,300,400,500,600};
	discreteDistanceCameraPoint[]=
	{
		"eye",
		"eye_300",
		"eye_400",
		"eye_500",
		"eye_600"
	};
	discreteDistanceInitIndex=0;

	class WeaponSlotsInfo
	{
		mass = 79.2;
		allowedSlots[] = {901};
		class UnderBarrelSlot: rhs_western_rifle_underbarrel_slot {};
		class CowsSlot: rhs_western_rifle_scopes_slot_long {};
		class PointerSlot: rhs_western_rifle_laser_slot_top {};
		class MuzzleSlot: rhs_western_rifle_muzzle_slot {};
		class GripodSlot: rhs_western_rifle_gripod_slot {};
	};
	modes[] =
	{
		"Single",
		"Single_AI",
		"FullAuto",
		"single_medium_optics1",
		"single_far_optics2"
	};

	class Single : Single
	{
		dispersion = DISPERSION_MOA(2);
	};
	class FullAuto : FullAuto
	{
		reloadTime		= 0.075;
		dispersion		= DISPERSION_MOA(2);
		minRange		= 2;
		minRangeProbab	= 0.9;
		midRange		= 550;
		midRangeProbab	= 0.7;
		maxRange		= 700;
		maxRangeProbab	= 0.3;
		aiRateOfFire	= 1e-006;
	};

	rhs_grip1_change = "rhs_weap_m27iar_grip1";
	rhs_grip2_change = "rhs_weap_m27iar_grip2";
	rhs_grip3_change = "rhs_weap_m27iar_grip3";
	rhsusf_acc_anpeq15 = 1; // 0 - for M4, 1 - for M27IAR/HK with higher top rail

	baseWeapon="rhs_weap_m27iar";
};

class rhs_weap_m27iar_grip: rhs_weap_m27iar
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_weap_m27iar_grip)
	displayName = $STR_RHS_CFGWEAPONS_RIFLE_M27IAR_GRIP;


	model = "\rhsusf\addons\rhsusf_weapons2\M27\rhs_m27iar_grip1.p3d";
	handAnim[] = {"OFP2_ManSkeleton","\rhsusf\addons\rhsusf_c_weapons\anims\rhs_hand_m16a4.rtm"};
	class WeaponSlotsInfo
	{
		mass = 79.2;
		allowedSlots[] = {901};
		class UnderBarrelSlot: rhs_western_rifle_underbarrel_slot {};
		class CowsSlot: rhs_western_rifle_scopes_slot_long {};
		class PointerSlot: rhs_western_rifle_laser_slot_top {};
		class MuzzleSlot: rhs_western_rifle_muzzle_slot {};
	};
	baseWeapon="rhs_weap_m27iar_grip";
};
class rhs_weap_m27iar_grip1: rhs_weap_m27iar
{
	Grip_Macro(1,m16a4)
};
class rhs_weap_m27iar_grip2: rhs_weap_m27iar
{
	class WeaponSlotsInfo: WeaponSlotsInfo
	{
		class GripodSlot: rhs_western_rifle_afg_slot{};
	};
	Grip_Macro(2,m27_afg)
};
class rhs_weap_m27iar_grip3: rhs_weap_m27iar_grip2
{
	class WeaponSlotsInfo: WeaponSlotsInfo
	{
		class GripodSlot: rhs_western_rifle_gripod_slot{};
	};
	Grip_Macro(3,m16a4)
};

////////////M249 VARIANTS////////
class LMG_Mk200_F;

// This is a deprecated class only kept for legacy
class rhs_weap_M249_base : LMG_Mk200_F
{
	dlc = "RHS_USAF";

	hasBipod = 1;
	scope = 0;
	UiPicture = "\A3\weapons_f\data\UI\icon_mg_CA.paa";
	magazines[] =
	{
		//rhs m249 mags
		"rhsusf_100Rnd_556x45_soft_pouch",
		"rhsusf_200Rnd_556x45_soft_pouch",
		"rhsusf_100Rnd_556x45_M200_soft_pouch",

		//rhs STANAG mags
		"rhs_mag_30Rnd_556x45_Mk318_Stanag",
		"rhs_mag_30Rnd_556x45_Mk262_Stanag",

		"rhs_mag_30Rnd_556x45_M855A1_Stanag",
		"rhs_mag_30Rnd_556x45_M855A1_Stanag_No_Tracer",
		"rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red",
		"rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Green",
		"rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Yellow",
		"rhs_mag_30Rnd_556x45_M200_Stanag",

		//bis mags compatibility
		"30Rnd_556x45_Stanag",
		"30Rnd_556x45_Stanag_Tracer_Red",
		"30Rnd_556x45_Stanag_Tracer_Green",
		"30Rnd_556x45_Stanag_Tracer_Yellow"
	};
	reloadAction = "GestureReloadM200";


	cursor = "mg";
	cursorAim = "EmptyCursor";
	nameSound = "Mgun";

	maxRecoilSway = 0.0150;
	swayDecaySpeed = 1.25;
	recoil = "recoil_mk200";
	opticsZoomMin = 0.275;
	opticsZoomMax = 1;
	opticsZoomInit = 0.75;
	distanceZoomMin = 300;
	distanceZoomMax = 300;
	dexterity = 2.8;
	aimTransitionSpeed = 0.5;

	discreteDistance[] = {300,400,500,600,700,800,900,1000};
	discreteDistanceCameraPoint[]={"eye","eye_400","eye_500","eye_600","eye_700","eye_800","eye_900","eye_1000"};
	discreteDistanceInitIndex = 2;
	cameraDir = "eye_look";
	maxZeroing = 1000;

	descriptionShort = "Light Machine Gun<br />Caliber: 5.56x45mm NATO";
	class Library
	{
		libTextDesc = "The M249 provides infantry squads with the heavy volume of fire of a machine gun combined with accuracy and portability approaching that of a rifle.";
	};

	class ItemInfo
	{
		priority = 1;
		RMBhint = "M249";
		onHoverText = "TODO M249 DSS";
	};

	class WeaponSlotsInfo
	{
		mass=151.8;
		allowedSlots[] = {901};
		class CowsSlot: rhs_western_rifle_scopes_slot_short {};
		class PointerSlot: rhs_western_rifle_laser_slot {};
	};

	class GunParticles
	{
		class M249_AmmoBeltLinkEject
		{
			positionName = "ammobeltlinks_start";
			directionName = "ammobeltlinks_end";
			effectName = "MachineGunEject2";
		};
		class M249_556Cartridge
		{
			positionName = "shelleject_start";
			directionName = "shelleject_end";
			effectName = "RHSUSF_556Cartridge";
		};
		class M249_WhiteGas
		{
			positionName = "usti hlavne";
			directionName = "konec hlavne";
			effectName = "RifleAssaultCloud";
		};
		class M249_RHSUSF_BarrelRefract
		{
			positionName = "usti hlavne";
			directionName = "usti hlavne up";
			effectName = "RHSUSF_BarrelRefractHeavy";
		};
	};

	bullet1[] = {"A3\sounds_f\weapons\shells\5_56\metal_556_01.wss", 0.1, 1, 15};
	bullet2[] = {"A3\sounds_f\weapons\shells\5_56\metal_556_02.wss", 0.1, 1, 15};
	bullet3[] = {"A3\sounds_f\weapons\shells\5_56\metal_556_03.wss", 0.177828, 1, 15};
	bullet4[] = {"A3\sounds_f\weapons\shells\5_56\metal_556_04.wss", 0.177828, 1, 15};
	bullet5[] = {"A3\sounds_f\weapons\shells\5_56\asphlat_556_01.wss", 0.1, 1, 15};
	bullet6[] = {"A3\sounds_f\weapons\shells\5_56\asphlat_556_02.wss", 0.1, 1, 15};
	bullet7[] = {"A3\sounds_f\weapons\shells\5_56\asphlat_556_03.wss", 0.1, 1, 15};
	bullet8[] = {"A3\sounds_f\weapons\shells\5_56\asphlat_556_04.wss", 0.1, 1, 15};
	bullet9[] = {"A3\sounds_f\weapons\shells\5_56\grass_556_01.wss", 0.01, 1, 15};
	bullet10[] = {"A3\sounds_f\weapons\shells\5_56\grass_556_02.wss", 0.01, 1, 15};
	bullet11[] = {"A3\sounds_f\weapons\shells\5_56\grass_556_03.wss", 0.01, 1, 15};
	bullet12[] = {"A3\sounds_f\weapons\shells\5_56\grass_556_04.wss", 0.01, 1, 15};
	soundBullet[] = {"bullet1", 0.083, "bullet2", 0.083, "bullet3", 0.083, "bullet4", 0.083, "bullet5", 0.083, "bullet6", 0.083, "bullet7", 0.083, "bullet8", 0.083, "bullet9", 0.083, "bullet10", 0.083, "bullet11", 0.083, "bullet12", 0.083};

	drySound[] = {"A3\sounds_f\weapons\Other\dry_1",0.01,1};
	reloadMagazineSound[] = {"A3\sounds_f\weapons\reloads\new_MX",0.1,1,30};

	modes[]=
	{
		"FullAuto",
		"close",
		"short",
		"medium",
		"far_optic1",
		"far_optic2"
	};
	class FullAuto: Mode_FullAuto
	{
		reloadTime = 0.075;
		dispersion = 0.00101;
		minRange = 0;
		minRangeProbab = 0.3;
		midRange = 5;
		midRangeProbab = 0.7;
		maxRange = 10;
		maxRangeProbab = 0.04;
	};
	class close: FullAuto
	{
		burst=10;
		aiRateOfFire=0.5;
		aiRateOfFireDistance=50;
		aiRateOfFireDispersion = 1;
		minRange=0;
		minRangeProbab=0.05;
		midRange=30;
		midRangeProbab=0.69;
		maxRange=50;
		maxRangeProbab=0.039;
		showToPlayer=0;
	};
	class short: close
	{
		burst=8;
		aiRateOfFire=1;
		aiRateOfFireDistance=300;
		aiRateOfFireDispersion = 2;
		minRange=50;
		minRangeProbab=0.05;
		midRange=150;
		midRangeProbab=0.69;
		maxRange=300;
		maxRangeProbab=0.039;
	};
	class medium: close
	{
		burst=5;
		aiRateOfFire=2;
		aiRateOfFireDistance=600;
		aiRateOfFireDispersion = 2;
		minRange=200;
		minRangeProbab=0.05;
		midRange=400;
		midRangeProbab=0.60000002;
		maxRange=600;
		maxRangeProbab=0.1;
	};
	class far_optic1: close
	{
		requiredOpticType=1;
		showToPlayer=0;
		burst=3;
		aiRateOfFire=5;
		aiRateOfFireDistance=900;
		aiRateOfFireDispersion = 4;
		minRange=350;
		minRangeProbab=0.039;
		midRange=550;
		midRangeProbab=0.5;
		maxRange=700;
		maxRangeProbab=0.0098;
	};
	class far_optic2: far_optic1
	{
		requiredOpticType=2;
		autoFire=0;
		burst=1;
		minRange=400;
		minRangeProbab=0.05;
		midRange=800;
		midRangeProbab=0.5;
		maxRange=1000;
		maxRangeProbab=0.0098;
	};
	inertia=0.8;
};

// New M249 class from HLC pack
class rhs_weap_saw_base : Rifle_Base_F
{
	dlc = "RHS_USAF";

	author = "Toadie";
	scope = 1;
	magazines[] = {};
	weaponInfoType = "rhs_rscOptics_m249";

//Retexture selections: camo1 = receiver_249, camo2 = m249_merged1, camo3 = barrelstock_merged/old, camo4 = ammobox_merged (rear sight shroud), camo5 = buttstock_249_light or Mk1\stock
	hiddenSelections[] = {"camo1","camo2","camo3","camo4","camo5"};
	hiddenSelectionsTextures[] =
	{
		"rhsusf\addons\rhsusf_weapons2\m249\merged\data\reciever_249_co.paa",
		"rhsusf\addons\rhsusf_weapons2\m249\merged\data\m249_merged1_co.paa",
		"rhsusf\addons\rhsusf_weapons2\m249\merged\data\barrelstock_merged_co.paa",
		"rhsusf\addons\rhsusf_weapons2\m249\merged\data\ammobox_merged_co.paa",
		"rhsusf\addons\rhsusf_weapons2\m249\merged\data\mk1\stock_co.paa"
	};
	class GunParticles
	{
		class AmmoBeltLinkEject
		{
			positionName = "linkeject_start";
			directionName = "linkeject_end";
			effectName = "MachineGunEject2";
		};
		/*class CartridgeEject
		{
			positionName = "nabojnicestart";
			directionName = "nabojniceend";
			effectName = "RHSUSF_556Cartridge";
		};*/
		class MuzzleCloud
		{
			positionName = "usti hlavne";
			directionName = "konec hlavne";
			effectName = "RifleAssaultCloud";
		};
		class MuzzleRefract
		{
			positionName = "usti hlavne";
			directionName = "usti hlavne up";
			effectName = "RHSUSF_BarrelRefract";
		};
		class PortCloud
		{
			positionName = "Nabojnicestart";
			directionName = "Nabojniceend";
			effectName = "CaselessAmmoCloud";
		};
	};

	class WeaponSlotsInfo: WeaponSlotsInfo
	{
		mass = 151.8;
		class MuzzleSlot: SlotInfo
		{
			linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
			compatibleItems[] = {};
		};
		class CowsSlot: CowsSlot
		{
			compatibleItems[]={	};
		};

		class PointerSlot: PointerSlot
		{
			compatibleItems[] = {};
		};
	};

	maxRecoilSway		= 0.0150;
	swayDecaySpeed		= 1.25;
	recoil				= "rhs_recoil_m249";
	opticsZoomMin		= 0.275;
	opticsZoomMax		= 1;
	opticsZoomInit		= 0.75;
	distanceZoomMin		= 300;
	distanceZoomMax		= 300;
	dexterity			= 1.8;
	inertia				= 0.8;
	aimTransitionSpeed	= 0.5;

	descriptionShort = "Light Machine Gun<br />Caliber: 5.56x45mm NATO";
	class Library
	{
		libTextDesc = "The M249 provides infantry squads with the heavy volume of fire of a machine gun combined with accuracy and portability approaching that of a rifle.";
	};

	bullet1[] = { "A3\sounds_f\weapons\shells\5_56\metal_556_01.wss", 0.1, 1, 15 };
	bullet2[] = { "A3\sounds_f\weapons\shells\5_56\metal_556_02.wss", 0.1, 1, 15 };
	bullet3[] = { "A3\sounds_f\weapons\shells\5_56\metal_556_03.wss", 0.177828, 1, 15 };
	bullet4[] = { "A3\sounds_f\weapons\shells\5_56\metal_556_04.wss", 0.177828, 1, 15 };
	bullet5[] = { "A3\sounds_f\weapons\shells\5_56\asphlat_556_01.wss", 0.1, 1, 15 };
	bullet6[] = { "A3\sounds_f\weapons\shells\5_56\asphlat_556_02.wss", 0.1, 1, 15 };
	bullet7[] = { "A3\sounds_f\weapons\shells\5_56\asphlat_556_03.wss", 0.1, 1, 15 };
	bullet8[] = { "A3\sounds_f\weapons\shells\5_56\asphlat_556_04.wss", 0.1, 1, 15 };
	bullet9[] = { "A3\sounds_f\weapons\shells\5_56\grass_556_01.wss", 0.01, 1, 15 };
	bullet10[] = { "A3\sounds_f\weapons\shells\5_56\grass_556_02.wss", 0.01, 1, 15 };
	bullet11[] = { "A3\sounds_f\weapons\shells\5_56\grass_556_03.wss", 0.01, 1, 15 };
	bullet12[] = { "A3\sounds_f\weapons\shells\5_56\grass_556_04.wss", 0.01, 1, 15 };
	soundBullet[] = {"bullet1",0.083,"bullet2",0.083,"bullet3",0.083,"bullet4",0.083,"bullet5",0.083,"bullet6",0.083,"bullet7",0.083,"bullet8",0.083,"bullet9",0.083,"bullet10",0.083,"bullet11",0.083,"bullet12",0.083};
	modes[] =
	{
		"FullAuto",
		"close",
		"short",
		"medium",
		"far_optic1",
		"far_optic2"
	};
	class FullAuto: Mode_FullAuto
	{
		reloadTime = 0.075;
		dispersion=0.000261799;
		maxrange = 600;
		maxrangeprobab = 0.05;
		midrange = 300;
		midrangeprobab = 0.7;
		minrange = 1;
		minrangeprobab = 0.3;
		airateoffire = 4;
	};
	class close : FullAuto
	{
		showToPlayer			= 0;
		aiBurstTerminable		= true;
		burst					= 6;
		burstRangeMax			= 12;
		aiRateOfFire			= 0.5;
		aiRateOfFireDistance	= 50;
		minRange				= 0;
		minRangeProbab			= 0.05;
		midRange				= 30;
		midRangeProbab			= 0.69;
		maxRange				= 50;
		maxRangeProbab			= 0.1;
	};
	class short : close
	{
		burst					= 5;
		burstRangeMax			= 12;
		aiRateOfFire			= 1;
		aiRateOfFireDispersion	= 2;
		aiRateOfFireDistance	= 300;
		minRange				= 50;
		minRangeProbab			= 0.4;
		midRange				= 150;
		midRangeProbab			= 0.69;
		maxRange				= 300;
		maxRangeProbab			= 0.1;
	};
	class medium : close
	{
		burst					= 5;
		burstRangeMax			= 10;
		aiRateOfFire			= 2;
		aiRateOfFireDispersion	= 2;
		aiRateOfFireDistance	= 600;
		minRange				= 200;
		minRangeProbab			= 0.1;
		midRange				= 400;
		midRangeProbab			= 0.6;
		maxRange				= 600;
		maxRangeProbab			= 0.1;
	};
	class far_optic1 : close
	{
		requiredOpticType		= 1;
		burst					= 3;
		burstRangeMax			= 6;
		aiRateOfFire			= 5;
		aiRateOfFireDispersion	= 4;
		aiRateOfFireDistance	= 900;
		minRange				= 350;
		minRangeProbab			= 0.039;
		midRange				= 550;
		midRangeProbab			= 0.5;
		maxRange				= 700;
		maxRangeProbab			= 0.1;
	};
	class far_optic2 : far_optic1
	{
		requiredOpticType	= 2;
		autoFire			= 0;
		burst				= 1;
		burstRangeMax		= 3;
		minRange			= 400;
		minRangeProbab		= 0.05;
		midRange			= 800;
		midRangeProbab		= 0.5;
		maxRange			= 1000;
		maxRangeProbab		= 0.1;
	};
	aiDispersionCoefY = 10;
	aiDispersionCoefX = 8;
	muzzles[]={"this","SAFE"};
	class SAFE: RHSUSF_SAFE_BASE
	{
		discreteDistanceCameraPoint[]={"eye"};
		cameraDir = "eye_look";
	};
	magazineReloadSwitchPhase=0.56;
};

class rhs_weap_lmg_minimipara : rhs_weap_saw_base
{
	scope = 0;
	AB_barrelTwist = 7;
	AB_barrelLength = 13.7;
	ACE_barrelTwist = 178;
	ACE_barrelLength = 349;
	initspeed = -0.936216;
	recoil = "rhs_recoil_m249";
	deployedPivot = "deploypoint";       /// what point should be used to be on surface while unfolded
	hasBipod = true;          /// a weapon with bipod obviously has a bipod
	soundBipodDown[] = { "A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_AAF_down", db - 3, 1, 20 }; /// sound of unfolding the bipod
	soundBipodUp[] = { "A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_AAF_up", db - 3, 1, 20 }; /// sound of folding the bipod
	magazines[] = {
		//200 round plastic box mags
		//M855A1
		"rhsusf_200Rnd_556x45_box",
		"rhsusf_200rnd_556x45_mixed_box",
		//M855
		"rhsusf_200rnd_556x45_M855_box",
		"rhsusf_200rnd_556x45_M855_mixed_box"
	};
	magazineWell[] =
	{
		STANAG_556x45,
		CBA_556x45_STANAG,
		CBA_556x45_STANAG_L,
		CBA_556x45_STANAG_XL,
		M249_556x45,
		CBA_556x45_MINIMI
	};

	cursor = "mg";
	cursorAim = "EmptyCursor";
	nameSound = "Mgun";
	model = "\rhsusf\addons\rhsusf_weapons2\M249\merged\m249_pip_L.p3d";
	reloadaction = "rhs_GestureReloadM249STANAG";
	descriptionShort = "Light Machine Gun<br />Caliber: 5.56x45mm NATO";
	drysound[] = { "\rhsusf\addons\rhsusf_weapons2\M249\snd\empty_machineguns", 1, 1, 10 };
	reloadmagazinesound[] = { "\rhsusf\addons\rhsusf_weapons2\M249\snd\saw_reload", 0.5, 1, 20 };
	inertia = 0.75;

	UiPicture = "\A3\weapons_f\data\UI\icon_mg_CA.paa";
	displayName = "FN Minimi Para";

	discreteDistance[] = {300,400,500,600,700,800,900,1000};
	discreteDistanceCameraPoint[]={"eye","eye_400","eye_500","eye_600","eye_700","eye_800","eye_900","eye_1000"};
	discreteDistanceInitIndex = 0;
	cameraDir = "eye_look";
	maxZeroing = 1000;

	handanim[] = { "OFP2_ManSkeleton", "\rhsusf\addons\rhsusf_c_weapons\anims\rhs_hand_m249_standard.rtm" };
	opticszoominit = 0.75;
	opticszoommax = 1.1;
	opticszoommin = 0.275;
	aidispersioncoefx = 21;
	aidispersioncoefy = 24;
	class WeaponSlotsInfo : WeaponSlotsInfo
	{
		mass = 151.27;
		class MuzzleSlot : SlotInfo
		{
			linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
		};
		class asdg_MuzzleSlot_556_minimi : rhs_western_rifle_muzzle_slot{};
	};

	class ItemInfo
	{
		priority = 1;
		RMBhint = "XMC";
		onHoverText = "TODO XMC DSS";
	};
	class FullAuto : FullAuto
	{
		reloadTime = 0.075;
		dispersion = 0.00101;
		minRange = 0;
		minRangeProbab = 0.3;
		midRange = 5;
		midRangeProbab = 0.7;
		maxRange = 10;
		maxRangeProbab = 0.04;
		airateoffire = 4;
	};
};

class rhs_weap_lmg_minimi_railed :rhs_weap_lmg_minimipara
{
	scope = 0;
	model = "\rhsusf\addons\rhsusf_weapons2\M249\merged\m249_pip_L.p3d";
	displayName = "FN Minimi (RIS/Solid Stock)";

	ACE_barrelTwist = 178;
	ACE_barrelLength = 465;
	AB_barrelTwist = 12;
	AB_barrelLength = 18.3;
	inertia = 0.81;
	initspeed = -1;
	hasBipod	= false;          /// a weapon with bipod obviously has a bipod
	class WeaponSlotsInfo
	{
		mass=156.2;
		allowedSlots[] = {901};
		class CowsSlot: rhs_western_rifle_scopes_slot_short {};
		class PointerSlot
		{
			compatibleItems[] = { };
		};
	};
	class LinkedItems
	{
		class LinkedItemsUnder
		{
			slot = "UnderBarrelSlot";
			item = "rhsusf_acc_saw_bipod";
		};
	};
};
class rhs_weap_m249 : rhs_weap_lmg_minimi_railed
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_weap_m249)
	scope = 2;
	model = "\rhsusf\addons\rhsusf_weapons2\M249\merged\m249_mk1.p3d";
	hiddenSelectionsTextures[] =
	{
		"rhsusf\addons\rhsusf_weapons2\m249\merged\data\reciever_249_co.paa",
		"rhsusf\addons\rhsusf_weapons2\m249\merged\data\m249_merged1_co.paa",
		"rhsusf\addons\rhsusf_weapons2\m249\merged\data\barrelstock_old_co.paa",
		"rhsusf\addons\rhsusf_weapons2\m249\merged\data\ammobox_merged_co.paa",
		"rhsusf\addons\rhsusf_weapons2\m249\merged\data\mk1\stock_co.paa"
	};
	displayName = "$STR_RHS_CFGWEAPONS_RIFLE_M249";
	baseWeapon="rhs_weap_m249";
	class WeaponSlotsInfo
	{
		mass=131.67;
		allowedSlots[] = {901};
		class CowsSlot {};
		class PointerSlot
		{
			compatibleItems[] = { };
		};
		class UnderBarrelSlot: rhs_UnderSlot_m249 {};
	};
};
class rhs_weap_m249_pip_S :rhs_weap_lmg_minimi_railed
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_weap_m249_pip_S)
	scope = 2;
	model = "\rhsusf\addons\rhsusf_weapons2\M249\merged\m249_pip_S.p3d";
	displayName = $STR_RHS_CFGWEAPONS_RIFLE_M249PIP_S;

	inertia = 0.71;
	ACE_barrelTwist = 305;
	ACE_barrelLength = 465;
	AB_barrelTwist = 12;
	AB_barrelLength = 18.3;
	initspeed	= -0.953125; //915/960
	class FullAuto : FullAuto
	{
		dispersion = DISPERSION_MOA(3.8);
	};
	class WeaponSlotsInfo
	{
		mass=149.29;
		allowedSlots[] = {901};
		class CowsSlot: rhs_western_rifle_scopes_slot_short
		{
			iconPosition[] = {0.42,0.31};
			iconScale = 0.15;
		};
		class PointerSlot: rhs_western_rifle_laser_slot
		{
			iconPosition[] = {0.36,0.53};
			iconScale = 0.15;
		};
		class MuzzleSlot: rhs_western_rifle_muzzle_slot {};
		class GripodSlot: rhs_western_mg_gripod_slot {};
		class UnderBarrelSlot: rhs_Underslot_m249_ris {};
	};
	baseWeapon="rhs_weap_m249_pip_S";
	rhs_grip1_change = "rhs_weap_m249_pip_S_vfg1";
	rhs_grip2_change = "rhs_weap_m249_pip_S_vfg2";
	rhs_grip3_change = "rhs_weap_m249_pip_S_vfg3";
};

class rhs_weap_m249_pip_S_vfg :rhs_weap_m249_pip_S {};

class rhs_weap_m249_pip_S_vfg1 :rhs_weap_m249_pip_S_vfg
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_weap_m249_pip_S_vfg1)
	scope=1;
	handanim[] = { "OFP2_ManSkeleton", "\rhsusf\addons\rhsusf_c_weapons\anims\rhs_hand_m249_grippod.rtm" };
};

class rhs_weap_m249_pip_S_vfg2 :rhs_weap_m249_pip_S_vfg
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_weap_m249_pip_S_vfg2)
	scope=1;
	handanim[] = { "OFP2_ManSkeleton", "\rhsusf\addons\rhsusf_c_weapons\anims\rhs_hand_m249_VFG.rtm" };
};

class rhs_weap_m249_pip_S_vfg3 :rhs_weap_m249_pip_S_vfg
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_weap_m249_pip_S_vfg3)
	scope=1;
	handanim[] = { "OFP2_ManSkeleton", "\rhsusf\addons\rhsusf_c_weapons\anims\rhs_hand_m249_grippod.rtm" };
};

class rhs_weap_m249_pip_S_para :rhs_weap_m249_pip_S
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_weap_m249_pip_S_para)
	scope = 2;
	model = "\rhsusf\addons\rhsusf_weapons2\M249\merged\m249_pip_S_para.p3d";
	displayName = $STR_RHS_CFGWEAPONS_RIFLE_M249PIP_S_para;
	weaponInfoType = "rhs_rscOptics_m249_para";
	baseWeapon="rhs_weap_m249_pip_S_para";
	class WeaponSlotsInfo : WeaponSlotsInfo
	{
		mass=154.44;
	};
	rhs_grip1_change = "rhs_weap_m249_pip_S_para_vfg1";
	rhs_grip2_change = "rhs_weap_m249_pip_S_para_vfg2";
	rhs_grip3_change = "rhs_weap_m249_pip_S_para_vfg3";
	rhs_fold_checkOptic 	= 0;
	rhs_fold = "rhs_weap_m249_pip_S_para_folded";
};

class rhs_weap_m249_pip_S_para_vfg1 : rhs_weap_m249_pip_S_para
{
	AUTHOR_MACRO
	scope=1;
	handanim[] = { "OFP2_ManSkeleton", "\rhsusf\addons\rhsusf_c_weapons\anims\rhs_hand_m249_grippod.rtm" };
	rhs_fold = "rhs_weap_m249_pip_S_para_folded_vfg1";
};

class rhs_weap_m249_pip_S_para_vfg2 : rhs_weap_m249_pip_S_para
{
	AUTHOR_MACRO
	scope=1;
	handanim[] = { "OFP2_ManSkeleton", "\rhsusf\addons\rhsusf_c_weapons\anims\rhs_hand_m249_VFG.rtm" };
	rhs_fold = "rhs_weap_m249_pip_S_para_folded_vfg2";
};

class rhs_weap_m249_pip_S_para_vfg3 : rhs_weap_m249_pip_S_para
{
	AUTHOR_MACRO
	scope=1;
	handanim[] = { "OFP2_ManSkeleton", "\rhsusf\addons\rhsusf_c_weapons\anims\rhs_hand_m249_grippod.rtm" };
	rhs_fold = "rhs_weap_m249_pip_S_para_folded_vfg3";
};

class rhs_weap_m249_pip_S_para_folded : rhs_weap_m249_pip_S_para
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_weap_m249_pip_S_para_folded)
	scope = 1;
	model = "\rhsusf\addons\rhsusf_weapons2\M249\merged\m249_pip_S_para_folded.p3d";
	class WeaponSlotsInfo: WeaponSlotsInfo
	{
		mass			= 150.44;
	};
	recoil = "rhs_recoil_m240";
	rhs_grip1_change = "rhs_weap_m249_pip_S_para_folded_vfg1";
	rhs_grip2_change = "rhs_weap_m249_pip_S_para_folded_vfg2";
	rhs_grip3_change = "rhs_weap_m249_pip_S_para_folded_vfg3";
	rhs_fold = "rhs_weap_m249_pip_S_para";
};

class rhs_weap_m249_pip_S_para_folded_vfg1 : rhs_weap_m249_pip_S_para_folded
{
	AUTHOR_MACRO
	scope=1;
	handanim[] = { "OFP2_ManSkeleton", "\rhsusf\addons\rhsusf_c_weapons\anims\rhs_hand_m249_grippod.rtm" };
	rhs_fold = "rhs_weap_m249_pip_S_para_vfg1";
};

class rhs_weap_m249_pip_S_para_folded_vfg2 : rhs_weap_m249_pip_S_para_folded
{
	AUTHOR_MACRO
	scope=1;
	handanim[] = { "OFP2_ManSkeleton", "\rhsusf\addons\rhsusf_c_weapons\anims\rhs_hand_m249_VFG.rtm" };
	rhs_fold = "rhs_weap_m249_pip_S_para_vfg2";
};

class rhs_weap_m249_pip_S_para_folded_vfg3 : rhs_weap_m249_pip_S_para_folded
{
	AUTHOR_MACRO
	scope=1;
	handanim[] = { "OFP2_ManSkeleton", "\rhsusf\addons\rhsusf_c_weapons\anims\rhs_hand_m249_grippod.rtm" };
	rhs_fold = "rhs_weap_m249_pip_S_para_vfg3";
};

class rhs_weap_m249_light_S :rhs_weap_m249_pip_S
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_weap_m249_light_S)
	scope = 2;
	model = "\rhsusf\addons\rhsusf_weapons2\M249\merged\m249_light_S.p3d";
	displayName = $STR_RHS_CFGWEAPONS_RIFLE_M249LIGHT_S;
	hiddenSelectionsTextures[] =
	{
		"rhsusf\addons\rhsusf_weapons2\m249\merged\data\reciever_249_light_co.paa",
		"rhsusf\addons\rhsusf_weapons2\m249\merged\data\m249_merged1_co.paa",
		"rhsusf\addons\rhsusf_weapons2\m249\merged\data\barrelstock_merged_co.paa",
		"rhsusf\addons\rhsusf_weapons2\m249\merged\data\ammobox_merged_co.paa",
		"rhsusf\addons\rhsusf_weapons2\m249\merged\data\buttstock_249_light_co.paa"
	};
	baseWeapon="rhs_weap_m249_light_S";
	class WeaponSlotsInfo : WeaponSlotsInfo
	{
		mass=144.34;
	};
	class LinkedItems
	{
		class LinkedItemsUnder
		{
			slot = "UnderBarrelSlot";
			item = "rhsusf_acc_saw_lw_bipod";
		};
	};
	rhs_grip1_change = "rhs_weap_m249_light_S_vfg1";
	rhs_grip2_change = "rhs_weap_m249_light_S_vfg2";
	rhs_grip3_change = "rhs_weap_m249_light_S_vfg3";
};

class rhs_weap_m249_light_S_vfg1 : rhs_weap_m249_light_S
{
	AUTHOR_MACRO
	scope=1;
	handanim[] = { "OFP2_ManSkeleton", "\rhsusf\addons\rhsusf_c_weapons\anims\rhs_hand_m249_grippod.rtm" };
};

class rhs_weap_m249_light_S_vfg2 : rhs_weap_m249_light_S
{
	AUTHOR_MACRO
	scope=1;
	handanim[] = { "OFP2_ManSkeleton", "\rhsusf\addons\rhsusf_c_weapons\anims\rhs_hand_m249_VFG.rtm" };
};

class rhs_weap_m249_light_S_vfg3 : rhs_weap_m249_light_S
{
	AUTHOR_MACRO
	scope=1;
	handanim[] = { "OFP2_ManSkeleton", "\rhsusf\addons\rhsusf_c_weapons\anims\rhs_hand_m249_grippod.rtm" };
};

// Legacy
class rhs_weap_m249_pip : rhs_weap_lmg_minimi_railed
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_weap_m249_pip)
	scope = 2;
	model = "\rhsusf\addons\rhsusf_weapons2\M249\merged\m249_L.p3d";
	hiddenSelectionsTextures[] =
	{
		"rhsusf\addons\rhsusf_weapons2\m249\merged\data\reciever_249_co.paa",
		"rhsusf\addons\rhsusf_weapons2\m249\merged\data\m249_merged1_co.paa",
		"rhsusf\addons\rhsusf_weapons2\m249\merged\data\barrelstock_old_co.paa",
		"rhsusf\addons\rhsusf_weapons2\m249\merged\data\ammobox_merged_co.paa",
		"rhsusf\addons\rhsusf_weapons2\m249\merged\data\mk1\stock_co.paa"
	};
	displayName = "$STR_RHS_CFGWEAPONS_RIFLE_M249PIP";
	baseWeapon="rhs_weap_m249_pip";
	class WeaponSlotsInfo
	{
		mass=148.50;
		allowedSlots[] = {901};
		class MuzzleSlot: rhs_western_rifle_muzzle_slot {};
		class CowsSlot: rhs_western_rifle_scopes_slot_short {};
		class PointerSlot
		{
			compatibleItems[] = { };
		};
		class UnderBarrelSlot: rhs_UnderSlot_m249 {};
	};
};

class rhs_weap_m249_pip_ris :rhs_weap_m249_pip
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_weap_m249_pip_ris)
	model = "\rhsusf\addons\rhsusf_weapons2\M249\merged\m249_L_ris.p3d";
	displayName = $STR_RHS_CFGWEAPONS_RIFLE_M249PIP_RIS;
	baseWeapon="rhs_weap_m249_pip_ris";

	class WeaponSlotsInfo: WeaponSlotsInfo
	{
		mass=161.37;
		class PointerSlot: rhs_western_rifle_laser_slot
		{
			iconPosition[] = {0.36,0.53};
			iconScale = 0.15;
		};
		class GripodSlot: rhs_western_mg_gripod_slot {};
		class UnderBarrelSlot: rhs_Underslot_m249_ris {};
	};

	rhs_grip1_change = "rhs_weap_m249_pip_vfg1";
	rhs_grip2_change = "rhs_weap_m249_pip_vfg2";
	rhs_grip3_change = "rhs_weap_m249_pip_vfg3";
};

class rhs_weap_m249_pip_vfg1 :rhs_weap_m249_pip_ris
{
	AUTHOR_MACRO
	scope = 1;
	handanim[] = { "OFP2_ManSkeleton", "\rhsusf\addons\rhsusf_c_weapons\anims\rhs_hand_m249_grippod.rtm" };
};

class rhs_weap_m249_pip_vfg2 :rhs_weap_m249_pip_ris
{
	AUTHOR_MACRO
	scope = 1;
	handanim[] = { "OFP2_ManSkeleton", "\rhsusf\addons\rhsusf_c_weapons\anims\rhs_hand_m249_VFG.rtm" };
};

class rhs_weap_m249_pip_vfg3 :rhs_weap_m249_pip_ris
{
	AUTHOR_MACRO
	scope = 1;
	handanim[] = { "OFP2_ManSkeleton", "\rhsusf\addons\rhsusf_c_weapons\anims\rhs_hand_m249_grippod.rtm" };
};

class rhs_weap_m249_pip_L :rhs_weap_lmg_minimi_railed
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_weap_m249_pip_L)
	scope = 2;
	model = "\rhsusf\addons\rhsusf_weapons2\M249\merged\m249_pip_L.p3d";
	displayName = $STR_RHS_CFGWEAPONS_RIFLE_M249PIP_L;
	class WeaponSlotsInfo
	{
		mass=161.37;
		allowedSlots[] = {901};

		class GripodSlot: rhs_western_mg_gripod_slot {};
		class UnderBarrelSlot: rhs_Underslot_m249_ris {};
		class MuzzleSlot: rhs_western_rifle_muzzle_slot {};
		class CowsSlot: rhs_western_rifle_scopes_slot_short
		{
			iconPosition[] = {0.42,0.31};
			iconScale = 0.15;
		};
		class PointerSlot: rhs_western_rifle_laser_slot
		{
			iconPosition[] = {0.36,0.53};
			iconScale = 0.15;
		};
	};
	baseWeapon="rhs_weap_m249_pip_L";
	rhs_grip1_change = "rhs_weap_m249_pip_L_vfg1";
	rhs_grip2_change = "rhs_weap_m249_pip_L_vfg2";
	rhs_grip3_change = "rhs_weap_m249_pip_L_vfg3";
};

class rhs_weap_m249_pip_L_vfg :rhs_weap_m249_pip_L {};

class rhs_weap_m249_pip_L_vfg1 :rhs_weap_m249_pip_L_vfg
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_weap_m249_pip_L_vfg1)
	scope = 1;
	handanim[] = { "OFP2_ManSkeleton", "\rhsusf\addons\rhsusf_c_weapons\anims\rhs_hand_m249_grippod.rtm" };
};

class rhs_weap_m249_pip_L_vfg2 :rhs_weap_m249_pip_L_vfg
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_weap_m249_pip_L_vfg2)
	scope = 1;
	handanim[] = { "OFP2_ManSkeleton", "\rhsusf\addons\rhsusf_c_weapons\anims\rhs_hand_m249_VFG.rtm" };
};

class rhs_weap_m249_pip_L_vfg3 :rhs_weap_m249_pip_L_vfg
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_weap_m249_pip_L_vfg3)
	scope = 1;
	handanim[] = { "OFP2_ManSkeleton", "\rhsusf\addons\rhsusf_c_weapons\anims\rhs_hand_m249_grippod.rtm" };
};

class rhs_weap_m249_pip_L_para :rhs_weap_m249_pip_L
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_weap_m249_pip_L_para)
	model = "\rhsusf\addons\rhsusf_weapons2\M249\merged\m249_pip_L_para.p3d";
	displayName = $STR_RHS_CFGWEAPONS_RIFLE_M249PIP_L_para;
	weaponInfoType = "rhs_rscOptics_m249_para";

	baseWeapon="rhs_weap_m249_pip_L_para";
	class WeaponSlotsInfo : WeaponSlotsInfo
	{
		mass=156.42;
	};
	rhs_grip1_change = "rhs_weap_m249_pip_L_para_vfg1";
	rhs_grip2_change = "rhs_weap_m249_pip_L_para_vfg2";
	rhs_grip3_change = "rhs_weap_m249_pip_L_para_vfg3";
	rhs_fold_checkOptic 	= 0;
	rhs_fold = "rhs_weap_m249_pip_L_para_folded";
};

class rhs_weap_m249_pip_L_para_vfg1 : rhs_weap_m249_pip_L_para
{
	AUTHOR_MACRO
	scope = 1;
	handanim[] = { "OFP2_ManSkeleton", "\rhsusf\addons\rhsusf_c_weapons\anims\rhs_hand_m249_grippod.rtm" };
	rhs_fold = "rhs_weap_m249_pip_L_para_folded_vfg1";
};

class rhs_weap_m249_pip_L_para_vfg2 : rhs_weap_m249_pip_L_para
{
	AUTHOR_MACRO
	scope = 1;
	handanim[] = { "OFP2_ManSkeleton", "\rhsusf\addons\rhsusf_c_weapons\anims\rhs_hand_m249_VFG.rtm" };
	rhs_fold = "rhs_weap_m249_pip_L_para_folded_vfg2";
};

class rhs_weap_m249_pip_L_para_vfg3 : rhs_weap_m249_pip_L_para
{
	AUTHOR_MACRO
	scope = 1;
	handanim[] = { "OFP2_ManSkeleton", "\rhsusf\addons\rhsusf_c_weapons\anims\rhs_hand_m249_grippod.rtm" };
	rhs_fold = "rhs_weap_m249_pip_L_para_folded_vfg3";
};

class rhs_weap_m249_pip_L_para_folded : rhs_weap_m249_pip_L_para
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_weap_m249_pip_L_para_folded)
	model = "\rhsusf\addons\rhsusf_weapons2\M249\merged\m249_pip_L_para_folded.p3d";
	class WeaponSlotsInfo: WeaponSlotsInfo
	{
		mass			= 150.44;
	};
	recoil = "rhs_recoil_m240";
	rhs_fold = "rhs_weap_m249_pip_L_para";
};

class rhs_weap_m249_pip_L_para_folded_vfg1 : rhs_weap_m249_pip_L_para_folded
{
	AUTHOR_MACRO
	scope = 1;
	handanim[] = { "OFP2_ManSkeleton", "\rhsusf\addons\rhsusf_c_weapons\anims\rhs_hand_m249_grippod.rtm" };
	rhs_fold = "rhs_weap_m249_pip_L_para_vfg1";
};

class rhs_weap_m249_pip_L_para_folded_vfg2 : rhs_weap_m249_pip_L_para_folded
{
	AUTHOR_MACRO
	scope = 1;
	handanim[] = { "OFP2_ManSkeleton", "\rhsusf\addons\rhsusf_c_weapons\anims\rhs_hand_m249_VFG.rtm" };
	rhs_fold = "rhs_weap_m249_pip_L_para_vfg2";
};

class rhs_weap_m249_pip_L_para_folded_vfg3 : rhs_weap_m249_pip_L_para_folded
{
	AUTHOR_MACRO
	scope = 1;
	handanim[] = { "OFP2_ManSkeleton", "\rhsusf\addons\rhsusf_c_weapons\anims\rhs_hand_m249_grippod.rtm" };
	rhs_fold = "rhs_weap_m249_pip_L_para_vfg3";
};

class rhs_weap_m249_light_L :rhs_weap_m249_pip_L
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_weap_m249_light_L)
	scope = 2;
	model = "\rhsusf\addons\rhsusf_weapons2\M249\merged\m249_light_L.p3d";
	displayName = $STR_RHS_CFGWEAPONS_RIFLE_M249LIGHT_L;
	hiddenSelectionsTextures[] =
	{
		"rhsusf\addons\rhsusf_weapons2\m249\merged\data\reciever_249_light_co.paa",
		"rhsusf\addons\rhsusf_weapons2\m249\merged\data\m249_merged1_co.paa",
		"rhsusf\addons\rhsusf_weapons2\m249\merged\data\barrelstock_merged_co.paa",
		"rhsusf\addons\rhsusf_weapons2\m249\merged\data\ammobox_merged_co.paa",
		"rhsusf\addons\rhsusf_weapons2\m249\merged\data\buttstock_249_light_co.paa"
	};
	baseWeapon="rhs_weap_m249_light_L";
	class WeaponSlotsInfo : WeaponSlotsInfo
	{
		mass=146.32;
	};
	class LinkedItems
	{
		class LinkedItemsUnder
		{
			slot = "UnderBarrelSlot";
			item = "rhsusf_acc_saw_lw_bipod";
		};
	};
	rhs_grip1_change = "rhs_weap_m249_light_L_vfg1";
	rhs_grip2_change = "rhs_weap_m249_light_L_vfg2";
	rhs_grip3_change = "rhs_weap_m249_light_L_vfg3";
};

class rhs_weap_m249_light_L_vfg1 : rhs_weap_m249_light_L
{
	AUTHOR_MACRO
	scope=1;
	handanim[] = { "OFP2_ManSkeleton", "\rhsusf\addons\rhsusf_c_weapons\anims\rhs_hand_m249_grippod.rtm" };
};

class rhs_weap_m249_light_L_vfg2 : rhs_weap_m249_light_L
{
	AUTHOR_MACRO
	scope=1;
	handanim[] = { "OFP2_ManSkeleton", "\rhsusf\addons\rhsusf_c_weapons\anims\rhs_hand_m249_VFG.rtm" };
};

class rhs_weap_m249_light_L_vfg3 : rhs_weap_m249_light_L
{
	AUTHOR_MACRO
	scope=1;
	handanim[] = { "OFP2_ManSkeleton", "\rhsusf\addons\rhsusf_c_weapons\anims\rhs_hand_m249_grippod.rtm" };
};

class rhs_weap_m240_base : rhs_weap_M249_base
{
	scope = 0;
	model="\rhsusf\addons\rhsusf_weapons2\M240\M240B.p3d";

	hiddenSelections[] = {"camo1","camo2","camo3"};
	hiddenSelectionsTextures[] =
	{
		"\rhsusf\addons\rhsusf_weapons2\m240\data\m240b_2k_co.paa",
		"\rhsusf\addons\rhsusf_weapons2\m240\data\m240b_4k_co.paa",
		"\rhsusf\addons\rhsusf_weapons2\m240\data\m240_co.paa"
	};

	UiPicture="";
	displayName = "M240B";
	recoil = "rhs_recoil_m240";

	cursor = "mg";
	cursorAim = "EmptyCursor";
	nameSound = "Mgun";

	reloadAction = "GestureReloadMMG02";
	changeFiremodeSound[] = {"A3\sounds_f\weapons\closure\firemode_changer_2",0.551189,1,5};

	discreteDistance[]={200,300,400,500,600,700,800};
	discreteDistanceCameraPoint[]=
	{
		"eye",
		"eye_300",
		"eye_400",
		"eye_500",
		"eye_600",
		"eye_700",
		"eye_800"
	};
	discreteDistanceInitIndex=0;
	maxZeroing = 800;

	handAnim[] = {"OFP2_ManSkeleton","\rhsusf\addons\rhsusf_c_weapons\anims\rhs_hand_m240.rtm"};
	class WeaponSlotsInfo: WeaponSlotsInfo
	{
		class MuzzleSlot: asdg_MuzzleSlot_762MG{};
		mass = 275;
		class PointerSlot {};
		class UnderBarrelSlot: rhs_UnderSlot_m240 {};
	};

	class GunParticles
	{
		class M240_AmmoBeltLinkEject
		{
			positionName = "ammobeltlinks_start";
			directionName = "ammobeltlinks_end";
			effectName = "MachineGunEject2";
		};
		class M240_AmmoBeltCaseEject
		{
			positionName = "shelleject_start";
			directionName = "shelleject_end";
			effectName = "RHSUSF_762Cartridge";
		};
		class M240_WhiteGas
		{
			positionName = "usti hlavne";
			directionName = "konec hlavne";
			effectName = "RifleAssaultCloud";
		};
		class M240_RHSUSF_BarrelRefract
		{
			positionName = "usti hlavne";
			directionName = "usti hlavne up";
			effectName = "RHSUSF_BarrelRefractHeavy";
		};
	};

	muzzles[]={"this","SAFE"};
	class SAFE: RHSUSF_SAFE_BASE
	{
		discreteDistanceCameraPoint[]={"eye"};
		cameraDir = "eye_look";
	};
	modes[]=
	{
		"manual",
		"close",
		"short",
		"medium",
		"far"
	};

	class manual: Mode_FullAuto
	{
		// reloadTime = 0.0075;
		dispersion=0.0008; // 0.0038;
		soundContinuous = 0;
		soundBurst = false;
		minRange=0;minRangeProbab=0.30;
		midRange=5;midRangeProbab=0.58;
		maxRange=10;maxRangeProbab=0.04;
		showToPlayer = true;
	};

	class close: manual
	{
		aiBurstTerminable 		= true;
		burst = 10;
		burstRangeMax = 4;
		aiRateOfFire = 0.5;
		aiRateOfFireDispersion = 2;
		aiRateOfFireDistance = 50;
		minRange=10;minRangeProbab=0.05;
		midRange=20;midRangeProbab=0.58;
		maxRange=50;maxRangeProbab=0.04;
		showToPlayer = false;
	};

	class short: close
	{
		burst=5;
		burstRangeMax = 10;
		aiRateOfFire = 1;
		aiRateOfFireDispersion = 2;
		aiRateOfFireDistance = 300; //Rg 200;
		minRange=50;minRangeProbab=0.05;
		midRange=150;midRangeProbab=0.58; //Rg 100;
		maxRange=300;maxRangeProbab=0.04; //Rg 200;
	};

	class medium: close
	{
		burst=7;
		burstRangeMax = 14;
		aiRateOfFire = 2; //Rg 4;
		aiRateOfFireDistance = 600; //Rg 400;
		aiRateOfFireDispersion = 2;
		minRange=200;minRangeProbab=0.05;
		midRange=400;midRangeProbab=0.58; //Rg 300;
		maxRange=600;maxRangeProbab=0.04; //Rg 400;
	};

	class far: close
	{
		burst=8;
		burstRangeMax = 16;
		aiRateOfFire = 2; //Rg 7;
		aiRateOfFireDistance = 1000; //Rg 600;
		aiRateOfFireDispersion = 3;
		minRange=400;minRangeProbab=0.05;
		midRange=600;midRangeProbab=0.4; //Rg 500;
		maxRange=900;maxRangeProbab=0.01; //Rg 600;
	};
	aiDispersionCoefY=21.0;
	aiDispersionCoefX=21.0;

	inertia=0.9;
	dexterity = 0.51;
	aimTransitionSpeed = 0.5;

	magazines[]=
	{
		"rhsusf_100Rnd_762x51", // M80
		"rhsusf_100Rnd_762x51_m61_ap",
		"rhsusf_100Rnd_762x51_m62_tracer",
		"rhsusf_100Rnd_762x51_m80a1epr",
		"rhsusf_100Rnd_762x51_m82_blank",

		"rhsusf_50Rnd_762x51", // M80
		"rhsusf_50Rnd_762x51_m61_ap",
		"rhsusf_50Rnd_762x51_m62_tracer",
		"rhsusf_50Rnd_762x51_m80a1epr",
		"rhsusf_50Rnd_762x51_m82_blank",

		// M993 kept for retrocompability only, the M240 does NOT use M993
		"rhsusf_50Rnd_762x51_m993",
		"rhsusf_100Rnd_762x51_m993"
	};
	magazineWell[] =
	{
		M240_762x51,
		CBA_762x51_LINKS
	};

	descriptionShort = "General Purpose Machine Gun<br />Caliber: 7.62x51mm NATO";
	class Library
	{
		libTextDesc = "The M240 is the US military designation for the FN MAG, a family of belt-fed, gas-operated medium machine guns.";
	};
	magazineReloadSwitchPhase=0.30;

	rhs_deployedHandAnim = "RHS_GestureHoldM240";
};

class rhs_weap_m240B : rhs_weap_m240_base
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_weap_m240B)
	scope = 2;
	displayName = "M240B";

	model = "\rhsusf\addons\rhsusf_weapons2\M240\M240B.p3d";
	weaponInfoType = "rhs_m240b_handler";

	class WeaponSlotsInfo : WeaponSlotsInfo
	{
		class PointerSlot: rhs_western_rifle_laser_slot{};
	};

	baseWeapon="rhs_weap_m240B";
};

class rhs_weap_m240G : rhs_weap_m240_base
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_weap_m240G)
	scope = 2;
	displayName = "M240G";

	model = "\rhsusf\addons\rhsusf_weapons2\M240\M240G.p3d";
	weaponInfoType = "rhs_m240g_handler";

	hiddenSelectionsTextures[] =
	{
		"\rhsusf\addons\rhsusf_weapons2\m240\data\m240g_2k_co.paa",
		"\rhsusf\addons\rhsusf_weapons2\m240\data\m240g_4k_co.paa",
		"\rhsusf\addons\rhsusf_weapons2\m240\data\m240_co.paa"
	};

	baseWeapon="rhs_weap_m240G";
	class WeaponSlotsInfo : WeaponSlotsInfo
	{
		mass = 255.2;
	};
};

class rhs_weap_m240B_CAP : rhs_weap_m240B
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_weap_m240B_CAP)
	scope = 1;
	displayName = "M240B (CAP)";
	weaponInfoType = "rhs_m240b_cap_handler";
	magazines[]=
	{
		"rhsusf_50Rnd_762x51", // M80
		"rhsusf_50Rnd_762x51_m61_ap",
		"rhsusf_50Rnd_762x51_m62_tracer",
		"rhsusf_50Rnd_762x51_m80a1epr",
		"rhsusf_50Rnd_762x51_m82_blank",
	};
};

class rhs_weap_m14_base : srifle_EBR_F
{
	scope						= 1;
	dlc							= "RHS_USAF";
	displayname					= "M14";
	model						= "\rhsusf\addons\rhsusf_weapons3\M14\RHS_M14_base.p3d";
	hiddenSelections[]			= {"camo"};
	hiddenSelectionsTextures[]	= {"rhsusf\addons\rhsusf_weapons3\m14\data\m14_base_co.paa"};

	htMin	= 1;
	htMax	= 420;
	afMax	= 0;
	mfMax	= 0;
	mFact	= 1;
	tBody	= 100;

	discreteDistance[]={100,200,300,400,500,600,700,800,900,1000,1100,1200};
	discreteDistanceCameraPoint[]=
	{
		"eye",
		"eye_200",
		"eye_300",
		"eye_400",
		"eye_500",
		"eye_600",
		"eye_700",
		"eye_800",
		"eye_900",
		"eye_1000",
		"eye_1100",
		"eye_1200",
	};
	discreteDistanceInitIndex=1;
	cameraDir = "eye_look";
	maxZeroing = 1200;

	class WeaponSlotsInfo
	{
		mass = 90.2;
		allowedSlots[] = {901};
		class MuzzleSlot: rhs_western_m14_muzzle_slot {};
		class UnderBarrelSlot: rhs_western_m14_underbarrel_slot {};
	};

	reloadAction				= "GestureReloadDMR06";
	reloadMagazineSound[]		= {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_06_Mk14\DMR_06_reload",db0, 1, 10};
	//handAnim[]					= {"OFP2_ManSkeleton","O:\Repository\Arma3\temp\handpack\rhs_hand_m144.rtm"};
	handAnim[]					= {"OFP2_ManSkeleton","rhsusf\addons\rhsusf_c_weapons\anims\rhs_hand_m14.rtm"};
	magazineReloadSwitchPhase	= 0.33;
	magazines[] =
	{
		rhsusf_20Rnd_762x51_m80_Mag,
		rhsusf_20Rnd_762x51_m118_special_Mag,
		rhsusf_20Rnd_762x51_m993_Mag,
		rhsusf_20Rnd_762x51_m62_Mag
	};
	magazineWell[] =
	{
		M14_762x51,
		CBA_762x51_M14,
		CBA_762x51_M14_L,
		CBA_762x51_M14_XL
	};
	weaponInfoType = rhs_rscOptics_mk14;

	opticsZoomMin = 0.275;

	inertia = 0.8;
	dexterity = 1.53;
	aimTransitionSpeed = 0.75;
	reloadTime=2;
	recoil = "rhs_recoil_m14";

	muzzles[]={"this","SAFE"};
	class SAFE: RHSUSF_SAFE_BASE
	{
		discreteDistanceCameraPoint[]={"eye"};
		cameraDir = "eye_look";
	};
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
	modes[] =
	{
		"Single",
		"FullAuto",
		"single_close_optics1",
		"single_medium_optics1",
		"single_far_optics1"
	};
	class Single: Mode_SemiAuto
	{
		reloadTime		= __EVAL(60/725);
		dispersion		= 0.00058; // 2MOA

		minRange		= 2;
		minRangeProbab	= 0.3;
		midRange		= 350;
		midRangeProbab	= 0.7;
		maxRange		= 500;
		maxRangeProbab	= 0.05;
	};
	class FullAuto : Mode_FullAuto
	{
		reloadTime		= __EVAL(60/725);
		dispersion		= 0.00058;
		minRange		= 0;
		minRangeProbab	= 0.9;
		midRange		= 15;
		midRangeProbab	= 0.7;
		maxRange		= 30;
		maxRangeProbab	= 0.1;
		aiRateOfFire	= 1e-006;
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
		maxRangeProbab			= 0.01;
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
};
class rhs_weap_m14_rail_base : rhs_weap_m14_base
{
	model		= "\rhsusf\addons\rhsusf_weapons3\M14\RHS_M14_RAIL.p3d";
	displayname = "M14 (Rail)";
	class WeaponSlotsInfo: WeaponSlotsInfo
	{
		mass = 95.2;
		allowedSlots[] = {901};
		class CowsSlot: rhs_western_rifle_scopes_slot_short
		{
			class compatibleItems: compatibleItems{
				rhsusf_acc_LEUPOLDMK4_2=0;
				rhsusf_acc_LEUPOLDMK4_2_d=0;
				rhsusf_acc_LEUPOLDMK4_2_MRDS=0;
			};
		};
	};
};
class rhs_weap_m14_ris_base : rhs_weap_m14_rail_base
{
	model		= "\rhsusf\addons\rhsusf_weapons3\M14\RHS_M14_RIS.p3d";
	displayname = "M14 (RIS)";
	class WeaponSlotsInfo: WeaponSlotsInfo
	{
		class PointerSlot: rhs_western_rifle_laser_slot {};
		class CowsSlot: rhs_western_rifle_scopes_slot_long {
			class compatibleItems: compatibleItems{
				rhsusf_acc_premier_anpvs27=0;
				rhsusf_acc_T1_low_fwd = 0;
				rhsusf_acc_T1_low_fwd_ak = 0;
				rhsusf_acc_RM05_fwd = 0;
				rhsusf_acc_RM05_fwd_ak = 0;
				rhsusf_acc_mrds_fwd = 0;
				rhsusf_acc_mrds_fwd_ak = 0;
				rhsusf_acc_mrds_fwd_c = 0;
				rhsusf_acc_mrds_fwd_c_ak = 0;
			};
		};
	};
};
class rhs_weap_m14_socom_base : rhs_weap_m14_base
{
	model		= "\rhsusf\addons\rhsusf_weapons3\M14\RHS_M14_SOCOM.p3d";
	hiddenSelectionsTextures[] = {"rhsusf\addons\rhsusf_weapons3\m14\data\m14_socom_co.paa"};
	displayname = "SOCOM 16";
	initSpeed = -0.97; //16.5 inch barrel
	class WeaponSlotsInfo: WeaponSlotsInfo
	{
		mass = 77.2;
		allowedSlots[] = {901};
		class CowsSlot: rhs_western_rifle_scopes_slot_short
		{
			class compatibleItems: compatibleItems{
				rhsusf_acc_LEUPOLDMK4_2=0;
				rhsusf_acc_LEUPOLDMK4_2_d=0;
				rhsusf_acc_LEUPOLDMK4_2_MRDS=0;
			};
		};
	};
	inertia = 0.4;
	class LinkedItems
	{
		class LinkedItemsUnder
		{
			slot = "MuzzleSlot";
			item = "rhsusf_acc_m14_flashsuppresor";
		};
	};
	class Single: Single
	{
		dispersion=0.00075;
	};
	class FullAuto: FullAuto
	{
		dispersion=0.00075;
	};
};
class rhs_weap_m14_socom_rail_base : rhs_weap_m14_socom_base
{
	model		= "\rhsusf\addons\rhsusf_weapons3\M14\RHS_M14_SOCOM_RAIL.p3d";
	displayname = "SOCOM 16 (Rail)";
	class WeaponSlotsInfo: WeaponSlotsInfo
	{
		mass = 83.2;
		allowedSlots[] = {901};
		class PointerSlot: rhs_western_rifle_laser_slot {};
		class CowsSlot: rhs_western_rifle_scopes_slot_short
		{
			class compatibleItems: compatibleItems{
				rhsusf_acc_LEUPOLDMK4_2=0;
				rhsusf_acc_LEUPOLDMK4_2_d=0;
				rhsusf_acc_LEUPOLDMK4_2_MRDS=0;
			};
		};
	};
};
#define TEXTURE_M14_WDL hiddenSelectionsTextures[]	= {"rhsusf\addons\rhsusf_weapons3\m14\data\m14_wdl_co.paa"};
#define TEXTURE_M14_DES hiddenSelectionsTextures[]	= {"rhsusf\addons\rhsusf_weapons3\m14\data\m14_des_co.paa"};
#define TEXTURE_M14_FIBERGLASS hiddenSelectionsTextures[]	= {"rhsusf\addons\rhsusf_weapons3\m14\data\m14_fiberglass_co.paa"};

class rhs_weap_m14: rhs_weap_m14_base
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_weap_m14)
	baseweapon = rhs_weap_m14;
	scope		= 2;
};

class rhs_weap_m14_wd: rhs_weap_m14
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_weap_m14_wd)
	baseweapon	= rhs_weap_m14_wd;
	displayname = "M14 (Woodland)";
	TEXTURE_M14_WDL
};
class rhs_weap_m14_d: rhs_weap_m14
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_weap_m14_d)
	baseweapon = rhs_weap_m14_d;
	displayname = "M14 (Desert)";
	TEXTURE_M14_DES
};
class rhs_weap_m14_fiberglass: rhs_weap_m14
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_weap_m14_fiberglass)
	baseweapon = rhs_weap_m14_fiberglass;
	displayname = "M14 (Fiberglass)";
	TEXTURE_M14_FIBERGLASS
};

class rhs_weap_m14_rail: rhs_weap_m14_rail_base
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_weap_m14_rail)
	baseweapon = rhs_weap_m14_rail;
	scope		= 2;
};
class rhs_weap_m14_rail_wd: rhs_weap_m14_rail
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_weap_m14_rail_wd)
	baseweapon = rhs_weap_m14_rail_wd;
	displayname = "M14 (Rail/Woodland)";
	TEXTURE_M14_WDL
};
class rhs_weap_m14_rail_d: rhs_weap_m14_rail
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_weap_m14_rail_d)
	baseweapon = rhs_weap_m14_rail_d;
	displayname = "M14 (Rail/Desert)";
	TEXTURE_M14_DES
};
class rhs_weap_m14_rail_fiberglass: rhs_weap_m14_rail
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_weap_m14_rail_fiberglass)
	baseweapon = rhs_weap_m14_rail_fiberglass;
	displayname = "M14 (Rail/Fiberglass)";
	TEXTURE_M14_FIBERGLASS
};

class rhs_weap_m14_ris: rhs_weap_m14_ris_base
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_weap_m14_ris)
	baseweapon = rhs_weap_m14_ris;
	scope		= 2;
};
class rhs_weap_m14_ris_wd: rhs_weap_m14_ris
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_weap_m14_ris_wd)
	baseweapon = rhs_weap_m14_ris_wd;
	displayname = "M14 (RIS/Woodland)";
	TEXTURE_M14_WDL
};
class rhs_weap_m14_ris_d: rhs_weap_m14_ris
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_weap_m14_ris_d)
	baseweapon = rhs_weap_m14_ris_d;
	displayname = "M14 (RIS/Desert)";
	TEXTURE_M14_DES
};
class rhs_weap_m14_ris_fiberglass: rhs_weap_m14_ris
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_weap_m14_ris_fiberglass)
	baseweapon = rhs_weap_m14_ris_fiberglass;
	displayname = "M14 (RIS/Fiberglass)";
	TEXTURE_M14_FIBERGLASS
};

class rhs_weap_m14_socom: rhs_weap_m14_socom_base
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_weap_m14_socom)
	baseweapon = rhs_weap_m14_socom;
	scope		= 2;
};
class rhs_weap_m14_socom_rail: rhs_weap_m14_socom_rail_base
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_weap_m14_socom_rail)
	baseweapon = rhs_weap_m14_socom_rail;
	scope		= 2;
};

class rhs_weap_m14ebrri_base: rhs_weap_m14_rail_base
{
	displayName = "M14 EBR-RI";
	model						= "\rhsusf\addons\rhsusf_weapons2\MK14\MK14.p3d";
	hiddenSelectionsTextures[]	= {"rhsusf\addons\rhsusf_weapons2\mk14\data\mk14_co.paa"};
	handAnim[]	= {"OFP2_ManSkeleton","\rhsusf\addons\rhsusf_c_weapons\anims\rhs_hand_mk14.rtm"};

	magazines[] =
	{
		rhsusf_20Rnd_762x51_m118_special_Mag,
		rhsusf_20Rnd_762x51_m993_Mag,
		rhsusf_20Rnd_762x51_m62_Mag
	};

	discreteDistance[]={200,300,400,500,600};
	discreteDistanceCameraPoint[]=
	{
		"eye",
		"eye_300",
		"eye_400",
		"eye_500",
		"eye_600"
	};
	discreteDistanceInitIndex=0;
	cameraDir = "eye_look";
	maxZeroing = 2000;
	reloadAction="RHS_GestureReloadM14";
	inertia = 0.7;

	class WeaponSlotsInfo: WeaponSlotsInfo
	{
		mass = 112.2;
		class CowsSlot: rhs_western_rifle_scopes_slot_short
		{
			class compatibleItems: compatibleItems{
				rhsusf_acc_LEUPOLDMK4_2=0;
				rhsusf_acc_LEUPOLDMK4_2_d=0;
				rhsusf_acc_LEUPOLDMK4_2_MRDS=0;
			};
		};
		class PointerSlot: rhs_western_rifle_laser_slot {};
		class UnderBarrelSlot: rhs_western_rifle_underbarrel_slot {};
		class MuzzleSlot: rhs_western_m14_muzzle_slot {};
	};
	modes[] =
	{
		"Single",
		"single_close_optics1",
		"single_medium_optics1",
		"single_far_optics1"
	};
	class Single: Single
	{
		dispersion = 0.0002909; // 1MOA
	};
};
class rhs_weap_m14ebrri : rhs_weap_m14ebrri_base
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_weap_m14ebrri)
	scope = 2;
	baseWeapon="rhs_weap_m14ebrri";
};

class rhs_weap_sr25 : rhs_weap_m14ebrri
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_weap_sr25)
	baseWeapon="rhs_weap_sr25";
	hiddenSelections[] = {"camo1","camo2","camo3","camo4","camo5","camo6"};
	hiddenSelectionsTextures[] = {
		"rhsusf\addons\rhsusf_weapons2\sr25\data\reciever_co.paa",
		"rhsusf\addons\rhsusf_weapons2\sr25\data\rail_co.paa",
		"rhsusf\addons\rhsusf_weapons2\sr25\data\misc_co.paa",
		"rhsusf\addons\rhsusf_weapons2\sr25\data\buttstock1_co.paa",
		"rhsusf\addons\rhsusf_weapons2\sr25\data\buttstock2_co.paa",
		"rhsusf\addons\rhsusf_weapons\M4\data\kacrailcover_co.paa"
	};
	displayName = $STR_RHS_CFGWEAPONS_RIFLE_SR25M;
	descriptionShort="Sniper rifle<br/>Caliber: 7.62x51mm NATO";
	class Library
	{
		libTextDesc="An SR 25 rifle manufactured by Knights Armament company";
	};

	model="\rhsusf\addons\rhsusf_weapons2\sr25\SR25.p3d";


	handAnim[] = {"OFP2_ManSkeleton","\rhsusf\addons\rhsusf_c_weapons\anims\rhs_hand_sr25.rtm"};
	reloadAction="RHS_GestureReloadSR25";

	magazines[] =
	{
		rhsusf_20Rnd_762x51_SR25_m118_special_Mag,
		rhsusf_20Rnd_762x51_SR25_mk316_special_Mag,
		rhsusf_20Rnd_762x51_SR25_m993_Mag,
		rhsusf_20Rnd_762x51_SR25_m62_Mag
	};
	magazineWell[] =
	{
		CBA_762x51_AR10,
		CBA_762x51_AR10_L,
		CBA_762x51_AR10_XL
	};

	discreteDistance[]={200,300,400,500,600};
	discreteDistanceCameraPoint[]=
	{
		"eye",
		"eye_300",
		"eye_400",
		"eye_500",
		"eye_600"
	};
	discreteDistanceInitIndex=0;
	maxZeroing = 1000;
	weaponInfoType = rhs_rscOptics_sr25;

	dexterity = 1.53;
	reloadTime=2;
	recoil = "recoil_ebr";

	class WeaponSlotsInfo: WeaponSlotsInfo
	{
		mass = 94.82;
		class CowsSlot: rhs_western_rifle_scopes_slot_long
		{
		};
		class PointerSlot: rhs_western_rifle_laser_slot
		{
		};
		class MuzzleSlot: SlotInfo
		{
			linkProxy="\A3\data_f\proxies\weapon_slots\MUZZLE";
			compatibleItems[]=
			{
				"rhsusf_acc_sr25S",
				"rhsusf_acc_SR25S_wd",
				"rhsusf_acc_SR25S_d"
			};
		};
		class UnderBarrelSlot: rhs_western_rifle_underbarrel_slot {
		};
	};


	class Single: Mode_SemiAuto
	{
		reloadTime=0.096;
		dispersion=0.00028;
		minRange=2;
		minRangeProbab=0.3;
		midRange=350;
		midRangeProbab=0.7;
		maxRange=500;
		maxRangeProbab=0.05;
		displayName = "";

	};
	class single_close_optics1: Single
	{
		requiredOpticType=1;
		showToPlayer=0;
		minRange=2;
		minRangeProbab=0.05;
		midRange=300;
		midRangeProbab=0.8;
		maxRange=500;
		maxRangeProbab=0.01;
		aiRateOfFire=2;
		aiRateOfFireDistance=300;
	};
	class single_medium_optics1: single_close_optics1
	{
		minRange=300;
		minRangeProbab=0.05;
		midRange=500;
		midRangeProbab=0.7;
		maxRange=700;
		maxRangeProbab=0.05;
		aiRateOfFire=2;
		aiRateOfFireDistance=500;
	};
	class single_far_optics1: single_medium_optics1
	{
		requiredOpticType=2;
		minRange=300;
		minRangeProbab=0.05;
		midRange=600;
		midRangeProbab=0.4;
		maxRange=900;
		maxRangeProbab=0.05;
		aiRateOfFire=4;
		aiRateOfFireDistance=600;
	};
};

class rhs_weap_sr25_ec : rhs_weap_sr25
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_weap_sr25_ec)
	displayName = $STR_RHS_CFGWEAPONS_RIFLE_SR25EC;
	class Library
	{
		libTextDesc="An SR 25 EC rifle manufactured by Knights Armament company";
	};
	model="\rhsusf\addons\rhsusf_weapons2\sr25\SR25_ec.p3d";


	class WeaponSlotsInfo: WeaponSlotsInfo
	{
		mass = 84.92;
		class MuzzleSlot: rhs_western_762rifle_muzzle_slot	{};
	};

	baseWeapon="rhs_weap_sr25_ec";
};

class rhs_weap_sr25_wd : rhs_weap_sr25
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_weap_sr25_wd)
	displayName = $STR_RHS_CFGWEAPONS_RIFLE_SR25WD;
	hiddenSelectionsTextures[] = {
		"rhsusf\addons\rhsusf_weapons2\sr25\data\camo\wd\reciever_co.paa",
		"rhsusf\addons\rhsusf_weapons2\sr25\data\camo\wd\rail_co.paa",
		"rhsusf\addons\rhsusf_weapons2\sr25\data\camo\wd\misc_co.paa",
		"rhsusf\addons\rhsusf_weapons2\sr25\data\camo\wd\buttstock1_co.paa",
		"rhsusf\addons\rhsusf_weapons2\sr25\data\camo\wd\buttstock2_co.paa",
		"rhsusf\addons\rhsusf_weapons\M4\data\kacrailcover_wd_co.paa"
	};
	hiddenSelectionsMaterials[] = {
		"rhsusf\addons\rhsusf_weapons2\sr25\data\camo\reciever_mat.rvmat",
		"rhsusf\addons\rhsusf_weapons2\sr25\data\camo\rail_mat.rvmat",
		"rhsusf\addons\rhsusf_weapons2\sr25\data\camo\misc_mat.rvmat",
		"rhsusf\addons\rhsusf_weapons2\sr25\data\camo\buttstock1_mat.rvmat",
		"rhsusf\addons\rhsusf_weapons2\sr25\data\camo\buttstock2_mat.rvmat",
		"rhsusf\addons\rhsusf_weapons\m4\data\kacrailcover.rvmat"
	};
	baseWeapon="rhs_weap_sr25_wd";
};

class rhs_weap_sr25_ec_wd : rhs_weap_sr25_wd
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_weap_sr25_ec_wd)
	displayName = $STR_RHS_CFGWEAPONS_RIFLE_SR25ECWD;
	class Library
	{
		libTextDesc="An SR 25 EC rifle manufactured by Knights Armament company";
	};
	class WeaponSlotsInfo: WeaponSlotsInfo
	{
		mass = 84.92;
		class MuzzleSlot: rhs_western_762rifle_muzzle_slot	{};
	};
	model="\rhsusf\addons\rhsusf_weapons2\sr25\SR25_ec.p3d";

	baseWeapon="rhs_weap_sr25_ec_wd";
};

class rhs_weap_sr25_d : rhs_weap_sr25_wd
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_weap_sr25_d)
	displayName = $STR_RHS_CFGWEAPONS_RIFLE_SR25D;
	hiddenSelectionsTextures[] = {
		"rhsusf\addons\rhsusf_weapons2\sr25\data\camo\d\reciever_co.paa",
		"rhsusf\addons\rhsusf_weapons2\sr25\data\camo\d\rail_co.paa",
		"rhsusf\addons\rhsusf_weapons2\sr25\data\camo\d\misc_co.paa",
		"rhsusf\addons\rhsusf_weapons2\sr25\data\camo\d\buttstock1_co.paa",
		"rhsusf\addons\rhsusf_weapons2\sr25\data\camo\d\buttstock2_co.paa",
		"rhsusf\addons\rhsusf_weapons\M4\data\kacrailcover_d_co.paa"
	};
	baseWeapon="rhs_weap_sr25_d";
};

class rhs_weap_sr25_ec_d : rhs_weap_sr25_d
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_weap_sr25_ec_d)
	displayName = $STR_RHS_CFGWEAPONS_RIFLE_SR25ECD;
	class Library
	{
		libTextDesc="An SR 25 EC rifle manufactured by Knights Armament company";
	};
	class WeaponSlotsInfo: WeaponSlotsInfo
	{
		mass = 84.92;
		class MuzzleSlot: rhs_western_762rifle_muzzle_slot	{};
	};
	model="\rhsusf\addons\rhsusf_weapons2\sr25\SR25_ec.p3d";

	baseWeapon="rhs_weap_sr25_ec_d";
};

class rhs_weap_m110: rhs_weap_sr25
{
	displayName = $STR_RHS_CFGWEAPONS_RIFLE_M110;
	scope = 1;
	AUTHOR_MACRO
};
//  Rifle_Base_F
class GM6_base_F : Rifle_Long_Base_F {};
class rhs_weap_M107_Base_F: GM6_base_F
{
	dlc = "RHS_USAF";

	magazines[] =
	{
		"rhsusf_mag_10Rnd_STD_50BMG_M33",
		"rhsusf_mag_10Rnd_STD_50BMG_mk211"
	};
	magazineWell[] = {CBA_50BMG_M107};

	// TODO: Librbary description required
	class Library
	{
		libTextDesc = "";
	};

	optics = 0;

	model = "\rhsusf\addons\rhsusf_weapons\M107\M107";

	picture = "\A3\Weapons_F\LongRangeRifles\GM6\Data\UI\gear_gm6_X_CA.paa";

	hiddenSelections[] = {"camo","camo2"};
	hiddenSelectionsTextures[] =
	{
		"\rhsusf\addons\rhsusf_weapons\M107\Data\M107_Body_Co.paa",
		"\rhsusf\addons\rhsusf_weapons\M107\Data\M107_extras_Co.paa"
	};

	deployedPivot = "bipod";       /// what point should be used to be on surface while unfolded
	hasBipod = true;          /// a weapon with bipod obviously has a bipod

	maxRecoilSway = 0.0125;
	swayDecaySpeed = 1.25;
	recoil = "recoil_gm6";

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
			effectName = "RHSUSF_BarrelRefractHeavy";
		};
	};

	weaponInfoType = "rhs_rscOptics_m107";
	discreteDistance[] = {100,400,500,600,700,800,900,1000,1100,1200,1300,1400,1500};
	discreteDistanceCameraPoint[]={"eye","eye_400","eye_500","eye_600","eye_700","eye_800","eye_900","eye_1000","eye_1100","eye_1200","eye_1300","eye_1400","eye_1500"};
	discreteDistanceInitIndex = 0;
	cameraDir = "eye_look";
	reloadAction = "GestureReloadDMR05";
	maxZeroing = 2000;

	class Single: Mode_SemiAuto
	{
		dispersion = 0.0004363;
	};

	class WeaponSlotsInfo: WeaponSlotsInfo
	{
		mass = 283.8;
		class CowsSlot: rhs_western_rifle_scopes_slot_long {};
		class MuzzleSlot {};
		class PointerSlot {ICON_OVERLAY_DISABLED};
	};

	opticsZoomMin = 0.275;
	opticsZoomMax = 1.1;
	opticsZoomInit = 0.75;
	distanceZoomMin = 300;
	distanceZoomMax = 300;

	descriptionShort = $STR_A3_CfgWeapons_XM_base_F0;
	handAnim[] = {"OFP2_ManSkeleton","\rhsusf\addons\rhsusf_c_weapons\anims\rhs_hand_M107.rtm"};
	aimTransitionSpeed = 0.5;
	dexterity = 0.8;
	inertia = 1.4;
	caseless[] = {"",1,1,1};
	reloadMagazineSound[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_05_Cyrus\DMR_05_reload", 0.251189, 1, 10};

	aiDispersionCoefY = 10;
	aiDispersionCoefX = 8;
	muzzles[]={"this","SAFE"};
	class SAFE: RHSUSF_SAFE_BASE
	{
		discreteDistanceCameraPoint[]={"eye"};
		cameraDir = "eye_look";
	};

	rhs_deployedHandAnim = "RHS_GestureHoldM107";
};
class rhs_weap_M107: rhs_weap_M107_Base_F
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_weap_M107)
	scope = 2;
	displayname = $STR_RHS_CFGWEAPONS_RIFLE_M107;
	descriptionShort = $STR_RHS_CFGWEAPONS_RIFLE_M107_DESCRIPTION_SHORT;

};

class rhs_weap_M107_d: rhs_weap_M107
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_weap_M107_d)
	scope = 2;
	displayname = $STR_RHS_CFGWEAPONS_RIFLE_M107_D;


	hiddenSelectionsTextures[] =
	{
		"\rhsusf\addons\rhsusf_weapons\M107\Data\M107_Desert_co.paa",
		"\rhsusf\addons\rhsusf_weapons\M107\Data\M107_extras_Co.paa"
	};
	hiddenSelectionsMaterials[] =
	{
		"\rhsusf\addons\rhsusf_weapons\M107\Data\m107_desert.rvmat"
	};
};

class rhs_weap_M107_w: rhs_weap_M107
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_weap_M107_w)
	scope = 2;
	displayname = $STR_RHS_CFGWEAPONS_RIFLE_M107_W;


	hiddenSelectionsTextures[] =
	{
		"\rhsusf\addons\rhsusf_weapons\M107\Data\M107_Woodland_co.paa",
		"\rhsusf\addons\rhsusf_weapons\M107\Data\M107_extras_Co.paa"
	};
	hiddenSelectionsMaterials[] =
	{
		"\rhsusf\addons\rhsusf_weapons\M107\Data\m107_woodland.rvmat"
	};
};

class rhs_weap_M107_lc: rhs_weap_M107
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_weap_M107_lc)
	scope = 1;
	displayname = $STR_RHS_CFGWEAPONS_RIFLE_M107_W;
	//

	hiddenSelectionsTextures[] =
	{
		"\rhsusf\addons\rhsusf_weapons\M107\Data\M107_body_LC_co.paa",
		"\rhsusf\addons\rhsusf_weapons\M107\Data\M107_extras_Co.paa"
	};
	hiddenSelectionsMaterials[] =
	{
		"\rhsusf\addons\rhsusf_weapons\M107\Data\m107.rvmat"
	};
};

// Shotguns
class rhs_weap_M590_5RD : Rifle_Base_F
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_weap_M590_5RD)
	dlc = "RHS_USAF";

	scope = 2;
	model = "\rhsusf\addons\rhsusf_weapons2\M590A1\M590_5MAG";
	handAnim[] = {"OFP2_ManSkeleton","\rhsusf\addons\rhsusf_c_weapons\anims\rhs_hand_m590.rtm"};

	magazines[] = {rhsusf_5Rnd_00Buck,rhsusf_5rnd_doomsday_buck,rhsusf_5Rnd_Slug,rhsusf_5Rnd_HE,rhsusf_5Rnd_FRAG};
	magazineWell[] =
	{
		CBA_12g_1rnd,
		CBA_12g_2rnds,
		CBA_12g_3rnds,
		CBA_12g_4rnds,
		CBA_12g_5rnds
	};

	optics = 1;
	modelOptics = "-";
	displayname = "M590A1 (Short)";
	descriptionShort = "Shotgun <br />Caliber: 12 gauge";
	weaponInfoType = "rhs_m590_handler";
	modes[] = {"Single"};
	muzzles[]={"this","SAFE","RHS_ReloadAction"};
	class SAFE: RHSUSF_SAFE_BASE {};
	class RHS_ReloadAction: RHSUSF_SAFE_BASE
	{
		modes[] = {this};
		magazines[] = {rhs_mag_fakeMuzzle1};
		reloadTime=0.1;
	};
	distanceZoomMin=50;
	distanceZoomMax=50;
	discreteDistance[] = {50};
	discreteDistanceInitIndex = 0;
	reloadAction = "RHS_GestureReloadM590";
	recoil = rhs_recoil_m590;

	reloadSound[] =  {"A3\sounds_f\weapons\M320\M320_reload",0.1,1,30};

	class Single: Mode_SemiAuto
	{
		reloadTime=0.6;
		minRange = 1;
		minRangeProbab = 0.45;
	};
	inertia = 0.5;
	dexterity = 1.5;
	fireSpreadAngle=0.95;
	class WeaponSlotsInfo
	{
		allowedSlots[] = {901};
		mass = 71.72;
		class PointerSlot {ICON_OVERLAY_DISABLED};
	};
	class Eventhandlers: Eventhandlers
	{
		class RHS_BoltAction {
			fired = "[_this select 0,_this # 1,_this # 1,_this # 4] call rhs_fnc_boltAction;";
			reload = "_this spawn rhs_fnc_reloadShotgun";
		};
	};
	rhs_boltActionSound[]		= {"rhsusf\addons\rhsusf_c_weapons\sounds\m590_pump.ogg", 0.9, 1, 20};
	rhs_boltActionAnim			= "RHS_GestureRechamberM590";
	rhs_boltActionCasePos[]		= {0,0.05,0.05};
	rhs_boltActionCaseDir[]		= {0.3,0.05,0.25};
	rhs_boltActionCaseDelay		= 0.1;
	rhs_boltActionCaseSelection	= "rightHand";
};

class rhs_weap_M590_8RD : rhs_weap_M590_5RD
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_weap_M590_8RD)
	model = "\rhsusf\addons\rhsusf_weapons2\M590A1\M590_8MAG";

	magazines[] = {rhsusf_8Rnd_00Buck,rhsusf_8rnd_doomsday_buck,rhsusf_8Rnd_Slug,rhsusf_8Rnd_HE,rhsusf_8Rnd_FRAG};
	magazineWell[] =
	{
		CBA_12g_1rnd,
		CBA_12g_2rnds,
		CBA_12g_3rnds,
		CBA_12g_4rnds,
		CBA_12g_5rnds,
		CBA_12g_6rnds,
		CBA_12g_7rnds,
		CBA_12g_8rnds
	};

	displayname = "M590A1 (Long)";

	class Single: Single {};
	inertia = 0.6;
	dexterity = 1.4;
};

class rhs_weap_m32_Base_F: Rifle_Base_F
{
	dlc = "RHS_USAF";

	UiPicture = "\A3\weapons_f\data\UI\icon_regular_CA.paa";

	model = "\rhsusf\addons\rhsusf_weapons2\M32\rhs_m32";

	magazines[] =
	{
		// Offensive
		"rhsusf_mag_6Rnd_M441_HE",
		"rhsusf_mag_6Rnd_M433_HEDP",
		"rhsusf_mag_6Rnd_M397_HET",
		"rhsusf_mag_6Rnd_M576_Buckshot",
		"rhsusf_mag_6Rnd_m4009", // Stun

		// Flare
		"rhsusf_mag_6Rnd_M583A1_white",
		"rhsusf_mag_6Rnd_m661_green",
		"rhsusf_mag_6Rnd_m662_red",

		// Smoke
		"rhsusf_mag_6Rnd_M713_red",
		"rhsusf_mag_6Rnd_M714_white",
		"rhsusf_mag_6Rnd_M715_green",
		"rhsusf_mag_6Rnd_M716_yellow",

		// Blank
		"rhsusf_mag_6Rnd_M781_Practice",
	};
	magazineWell[] = {CBA_40mm_M203_6rnds};
	// TODO: Librbary description required
	class Library
	{
		libTextDesc = "";
	};

	optics = 0;
	scope = 1;
	reloadAction = "GestureReloadKatibaUGL";
	maxRecoilSway = 0.0125;
	swayDecaySpeed = 1.25;
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
	discreteDistance[] = {50,100,150,200,250,300,350,375};
	discreteDistanceCameraPoint[] = {"gl_eye_50m", "gl_eye_100m", "gl_eye_150m", "gl_eye_200m", "gl_eye_250m", "gl_eye_300m", "gl_eye_350m", "gl_eye_375m"};
	discreteDistanceInitIndex = 1;

	opticsZoomMin = 0.275;
	opticsZoomMax = 1.1;
	opticsZoomInit = 0.75;
	distanceZoomMin = 50;
	distanceZoomMax = 375;

	class WeaponSlotsInfo: WeaponSlotsInfo
	{
		mass = 116.6;
		class CowsSlot
		{
			//compatibleItems[] = {"rhsusf_acc_M2A1","rhsusf_acc_EOTECH","rhsusf_acc_eotech_552","rhsusf_acc_compm4"};
		};
		class PointerSlot: rhs_western_rifle_laser_slot {};
	};



	handAnim[] = {"OFP2_ManSkeleton","\rhsusf\addons\rhsusf_c_weapons\anims\rhs_hand_M32.rtm"};
	dexterity = 1.8;
	aimTransitionSpeed = 0.65;
	caseless[] = {"",1,1,1};

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
			weaponSoundEffect="DefaultRifle";
			soundClosure[] = {};
			begin1[]={"rhsusf\addons\rhsusf_sounds\ugl\ugl_1",1.80,1,800};
			begin2[]={"rhsusf\addons\rhsusf_sounds\ugl\ugl_2",1.80,1,800};
			soundBegin[]={"begin1",0.5,"begin2",0.5};
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
	/*
	reloadMagazineSound[] = {"A3\sounds_f\weapons\M320\M320_reload",0.1,1,30};
	hiddenSelections[] = {"Camo"};
	hiddenSelectionsTextures[] = {"\rhsusf\addons\rhsusf_weapons\XM2010\Data\XM2010_co.paa"};
	*/
};

class rhs_weap_m32: rhs_weap_m32_Base_F
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_weap_m32)
	scope = 2;
	displayname = "M32 MGL";
	descriptionShort = "Multiple Grenade Launcher<br />Caliber: 40mm";

};

class SMG_02_base_F : Rifle_Short_Base_F {
	class Single;
	class FullAuto;
	class WeaponSlotsInfo;
	class GunParticles;
};

class rhsusf_weap_MP7A1_base_f: SMG_02_base_F
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhsusf_weap_MP7A1_base_f)

	dlc = "RHS_USAF";

	displayName = "MP7A1";
	scope = 1;
	initspeed = -1;

	// Placeholder mags
	magazines[] = {"rhsusf_mag_40Rnd_46x30_FMJ", "rhsusf_mag_40Rnd_46x30_JHP","rhsusf_mag_40Rnd_46x30_AP"};
	magazineWell[] = {CBA_46x30_MP7};
	class Library
	{
		libTextDesc = "Smaller than a conventional submachine gun, the 4.6mm MP7A1 is a compact and lightweight Personal Defense Weapon that can be carried like a handgun yet is capable of rifle-like effectiveness..";
	};

	model = "\rhsusf\addons\rhsusf_weapons2\MP7\mp7a2";

	reloadAction = "GestureReloadSMG_02";
	maxZeroing = 200;
	discreteDistance[] = {100,200};
	maxRecoilSway = 0.0125;
	swayDecaySpeed = 1.25;
	inertia = 0.35;
	recoil = rhs_recoil_mp7;
	weaponInfoType = "rhs_rscOptics_mp7";

	class GunParticles: GunParticles
	{
		class SecondEffect
		{
			positionName = "Nabojnicestart";
			directionName = "Nabojniceend";
			effectName = "CaselessAmmoCloud";
		};
	};
	class WeaponSlotsInfo: WeaponSlotsInfo
	{
		mass = 24.2;
		allowedSlots[] = {901};
		class MuzzleSlot : rhs_western_46mmsmg_muzzle_slot // for 4.6mm universal muzzle devices
		{
			iconPosition[] = {0.05,0.38};
			iconScale = 0.2;
		};
		class CowsSlot: rhs_western_rifle_scopes_slot_short // for scopes with short mounts
		{
			iconPosition[] = {0.5,0.3};
			iconScale = 0.2;
		};
		class PointerSlot: rhs_western_rifle_laser_slot // for lights
		{
			iconPosition[] = {0.35,0.4};
			iconScale = 0.25;
		};
		class GripodSlot: rhs_western_rifle_gripod_slot {};
	};
	opticsZoomMin = 0.25;
	opticsZoomMax = 1.25;
	opticsZoomInit = 0.75;
	distanceZoomMin = 100;
	distanceZoomMax = 100;
	descriptionShort = "Sub-machine gun <br/>Caliber: 4.6x30 mm";
	handAnim[] = {"OFP2_ManSkeleton","\rhsusf\addons\rhsusf_c_weapons\anims\rhs_hand_MP7.rtm"};
	caseless[] = {"",1,1,1};
	soundBullet[] = {"caseless",1};
	selectionfireanim="zasleh";

	hiddenSelections[] = {"camo","camo2","camoB"};
	hiddenSelectionsTextures[] = {"rhsusf\addons\rhsusf_weapons2\mp7\mp7a2\data\mp7_co.paa","rhsusf\addons\rhsusf_weapons2\mp7\mp7a2\data\mp7_buis_co.paa","rhsusf\addons\rhsusf_weapons2\mp7\mp7a2\data\mp7_acc1_blk_co.paa"};

	//changeFiremodeSound[] = {"\rhsusf\addons\rhsusf_weapons2\MP7\Data\sound\iFlip-mp7_selector",0.17782794,1,5};

	modes[] = {"Single", "FullAuto"};
	class Single : Single
	{
		WEAPON_RPM(950)
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
	class FullAuto : FullAuto
	{
		WEAPON_RPM(950)
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
	aiDispersionCoefY = 6.0;
	aiDispersionCoefX = 4.0;
	drySound[] = {"A3\sounds_f\weapons\Other\dry_1",0.56234133,1,10};
	reloadMagazineSound[] = {"\rhsusf\addons\rhsusf_weapons2\MP7\Data\sound\iFlip-mp7_magout",1.5,1,10};

	rhs_grip1_change = "rhsusf_weap_MP7A2_grip1";
	rhs_grip2_change = "rhsusf_weap_MP7A2_grip2";
	rhs_grip3_change = "rhsusf_weap_MP7A2_grip3";
};
class rhsusf_weap_MP7A2: rhsusf_weap_MP7A1_base_f
{
	AUTHOR_MACRO_DLC
	INVENTORY_PICTURE(rhsusf_weap_MP7A2)
	displayName = "$STR_RHS_CFGWEAPONS_SMG_MP7A2";
	scope = 2;
	rhs_fold_noGrip	= 1;
	rhs_fold		= "rhsusf_weap_MP7A2_folded";
	baseweapon		= "rhsusf_weap_MP7A2";
};
class rhsusf_weap_MP7A2_grip1: rhsusf_weap_MP7A2
{
	scope=1;
	handAnim[] = {"OFP2_ManSkeleton","\rhsusf\addons\rhsusf_c_weapons\anims\rhs_hand_MP7_vfg.rtm"};
};
class rhsusf_weap_MP7A2_grip2: rhsusf_weap_MP7A2
{
	scope=1;
	handAnim[] = {"OFP2_ManSkeleton","\rhsusf\addons\rhsusf_c_weapons\anims\rhs_hand_MP7_afg.rtm"};
};
class rhsusf_weap_MP7A2_grip3: rhsusf_weap_MP7A2
{
	scope=1;
	handAnim[] = {"OFP2_ManSkeleton","\rhsusf\addons\rhsusf_c_weapons\anims\rhs_hand_MP7_vfg.rtm"};
};
/*
class rhsusf_weap_MP7A1_ulf: rhsusf_weap_MP7A1_base_f
{
	AUTHOR_MACRO_DLC
	INVENTORY_PICTURE(rhsusf_weap_MP7A1_ulf)
	displayName = "H&K MP7A1 (Ulf)";

	hiddenSelections[] = {"body","magazine"};
	hiddenSelectionsTextures[] = {"\rhsusf\addons\rhsusf_weapons2\MP7\Data\mp7_1_co.paa","\rhsusf\addons\rhsusf_weapons2\MP7\Data\mp7_mag_1_co.paa"};
};
class rhsusf_weap_MP7A1_red: rhsusf_weap_MP7A1_base_f
{
	AUTHOR_MACRO_DLC
	INVENTORY_PICTURE(rhsusf_weap_MP7A1_red)
	displayName = "H&K MP7A1 (Red Curtains)";

	hiddenSelections[] = {"body","magazine"};
	hiddenSelectionsTextures[] = {"\rhsusf\addons\rhsusf_weapons2\MP7\Data\mp7_2_co.paa","\rhsusf\addons\rhsusf_weapons2\MP7\Data\mp7_mag_2_co.paa"};
};
*/

class rhsusf_weap_MP7A2_winter: rhsusf_weap_MP7A2
{
	AUTHOR_MACRO_DLC
	INVENTORY_PICTURE(rhsusf_weap_MP7A2_winter)
	displayName = $STR_RHS_CFGWEAPONS_SMG_MP7A2_WINTER;

	hiddenSelections[] = {"camo","camo2","camoB"};
	hiddenSelectionsTextures[] = {"rhsusf\addons\rhsusf_weapons2\mp7\mp7a2\data\mp7_wht_co.paa","rhsusf\addons\rhsusf_weapons2\mp7\mp7a2\data\mp7_buis_co.paa","rhsusf\addons\rhsusf_weapons2\mp7\mp7a2\data\mp7_acc1_wht_co.paa"};
	rhs_grip1_change = "rhsusf_weap_MP7A2_winter_grip1";
	rhs_grip2_change = "rhsusf_weap_MP7A2_winter_grip2";
	rhs_grip3_change = "rhsusf_weap_MP7A2_winter_grip3";
	rhs_fold		= "rhsusf_weap_MP7A2_folded_winter";
	baseweapon		= "rhsusf_weap_MP7A2_winter";
};
class rhsusf_weap_MP7A2_winter_grip1: rhsusf_weap_MP7A2_winter
{
	scope=1;
	handAnim[] = {"OFP2_ManSkeleton","\rhsusf\addons\rhsusf_c_weapons\anims\rhs_hand_MP7_vfg.rtm"};
};
class rhsusf_weap_MP7A2_winter_grip2: rhsusf_weap_MP7A2_winter
{
	scope=1;
	handAnim[] = {"OFP2_ManSkeleton","\rhsusf\addons\rhsusf_c_weapons\anims\rhs_hand_MP7_afg.rtm"};
};
class rhsusf_weap_MP7A2_winter_grip3: rhsusf_weap_MP7A2_winter
{
	scope=1;
	handAnim[] = {"OFP2_ManSkeleton","\rhsusf\addons\rhsusf_c_weapons\anims\rhs_hand_MP7_vfg.rtm"};
};

class rhsusf_weap_MP7A2_desert: rhsusf_weap_MP7A2
{
	AUTHOR_MACRO_DLC
	INVENTORY_PICTURE(rhsusf_weap_MP7A2_desert)
	displayName = $STR_RHS_CFGWEAPONS_SMG_MP7A2_DESERT;

	hiddenSelections[] = {"camo","camo2","camoB"};
	hiddenSelectionsTextures[] = {"rhsusf\addons\rhsusf_weapons2\mp7\mp7a2\data\mp7_fde_co.paa","rhsusf\addons\rhsusf_weapons2\mp7\mp7a2\data\mp7_buis_co.paa","rhsusf\addons\rhsusf_weapons2\mp7\mp7a2\data\mp7_acc1_fde_co.paa"};
	rhs_grip1_change = "rhsusf_weap_MP7A2_desert_grip1";
	rhs_grip2_change = "rhsusf_weap_MP7A2_desert_grip2";
	rhs_grip3_change = "rhsusf_weap_MP7A2_desert_grip3";
	rhs_fold		= "rhsusf_weap_MP7A2_folded_desert";
	baseweapon = "rhsusf_weap_MP7A2_desert";
};
class rhsusf_weap_MP7A2_desert_grip1: rhsusf_weap_MP7A2_desert
{
	scope=1;
	handAnim[] = {"OFP2_ManSkeleton","\rhsusf\addons\rhsusf_c_weapons\anims\rhs_hand_MP7_vfg.rtm"};
};
class rhsusf_weap_MP7A2_desert_grip2: rhsusf_weap_MP7A2_desert
{
	scope=1;
	handAnim[] = {"OFP2_ManSkeleton","\rhsusf\addons\rhsusf_c_weapons\anims\rhs_hand_MP7_afg.rtm"};
};
class rhsusf_weap_MP7A2_desert_grip3: rhsusf_weap_MP7A2_desert
{
	scope=1;
	handAnim[] = {"OFP2_ManSkeleton","\rhsusf\addons\rhsusf_c_weapons\anims\rhs_hand_MP7_vfg.rtm"};
};

class rhsusf_weap_MP7A2_aor1: rhsusf_weap_MP7A2
{
	AUTHOR_MACRO_DLC
	INVENTORY_PICTURE(rhsusf_weap_MP7A2_aor1)
	displayName = $STR_RHS_CFGWEAPONS_SMG_MP7A2_AOR1;

	hiddenSelections[] = {"camo","camo2","camoB"};
	hiddenSelectionsTextures[] = {"rhsusf\addons\rhsusf_weapons2\mp7\mp7a2\data\mp7_aor_co.paa","rhsusf\addons\rhsusf_weapons2\mp7\mp7a2\data\mp7_buis_co.paa","rhsusf\addons\rhsusf_weapons2\mp7\mp7a2\data\mp7_acc1_aor_co.paa"};
	rhs_grip1_change = "rhsusf_weap_MP7A2_aor1_grip1";
	rhs_grip2_change = "rhsusf_weap_MP7A2_aor1_grip2";
	rhs_grip3_change = "rhsusf_weap_MP7A2_aor1_grip3";
	rhs_fold		= "rhsusf_weap_MP7A2_folded_aor1";
	baseweapon = "rhsusf_weap_MP7A2_aor1";
};
class rhsusf_weap_MP7A2_aor1_grip1: rhsusf_weap_MP7A2_aor1
{
	scope=1;
	handAnim[] = {"OFP2_ManSkeleton","\rhsusf\addons\rhsusf_c_weapons\anims\rhs_hand_MP7_vfg.rtm"};
};
class rhsusf_weap_MP7A2_aor1_grip2: rhsusf_weap_MP7A2_aor1
{
	scope=1;
	handAnim[] = {"OFP2_ManSkeleton","\rhsusf\addons\rhsusf_c_weapons\anims\rhs_hand_MP7_afg.rtm"};
};
class rhsusf_weap_MP7A2_aor1_grip3: rhsusf_weap_MP7A2_aor1
{
	scope=1;
	handAnim[] = {"OFP2_ManSkeleton","\rhsusf\addons\rhsusf_c_weapons\anims\rhs_hand_MP7_vfg.rtm"};
};
//Legacy classes for compatibility
class rhsusf_weap_MP7A1_winter: rhsusf_weap_MP7A2_winter
{
	scope = 1;
};
class rhsusf_weap_MP7A1_desert: rhsusf_weap_MP7A2_desert
{
	scope = 1;
};
class rhsusf_weap_MP7A1_aor1: rhsusf_weap_MP7A2_aor1
{
	scope = 1;
};
// Folded variants
class rhsusf_weap_MP7A2_folded: rhsusf_weap_MP7A2
{
	AUTHOR_MACRO_DLC
	INVENTORY_PICTURE(rhsusf_weap_MP7A2_folded)
	displayName = $STR_RHS_CFGWEAPONS_SMG_MP7A2_FOLDED;
	type = 2;
	model = "\rhsusf\addons\rhsusf_weapons2\MP7\mp7a2_folded";
	reloadAction = "GestureReloadPistol";
	handAnim[] = {"OFP2_ManSkeleton","\rhsusf\addons\rhsusf_c_weapons\anims\rhs_hand_MP7.rtm"};
	recoil = rhs_recoil_mp7_folded;

	class WeaponSlotsInfo: WeaponSlotsInfo
	{
		holsterScale = 0;
		mass = __EVAL(24.2*0.7);
		class GripodSlot {};
	};
	rhs_fold	= "rhsusf_weap_MP7A2";
	baseweapon = "rhsusf_weap_MP7A2_folded";
};
class rhsusf_weap_MP7A2_folded_winter: rhsusf_weap_MP7A2_folded
{	
	AUTHOR_MACRO_DLC
	INVENTORY_PICTURE(rhsusf_weap_MP7A2_folded_winter)
	displayName = $STR_RHS_CFGWEAPONS_SMG_MP7A2_FOLDED_AOR1;

	hiddenSelectionsTextures[] = {"rhsusf\addons\rhsusf_weapons2\mp7\mp7a2\data\mp7_wht_co.paa","rhsusf\addons\rhsusf_weapons2\mp7\mp7a2\data\mp7_buis_co.paa","rhsusf\addons\rhsusf_weapons2\mp7\mp7a2\data\mp7_acc1_wht_co.paa"};
	rhs_fold	= "rhsusf_weap_MP7A2_winter";
	baseweapon	= "rhsusf_weap_MP7A2_folded_winter";
};

class rhsusf_weap_MP7A2_folded_desert: rhsusf_weap_MP7A2_folded
{	
	AUTHOR_MACRO_DLC
	INVENTORY_PICTURE(rhsusf_weap_MP7A2_folded_desert)
	displayName = $STR_RHS_CFGWEAPONS_SMG_MP7A2_FOLDED_DESERT;

	hiddenSelectionsTextures[] = {"rhsusf\addons\rhsusf_weapons2\mp7\mp7a2\data\mp7_fde_co.paa","rhsusf\addons\rhsusf_weapons2\mp7\mp7a2\data\mp7_buis_co.paa","rhsusf\addons\rhsusf_weapons2\mp7\mp7a2\data\mp7_acc1_fde_co.paa"};
	rhs_fold	= "rhsusf_weap_MP7A2_desert";
	baseweapon	= "rhsusf_weap_MP7A2_folded_desert";
};

class rhsusf_weap_MP7A2_folded_aor1: rhsusf_weap_MP7A2_folded
{
	AUTHOR_MACRO_DLC
	INVENTORY_PICTURE(rhsusf_weap_MP7A2_folded_aor1)
	displayName = $STR_RHS_CFGWEAPONS_SMG_MP7A2_FOLDED_AOR1;

	hiddenSelectionsTextures[] = {"rhsusf\addons\rhsusf_weapons2\mp7\mp7a2\data\mp7_aor_co.paa","rhsusf\addons\rhsusf_weapons2\mp7\mp7a2\data\mp7_buis_co.paa","rhsusf\addons\rhsusf_weapons2\mp7\mp7a2\data\mp7_acc1_aor_co.paa"};
	rhs_fold	= "rhsusf_weap_MP7A2_aor1";
	baseweapon	= "rhsusf_weap_MP7A2_folded_aor1";
};
class rhsusf_weap_rifle_empty: rhs_weap_m4_Base
{
	scope		= 1;
	displayname	= "Magazine proxy picture";
	model		= rhsafrf\addons\rhs_weapons\rhs_empty_rifle; // to lazy to duplicate and it's only meant for dev anyway
	magazineWell[] =
	{
		STANAG_556x45,
		STANAG_556x45_Large,
		M249_556x45,
		M240_762x51
	};
};
