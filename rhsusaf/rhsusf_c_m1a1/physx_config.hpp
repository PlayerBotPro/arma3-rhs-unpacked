/// PhysX part
simulation	= tankX;
normalSpeedForwardCoef	= 0.6;
slowSpeedForwardCoef	= 0.45;
fuelCapacity			= 20;
maxSpeed				= 66;

// ARTIFICIAL FORCES
tankTurnForce			= 0.75e6;				// initial force applied to turning in [0,tankTurnForceAngMinSpd] ang. speed range
tankTurnForceAngMinSpd	= 0.70;					// in rad/s, speed where tankTurnForce starts fading to 0 @ tankTurnForceAngSpd
tankTurnForceAngSpd		= 0.72;					// in rad/s, angular speed where tankTurnForce becomes 0
accelAidForceCoef		= 3.5;					// acceleration aid force
accelAidForceYOffset	= -3.0;					// Y offset from the CoG where to apply the accelAidForce
accelAidForceSpd		= 2.83;					// in m/s, speed where accelAidForceCoef becomes 0

// Tank Water Ford config
maxFordingDepth = 0;
waterResistance = 0;
waterDamageEngine = 0.2;
waterLeakiness = 10;

torqueCurve[] = {
	{__EVAL(1000/3000)	, __EVAL(5355/5355)},
	{__EVAL(3000/3000)	, __EVAL(3754/5355)}
};

engineMOI	= 15;
enginePower	= 1120;
peakTorque	= 5355;
minOmega	= 100;
maxOmega	= 314.16;
idleRPM		= 1000;
redRPM		= 3000;

antiRollbarForceCoef = 24;
antiRollbarForceLimit = 42;
antiRollbarSpeedMin = 30;
antiRollbarSpeedMax = 75;

thrustDelay			= 0.0;    	/// how much time does it take to get the full thrust (default 1), used to reduce initial wheel slipping
clutchStrength 		= 35.0;
engineLosses		= 25; // power losses on the engine's crank-shaft (before the gearbox) in Nm. (Multiplied by the gear ratio)
transmissionLosses	= 15; // power losses on wheel axis (in/after the gearbox) in Nm. (Constant)

latency 					= 1.3;				// time to stay in a gear
switchTime					= 0;				// time off gear when switching
changeGearType 				= "rpmratio";		// condition for switching gears
changeGearOmegaRatios[] = {						// rpm ratio max/min pair
	__EVAL(3000/3000)	, __EVAL(1000/3000),
	__EVAL(1000/3000)	, 0,
	__EVAL(2980/3000)	, __EVAL(1000/3000),
	__EVAL(2980/3000)	, __EVAL(1900/3000),
	__EVAL(2950/3000)	, __EVAL(2200/3000),
	__EVAL(2950/3000)	, __EVAL(2300/3000),
	__EVAL(2950/3000)	, __EVAL(2200/3000)
};
class complexGearbox {

	GearboxRatios[] = {
		"R1",-1.67,
		"N",0,
		"D1",4.85,
		"D2",2.65,
		"D3",1.48,
		"D4",1.0,
		"D5",0.79
	};
	TransmissionRatios[]	= {"High",12.0};
	gearBoxMode				= "auto";
	moveOffGear				= 1;
	driveString				= "D";
	neutralString			= "N";
	reverseString			= "R";
	transmissionDelay		= 0.1;
};
/// end of gearbox

class Wheels
{
	class L2
	{
		suspTravelDirection[]	= SUSPTRAVELDIR_LEFT;
		boneName = "wheel_podkoloL1";
		center   = "wheel_1_2_axis";
		boundary = "wheel_1_2_bound";
		side		= "left";
		steering	= 0;
		width		= __EVAL(0.53*0.9);
		mass		= 150;
		MOI			= __EVAL(0.5*150*(0.38^2));		// radius 0.38m

		maxDroop		= 0.18;
		maxCompression	= 0.18;
		maxBrakeTorque	= 9000;

		sprungMass			= __EVAL(65000/14);
		springStrength		= 584000;
		springDamperRate	= 15000;

		dampingRate				= 205;
		dampingRateInAir		= 205;
		dampingRateDamaged		= 10.0;
		dampingRateDestroyed	= 10000.0;

		latStiffX = 3;
		latStiffY = 40;
		longitudinalStiffnessPerUnitGravity = 60000;
		frictionVsSlipGraph[]	= {
			{0.0, 	0.75},
			{0.18, 	1.0},
			{0.7, 	0.5}
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
	class L9: L2 {
		boneName = "wheel_podkolol9";
		center   = "wheel_1_9_axis";
		boundary = "wheel_1_9_bound";
		maxDroop = 0;
		maxCompression = 0;
	};
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
	class R9: R2 {
		boneName = "wheel_podkolop9";
		center   = "wheel_2_9_axis";
		boundary = "wheel_2_9_bound";
		maxDroop = 0;
		maxCompression = 0;
	};
	class R1: R2 {
		boneName = "";
		center   = "wheel_2_1_axis";
		boundary = "wheel_2_1_bound";
		maxDroop = 0;
		maxCompression = 0;
	};
};
/// End of PhysX
