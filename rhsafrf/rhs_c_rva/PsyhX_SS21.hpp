//----- General Parameters -----//
normalSpeedForwardCoef=0.6;
slowSpeedForwardCoef=0.45;
turnCoef = 3.5;
terrainCoef = 1.5;

simulation="carx";
dampersBumpCoef=6;

precision=10;
brakeDistance=3;
acceleration=15;
fireResistance=5;

maxSpeed			=60;
RHS_FUEL_RANGE(400)
RHS_fuelCapacity	= 300;
wheelCircumference	= 3.769;

brakeIdleSpeed=0.0;


/// Bouyancy ///

canFloat = 1;
waterLeakiness = 250.0;
waterSpeedFactor = 0.133;
maxFordingDepth=0.4;
waterResistance = 1;
waterDamageEngine = 0.9;
waterAngularDampingCoef = 10.0;
waterLinearDampingCoefY 	 = 2;/// affect how fast does the ship go through waves down - higher values make it drift more on top of waves
waterLinearDampingCoefX 	 = 2.0;/// affects sliding of the ship in turns
waterPPInVehicle = 0;
waterResistanceCoef = 0.4;
engineShiftY = 0.3;
engineShiftZ = -3.0;

rudderForceCoef = 1.5;
rudderForceCoefAtMaxSpeed = 0.3;

//----- Gearbox Parameters -----//
class complexGearbox
{
	GearboxRatios[]			= {"R1",-5.3,"N",0,"D1",5.62,"D2",2.89,"D3",1.64,"D4",1.0,"D5",0.724};
	TransmissionRatios[]	= {"High",10.62};
	gearBoxMode				= "auto";
	moveOffGear				= 1;
	driveString				= "D";
	neutralString			= "N";
	reverseString			= "R";
};
changeGearMinEffectivity[]={0.95,0.0,0.95,0.95,0.95,0.85,0.85};
switchTime=0.81;
latency=1.5;

//----- Clutch and Driveline Parameters -----//
differentialType	="all_limited";
frontRearSplit		=0.5;
frontBias			=3.3;
rearBias			=3.6;
centreBias			=1.0;
clutchStrength		=175;
transmissionLosses	= 12;

dampingRateFullThrottle					=0.08;
dampingRateZeroThrottleClutchEngaged	=1.35;
dampingRateZeroThrottleClutchDisengaged	=0.35;

//----- Engine Parameters -----//
torqueCurve[] = {
{__EVAL(700/2850),__EVAL(0/981)},
{__EVAL(1200/2850),__EVAL(935/981)},
{__EVAL(1500/2850),__EVAL(981/981)},
{__EVAL(1600/2850),__EVAL(981/981)},
{__EVAL(1800/2850),__EVAL(935/981)},
{__EVAL(2200/2850),__EVAL(880/981)},
{__EVAL(2600/2850),__EVAL(811/981)},
{__EVAL(3101/2850),__EVAL(0/981)}
};

maxOmega	= 298.45;
minOmega	= 60;
enginePower	= __EVAL(224*1.25);
peakTorque	= __EVAL(981*1.25);
idleRPM		= 700;
redRPM		= 2850;

engineLosses	= 14;
thrustDelay		=2.4;
engineBrakeCoef	= 0.3;

//----- Anti-rollbar Parameters -----//
antiRollbarForceCoef	=25.0;
antiRollbarForceLimit	=45.5;
antiRollbarSpeedMin		=30;
antiRollbarSpeedMax		=60;

class Wheels
{
	class LF
	{
		side					= "left";
		boneName				= "wheel_1_1_damper";
		center					= "wheel_1_1_axis";
		boundary				= "wheel_1_1_bound";
		suspForceAppPointOffset	= "wheel_1_1_axis";
		tireForceAppPointOffset	= "wheel_1_1_axis";
		suspTravelDirection[]	= SUSPTRAVELDIR_LEFT;
		steering				= 1;
		width					= 0.4;

		mass	= 90;
		MOI		= 14;

		dampingRate				= 0.1;
		dampingRateDamaged		= 1;
		dampingRateDestroyed	= 1000;

		maxBrakeTorque		= 12500;
		maxHandBrakeTorque	= 0;

		maxCompression		= 0.25;
		MaxDroop			= 0.25;

		sprungMass			= 3000;
		springStrength		= 111813;
		springDamperRate	= 15872;

		longitudinalStiffnessPerUnitGravity=54582;
		latStiffX=3.5;
		latStiffY=18.0;
		frictionVsSlipGraph[]=
		{
			{0,1.2},
			{0.5,1.13},
			{1,1}
		};
	};
	class LR: LF
	{
		boneName				= "wheel_1_2_damper";
		center					= "wheel_1_2_axis";
		boundary				= "wheel_1_2_bound";
		suspForceAppPointOffset	= "wheel_1_2_axis";
		tireForceAppPointOffset	= "wheel_1_2_axis";
		steering				= 0;
		maxHandBrakeTorque		= 20000;
	};
	class LR2: LR
	{
		boneName				= "wheel_1_3_damper";
		center					= "wheel_1_3_axis";
		boundary				= "wheel_1_3_bound";
		suspForceAppPointOffset	= "wheel_1_3_axis";
		tireForceAppPointOffset	= "wheel_1_3_axis";
	};
	class RF: LF
	{
		boneName				= "wheel_2_1_damper";
		center					= "wheel_2_1_axis";
		boundary				= "wheel_2_1_bound";
		suspForceAppPointOffset	= "wheel_2_1_axis";
		tireForceAppPointOffset	= "wheel_2_1_axis";
		side					= "right";
		suspTravelDirection[]	=  SUSPTRAVELDIR_LEFT;
		steering				= 1;
	};
	class RR: RF
	{
		boneName				= "wheel_2_2_damper";
		center					= "wheel_2_2_axis";
		boundary				= "wheel_2_2_bound";
		suspForceAppPointOffset	= "wheel_2_2_axis";
		tireForceAppPointOffset	= "wheel_2_2_axis";
		maxHandBrakeTorque		= 20000;
	};
	class RR2: RR
	{
		boneName				= "wheel_2_3_damper";
		center					= "wheel_2_3_axis";
		boundary				= "wheel_2_3_bound";
		suspForceAppPointOffset	= "wheel_2_3_axis";
		tireForceAppPointOffset	= "wheel_2_3_axis";
		steering				= 0;
	};
};