		//----- General Parameters -----//
		normalSpeedForwardCoef=0.8;
		slowSpeedForwardCoef=0.45;
		turnCoef=2.5;
		terrainCoef=0.4;
		waterSpeedFactor=0.4;
		simulation="carx";
		dampersBumpCoef=4;

		precision=10;
		brakeDistance=3;
		acceleration=15;
		fireResistance=5;

		maxSpeed=120;
		// 16 l/100 on road, offroad 28, average ~20
		// fuel capacity 78l
		RHS_FUEL_RANGE(600)
		RHS_fuelCapacity = 78;
		wheelCircumference=2.45;

		brakeIdleSpeed=0.5;

		// Soft Water Ford config
		maxFordingDepth = 0;
		waterResistance = 1;
		waterResistanceCoef=0.2;
		waterLeakiness = 10;

		//----- Gearbox Parameters -----//
		class complexGearbox
		{
			GearboxRatios[]={"R1",-5.224,"N",0,"D1",3.78,"D2",2.60,"D3",1.55,"D4",1.0};
			TransmissionRatios[]={"High",5.125};
			gearBoxMode="auto";
			moveOffGear=1;
			driveString="D";
			neutralString="N";
			reverseString="R";
		};
		changeGearMinEffectivity[]={0.95,0.15,0.85,0.95,0.95,0.95};
		switchTime=0.51;
		latency=1;

		//----- Clutch and Driveline Parameters -----//
		differentialType="all_limited";
		frontRearSplit=0.5;
		frontBias=1.5;
		rearBias=1.5;
		centreBias=1.3;
		clutchStrength=15;
		transmissionLosses = 20;

		dampingRateFullThrottle					= 0.08;
		dampingRateZeroThrottleClutchEngaged	= 1.35;
		dampingRateZeroThrottleClutchDisengaged	= 0.35;

		//----- Engine Parameters -----//
		torqueCurve[] = {
		{__EVAL(750/5000),__EVAL(50/173)},
		{__EVAL(1500/5000),__EVAL(155/173)},
		{__EVAL(2400/5000),__EVAL(173/173)},
		{__EVAL(2600/5000),__EVAL(173/173)},
		{__EVAL(3500/5000),__EVAL(165/173)},
		{__EVAL(4000/5000),__EVAL(155/173)},
		{__EVAL(4500/5000),__EVAL(140/173)},
		{__EVAL(5000/5000),__EVAL(120/173)}
		};

		enginePower	= 67;
		engineMOI 	= 1.1;
		peakTorque	= __EVAL(173*1.0);
		maxOmega	= 523.6;
		minOmega	= 20;
		idleRPM		= 750;
		redRPM		= 5000;

		engineLosses = 14;
		thrustDelay=0.2;
		engineBrakeCoef = 0.9;

		accelAidForceYOffset	= -0.85;
		accelAidForceCoef		= 5.0;					// acceleration aid force
		accelAidForceSpd		= 4.23;					// in m/s, speed where accelAidForceCoef becomes 0

		//----- Anti-rollbar Parameters -----//
		antiRollbarForceCoef	= 0.5;
		antiRollbarForceLimit	= 0.5;
		antiRollbarSpeedMin		= 10;
		antiRollbarSpeedMax		= 80;

		class Wheels
		{
			class LF
			{
				side					= "left";
				boneName				= "wheel_1_1_damper";
				center					= "wheel_1_1_axis";
				boundary				= "wheel_1_1_bound";
				suspForceAppPointOffset	= "wheel_1_1_axis";
				tireForceAppPointOffset	= "wheel_1_1_axis";
				suspTravelDirection[]	= SUSPTRAVELDIR_LEFT;

				steering	= 1;
				width		= 0.16;
				mass		= 20;
				MOI			= 24;

				dampingRate				= 0.1;
				dampingRateDamaged		= 1;
				dampingRateDestroyed	= 1000;

				maxBrakeTorque		= 2000;
				maxHandBrakeTorque	= 0;

				maxCompression	= 0.2;
				maxDroop		= 0.1;

				sprungMass			= -1;
				springStrength		= 14000;
				springDamperRate	= 2400;

				longitudinalStiffnessPerUnitGravity=10000;
				latStiffX=2.5;
				latStiffY=18.0;
				frictionVsSlipGraph[]=
				{
					{0,1.2},
					{0.5,1.13},
					{1,1}
				};
			};
			class LR: LF
			{
				boneName="wheel_1_2_damper";
				steering=0;
				center="wheel_1_2_axis";
				boundary="wheel_1_2_bound";
				suspForceAppPointOffset="wheel_1_2_axis";
				tireForceAppPointOffset="wheel_1_2_axis";
				maxHandBrakeTorque=3000;
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
				steering=0;
				center="wheel_2_2_axis";
				boundary="wheel_2_2_bound";
				suspForceAppPointOffset="wheel_2_2_axis";
				tireForceAppPointOffset="wheel_2_2_axis";
				maxHandBrakeTorque=3000;
			};
		};