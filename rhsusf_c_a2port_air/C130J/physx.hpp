		maxOmega			= 2000;
		class Wheels
		{
			disableWheelsWhenDestroyed = 1;
			class Wheel_1_1
			{
				steering					= true;
				side						= "left";
				boneName					= "Wheel_1_1";
				center						= "Wheel_1_1_center";
				boundary					= "Wheel_1_1_rim";
				width						= 0.9;
				mass						= 150;
				MOI							= 3;
				dampingRate					= 0.1;
				dampingRateDamaged			= 1;
				dampingRateDestroyed		= 1000;
				maxBrakeTorque				= 2000;
				maxHandBrakeTorque			= 0;
				suspTravelDirection[]		= {0, -1, 0};
				suspForceAppPointOffset		= "Wheel_1_1_center";
				tireForceAppPointOffset		= "Wheel_1_1_center";
				maxCompression				= 0.2;
				maxDroop					= 0.2;
				sprungMass					= 7400;
				springStrength				= 120000;
				springDamperRate			= 128000;
				longitudinalStiffnessPerUnitGravity	= 5000;
				latStiffX					= 25;
				latStiffY					= 180;
				frictionVsSlipGraph[]		= {{0, 1}, {0.5, 1}, {1,1}};
			};
			class Wheel_1_1_fake: Wheel_1_1 {};
			class Wheel_2_1: Wheel_1_1
			{
				steering					= false;
				boneName					= "Wheel_2_1";
				center						= "Wheel_2_1_center";
				boundary					= "Wheel_2_1_rim";
				suspForceAppPointOffset		= "Wheel_2_1_center";
				tireForceAppPointOffset		= "Wheel_2_1_center";
				width						= 0.48;
				maxCompression				= 0.2;
				maxDroop					= 0.2;
				sprungMass					= 7200;
				springDamperRate			= 51200;
				springStrength				= 1580000;
			};
			class Wheel_2_2: Wheel_2_1
			{
				side						= "right";
				boneName					= "Wheel_2_2";
				center						= "Wheel_2_2_center";
				boundary					= "Wheel_2_2_rim";
				suspForceAppPointOffset		= "Wheel_2_2_center";
				tireForceAppPointOffset		= "Wheel_2_2_center";
			};
			class Wheel_3_1: Wheel_2_1
			{
				boneName					= "Wheel_3_1";
				center						= "Wheel_3_1_center";
				boundary					= "Wheel_3_1_rim";
				suspForceAppPointOffset		= "Wheel_3_1_center";
				tireForceAppPointOffset		= "Wheel_3_1_center";
			};
			class Wheel_3_2: Wheel_3_1
			{
				side						= "right";
				boneName					= "Wheel_3_2";
				center						= "Wheel_3_2_center";
				boundary					= "Wheel_3_2_rim";
				suspForceAppPointOffset		= "Wheel_3_2_center";
				tireForceAppPointOffset		= "Wheel_3_2_center";
			};
		};