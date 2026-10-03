/// PhysX part
/// General Parameters ///
simulation				= tankX;
normalSpeedForwardCoef	= 0.85;
slowSpeedForwardCoef	= 0.5;
fuelCapacity			= 672;
RHS_fuelCapacity		= 672;
maxSpeed				= 46;

// ARTIFICIAL FORCES
tankTurnForce			= 0.2e6;				// initial force applied to turning in [0,tankTurnForceAngMinSpd] ang. speed range
tankTurnForceAngMinSpd	= 0.70;					// in rad/s, speed where tankTurnForce starts fading to 0 @ tankTurnForceAngSpd
tankTurnForceAngSpd		= 0.82;					// in rad/s, angular speed where tankTurnForce becomes 0
accelAidForceCoef		= 4.0;					// acceleration aid force
accelAidForceYOffset	= -4.1;					// Y offset from the CoG where to apply the accelAidForce
accelAidForceSpd		= 2.23;					// in m/s, speed where accelAidForceCoef becomes 0

/// Bouyancy ///

canFloat			= 1;
waterLeakiness		= 250.0;
maxFordingDepth		= 0.1;
waterResistance		= 1;
waterDamageEngine	= 0.9;

engineShiftY           		 = 0.1;		/// relative virtual position of engine for PhysX, affects lateral ship slope during turns

waterLinearDampingCoefY 	 = 2;		/// affect how fast does the ship go through waves down - higher values make it drift more on top of waves
waterLinearDampingCoefX 	 = 2;		/// affects sliding of the ship in turns
waterAngularDampingCoef 	 = 1.2;		/// increase this for smoother movement, but beware too high values
waterResistanceCoef 		 = 0.175;	/// how much does water slow the ship down

waterEffectSpeed 		 = 5;		/// limit of displaying the standard water effect
engineEffectSpeed 		 = 5;		/// limit of displaying the engine effect
waterFastEffectSpeed 	 = 28;			/// increase this for smoother movement, but beware too high

memoryPointsLeftEngineEffect = "EngineEffectL";
memoryPointsRightEngineEffect = "EngineEffectR";

/// Engine ///

torqueCurve[] = {
{__EVAL(0/2300),__EVAL(0/1650)},
{__EVAL(1100/2300),__EVAL(1430/1650)},
{__EVAL(1200/2300),__EVAL(1625/1650)},
{__EVAL(1300/2300),__EVAL(1650/1650)},
{__EVAL(1400/2300),__EVAL(1630/1650)},
{__EVAL(1600/2300),__EVAL(1500/1650)},
{__EVAL(2000/2300),__EVAL(1320/1650)},
{__EVAL(2604/2300),__EVAL(0/1650)}
};

engineMOI 	= 10;
enginePower	= 261;
peakTorque	= 1650;
minOmega	= 85;
maxOmega	= 240.86;
idleRPM		= 800;
redRPM		= 2300;

thrustDelay								= 0.3;	// how much time does it take to get the full thrust (default 1), used to reduce initial wheel slipping
dampingRateFullThrottle					= 0.3;	// engine braking with thrust 1
dampingRateZeroThrottleClutchEngaged	= 3.0;	// engine braking with thrust 0
dampingRateZeroThrottleClutchDisengaged	= 0.25; // engine braking in neutral/open clutch
engineLosses							= 25; 	// power losses on the engine's crank-shaft (before the gearbox) in Nm. (Multiplied by the gear ratio)
transmissionLosses						= 15; 	// power losses on wheel axis (in/after the gearbox) in Nm. (Constant)

/// Clutch, Gearbox and Driveline ///
clutchStrength 				= 18.0;
latency 					= 0.7;				// time to stay in a gear
switchTime					= 0;				// time off gear when switching
changeGearType 				= "rpmratio";		// condition for switching gears
changeGearOmegaRatios[] = {						// rpm ratio max/min pair
	__EVAL(2300/2300)	, __EVAL(1000/2300),
	__EVAL(1000/2300)	, 0,
	__EVAL(2100/2300)	, __EVAL(1400/2300),
	__EVAL(2150/2300)	, __EVAL(1500/2300),
	__EVAL(2150/2300)	, __EVAL(1500/2300),
	__EVAL(2300/2300)	, __EVAL(1700/2300)
};
class complexGearbox {
	GearboxRatios[] =
	{
		"R1",-3.31,
		"N",0,
		"D1",3.31,
		"D2",1.934,
		"D3",1.132,
		"D4",0.662
	};
	AmphibiousRatios[]		= {"R1", -9.5, "N", 0, "D1", 9.5};
	TransmissionRatios[]	= {"High",18.5};
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
		suspTravelDirection[]	= SUSPTRAVELDIR_LEFT;
		boneName	= "wheel_podkoloL1";
		center		= "wheel_1_2_axis";
		boundary	= "wheel_1_2_bound";
		side		= "left";
		width 		= 0.2;
		steering	= 0;
		mass		= 93;
		MOI			= __EVAL(0.5*93*(0.472^2));		// radius 0.38m

		maxBrakeTorque = 25000;

		maxDroop		= 0.18;
		maxCompression	= 0.18;

		sprungMass			= 1306;
		springStrength		= 92969;
		springDamperRate	= 7663;

		dampingRate				= 955;
		dampingRateInAir		= 955;
		dampingRateDamaged		= 10.0;
		dampingRateDestroyed	= 10000.0;

		latStiffX = 3.5;
		latStiffY = 35;
		longitudinalStiffnessPerUnitGravity = 14000;
		frictionVsSlipGraph[]	= {
			{0.0, 	0.55},
			{0.18, 	1.0},
			{0.65, 	0.7}
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