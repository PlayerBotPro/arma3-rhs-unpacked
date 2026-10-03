//----- General Parameters -----//
normalSpeedForwardCoef=0.9;
turnCoef=3.0;
terrainCoef=2.0;
waterSpeedFactor=0.4;
simulation="carx";

precision=9;
brakeDistance=3;
acceleration=15;
fireResistance=5;

maxSpeed=98;
fuelCapacity=78;
wheelCircumference=3.705;

brakeIdleSpeed=0.0;

maxFordingDepth=0.4; // variable values are weird, so instead of real values in meters the value is relative
waterResistance=1;  // 2 if the depth of water is bigger than maxFordingDepth it starts to damage the engine after this time
waterLeakiness = 10.0; // aterLeakiness should be amount of water in liters that goes into selected object per second.

//----- Gearbox Parameters -----//
class complexGearbox
{
		GearboxRatios[] = {"R1",-6.03,"N",0,"D1",6.93,"D2",4.19,"D3",2.24,"D4",1.69,"D5",1.20,"D5",0.90,"D6",0.78};
		TransmissionRatios[] = {"High",7.8};
		gearBoxMode = "auto";
		moveOffGear = 1;
		driveString = "D";
		neutralString = "N";
		reverseString = "R";
		};
changeGearMinEffectivity[] = {0.95,0.0,0.55,0.55,0.55,0.55,0.85,0.85,0.85};
switchTime = 0.65;
latency = 1.5;
transmissionLosses = 5;

//----- Clutch and Driveline Parameters -----//
dampersBumpCoef = 6.0;
differentialType = "all_limited";
frontRearSplit = 0.3;
frontBias = 1.3;
rearBias = 1.3;
centreBias = 1.3;
clutchStrength = 35.0;

dampingRateFullThrottle = 0.08;
dampingRateZeroThrottleClutchEngaged = 2.0;
dampingRateZeroThrottleClutchDisengaged = 0.35;

//----- Engine Parameters -----//
torqueCurve[] = {
{"(650/2400)","(785/1254)"},
{"(1200/2400)","(1010/1254)"},
{"(1440/2400)","(1254/1254)"},
{"(1600/2400)","(1240/1254)"},
{"(1800/2400)","(1185/1254)"},
{"(2000/2400)","(1120/1254)"},
{"(2200/2400)","(1064/1254)"},
{"(2626/2400)","(0/1254)"}
};

maxOmega = 251.33;
enginePower = 268;
peakTorque = 1254;
idleRPM = 650;
redRPM = 2400;

engineLosses = 12;
thrustDelay=0.5;
engineBrakeCoef = 0.8;

//----- Anti-rollbar Parameters -----//
antiRollbarForceCoef = 20;
antiRollbarForceLimit = 35;
antiRollbarSpeedMin = 10;
antiRollbarSpeedMax = 60;


class Wheels
{
	class L1
	{
		boneName="wheel_1_1_damper";
		steering=1;
		side="left";
		center="wheel_1_1_axis";
		boundary="wheel_1_1_bound";
		width="0.2";
		mass=60;
		MOI=12;
		dampingRate=0.1;
		dampingRateDamaged=1;
		dampingRateDestroyed=1000;
		maxBrakeTorque=10000;
		maxHandBrakeTorque=0;
		suspTravelDirection[]={0,-1,0};
		suspForceAppPointOffset="wheel_1_1_axis";
		tireForceAppPointOffset="wheel_1_1_axis";
		maxCompression=0.13;
		mMaxDroop=0.13;

		sprungMass = 1500;
		springStrength = 137363;
		springDamperRate = 35462;


		longitudinalStiffnessPerUnitGravity=4464;
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