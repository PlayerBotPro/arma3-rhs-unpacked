
class M_Titan_AT: MissileBase
{
	class Components;
};
class rhs_ammo_atgmCore_base : M_Titan_AT
{
	scope				= 2;
	model				= "rhsafrf\addons\rhs_heavyweapons\atgm\rhs_atgm_base";

	hit					= 240;
	indirectHit			= 20;
	indirectHitRange	= 4.2;

	missileManualControlCone = 50;

	canLock				= 0;
	manualControl		= 1;
	maxControlRange		= 4500;
	trackOversteer		= 0.3;
	trackLead			= 0.2;
	weaponLockSystem	= CM_Lock_Visual;

	maneuvrability		= 8;
	timeToLive			= 25;
	simulationStep		= 0.005;
	sideAirFriction		= 0.05;
	maxSpeed			= 200;
	initTime			= 0;
	thrustTime			= 1.5;
	thrust				= 250;

	deflecting			= 0;
	fuseDistance		= 50;
	whistleDist			= 2;

	class Direct;
	flightProfiles[] = {Direct};

	CraterEffects		= "ATRocketCrater";
	explosionEffects	= "ATRocketExplosion";
	effectsMissileInit	= "RocketBackEffectsNLAW";
	effectsMissile		= "RHS_missile2";
	textureType			= "semi";
	lockType			= 0;
	soundFly[] = {"A3\Sounds_F\weapons\Rockets\rocket_fly_2",1,1.0,800};
	class Components: Components
	{
		class SensorsManagerComponent
		{
			class Components
			{
				class VisualSensorComponent : SensorTemplateVisual
				{
					SENS_RANGES_WVR(5000,5000)
					maxTrackableSpeed = 35;
					nightRangeCoef = 0.8;
					angleRangeHorizontal = 5;
					angleRangeVertical = 5;
				};
			};
		};
	};
	class EventHandlers;
};

class rhs_ammo_atgmBase_base : M_Titan_AT
{
	model				= "rhsafrf\addons\rhs_heavyweapons\atgm\rhs_atgm_base";

	flightProfiles[]= {Direct};

	//hit				= 450;
	hit					= 240;
	indirectHit			= 20;
	indirectHitRange	= 4.2;

	cost				= 800;
	maxSpeed			= 115;	// max speed on level road, km/h

	canlock				= 0;
	lockType			= 0;
	irLock				= 1;
	weaponLockSystem	= CM_Lock_Visual;

	trackOversteer		= 0.3;
	trackLead			= 0.85;

	manualControl		= 1;
	maxControlRange		= 3000;	// max range for manual control, 0 = no control (passive weapon)
	initTime			= 0;

	missileManualControlCone = 50;

	airfriction			= -2e-005;
	sideairfriction		= 0.14;
	thrustTime			= 2.5;
	thrust				= 100;
	maneuvrability		= 4.0;

	typicalSpeed		= 115;
	fuseDistance		= 100;

	effectsMissileInit	= "RocketBackEffectsNLAW";
	effectsMissile		= "RHS_missile2";
	timeToLive			= 26;

	textureType			= "semi";
	soundFly[]			= {"A3\Sounds_F\weapons\Rockets\rocket_fly_2",1,1.0,800};
	class Components: Components
	{
		class SensorsManagerComponent
		{
			class Components
			{
				class VisualSensorComponent : SensorTemplateVisual
				{
					SENS_RANGES_WVR(5000,5000)
					maxTrackableSpeed = 35;
					nightRangeCoef = 0.8;
					angleRangeHorizontal = 5;
					angleRangeVertical = 5;
				};
			};
		};
	};
	class EventHandlers;
};
// 9M14 Malyutka
class rhs_ammo_9m14 : rhs_ammo_atgmBase_base
{
	HEAT_MACRO(rhs_ammo_9m14m_penetrator)
	model = "rhsafrf\addons\rhs_heavyweapons\atgm\rhs_9m14_fly";
	proxyShape = "rhsafrf\addons\rhs_heavyweapons\atgm\rhs_9m14";

	thrustTime	= 1.5;
	thrust		= 80;

	manualControl				= 0;
	missileManualControlCone	= 30;
	lockType					= 0;
	class EventHandlers: EventHandlers
	{
		class RHS_Guidance
		{
			fired = "_this call RHS_fnc_mclosGuide";
		};
	};
};

class rhs_ammo_9m14m : rhs_ammo_9m14
{
	thrustTime = 2.5;
	thrust = 100;
	HEAT_MACRO(rhs_ammo_9m14m_penetrator)
};
class rhs_ammo_9m14m_penetrator: rhs_ammo_base_penetrator
{
	RHA(400,1000)
};
class rhs_ammo_mclos_training : rhs_ammo_9m14m
{
	hit = 24;
	HEAT_MACRO(rhs_ammo_mclos_training_penetrator)
};
class rhs_ammo_mclos_training_penetrator: rhs_ammo_base_penetrator
{
	RHA(10,1000)
};
// 9M17 Falanga
class rhs_ammo_9m17 : rhs_ammo_atgmBase_base
{
	HEAT_MACRO(rhs_ammo_9m17_penetrator)
	model					= rhsafrf\addons\rhs_a2port_air\data\rhs_m_9m17_fly;
	proxyShape				= rhsafrf\addons\rhs_a2port_air\data\rhs_m_9m17;

	typicalSpeed	= 115;
	thrustTime		= 2.5;
	thrust			= 150;
	maxSpeed		= 125;

	manualControl				= 0;
	lockType					= 0;

	maverickWeaponIndexOffset=40;
	class EventHandlers: EventHandlers
	{
		class RHS_Guidance
		{
			fired = "_this call RHS_fnc_mclosGuide";
		};
	};
};
class rhs_ammo_9m17_penetrator: rhs_ammo_base_penetrator
{
	RHA(500,1000)
};
class rhs_ammo_9m17p :rhs_ammo_9m17
{
	HEAT_MACRO(rhs_ammo_9m17p_penetrator)

	maxControlRange	= 4000;
	missileManualControlCone	= 120;
	maxSpeed		= 175;
	thrust			= 170;

	rhs_saclos			= 1;
	rhs_ballisticMode	= 1;
	rhs_guideMode		= "WIRE";
	class EventHandlers: EventHandlers
	{
		class RHS_Guidance
		{
			fired = "_this call RHS_fnc_saclosGuide";
		};
	};
};
class rhs_ammo_9m17p_penetrator: rhs_ammo_base_penetrator
{
	RHA(550,1000)
};

// 9K112 Kobra (Tandem)
class rhs_ammo_9m112: rhs_ammo_atgmCore_base
{
	warheadName		= TandemHEAT;
	HEAT_MACRO(rhs_ammo_9m112_penetrator)

	manualcontrol		= 0;
	airLock				= 1;
	trackLead 			= 0;

	effectsMissileInit	= "RHS_ATGM_Pusher_Eject";

	rhs_saclos			= 1;
	rhs_ballisticMode	= 1;
	rhs_guideMode		= "RADIO";
	class EventHandlers: EventHandlers
	{
		class RHS_Guidance
		{
			fired = "_this call RHS_fnc_saclosGuide";
		};
	};
};
class rhs_ammo_9m112m: rhs_ammo_9m112
{
	HEAT_MACRO(rhs_ammo_9m112m_penetrator)
	//hit = 650;

	inittime		= 0;
	irlock			= 1;
	laserlock		= 0;
	maneuvrability	= 9;
	sideairfriction	= 0.1;
	maxcontrolrange	= 4000;
	maxspeed		= 500;

	thrust		= 112;
	thrusttime	= 6;
	timetolive	= 30;
};
class rhs_ammo_9m112m2: rhs_ammo_9m112m
{
	HEAT_MACRO(rhs_ammo_9m112m_penetrator)
};
class rhs_ammo_9m124: rhs_ammo_9m112m
{
	HEAT_MACRO(rhs_ammo_9m124_penetrator)
};
class rhs_ammo_9m112_penetrator: rhs_ammo_base_penetrator
{
	warheadName		= TandemHEAT;
	RHA(600,1000)
};
class rhs_ammo_9m112m_penetrator: rhs_ammo_9m112_penetrator
{
	RHA(720,1000)
};
class rhs_ammo_9m112m2_penetrator: rhs_ammo_9m112_penetrator
{
	RHA(840,1000)
};
class rhs_ammo_9m124_penetrator: rhs_ammo_9m112_penetrator
{
	RHA(940,1000)
};
class rhs_ammo_9m128 : rhs_ammo_atgmCore_base
{
	HEAT_MACRO(rhs_ammo_9m128_penetrator)
	maxControlRange = 5000;
};
class rhs_ammo_9m128_penetrator: rhs_ammo_9m112_penetrator
{
	warheadName		= TandemHEAT;
	hit = 250;
	RHA(750,1000)
};
// 9m111 Fagot
class rhs_ammo_9m111 : rhs_ammo_atgmBase_base
{
	model = "rhsafrf\addons\rhs_heavyweapons\atgm\rhs_9m113";
	HEAT_MACRO(rhs_ammo_9m111_penetrator)

	indirectHit = 20;
	indirectHitRange = 4.2;

	initTime = 0.25;
	maneuvrability = 8;

	trackOversteer = 0.3;
	trackLead = 0;

	sideairfriction = 0.05;
	simulationstep = 0.001;

	thrustTime = 1.5;	//21
	thrust = 200;

	typicalSpeed=900;
	fuseDistance=70;
	timeToLive=20;

	maxSpeed = 186;	// max speed on level road, km/h
	manualControl = 0; // script controls guidance
	missileManualControlCone	= 60;
	maxControlRange = 2000;	// max range for manual control, 0 = no control (passive weapon)*/

	rhs_saclos = 1;
	rhs_ballisticMode = 0;
	rhs_guideMode = "WIRE";
	class EventHandlers: EventHandlers
	{
		class RHS_Guidance
		{
			fired = "_this call RHS_fnc_saclosGuide";
		};
	};
};
class rhs_ammo_9m111m : rhs_ammo_9m111
{
	HEAT_MACRO(rhs_ammo_9m111m_penetrator)
	maxControlRange = 2500;
};

class rhs_ammo_9m111_penetrator: rhs_ammo_base_penetrator
{
	RHA(400,1000)
};
class rhs_ammo_9m111m_penetrator: rhs_ammo_base_penetrator
{
	RHA(600,1000)
};

// 9m113 Konkurs
class rhs_ammo_9m113 : rhs_ammo_atgmBase_base
{
	model = "rhsafrf\addons\rhs_heavyweapons\atgm\rhs_9m113";
	HEAT_MACRO(rhs_ammo_9m113_penetrator)

	//hit = 650;
	indirectHit = 20;
	indirectHitRange = 4.2;

	initTime = 0.25;
	maneuvrability = 14;

	trackOversteer = 0.6;
	trackLead = 0.6;

	sideairfriction = 0.05;
	simulationstep = 0.001;

	thrustTime = 1.5;	//21
	thrust = 200;

	typicalSpeed=900;
	fuseDistance=70;
	timeToLive=20;

	maxSpeed					= 200;	// max speed on level road, km/h
	manualControl				= 0; // script controls guidance
	missileManualControlCone	= 60;
	maxControlRange				= 4000;	// max range for manual control, 0 = no control (passive weapon)*/

	rhs_saclos = 1;
	rhs_ballisticMode = 0;
	rhs_guideMode = "WIRE";
	class EventHandlers: EventHandlers
	{
		class RHS_Guidance
		{
			fired = "_this call RHS_fnc_saclosGuide";
		};
	};
};
class rhs_ammo_9m113m : rhs_ammo_9m113
{
	HEAT_MACRO(rhs_ammo_9m113m_penetrator)
};

class rhs_ammo_9m113_penetrator: rhs_ammo_base_penetrator
{
	RHA(600,1000)
};
class rhs_ammo_9m113m_penetrator: rhs_ammo_base_penetrator
{
	warheadName		= TandemHEAT;
	RHA(750,1000)
};

// 9m117 Bastion
class rhs_ammo_9m117 : rhs_ammo_atgmCore_base
{
	HEAT_MACRO(rhs_ammo_9m117_penetrator)

	model				= "rhsafrf\addons\rhs_heavyweapons\atgm\rhs_atgm_base";
	indirectHitRange	= 4.2;
	cost				= 100;

	canlock		= true;
	irlock		= 1;
	airLock		= 1;
	laserlock	= 0;

	manualControl				= 0; // script controls guidance
	missileManualControlCone	= 20;
	maxcontrolrange				= 4000;
	weaponLockSystem			= "1+4";

	maxSpeed		= 380; // max speed on level road, km/h
	typicalSpeed	= 300;
	inittime		= 0;
	thrust			= 122;
	thrusttime		= 6;
	timetolive		= 30;
	airFriction		= 0.1;
	sideairfriction	= 0.1;
	trackOversteer	= 0.3;
	trackLead		= 1;
	maneuvrability	= 17.0;

	rhs_saclos			= 1;
	rhs_ballisticMode	= 1;
	rhs_guideMode		= "BEAMRIDER";
	class EventHandlers: EventHandlers
	{
		class RHS_Guidance
		{
			fired = "_this call RHS_fnc_saclosGuide";
		};
	};
};
class rhs_ammo_9m117_penetrator: rhs_ammo_base_penetrator
{
	RHA(600,1000)
};

// 9m117m1 Kan
class rhs_ammo_9m117m : rhs_ammo_9m117
{
	maxcontrolrange	= 5500;
	airFriction		= 0.035;
	thrust			= 222;
	thrusttime		= 7;
	warheadName		= TandemHEAT;
	HEAT_MACRO(rhs_ammo_9m117m_penetrator)
};
class rhs_ammo_9m117m_penetrator: rhs_ammo_base_penetrator
{
	warheadName		= TandemHEAT;
	RHA(650,1000)
};
// 9m117m1 Arkan
class rhs_ammo_9m117m1 : rhs_ammo_9m117m
{
	maxcontrolrange = 6000;
	HEAT_MACRO(rhs_ammo_9m117m1_penetrator)
};
class rhs_ammo_9m117m1_penetrator: rhs_ammo_base_penetrator
{
	warheadName		= TandemHEAT;
	RHA(750,1000)
};

class rhs_ammo_9m118 : rhs_ammo_9m117
{
	HEAT_MACRO(rhs_ammo_9m118_penetrator)
};
class rhs_ammo_9m118_penetrator: rhs_ammo_base_penetrator
{
	RHA(650,1000)
};
// 9M119 Svir
class rhs_ammo_9m119 : rhs_ammo_atgmCore_base
{
	HEAT_MACRO(rhs_ammo_9m119_penetrator)

	maxControlRange = 5000;

	trackOversteer	= 0.3;
	trackLead		= 0.3;
	maneuvrability	= 9.0;
	typicalSpeed	= 120;
	maxSpeed		= 420; // max speed on level road, km/h
	inittime		= 0.1;
	airLock 		= 1;
	irlock			= 1;
	laserlock		= 0;
	manualControl	= 0; // script controls guidance
	sideairfriction	= 0.1;

	thrust				= 112;
	thrusttime			= 6;
	timetolive			= 30;
	weaponLockSystem	= "1+4";

	effectsMissileInit	= "RHS_ATGM_Pusher_Eject";

	rhs_saclos			= 1;
	rhs_guideMode		= "BEAMRIDER";
	rhs_ballisticMode	= 1;
	class EventHandlers: EventHandlers
	{
		class RHS_Guidance
		{
			fired = "_this call RHS_fnc_saclosGuide";
		};
	};
};
class rhs_ammo_9m119_penetrator: rhs_ammo_base_penetrator
{
	hit = 250;
	RHA(700,1000)
};
// 9M119 Refleks (Tandem)
class rhs_ammo_9m119m : rhs_ammo_9m119
{
	HEAT_MACRO(rhs_ammo_9m119m_penetrator)
};
class rhs_ammo_9m119m_penetrator: rhs_ammo_base_penetrator
{
	warheadName		= TandemHEAT;
	RHA(850,1000)
};
class rhs_ammo_9m119f : rhs_ammo_9m119
{
	AIAmmoUsageFlags = "64+128+256";
	submunitionAmmo[] = {};

	hit					= 100;
	indirectHit			= 70;
	indirectHitRange	= 12;
	cost				= 100;

	explosive				= 1;
	allowAgainstInfantry	= 1;

	CraterEffects		= "ArtyShellCrater";
	explosionEffects	= "RHS_FAE_Explosion";
	effectsMissile		= "rhs_missile3";

	class CamShakeExplode
	{
		power = "(210*0.2)";
		duration = "((round (210^0.5))*0.2 max 0.2)";
		frequency = 20;
		distance = "((5 + 210^0.5)*8)";
	};
	class CamShakeFire
	{
		power = 10;
		duration = 0.5;
		frequency = 20;
		distance = 30;
	};
	class CamShakePlayerFire
	{
		power = 5;
		duration = 0.1;
		frequency = 20;
	};
};


// 9M115 Metis
class rhs_ammo_9m115 : rhs_ammo_9m119
{
	model = \A3\Weapons_F_Tank\Launchers\Vorona\Vorona_missile_heat_fly;
	HEAT_MACRO(rhs_ammo_9m115_penetrator)
	maxControlRange = 1000;
	initTime = 0.25;
	maxSpeed = 223; // max speed on level road, km/h
	timetolive = 12;
	effectsMissileInit = "RocketBackEffectsStaticRPG";
	effectsMissile = "rhs_missile2";
	class CamShakeExplode {
	    power = "(55*0.2)";
	    duration = "((round (55^0.5))*0.2 max 0.2)";
	    frequency = 20;
	    distance = "((4 + 55^0.5)*8)";
	};
	class CamShakeHit {
	    power = 110;
	    duration = "((round (110^0.25))*0.2 max 0.2)";
	    frequency = 20;
	    distance = 1;
	};
	class CamShakeFire {
	    power = "(60^0.25)";
	    duration = "((round (60^0.5))*0.2 max 0.2)";
	    frequency = 20;
	    distance = "((60^0.5)*8)";
	};
	class CamShakePlayerFire {
	    power = 3;
	    duration = 0.1;
	    frequency = 20;
	    distance = 1;
	};
	rhs_saclos = 1;
	rhs_ballisticMode = 1;
	rhs_guideMode = "WIRE";
	class EventHandlers: EventHandlers
	{
		class RHS_Guidance
		{
			fired = "_this call RHS_fnc_saclosGuide";
		};
	};
};
class rhs_ammo_9m115_penetrator: rhs_ammo_base_penetrator
{
	RHA(550,1000)
};

// 9M131 Metis-M
class rhs_ammo_9m131 : rhs_ammo_9m115
{
	HEAT_MACRO(rhs_ammo_9m131_penetrator)
	maxControlRange = 1500;
	airFriction = 0.14;
	thrusttime = 2;
};
class rhs_ammo_9m131_penetrator: rhs_ammo_base_penetrator
{
	warheadName		= TandemHEAT;
	RHA(850,1000)
};

// 9M131 Metis-M1
class rhs_ammo_9m131m : rhs_ammo_9m131
{
	HEAT_MACRO(rhs_ammo_9m131m_penetrator)
	maxControlRange = 2000;
};
class rhs_ammo_9m131m_penetrator: rhs_ammo_base_penetrator
{
	warheadName		= TandemHEAT;
	RHA(950,1000)
};

class rhs_ammo_9m131f : rhs_ammo_9m131m
{
	AIAmmoUsageFlags = "64+128+256";
	submunitionAmmo		= "";

	hit = 120;
	indirectHit = 100;
	indirectHitRange = 12;
	cost = 100;

	explosive = 1;
	allowAgainstInfantry = 1;

	CraterEffects = "ArtyShellCrater";
	explosionEffects = "RHS_FAE_Explosion";
	effectsMissile = "rhs_missile3";

	class CamShakeExplode
	{
		power = "(210*0.2)";
		duration = "((round (210^0.5))*0.2 max 0.2)";
		frequency = 20;
		distance = "((5 + 210^0.5)*8)";
	};
	class CamShakeFire
	{
		power = 10;
		duration = 0.5;
		frequency = 20;
		distance = 30;
	};
	class CamShakePlayerFire
	{
		power = 5;
		duration = 0.1;
		frequency = 20;
	};
};


// 9M133 Kornet (Tandem)
class rhs_ammo_9m133 : rhs_ammo_atgmBase_base
{
	model = "rhsafrf\addons\rhs_heavyweapons\atgm\rhs_9m133";
	HEAT_MACRO(rhs_ammo_9m133_penetrator)

	indirectHit = 18;
	indirectHitRange = 4.5;
	whistleDist = 3;
	canlock = 1;
	irLock = 1;

	trackOversteer = 0.3;
	trackLead = 1;
	maneuvrability = 9.0;
	typicalSpeed = 120;
	maxSpeed = 300; // max speed on level road, km/h
	inittime = 0.25;
	laserlock = 0;
	manualControl = 0; // script controls guidance
	missileManualControlCone	= 20;
	airFriction = 0.13;
	sideairfriction = 0.1;
	maxcontrolrange = 5000;

	thrust = 152;
	thrusttime = 3;
	timetolive = 30;

	rhs_saclos = 1;
	rhs_ballisticMode = 1;
	rhs_guideMode = "BEAMRIDER";
	class EventHandlers: EventHandlers
	{
		class RHS_Guidance
		{
			fired = "_this call RHS_fnc_saclosGuide";
		};
	};
};
class rhs_ammo_9m133_penetrator: rhs_ammo_base_penetrator
{
	warheadName		= TandemHEAT;
	hit = 290;
	RHA(1000,1000)
};

// 9M133F Kornet (Thermobaric)
class rhs_ammo_9m133f : rhs_ammo_9m131f
{
	hit = 125;
	indirectHit = 100;
	indirectHitRange = 12;
};

// 9M133-1 Kornet (Tandem)
class rhs_ammo_9m1331 : rhs_ammo_9m133
{
	HEAT_MACRO(rhs_ammo_9m1331_penetrator)
};
class rhs_ammo_9m1331_penetrator : rhs_ammo_9m133_penetrator
{
	warheadName		= TandemHEAT;
	RHA(1100, 1000)
};

// 9M133M2 Kornet-D (Tandem)
class rhs_ammo_9m133m2 : rhs_ammo_9m133
{
	HEAT_MACRO(rhs_ammo_9m133m2_penetrator)
};
class rhs_ammo_9m133m2_penetrator : rhs_ammo_9m133_penetrator
{
	warheadName		= TandemHEAT;
	RHA(1300, 1000)
};

// 3M7 Drakon
class rhs_ammo_3m7 : rhs_ammo_atgmBase_base
{
	HEAT_MACRO(rhs_ammo_9m7_penetrator)
	//hit = 570;
	indirectHit = 20;
	indirectHitRange = 3.2;
	whistleDist = 3;
	canlock = 1;
	irLock = 1;

	trackOversteer = 0.3;
	trackLead = 1;
	maneuvrability = 17.0;
	typicalSpeed = 120;
	maxSpeed = 781; // max speed on level road, km/h
	inittime = 0;
	laserlock = 0;
	manualcontrol = 1;
	sideairfriction = 0.1;
	maxcontrolrange = 5000;

	thrust = 112;
	thrusttime = 2.5;
	timetolive = 30;

	proxyShape = "rhsafrf\addons\rhs_heavyweapons\atgm\rhs_3m7";
};

class rhs_ammo_9m7_penetrator: rhs_ammo_base_penetrator
{
	hit = 250;
	RHA(250,1000)
};




//AGS 30 magazine pod
class rhs_proxy_ags30_mag : rhs_ammo_atgmBase_base
{
	maverickWeaponIndexOffset=0;
	proxyShape="\rhsafrf\addons\rhs_heavyweapons\AGS30\AGS_magazine.p3d";
};

//AGS 30 magazine pod
class rhs_proxy_pkm_mag : rhs_ammo_atgmBase_base
{
	maverickWeaponIndexOffset=19;
	proxyShape = "\rhsafrf\addons\rhs_tigr\sts_proxies\sts_pkm_mag_proxy.p3d";
};

