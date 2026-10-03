		//----- General Parameters -----//
		simulation				="carx";
		normalSpeedForwardCoef	=0.9;
		turnCoef				=4.5;
		terrainCoef				=1.5;
		dampersBumpCoef			=6;

		precision		= 10;
		brakeDistance	= 3;
		acceleration	= 15;
		fireResistance	= 5;

		maxSpeed			=80;
		RHS_FUEL_RANGE(450)
		RHS_fuelCapacity	= 290;
		wheelCircumference	=3.66;

		brakeIdleSpeed=0.0;

		waterLeakiness			= 2.5;
		canFloat				= 1;
		waterAngularDampingCoef	= 10.0;
		waterLinearDampingCoefX = 2.0;
		waterLinearDampingCoefY = 2;
		waterPPInVehicle		= 0;
		waterResistanceCoef		= 0.178;
		engineShiftY			= 0.3;
		engineShiftZ			= -3.0;

		rudderForceCoef				= 3.5;
		rudderForceCoefAtMaxSpeed	= 0.3;

		//----- Gearbox Parameters -----//
		class complexGearbox
		{
			GearboxRatios[]			= {"R1",-7.9,"N",0,"D1",6.48,"D2",2.5,"D3",1.40,"D4",1.0};
			TransmissionRatios[]	= {"High",7.2}; //2.2 albo 3.3?
			AmphibiousRatios[]		= {"R1",-10,"N",0,"D1",35};
			gearBoxMode				= "auto";
			moveOffGear				= 1;
			driveString				= "D";
			neutralString			= "N";
			reverseString			= "R";
		};
		changeGearMinEffectivity[]={0.95,0.15,0.95,0.95,0.95,0.9};
		switchTime=0.81;
		latency=1.5;

		//----- Clutch and Driveline Parameters -----//
		differentialType	= "all_limited";
		frontRearSplit		= 0.5;
		frontBias			= 1.3;
		rearBias			= 1.3;
		centreBias			= 1.3;
		clutchStrength		= 55;

		dampingRateFullThrottle					= 0.08;
		dampingRateZeroThrottleClutchEngaged	= 1.35;
		dampingRateZeroThrottleClutchDisengaged	= 0.35;

		//----- Engine Parameters -----//
		torqueCurve[] = {
			{0.229 , 0.92},
			{0.286 , 0.95},
			{0.371 , 0.98},
			{0.457 , 1},
			{0.514 , 1},
			{0.686 , 0.95},
			{0.857 , 0.9},
			{1 , 0.81}
		};

		maxOmega	= 366.52;
		enginePower	= 132;
		peakTorque	= 442;
		idleRPM		= 800;
		redRPM		= 3500;
		engineMOI = 4;

		engineLosses	= 14;
		thrustDelay		= 0.3;
		engineBrakeCoef	= 0.3;

		//----- Anti-rollbar Parameters -----//
		antiRollbarForceCoef	= 0.0;
		antiRollbarForceLimit	= 0.5;
		antiRollbarSpeedMin		= 10;
		antiRollbarSpeedMax		= 40;

		class Wheels
		{
			class LF
			{
				width					= "0.32";
				steering				= 1;
				side					= "left";
				boneName				= "wheel_1_1_damper";
				center					= "wheel_1_1_axis";
				boundary				= "wheel_1_1_bound";
				mass					= 160;
				MOI						= 15;
				dampingRate				= 0.1;
				dampingRateDamaged		= 1;
				dampingRateDestroyed	= 1000;
				maxBrakeTorque			= 12500;
				maxHandBrakeTorque		= 0;
				suspTravelDirection[]	= SUSPTRAVELDIR_LEFT;
				suspForceAppPointOffset	= "wheel_1_1_axis";
				tireForceAppPointOffset	= "wheel_1_1_axis";
				maxCompression			= 0.12;
				maxDroop				= 0.11;

				sprungMass			=1125.5;
				springStrength		=45025;
				springDamperRate	=7700;
				//springDamperRate = 15602;

				longitudinalStiffnessPerUnitGravity	= 10000;
				latStiffX							= 3.5;
				latStiffY							= 18.0;
				frictionVsSlipGraph[]				=
				{
					{0,1},
					{0.5,1.13},
					{1,1}
				};
			};
			class LR: LF
			{
				boneName				= "wheel_1_2_damper";
				center					= "wheel_1_2_axis";
				boundary				= "wheel_1_2_bound";
				suspForceAppPointOffset	= "wheel_1_2_axis";
				tireForceAppPointOffset	= "wheel_1_2_axis";
			};
			class LR2: LR
			{
				steering				= 0;
				boneName				= "wheel_1_3_damper";
				center					= "wheel_1_3_axis";
				boundary				= "wheel_1_3_bound";
				suspForceAppPointOffset	= "wheel_1_3_axis";
				tireForceAppPointOffset	= "wheel_1_3_axis";
				maxHandBrakeTorque		= 10000;
			};
			class LR3: LR2
			{
				boneName				= "wheel_1_4_damper";
				center					= "wheel_1_4_axis";
				boundary				= "wheel_1_4_bound";
				suspForceAppPointOffset	= "wheel_1_4_axis";
				tireForceAppPointOffset	= "wheel_1_4_axis";
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
				center					= "wheel_2_2_axis";
				boundary				= "wheel_2_2_bound";
				suspForceAppPointOffset	= "wheel_2_2_axis";
				tireForceAppPointOffset	= "wheel_2_2_axis";
			};
			class RR2: RR
			{
				steering				= 0;
				boneName				= "wheel_2_3_damper";
				center					= "wheel_2_3_axis";
				boundary				= "wheel_2_3_bound";
				suspForceAppPointOffset	= "wheel_2_3_axis";
				tireForceAppPointOffset	= "wheel_2_3_axis";
				maxHandBrakeTorque		= 10000;
			};
			class RR3: RR2
			{
				boneName				= "wheel_2_4_damper";
				center					= "wheel_2_4_axis";
				boundary				= "wheel_2_4_bound";
				suspForceAppPointOffset	= "wheel_2_4_axis";
				tireForceAppPointOffset	= "wheel_2_4_axis";
			};
		};