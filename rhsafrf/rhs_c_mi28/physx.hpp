		maxOmega			= 2000;
		engineMOI 			= 10;
		//startDuration = 0.3;

		class Wheels
		{
			class Wheel_1_1
			{
				steering					= false;
				side						= "left";
				boneName					= "Wheel_1_1_axis_damper";
				suspForceAppPointOffset		= "Wheel_1_1_axis";
				tireForceAppPointOffset		= "Wheel_1_1_axis";
				center						= "Wheel_1_1_axis";
				boundary					= "Wheel_1_1_bound";
				suspTravelDirection[]		= {0, -1, 0.0};
				width						= 0.234;
				mass						= 15;
				MOI							= __EVAL(0.5*15*(0.32^2));		// radius 0.38m

				dampingRate					= 1;
				dampingRateDamaged			= 2;
				dampingRateDestroyed		= 1000;

				maxBrakeTorque				= 2000;
				maxHandBrakeTorque			= 0;

				maxCompression				= 0.11;
				maxDroop					= 0.15;

				sprungMass					= 240;
				springStrength				= 42000;
				springDamperRate			= 99280;

				longitudinalStiffnessPerUnitGravity	= 5000;
				latStiffX					= 2.5;
				latStiffY					= 18.0;
				frictionVsSlipGraph[]		= {{0, 1.3}, {0.5, 1}, {1,1.6}};
			};
			class Wheel_1_2: Wheel_1_1
			{
				boneName					= "Wheel_1_2_axis_damper";
				side						= "right";
				suspForceAppPointOffset		= "Wheel_1_2_axis";
				tireForceAppPointOffset		= "Wheel_1_2_axis";
				center						= "Wheel_1_2_axis";
				boundary					= "Wheel_1_2_bound";
			};
			class Wheel_2_1: Wheel_1_1
			{
				steering					= true;
				boneName					= "Wheel_2_1_axis_damper";
				suspForceAppPointOffset		= "Wheel_2_1_axis";
				tireForceAppPointOffset		= "Wheel_2_1_axis";
				center						= "Wheel_2_1_axis";
				boundary					= "Wheel_2_1_bound";
				width						= 0.186;
				suspTravelDirection[]		= {0, -1, -0};
				maxCompression				= 0.18;
				maxDroop					= 0.12;
				sprungMass					= 100;
				springStrength				= 1580;
				springDamperRate			= 95120;
			};
		};