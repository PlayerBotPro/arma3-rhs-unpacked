		maxOmega			= 2000;
		numberPhysicalWheels = 4;
		class Wheels
		{
			disableWheelsWhenDestroyed = 1;
			class Wheel_1_1
			{
				steering					= false;
				side						= "left";
				boneName					= "Wheel_1_1_axis_damper";
				suspForceAppPointOffset		= "Wheel_1_1_axis";
				tireForceAppPointOffset		= "Wheel_1_1_axis";
				center						= "Wheel_1_1_axis";
				boundary					= "Wheel_1_1_bound";
				suspTravelDirection[]		= {0, -1, 0};
				width						= 0.565;
				mass						= 15;
				MOI							= __EVAL(0.5*15*(0.32^2));		// radius 0.38m

				dampingRate					= 0.25;
				dampingRateDamaged			= 2;
				dampingRateDestroyed		= 1000;

				maxBrakeTorque				= 2000;
				maxHandBrakeTorque			= 0;

				maxCompression				= 0.14;
				maxDroop					= 0.0;

				sprungMass					= 2500;
				springStrength				= 12000;
				springDamperRate			= 1280;

				longitudinalStiffnessPerUnitGravity	= 5000;
				latStiffX					= 2.5;
				latStiffY					= 18.0;
				frictionVsSlipGraph[]		= {{0, 1}, {0.5, 1}, {1,1}};
			};
			class Wheel_2_1: Wheel_1_1
			{
				boneName					= "Wheel_2_1_axis_damper";
				side						= "right";
				suspForceAppPointOffset		= "Wheel_2_1_axis";
				tireForceAppPointOffset		= "Wheel_2_1_axis";
				center						= "Wheel_2_1_axis";
				boundary					= "Wheel_2_1_bound";
			};
			class Wheel_1_2: Wheel_1_1
			{
				steering					= true;
				side						= "left";
				boneName					= "Wheel_1_2_axis_damper";
				suspForceAppPointOffset		= "Wheel_1_2_axis";
				tireForceAppPointOffset		= "Wheel_1_2_axis";
				center						= "Wheel_1_2_axis";
				boundary					= "Wheel_1_2_bound";
				width						= 0.21;
				maxCompression				= 0.15;
			};
			class Wheel_2_2: Wheel_1_2
			{
				boneName					= "Wheel_2_2_axis_damper";
				side						= "right";
				suspForceAppPointOffset		= "Wheel_2_2_axis";
				tireForceAppPointOffset		= "Wheel_2_2_axis";
				center						= "Wheel_2_2_axis";
				boundary					= "Wheel_2_2_bound";
			};
		};