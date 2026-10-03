/// PhysX part
simulation				= tankX;
/// General Parameters ///
normalSpeedForwardCoef	= 0.85;
slowSpeedForwardCoef	= 0.5;
RHS_FUEL_RANGE(500)
RHS_fuelCapacity		= 560;

// ARTIFICIAL FORCES
tankTurnForce			= 0.55e6;				// initial force applied to turning in [0,tankTurnForceAngMinSpd] ang. speed range
tankTurnForceAngMinSpd	= 0.50;					// in rad/s, speed where tankTurnForce starts fading to 0 @ tankTurnForceAngSpd
tankTurnForceAngSpd		= 0.72;					// in rad/s, angular speed where tankTurnForce becomes 0
accelAidForceCoef		= 2.0;					// acceleration aid force
accelAidForceYOffset	= -7.0;					// Y offset from the CoG where to apply the accelAidForce
accelAidForceSpd		= 2.23;					// in m/s, speed where accelAidForceCoef becomes 0


antiRollbarForceCoef = 24;
antiRollbarForceLimit = 42;
antiRollbarSpeedMin = 30;
antiRollbarSpeedMax = 75;

/// Bouyancy ///

canFloat = 1;
waterLeakiness = 250.0;
maxFordingDepth = 0.1;
waterResistance = 1;
waterDamageEngine = 0.9;

engineShiftY           		 = 1.7;		/// relative virtual position of engine for PhysX, affects lateral ship slope during turns

waterLinearDampingCoefY 	 = 2;		/// affect how fast does the ship go through waves down - higher values make it drift more on top of waves
waterLinearDampingCoefX 	 = 2;		/// affects sliding of the ship in turns
waterAngularDampingCoef 	 = 1.2;		/// increase this for smoother movement, but beware too high values
waterResistanceCoef 		 = 0.35;	/// how much does water slow the ship down

waterEffectSpeed 		 = 5;		/// limit of displaying the standard water effect
engineEffectSpeed 		 = 5;		/// limit of displaying the engine effect
waterFastEffectSpeed 	 = 28;			/// increase this for smoother movement, but beware too high

/// Engine ///

torqueCurve[] = {
{__EVAL(700/2300),__EVAL(724/1810)},
{__EVAL(1000/2300),__EVAL(1310/1810)},
{__EVAL(1200/2300),__EVAL(1725/1810)},
{__EVAL(1400/2300),__EVAL(1810/1810)},
{__EVAL(1600/2300),__EVAL(1750/1810)},
{__EVAL(1800/2300),__EVAL(1630/1810)},
{__EVAL(2000/2300),__EVAL(1470/1810)},
{__EVAL(2611/2300),__EVAL(0/1810)}
};

engineMOI	= 25;
enginePower	= 336;
peakTorque	= 1810;
minOmega	= 67.86;
maxOmega	= 240.86;
idleRPM		= 700;
redRPM		= 2300;

thrustDelay			= 0.25;    	/// how much time does it take to get the full thrust (default 1), used to reduce initial wheel slipping
engineLosses		= 32; // power losses on the engine's crank-shaft (before the gearbox) in Nm. (Multiplied by the gear ratio)
transmissionLosses	= 20; // power losses on wheel axis (in/after the gearbox) in Nm. (Constant)

/// Clutch, Gearbox and Driveline ///

clutchStrength	= 15.0;
switchTime		= 0.1;
latency			= 0.1;
changeGearType	= "rpmratio";		// condition for switching gears
changeGearOmegaRatios[] = {						// rpm ratio max/min pair
	__EVAL(2300/2300)	, __EVAL(1000/2300),
	__EVAL(1000/2300)	, 0,
	__EVAL(2100/2300)	, __EVAL(1400/2300),
	__EVAL(2200/2300)	, __EVAL(1400/2300),
	__EVAL(2200/2300)	, __EVAL(1400/2300),
	__EVAL(2300/2300)	, __EVAL(1500/2300),
	__EVAL(2300/2300)	, __EVAL(1500/2300)
};
class complexGearbox {
	GearboxRatios[] =
	{
		"R1",-3.31,
		"N",0,
		"D1",3.31,
		"D2",1.934,
		"D3",1.132,
		"D4",0.862,
		"D5",0.610
	};
	TransmissionRatios[]	= {"High",11.8};
	AmphibiousRatios[]		= {"R1", -10, "N", 0, "D1", 10};
	gearBoxMode				= "auto";
	moveOffGear				= 1;
	driveString				= "D";
	neutralString			= "N";
	reverseString			= "R";
	transmissionDelay		= 0.6;
};

class Wheels {
	class L2 {
		suspTravelDirection[]	= SUSPTRAVELDIR_LEFT;
		boneName	= "wheel_podkoloL1";
		center		= "wheel_1_2_axis";
		boundary	= "wheel_1_2_bound";
		side		= "left";
		width 		= 0.32;
		steering	= 0;
		mass		= 100;
		MOI			= __EVAL(1.0*(0.5*100*(0.332^2)));		// radius 0.332m

		maxDroop		= 0.18;
		maxCompression	= 0.18;

		maxBrakeTorque = 1500;

		sprungMass			= __EVAL(18000/12);
		springStrength		= 285400;
		springDamperRate	= 7500;

		dampingRate				= 611;
		dampingRateInAir		= 611;
		dampingRateDamaged		= 10.0;
		dampingRateDestroyed	= 10000.0;

		latStiffX = 3;
		latStiffY = 40;
		longitudinalStiffnessPerUnitGravity = 42000;
		frictionVsSlipGraph[]	= {
			{0.0, 	0.45},
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
/// End of PhysX