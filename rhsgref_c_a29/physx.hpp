
		maxOmega = 2000;
		class Wheels
		{
			class Wheel_1
			{
				boneName					= "NoseGearWheel";
				steering					= true;
				side						= "left";
				center						= "NoseGearWheelAxis";
				boundary					= "NoseGearRim";
				width						= 0.4;
				mass						= 20;
				MOI							= .796;
				dampingRate					= 0.1;
				dampingRateDamaged			= 1;
				dampingRateDestroyed		= 1000;
				maxBrakeTorque				= 0;
				maxHandBrakeTorque			= 0;
				suspTravelDirection[]		= {0, -1, 0};
				suspForceAppPointOffset		= "NoseGearCenter";
				tireForceAppPointOffset		= "NoseGearCenter";
				maxCompression				= 0.23;
				maxDroop					= 0.00;
				sprungMass					= 146;
				springStrength				= 150000;
				springDamperRate			= 30000;
				longitudinalStiffnessPerUnitGravity	= 300;
				latStiffX					= 3;
				latStiffY					= 20.0;
				frictionVsSlipGraph[]		= {{0, 1}, {0.5, 1}, {1,1}};
			};
			class Wheel_2: Wheel_1
			{
				steering					= false;
				boneName					= "MainGearLeftWheel";
				center						= "MainGearLeftWheelAxis";
				boundary					= "MainGearLeftRim";
				mass						= 35;
				MOI							= 1.5;
				width						= 0.6;
				maxBrakeTorque				= 111400;
				maxCompression				= 0.12;
				maxDroop					= 0.0;
				sprungMass					= 540;
				springStrength				= 20000;
				springDamperRate			= 40000;
				longitudinalStiffnessPerUnitGravity	= 500;
				suspForceAppPointOffset		= "MainGearLeftCenter";
				tireForceAppPointOffset		= "MainGearLeftCenter";
			};
			class Wheel_3: Wheel_2
			{
				boneName					= "MainGearRightWheel";
				side						= "right";
				center						= "MainGearRightWheelAxis";
				boundary					= "MainGearRightRim";
				suspForceAppPointOffset		= "MainGearRightCenter";
				tireForceAppPointOffset		= "MainGearRightCenter";
			};
		};