class B_30mm_AP;
class rhs_ammo_30x165mm_base : B_30mm_AP
{
	//allowAgaintInfantry=0;
	model				= "\A3\Weapons_f\Data\bullettracer\tracer_red";
	hit					= 72;
	indirectHit			= 0;
	indirectHitRange	= 0;
	visibleFire			= 32;
	audibleFire			= 32;
	visibleFireTime		= 3;
	cost				= 55;
	irLock				= 1;
	tracerScale			= 2;
	tracerStartTime		= 0.1;
	tracerEndTime		= 3.5;
	airFriction			= -0.000855;
	muzzleEffect		= "";
	caliber				= 4.17;
	airLock				= 1;
	timeToLive			= 25;
	weaponType			= "special";
	missileLockMaxDistance 	= 1000;
	missileLockMinDistance	= 80;

	aiAmmoUsageFlags	= AIAmmoUsageOffensiveVeh + AIAmmoUsageOffensiveArmour + AIAmmoUsageOffensiveAir;
};

class rhs_ammo_3ubr6 : rhs_ammo_30x165mm_base
{
	hit = 60;
	displayName = AMMO_STR(3UBR6);
	RHA(55,970)
	typicalspeed = 1120;
	airfriction = -0.00056;
};

class rhs_ammo_3ubr8 : rhs_ammo_30x165mm_base
{
	hit = 90;
	RHA(66,1120)
	typicalspeed = 1120;
	airfriction = -0.00056;
	cost = 75;
	class HitEffects
	{
		hitMetal = "ImpactMetalSabotSmall";
		hitMetalPlate = "ImpactMetalSabotSmall";
		hitBuilding = "ImpactConcreteSabotSmall";
		hitConcrete = "ImpactConcreteSabotSmall";
		hitGroundSoft = "ImpactEffectsGroundSabot";
		hitGroundHard = "ImpactEffectsGroundSabot";
		Hit_Foliage_green = "ImpactLeavesGreen";
		Hit_Foliage_Dead = "ImpactLeavesDead";
		Hit_Foliage_Green_big = "ImpactLeavesGreenBig";
		Hit_Foliage_Palm = "ImpactLeavesPalm";
		Hit_Foliage_Pine = "ImpactLeavesPine";
		hitFoliage = "ImpactLeaves";
		hitGlass = "ImpactGlass";
		hitGlassArmored = "ImpactGlassThin";
		hitWood = "ImpactWood";
		hitPlastic = "ImpactPlastic";
		hitRubber = "ImpactRubber";
		hitMan = "ImpactEffectsBlood";
		hitWater = "ImpactEffectsWater";
		default_mat = "ImpactEffectsGroundSabot";
	};
	class CamShakeExplode
	{
		power = "(45^0.5)";
		duration = "((round (45^0.5))*0.2 max 0.2)";
		frequency = 20;
		distance = "((45^0.5)*3)";
	};
	class CamShakeHit
	{
		power = 45;
		duration = "((round (45^0.25))*0.2 max 0.2)";
		frequency = 20;
		distance = 1;
	};
	class CamShakeFire
	{
		power = "(30^0.25)";
		duration = "((round (30^0.5))*0.2 max 0.2)";
		frequency = 20;
		distance = "((30^0.5)*8)";
	};
	class CamShakePlayerFire
	{
		power = 0.01;
		duration = 0.1;
		frequency = 20;
		distance = 1;
	};
};
class rhs_ammo_gsh30_bt : rhs_ammo_3ubr8
{
	cost = 10;
	AIAmmoUsageFlags	= "64 + 128 + 256";
	weaponType			= "mgun";
};
class rhs_ammo_gsh30_mixed: SubmunitionBase
{
	hit				= 90;
	typicalspeed	= 1120;
	airfriction		= -0.00056;

	visibleFire			= 32;
	audibleFire			= 32;
	visibleFireTime		= 3;

	airLock					= 1;
	AIAmmoUsageFlags		= "64 + 128 + 256";
	cost					= 10;
	model					= "\A3\Weapons_f\empty";
	submunitionAmmo[]		= {"rhs_ammo_3ubr8",0.33,"rhs_ammo_3uof8",0.33,"rhs_ammo_3uor6",0.33};
	weaponType				= "mgun";
	simulation				= "shotSubmunitions";
	triggerTime				= 0.01;
	missileLockMaxDistance	= 1000;
	missileLockMinDistance	= 80;
};
class rhs_ammo_3ubr11 : rhs_ammo_3ubr8
{
	hit = 95;
	RHA(92,1120)
};

class B_30mm_HE;
class rhs_ammo_3uor6 : B_30mm_HE
{
	hit					= 45;
	indirectHit			= 25;
	indirectHitRange	= 4;

	CraterEffects		= "ExploAmmoCrater";
	explosionEffects	= "ExploAmmoExplosion";

	cost			= 20;
	explosive		= 0.6;
	airfriction		= -0.0002;
	caliber			= 1.39;
	timeToLive		= 15;

	displayName = AMMO_STR(3UOR6);

	model					= "\A3\Weapons_f\Data\bullettracer\tracer_red";
	tracerScale				= 2;
	tracerStartTime			= 0.1;
	tracerEndTime			= 10;
	allowAgainstInfantry	= 1;
	aiAmmoUsageFlags		= AIAmmoUsageOffensiveInf + AIAmmoUsageOffensiveVeh + AIAmmoUsageOffensiveAir;
	weaponType				= "special";

	CfgAmmo_CamShakeExplode(30,5);
	CfgAmmo_CamShakeHit(30);
	CfgAmmo_CamShakeFire(30);
	CfgAmmo_CamShakePlayerFire(30);
};

class rhs_ammo_3uof8 : rhs_ammo_3uor6
{
	hit = 50;
	indirectHit = 33;
	displayName = AMMO_STR(3UOF8);
};

//same bullet in rhs_c_weapons
/*
class B_762x51_Ball;

class rhs_ammo_762x54mm : B_762x51_Ball
{
	model = "\A3\Weapons_f\Data\bullettracer\tracer_green";
	//muzzleEffect = "RHS_762x54mm_muzzle_flash";
};*/

class B_127x108_Ball;

class rhs_ammo_127x107mm : B_127x108_Ball
{
	hit				= 25;
	model			= "\A3\Weapons_f\Data\bullettracer\tracer_red";
	//muzzleEffect	= "RHS_127x107mm_muzzle_flash";
	timeToLive		= 25;
	tracerEndTime	= 3;		// seconds
};
class rhs_ammo_127x108mm : rhs_ammo_127x107mm
{
	//model			= "\A3\Weapons_f\Data\bullettracer\tracer_green";
};
class rhs_ammo_127x108mm_notracer : rhs_ammo_127x108mm {
	model = "\A3\Weapons_f\empty";
};
class rhs_ammo_127x108mm_x5: SubmunitionBase
{
	explosive 				= 0;
	allowAgainstInfantry	= 1;
	airlock					= 1;
	airfriction				= -0.0009;
	audiblefire				= 22;
	visiblefire				= 22;
	visiblefiretime			= 3;
	submunitionAmmo[] 		= {"rhs_ammo_127x108mm_notracer",0.85,"rhs_ammo_127x108mm",0.15};
	submunitionConeType[]=
	{
		"randomcenter",
		5
	};
	cost					= 10;
	submunitionConeAngle	= __EVAL(0.009 * 50);
	triggerTime				= 0.01;
	triggerSpeedCoef[]		= {0.8,1.0};
	model					= "\A3\Weapons_f\empty";
	cartridge				= "FxCartridge_127";
	explosionEffects		= "";
	CraterEffects			= "";
	hit						= 25;
	timeToLive				= 15;
	CfgAmmo_CamShakeExplode(12,3);
	CfgAmmo_CamShakeHit(12);
	CfgAmmo_CamShakeFire(1);
	CfgAmmo_CamShakePlayerFire(1);
};
class rhs_ammo_127x108mm_1SLT : rhs_ammo_127x108mm_x5
{
	//duplex ammo
	submunitionConeType[]=
	{
		"randomcenter",
		2
	};
	submunitionConeAngle	= __EVAL(0.009 * 23);
	weaponType = "mGun";
};
class rhs_ammo_127x108mm_1SLT_x5 : rhs_ammo_127x108mm_x5
{
	//duplex ammo
	submunitionConeType[]=
	{
		"randomcenter",
		10
	};
	submunitionConeAngle	= __EVAL(0.009 * 60);
};

//BS41
class rhs_ammo_145x115mm: rhs_ammo_127x107mm
{

	/*
		BS-41
		because of lack of data using standard airFriction in calculations
		40mm RHA @ 100m
		35mm RHA @ 350m
		32mm RHA @ 500m
		20mm RHA @ 1000m
	*/
	tracerEndTime	= 2.35;
	typicalSpeed=988;
	airFriction = -0.00052;
	RHA(41,988)
};
//BS32
class rhs_ammo_BS32_145x115mm: rhs_ammo_145x115mm
{
	RHA(30.5,988)
};
class B_35mm_AA;
class RHS_ammo_23mm_AA: B_35mm_AA //2 bullets at once
{
	hit					= 60;
	indirectHit			= 40;
	indirectHitRange	= 1.8;
	visibleFire			= 32;
	audibleFire			= 32;
	visibleFireTime		= 4;
	explosive			= 0.6;
	airLock				= 1;
	cost				= 15;
	timeToLive 			= 14;

	model			= "\A3\Weapons_f\Data\bullettracer\tracer_green";
	tracerScale		= 1.85;
	tracerStartTime	= 0.1; // seconds
	tracerEndTime	= 5.5; // seconds

	airFriction		= -0.000471;
	muzzleEffect	= "";
	caliber			= 1.11;
};
class RHS_ammo_23mm_AA_mixed: SubmunitionBase
{
	airLock 			= 1;
	AIAmmoUsageFlags	= AIAmmoUsageOffensiveAir+AIAmmoUsageOffensiveVeh+AIAmmoUsageOffensiveInf;
	airFriction			= -0.000471;
	cost				= 10;
	model 				= "\A3\Weapons_f\empty";
	submunitionAmmo[]	= {"rhs_ammo_bzt_23x115mm",0.25,"rhs_ammo_ofz_23x115mm",0.75};
	weaponType			= "cannon";
	simulation			= "shotSubmunitions";
	triggerTime			= 0.01;
};

class rhs_ammo_ofz_23x115mm: RHS_ammo_23mm_AA
{
	model="\A3\Weapons_f\empty";
};
class rhs_ammo_ofzt_23x115mm: rhs_ammo_ofz_23x115mm
{
	indirectHit			= 30;
	indirectHitRange	= 1.1; // As above but with base cavity for tracer and lesser HEI charge
	model="\A3\Weapons_f\Data\bullettracer\tracer_green";
};
class rhs_ammo_bzt_23x115mm: rhs_ammo_30x165mm_base
{
	explosive			= 0;
	hit					= 80;
	indirectHit			= 1;
	indirectHitRange	= 0.3;
	tracerEndTime		= 5.5;
	airFriction			= -0.000471;
	model="\A3\Weapons_f\Data\bullettracer\tracer_green";
	RHA(45,820)
};
class rhs_ammo_mixed_23x115mm: SubmunitionBase
{
	hit					= 60;
	indirectHit			= 40;
	indirectHitRange	= 1.8;

	visibleFire			= 32;
	audibleFire			= 32;
	visibleFireTime		= 4;

	airlock = 1;

	airFriction		= -0.000471;
	typicalSpeed	= 960;

	AIAmmoUsageFlags	= AIAmmoUsageOffensiveAir+AIAmmoUsageOffensiveVeh+AIAmmoUsageOffensiveInf;
	cost				= 10;
	model 				= "\A3\Weapons_f\empty";
	submunitionAmmo[]	= {"rhs_ammo_bzt_23x115mm",0.8,"rhs_ammo_ofz_23x115mm",0.2};
	weaponType			= "cannon";
	simulation			= "shotSubmunitions";
	triggerTime			= 0.01;
};
