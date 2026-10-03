class  MissileLauncher;
class Missile_AGM_02_Plane_CAS_01_F;

class rhs_weap_zt3_Launcher: MissileLauncher
{
	cursor		= "missile";
	cursoraim	= "EmptyCursor";
	cursorsize	= 0;
	displayname = "ZT3 Ingwe";
	magazines[] =
	{
		"rhs_mag_zt3",
		"rhs_mag_zt3_4"
	};
	airateoffire = 2.5;
	airateoffiredistance = 500;
	maxrange = 5000; maxrangeprobab = 0.6;
	midrange = 3000; midrangeprobab = 1.0;
	minrange = 250; minrangeprobab = 0.9;

	reloadtime = 1.5;
	autoreload = 0;
	magazineReloadTime = 30;
	holdsterAnimValue = 1;
	textureType = "semi";

	canlock = 1;
	weaponLockType	= CM_Lock_Visual;
};

class rhs_weap_zt6_Launcher: Missile_AGM_02_Plane_CAS_01_F
{
	scope			= 2;
	autoFire		= 0;
	displayName		= "ZT-6 Mokopa";
	missileLockCone		= 65;
	cursorSize		= 0;
	cursor			= "missile";
	cursorAim		= "EmptyCursor";

	aiRateOfFire			= 5;
	aiRateOfFireDistance	= 4000;
	maxrange				= 10000;
	maxrangeprobab			= 0.5;
	midrange				= 5000;
	midrangeprobab			= 0.9;
	minrange				= 250;
	minrangeprobab			= 0.8;
	
	modes[]					= {"this"};

	nameSound="MissileLauncher";
	reloadTime=1;
	magazines[]=
	{
		"rhs_mag_zt6_4",
		"rhs_mag_zt6"
	};
	canLock=2;
	weaponLockDelay=3;
};