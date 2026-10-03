/// PhysX part
//GTD-1250D engine 1250HP 932kW
simulation				= tankX;
normalSpeedForwardCoef	= 0.5;					// thrust value for W
slowSpeedForwardCoef	= 0.25; 				// thrust value for CTRL+W
// 335km offroad
// 500km on road
RHS_FUEL_RANGE(390)
RHS_fuelCapacity		= 1540;
brakeIdleSpeed			= 1.78; 	/// speed in m/s below which braking is applied
maxSpeed 				= 70;

engineMOI	= 20.0;
enginePower	= 932;
peakTorque	= 4393;
minOmega	= 114.72;						// in rad/s, 	1000rpm tactical idle
maxOmega	= 350.86;
idleRPM		= 1200;
redRPM		= 3255;

torqueCurve[] = {
	{__EVAL(1000/3255),__EVAL(0/4393)},
	{__EVAL(1457/3255),__EVAL(4167/4393)},
	{__EVAL(1714/3255),__EVAL(3941/4393)},
	{__EVAL(1971/3255),__EVAL(3715/4393)},
	{__EVAL(2228/3255),__EVAL(3489/4393)},
	{__EVAL(2485/3255),__EVAL(3263/4393)},
	{__EVAL(2742/3255),__EVAL(3037/4393)},
	{__EVAL(6194/3255),__EVAL(0/4393)}
};

thrustDelay								= 0.3;	// how much time does it take to get the full thrust (default 1), used to reduce initial wheel slipping
dampingRateFullThrottle					= 0.3;	// engine braking with thrust 1
dampingRateZeroThrottleClutchEngaged	= 3.0;	// engine braking with thrust 0
dampingRateZeroThrottleClutchDisengaged	= 0.25; // engine braking in neutral/open clutch


antiRollbarForceCoef	= 24;
antiRollbarForceLimit	= 42;
antiRollbarSpeedMin		= 30;
antiRollbarSpeedMax		= 75;

engineBrakeCoef=0;
tracksSpeed = 1.4;

// ARTIFICIAL FORCES
tankTurnForce			= 0.65e6;				// initial force applied to turning in [0,tankTurnForceAngMinSpd] ang. speed range
tankTurnForceAngMinSpd	= 0.70;					// in rad/s, speed where tankTurnForce starts fading to 0 @ tankTurnForceAngSpd
tankTurnForceAngSpd		= 0.72;					// in rad/s, angular speed where tankTurnForce becomes 0
accelAidForceCoef		= 3.3;					// acceleration aid force
accelAidForceYOffset	= -4.0;					// Y offset from the CoG where to apply the accelAidForce
accelAidForceSpd		= 2.83;					// in m/s, speed where accelAidForceCoef becomes 0

// Tank Water Ford config
maxFordingDepth = 0;
waterResistance = 0;
waterDamageEngine = 0.2;
waterLeakiness = 10;

/// Gearbox and transmission
engineLosses = 25; // power losses on the engine's crank-shaft (before the gearbox) in Nm. (Multiplied by the gear ratio)
transmissionLosses = 15; // power losses on wheel axis (in/after the gearbox) in Nm. (Constant)

// DRIVETRAIN
clutchStrength 				= 30.0;
latency 					= 1.3;				// time to stay in a gear
switchTime					= 0;				// time off gear when switching
changeGearType 				= "rpmratio";		// condition for switching gears
changeGearOmegaRatios[] = {						// rpm ratio max/min pair
	__EVAL(3000/3000)	, __EVAL(1000/3000),
	__EVAL(1000/3000)	, 0,
	__EVAL(2880/3000)	, __EVAL(1000/3000),
	__EVAL(2950/3000)	, __EVAL(2100/3000),
	__EVAL(2950/3000)	, __EVAL(2200/3000),
	__EVAL(2950/3000)	, __EVAL(2200/3000)
};
class complexGearbox {
	GearboxRatios[]    = {
		"R1",-10.36,
		"N",0,
		"D1",4.38,
		"D2",2.16,
		"D3",1.46,
		"D4",1
	};
	TransmissionRatios[] = {"High",11.55}; //albo 5.45

	gearBoxMode			= "auto";
	moveOffGear			= 1;
	driveString			= "D";
	neutralString		= "N";
	reverseString		= "R";
	transmissionDelay	= 0.9;
};
/// end of gearbox

class Wheels {
	class L2 {
		suspTravelDirection[]	= SUSPTRAVELDIR_LEFT;
		boneName	= "RHS_T80B_SUSL_1";
		center		= "wheel_1_2_axis";
		boundary	= "wheel_1_2_bound";
		side		= "left";
		steering	= 0;
		width 		= __EVAL(0.44*0.9);
		mass		= 188; //albo 233
		MOI			= __EVAL(1.0*(0.5*188*(0.387^2)));		// radius 0.378626m

		maxBrakeTorque = 10000;

		sprungMass			= __EVAL(46000/12);
		springStrength		= 254000;
		springDamperRate	= 11000;
		maxDroop			= 0.14; //it's 0.14 in model.cfg
		maxCompression		= 0.14;

		dampingRate				= 1364.0;
		dampingRateInAir		= 1364.0;
		dampingRateDamaged		= 10.0;
		dampingRateDestroyed	= 10000.0;

		latStiffX = 3;
		latStiffY = 40;
		longitudinalStiffnessPerUnitGravity = 72000;
		frictionVsSlipGraph[]	= {
			{0.0, 	0.4},
			{0.18, 	1.0},
			{0.7, 	0.75}
		};
	};
	class L3: L2 {
		boneName = "RHS_T80B_SUSL_3";
		center   = "wheel_1_3_axis";
		boundary = "wheel_1_3_bound";
	};
	class L4: L2 {
		boneName = "RHS_T80B_SUSL_5";
		center   = "wheel_1_4_axis";
		boundary = "wheel_1_4_bound";
	};
	class L5: L2 {
		boneName = "RHS_T80B_SUSL_7";
		center   = "wheel_1_5_axis";
		boundary = "wheel_1_5_bound";
	};
	class L6: L2 {
		boneName = "RHS_T80B_SUSL_9";
		center   = "wheel_1_6_axis";
		boundary = "wheel_1_6_bound";
	};
	class L7: L2 {
		boneName = "RHS_T80B_SUSL_11";
		center   = "wheel_1_7_axis";
		boundary = "wheel_1_7_bound";
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
		boneName = "RHS_T80B_SUSR_1";
		center   = "wheel_2_2_axis";
		boundary = "wheel_2_2_bound";
		side = "right";
	};
	class R3: R2 {
		boneName = "RHS_T80B_SUSR_3";
		center   = "wheel_2_3_axis";
		boundary = "wheel_2_3_bound";
	};
	class R4: R2 {
		boneName = "RHS_T80B_SUSR_5";
		center   = "wheel_2_4_axis";
		boundary = "wheel_2_4_bound";
	};
	class R5: R2 {
		boneName = "RHS_T80B_SUSR_7";
		center   = "wheel_2_5_axis";
		boundary = "wheel_2_5_bound";
	};
	class R6: R2 {
		boneName = "RHS_T80B_SUSR_9";
		center   = "wheel_2_6_axis";
		boundary = "wheel_2_6_bound";
	};
	class R7: R2 {
		boneName = "RHS_T80B_SUSR_11";
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
/// End of PhysX of PhysX