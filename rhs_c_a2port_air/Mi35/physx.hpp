		maxOmega			= 2000;

		class Wheels
		{
			disableWheelsWhenDestroyed = 1;
			class wheel_1_1
			{
				steering					= true;
				side						= "left";
				boneName					= "gear_1_1_damper";
				suspForceAppPointOffset		= "gear_1_1_wheel_axis";
				tireForceAppPointOffset		= "gear_1_1_wheel_axis";
				center						= "gear_1_1_wheel_axis";
				boundary					= "gear_1_1_wheel_bound";
				suspTravelDirection[]		= {0, -1, 0};
				width						= 0.437;
				mass						= 15;
				MOI							= __EVAL(0.5*15*(0.32^2));		// radius 0.38m

				dampingRate					= 0.25;
				dampingRateDamaged			= 2;
				dampingRateDestroyed		= 1000;

				maxBrakeTorque				= 2000;
				maxHandBrakeTorque			= 0;

				maxCompression				= 1.2;
				maxDroop					= 0;

				sprungMass					= 13;
				springStrength				= 1200;
				springDamperRate			= 1280;

				longitudinalStiffnessPerUnitGravity	= 5000;
				latStiffX					= 2.5;
				latStiffY					= 18.0;
				frictionVsSlipGraph[]		= {{0, 1}, {0.5, 1}, {1,1}};
			};
			class wheel_2_1: wheel_1_1
			{
				steering					= false;
				side						= "left";
				boneName					= "gear_2_1_damper";
				suspForceAppPointOffset		= "gear_2_1_wheel_hub";
				tireForceAppPointOffset		= "gear_2_1_wheel_hub";
				center						= "gear_2_1_wheel_hub";
				boundary					= "gear_2_1_wheel_bound";
				sprungMass					= 2856;
				width						= 0.237;
				maxCompression				= 1.6;
				maxDroop					= 0.191;
			};
			class wheel_2_2: wheel_2_1
			{
				side						= "right";
				boneName					= "gear_2_2_damper";
				suspForceAppPointOffset		= "gear_2_2_wheel_hub";
				tireForceAppPointOffset		= "gear_2_2_wheel_hub";
				center						= "gear_2_2_wheel_hub";
				boundary					= "gear_2_2_wheel_bound";
			};
		};