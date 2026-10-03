
maxOmega = 2000;
engineMOI = 16;
class Wheels
{
	disableWheelsWhenDestroyed = 1;
	class Wheel_1
	{
		side					= "left";
		boneName				= "Wheel_1";
		center					= "Wheel_1_center";
		boundary				= "Wheel_1_rim";
		suspForceAppPointOffset	= "Wheel_1_center";
		tireForceAppPointOffset	= "Wheel_1_center";
		suspTravelDirection[]	= {0,-1,0};
		steering				= 1;
		width					= 0.16;
		mass					= 150;
		MOI						= 40;

		dampingRate				= 0.1;
		dampingRateDamaged		= 1;
		dampingRateDestroyed	= 1000;

		maxBrakeTorque		= 21500;
		maxHandBrakeTorque	= 0;

		maxCompression	= 0.2105;
		maxDroop		= 0.015;

		sprungMass			= 4066;
		springStrength		= 56600;
		springDamperRate	= 215569.6;

		longitudinalStiffnessPerUnitGravity	= 8000;
		latStiffX							= 25;
		latStiffY							= 180;
		frictionVsSlipGraph[]				=
		{
			{0,1},
			{0.5,1},
			{1,1}
		};
	};
	class Wheel_1_fake: Wheel_1 {};
	class Wheel_2: Wheel_1
	{
		boneName				= "Wheel_2";
		steering				= 0;
		center					= "Wheel_2_center";
		boundary				= "Wheel_2_rim";
		width					= 0.28;
		springDamperRate		= 220569.6;
		sprungMass				= 6652;
		springStrength			= 151000;
		suspForceAppPointOffset	= "Wheel_2_center";
		tireForceAppPointOffset	= "Wheel_2_center";
	};
	class Wheel_3: Wheel_2
	{
		boneName				= "Wheel_3";
		side					= "right";
		center					= "Wheel_3_center";
		boundary				= "Wheel_3_rim";
		suspForceAppPointOffset	= "Wheel_3_center";
		tireForceAppPointOffset	= "Wheel_3_center";
	};
};