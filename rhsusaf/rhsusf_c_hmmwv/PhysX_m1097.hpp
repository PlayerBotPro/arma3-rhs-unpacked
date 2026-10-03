		//----- General Parameters -----//
		normalSpeedForwardCoef=0.7;
		slownSpeedForwardCoef=0.55;
		turnCoef=3;
		terrainCoef=0.5;

		simulation="carx";
		dampersBumpCoef=0;

		precision=9;
		brakeDistance=3;
		acceleration=15;
		fireResistance=5;

		maxSpeed=109;

		RHS_FUEL_RANGE(480)

		wheelCircumference=2.95;
		brakeIdleSpeed=2.5;

		canFloat = 0;
		maxFordingDepth=-0.6;
		waterSpeedFactor=0.3;
		waterResistance=1;
		waterResistanceCoef=0.2;
		waterLeakiness = 20;

		//----- Gearbox Parameters -----//
		switchTime	= 0.5;
		latency		= 1.0;
		changeGearType 			= "effective";		// condition for switching gears
		changeGearOmegaRatios[] = {						// rpm ratio max/min pair
			__EVAL(3400/3400)	, __EVAL(1000/3400),
			__EVAL(700/3400)	, __EVAL(500/3400),
			__EVAL(3150/3400)	, __EVAL(1600/3400),
			__EVAL(2600/3400)	, __EVAL(1200/3400),
			__EVAL(2900/3400)	, __EVAL(1700/3400),
			__EVAL(3400/3400)	, __EVAL(2200/3400)
		};
		class complexGearbox
		{
			GearboxRatios[] = {
				"R1",	-3.07,
				"N",	0,
				"D1",	2.48,
				"D2",	1.48,
				"D3",	1.0,
				"D4",	0.75
			};
			TransmissionRatios[] = {"High",6.0};
			gearBoxMode = "auto";
			moveOffGear = 1;
			driveString = "D";
			neutralString = "N";
			reverseString = "R";
		};

		//----- Clutch and Driveline Parameters -----//
		differentialType="all_limited";
		frontRearSplit=0.5;
		frontBias=2.7;
		rearBias=1.9;
		centreBias=1.5;
		clutchStrength=85;
		transmissionLosses = 20;

		dampingRateFullThrottle					= 0.15;
		dampingRateZeroThrottleClutchEngaged	= 2.8;
		dampingRateZeroThrottleClutchDisengaged	= 0.35;

		//----- Engine Parameters -----//
		torqueCurve[] = {
		{__EVAL(650/3400),__EVAL(420/597)},
		{__EVAL(1000/3400),__EVAL(465/597)},
		{__EVAL(1400/3400),__EVAL(544/597)},
		{__EVAL(1800/3400),__EVAL(597/597)},
		{__EVAL(2400/3400),__EVAL(583/597)},
		{__EVAL(2600/3400),__EVAL(499/597)},
		{__EVAL(3200/3400),__EVAL(472/597)},
		{__EVAL(3603/3400),__EVAL(0/597)}
		};

		engineMOI 	= 7;
		enginePower	= 160;
		peakTorque	= 597;
		minOmega	= 41;
		maxOmega	= 356.05;
		idleRPM		= 650;
		redRPM		= 3400;

		engineLosses = 12;
		thrustDelay=0.8;
		engineBrakeCoef = 0.8;

		//----- Anti-rollbar Parameters -----//
		antiRollbarForceCoef=20;
		antiRollbarForceLimit=5.5;
		antiRollbarSpeedMin=10;
		antiRollbarSpeedMax=80;

		accelAidForceYOffset = -1.25;

		class Wheels
		{
			class LF
			{
				side="left";
				boneName="wheel_1_1_damper";
				center="axis_wheel_1_1";
				boundary="bound_wheel_1_1";
				suspForceAppPointOffset="axis_wheel_1_1";
				tireForceAppPointOffset="axis_wheel_1_1";
				suspTravelDirection[]	= SUSPTRAVELDIR_LEFT;
				steering=1;
				width = 0.25;
				mass=80;
				MOI=10;

				dampingRate=0.1;

				maxBrakeTorque=7000;
				maxHandBrakeTorque=0;

				maxCompression=0.1;
				maxDroop=0.1;

				sprungMass = -1;
				springStrength = 45000;
				springDamperRate = 9157;

				longitudinalStiffnessPerUnitGravity=7500;
				latStiffX = 40;
				latStiffY = 180;
				frictionVsSlipGraph[]=
				{
					{0,2.5},
					{0.5,2.3},
					{1,2}
				};
			};
			class LR: LF
			{
				boneName="wheel_1_2_damper";
				steering=0;
				center="axis_wheel_3_1";
				boundary="bound_wheel_3_1";
				suspForceAppPointOffset="axis_wheel_3_1";
				tireForceAppPointOffset="axis_wheel_3_1";
				maxHandBrakeTorque=30000;
			};
			class RF: LF
			{
				boneName="wheel_2_1_damper";
				center="axis_wheel_2_1";
				boundary="bound_wheel_2_1";
				suspForceAppPointOffset="axis_wheel_2_1";
				tireForceAppPointOffset="axis_wheel_2_1";
				steering=1;
				side="right";
				suspTravelDirection[]	= SUSPTRAVELDIR_RIGHT;
			};
			class RR: RF
			{
				boneName="wheel_2_2_damper";
				steering=0;
				center="axis_wheel_4_1";
				boundary="bound_wheel_4_1";
				suspForceAppPointOffset="axis_wheel_4_1";
				tireForceAppPointOffset="axis_wheel_4_1";
				maxHandBrakeTorque=30000;
			};
		};
