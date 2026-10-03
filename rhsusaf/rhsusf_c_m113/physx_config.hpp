/// PhysX part
/// General Parameters ///
simulation				= tankX;
normalSpeedForwardCoef	= 0.82;
slowSpeedForwardCoef	= 0.65;
maxSpeed				= 72;
RHS_FUEL_RANGE(480)
RHS_fuelCapacity		= 360;

// ARTIFICIAL FORCES
tankTurnForce			= 0.40e6;				// initial force applied to turning in [0,tankTurnForceAngMinSpd] ang. speed range
tankTurnForceAngMinSpd	= 0.50;					// in rad/s, speed where tankTurnForce starts fading to 0 @ tankTurnForceAngSpd
tankTurnForceAngSpd		= 0.72;					// in rad/s, angular speed where tankTurnForce becomes 0
accelAidForceCoef		= 4.0;					// acceleration aid force
accelAidForceYOffset	= -3.3;					// Y offset from the CoG where to apply the accelAidForce
accelAidForceSpd		= 3.23;					// in m/s, speed where accelAidForceCoef becomes 0

/// Bouyancy ///
canFloat = 1;
waterLeakiness = 250.0;
maxFordingDepth = 0.1;
waterResistance = 1;
waterDamageEngine = 0.9;

engineShiftY           		 = 0.6;		/// relative virtual position of engine for PhysX, affects lateral ship slope during turns

waterLinearDampingCoefY 	 = 2;		/// affect how fast does the ship go through waves down - higher values make it drift more on top of waves
waterLinearDampingCoefX 	 = 2;		/// affects sliding of the ship in turns
waterAngularDampingCoef 	 = 1.2;		/// increase this for smoother movement, but beware too high values
waterResistanceCoef 		 = 0.475;	/// how much does water slow the ship down

waterEffectSpeed 		 = 5;		/// limit of displaying the standard water effect
engineEffectSpeed 		 = 5;		/// limit of displaying the engine effect
waterFastEffectSpeed 	 = 28;			/// increase this for smoother movement, but beware too high

/// Engine ///

torqueCurve[] = {
{__EVAL(550/2500),__EVAL(450/770)},
{__EVAL(1000/2500),__EVAL(498/770)},
{__EVAL(1250/2500),__EVAL(635/770)},
{__EVAL(1500/2500),__EVAL(746/770)},
{__EVAL(1800/2500),__EVAL(770/770)},
{__EVAL(2000/2500),__EVAL(743/770)},
{__EVAL(2250/2500),__EVAL(712/770)},
{__EVAL(2764/2500),__EVAL(0/770)}
};

engineMOI	= 10;
enginePower	= 205;
peakTorque	= 770;
minOmega 	= 60;
maxOmega	= 261.8;
idleRPM		= 550;
redRPM		= 2500;


thrustDelay								= 0.3;	// how much time does it take to get the full thrust (default 1), used to reduce initial wheel slipping
dampingRateFullThrottle					= 0.3;	// engine braking with thrust 1
dampingRateZeroThrottleClutchEngaged	= 3.0;	// engine braking with thrust 0
dampingRateZeroThrottleClutchDisengaged	= 0.25; // engine braking in neutral/open clutch
engineLosses		= 25; // power losses on the engine's crank-shaft (before the gearbox) in Nm. (Multiplied by the gear ratio)
transmissionLosses	= 15; // power losses on wheel axis (in/after the gearbox) in Nm. (Constant)

/// Clutch, Gearbox and Driveline ///

clutchStrength	= 15.0;
switchTime		= 0.1;
latency			= 0.1;
changeGearType	= "rpmratio";		// condition for switching gears
changeGearOmegaRatios[] = {						// rpm ratio max/min pair
	__EVAL(2500/2500)	, __EVAL(1000/2500),
	__EVAL(1000/2500)	, 0,
	__EVAL(2100/2500)	, __EVAL(1400/2500),
	__EVAL(2350/2500)	, __EVAL(1400/2500),
	__EVAL(2400/2500)	, __EVAL(1400/2500),
	__EVAL(2500/2500)	, __EVAL(1500/2500)
};
//TX 200-2A gearbox
class complexGearbox {
	GearboxRatios[] = {
		"R1",-6.62,
		"N",0,
		"D1",4.16,
		"D2",2.14,
		"D3",1.46,
		"D4",1.02
	};
	TransmissionRatios[] = {"High",12.3};
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
		width		= 0.36;
		steering	= 0;
		mass		= 100;
		MOI			= __EVAL(1.0*(0.5*100*(0.38^2)));		// radius 0.38

		maxBrakeTorque = 3000;

		maxDroop		= 0.15;
		maxCompression	= 0.15;

		sprungMass			= __EVAL(12500/10);
		springStrength		= 163500;
		springDamperRate	= 7458;

		dampingRate				= 700.0;
		dampingRateInAir		= 700.0;
		dampingRateDamaged		= 10.0;
		dampingRateDestroyed	= 10000.0;

		latStiffX = 3;
		latStiffY = 30;
		longitudinalStiffnessPerUnitGravity = 25000;
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