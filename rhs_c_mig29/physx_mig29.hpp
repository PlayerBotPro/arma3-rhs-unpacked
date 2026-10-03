
maxOmega=2000;
class Wheels
{
	disableWheelsWhenDestroyed = 1;
	class Wheel_1
	{
		boneName							= "fg_damper";
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
		maxCompression						= 0.18;
		maxDroop							= 0.18;
		sprungMass							= 3966;
		springStrength						= 56600;
		springDamperRate					= 215569.6;
		longitudinalStiffnessPerUnitGravity	= 5000;
		latStiffX							= 2.5;
		latStiffY							= 18.0;
		frictionVsSlipGraph[]=
		{
			{0,1},
			{0.5,1},
			{1,1}
		};
	};
	class Wheel_1_fake: Wheel_1 {};
	class Wheel_2: Wheel_1
	{
		boneName				= "lg_damper";
		center					= "Wheel_2_center";
		boundary				= "Wheel_2_rim";
		suspForceAppPointOffset	= "Wheel_2_center";
		tireForceAppPointOffset	= "Wheel_2_center";
		steering				= 0;
		width					= 0.28;
		maxCompression			= 0.13;
		maxDroop				= 0.13;
		sprungMass				= 4652;
		springDamperRate		= 220569.6;
		springStrength			= 151000;
	};
	class Wheel_3: Wheel_2
	{
		boneName				= "rg_damper";
		center					= "Wheel_3_center";
		boundary				= "Wheel_3_rim";
		suspForceAppPointOffset	= "Wheel_3_center";
		tireForceAppPointOffset	= "Wheel_3_center";
		side					= "right";
	};
};