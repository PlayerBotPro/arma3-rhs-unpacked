class rhs_mag_l159_fuelpod : VehicleMagazine
{
	model				= rhsgref\addons\rhsgref_airweapons\rhs_pylon_fuelpod;
	ammo				= rhs_ammo_l159_fuelpod_proxy;
	displayName			= "Fuel Pod";
	displayNameShort	= "Fuel Pod";
	count				= 1;
	weight				= 100;
	pylonweapon			= "rhsusf_weap_DummyLauncher";
	hardpoints[]		= {"RHS_HP_L159_FUELPOD"};
};
class rhs_mag_l159_fuelpod_grey : rhs_mag_L159_fuelpod
{
	displayName			= "Fuel Pod (Grey)";
	displayNameShort	= "Fuel Pod (Grey)";
	model				= rhsgref\addons\rhsgref_airweapons\rhs_pylon_L159_fuelpod_grey;
};