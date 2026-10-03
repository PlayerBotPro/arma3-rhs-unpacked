//----- General Parameters -----//
normalSpeedForwardCoef=0.9;
turnCoef=3.5;
terrainCoef=1.7;
simulation="carx";

precision=9;
brakeDistance=3;
acceleration=15;
fireResistance=5;

maxSpeed=98;
RHS_FUEL_RANGE(480)
wheelCircumference=2.95;

brakeIdleSpeed=2.0;
maxFordingDepth=0.7;
waterSpeedFactor=0.3;
waterResistance=1;
waterResistanceCoef=0.2;
waterLeakiness = 250.0;

//----- Gearbox Parameters -----//
class complexGearbox
{
	GearboxRatios[] = 
	{
		"R1",-10.094,
		"N",0,
		"D1",5.562,
		"D2",3.456,
		"D3",2.623,
		"D4",1.678,
		"D5",1.078
	};
	TransmissionRatios[]	= {"High",4.2};
	gearBoxMode				= "auto";
	moveOffGear				= 1;
	driveString				= "D";
	neutralString			= "N";
	reverseString			= "R";
};
switchTime			= 0.51;
latency				= 1.3;
transmissionLosses	= 18;

//----- Clutch and Driveline Parameters -----//
dampersBumpCoef = 6.0;
differentialType = "all_limited";
frontRearSplit = 0.5;
frontBias = 1.3;
rearBias = 1.3;
centreBias = 1.3;
clutchStrength = 55.0;

dampingRateFullThrottle = 0.08;
dampingRateZeroThrottleClutchEngaged = 2.0;
dampingRateZeroThrottleClutchDisengaged = 0.35;

//----- Engine Parameters -----//
torqueCurve[] =
{
	{0.262 , 0.65},
	{0.381 , 0.79},
	{0.476 , 0.89},
	{0.571 , 0.99},
	{0.667 , 1},
	{0.762 , 0.99},
	{0.857 , 0.95},
	{1 , 0.86}
};

enginePower = 324;
peakTorque = __EVAL(1684*1.2);
minOmega = 55;
maxOmega = 219.91;
idleRPM = 550;
redRPM = 2100;

engineLosses = 34;
thrustDelay=0.8;
engineBrakeCoef = 0.8;

//----- Anti-rollbar Parameters -----//
antiRollbarForceCoef = 1.5;
antiRollbarForceLimit = 4;
antiRollbarSpeedMin = 0;
antiRollbarSpeedMax = 20;

accelAidForceSpd		= 1.8;					// in m/s, speed where accelAidForceCoef becomes 0
accelAidForceCoef		= 2.0;					// acceleration aid force
accelAidForceYOffset	= -1.0;					// Y offset from the CoG where to apply the accelAidForce

class Wheels
{
	class L1
	{
		side					="left";
		boneName				="wheel_1_1_damper";
		center					="wheel_1_1_axis";
		boundary				="wheel_1_1_bound";
		suspForceAppPointOffset	="wheel_1_1_axis";
		tireForceAppPointOffset	="wheel_1_1_axis";
		suspTravelDirection[]	= SUSPTRAVELDIR_LEFT;

		steering	= 1;
		width		= 0.33;
		mass		= 80;
		MOI			= 10;

		dampingRate				=0.1;
		dampingRateDamaged		=1;
		dampingRateDestroyed	=1000;
		maxBrakeTorque		=10000;
		maxHandBrakeTorque	=0;
		
		maxCompression	=0.15;
		maxDroop		=0.15;

		sprungMass			= -1;
		springStrength		= 42289;
		springDamperRate	= 7444;

		longitudinalStiffnessPerUnitGravity=10000;
		latStiffX=25;
		latStiffY=180;
		frictionVsSlipGraph[]=
		{
			{0,1},
			{0.5,1},
			{1,1}
		};
	};
	class L2: L1
	{
		boneName="wheel_1_2_damper";
		steering=1;
		center="wheel_1_2_axis";
		boundary="wheel_1_2_bound";
		suspForceAppPointOffset="wheel_1_2_axis";
		tireForceAppPointOffset="wheel_1_2_axis";
	};
	class L3: L1
	{
		boneName="wheel_1_3_damper";
		steering=0;
		center="wheel_1_3_axis";
		boundary="wheel_1_3_bound";
		suspForceAppPointOffset="wheel_1_3_axis";
		tireForceAppPointOffset="wheel_1_3_axis";
		maxHandBrakeTorque=300000;
	};
	class L4: L1
	{
		boneName="wheel_1_4_damper";
		steering=0;
		center="wheel_1_4_axis";
		boundary="wheel_1_4_bound";
		suspForceAppPointOffset="wheel_1_4_axis";
		tireForceAppPointOffset="wheel_1_4_axis";
		maxHandBrakeTorque=300000;
	};
	class R1: L1
	{
		boneName="wheel_2_1_damper";
		center="wheel_2_1_axis";
		boundary="wheel_2_1_bound";
		suspForceAppPointOffset="wheel_2_1_axis";
		tireForceAppPointOffset="wheel_2_1_axis";
		steering=1;
		side="right";
		suspTravelDirection[]	= SUSPTRAVELDIR_RIGHT;
	};
	class R2: R1
	{
		boneName="wheel_2_2_damper";
		steering=1;
		center="wheel_2_2_axis";
		boundary="wheel_2_2_bound";
		suspForceAppPointOffset="wheel_2_2_axis";
		tireForceAppPointOffset="wheel_2_2_axis";
	};
	class R3: R1
	{
		boneName="wheel_2_3_damper";
		steering=0;
		center="wheel_2_3_axis";
		boundary="wheel_2_3_bound";
		suspForceAppPointOffset="wheel_2_3_axis";
		tireForceAppPointOffset="wheel_2_3_axis";
		maxHandBrakeTorque=300000;
	};
	class R4: R1
	{
		boneName="wheel_2_4_damper";
		steering=0;
		center="wheel_2_4_axis";
		boundary="wheel_2_4_bound";
		suspForceAppPointOffset="wheel_2_4_axis";
		tireForceAppPointOffset="wheel_2_4_axis";
		maxHandBrakeTorque=300000;
	};
};
/// End of PhysX