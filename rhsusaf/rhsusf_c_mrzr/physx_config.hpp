		//----- General Parameters -----//
		normalSpeedForwardCoef=0.7;
		slowSpeedForwardCoef=0.4;
		turnCoef=3.0;
		terrainCoef=0.2;
		simulation="carx";

		maxSpeed=95;
		fuelCapacity=28;
		wheelCircumference=1.5;

		brakeIdleSpeed=1.4;
		maxFordingDepth=0.7;
		waterSpeedFactor=0.3;
		waterResistance=1;
		waterResistanceCoef=0.2;
		waterLeakiness = 10.0;

		//----- Gearbox Parameters -----//
		switchTime				= 0.2;
		latency					= 1.3;
		transmissionLosses		= 18;
		changeGearType			= "rpmratio";		// condition for switching gears
		changeGearOmegaRatios[]	= {						// rpm ratio max/min pair
			__EVAL(2950/8000)	, __EVAL(1000/8000),
			__EVAL(700/8000)	, __EVAL(500/8000),
			__EVAL(7550/8000)	, __EVAL(1600/8000),
			__EVAL(6850/8000)	, __EVAL(3400/8000),
			__EVAL(8000/8000)	, __EVAL(4000/8000),
		};
		class complexGearbox
		{
			GearboxRatios[] =
			{
				"R1",	-2.47,
				"N",	0,
				"D1",	3.95,
				"D2",	2.21,
				"D3",	1.435
			};
			TransmissionRatios[]	= {"High",6.8};
			gearBoxMode				= "auto";
			moveOffGear				= 1;
			driveString				= "D";
			neutralString			= "N";
			reverseString			= "R";
		};

		//----- Clutch and Driveline Parameters -----//
		dampersBumpCoef		= 0.3;
		differentialType	= "all_limited";
		frontRearSplit		= 0.12;
		frontBias			= 1.3;
		rearBias			= 1.3;
		centreBias			= 1.3;
		clutchStrength		= 40.0;

		dampingRateFullThrottle					= 0.05;
		dampingRateZeroThrottleClutchEngaged	= 0.15;
		dampingRateZeroThrottleClutchDisengaged	= 0.35;

		//----- Engine Parameters -----//
		torqueCurve[] = {
		{__EVAL(1000/8000),__EVAL(40/95)},
		{__EVAL(2000/8000),__EVAL(55/95)},
		{__EVAL(3000/8000),__EVAL(60/95)},
		{__EVAL(4000/8000),__EVAL(65/95)},
		{__EVAL(5000/8000),__EVAL(75/95)},
		{__EVAL(6000/8000),__EVAL(80/95)},
		{__EVAL(7000/8000),__EVAL(95/95)},
		{__EVAL(9001/8000),__EVAL(0/95)}
		};

		engineMOI 	= 0.1;
		enginePower	= 66;
		peakTorque	= __EVAL(95*1.25);
		minOmega	= 40;
		maxOmega	= 837.76;
		idleRPM		= 600;
		redRPM		= 8000;


		engineLosses	= 34;
		thrustDelay		= 0.1;
		engineBrakeCoef	= 0.1;

		//----- Anti-rollbar Parameters -----//
		antiRollbarForceCoef	= 4.4;
		antiRollbarForceLimit	= 7.4;
		antiRollbarSpeedMin		= 15;
		antiRollbarSpeedMax		= 95;

		accelAidForceSpd		= 2.23;					// in m/s, speed where accelAidForceCoef becomes 0
		accelAidForceCoef		= 8.0;					// acceleration aid force
		accelAidForceYOffset	= -1.3;					// Y offset from the CoG where to apply the accelAidForce

		class Wheels
		{
			class LF
			{
				side					="left";
				boneName				="wheel_1_1_damper";
				center					="wheel_1_1_axis";
				boundary				="wheel_1_1_bound";
				suspForceAppPointOffset	="wheel_1_1_axis";
				tireForceAppPointOffset	="wheel_1_1_axis";
				suspTravelDirection[]	={0,-1,0};

				steering	= 1;
				width		= 0.2;
				mass		= 40;
				MOI			= __EVAL(1.0*(0.5*40*(0.314^2)));

				dampingRate				= 0.1;
				dampingRateDamaged		= 1;
				dampingRateDestroyed	= 1000;

				maxBrakeTorque		= 5000;
				maxHandBrakeTorque	= 0;

				maxCompression	= 0.2;
				maxDroop		= 0.05;

				sprungMass			= -1;
				springStrength		= 17000;
				springDamperRate	= 2500;

				longitudinalStiffnessPerUnitGravity = 9000;
				latStiffX = 20;
				latStiffY = 120;
				frictionVsSlipGraph[] = {{ 0.17,1.95 }, { 0.4,1.55 },{ 1,1.15 }};
			};
			class LR: LF
			{
				boneName="wheel_1_2_damper";
				steering=0;
				center="wheel_1_2_axis";
				boundary="wheel_1_2_bound";
				suspForceAppPointOffset="wheel_1_2_axis";
				tireForceAppPointOffset="wheel_1_2_axis";
				maxBrakeTorque=5000;
				maxHandBrakeTorque=10000;
			};
			class RF: LF
			{
				boneName="wheel_2_1_damper";
				center="wheel_2_1_axis";
				boundary="wheel_2_1_bound";
				suspForceAppPointOffset="wheel_2_1_axis";
				tireForceAppPointOffset="wheel_2_1_axis";
				steering=1;
				maxBrakeTorque=5000;
				side="right";
			};
			class RR: RF
			{
				boneName="wheel_2_2_damper";
				steering=0;
				center="wheel_2_2_axis";
				boundary="wheel_2_2_bound";
				suspForceAppPointOffset="wheel_2_2_axis";
				tireForceAppPointOffset="wheel_2_2_axis";
				maxBrakeTorque=5000;
				maxHandBrakeTorque=10000;
			};

		};
		/// End of PhysX