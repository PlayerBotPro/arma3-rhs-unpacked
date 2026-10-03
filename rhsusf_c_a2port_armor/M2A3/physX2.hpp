/// PhysX part
numberPhysicalWheels = 16;
simulation	= tankX;
normalSpeedForwardCoef=0.6;
slowSpeedForwardCoef=0.45;

// Tank Water Ford config
maxFordingDepth = 0;
waterResistance = 0;
waterDamageEngine = 0.2;
waterLeakiness = 10;


torqueCurve[] = {
{"(0/8000)","(2300/2300)"},
{"(1143/8000)","(2300/2300)"},
{"(2286/8000)","(2300/2300)"},
{"(3429/8000)","(2300/2300)"},
{"(4572/8000)","(2300/2300)"},
{"(5715/8000)","(2300/2300)"},
{"(6858/8000)","(2300/2300)"},
{"(8000/8000)","(2300/2300)"}
};

maxOmega = 272.27;
enginePower = 447;
peakTorque = 1660;
idleRPM = 850;
redRPM = 2600;


thrustDelay			= 0.3;    	/// how much time does it take to get the full thrust (default 1), used to reduce initial wheel slipping
clutchStrength 		= 105.0;
fuelCapacity		= 462;
brakeIdleSpeed		= 1.78; 	/// speed in m/s below which braking is applied

tankTurnForce		= 330000; /// Random magic number, expected to be something like 11 x mass of vehicle
//600000;

antiRollbarForceCoef = 34;
antiRollbarForceLimit = 72;
antiRollbarSpeedMin = 10;
antiRollbarSpeedMax = 75;

engineLosses = 25; // power losses on the engine's crank-shaft (before the gearbox) in Nm. (Multiplied by the gear ratio)
transmissionLosses = 15; // power losses on wheel axis (in/after the gearbox) in Nm. (Constant)

class complexGearbox {
	GearboxRatios[] = {"R1",-2.0,"N",0,"D1",1.0};
	TransmissionRatios[] = {"High",6.25};
	gearBoxMode        = "auto";
	moveOffGear        = 3;
	driveString        = "D";
	neutralString      = "N";
	reverseString      = "R";
	transmissionDelay  = 0.1;
};
changeGearMinEffectivity[] = {0.95,0.0,0.85};
switchTime = 0.1;
latency = 1.0;


class Wheels {
	class L2 {
 		wheelBrakeFrictionCoef=0.01;
		boneName = "wheel_podkoloL1";
		center   = "wheel_1_2_axis";
		boundary = "wheel_1_2_bound";
		damping  = 75.0;
		// tanks do not have steerable wheels
		steering = 0;
		/// We need to distinguish the side to apply the right thrust value
		side = "left";
		/// weight of the wheel is defined per wheel, it reduces overall mass of vehicle
		weight=130;
		mass=130;
		MOI=14.2;
		latStiffX=25;
		latStiffY=280;
		longitudinalStiffnessPerUnitGravity=100000;
		maxBrakeTorque=6520;

		sprungMass = 2000; //14 wheels, sprockets sprungmass=1500, 30000-6000=24000/12=2250
		springStrength = 256250;
		springDamperRate = 14811;


		dampingRate=0.9;
		dampingRateInAir=620;
		dampingRateDamaged=10;
		dampingRateDestroyed=10000;
		maxDroop=0.18;
		maxCompression=0.18;
		frictionVsSlipGraph[] = {{ 0.0,1.5 }, { 0.5,1.5 },{ 1,1.5 }};
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
		sprungMass = 1500.0;
		springStrength = 37500;
		springDamperRate = 7500;
		maxDroop = 0;
		maxCompression = 0;
	};
	// front left wheel, usually Idler or Drive Sproket
	// Note, this wheel may not always be touching the ground, but we need it anyway!
	class L1: L2 {
		boneName = "";
		center   = "wheel_1_1_axis";
		boundary = "wheel_1_1_bound";
		sprungMass = 1500.0;
		springStrength = 37500;
		springDamperRate = 7500;
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
	// rear right wheel, usually Idler or Drive Sproket
	// Note, this wheel may not always be touching the ground, but we need it anyway!
	class R9: R2 {
		boneName = "wheel_podkolop9";
		center   = "wheel_2_9_axis";
		boundary = "wheel_2_9_bound";
		sprungMass = 1500.0;
		springStrength = 37500;
		springDamperRate = 7500;
		maxDroop = 0;
		maxCompression = 0;
	};
	// front right wheel, usually Idler or Drive Sproket
	// Note, this wheel may not always be touching the ground, but we need it anyway!
	class R1: R2 {
		boneName = "";
		center   = "wheel_2_1_axis";
		boundary = "wheel_2_1_bound";
		sprungMass = 1500.0;
		springStrength = 37500;
		springDamperRate = 7500;
		maxDroop = 0;
		maxCompression = 0;
	};
};
/// End of PhysX