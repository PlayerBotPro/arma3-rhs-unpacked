class rhsusf_20mm_M61A2: VehicleMagazine
{
	scope					= 2;
	displayName				= "M61A2";
	displayNameMFDFormat	= "M61A2: %1";
	ammo					= "rhsusf_ammo_M61A2";
	count					= 480;
	initSpeed				= 1080;
};

class rhs_mag_gau19_air_base: VehicleMagazine
{
	scope				= 0;
	ammo				= rhs_ammo_127x99_SLAP_Tracer_Red;
	count				= 1300;
	displayname			= "GAU-19/A";
	displayNameShort	= "12.7x99mm";
	descriptionShort	= "×1300 12.7×99mm M962 (SLAP-T)";
	initspeed			= 1210;
	maxleadspeed		= 200;
	pylonWeapon			= RHS_weap_gau19;
	muzzlePos			= "muzzlePos";
	muzzleEnd			= "muzzleEnd";
	weight				= 200;
	mass				= 200;
	tracersEvery		= 1;
};
class rhsusf_mag_gau19_melb_right: rhs_mag_gau19_air_base
{
	scope			= 2;
	hardpoints[]	= {"RHS_HP_MELB_R"};
	model			= \rhsusf\addons\rhsusf_airweapons\MELB\rhsusf_g_GAU19_R;
};
class rhsusf_mag_gau19_melb_left: rhs_mag_gau19_air_base
{
	scope			= 2;
	hardpoints[]	= {"RHS_HP_MELB_L"};
	model			= \rhsusf\addons\rhsusf_airweapons\MELB\rhsusf_g_GAU19_L;
};

class rhs_mag_m134_pylon_base: VehicleMagazine
{
	scope				= 0;
	ammo				= rhs_ammo_762x51_M61_AP;
	displayname			= "M134";
	displayNameShort	= "7.62x51 mm";
	initspeed			= 910;
	pylonWeapon			= RHS_weap_m134_pylon;
	muzzlePos			= "muzzlePos";
	muzzleEnd			= "muzzleEnd";
	weight				= 180;
	mass				= 180;
	tracersEvery		= 3;
	lastRoundsTracer	= 4;

	model				= \rhsusf\addons\rhsusf_airweapons\MELB\rhsusf_g_m134;
};
class rhs_mag_m134_pylon_3000: rhs_mag_m134_pylon_base
{
	descriptionShort	= "×3000 7.62×51mm M61/M62 (AP/T)";
	scope				= 2;
	hardpoints[]		= {"RHS_HP_MELB_M134"};
	count				= 3000;
};