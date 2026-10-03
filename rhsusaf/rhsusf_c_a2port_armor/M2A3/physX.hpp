/// PhysX part
simulation	= tankX;
normalSpeedForwardCoef	= 0.6;
slowSpeedForwardCoef	= 0.45;
RHS_FUEL_RANGE(483)
RHS_fuelCapacity	= 462;
maxSpeed			= 66;
tracksSpeed			= 10;

// Tank Water Ford config
maxFordingDepth = 0;
waterResistance = 0;
waterDamageEngine = 0.2;
waterLeakiness = 10;

// ARTIFICIAL FORCES
tankTurnForce			= 0.45e6;				// initial force applied to turning in [0,tankTurnForceAngMinSpd] ang. speed range
tankTurnForceAngMinSpd	= 0.70;					// in rad/s, speed where tankTurnForce starts fading to 0 @ tankTurnForceAngSpd
tankTurnForceAngSpd		= 0.87;					// in rad/s, angular speed where tankTurnForce becomes 0
accelAidForceCoef		= 2.0;					// acceleration aid force
accelAidForceYOffset	= -4.0;					// Y offset from the CoG where to apply the accelAidForce
accelAidForceSpd		= 4.23;					// in m/s, speed where accelAidForceCoef becomes 0


torqueCurve[] = {
	{__EVAL(800/2600),__EVAL(860/1660)},
	{__EVAL(1000/2600),__EVAL(1420/1660)},
	{__EVAL(1400/2600),__EVAL(1660/1660)},
	{__EVAL(1500/2600),__EVAL(1570/1660)},
	{__EVAL(1700/2600),__EVAL(1510/1660)},
	{__EVAL(2000/2600),__EVAL(1450/1660)},
	{__EVAL(2350/2600),__EVAL(1400/1660)},
	{__EVAL(2677/2600),__EVAL(0/1660)}
};
engineMOI	= 5;
enginePower	= 447;
peakTorque	= 1660;
minOmega	= 84;
maxOmega	= 272.27;
idleRPM		= 800;
redRPM		= 2600;


thrustDelay			= 0.3;    	/// how much time does it take to get the full thrust (default 1), used to reduce initial wheel slipping
brakeIdleSpeed		= 1.78; 	/// speed in m/s below which braking is applied

/// Gearbox and transmission
switchTime		= 0.1;
latency			= 1.0;
clutchStrength	= 35.0;
engineLosses		= 25; // power losses on the engine's crank-shaft (before the gearbox) in Nm. (Multiplied by the gear ratio)
transmissionLosses	= 15; // power losses on wheel axis (in/after the gearbox) in Nm. (Constant)

changeGearType 				= "rpmratio";		// condition for switching gears
changeGearOmegaRatios[] = {						// rpm ratio max/min pair
	__EVAL(2600/2600)	, __EVAL(1000/2600),
	__EVAL(1000/2600)	, 0,
	__EVAL(2400/2600)	, __EVAL(1000/2600),
	__EVAL(2500/2600)	, __EVAL(1400/2600),
	__EVAL(2500/2600)	, __EVAL(1500/2600),
	__EVAL(2600/2600)	, __EVAL(1800/2600)
};
class complexGearbox
{
	GearboxRatios[] =
	{
		"R1",-2.2,
		"N",0,
		"D1",4.2,
		"D2",2.23,
		"D3",1.22,
		"D4",0.839
	};
	TransmissionRatios[]    = {"High",14.75};
	gearBoxMode				= "auto";
	moveOffGear				= 1;
	driveString				= "D";
	neutralString			= "N";
	reverseString			= "R";
};


class Wheels {
	class L2 {
		suspTravelDirection[]	= SUSPTRAVELDIR_LEFT;
		boneName	= "wheel_podkoloL1";
		center		= "wheel_1_2_axis";
		boundary	= "wheel_1_2_bound";
		side		= "left";
		steering	= 0;
		width		= 0.4;
		mass		= 130;
		MOI			= __EVAL(1.0*(0.5*130*(0.393^2)));		// radius 0.378626m

		maxDroop		= 0.18;
		maxCompression	= 0.18;
		maxBrakeTorque	= 6520;

		sprungMass			= __EVAL(30000/12);
		springStrength		= 256250;
		springDamperRate	= 14811;

		dampingRate				= 1088;
		dampingRateInAir		= 1088;
		dampingRateDamaged		= 10;
		dampingRateDestroyed	= 10000;

		latStiffX = 3.5;
		latStiffY = 45;
		longitudinalStiffnessPerUnitGravity = 14000;
		frictionVsSlipGraph[]	= {
			{0.0, 	0.45},
			{0.32, 	1.0},
			{0.6, 	0.86}
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