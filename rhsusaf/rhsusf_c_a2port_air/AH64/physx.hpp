		maxOmega			= 2000;
		numberPhysicalWheels = 3;
		class Wheels
		{
			disableWheelsWhenDestroyed = 1;
			class Wheel_1
			{
				steering					= false;
				side						= "left";
				boneName					= "damper_left";
				suspForceAppPointOffset		= "Wheel_1_axis";
				tireForceAppPointOffset		= "Wheel_1_axis";
				center						= "Wheel_1_axis";
				boundary					= "Wheel_1_bound";
				suspTravelDirection[]		= {0, -1, -1};
				width						= 0.16;
				mass						= 15;
				MOI							= __EVAL(0.5*15*(0.3^2));		// radius 0.38m

				dampingRate					= 0.1;
				dampingRateDamaged			= 1;
				dampingRateDestroyed		= 1000;

				maxBrakeTorque				= 2000;
				maxHandBrakeTorque			= 0;

				maxCompression				= 0.23;
				maxDroop					= 0.0;

				sprungMass					= 3400;
				springStrength				= 12000;
				springDamperRate			= 1280;

				longitudinalStiffnessPerUnitGravity	= 5000;
				latStiffX					= 2.5;
				latStiffY					= 18.0;
				frictionVsSlipGraph[]		= {{0, 1}, {0.5, 1}, {1,1}};
			};
			class Wheel_2: Wheel_1
			{
				boneName					= "damper_right";
				suspForceAppPointOffset		= "Wheel_2_axis";
				tireForceAppPointOffset		= "Wheel_2_axis";
				center						= "Wheel_2_axis";
				boundary					= "Wheel_2_bound";
			};
			class Wheel_3: Wheel_2
			{
				steering					= true;
				side						= "right";
				boneName					= "damper_rear";
				suspForceAppPointOffset		= "Wheel_3_axis";
				tireForceAppPointOffset		= "Wheel_3_axis";
				center						= "Wheel_3_axis";
				boundary					= "Wheel_3_bound";
				suspTravelDirection[]		= {0, -1, -0.65};
				width						= 0.12;
				maxCompression				= 0.2;
				maxDroop					= 0.1;

				sprungMass					= 100;
				springStrength				= 15800;
				springDamperRate			= 5120;
			};
		};