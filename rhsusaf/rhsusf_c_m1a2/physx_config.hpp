/// PhysX part
numberPhysicalWheels = 18;
simulation	= tankX;
normalSpeedForwardCoef=0.6;
slowSpeedForwardCoef=0.45;

// Tank Water Ford config
maxFordingDepth = 0;
waterResistance = 0;
waterDamageEngine = 0.2;
waterLeakiness = 10;

		torqueCurve[] = {
		{__EVAL(0/8000),__EVAL(2300/2300)},
		{__EVAL(1143/8000),__EVAL(2300/2300)},
		{__EVAL(2286/8000),__EVAL(2300/2300)},
		{__EVAL(3429/8000),__EVAL(2300/2300)},
		{__EVAL(4572/8000),__EVAL(2300/2300)},
		{__EVAL(5715/8000),__EVAL(2300/2300)},
		{__EVAL(6858/8000),__EVAL(2300/2300)},
		{__EVAL(8000/8000),__EVAL(2300/2300)}
		};

maxOmega = 314.16;
enginePower = 1121;
peakTorque = 5355;
idleRPM = 850;
redRPM = 3000;


thrustDelay			= 0.0;    	/// how much time does it take to get the full thrust (default 1), used to reduce initial wheel slipping
clutchStrength 		= 50.0;
fuelCapacity		= 20;
fuelConsumptionRate = 100;
brakeIdleSpeed		= 0.0; 	/// speed in m/s below which braking is applied

tankTurnForce		= 735000; /// Random magic number, expected to be something like 11 x mass of vehicle

engineLosses = 25; // power losses on the engine's crank-shaft (before the gearbox) in Nm. (Multiplied by the gear ratio)
transmissionLosses = 15; // power losses on wheel axis (in/after the gearbox) in Nm. (Constant)

antiRollbarForceCoef = 24;
antiRollbarForceLimit = 42;
antiRollbarSpeedMin = 30;
antiRollbarSpeedMax = 75;
class complexGearbox {
	GearboxRatios[] = {"R1",-2.0,"N",0,"D1",1.0};
	TransmissionRatios[] = {"High",7.85};
	gearBoxMode        = "auto";
	moveOffGear        = 3;
	driveString        = "D";
	neutralString      = "N";
	reverseString      = "R";
	transmissionDelay  = 0.1;
};
/// end of gearbox

class Wheels
{
	class L2
	{
		boneName = "wheel_podkoloL1";
		center   = "wheel_1_2_axis";
		boundary = "wheel_1_2_bound";
		damping  = 75.0;
		steering = 0;
		side = "left";
		weight = 150;
		mass = 150;
		MOI = 11.5;

		latStiffX = 25;
		latStiffY = 200;
		longitudinalStiffnessPerUnitGravity = 100000;
		maxBrakeTorque = 6000;

		sprungMass = 4000.0;
		springStrength = 324000;
		springDamperRate = 36000;

		dampingRate = 1.0;
		dampingRateInAir = 685;
		dampingRateDamaged = 10.0;
		dampingRateDestroyed = 10000.0;

		maxDroop = 0.18;
		maxCompression = 0.18;
		//frictionVsSlipGraph[] = {{ 0.17,0.8 }, { 0.3,3.0 },{ 1,5.0 }};
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
	class L8: L2 {
		boneName = "wheel_podkolol7";
		center   = "wheel_1_8_axis";
		boundary = "wheel_1_8_bound";
	};
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
	class R8: R2 {
		boneName = "wheel_podkolop7";
		center   = "wheel_2_8_axis";
		boundary = "wheel_2_8_bound";
	};
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