class R_80mm_HE;
class rhs_ammo_atgmCore_base;
class rhs_ammo_atgmBase_base;
class rhs_ammo_3bk12_penetrator;
class rhs_ammo_9m112_penetrator;
class rhsusf_ammo_basic_penetrator;
class Missile_AGM_02_F: MissileBase
{
	class Components;
};

class rhs_ammo_zt3 : rhs_ammo_atgmBase_base
{
	HEAT_MACRO(rhs_ammo_zt3_penetrator)
	cost						= 50;
	hit							= 270;
	indirecthit					= 26;
	indirecthitrange			= 3.6;

	lockType					= 0;
	manualcontrol				= 0;
	maxcontrolrange				= 5000;
	maxspeed					= 250;
	maneuvrability				= 18;
	tracklead					= 1;
	trackoversteer				= 1;
	sideairfriction				= 0.03;
	initTime					= 0.3;
	thrust						= 172;
	thrusttime					= 10;
	timetolive					= 30;

	whistledist					= 3;
	model						= "\rhsgref\addons\rhsgref_airweapons\zt3\rhs_m_zt3_fly";
	proxyShape					= "\rhsgref\addons\rhsgref_airweapons\zt3\rhs_m_zt3";

	AIAmmoUsageFlags			= "64+128+512";
	missileManualControlCone	= 45;

	rhs_saclos			= 1;
	rhs_ballisticMode	= 0;
	rhs_guideMode		= "BEAMRIDER";
	class EventHandlers
	{
		class RHS_Guidance
		{
			fired = "_this call RHS_fnc_saclosGuide";
		};
	};
};
class rhs_ammo_zt3_penetrator: rhs_ammo_9m112_penetrator
{
	warheadName	= TandemHEAT;
	hit = 290;
	RHA(840,1000)
};

class rhs_ammo_zt6: Missile_AGM_02_F
{
	HEAT_MACRO(rhs_ammo_zt6_penetrator)

	maverickWeaponIndexOffset=0;
	model		= "\rhsgref\addons\rhsgref_airweapons\zt6\rhs_m_zt6_fly";
	proxyShape	= "\rhsgref\addons\rhsgref_airweapons\zt6\rhs_m_zt6";

	hit					= 400;
	indirectHit			= 35;
	indirectHitRange	= 8;

	cost		= 100;
	maxSpeed	= 530;

	airLock			= 0;
	irLock			= 0;
	laserLock		= 1;
	manualControl	= 1;
	maxControlRange	= 10000;
	trackOversteer	= 1;
	trackLead		= 1;
	maneuvrability	= 18;

	timeToLive		= 30;
	simulationStep	= 0.01;
	airFriction		= 0.1;
	sideAirFriction	= 0.3;
	initTime		= 0;
	thrustTime		= 4.1;
	thrust			= 300;

	class Direct{};
	flightProfiles[]= {Direct};

	fuseDistance		= 50;
	whistleDist			= 4;
	muzzleEffect		= "";
	effectsMissileInit	= "MissileDAR1";
	effectsMissile		= "missile1";

	aiAmmoUsageFlags	= "64+128 + 512";

	//Missile sensors definition
	lockSeekRadius				= 120;
	missileLockMaxDistance		= 10000;
	missileLockMinDistance		= 200;
	missileLockMaxSpeed			= 56;
	missileLockCone				= 50;
	missileKeepLockedCone		= 50;
	missileManualControlCone	= 45;
	weaponLockSystem			= "2 + 16";

	class Components : Components
	{
		class SensorsManagerComponent
		{
			class Components
			{
				class LaserSensorComponent : SensorTemplateLaser
				{
					class AirTarget
					{
						minRange = 2000;
						maxRange = 10000;
						objectDistanceLimitCoef = -1;
						viewDistanceLimitCoef = -1;
					};
					class GroundTarget
					{
						minRange = 10000;
						maxRange = 10000;
						objectDistanceLimitCoef = -1;
						viewDistanceLimitCoef = -1;
					};
					angleRangeHorizontal = 50;
					angleRangeVertical = 50;
					typeRecognitionDistance = -1;
					maxGroundNoiseDistance = 0;   // distance from the ground in meters, hard cap, above which the target will be visible even if still below groundNoiseDistanceCoef
					maxFogSeeThrough = 0.3;
				};
			};
		};
	};
};

class rhs_ammo_zt6_penetrator: rhsusf_ammo_basic_penetrator
{
	warheadName	= TandemHEAT;
	hit=310;
	RHA(1000,1000)
};