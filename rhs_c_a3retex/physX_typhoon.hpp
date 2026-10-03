		//----- General Parameters -----//
		terrainCoef = 1.8;
		wheelCircumference = 3.776;
		turnCoef = 3.7;
		brakeIdleSpeed = 0.0;
		maxSpeed = 100;
		fuelCapacity = 250;
		fuelConsumptionRate = 36;

		normalSpeedForwardCoef=0.9;
		slowSpeedForwardCoef=0.45;

		//----- Anti-Rollbars Parameters -----//
		antiRollbarForceCoef = 4;
		antiRollbarForceLimit = 5;
		antiRollbarSpeedMin = 20;
		antiRollbarSpeedMax = 50;

		//----- Gearbox Parameters -----//
		class complexGearbox
		{
			//GearboxRatios[] = {"R1",-8.97,"N",0,"D1",5.171,"D2",2.25,"D3",1.43,"D4",1.1,"D5",0.9,"D6",0.7};
			//TransmissionRatios[] = {"High",7.01};
			GearboxRatios[] = {"R1",-4.97,"N",0,"D1",4.15,"D2",2.16,"D3",1.52,"D4",1.0,"D5",0.73,"D6",0.63};
			TransmissionRatios[] = {"High",8.53};
			gearBoxMode = "auto";
			moveOffGear = 1;
			driveString = "D";
			neutralString = "N";
			reverseString = "R";
		};
		changeGearMinEffectivity[] = {0.95,0.15,0.95,0.95,0.95,0.95,0.95,0.95};
		switchTime = 0.28;
		latency = 0.5;
		transmissionLosses = 18;

		//----- Clutch and Driveline Parameters -----//
		dampersBumpCoef = 6.0;
		differentialType = "all_limited";
		frontRearSplit = 0.5;
		frontBias = 1.8;
		rearBias = 1.3;
		centreBias = 1.3;
		clutchStrength = 65.0;

		dampingRateFullThrottle = 0.08;
		dampingRateZeroThrottleClutchEngaged = 1.5;
		dampingRateZeroThrottleClutchDisengaged = 0.35;

		//----- Engine Parameters -----//
		torqueCurve[] =
		{
			{0.26 , 0.35},
			{0.37 , 0.64},
			{0.44 , 0.84},
			{0.52 , 1},
			{0.59 , 0.99},
			{0.74 , 0.92},
			{0.87 , 0.84},
			{1 , 0.78}
		};

		maxOmega = 282.74;
		enginePower = 336;
		peakTorque = 1660;
		idleRPM = 700;
		redRPM = 2700;

		thrustDelay = 0.6;
		engineLosses = 20;
		engineBrakeCoef = 0.25;

		class Wheels
		{
			class L1
			{
				boneName = "wheel_1_1_damper";
				steering = 1;
				side = "left";
				center = "wheel_1_1_axis";
				boundary = "wheel_1_1_bound";
				width = "0.2";
				mass = 80;
				MOI = 40;
				dampingRate = 0.08;
				dampingRateDamaged = 1.0;
				dampingRateDestroyed = 1000.0;
				maxBrakeTorque = 15000;
				maxHandBrakeTorque = 0;
				suspTravelDirection[]	= SUSPTRAVELDIR_LEFT;
				suspForceAppPointOffset = "wheel_1_1_axis";
				tireForceAppPointOffset = "wheel_1_1_axis";
				maxCompression = 0.15;
				mMaxDroop = 0.15;

				//sprungMass = 2000;
				sprungMass = 2716;
				springStrength = 679083;
				springDamperRate = 34357;

				longitudinalStiffnessPerUnitGravity = 5432;
				latStiffX = 25;
				latStiffY = 180;
				frictionVsSlipGraph[] = {{ 0,1 },{ 0.5,1 },{ 1,1 }};
			};
			class L2: L1
			{
				boneName = "wheel_1_2_damper";
				steering = 1;
				center = "wheel_1_2_axis";
				boundary = "wheel_1_2_bound";
				suspForceAppPointOffset = "wheel_1_2_axis";
				tireForceAppPointOffset = "wheel_1_2_axis";
			};
			class L3: L2
			{
				boneName = "wheel_1_3_damper";
				steering = 0;
				center = "wheel_1_3_axis";
				boundary = "wheel_1_3_bound";
				suspForceAppPointOffset = "wheel_1_3_axis";
				tireForceAppPointOffset = "wheel_1_3_axis";
				sprungMass = 2500;
				springStrength = 150000;
				springDamperRate = 15000;
				maxHandBrakeTorque = 200000;
			};
			class R1: L1
			{
				boneName = "wheel_2_1_damper";
				center = "wheel_2_1_axis";
				boundary = "wheel_2_1_bound";
				suspForceAppPointOffset = "wheel_2_1_axis";
				tireForceAppPointOffset = "wheel_2_1_axis";
				steering = 1;
				side = "right";
				suspTravelDirection[]	= SUSPTRAVELDIR_RIGHT;
			};
			class R2: L2
			{
				boneName = "wheel_2_2_damper";
				steering = 1;
				center = "wheel_2_2_axis";
				boundary = "wheel_2_2_bound";
				suspForceAppPointOffset = "wheel_2_2_axis";
				tireForceAppPointOffset = "wheel_2_2_axis";
				side = "right";
				maxHandBrakeTorque = 0;
			};
			class R3: L3
			{
				boneName = "wheel_2_3_damper";
				steering = 0;
				center = "wheel_2_3_axis";
				boundary = "wheel_2_3_bound";
				suspForceAppPointOffset = "wheel_2_3_axis";
				tireForceAppPointOffset = "wheel_2_3_axis";
				maxHandBrakeTorque = 200000;
			};
		};