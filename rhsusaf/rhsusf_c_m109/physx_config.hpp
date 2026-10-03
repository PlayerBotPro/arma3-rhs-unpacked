/// PhysX part
simulation				= tankX;
normalSpeedForwardCoef	= 0.8;
slowSpeedForwardCoef	= 0.65;
maxSpeed				= 56;
RHS_FUEL_RANGE(390)
RHS_fuelCapacity		= 1885;

// ARTIFICIAL FORCES
tankTurnForce			= 0.45e6;				// initial force applied to turning in [0,tankTurnForceAngMinSpd] ang. speed range
tankTurnForceAngMinSpd	= 0.50;					// in rad/s, speed where tankTurnForce starts fading to 0 @ tankTurnForceAngSpd
tankTurnForceAngSpd		= 0.72;					// in rad/s, angular speed where tankTurnForce becomes 0
accelAidForceCoef		= 2.0;					// acceleration aid force
accelAidForceYOffset	= -2.3;					// Y offset from the CoG where to apply the accelAidForce
accelAidForceSpd		= 2.73;					// in m/s, speed where accelAidForceCoef becomes 0

// Tank Water Ford config
maxFordingDepth		= 0;
waterResistance		= 0;
waterDamageEngine	= 0.2;
waterLeakiness		= 10;

torqueCurve[] = {
{__EVAL(650/2300),__EVAL(861/1565)},
{__EVAL(1000/2300),__EVAL(1270/1565)},
{__EVAL(1200/2300),__EVAL(1490/1565)},
{__EVAL(1400/2300),__EVAL(1565/1565)},
{__EVAL(1600/2300),__EVAL(1530/1565)},
{__EVAL(1800/2300),__EVAL(1485/1565)},
{__EVAL(2000/2300),__EVAL(1420/1565)},
{__EVAL(3086/2300),__EVAL(0/1565)}
};

engineMOI	= 19;
enginePower	= 328;
peakTorque	= 1565;
minOmega 	= 68;
maxOmega	= 240.86;
idleRPM		= 650;
redRPM		= 2300;

antiRollbarForceCoef	= 24;
antiRollbarForceLimit	= 42;
antiRollbarSpeedMin		= 30;
antiRollbarSpeedMax		= 75;


thrustDelay								= 0.3;	// how much time does it take to get the full thrust (default 1), used to reduce initial wheel slipping
dampingRateFullThrottle					= 0.3;	// engine braking with thrust 1
dampingRateZeroThrottleClutchEngaged	= 3.0;	// engine braking with thrust 0
dampingRateZeroThrottleClutchDisengaged	= 0.25; // engine braking in neutral/open clutch
engineLosses		= 25; // power losses on the engine's crank-shaft (before the gearbox) in Nm. (Multiplied by the gear ratio)
transmissionLosses	= 15; // power losses on wheel axis (in/after the gearbox) in Nm. (Constant)

/// Clutch, Gearbox and Driveline ///

clutchStrength	= 15.0;
switchTime		= 0.0;
latency			= 1.1;
changeGearType	= "rpmratio";		// condition for switching gears
changeGearOmegaRatios[] = {						// rpm ratio max/min pair
	__EVAL(2300/2300)	, __EVAL(1000/2300),
	__EVAL(1000/2300)	, 0,
	__EVAL(1900/2300)	, __EVAL(1400/2300),
	__EVAL(2050/2300)	, __EVAL(1400/2300),
	__EVAL(2250/2300)	, __EVAL(1400/2300),
	__EVAL(2300/2300)	, __EVAL(1500/2300)
};
class complexGearbox {
	GearboxRatios[] = 
	{
		"R1",-2.235,
		"N",0,
		"D1",4.69,
		"D2",3.17,
		"D3",1.58,
		"D4",0.79
	};
	TransmissionRatios[]	= {"High",10.7};
	gearBoxMode				= "auto";
	moveOffGear				= 1;
	driveString				= "D";
	neutralString			= "N";
	reverseString			= "R";
	transmissionDelay		= 0.1;
};
/// end of gearbox

class Wheels {
	class L2 {
		boneName	= "wheel_podkoloL1";
		center		= "wheel_1_2_axis";
		boundary	= "wheel_1_2_bound";
		side		= "left";
		width		= 0.39;
		steering	= 0;
		mass		= 150;
		MOI			= __EVAL(0.5*150*(0.332^2));		// radius 0.332m

		maxBrakeTorque = 10000;

		maxDroop		= 0.18;
		maxCompression	= 0.18;

		sprungMass			= 2857;
		springStrength		= 85000;
		springDamperRate	= 18428;

		dampingRate				= 727;
		dampingRateInAir		= 727;
		dampingRateDamaged		= 10.0;
		dampingRadteDestroyed	= 10000.0;

		latStiffX = 1;
		latStiffY = 40;
		longitudinalStiffnessPerUnitGravity = 32000;
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
/// End of PhysX