/// PhysX part

/// General Parameters ///
simulation			= tankX;
maxSpeed			= 60;
normalSpeedForwardCoef = 0.73;
slowSpeedForwardCoef = 0.35;
brakeIdleSpeed = 0.0;
RHS_FUEL_RANGE(590)
RHS_fuelCapacity = 462;

// ARTIFICIAL FORCES
tankTurnForce			= 0.45e6;				// initial force applied to turning in [0,tankTurnForceAngMinSpd] ang. speed range
tankTurnForceAngMinSpd	= 0.70;					// in rad/s, speed where tankTurnForce starts fading to 0 @ tankTurnForceAngSpd
tankTurnForceAngSpd		= 0.92;					// in rad/s, angular speed where tankTurnForce becomes 0
accelAidForceCoef		= 4.3;					// acceleration aid force
accelAidForceYOffset	= -3.9;					// Y offset from the CoG where to apply the accelAidForce
accelAidForceSpd		= 2.23;					// in m/s, speed where accelAidForceCoef becomes 0
/// Bouyancy ///

canFloat = 1;
waterLeakiness = 250.0;
maxFordingDepth = 0.05;
waterResistance = 1;
waterDamageEngine = 0.9;

engineShiftY           		 = -0.8;		/// relative virtual position of engine for PhysX, affects lateral ship slope during turns
waterLinearDampingCoefY 	 = 2;		/// affect how fast does the ship go through waves down - higher values make it drift more on top of waves
waterLinearDampingCoefX 	 = 2.0;		/// affects sliding of the ship in turns
waterAngularDampingCoef 	 = 3.2;		/// increase this for smoother movement, but beware too high values
waterResistanceCoef 		 = 0.015;	/// how much does water slow the ship down
//rudderForceCoef				 = 0.100000;	/// increase this to gain more turning on lower speeds
//rudderForceCoefAtMaxSpeed	 = 0.003000;	/// increase this to gain more turning on higher speeds

waterEffectSpeed 		 = 5;						/// limit of displaying the standard water effect
engineEffectSpeed 		 = 5;						/// limit of displaying the engine effect
waterFastEffectSpeed 	 = 28;						/// limit where the standard water effect changes to the fast sailing one

/// Engine ///

torqueCurve[] = {
{__EVAL(100/2850),__EVAL(0/981)},
{__EVAL(900/2850),__EVAL(935/981)},
{__EVAL(1500/2850),__EVAL(981/981)},
{__EVAL(1600/2850),__EVAL(981/981)},
{__EVAL(1800/2850),__EVAL(935/981)},
{__EVAL(2200/2850),__EVAL(880/981)},
{__EVAL(2600/2850),__EVAL(811/981)},
{__EVAL(3101/2850),__EVAL(0/981)}
};
engineMOI	= 8;
enginePower	= 224;
peakTorque	= 981;
minOmega	= 75;
maxOmega	= 298.45;
idleRPM		= 700;
redRPM		= 2850;


thrustDelay								= 0.3;	// how much time does it take to get the full thrust (default 1), used to reduce initial wheel slipping
dampingRateFullThrottle					= 0.3;	// engine braking with thrust 1
dampingRateZeroThrottleClutchEngaged	= 3.0;	// engine braking with thrust 0
dampingRateZeroThrottleClutchDisengaged	= 0.25; // engine braking in neutral/open clutch
engineLosses							= 25; 	// power losses on the engine's crank-shaft (before the gearbox) in Nm. (Multiplied by the gear ratio)
transmissionLosses						= 15; 	// power losses on wheel axis (in/after the gearbox) in Nm. (Constant)

antiRollbarForceCoef = 24;
antiRollbarForceLimit = 42;
antiRollbarSpeedMin = 30;
antiRollbarSpeedMax = 75;

/// Clutch, Gearbox and Driveline ///
clutchStrength 				= 20.0;
latency 					= 1.3;				// time to stay in a gear
switchTime					= 0;				// time off gear when switching
changeGearType 				= "rpmratio";		// condition for switching gears
changeGearOmegaRatios[] = {						// rpm ratio max/min pair
	__EVAL(2850/2850)	, __EVAL(1000/2850),
	__EVAL(1000/2850)	, 0,
	__EVAL(2380/2850)	, __EVAL(1000/2850),
	__EVAL(2550/2850)	, __EVAL(1900/2850),
	__EVAL(2600/2850)	, __EVAL(1900/2850),
	__EVAL(2600/2850)	, __EVAL(1900/2850),
	__EVAL(2850/2850)	, __EVAL(1900/2850)
};
class complexGearbox
{
	GearboxRatios[] =
	{
		"R1",-7.25,
		"N",0,
		"D1",5.25,
		"D2",2.842,
		"D3",1.912,
		"D4",1.28,
		"D5",0.858
	};
	AmphibiousRatios[]		= {"R1", -14.5, "N", 0, "D1", 14.5};
	TransmissionRatios[]	= {"High",12.6};
	gearBoxMode				= "auto";
	moveOffGear				= 1;
	driveString				= "D";
	neutralString			= "N";
	reverseString			= "R";
	transmissionDelay		= 0.3;
};

/// end of gearbox

class Wheels {
	class L2 {
		suspTravelDirection[]	= SUSPTRAVELDIR_LEFT;
		boneName = "wheel_podkoloL1";
		center   = "wheel_1_2_axis";
		boundary = "wheel_1_2_bound";
		steering	= 0;
		width 		= __EVAL(0.32*0.9);
		mass		= 120;
		MOI			= __EVAL(1.0*(0.5*120*(0.355^2)));		// radius 0.378626m

		maxBrakeTorque = 2000;

		sprungMass			= __EVAL(14500/12);
		springStrength		= 127500;
		springDamperRate	= 7000;
		maxDroop			= 0.18;
		maxCompression		= 0.18;

		dampingRate				= 344.0;
		dampingRateInAir		= 344.0;
		dampingRateDamaged		= 10.0;
		dampingRateDestroyed	= 10000.0;

		latStiffX = 2;
		latStiffY = 30;
		longitudinalStiffnessPerUnitGravity = 32000;
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
	// rear left wheel, usually Idler or Drive Sproket
	// Note, this wheel may not always be touching the ground, but we need it anyway!
	class L9: L2 {
		boneName = "wheel_podkolol9";
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
	// rear right wheel, usually Idler or Drive Sproket
	// Note, this wheel may not always be touching the ground, but we need it anyway!
	class R9: R2 {
		boneName = "wheel_podkolop9";
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
/// End of PhysX