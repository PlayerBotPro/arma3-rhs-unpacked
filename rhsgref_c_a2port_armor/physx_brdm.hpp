//----- General Parameters -----//
normalSpeedForwardCoef=0.6;
slowSpeedForwardCoef=0.45;
numberPhysicalWheels = 8;
terrainCoef=1.2;
turnCoef=3.0;
simulation = "carx";
dampersBumpCoef = 3.0;

maxSpeed = 100;
fuelCapacity = 60;
RHS_fuelCapacity = 280;
wheelCircumference=3.55;

brakeIdleSpeed = 1.78;


canFloat = 1;
waterSpeedFactor = 0.25;
waterResistanceCoef = 0.515;
waterLeakiness = 1.5;
engineShiftY = 0.7; //1.2;
engineShiftZ = 3.0;
maxFordingDepth=1.2;
waterResistance = 0.5;
waterAngularDampingCoef = 3.0;
waterLinearDampingCoefX = 2.0;
waterLinearDampingCoefY = 2;
waterPPInVehicle = 0;

rudderForceCoef = 3.5;
rudderForceCoefAtMaxSpeed = 0.3;

//----- Gearbox Parameters -----//
class complexGearbox
{
	GearboxRatios[] =
	{
		"R1",-3.182,
		"N",0,
		"D1",4.182,
		"D2",2.318,
		"D3",1.85,
		"D4",1.0
	};
	TransmissionRatios[] = {"High",4.449};
	AmphibiousRatios[] = {"R1",-10,"N",0,"D1",25};
	gearBoxMode = "auto";
	moveOffGear = 1;
	driveString = "D";
	neutralString = "N";
	reverseString = "R";
};
changeGearMinEffectivity[] = {0.95,0.15,0.95,0.95,0.95,0.95};
switchTime = 0.1;
latency = 1.4;

//----- Clutch and Driveline Parameters -----//
differentialType = "all_open";
frontRearSplit = 0.5;
frontBias = 1.3;
rearBias = 1.3;
centreBias = 1.3;
clutchStrength = 30.0;
dampingRateFullThrottle = 0.08;
dampingRateZeroThrottleClutchEngaged = 1.4;
dampingRateZeroThrottleClutchDisengaged = 0.35;

torqueCurve[] = {
	{__EVAL(0/2400),	__EVAL(90/460)},
	{__EVAL(400/2400), 	__EVAL(265/460)},
	{__EVAL(750/2400), 	__EVAL(320/460)},
	{__EVAL(1000/2400),	__EVAL(380/460)},
	{__EVAL(1250/2400),	__EVAL(420/460)},
	{__EVAL(1500/2400),	__EVAL(450/460)},
	{__EVAL(2000/2400),	__EVAL(460/460)},
	{__EVAL(2807/2400),	__EVAL(0/460)}
};

enginePower	= 220;
engineMOI	= 1.3;
peakTorque	= __EVAL(650*1.4);
minOmega	= 35;
maxOmega	= 251.33;
idleRPM		= 450;
redRPM		= 2400;

thrustDelay = 0.5;
engineLosses = 14;
engineBrakeCoef = 0.7;

antiRollbarForceCoef = 5;
antiRollbarForceLimit = 0;
antiRollbarSpeedMin = 5;
antiRollbarSpeedMax = 30;

accelAidForceSpd		= 2.8;					// in m/s, speed where accelAidForceCoef becomes 0
accelAidForceCoef		= 2.0;					// acceleration aid force
accelAidForceYOffset	= -1.4;					// Y offset from the CoG where to apply the accelAidForce

class Wheels
{
	class LF
	{
		side		= "left";
		boneName	= "wheel_1_1_damper";
		center		= "wheel_1_1_axis";
		boundary	= "wheel_1_1_bound";
		suspForceAppPointOffset = "wheel_1_1_axis";
		tireForceAppPointOffset = "wheel_1_1_axis";
		suspTravelDirection[] = {0,-1,0};

		steering = 1;
		width = 0.32;
		mass = 150;
		MOI = 13;

		dampingRate = 0.1;
		dampingRateDamaged = 1.0;
		dampingRateDestroyed = 1000.0;

		maxBrakeTorque = 12500;
		maxHandBrakeTorque = 0;

		maxCompression = 0.15;
		maxDroop = 0.25;

		sprungMass			= -1;
		springStrength		= 96250;
		springDamperRate	= 6889;

		longitudinalStiffnessPerUnitGravity = 3850;
		latStiffX = 15;
		latStiffY = 180;
		frictionVsSlipGraph[] = {{ 0,1 },{ 0.5,1 },{ 1,1 }};
	};
	class LR: LF
	{
		boneName = "wheel_1_2_damper";
		steering = 0;
		center = "wheel_1_2_axis";
		boundary = "wheel_1_2_bound";
		suspForceAppPointOffset = "wheel_1_2_axis";
		tireForceAppPointOffset = "wheel_1_2_axis";
		maxHandBrakeTorque = 300000;
	};
	class RF: LF
	{
		boneName = "wheel_2_1_damper";
		center = "wheel_2_1_axis";
		boundary = "wheel_2_1_bound";
		suspForceAppPointOffset = "wheel_2_1_axis";
		tireForceAppPointOffset = "wheel_2_1_axis";
		steering = 1;
		side = "right";
	};
	class RR: RF
	{
		boneName = "wheel_2_2_damper";
		steering = 0;
		center = "wheel_2_2_axis";
		boundary = "wheel_2_2_bound";
		suspForceAppPointOffset = "wheel_2_2_axis";
		tireForceAppPointOffset = "wheel_2_2_axis";
		maxHandBrakeTorque = 300000;
	};
};