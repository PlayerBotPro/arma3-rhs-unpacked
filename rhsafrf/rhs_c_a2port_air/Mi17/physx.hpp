		maxOmega			= 2000;
		engineMOI 			= 10;
		//startDuration = 0.3;
		class Wheels
		{
			disableWheelsWhenDestroyed = 1;
			class Wheel_1
			{
				steering					= true;
				side						= "left";
				boneName					= "damper_front";
				suspForceAppPointOffset		= "wheel_1_axis";
				tireForceAppPointOffset		= "wheel_1_axis";
				center						= "wheel_1_axis";
				boundary					= "wheel_1_bound";
				suspTravelDirection[]		= {0, -1, 0};
				width						= 0.488;
				mass						= 15;
				MOI							= __EVAL(0.5*15*(0.288^2));		// radius 0.288m

				dampingRate					= 0.1;
				dampingRateDamaged			= 1;
				dampingRateDestroyed		= 1000;

				maxBrakeTorque				= 2000;
				maxHandBrakeTorque			= 0;

				maxCompression				= 0.0;
				maxDroop					= 0.1;

				sprungMass					= 200;
				springStrength				= 600;
				springDamperRate			= 99280;

				longitudinalStiffnessPerUnitGravity	= 5000;
				latStiffX					= 2.5;
				latStiffY					= 18.0;
				frictionVsSlipGraph[]		= {{0, 1}, {0.5, 1}, {1,1}};
			};
			class Wheel_2: Wheel_1
			{
				steering					= false;
				side						= "left";
				boneName					= "damper_left";
				suspForceAppPointOffset		= "wheel_2_axis";
				tireForceAppPointOffset		= "wheel_2_axis";
				center						= "wheel_2_axis";
				boundary					= "wheel_2_bound";
				sprungMass					= 667;
				MOI							= __EVAL(0.5*15*(0.42^2));		// radius 0.42m
				width						= 0.27;
				maxDroop					= 0.20;
			};
			class Wheel_3: Wheel_2
			{
				side						= "right";
				boneName					= "damper_right";
				suspForceAppPointOffset		= "wheel_3_axis";
				tireForceAppPointOffset		= "wheel_3_axis";
				center						= "wheel_3_axis";
				boundary					= "wheel_3_bound";
			};
		};