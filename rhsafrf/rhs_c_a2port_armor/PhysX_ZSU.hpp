driveOnComponent[]={"Slide"};

/// PhysX part
simulation			= tankX;

// Tank Water Ford config
maxFordingDepth		= 0;
waterResistance		= 0;
waterDamageEngine	= 0.2;
waterLeakiness		= 10;

maxSpeed	= 50;
enginePower	= 209;
peakTorque	= 1176;
minOmega	= 61;
maxOmega	= 209.44;
idleRpm		= 600;
redRpm		= 2000;

torqueCurve[] 		=
{
	{__EVAL(000/2000), 0},
	{__EVAL(600/2000), __EVAL(1700/2245)},
	{__EVAL(800/2000), __EVAL(1950/2245)},
	{__EVAL(1200/2000),__EVAL(2150/2245)},
	{__EVAL(1400/2000),__EVAL(2245/2245)},
	{__EVAL(1600/2000),__EVAL(1675/2245)},
	{__EVAL(2000/2000),__EVAL(1200/2245)},
	{__EVAL(3000/2000),0}
};

thrustDelay			= 0.6;    	/// how much time does it take to get the full thrust (default 1), used to reduce initial wheel slipping
clutchStrength 		= 80.0;
RHS_FUEL_RANGE(600)
RHS_fuelCapacity	= 520;
brakeIdleSpeed		= 1.78; 	/// speed in m/s below which braking is applied
latency 			= 1.1;

tankTurnForce			= 330000; /// Random magic number, expected to be something like 11 x mass of vehicle
tankTurnForceAngMinSpd	= 0.60;					// in rad/s, speed where tankTurnForce starts fading to 0 @ tankTurnForceAngSpd
tankTurnForceAngSpd		= 0.91;					// in rad/s, angular speed where tankTurnForce becomes 0
accelAidForceYOffset	= -3.5;					// Y offset from the CoG where to apply the accelAidForce
accelAidForceCoef		= 4;
accelAidForceSpd		= 1.9;

/// Gearbox and transmission

engineLosses		= 25; // power losses on the engine's crank-shaft (before the gearbox) in Nm. (Multiplied by the gear ratio)
transmissionLosses	= 15; // power losses on wheel axis (in/after the gearbox) in Nm. (Constant)

normalSpeedForwardCoef=0.7;

changeGearType 				= "rpmratio";		// condition for switching gears
changeGearOmegaRatios[] = {						// rpm ratio max/min pair
	__EVAL(2000/2000)	, __EVAL(1400/2000),
	__EVAL(1500/2000)	, __EVAL(1100/2000),
	__EVAL(1300/2000)	, __EVAL(1000/2000),
	__EVAL(1500/2000)	, __EVAL(1400/2000),
	__EVAL(1500/2000)	, __EVAL(1400/2000),
	__EVAL(1500/2000)	, __EVAL(1100/2000),
	__EVAL(2000/2000)	, __EVAL(1000/2000)
};
class complexGearbox {

	GearboxRatios[]    = {
		"R2",-7.0,
		"N",0,
		"D1",1.25,
		"D2",1.20,
		"D3",1.15,
		"D4",1.05,
		"D5",0.95
	};
	TransmissionRatios[]	= {"High",15.8};
	gearBoxMode				= "auto";
	moveOffGear				= 1;
	driveString				= "D";
	neutralString			= "N";
	reverseString			= "R";
	transmissionDelay		= 0.6;
};
/// end of gearbox

class Wheels {
	class L2 {
		suspTravelDirection[]	= SUSPTRAVELDIR_LEFT;
		side					= "left";
		boneName				= "wheel_podkoloL1";
		center					= "wheel_1_2_axis";
		boundary				= "wheel_1_2_bound";
		steering				= 0;
		width					= 0.33;
		mass					= 150;
		MOI						= 10;

		maxBrakeTorque = 8000;

		sprungMass			= -1;
		springStrength		= 150000;
		springDamperRate	= 11000;

		dampingRate				= 2114.0;
		dampingRateInAir		= 2114.0;
		dampingRateDamaged		= 10.0;
		dampingRateDestroyed	= 10000.0;

		maxDroop = 0.18;
		maxCompression = 0.18;

		latStiffX = 3.5;
		latStiffY = 35;
		longitudinalStiffnessPerUnitGravity = 14000;
		frictionVsSlipGraph[]	= {
			{0.0, 	0.45},
			{0.18, 	1.0},
			{0.6, 	0.6}
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
		boneName = "wheel_podkolop1";
		center   = "wheel_2_2_axis";
		boundary = "wheel_2_2_bound";
		side = "right";
		suspTravelDirection[]	= SUSPTRAVELDIR_RIGHT;
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