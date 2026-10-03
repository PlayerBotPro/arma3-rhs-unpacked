		//----- General Parameters -----//
		normalSpeedForwardCoef=0.6;
		slowSpeedForwardCoef=0.45;
		terrainCoef=1.2;
		turnCoef=2.5;

		simulation="carx";
		dampersBumpCoef=6;

		precision=10;
		brakeDistance=3;
		acceleration=15;
		fireResistance=5;

		maxSpeed=75;
		RHS_FUEL_RANGE(500)
		RHS_fuelCapacity = 350;
		wheelCircumference=3.51;

		brakeIdleSpeed=0.7;

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
		waterResistanceCoef		= 0.145;
		engineShiftY			= 0.3;
		engineShiftZ			= -3.0;

		rudderForceCoef				= 3.7;
		rudderForceCoefAtMaxSpeed	= 0.3;

		//----- Gearbox Parameters -----//
		class complexGearbox
		{
			GearboxRatios[]={"R1",-7.9,"N",0,"D1",6.48,"D2",2.5,"D3",1.40,"D4",1.0};
			AmphibiousRatios[] = {"R1",-20,"N",0,"D1",47};
			TransmissionRatios[]={"High",8.0}; //2.2 albo 3.3?
			gearBoxMode="auto";
			moveOffGear=1;
			driveString="D";
			neutralString="N";
			reverseString="R";
		};
		changeGearMinEffectivity[]={0.95,0.0,0.85,0.85,0.85,0.85};
		switchTime=0.81;
		latency=1.5;

		//----- Clutch and Driveline Parameters -----//
		differentialType="all_limited";
		frontRearSplit=0.5;
		frontBias=1.3;
		rearBias=1.3;
		centreBias=1.3;
		clutchStrength=55;

		dampingRateFullThrottle=0.08;
		dampingRateZeroThrottleClutchEngaged=1.35;
		dampingRateZeroThrottleClutchDisengaged=0.35;

		//----- Engine Parameters -----//
		torqueCurve[] = {
		{__EVAL(600/3600),__EVAL(235/284)},
		{__EVAL(1000/3600),__EVAL(264/284)},
		{__EVAL(1400/3600),__EVAL(273/284)},
		{__EVAL(1800/3600),__EVAL(279/284)},
		{__EVAL(2000/3600),__EVAL(284/284)},
		{__EVAL(2500/3600),__EVAL(284/284)},
		{__EVAL(3200/3600),__EVAL(265/284)},
		{__EVAL(4004/3600),__EVAL(0/284)}
		};

		enginePower = 89;
		peakTorque = __EVAL(284*1);
		maxOmega = 376.99;
		minOmega = 60;
		idleRPM = 600;
		redRPM = 3600;

		engineLosses = 14;
		thrustDelay=2.0;
		engineBrakeCoef = 0.3;

		antiRollbarForceCoef=0.0;
		antiRollbarForceLimit=0.5;
		antiRollbarSpeedMin=10;
		antiRollbarSpeedMax=40;

		accelAidForceYOffset = -0.5;

		class Wheels
		{
			class LF
			{
				width = "0.33";
				steering=1;
				side="left";
				boneName="wheel_1_1_damper";
				center="wheel_1_1_axis";
				boundary="wheel_1_1_bound";
				mass=160;
				MOI=22;
				dampingRate=0.1;
				dampingRateDamaged=1;
				dampingRateDestroyed=1000;
				maxBrakeTorque=12500;
				maxHandBrakeTorque=0;
				suspTravelDirection[]	= SUSPTRAVELDIR_LEFT;
				suspForceAppPointOffset="wheel_1_1_axis";
				tireForceAppPointOffset="wheel_1_1_axis";
				maxCompression=0.15;
				mMaxDroop=0.15;
				MaxDroop=0.15;

				sprungMass=925.5;
				springStrength = 108150;
				springDamperRate = 9990;

				longitudinalStiffnessPerUnitGravity=10000;
				latStiffX=3.5;
				latStiffY=18.0;
				frictionVsSlipGraph[]=
				{
					{0,1},
					{0.5,1.13},
					{1,1}
				};
			};
			class LR: LF
			{
				boneName="wheel_1_2_damper";
				center="wheel_1_2_axis";
				boundary="wheel_1_2_bound";
				suspForceAppPointOffset="wheel_1_2_axis";
				tireForceAppPointOffset="wheel_1_2_axis";
			};
			class LR2: LR
			{
				steering=0;
				boneName="wheel_1_3_damper";
				center="wheel_1_3_axis";
				boundary="wheel_1_3_bound";
				suspForceAppPointOffset="wheel_1_3_axis";
				tireForceAppPointOffset="wheel_1_3_axis";
				maxHandBrakeTorque=10000;
			};
			class LR3: LR2
			{
				boneName="wheel_1_4_damper";
				center="wheel_1_4_axis";
				boundary="wheel_1_4_bound";
				suspForceAppPointOffset="wheel_1_4_axis";
				tireForceAppPointOffset="wheel_1_4_axis";
			};
			class RF: LF
			{
				boneName="wheel_2_1_damper";
				center="wheel_2_1_axis";
				boundary="wheel_2_1_bound";
				suspForceAppPointOffset="wheel_2_1_axis";
				tireForceAppPointOffset="wheel_2_1_axis";
				steering=1;
				side="right";
				suspTravelDirection[]	= SUSPTRAVELDIR_RIGHT;
			};
			class RR: RF
			{
				boneName="wheel_2_2_damper";
				center="wheel_2_2_axis";
				boundary="wheel_2_2_bound";
				suspForceAppPointOffset="wheel_2_2_axis";
				tireForceAppPointOffset="wheel_2_2_axis";
			};
			class RR2: RR
			{
				steering=0;
				boneName="wheel_2_3_damper";
				center="wheel_2_3_axis";
				boundary="wheel_2_3_bound";
				suspForceAppPointOffset="wheel_2_3_axis";
				tireForceAppPointOffset="wheel_2_3_axis";
				maxHandBrakeTorque=10000;
			};
			class RR3: RR2
			{
				boneName="wheel_2_4_damper";
				center="wheel_2_4_axis";
				boundary="wheel_2_4_bound";
				suspForceAppPointOffset="wheel_2_4_axis";
				tireForceAppPointOffset="wheel_2_4_axis";
			};
		};