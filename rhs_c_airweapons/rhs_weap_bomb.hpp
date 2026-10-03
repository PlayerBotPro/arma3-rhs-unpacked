
#define BOMB_VARIANTS_MACRO(INHERIT,BOMB_NAME)		\
class rhs_weap_##BOMB_NAME##: rhs_weap_##INHERIT	\
{													\
	magazines[]=									\
	{												\
		rhs_mag_##BOMB_NAME##,						\
		rhs_mag_##BOMB_NAME##_bd3_umk2a,			\
		rhs_mag_##BOMB_NAME##_ka52					\
	};												\
};
#define BOMB_VARIANTS_MACRO2(INHERIT,BOMB_NAME)		\
class rhs_weap_##BOMB_NAME##: rhs_weap_##INHERIT	\
{													\
	magazines[]=									\
	{												\
		rhs_mag_##BOMB_NAME##,						\
		rhs_mag_##BOMB_NAME##_ka52,					\
		rhs_mag_##BOMB_NAME##_bd3_umk2a,			\
		rhs_mag_##BOMB_NAME##_bd3_usk_a				\
	};												\
};
class rhs_weap_fab250: MissileLauncher
{
	cursor					= "bomb";
	cursoraim				= "EmptyCursor";
	cursorsize				= 0;
	displayname				= "$STR_RHS_FAB250_NAME";
	magazinereloadtime		= 0;
	magazines[]=
	{
		rhs_mag_fab250,
		rhs_mag_fab250_ka52,
		rhs_mag_fab250_bd3_umk2a,
		rhs_mag_fab250_bd3_usk_a,
		rhs_mag_fab250_2,
		rhs_mag_fab250_4
	};
	canlock					= 0;
	airateoffire			= 1;
	airateoffiredistance	= 500;
	minRange				= 100;
	minRangeProbab			= 0.5;
	midRange				= 250;
	midRangeProbab			= 1;
	maxRange				= 550;
	maxRangeProbab			= 0.6;
	ballisticsComputer		= 8;
	salvo					= 1;
	reloadTime				= 0.1;
	textureType = "semi";

	sounds[] = {};
	namesound="";
};
BOMB_VARIANTS_MACRO2(fab250,fab250_m62)
BOMB_VARIANTS_MACRO2(fab250,ofab250)
class rhs_weap_rbk250: rhs_weap_fab250
{
	displayname				= "$STR_RHS_RBK250_NAME";
};
BOMB_VARIANTS_MACRO2(rbk250,rbk250_ao1)
BOMB_VARIANTS_MACRO2(rbk250,rbk250_ptab25)
BOMB_VARIANTS_MACRO2(rbk250,rbk250_zab25t)

class rhs_weap_fab100: rhs_weap_fab250
{
	displayname				= "$STR_RHS_MAG_FAB100";
	magazines[]=
	{
		rhs_mag_fab100,
		rhs_mag_fab100_ka52,
		rhs_mag_fab100_bd3_umk2a,
		rhs_mag_fab100_bd3_usk_a,
		rhs_mag_fab100_mbd3_u4t,
		rhs_mag_fab100_mbd3_u6
	};
	reloadTime = 0.1;
};
class rhs_weap_fab100_mbd3_u4t: rhs_weap_fab100
{
	magazines[]=
	{
		rhs_mag_fab100_mbd3_u4t
	};
	modes[] = {"Single","Burst"};
	class Single: rhs_weap_fab250
	{
		textureType = "semi";
	};
	class Burst: rhs_weap_fab250
	{
		minrange	= 200;
		burst		= 4;
		salvo		= 2;
		reloadTime	= 0.3;
		textureType = "burst";
	};
};
class rhs_weap_fab100_mbd3_u6: rhs_weap_fab100_mbd3_u4t
{
	magazines[]=
	{
		rhs_mag_fab100_mbd3_u6
	};
	class Burst: Burst
	{
		burst		= 6;
	};
};


class rhs_weap_kab250: rhs_weap_fab250
{
	displayname		= "$STR_RHS_KAB250_NAME";
	canlock = 1;
	minRange = 300;
	minRangeProbab = 0.4;
	midRange = 1000;
	midRangeProbab = 0.95;
	maxRange = 7000;
	maxRangeProbab = 0.9;

	weaponLockDelay = 0.1;
	weaponLockSystem = CM_Lock_Laser;
	cmImmunity = 0.3;
	magazines[]=
	{
		rhs_mag_kab250,
		rhs_mag_kab250_int
	};
	
	modes[] = {"LoalAltitude"};
	class LoalAltitude : RocketPods
	{
		textureType = LOAL;
		displayName = LOAL;
		minRange = 300;
		minRangeProbab = 0.4;
		midRange = 1000;
		midRangeProbab = 0.95;
		maxRange = 8000;
		maxRangeProbab = 0.9;
	};
};
class rhs_weap_fab500: rhs_weap_fab250
{
	displayname		= "$STR_RHS_FAB500_NAME";
	magazines[]=
	{
		rhs_mag_fab500,
		rhs_mag_fab500_bd3_usk_a,
		rhs_mag_fab500_bd3_umk2a,
		rhs_mag_fab500_ka52,
		rhs_mag_fab500_m54,
		rhs_mag_fab500_m54_bd3_usk_a,
		rhs_mag_fab500_m54_bd3_umk2a,
		rhs_mag_fab500_m54_ka52
	};
};
class rhs_weap_ptb1150: rhs_weap_fab250
{
	displayname		= "$STR_RHS_PTB1150_NAME";
	magazines[]=
	{
		rhs_mag_ptb1150_ptb
	};
	airateoffire		= 1;
	airateoffiredistance	= 200;
	minrange		= 100;
	burst			= 2;
	reloadTime		= 0;
	salvo 			= 2;
};
class rhs_weap_kab500: rhs_weap_kab250
{
	displayname		= "$STR_RHS_KAB500_NAME";
	magazines[]=
	{
		rhs_mag_kab500,
		rhs_mag_kab500_bd3_umk2a
	};
};
class rhs_weap_kab500lk: rhs_weap_kab250
{
	displayname		= "$STR_RHS_KAB500LK_NAME";
	magazines[]=
	{
		rhs_mag_kab500lk,
		rhs_mag_kab500lk_bd3_umk2a
	};
};
class rhs_weap_kab500KR: rhs_weap_kab250
{
	displayname		= "$STR_RHS_KAB500KR_NAME";
	magazines[]=
	{
		rhs_mag_kab500KR,
		rhs_mag_kab500KR_bd3_umk2a
	};

	modes[] = {"Direct"};
	class Direct : rhs_weap_fab500 {};
};
class rhs_weap_kab500OD: rhs_weap_kab250
{
	displayname		= "$STR_RHS_KAB500OD_NAME";
	magazines[]=
	{
		rhs_mag_kab500OD,
		rhs_mag_kab500OD_bd3_umk2a
	};

	modes[] = {"Direct"};
	class Direct : rhs_weap_fab500 {};
};
class rhs_weap_rbk500: rhs_weap_fab500
{
	displayname		= "$STR_RHS_RBK500_NAME";
};
BOMB_VARIANTS_MACRO2(rbk500,rbk500_ao25)
BOMB_VARIANTS_MACRO2(rbk500,rbk500_ofab50)
BOMB_VARIANTS_MACRO2(rbk500,rbk500_spbed)
BOMB_VARIANTS_MACRO2(rbk500,rbk500_ptab1m)
BOMB_VARIANTS_MACRO2(rbk500,rbk500_zab25t)

class rhs_weap_kmgu2: rhs_weap_fab250
{
	displayname				= "$STR_RHS_KMGU2_NAME";
	magazines[]=
	{
		rhs_mag_kmgu2,
		rhs_mag_kmgu2_ka52,
		rhs_mag_kmgu2_bd3_umk2a,
		rhs_mag_kmgu2_bd3_usk_a
	};
	airateoffire			= 1;
	airateoffiredistance	= 200;
	minrange				= 100;
	burst					= 8;
	reloadTime				= 0.4;
	salvo 					= 2;
	modes[] = {"Instant","Fast","Medium","Slow"};
	class Instant: rhs_weap_fab250
	{
		burst		= 8;
		reloadTime	= 0.05;
		salvo		= 2;
		textureType = "fastAuto";
	};
	class Fast: Instant
	{
		reloadTime	= 0.2;
		textureType = "fullAuto";
	};
	class Medium: Instant
	{
		reloadTime	= 1;
		textureType	= "burst";
	};
	class Slow: Instant
	{
		reloadTime	= 1.5;
		textureType	= "semi";
	};
};
BOMB_VARIANTS_MACRO(kmgu2,kmgu2_ptab1m)
BOMB_VARIANTS_MACRO(kmgu2,kmgu2_ao25)
BOMB_VARIANTS_MACRO(kmgu2,kmgu2_ptm1)
BOMB_VARIANTS_MACRO(kmgu2,kmgu2_pfm1)