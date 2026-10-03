		maxOmega			= 2000;
		turnCoef = 1.5;
		class Wheels
		{
			class Wheel_1
			{
				steering					= true;
				side						= "left";
				boneName					= "Wheel_1_1";
				center						= "wheel_1_1_center";
				boundary					= "wheel_1_1_bound";
				suspForceAppPointOffset		= "Wheel_1_1_center";
				tireForceAppPointOffset		= "Wheel_1_1_center";
				width						= 0.3;
				mass						= 50;
				MOI							= 8;
				dampingRate					= 0.1;
				dampingRateDamaged			= 1;
				dampingRateDestroyed		= 1000;
				maxBrakeTorque				= 10;
				maxHandBrakeTorque			= 0;
				suspTravelDirection[]		= {0, -1, 0};
				maxCompression				= 0.1;
				maxDroop					= 0.1;
				sprungMass					= 2400;
				springStrength				= 100000;
				springDamperRate			= 128000;
				longitudinalStiffnessPerUnitGravity	= 90;
				latStiffX					= 15;
				latStiffY					= 120;
				frictionVsSlipGraph[]		= {{0, 2}, {0.5, 1}, {1,1}};
			};
			class Wheel_2: Wheel_1
			{
				boneName					= "wheel_1_2";
				center						= "wheel_1_2_center";
				boundary					= "wheel_1_2_bound";
				suspForceAppPointOffset		= "Wheel_1_2_center";
				tireForceAppPointOffset		= "Wheel_1_2_center";
			};
			class Wheel_3: Wheel_2
			{
				steering					= false;
				side						= "left";
				boneName					= "Wheel_2_1";
				center						= "wheel_2_1_center";
				boundary					= "wheel_2_1_bound";
				suspForceAppPointOffset		= "Wheel_2_1_center";
				tireForceAppPointOffset		= "Wheel_2_1_center";
				width						= 0.16;
				maxCompression				= 0.1;
				maxDroop					= 0.1;
				sprungMass					= 700;
				springStrength				= 1580000;
				springDamperRate			= 12000;
			};
		};