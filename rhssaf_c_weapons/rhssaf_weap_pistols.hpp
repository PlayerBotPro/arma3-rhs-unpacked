class hgun_P07_F;

class rhs_weap_cz99: hgun_P07_F
{
	DLC_AUTHOR;
	SCOPE_PUBLIC;
	INVENTORY_PICTURE(rhs_weap_cz99)
	displayName = $STR_RHS_WEAP_CZ99_DISPLAYNAME;
	model = "\rhssaf\addons\rhssaf_m_weapon_cz99\rhs_cz99";
	modelOptics = "-";

	weaponInfoType = "rhs_rscOptics_pistol_usf";

	magazines[] = {"rhssaf_mag_15Rnd_9x19_FMJ", "rhssaf_mag_15Rnd_9x19_JHP"};
	magazineWell[] = {CZ99_9x19_PARA};

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
		holsterScale = 1;
		holsterOffset = "holster";
		mass=20.9;

		class CowsSlot
		{
			ICON_OVERLAY_DISABLED
		};

		class MuzzleSlot {};
		class PointerSlot {};
	};

	muzzles[]={"this"};

	baseWeapon = "rhs_weap_cz99";
};

class rhs_weap_cz99_etched: rhs_weap_cz99
{
	DLC_AUTHOR;
	SCOPE_PUBLIC;
	INVENTORY_PICTURE(rhs_weap_cz99_etched)
	displayName = $STR_RHS_WEAP_CZ99_ETCHED_DISPLAYNAME;
	model = "\rhssaf\addons\rhssaf_m_weapon_cz99\rhs_cz99_etched";
	modelOptics = "-";
	weaponInfoType = "rhs_rscOptics_pistol_usf";
	baseWeapon = "rhs_weap_cz99_etched";
};
