		maxOmega			= 4000;
		engineMOI 			= 9;
		class Wheels
		{
			disableWheelsWhenDestroyed = 1;
			class Wheel_1
			{
				steering					= true;
				side						= "left";
				boneName					= "Wheel_1";
				center						= "Wheel_1_center";
				boundary					= "Wheel_1_rim";
				width						= 0.16;
				mass						= 150;
				MOI							= 3;
				dampingRate					= 0.1;
				dampingRateDamaged			= 1;
				dampingRateDestroyed		= 1000;
				maxBrakeTorque				= 2000;
				maxHandBrakeTorque			= 0;
				suspTravelDirection[]		= {0, -1, 0};
				suspForceAppPointOffset		= "Wheel_1_center";
				tireForceAppPointOffset		= "Wheel_1_center";
				maxCompression				= 0.15;
				maxDroop					= 0.10;
				sprungMass					= 11400;
				springStrength				= 1200000;
				springDamperRate			= 128000;
				longitudinalStiffnessPerUnitGravity	= 5000;
				latStiffX					= 25;
				latStiffY					= 180;
				frictionVsSlipGraph[]		= {{0, 1}, {0.5, 1}, {1,1}};
			};
			class Wheel_1_fake: Wheel_1 {};
			class Wheel_2: Wheel_1
			{
				steering					= false;
				boneName					= "Wheel_2";
				center						= "Wheel_2_center";
				boundary					= "Wheel_2_rim";
				suspForceAppPointOffset		= "Wheel_2_center";
				tireForceAppPointOffset		= "Wheel_2_center";
				width						= 0.28;
				maxCompression				= 0.15;
				maxDroop					= 0.15;
				sprungMass					= 3200;
				springStrength				= 1580000;
				springDamperRate			= 512000;
			};
			class Wheel_3: Wheel_2
			{
				side						= "right";
				boneName					= "Wheel_3";
				center						= "Wheel_3_center";
				boundary					= "Wheel_3_rim";
				suspForceAppPointOffset		= "Wheel_3_center";
				tireForceAppPointOffset		= "Wheel_3_center";
			};
		};