		maxOmega			= 2000;

		class Wheels
		{
			disableWheelsWhenDestroyed = 1;
			class Wheel_1
			{
				steering					= true;
				side						= "left";
				boneName					= "damper_nose_piston";
				suspForceAppPointOffset		= "wheel_nose_axis";
				tireForceAppPointOffset		= "wheel_nose_axis";
				center						= "wheel_nose_axis";
				boundary					= "wheel_nose_bound";
				suspTravelDirection[]		= {0, -1, 0};
				width						= 0.637;
				mass						= 15;
				MOI							= __EVAL(0.5*15*(0.32^2));		// radius 0.38m

				dampingRate					= 0.25;
				dampingRateDamaged			= 2;
				dampingRateDestroyed		= 1000;

				maxBrakeTorque				= 2000;
				maxHandBrakeTorque			= 0;

				maxCompression				= 1.05;
				maxDroop					= 0.05;

				sprungMass					= 3000;
				springStrength				= 12000;
				springDamperRate			= 1280;

				longitudinalStiffnessPerUnitGravity	= 5000;
				latStiffX					= 2.5;
				latStiffY					= 18.0;
				frictionVsSlipGraph[]		= {{0, 1}, {0.5, 1}, {1,1}};
			};
			class Wheel_2: Wheel_1
			{
				steering					= false;
				side						= "left";
				boneName					= "damper_left_piston";
				suspForceAppPointOffset		= "wheel_left_axis";
				tireForceAppPointOffset		= "wheel_left_axis";
				center						= "wheel_left_axis";
				boundary					= "wheel_left_bound";
				maxCompression				= 1.05;
				maxDroop					= 0.05;
			};
			class Wheel_3: Wheel_2
			{
				side						= "right";
				boneName					= "damper_right_piston";
				suspForceAppPointOffset		= "wheel_right_axis";
				tireForceAppPointOffset		= "wheel_right_axis";
				center						= "wheel_right_axis";
				boundary					= "wheel_right_bound";
			};
		};