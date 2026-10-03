class hgun_ACPC2_F;
class hgun_P07_F;

class rhsusf_weap_m1911a1: hgun_ACPC2_F
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhsusf_weap_m1911a1)
	dlc = "RHS_USAF";

	scope = 2;
	displayName = "$STR_RHS_CFGWEAPONS_PISTOL_M1911A1";
	model = "\rhsusf\addons\rhsusf_weapons\pistols\M1911A1\rhs_m1911a1";
	modelOptics = "-";

	weaponInfoType = "rhs_rscOptics_pistol_usf";

	minRange = 5;
	minRangeProbab = 0.3;
	midRange = 25;
	midRangeProbab = 0.6;
	maxRange = 50;
	maxRangeProbab = 0.1;
	aiRateOfFire = 2;
	aiRateOfFireDistance = 25;
	optics = 1;
	distanceZoomMin = 50;
	distanceZoomMax = 50;

	inertia = 0.2;
	dexterity = 1.8;
	initSpeed = -1;
	dispersion = 0.02;
	reloadTime = 0.13;

	class WeaponSlotsInfo
	{
		mass = 20.9;
		holsterScale = 0.92;
		holsterOffset = "holster";
		class CowsSlot
		{
			ICON_OVERLAY_DISABLED
		};
		class MuzzleSlot{};
		class PointerSlot {};
	};

	magazines[] = {"rhsusf_mag_7x45acp_MHP"};
	magazineWell[] = {CBA_45ACP_1911};

	muzzles[]={"this","SAFE_PISTOL"};
	class SAFE_PISTOL: RHSUSF_SAFE_BASE {};
	baseWeapon = "rhsusf_weap_m1911a1";
};

class rhsusf_weap_glock17g4: hgun_P07_F
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhsusf_weap_glock17g4)
	dlc = "RHS_USAF";

	scope = 2;
	displayName = "$STR_RHS_CFGWEAPONS_PISTOL_GLOCK17";
	model = "\rhsusf\addons\rhsusf_weapons2\glock17g4\rhs_glock17g4";
	modelOptics = "-";

	magazines[] = {"rhsusf_mag_17Rnd_9x19_JHP", "rhsusf_mag_17Rnd_9x19_FMJ"};
	magazineWell[] = {CBA_9x19_Glock_Full};

	weaponInfoType = "rhs_rscOptics_pistol_usf";

	minRange = 5;
	minRangeProbab = 0.3;
	midRange = 25;
	midRangeProbab = 0.6;
	maxRange = 50;
	maxRangeProbab = 0.1;
	aiRateOfFire = 2;
	aiRateOfFireDistance = 25;
	optics = 1;
	distanceZoomMin = 50;
	distanceZoomMax = 50;

	inertia = 0.2;
	dexterity = 1.8;
	initSpeed = -0.9;
	dispersion = 0.02;
	reloadTime = 0.13;

	class WeaponSlotsInfo
	{
		mass=13.75;
		class CowsSlot{};
		class MuzzleSlot: rhs_western_9mmpistol_muzzle_slot {};
		class PointerSlot: rhs_western_pistol_laser_slot {};
	};


	muzzles[]={"this","SAFE_PISTOL"};
	class SAFE_PISTOL: RHSUSF_SAFE_BASE {};

	baseWeapon = "rhsusf_weap_glock17g4";
};
class rhsusf_weap_m9: rhsusf_weap_glock17g4
{
	AUTHOR_MACRO
	INVENTORY_PICTURE(rhsusf_weap_m9)
	dlc = "RHS_USAF";

	scope = 2;
	displayName = "$STR_RHS_CFGWEAPONS_PISTOL_m9";
	model = "\rhsusf\addons\rhsusf_weapons2\m9_beretta\M9";

	magazines[] = {"rhsusf_mag_15Rnd_9x19_JHP", "rhsusf_mag_15Rnd_9x19_FMJ"};
	magazineWell[] = {CBA_9x19_M9};

	initSpeed = -0.95;
	dispersion = 0.02;
	reloadTime = 0.13;

	class WeaponSlotsInfo
	{
		holsterScale = 0.92;
		holsterOffset = "holster";
		mass=20.9;
		class CowsSlot
		{
			ICON_OVERLAY_DISABLED
		};
		class MuzzleSlot{};
		class PointerSlot {};
	};



	muzzles[]={"this","SAFE_PISTOL"};
	class SAFE_PISTOL: RHSUSF_SAFE_BASE {};

	baseWeapon = "rhsusf_weap_m9";
};