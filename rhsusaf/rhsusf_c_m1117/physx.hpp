		//----- General Parameters -----//
		normalSpeedForwardCoef=0.7;
		slownSpeedForwardCoef=0.55;
		turnCoef=3.0;
		terrainCoef=2.0;

		simulation="carx";
		dampersBumpCoef=0;

		maxSpeed=100;
		RHS_FUEL_RANGE(700)

		wheelCircumference = 3.656706;
		brakeIdleSpeed=2;

		canFloat = 0;
		maxFordingDepth=0.0;
		waterSpeedFactor=0.1;
		waterResistance=1;
		waterResistanceCoef=0.3;
		waterLeakiness = 20;

		//----- Gearbox Parameters -----//
		class complexGearbox
		{
			GearboxRatios[] = {"R1",-5.03,"N",0,"D1",3.49,"D2",1.86,"D3",1.41,"D4",1,"D5",0.75,"D6",0.60};

			TransmissionRatios[]	= {"High",6.9}; //5.0
			gearBoxMode				= "auto";
			moveOffGear				= 1;
			driveString				= "D";
			neutralString			= "N";
			reverseString			= "R";
		};
		changeGearMinEffectivity[]={0.95,0.0,0.95,0.95,0.95,0.90,0.90,0.45};
		switchTime = 0.5;
		latency = 1.0;

		//----- Clutch and Driveline Parameters -----//
		differentialType="all_limited";
		frontRearSplit=0.5;
		frontBias = 1.3;
		rearBias = 1.3;
		centreBias = 1.3;
		clutchStrength = 55.0;

		dampingRateFullThrottle					= 0.15;
		dampingRateZeroThrottleClutchEngaged	= 0.8;
		dampingRateZeroThrottleClutchDisengaged	= 0.35;

		//----- Engine Parameters -----//
		torqueCurve[] = {
		{__EVAL(1000/2200),__EVAL(719/1135)},
		{__EVAL(1100/2200),__EVAL(972/1135)},
		{__EVAL(1300/2200),__EVAL(1121/1135)},
		{__EVAL(1500/2200),__EVAL(1135/1135)},
		{__EVAL(1700/2200),__EVAL(1089/1135)},
		{__EVAL(1900/2200),__EVAL(981/1135)},
		{__EVAL(2100/2200),__EVAL(887/1135)},
		{__EVAL(2319/2200),__EVAL(0/1135)}
		};

		engineMOI	= 5;
		enginePower	= 194;
		peakTorque	= 1135;
		minOmega	= 66;
		maxOmega	= 230.38;
		idleRPM		= 1000;
		redRPM		= 2200;


		thrustDelay = 0.8;
		engineLosses = 15;
		engineBrakeCoef = 0.8;

		//----- Anti-rollbar Parameters -----//
		antiRollbarForceCoef = 0.5;
		antiRollbarForceLimit = 0.5;
		antiRollbarSpeedMin = 10;
		antiRollbarSpeedMax = 50;

		accelAidForceSpd		= 2.23;					// in m/s, speed where accelAidForceCoef becomes 0
		accelAidForceCoef		= 3.0;					// acceleration aid force
		accelAidForceYOffset	= -1.3;					// Y offset from the CoG where to apply the accelAidForce

		class Wheels
		{
			class LF
			{
				side					= "left";
				boneName				= "wheel_1_1";
				center					= "wheel_1_1_axis";
				boundary				= "wheel_1_1_bound";
				suspForceAppPointOffset	= "wheel_1_1_axis";
				tireForceAppPointOffset	= "wheel_1_1_axis";
				suspTravelDirection[]	= SUSPTRAVELDIR_LEFT;

				steering	= 1;
				width		= 0.35;
				mass		= 80;
				MOI			= __EVAL(1.0*(0.5*80*(0.6^2)));		// radius 0.378626m

				dampingRate				= 1;
				dampingRateInAir		= 1;
				dampingRateDamaged		= 1.5;
				dampingRateDestroyed	= 1000.0;

				maxBrakeTorque		= 26000;//22500
				maxHandBrakeTorque	= 0;

				maxCompression	= 0.2;
				maxDroop		= 0.2;

				sprungMass			= -1;
				springStrength		= 178578;
				springDamperRate	= 17000;

				longitudinalStiffnessPerUnitGravity = 13000;
				latStiffX = 35;
				latStiffY = 180;
				frictionVsSlipGraph[] = {{ 0,1 },{ 0.5,1 },{ 1,1 }};
			};
			class LR: LF
			{
				boneName				= "wheel_1_2";
				center					= "wheel_1_2_axis";
				boundary				= "wheel_1_2_bound";
				suspForceAppPointOffset	= "wheel_1_2_axis";
				tireForceAppPointOffset	= "wheel_1_2_axis";
				maxHandBrakeTorque		= 40000; //22500
				steering				= 0;
			};
			class RF: LF
			{
				side					= "right";
				boneName				= "wheel_2_1";
				center					= "wheel_2_1_axis";
				boundary				= "wheel_2_1_bound";
				suspForceAppPointOffset	= "wheel_2_1_axis";
				tireForceAppPointOffset	= "wheel_2_1_axis";
				suspTravelDirection[]	= SUSPTRAVELDIR_RIGHT;
				steering				= 1;
			};
			class RR: RF
			{
				boneName				= "wheel_2_2";
				center					= "wheel_2_2_axis";
				boundary				= "wheel_2_2_bound";
				suspForceAppPointOffset	= "wheel_2_2_axis";
				tireForceAppPointOffset	= "wheel_2_2_axis";
				maxHandBrakeTorque		= 40000;//22500
				steering				= 0;
			};
		};