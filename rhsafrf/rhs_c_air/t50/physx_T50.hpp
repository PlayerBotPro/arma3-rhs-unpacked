
engineMOI				= 16;
maxOmega				= 2000;
dampingRateFullThrottle	= 0.4;
clutchStrength			= 100;
class Wheels
{
	disableWheelsWhenDestroyed = 1;
	class Wheel_1
	{
		boneName							= "gear_f1";
		steering							= 1;
		side								= "left";
		center								= "Wheel_1_center";
		boundary							= "Wheel_1_rim";
		width								= 0.16;
		mass								= 150;
		MOI									= 40;
		dampingRate							= 0.1;
		dampingRateDamaged					= 1;
		dampingRateDestroyed				= 1000;
		maxBrakeTorque						= 21500;
		maxHandBrakeTorque					= 0;
		suspTravelDirection[]				= {0,-1,0};
		suspForceAppPointOffset				= "Wheel_1_center";
		tireForceAppPointOffset				= "Wheel_1_center";
		maxCompression						= 0.05;
		maxDroop							= 0.05;
		sprungMass							= 4066;
		springStrength						= 56600;
		springDamperRate					= 115569.6;
		longitudinalStiffnessPerUnitGravity	= 5000;
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
		boneName				= "gear_l2";
		steering				= 0;
		center					= "Wheel_2_center";
		boundary				= "Wheel_2_rim";
		width					= 0.28;
		maxCompression			= 0.06;
		maxDroop				= 0.06;
		sprungMass				= 1952;
		springStrength			= 51000;
		springDamperRate		= 20569.6;
		suspForceAppPointOffset	= "Wheel_2_center";
		tireForceAppPointOffset	= "Wheel_2_center";
	};
	class Wheel_3: Wheel_2
	{
		boneName				= "gear_r2";
		side					= "right";
		center					= "Wheel_3_center";
		boundary				= "Wheel_3_rim";
		suspForceAppPointOffset	= "Wheel_3_center";
		tireForceAppPointOffset	= "Wheel_3_center";
	};
};