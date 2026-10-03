		//----- General Parameters -----//
		normalSpeedForwardCoef=0.6;
		slowSpeedForwardCoef=0.45;
		terrainCoef=1.2;
		turnCoef=2.5;

		simulation="carx";
		dampersBumpCoef=3;

		precision=10;
		brakeDistance=3;
		acceleration=15;
		fireResistance=5;

		maxSpeed=85;
		RHS_FUEL_RANGE(600)
		RHS_fuelCapacity = 300;
		wheelCircumference=3.55;

		brakeIdleSpeed=1.0;

		canFloat				= 1;
		waterLeakiness			= 2.5;
		waterSpeedFactor		= 0.8;
		maxFordingDepth			= 1.2;
		waterResistance			= 0.5;
		waterDamageEngine		= 0.9;
		waterAngularDampingCoef	= 5.0;
		waterLinearDampingCoefY	= 2;
		waterLinearDampingCoefX	= 2.0;
		waterPPInVehicle		= 0;
		waterResistanceCoef		= 0.195;
		engineShiftY			= 0.3;
		engineShiftZ			= -3.0;

		rudderForceCoef				= 3.7;
		rudderForceCoefAtMaxSpeed	= 0.3;

		//----- Gearbox Parameters -----//
		class complexGearbox
		{
			GearboxRatios[]={"R1",-7.38,"N",0,"D1",7.82,"D2",4.03,"D3",2.50,"D4",1.53,"D5",1.0};
			AmphibiousRatios[] = {"R1",-20,"N",0,"D1",25};
			TransmissionRatios[]={"High",6.13};
			gearBoxMode="auto";
			moveOffGear=1;
			driveString="D";
			neutralString="N";
			reverseString="R";
		};
		changeGearMinEffectivity[]={0.95,0.0,0.85,0.85,0.85,0.85,0.85};
		switchTime=0.6;
		latency=1.5;

		//----- Clutch and Driveline Parameters -----//
		differentialType="all_limited";
		frontRearSplit=0.5;
		frontBias=1.3;
		rearBias=1.3;
		centreBias=1.3;
		clutchStrength=75;

		dampingRateFullThrottle=0.08;
		dampingRateZeroThrottleClutchEngaged=1.35;
		dampingRateZeroThrottleClutchDisengaged=0.35;

		//----- Engine Parameters -----//
		torqueCurve[] = {
		{__EVAL(600/2930),__EVAL(432/785)},
		{__EVAL(1000/2930),__EVAL(705/785)},
		{__EVAL(1600/2930),__EVAL(785/785)},
		{__EVAL(1800/2930),__EVAL(785/785)},
		{__EVAL(2000/2930),__EVAL(750/785)},
		{__EVAL(2200/2930),__EVAL(710/785)},
		{__EVAL(2400/2930),__EVAL(665/785)},
		{__EVAL(3475/2930),__EVAL(0/785)}
		};

		maxOmega = 306.83;
		enginePower = 194;
		//peakTorque = 785;
		peakTorque = __EVAL(785*1);
		idleRPM = 600;
		redRPM = 2930;

		engineLosses = 14;
		thrustDelay=0.5;
		engineBrakeCoef = 0.7;

		antiRollbarForceCoef=0.0;
		antiRollbarForceLimit=0.5;
		antiRollbarSpeedMin=10;
		antiRollbarSpeedMax=40;

		class Wheels
		{
			class LF
			{
				width					= 0.33;
				steering				= 1;
				side					= "left";
				boneName				= "wheel_1_1_damper";
				center					= "wheel_1_1_axis";
				boundary				= "wheel_1_1_bound";
				mass					= 160;
				MOI						= 23;
				dampingRate				= 0.1;
				dampingRateDamaged		= 1;
				dampingRateDestroyed	= 1000;
				maxBrakeTorque			= 12500;
				maxHandBrakeTorque		= 0;
				suspTravelDirection[]	= SUSPTRAVELDIR_LEFT;
				suspForceAppPointOffset	= "wheel_1_1_axis";
				tireForceAppPointOffset	= "wheel_1_1_axis";
				maxCompression			= 0.14;
				mMaxDroop				= 0.14;
				MaxDroop				= 0.14;

				sprungMass			= 1595;
				springStrength		= 135000;
				springDamperRate	= 12471;

				longitudinalStiffnessPerUnitGravity	=10000;
				latStiffX							=3.5;
				latStiffY							=18.0;
				frictionVsSlipGraph[]				=
				{
					{0,1},
					{0.5,1.13},
					{1,1}
				};
			};
			class LR: LF
			{
				boneName				="wheel_1_2_damper";
				center					="wheel_1_2_axis";
				boundary				="wheel_1_2_bound";
				suspForceAppPointOffset	="wheel_1_2_axis";
				tireForceAppPointOffset	="wheel_1_2_axis";
			};
			class LR2: LR
			{
				steering=0;
				boneName				="wheel_1_3_damper";
				center					="wheel_1_3_axis";
				boundary				="wheel_1_3_bound";
				suspForceAppPointOffset	="wheel_1_3_axis";
				tireForceAppPointOffset	="wheel_1_3_axis";
				maxHandBrakeTorque		=10000;
			};
			class LR3: LR2
			{
				boneName				="wheel_1_4_damper";
				center					="wheel_1_4_axis";
				boundary				="wheel_1_4_bound";
				suspForceAppPointOffset	="wheel_1_4_axis";
				tireForceAppPointOffset	="wheel_1_4_axis";
			};
			class RF: LF
			{
				boneName				="wheel_2_1_damper";
				center					="wheel_2_1_axis";
				boundary				="wheel_2_1_bound";
				suspForceAppPointOffset	="wheel_2_1_axis";
				tireForceAppPointOffset	="wheel_2_1_axis";
				steering				=1;
				side					="right";
				suspTravelDirection[]	= SUSPTRAVELDIR_RIGHT;
			};
			class RR: RF
			{
				boneName				="wheel_2_2_damper";
				center					="wheel_2_2_axis";
				boundary				="wheel_2_2_bound";
				suspForceAppPointOffset	="wheel_2_2_axis";
				tireForceAppPointOffset	="wheel_2_2_axis";
			};
			class RR2: RR
			{
				steering				=0;
				boneName				="wheel_2_3_damper";
				center					="wheel_2_3_axis";
				boundary				="wheel_2_3_bound";
				suspForceAppPointOffset	="wheel_2_3_axis";
				tireForceAppPointOffset	="wheel_2_3_axis";
				maxHandBrakeTorque		=10000;
			};
			class RR3: RR2
			{
				boneName				="wheel_2_4_damper";
				center					="wheel_2_4_axis";
				boundary				="wheel_2_4_bound";
				suspForceAppPointOffset	="wheel_2_4_axis";
				tireForceAppPointOffset	="wheel_2_4_axis";
			};
		};