		//----- General Parameters -----//
		normalSpeedForwardCoef=0.75;
		slowSpeedForwardCoef=0.45;
		terrainCoef=2.0;

		simulation="carx";
		dampersBumpCoef=2;

		precision=10;
		brakeDistance=3;
		acceleration=15;
		fireResistance=5;

		maxSpeed=90;
		RHS_FUEL_RANGE(800)
		RHS_fuelCapacity = 210;
		wheelCircumference=3.3;

		brakeIdleSpeed=1.0;


		// Soft Water Ford config
		maxFordingDepth = 0;
		waterResistance = 1;
		waterResistanceCoef = 0.15;
		waterSpeedFactor=0.2;
		waterLeakiness = 10;

		//----- Gearbox Parameters -----//
		class complexGearbox
		{
			GearboxRatios[]={"R1",-7.9,"N",0,"D1",6.48,"D2",3.09,"D3",1.6,"D4",0.8};
			TransmissionRatios[]={"High",6.79};
			gearBoxMode="auto";
			moveOffGear=1;
			driveString="D";
			neutralString="N";
			reverseString="R";
		};
		changeGearMinEffectivity[]={0.95,0.15,0.95,0.95,0.95,0.95};
		switchTime=0.83;
		latency=1.5;

		//----- Clutch and Driveline Parameters -----//
		differentialType	="all_limited";
		frontRearSplit		=0.5;
		frontBias			=1.3;
		rearBias			=1.3;
		centreBias			=1;
		clutchStrength		=40;
		transmissionLosses	= 8;

		dampingRateFullThrottle					= 0.05;
		dampingRateZeroThrottleClutchEngaged	= 1.35;
		dampingRateZeroThrottleClutchDisengaged	= 0.35;

		//----- Engine Parameters -----//
		torqueCurve[] = {
			{__EVAL(0/3200),__EVAL(0/284)},
			{__EVAL(1000/3200),__EVAL(255/284)},
			{__EVAL(1200/3200),__EVAL(267/284)},
			{__EVAL(1600/3200),__EVAL(273/284)},
			{__EVAL(2000/3200),__EVAL(284/284)},
			{__EVAL(2500/3200),__EVAL(284/284)},
			{__EVAL(2800/3200),__EVAL(273/284)},
			{__EVAL(3200/3200),__EVAL(132/284)}
		};

		enginePower	= 89;
		engineMOI	= 0.95;
		peakTorque	= __EVAL(284*2.0);
		maxOmega	= 335.1;
		minOmega	= 50;
		idleRPM		= 500;
		redRPM		= 3200;

		engineLosses	= 10;
		thrustDelay		= 1.5;

		accelAidForceYOffset = -0.15;

		//----- Anti-rollbar Parameters -----//
		antiRollbarForceCoef	= 0.2;
		antiRollbarForceLimit	= 0.5;
		antiRollbarSpeedMin		= 30;
		antiRollbarSpeedMax		= 65;

		class Wheels
		{
			class LF
			{
				steering				= 1;
				width					= 0.32;
				side					= "left";
				boneName				= "wheel_1_1_damper";
				center					= "wheel_1_1_axis";
				boundary				= "wheel_1_1_bound";
				suspForceAppPointOffset	= "wheel_1_1_axis";
				tireForceAppPointOffset	= "wheel_1_1_axis";
				suspTravelDirection[]	= SUSPTRAVELDIR_LEFT;

				mass					= 80;
				MOI						= 28;

				dampingRate				= 6.1;
				dampingRateDamaged		= 1;
				dampingRateDestroyed	= 1000;
				maxBrakeTorque			= 8500;
				maxHandBrakeTorque		= 0;

				maxCompression	= 0.3;
				maxDroop		= 0.25;

				sprungMass			= -1;
				springStrength		= 61938;
				springDamperRate	= 10342;

				longitudinalStiffnessPerUnitGravity	= 2986;
				latStiffX							= 25;
				latStiffY							= 30.0;
				frictionVsSlipGraph[]				= {{0,1.2},{0.5,1.13},{1,1}};

			};
			class LR: LF
			{
				boneName				= "wheel_1_2_damper";
				steering				= 0;
				center					= "wheel_1_2_axis";
				boundary				= "wheel_1_2_bound";
				suspForceAppPointOffset	= "wheel_1_2_axis";
				tireForceAppPointOffset	= "wheel_1_2_axis";
				maxHandBrakeTorque		= 20000;
				latStiffX				= 5;
			};
			class RF: LF
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
			class RR: RF
			{
				boneName				= "wheel_2_2_damper";
				steering				= 0;
				center					= "wheel_2_2_axis";
				boundary				= "wheel_2_2_bound";
				suspForceAppPointOffset	= "wheel_2_2_axis";
				tireForceAppPointOffset	= "wheel_2_2_axis";
				maxHandBrakeTorque		= 20000;
				latStiffX				= 5;
			};
		};
