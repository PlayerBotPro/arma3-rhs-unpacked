class rhs_weap_pya;
//class hgun_ACPC2_F;
class rhs_weap_tt33: rhs_weap_pya
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_weap_tt33)
	dlc = "RHS_GREF";
	scope = 2;
	displayName = "$STR_RHSGREF_WEAP_TT33";
	descriptionShort = "Pistol<br/>Caliber: 7.62x25mm";
	model = "\rhsgref\addons\rhsgref_weapons\tt33\rhs_tt33";
	modelOptics = "-";

	class SAFE_PISTOL: RHS_SAFE_BASE
	{
		discreteDistance[] = {25};
		discreteDistanceCameraPoint[] = {"eye_25"};
		cameraDir="eye_look";
	};
	muzzles[]={"this","SAFE_PISTOL"};

	weaponInfoType = "rhs_rscOptics_pistol";
	class WeaponSlotsInfo
	{
		mass=18.26;
		class CowsSlot
		{
			ICON_OVERLAY_DISABLED
		};
		class MuzzleSlot{};
		class PointerSlot {};
		holsterOffset = "holster";
		holsterScale = 0.87;
	};

	discreteDistance[] = {25};
	discreteDistanceCameraPoint[] = {"eye_25"};
	cameraDir="eye_look";

	maxZeroing = 25;

	magazines[] = {"rhs_mag_762x25_8"};
	magazineWell[] = {CBA_762x25_TT};

	baseWeapon = "rhs_weap_tt33";
};


class rhs_weap_type94_new: rhs_weap_pya
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhs_weap_type94_new)
	DLC = "RHS_GREF";
	scope = 2;
	displayName = "$STR_RHSGREF_WEAP_TYPE94";
	descriptionShort = "Pistol<br/>Caliber: 8x22mm";
	model = "\rhsgref\addons\rhsgref_weapons2\type94\rhs_type94_new.p3d";
	modelOptics = "-";

	muzzles[]={"this","SAFE_PISTOL"};

	weaponInfoType = "rhs_rscOptics_pistol";
	class WeaponSlotsInfo
	{
		mass=18.26;
		class CowsSlot
		{
			ICON_OVERLAY_DISABLED
		};
		class MuzzleSlot{};
		class PointerSlot {};
		holsterOffset = "holster";
		holsterScale = 0.87;
	};

	discreteDistance[] = {25};
	discreteDistanceCameraPoint[] = {"eye_25"};
	cameraDir="eye_look";

	maxZeroing = 25;

	magazines[] = {"rhs_mag_6x8mm_mhp"};
	baseWeapon = "rhs_weap_type94_new";
};
/*
class rhsgref_weap_P38: hgun_ACPC2_F
{
	dlc                  = "WW";
	scope                = 2;
	scopeCurator         = 2;
	scopeArsenal         = 2;
	baseWeapon           = "rhsgref_weap_P38";
	displayName          = "$STR_WW_WEAP_P38_DISPLAY_NAME";
	model                = "\rhsgref\addons\rhsgref_weapons2\p38\rhs_p38.p3d";
	modelOptics          = "-";
	//picture              = "\westwall\addons\rhsgref_t_m1911a1\ui\rhsgref_inv_m1911a1_ca.paa";
	weaponInfoType       = "";
	minRange             = 5;
	minRangeProbab       = 0.3;
	midRange             = 25;
	midRangeProbab       = 0.6;
	maxRange             = 50;
	maxRangeProbab       = 0.1;
	aiRateOfFire         = 2;
	aiRateOfFireDistance = 25;
	optics               = 1;
	distanceZoomMin      = 50;
	distanceZoomMax      = 50;
	inertia              = 0.2;
	dexterity            = 1.8;
	initSpeed            = 280;
	begin1[]             = {"A3\Sounds_F\arsenal\weapons\Pistols\Acpc2\acpc2_01", 1.2589254, 1, 1400};
	soundBegin[]         = {"begin1", 1};
	class WeaponSlotsInfo
	{
		holsterScale  = 0.92;
		holsterOffset = "holster";
		mass          = 8;
		class CowsSlot {};

		class MuzzleSlot {};

		class PointerSlot {};
	};

	magazines[] = {"rhsgref_8rnd_9x19_Pp08_P38", "rhsgref_8rnd_9x19_Pp08SE_P38", "rhsgref_8rnd_9x19_Pp08mE_P38"};
	dispersion  = 0.02;
	reloadTime  = 0.13;
	ffCount     = 1;
	muzzles[]   = {"this"};
};*/