	/// PhysX part
simulation = tankX;
normalSpeedForwardCoef	= 0.75;					// thrust value for W
slowSpeedForwardCoef	= 0.25; 				// thrust value for CTRL+W
RHS_FUEL_RANGE(590)
RHS_fuelCapacity		= 1200;
brakeIdleSpeed			= 1.78; 	/// speed in m/s below which braking is applied

maxSpeed = 60;

// Tank Water Ford config
maxFordingDepth = 0;
waterResistance = 0;
waterDamageEngine = 0.2;
waterLeakiness = 10;

torqueCurve[] = {
{__EVAL(0/2300),__EVAL(0/3334)},
{__EVAL(1100/2300),__EVAL(2845/3334)},
{__EVAL(1200/2300),__EVAL(3290/3334)},
{__EVAL(1300/2300),__EVAL(3334/3334)},
{__EVAL(1400/2300),__EVAL(3334/3334)},
{__EVAL(1600/2300),__EVAL(3270/3334)},
{__EVAL(2000/2300),__EVAL(2950/3334)},
{__EVAL(3300/2300),__EVAL(0/3334)}
};

engineMOI 	= 11;
enginePower	= 626;
peakTorque	= 3334;
minOmega 	= 80;
maxOmega	= 240.86;
idleRPM		= 800;
redRPM		= 2300;

thrustDelay			= 0.0;
engineBrakeCoef		= 0.9;

// ARTIFICIAL FORCES
tankTurnForce			= 0.95e6;				// initial force applied to turning in [0,tankTurnForceAngMinSpd] ang. speed range
tankTurnForceAngMinSpd	= 0.70;					// in rad/s, speed where tankTurnForce starts fading to 0 @ tankTurnForceAngSpd
tankTurnForceAngSpd		= 0.92;					// in rad/s, angular speed where tankTurnForce becomes 0
accelAidForceCoef		= 2.5;					// acceleration aid force
accelAidForceYOffset	= -5.5;					// Y offset from the CoG where to apply the accelAidForce
accelAidForceSpd		= 2.23;					// in m/s, speed where accelAidForceCoef becomes 0

antiRollbarForceCoef = 24;
antiRollbarForceLimit = 42;
antiRollbarSpeedMin = 30;
antiRollbarSpeedMax = 75;

/// Gearbox and transmission
engineLosses = 35; // power losses on the engine's crank-shaft (before the gearbox) in Nm. (Multiplied by the gear ratio)
transmissionLosses = 45; // power losses on wheel axis (in/after the gearbox) in Nm. (Constant)

// DRIVETRAIN
clutchStrength 				= 40.0;
latency 					= 1.3;				// time to stay in a gear
switchTime					= 0.0;				// time off gear when switching
changeGearType 				= "rpmratio";		// condition for switching gears
changeGearOmegaRatios[] = {						// rpm ratio max/min pair
	__EVAL(2300/2300)	, __EVAL(1000/2300),
	__EVAL(1000/2300)	, 0,
	__EVAL(2200/2300)	, __EVAL(1000/2300),
	__EVAL(2200/2300)	, __EVAL(1800/2300),
	__EVAL(2100/2300)	, __EVAL(1800/2300),
	__EVAL(2100/2300)	, __EVAL(1800/2300),
	__EVAL(2000/2300)	, __EVAL(1700/2300),
	__EVAL(1900/2300)	, __EVAL(1600/2300),
	__EVAL(2300/2300)	, __EVAL(1400/2300)
};
class complexGearbox {
	GearboxRatios[] =
	{
		"R1",	-16.35,
		"N",	0,
		"D1",	8.173,
		"D2",	4.4,
		"D3",	3.485,
		"D4",	2.787,
		"D5",	2.027,
		"D6",	1.467,
		"D7",	1
	};
	TransmissionRatios[] = {"High",9.05};
	gearBoxMode        = "auto";
	moveOffGear        = 1;
	driveString        = "D";
	neutralString      = "N";
	reverseString      = "R";
	transmissionDelay  = 0.1;
};
/// end of gearbox

class Wheels {
	class L2 {
		side = "left";
		suspTravelDirection[]	= SUSPTRAVELDIR_LEFT;
		boneName	= "wheel_podkoloL1";
		center		= "wheel_1_2_axis";
		boundary	= "wheel_1_2_bound";
		steering	= 0;
		width 		= __EVAL(0.51*0.9);
		mass		= 193;
		MOI			= __EVAL(1.1*(0.5*193*(0.401^2)));		// radius 0.378626m
		maxBrakeTorque = 20000;

		sprungMass			= __EVAL(45000/12);
		springStrength		= 484000;
		springDamperRate	= 11000;
		maxDroop			= 0.18;
		maxCompression		= 0.18;

		dampingRate				= 3145.0;
		dampingRateInAir		= 3145.0;
		dampingRateDamaged		= 10.0;
		dampingRateDestroyed	= 10000.0;

		latStiffX = 1;
		latStiffY = 40;
		longitudinalStiffnessPerUnitGravity = 72000;
		frictionVsSlipGraph[]	= {
			{0.0, 	0.4},
			{0.18, 	1.0},
			{0.7, 	0.75}
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