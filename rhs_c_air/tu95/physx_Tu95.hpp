
maxOmega=2000;
engineMOI = 90;
class Wheels
{
	disableWheelsWhenDestroyed = 1;
	class Wheel_1
	{
		side								= "left";
		boneName							= "Wheel_1_damper_land";
		center								= "Wheel_1_center";
		boundary							= "Wheel_1_rim";
		suspForceAppPointOffset				= "Wheel_1_center";
		tireForceAppPointOffset				= "Wheel_1_center";
		suspTravelDirection[]				= {0,-1,0};
		steering							= 1;
		width								= 0.83;

		mass								= 150;
		MOI									= __EVAL(0.5*150*(0.451^2));

		dampingRate							= 0.1;
		dampingRateDamaged					= 1;
		dampingRateDestroyed				= 1000;

		maxBrakeTorque						= 21500;
		maxHandBrakeTorque					= 0;
		maxCompression						= 0.09;
		maxDroop							= 0.11;

		sprungMass							= 3200;
		springStrength						= 16600;
		springDamperRate					= 12569.6;

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
		boneName				= "Wheel_2_damper_land";
		suspForceAppPointOffset	= "Wheel_2_center";
		tireForceAppPointOffset	= "Wheel_2_center";
		center					= "Wheel_2_center";
		boundary				= "Wheel_2_rim";
		MOI						= __EVAL(0.5*150*(0.578^2));
		steering				= 0;
		width					= 1.2;
		maxCompression			= 0.25;
		maxDroop				= 0.06;
		sprungMass				= 34200;
		springStrength			= 261000;
		springDamperRate		= 9000;
	};
	class Wheel_3: Wheel_2
	{
		boneName				= "Wheel_2_damper_land";
		center					= "Wheel_3_center";
		boundary				= "Wheel_3_rim";
		suspForceAppPointOffset	= "Wheel_3_center";
		tireForceAppPointOffset	= "Wheel_3_center";
	};
	class Wheel_4: Wheel_2
	{
		side					= "Wheel_4_damper_land";
		boneName				= "Wheel_4";
		center					= "Wheel_4_center";
		boundary				= "Wheel_4_rim";
		suspForceAppPointOffset	= "Wheel_4_center";
		tireForceAppPointOffset	= "Wheel_4_center";
	};
	class Wheel_5: Wheel_4
	{
		boneName				= "Wheel_5_damper_land";
		center					= "Wheel_5_center";
		boundary				= "Wheel_5_rim";
		suspForceAppPointOffset	= "Wheel_5_center";
		tireForceAppPointOffset	= "Wheel_5_center";
	};
};