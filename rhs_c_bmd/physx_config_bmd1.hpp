/// PhysX part
simulation				= tankX;
normalSpeedForwardCoef	= 0.66;
slowSpeedForwardCoef	= 0.35;
RHS_FUEL_RANGE(600)
RHS_fuelCapacity		= 300;
maxSpeed 				= 60;

// ARTIFICIAL FORCES
tankTurnForce			= 0.32e6;				// initial force applied to turning in [0,tankTurnForceAngMinSpd] ang. speed range
tankTurnForceAngMinSpd	= 0.70;					// in rad/s, speed where tankTurnForce starts fading to 0 @ tankTurnForceAngSpd
tankTurnForceAngSpd		= 0.82;					// in rad/s, angular speed where tankTurnForce becomes 0
accelAidForceCoef		= 4.0;					// acceleration aid force
accelAidForceYOffset	= -2.5;					// Y offset from the CoG where to apply the accelAidForce
accelAidForceSpd		= 2.23;					// in m/s, speed where accelAidForceCoef becomes 0

/// Bouyancy ///

canFloat = 1;
waterLeakiness = 250.0;
maxFordingDepth = 0.1;
waterResistance = 1;
waterDamageEngine = 0.9;

engineShiftY           		 = .2;		/// relative virtual position of engine for PhysX, affects lateral ship slope during turns

waterLinearDampingCoefY 	 = 2;		/// affect how fast does the ship go through waves down - higher values make it drift more on top of waves
waterLinearDampingCoefX 	 = 2;		/// affects sliding of the ship in turns
waterAngularDampingCoef 	 = 1.2;		/// increase this for smoother movement, but beware too high values
waterResistanceCoef 		 = 0.33;	/// how much does water slow the ship down

waterEffectSpeed 		 = 5;		/// limit of displaying the standard water effect
engineEffectSpeed 		 = 5;		/// limit of displaying the engine effect
waterFastEffectSpeed 	 = 28;			/// increase this for smoother movement, but beware too high


torqueCurve[] = {
{__EVAL(700/2400),__EVAL(397/883)},
{__EVAL(1000/2400),__EVAL(655/883)},
{__EVAL(1200/2400),__EVAL(785/883)},
{__EVAL(1400/2400),__EVAL(883/883)},
{__EVAL(1600/2400),__EVAL(873/883)},
{__EVAL(1800/2400),__EVAL(859/883)},
{__EVAL(2000/2400),__EVAL(829/883)},
{__EVAL(2806/2400),__EVAL(0/883)}
};

engineMOI	= 9;
enginePower	= 179;
peakTorque	= 883;
minOmega	= 75;
maxOmega	= 251.33;
idleRPM		= 700;
redRPM		= 2400;

brakeIdleSpeed		= 1.0; 	/// speed in m/s below which braking is applied

antiRollbarForceCoef = 24;
antiRollbarForceLimit = 42;
antiRollbarSpeedMin = 30;
antiRollbarSpeedMax = 75;


/// Clutch, Gearbox and Driveline ///
thrustDelay			= 0.3;    	/// how much time does it take to get the full thrust (default 1), used to reduce initial wheel slipping
clutchStrength		= 22.0;
engineLosses		= 25; // power losses on the engine's crank-shaft (before the gearbox) in Nm. (Multiplied by the gear ratio)
transmissionLosses	= 13; // power losses on wheel axis (in/after the gearbox) in Nm. (Constant)
changeGearType		= "rpmratio";		// condition for switching gears
changeGearOmegaRatios[] = {						// rpm ratio max/min pair
	__EVAL(2600/2600)	, __EVAL(1000/2600),
	__EVAL(1000/2600)	, 0,
	__EVAL(2000/2600)	, __EVAL(1000/2600),
	__EVAL(2400/2600)	, __EVAL(1400/2600),
	__EVAL(2500/2600)	, __EVAL(1500/2600),
	__EVAL(2600/2600)	, __EVAL(1800/2600)
};
changeGearMinEffectivity[] = {0.7,0.0,0.5};
class complexGearbox {
	GearboxRatios[] =
	{
		"R1",-12.77,
		"N",0,
		"D1",5.55,
		"D2",3.09,
		"D3",1.7,
		"D4",1
	};
	AmphibiousRatios[]		= {"R1", -9.5, "N", 0, "D1", 9.5};
	TransmissionRatios[]	= {"High",7.5};
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
		boneName				= "wheel_podkoloL1";
		center					= "wheel_1_2_axis";
		boundary				= "wheel_1_2_bound";
		side					= "left";
		suspTravelDirection[]	= SUSPTRAVELDIR_LEFT;
		width					= __EVAL(0.24*0.9);
		steering				= 0;
		weight					= 100;
		mass					= 100;
		MOI						= __EVAL(1.0*(0.5*120*(0.283^2)));		// radius 0.378626m

		maxBrakeTorque = 500;

		maxDroop		= 0.18;
		maxCompression	= 0.18;

		sprungMass			= __EVAL(7600/10);
		springStrength		= 98000;
		springDamperRate	= 4600;

		dampingRate				= 285;
		dampingRateInAir		= 285;
		dampingRateDamaged		= 10.0;
		dampingRateDestroyed	= 10000.0;

		latStiffX = 5;
		latStiffY = 45;
		longitudinalStiffnessPerUnitGravity = 100000;
		frictionVsSlipGraph[] = {{ 0.17,1.55 }, { 0.3,1.05 },{ 1,1.0 }};
	};
	class L3: L2 {
		boneName = "wheel_podkoloL2";
		center   = "wheel_1_3_axis";
		boundary = "wheel_1_3_bound";
	};
	class L4: L2 {
		boneName = "wheel_podkoloL3";
		center   = "wheel_1_4_axis";
		boundary = "wheel_1_4_bound";
	};
	class L5: L2 {
		boneName = "wheel_podkoloL4";
		center   = "wheel_1_5_axis";
		boundary = "wheel_1_5_bound";
	};
	class L6: L2 {
		boneName = "wheel_podkoloL5";
		center   = "wheel_1_6_axis";
		boundary = "wheel_1_6_bound";
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