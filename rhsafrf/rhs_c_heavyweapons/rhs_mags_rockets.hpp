
// Legacy class
class rhs_mag_40Rnd_122mm_rockets : VehicleMagazine
{
	scope = public;
	count = 40;
	initspeed = 690;
	ammo = "rhs_ammo_m21OF_HE";
	displayname = "$STR_RHS_122MMGRAD_NAME";
	nameSound = "rockets";
	muzzleImpulseFactor[] = {0.5,2};
};
// BM-21 Pylons
class rhs_mag_bm21_base: VehicleMagazine
{
	scope					= 0;
	model					= "\rhsafrf\addons\rhs_heavyweapons\grad\rhs_pylon_bm21";
	pylonWeapon				= "rhs_weap_bm21";
	nameSound				= "rockets";
	muzzleImpulseFactor[]	= {0.5,2};
	count					= 1;
	initspeed				= 690;
};
class rhs_mag_m21of_1: rhs_mag_bm21_base
{
	scope				= 2;
	ammo				= "rhs_ammo_m21OF_HE";
	displayname			= "M-21OF";
	displaynameShort	= "HE";
	descriptionShort	= "High explosive 18,4kg warhead. 20km range";
	hardpoints[]		= {"RHS_HP_BM21"};
};
class rhs_mag_9m28f_1: rhs_mag_m21of_1
{
	ammo				= "rhs_ammo_9m28f";
	displayname			= "9M28F";
	displaynameShort	= "HE FRAG";
	descriptionShort	= "High explosive fragmentation 21kg warhead. 15km range";
	pylonWeapon			= "rhs_weap_bm21_9m28f";
};
class rhs_mag_9m28k_1: rhs_mag_m21of_1
{
	ammo				= "rhs_ammo_9m28k";
	displayname			= "9M28K";
	displaynameShort	= "Cluster AT Mine";
	descriptionShort	= "Cluster AT mine munition. Deploys 3 PTM-3 mines. 13km range";
	pylonWeapon			= "rhs_weap_bm21_9m28k";
};
class rhs_mag_9m218_1: rhs_mag_m21of_1
{
	ammo				= "rhs_ammo_9m218";
	displayname			= "9M218";
	displaynameShort	= "Cluster HEAT";
	descriptionShort	= "Cluster HEAT munition. Deploys 45 HEAT elements with penetration ability up to 160mm. 30km range";
	pylonWeapon			= "rhs_weap_bm21_9m218";
};
class rhs_mag_9m521_1: rhs_mag_m21of_1
{
	ammo				= "rhs_ammo_9m521";
	displayname			= "9M521";
	displaynameShort	= "HE FRAG";
	pylonWeapon			= "rhs_weap_bm21_9m521";
	descriptionShort	= "High explosive fragmentation extended range 21kg warhead. 40km range";
};
class rhs_mag_9m522_1: rhs_mag_m21of_1
{
	ammo				= "rhs_ammo_9m522";
	displayname			= "9M522";
	displaynameShort	= "HE FRAG";
	descriptionShort	= "High explosive fragmentation extended range 25kg warhead. 37km range";
	pylonWeapon			= "rhs_weap_bm21_9m522";
};


class rhs_mag_pg15v_24 : VehicleMagazine
{
	scope = public;
	DISP_MAG_STR(PG15V);
	ammo = "rhs_ammo_pg15v";
	count = 24;
	initSpeed = 690;
	//initSpeed = 400;
};

class rhs_mag_pg15v_20 : rhs_mag_pg15v_24
{
	count = 20;
};

class rhs_mag_pg15v_12 : rhs_mag_pg15v_24
{
	count = 12;
};

class rhs_mag_og15v_16 : VehicleMagazine
{
	scope = public;
	DISP_MAG_STR(OG15V);
	ammo = "rhs_ammo_og15v";
	count = 16;
	initSpeed = 290;
};

class rhs_mag_og15v_20 : rhs_mag_og15v_16
{
	count = 20;
};

class rhs_mag_og15v_8 : rhs_mag_og15v_16
{
	count = 8;
};

class rhs_mag_pg9v : rhs_mag_pg15v_24
{
	DISP_MAG_STR(PG9V);
	ammo = "rhs_ammo_pg9v";
	count = 1;
	initSpeed = 435;
};
class rhs_mag_pg9n : rhs_mag_pg9v
{
	DISP_MAG_STR(PG9N);
	ammo = "rhs_ammo_pg9n";
};
class rhs_mag_pg9vnt : rhs_mag_pg9v
{
	DISP_MAG_STR(PG9VNT);
	ammo = "rhs_ammo_pg9vnt";
	initSpeed = 400;
};

class rhs_mag_og9v : rhs_mag_og15v_16
{
	DISP_MAG_STR(OG9V);
	ammo = "rhs_ammo_og9v";
	count = 1;
	initSpeed = 316;
};
class rhs_mag_og9vm : rhs_mag_og9v
{
	DISP_MAG_STR(OG9VM);
	ammo = "rhs_ammo_og9vm";
};