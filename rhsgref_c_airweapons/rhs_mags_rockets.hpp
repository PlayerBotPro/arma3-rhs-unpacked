class rhs_mag_zt3 : VehicleMagazine
{
	ammo				= "rhs_ammo_zt3";
	displayname			= "ZT3 Ingwe";
	displaynameshort		= "ZT3";
	namesound			= "missiles";
	count				= 1;
	initspeed			= 80;
	weight 				= 37.5;
	maxLeadSpeed 		= 33;
};
class rhs_mag_zt3_4 : rhs_mag_zt3
{
	scope				= 2;
	model 				= rhsgref\addons\rhsgref_airweapons\zt3\rhs_pylon_m_zt3_launcher.p3d;
	count				= 4;
	pylonWeapon			= "rhs_weap_zt3_Launcher";
	hardpoints[] 			= {"RHS_HP_INGWE"};
	mirrorMissilesIndexes[] 	= {2,1,4,3};
	weight				= __EVAL(37.5*4);
	mass				= __EVAL(37.5*4);
};

class rhs_mag_zt6: VehicleMagazine
{
	ammo				= "rhs_ammo_zt6";
	displayName			= "ZT6 Mokopa";
	displaynameshort		= "ZT6";
	nameSound			= "missiles";
	count				= 1;
	initSpeed			= 0;
	maxLeadSpeed		= 35;
	weight				= 50;
};

class rhs_mag_zt6_4: rhs_mag_zt6
{
	scope				= 2;
	model 				= rhsgref\addons\rhsgref_airweapons\zt6\rhs_pylon_m_zt6_launcher.p3d;
	count				= 4;
	pylonWeapon			= "rhs_weap_zt6_Launcher";
	hardpoints[] 			= {"RHS_HP_MOKOPA"};
	mirrorMissilesIndexes[] 	= {2,1,4,3};
	weight				= __EVAL(50*4);
	mass				= __EVAL(50*4);
};