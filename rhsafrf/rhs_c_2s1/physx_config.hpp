simulation				= "tankX";
normalSpeedForwardCoef	= 0.85;
slowSpeedForwardCoef	= 0.5;
RHS_FUEL_RANGE(500)
RHS_fuelCapacity		= 1885;
maxSpeed				= 60;

/// BUOYANCY

canFloat			= 1;
waterLeakiness		= 250.0;
maxFordingDepth		= 0.05;
waterResistance		= 2;
waterDamageEngine	= 0.9;

engineShiftY			= 0.7;		/// relative virtual position of engine for PhysX, affects lateral ship slope during turns
waterLinearDampingCoefY	= 2;		/// affect how fast does the ship go through waves down - higher values make it drift more on top of waves
waterLinearDampingCoefX	= 2;		/// affects sliding of the ship in turns
waterAngularDampingCoef	= 7.2;		/// increase this for smoother movement, but beware too high values
waterResistanceCoef		= 1.75;		/// how much does water slow the ship down
waterEffectSpeed		= 5;		/// limit of displaying the standard water effect
engineEffectSpeed		= 5;		/// limit of displaying the engine effect
waterFastEffectSpeed	= 28;			/// increase this for smoother movement, but beware too high
rudderForceCoef = 4.5;

// ARTIFICIAL FORCES
tankTurnForce			= 0.31e6;				// initial force applied to turning in [0,tankTurnForceAngMinSpd] ang. speed range
tankTurnForceAngMinSpd	= 0.70;					// in rad/s, speed where tankTurnForce starts fading to 0 @ tankTurnForceAngSpd
tankTurnForceAngSpd		= 0.72;					// in rad/s, angular speed where tankTurnForce becomes 0
accelAidForceCoef		= 4.0;					// acceleration aid force
accelAidForceYOffset	= -3.6;					// Y offset from the CoG where to apply the accelAidForce
accelAidForceSpd		= 2.23;					// in m/s, speed where accelAidForceCoef becomes 0

//Максимальный крутящий момент 	1079 Н·м, при 1500 об/мин
torqueCurve[] = {
{__EVAL(700/2000),__EVAL(1126/2059)},
{__EVAL(950/2000),__EVAL(1650/2059)},
{__EVAL(1200/2000),__EVAL(2059/2059)},
{__EVAL(1400/2000),__EVAL(2059/2059)},
{__EVAL(1500/2000),__EVAL(2015/2059)},
{__EVAL(1600/2000),__EVAL(1950/2059)},
{__EVAL(1800/2000),__EVAL(1890/2059)},
{__EVAL(2228/2000),__EVAL(0/2059)}
};

//Максимальная мощность 	220 кВт (299 л. с.), при 2100  об/мин
engineMOI	= 10;
enginePower	= 220;
peakTorque	= 1079;
minOmega	= 72;
maxOmega	= 209.44;
idleRPM		= 700;
redRPM		= 2000;

thrustDelay								= 0.3;	// how much time does it take to get the full thrust (default 1), used to reduce initial wheel slipping
dampingRateFullThrottle					= 0.3;	// engine braking with thrust 1
dampingRateZeroThrottleClutchEngaged	= 3.0;	// engine braking with thrust 0
dampingRateZeroThrottleClutchDisengaged	= 0.25; // engine braking in neutral/open clutch
engineLosses							= 25; 	// power losses on the engine's crank-shaft (before the gearbox) in Nm. (Multiplied by the gear ratio)
transmissionLosses						= 15; 	// power losses on wheel axis (in/after the gearbox) in Nm. (Constant)

/// Clutch, Gearbox and Driveline ///
clutchStrength 				= 20.0;
latency 					= 1.3;				// time to stay in a gear
switchTime					= 0;				// time off gear when switching
changeGearType 				= "rpmratio";		// condition for switching gears
changeGearOmegaRatios[] = {						// rpm ratio max/min pair
	__EVAL(2000/2000)	, __EVAL(1000/2000),
	__EVAL(1000/2000)	, 0,
	__EVAL(1800/2000)	, __EVAL(1000/2000),
	__EVAL(1800/2000)	, __EVAL(1400/2000),
	__EVAL(1800/2000)	, __EVAL(1400/2000),
	__EVAL(1900/2000)	, __EVAL(1500/2000),
	__EVAL(1900/2000)	, __EVAL(1500/2000),
	__EVAL(2000/2000)	, __EVAL(1600/2000)
};
class complexGearbox {
	GearboxRatios[] =
	{
		"R1",-2.235,
		"N",0,
		"D1",2.6,
		"D2",1.5,
		"D3",1.125,
		"D4",0.85,
		"D5",0.64,
		"D6",0.50
	};
	TransmissionRatios[]	= {"High",12};
	AmphibiousRatios[]		= {"R1", -40, "N", 0, "D1", 40};
	gearBoxMode				= "auto";
	moveOffGear				= 1;
	driveString				= "D";
	neutralString			= "N";
	reverseString			= "R";
	transmissionDelay		= 0.1;
};

class Wheels
{
	class L2 {
		suspTravelDirection[]	= SUSPTRAVELDIR_LEFT;
		boneName	= "wheel_podkoloL1";
		center		= "wheel_1_2_axis";
		boundary	= "wheel_1_2_bound";
		side		= "left";
		width 		= 0.33;
		steering	= 0;
		mass		= 150;
		MOI			= __EVAL(1.0*(0.5*120*(0.369^2)));		// radius 0.369

		maxBrakeTorque = 12000;

		maxDroop		= 0.15;
		maxCompression	= 0.15;

		sprungMass			= __EVAL(16000/14);
		springStrength		= 140000;
		springDamperRate	= 7500;

		dampingRate				= 1120;
		dampingRateInAir		= 1120;
		dampingRateDamaged		= 10.0;
		dampingRateDestroyed	= 10000.0;

		latStiffX = 4;
		latStiffY = 50;
		longitudinalStiffnessPerUnitGravity = 3000;
		frictionVsSlipGraph[]	= {
			{0.0, 	0.8},
			{0.38, 	1.0},
			{0.7, 	0.65}
		};
	};
	class L3: L2 {
		boneName = "wheel_podkolol2";
		center   = "wheel_1_3_axis";
		boundary = "wheel_1_3_bound";
	};
	class L4: L2 {
		boneName = "wheel_podkolol3";
		center   = "wheel_1_4_axis";
		boundary = "wheel_1_4_bound";
	};
	class L5: L2 {
		boneName = "wheel_podkolol4";
		center   = "wheel_1_5_axis";
		boundary = "wheel_1_5_bound";
	};
	class L6: L2 {
		boneName = "wheel_podkolol5";
		center   = "wheel_1_6_axis";
		boundary = "wheel_1_6_bound";
	};
	class L7: L2 {
		boneName = "wheel_podkolol6";
		center   = "wheel_1_7_axis";
		boundary = "wheel_1_7_bound";
	};
	class L8: L2 {
		boneName = "wheel_podkolol7";
		center   = "wheel_1_8_axis";
		boundary = "wheel_1_8_bound";
	};
	// rear left wheel, usually Idler or Drive Sproket
	// Note, this wheel may not always be touching the ground, but we need it anyway!
	class L9: L2 {
		boneName = "";
		center   = "wheel_1_9_axis";
		boundary = "wheel_1_9_bound";
		maxDroop = 0;
		maxCompression = 0;
	};
	// front left wheel, usually Idler or Drive Sproket
	// Note, this wheel may not always be touching the ground, but we need it anyway!
	class L1: L2 {
		boneName = "";
		center   = "wheel_1_1_axis";
		boundary = "wheel_1_1_bound";
		maxDroop = 0;
		maxCompression = 0;
	};

	class R2: L2 {
		suspTravelDirection[]	= SUSPTRAVELDIR_RIGHT;
		boneName = "wheel_podkolop1";
		center   = "wheel_2_2_axis";
		boundary = "wheel_2_2_bound";
		side = "right";
	};
	class R3: R2 {
		boneName = "wheel_podkolop2";
		center   = "wheel_2_3_axis";
		boundary = "wheel_2_3_bound";
	};
	class R4: R2 {
		boneName = "wheel_podkolop3";
		center   = "wheel_2_4_axis";
		boundary = "wheel_2_4_bound";
	};
	class R5: R2 {
		boneName = "wheel_podkolop4";
		center   = "wheel_2_5_axis";
		boundary = "wheel_2_5_bound";
	};
	class R6: R2 {
		boneName = "wheel_podkolop5";
		center   = "wheel_2_6_axis";
		boundary = "wheel_2_6_bound";
	};
	class R7: R2 {
		boneName = "wheel_podkolop6";
		center   = "wheel_2_7_axis";
		boundary = "wheel_2_7_bound";
	};
	class R8: R2 {
		boneName = "wheel_podkolop7";
		center   = "wheel_2_8_axis";
		boundary = "wheel_2_8_bound";
	};
	// rear right wheel, usually Idler or Drive Sproket
	// Note, this wheel may not always be touching the ground, but we need it anyway!
	class R9: R2 {
		boneName = "";
		center   = "wheel_2_9_axis";
		boundary = "wheel_2_9_bound";
		maxDroop = 0;
		maxCompression = 0;
	};
	// front right wheel, usually Idler or Drive Sproket
	// Note, this wheel may not always be touching the ground, but we need it anyway!
	class R1: R2 {
		boneName = "";
		center   = "wheel_2_1_axis";
		boundary = "wheel_2_1_bound";
		maxDroop = 0;
		maxCompression = 0;
	};
};