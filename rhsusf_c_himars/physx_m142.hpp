//----- General Parameters -----//
normalSpeedForwardCoef=0.9;
turnCoef=3.0;
terrainCoef=2.0;
simulation="carx";

precision=9;
brakeDistance=3;
acceleration=15;
fireResistance=5;

maxSpeed=98;
RHS_FUEL_RANGE(480)
wheelCircumference=3.705;

brakeIdleSpeed=2.0;

canFloat=0;
maxFordingDepth= 0.6;
waterResistance = 0.5;
waterDamageEngine = 0.9;
waterLeakiness = 9.5;
waterSpeedFactor = 0.8;

//----- Gearbox Parameters -----//
switchTime				= 0.65;
latency					= 1.5;
changeGearType			= "rpmratio";		// condition for switching gears
changeGearOmegaRatios[]	= {					// rpm ratio max/min pair
	__EVAL(2950/2400)	, __EVAL(1000/2400),
	__EVAL(700/2400)	, __EVAL(500/2400),
	__EVAL(2350/2400)	, __EVAL(600/2400),
	__EVAL(2200/2400)	, __EVAL(1000/2400),
	__EVAL(2200/2400)	, __EVAL(1400/2400),
	__EVAL(2200/2400)	, __EVAL(1500/2400),
	__EVAL(2150/2400)	, __EVAL(1500/2400),
	__EVAL(2200/2400)	, __EVAL(1700/2400),
	__EVAL(2400/2400)	, __EVAL(1800/2400)
};
class complexGearbox
{
	GearboxRatios[] = {
		"R1", 	-6.03,
		"N",	0,
		"D1", 	6.93,
		"D2",	4.19,
		"D3",	2.24,
		"D4",	1.69,
		"D5",	1.20,
		"D6",	0.90,
		"D7",	0.78
	};
	TransmissionRatios[] = {"High",6.8};
	gearBoxMode = "auto";
	moveOffGear = 1;
	driveString = "D";
	neutralString = "N";
	reverseString = "R";
};

//----- Clutch and Driveline Parameters -----//
dampersBumpCoef = 6.0;
differentialType = "all_limited";
frontRearSplit = 0.3;
frontBias = 1.3;
rearBias = 1.3;
centreBias = 1.3;
clutchStrength = 35.0;

dampingRateFullThrottle					= 0.08;
dampingRateZeroThrottleClutchEngaged	= 2.0;
dampingRateZeroThrottleClutchDisengaged	= 0.35;

//----- Engine Parameters -----//
torqueCurve[] = {
{__EVAL(650/2400),__EVAL(785/1254)},
{__EVAL(1200/2400),__EVAL(1010/1254)},
{__EVAL(1440/2400),__EVAL(1254/1254)},
{__EVAL(1600/2400),__EVAL(1240/1254)},
{__EVAL(1800/2400),__EVAL(1185/1254)},
{__EVAL(2000/2400),__EVAL(1120/1254)},
{__EVAL(2200/2400),__EVAL(1064/1254)},
{__EVAL(2626/2400),__EVAL(0/1254)}
};

engineMOI 	= 3;
enginePower	= 268;
peakTorque	= 1350;
minOmega	= 50;
maxOmega	= 251.33;
idleRPM		= 650;
redRPM		= 2400;

engineLosses		= 12;
transmissionLosses	= 5;
thrustDelay			= 0.5;
engineBrakeCoef		= 0.8;

//----- Anti-rollbar Parameters -----//
antiRollbarForceCoef	= 20;
antiRollbarForceLimit	= 35;
antiRollbarSpeedMin		= 10;
antiRollbarSpeedMax		= 60;

accelAidForceSpd		= 2.23;					// in m/s, speed where accelAidForceCoef becomes 0
accelAidForceCoef		= 3.0;					// acceleration aid force
accelAidForceYOffset	= -1.3;					// Y offset from the CoG where to apply the accelAidForce


class Wheels
{
	class L1
	{
		side					= "left";
		boneName				= "wheel_1_1_damper";
		center					= "wheel_1_1_axis";
		boundary				= "wheel_1_1_bound";
		suspForceAppPointOffset	= "wheel_1_1_axis";
		tireForceAppPointOffset	= "wheel_1_1_axis";
		suspTravelDirection[]	= {0,-1,0};

		width					= 0.34;
		steering				= 1;
		mass					= 60;
		MOI						= 45;

		dampingRate				= 0.1;
		dampingRateDamaged		= 1;
		dampingRateDestroyed	= 1000;

		maxBrakeTorque		= 25000;
		maxHandBrakeTorque	= 0;

		maxCompression	= 0.12;
		maxDroop		= 0.12;

		sprungMass			= -1;
		springStrength		= 64931;
		springDamperRate	= 20778;


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
		steering=0;
		maxHandBrakeTorque=36000;
		center="wheel_1_2_axis";
		boundary="wheel_1_2_bound";
		suspForceAppPointOffset="wheel_1_2_axis";
		tireForceAppPointOffset="wheel_1_2_axis";
	};
	class L3: L1
	{
		boneName="wheel_1_3_damper";
		steering=0;
		maxHandBrakeTorque=36000;
		center="wheel_1_3_axis";
		boundary="wheel_1_3_bound";
		suspForceAppPointOffset="wheel_1_3_axis";
		tireForceAppPointOffset="wheel_1_3_axis";
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
	};
	class R2: R1
	{
		boneName="wheel_2_2_damper";
		steering=0;
		maxHandBrakeTorque=36000;
		center="wheel_2_2_axis";
		boundary="wheel_2_2_bound";
		suspForceAppPointOffset="wheel_2_2_axis";
		tireForceAppPointOffset="wheel_2_2_axis";
	};
	class R3: R1
	{
		boneName="wheel_2_3_damper";
		steering=0;
		maxHandBrakeTorque=36000;
		center="wheel_2_3_axis";
		boundary="wheel_2_3_bound";
		suspForceAppPointOffset="wheel_2_3_axis";
		tireForceAppPointOffset="wheel_2_3_axis";
	};
};

/// End of PhysX