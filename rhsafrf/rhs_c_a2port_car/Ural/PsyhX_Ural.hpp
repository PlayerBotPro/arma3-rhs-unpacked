		//----- General Parameters -----//
		normalSpeedForwardCoef=0.6;
		slowSpeedForwardCoef=0.45;
		turnCoef=4.0;
		terrainCoef=0.7;
		waterSpeedFactor=0.4;
		simulation="carx";
		dampersBumpCoef=6;

		precision=10;
		brakeDistance=3;
		acceleration=15;
		fireResistance=5;

		maxSpeed=76;
		RHS_FUEL_RANGE(800)
		RHS_fuelCapacity = 300;
		wheelCircumference=3.87;

		brakeIdleSpeed=1.25;


		// Soft Water Ford config
		maxFordingDepth = 0;
		waterResistance = 1;
		waterResistanceCoef=0.2;
		waterLeakiness = 10;

		//----- Gearbox Parameters -----//
		class complexGearbox
		{
			GearboxRatios[]={"R1",-5.3,"N",0,"D1",5.62,"D2",2.89,"D3",1.64,"D4",1.0,"D5",0.724};
			TransmissionRatios[]={"High",5.82};
			gearBoxMode="auto";
			moveOffGear=1;
			driveString="D";
			neutralString="N";
			reverseString="R";
		};
		changeGearMinEffectivity[]={0.95,0.0,0.80,0.85,0.85,0.95,0.85};
		switchTime=0.31;
		latency=1.5;

		//----- Clutch and Driveline Parameters -----//
		differentialType="all_limited";
		frontRearSplit=0.5;
		frontBias=1.3;
		rearBias=0.6;
		centreBias=1.3;
		clutchStrength=75;
		transmissionLosses = 12;

		dampingRateFullThrottle=0.08;
		dampingRateZeroThrottleClutchEngaged=1.35;
		dampingRateZeroThrottleClutchDisengaged=0.35;

		//----- Engine Parameters -----//
		torqueCurve[] = {
			{__EVAL(0/2100),__EVAL(0/883)},
			{__EVAL(900/2100),__EVAL(810/883)},
			{__EVAL(1100/2100),__EVAL(825/883)},
			{__EVAL(1250/2100),__EVAL(883/883)},
			{__EVAL(1450/2100),__EVAL(883/883)},
			{__EVAL(1600/2100),__EVAL(845/883)},
			{__EVAL(1800/2100),__EVAL(820/883)},
			{__EVAL(2100/2100),__EVAL(450/883)}
		};

		enginePower	= 179;
		engineMOI	= 2;
		peakTorque	= __EVAL(883*1.2);
		maxOmega	= 219.91;
		minOmega	= 65;
		idleRPM		= 650;
		redRPM		= 2100;

		engineLosses = 14;
		thrustDelay=2.4;
		engineBrakeCoef = 0.3;

		//----- Anti-rollbar Parameters -----//
		antiRollbarForceCoef=25.0;
		antiRollbarForceLimit=45.5;
		antiRollbarSpeedMin=30;
		antiRollbarSpeedMax=60;

		class Wheels
		{
			class LF
			{
				width = "0.37";
				steering=1;
				side="left";
				boneName="wheel_1_1_damper";
				center="wheel_1_1_axis";
				boundary="wheel_1_1_bound";
				mass=90;
				MOI=18;
				dampingRate=0.1;
				dampingRateDamaged=1;
				dampingRateDestroyed=1000;
				maxBrakeTorque=12500;
				maxHandBrakeTorque=0;
				suspTravelDirection[]	= SUSPTRAVELDIR_LEFT;
				suspForceAppPointOffset="wheel_1_1_axis";
				tireForceAppPointOffset="wheel_1_1_axis";
				maxCompression=0.27;
				maxDroop=0.2;

				sprungMass			= -1;
				springStrength		= 171813;
				springDamperRate	= 15872;

				longitudinalStiffnessPerUnitGravity=14582;
				latStiffX=3.5;
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
				maxHandBrakeTorque=20000;
			};
			class LR2: LR
			{
				boneName="wheel_1_3_damper";
				center="wheel_1_3_axis";
				boundary="wheel_1_3_bound";
				suspForceAppPointOffset="wheel_1_3_axis";
				tireForceAppPointOffset="wheel_1_3_axis";
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
				maxHandBrakeTorque=20000;
			};
			class RR2: RR
			{
				boneName="wheel_2_3_damper";
				center="wheel_2_3_axis";
				boundary="wheel_2_3_bound";
				suspForceAppPointOffset="wheel_2_3_axis";
				tireForceAppPointOffset="wheel_2_3_axis";
			};
		};