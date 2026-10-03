		maxOmega	= 2000;
		minOmega	= 0;
		numberPhysicalWheels = 3;
		maxFordingDepth = 1.7;
		waterLeakiness = 0.2;
		waterDamageEngine = 0.1;

		class Wheels
		{
			disableWheelsWhenDestroyed = 1;
			class Wheel_1
			{
				steering					= false;
				side						= "left";
				boneName					= "wheel_1_1_damper";
				suspForceAppPointOffset		= "Wheel_1_1_axis";
				tireForceAppPointOffset		= "Wheel_1_1_axis";
				center						= "Wheel_1_1_axis";
				boundary					= "Wheel_1_1_bound";
				suspTravelDirection[]		= {0, -1, 0};
				width						= 0.16;
				mass						= 15;
				MOI							= __EVAL(0.5*15*(0.3^2));		// radius 0.38m

				dampingRate					= 0.1;
				dampingRateDamaged			= 1;
				dampingRateDestroyed		= 1000;

				maxBrakeTorque				= 1000;
				maxHandBrakeTorque			= 0;

				maxCompression				= 0.0;
				maxDroop					= 0.18;

				sprungMass					= 3400;
				springStrength				= 72000;
				springDamperRate			= 5280;

				longitudinalStiffnessPerUnitGravity	= 5000;
				latStiffX					= 2.5;
				latStiffY					= 18.0;
				frictionVsSlipGraph[]		= {{0, 1}, {0.3, 1}, {0.7,0.8}};
			};
			class Wheel_2: Wheel_1
			{
				boneName					= "wheel_1_2_damper";
				suspForceAppPointOffset		= "Wheel_1_2_axis";
				tireForceAppPointOffset		= "Wheel_1_2_axis";
				center						= "Wheel_1_2_axis";
				boundary					= "Wheel_1_2_bound";
			};
			class Wheel_3: Wheel_2
			{
				steering					= true;
				side						= "right";
				boneName					= "wheel_2_1_damper";
				suspForceAppPointOffset		= "Wheel_2_1_axis";
				tireForceAppPointOffset		= "Wheel_2_1_axis";
				center						= "Wheel_2_1_axis";
				boundary					= "Wheel_2_1_bound";
				//suspTravelDirection[]		= {0, -1.0, 0.7};
				suspTravelDirection[]		= {0, -1.0, 0.0};
				width						= 0.12;
				maxCompression				= 0.0;
				//maxDroop					= 0.25;
				maxDroop					= 0.18;
				maxBrakeTorque				= 1000;

				sprungMass					= 1100;
				springStrength				= 5800;
				springDamperRate			= 5120;
			};
		};