
class rhs_mag_GI2_420_HE : VehicleMagazine
{
	scope				= 2;
	displayname			= "20x139mm High-Explosive Indenciary";
	displaynameshort	= "HEI";
	ammo				= "rhs_ammo_20x139mm_HE";
	count				= 420;
	initSpeed			= 1050;
	maxLeadSpeed		= 200;
	tracersEvery		= 4;
	nameSound			= "cannon";
};

class rhs_mag_GI2_420_AP : VehicleMagazine
{
	scope				= 2;
	displayname			= "20x139mm Armor-Piercing Capped";
	displaynameshort	= "APC";
	ammo				= "rhs_ammo_20x139mm_AP";
	count				= 420;
	initSpeed			= 1100;
	maxLeadSpeed		= 200;
	tracersEvery		= 4;
	nameSound			= "cannon";
};
class rhs_mag_zpl20_hei : VehicleMagazine
{
	scope				= 2;
	model 				= \A3\Weapons_F\DynamicLoadout\PylonPod_Twin_Cannon_20mm.p3d;
	displayname			= "20x139mm High-Explosive Indenciary";
	displaynameshort	= "HEI";
	nameSound			= "cannon";
	ammo				= rhs_ammo_20x139mm_HE;
	count				= 210;
	initSpeed			= 1020;
	maxLeadSpeed		= 200;
	tracersEvery		= 4;
	muzzlePos 			= "muzzlePos";
	muzzleEnd 			= "muzzleEnd";
	hardpoints[]		= {"RHS_HP_ZPL20"};
	pylonWeapon			= RHS_weap_zpl20;
};

class rhs_mag_zpl20_apit : rhs_mag_zpl20_hei
{
	displayname			= "20x139mm Armor-Piercing Incendary Traced";
	displaynameshort	= "API-T";
	ammo				= rhs_ammo_20x139mm_AP;
};

class rhs_mag_zpl20_mixed : rhs_mag_zpl20_hei
{
	displayname			= "20x139mm Mixed";
	displaynameshort	= "Mixed";
	ammo = "B_20mm";
	//ammo				= rhs_ammo_20x139mm_mixed;
};

