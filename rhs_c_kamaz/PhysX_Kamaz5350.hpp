		//----- General Parameters -----//
		normalSpeedForwardCoef=0.75;
		slowSpeedForwardCoef=0.45;
		terrainCoef=1.2;
		turnCoef=4;

		simulation="carx";
		dampersBumpCoef=6;

		precision=10;
		brakeDistance=3;
		acceleration=15;
		fireResistance=5;

		maxSpeed=90;
		RHS_FUEL_RANGE(800)
		RHS_fuelCapacity = 350;
		wheelCircumference=3.776;

		brakeIdleSpeed=2.0;

		canFloat = 0;
		waterLeakiness = 2.5;
		waterSpeedFactor = 0.8;
		maxFordingDepth=0.03;
		waterResistance = 0.5;
		waterDamageEngine = 0.9;
		waterAngularDampingCoef = 10.0;
		waterLinearDampingCoefY 	 = 2;
		waterLinearDampingCoefX 	 = 2.0;
		waterPPInVehicle = 0;
		waterResistanceCoef = 0.225;
		engineShiftY = 0.3;
		engineShiftZ = -3.0;

		rudderForceCoef = 1.5;
		rudderForceCoefAtMaxSpeed = 0.3;

		//----- Gearbox Parameters -----//
		switchTime	= 0.75;
		latency		= 1.0;
		changeGearType 			= "rpmratio";		// condition for switching gears
		changeGearOmegaRatios[] = {						// rpm ratio max/min pair
			__EVAL(2950/2200)	, __EVAL(1000/2200),
			__EVAL(700/2200)	, __EVAL(500/2200),
			__EVAL(2050/2200)	, __EVAL(600/2200),
			__EVAL(2100/2200)	, __EVAL(1000/2200),
			__EVAL(2000/2200)	, __EVAL(1400/2200),
			__EVAL(2100/2200)	, __EVAL(1400/2200),
			__EVAL(2190/2200)	, __EVAL(1400/2200),
			__EVAL(2200/2200)	, __EVAL(1650/2200)
		};
		class complexGearbox
		{
			GearboxRatios[] = {
				"R1",-4.97,
				"N",0,
				"D1",4.15,
				"D2",2.86,
				"D3",1.92,
				"D4",1.35,
				"D5",0.83,
				"D6",0.63
			};
			TransmissionRatios[] = {"High",8.53};
			gearBoxMode = "auto";
			moveOffGear = 1;
			driveString = "D";
			neutralString = "N";
			reverseString = "R";
			transmissionDelay = 1;
		};

		//----- Clutch and Driveline Parameters -----//
		differentialType = "all_limited";
		frontRearSplit = 0.5;
		frontBias = 1.8;
		rearBias = 1.3;
		centreBias = 1.3;
		clutchStrength = 75.0;

		dampingRateFullThrottle = 0.08;
		dampingRateZeroThrottleClutchEngaged = 2.0;
		dampingRateZeroThrottleClutchDisengaged = 0.35;

		//----- Engine Parameters -----//
		torqueCurve[] = {
		{__EVAL(800/2200),__EVAL(830/950)},
		{__EVAL(1000/2200),__EVAL(945/950)},
		{__EVAL(1200/2200),__EVAL(950/950)},
		{__EVAL(1400/2200),__EVAL(950/950)},
		{__EVAL(1600/2200),__EVAL(935/950)},
		{__EVAL(1800/2200),__EVAL(920/950)},
		{__EVAL(2000/2200),__EVAL(880/950)},
		{__EVAL(2417/2200),__EVAL(0/950)}
		};

		engineMOI 	= 9;
		enginePower	= 194;
		peakTorque	= 950;
		minOmega	= 75;
		maxOmega	= 230.38;
		idleRPM		= 800;
		redRPM		= 2200;

		thrustDelay = 0.5;
		engineLosses = 35;
		engineBrakeCoef = 0.25;

		//----- Anti-Rollbars Parameters -----//
		antiRollbarForceCoef = 12;
		//antiRollbarForceCoef = 4;
		antiRollbarForceLimit = 8;
		antiRollbarSpeedMin = 10;
		antiRollbarSpeedMax = 50;

		class Wheels
		{
			class L1
			{
				side					= "left";
				boneName				= "wheel_1_1_damper";
				center					= "wheel_1_1_axis";
				boundary				= "wheel_1_1_bound";
				suspForceAppPointOffset	= "wheel_1_1_axis";
				tireForceAppPointOffset	= "wheel_1_1_axis";
				suspTravelDirection[]	= SUSPTRAVELDIR_LEFT;
				width					= 0.35;
				steering				= 1;

				mass	= 80;
				MOI		= __EVAL(1.0*(0.5*80*(0.6^2)));

				dampingRate				= 0.1;
				dampingRateDamaged		= 1.0;
				dampingRateDestroyed	= 1000.0;

				maxBrakeTorque = 15000;
				maxHandBrakeTorque = 0;

				maxCompression	= 0.2;
				maxDroop		= 0.2;

				sprungMass			= 2000;
				springStrength		= 114000;
				springDamperRate	= 9000;

				longitudinalStiffnessPerUnitGravity = 10000;
				latStiffX = 25;
				latStiffY = 180;
				frictionVsSlipGraph[] = {{ 0,1 },{ 0.5,1 },{ 1,1 }};
			};
			class L2: L1
			{
				boneName = "wheel_1_2_damper";
				steering = 0;
				center = "wheel_1_2_axis";
				boundary = "wheel_1_3_bound";
				suspForceAppPointOffset = "wheel_1_2_axis";
				tireForceAppPointOffset = "wheel_1_2_axis";
				sprungMass = 1500;
				springStrength = 64000;
				springDamperRate = 9000;
			};
			class L3: L2
			{
				boneName = "wheel_1_3_damper";
				steering = 0;
				center = "wheel_1_3_axis";
				boundary = "wheel_1_2_bound";
				suspForceAppPointOffset = "wheel_1_3_axis";
				tireForceAppPointOffset = "wheel_1_3_axis";
				maxHandBrakeTorque = 300000;
			};
			class R1: L1
			{
				boneName				= "wheel_2_1_damper";
				center					= "wheel_2_1_axis";
				boundary				= "wheel_2_1_bound";
				suspForceAppPointOffset	= "wheel_2_1_axis";
				tireForceAppPointOffset	= "wheel_2_1_axis";
				steering				= 1;
				side					= "right";
				suspTravelDirection[]	= SUSPTRAVELDIR_RIGHT;
			};
			class R2: L2
			{
				boneName = "wheel_2_2_damper";
				steering = 0;
				center = "wheel_2_2_axis";
				boundary = "wheel_2_3_bound";
				suspForceAppPointOffset = "wheel_2_2_axis";
				tireForceAppPointOffset = "wheel_2_2_axis";
				side = "right";
				suspTravelDirection[]	= SUSPTRAVELDIR_RIGHT;
				maxHandBrakeTorque = 0;
			};
			class R3: R2
			{
				boneName = "wheel_2_3_damper";
				steering = 0;
				center = "wheel_2_3_axis";
				boundary = "wheel_2_2_bound";
				suspForceAppPointOffset = "wheel_2_3_axis";
				tireForceAppPointOffset = "wheel_2_3_axis";
				maxHandBrakeTorque = 300000;
			};
		};