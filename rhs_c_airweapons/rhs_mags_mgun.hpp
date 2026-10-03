// UPK-23-250 pods
class rhs_mag_upk23_ofz: VehicleMagazine
{
	model				= \rhsafrf\addons\rhs_a2port_air\data\rhs_pylon_g_upk23;
	scope				= 2;
	ammo				= rhs_ammo_ofz_23x115mm;
	count				= 250;
	displayname			= "UPK-23-250 OFZ";
	displayNameShort	= "HE";
	initspeed			= 720;
	maxleadspeed		= 5;
	namesound			= "";
	// dynamic loadout parameters
	hardpoints[]		= {"RHS_HP_UPK23"};
	pylonWeapon			= RHS_Weap_GSh23L;
	muzzlePos 			= "muzzlePos";
	muzzleEnd 			= "muzzleEnd";
	weight				= 266;
	mass				= 266;
	tracersEvery 		= 1;
};
class rhs_mag_upk23_ofzt: rhs_mag_upk23_ofz
{
	ammo				= rhs_ammo_ofzt_23x115mm;
	displayname			= "UPK-23-250 OFZT";
	displayNameShort	= "HE-T";
};
class rhs_mag_upk23_btz: rhs_mag_upk23_ofz
{
	ammo				= rhs_ammo_bzt_23x115mm;
	displayname			= "UPK-23-250 BZT";
	displayNameShort	= "AP-T";
};
class rhs_mag_upk23_mixed: rhs_mag_upk23_ofz
{
	ammo				= rhs_ammo_mixed_23x115mm;
	displayname			= "UPK-23-250 Mixed";
	displayNameShort	= "Mixed";
};
#define UPK23_KA52 \
	model				= \rhsafrf\addons\rhs_a2port_air\data\rhs_pylon_g_upk23_ka52;\
	hardpoints[]		= {"RHS_HP_UPK23_KA52"};
class rhs_mag_upk23_ka52_ofz: rhs_mag_upk23_ofz 	{UPK23_KA52};
class rhs_mag_upk23_ka52_ofzt: rhs_mag_upk23_ofzt 	{UPK23_KA52};
class rhs_mag_upk23_ka52_btz: rhs_mag_upk23_btz 	{UPK23_KA52};
class rhs_mag_upk23_ka52_mixed: rhs_mag_upk23_mixed {UPK23_KA52};