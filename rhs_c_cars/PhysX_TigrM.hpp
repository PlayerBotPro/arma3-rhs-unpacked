		//----- General Parameters -----//
		normalSpeedForwardCoef=0.9;
		turnCoef=3.0;
		terrainCoef=0.5;
		waterSpeedFactor=0.4;
		simulation="carx";
		dampersBumpCoef=3;

		precision=9;
		brakeDistance=3;
		acceleration=15;
		fireResistance=5;

		maxSpeed=125;
		// external fuel tank
		RHS_FUEL_RANGE(650)
		RHS_fuelCapacity = 240;
		//wheelCircumference=3.40376;
		wheelCircumference=2.45;

		brakeIdleSpeed=1.0;

		// Soft Water Ford config
		maxFordingDepth = 0;
		waterResistance = 1;
		waterLeakiness = 10;

		//----- Gearbox Parameters -----//
		class complexGearbox
		{
			/*
			GearboxRatios[] = {"R1",-4.476,"N",0,"D1",3.1,"D2",1.81,"D3",1.41,"D4",1.0,"D5",0.71};
			TransmissionRatios[] = {"High",4.0};
			*/
			GearboxRatios[] = {"R1",-4.935,"N",0,"D1",5.714,"D2",3.083,"D3",1.939,"D4",1.228,"D5",1.000};
			TransmissionRatios[] = {"High",3.835};
			//TransmissionRatios[] = {"High",4.935};
			gearBoxMode = "auto";
			moveOffGear = 1;
			driveString = "D";
			neutralString = "N";
			reverseString = "R";
		};
		changeGearMinEffectivity[]={0.95,0.0,0.95,0.95,0.95,0.95,0.95};
		switchTime=0.51;
		latency=1.0;

		//----- Clutch and Driveline Parameters -----//
		differentialType="all_limited";
		frontRearSplit=0.5;
		frontBias=1.5;
		rearBias=1.5;
		centreBias=1.3;
		clutchStrength=65;
		transmissionLosses = 9;

		dampingRateFullThrottle=0.079999998;
		dampingRateZeroThrottleClutchEngaged=1.34999999;
		dampingRateZeroThrottleClutchDisengaged=0.34999999;

		//----- Engine Parameters -----//

		torqueCurve[] = {
		{__EVAL(700/2700),__EVAL(240/735)},
		{__EVAL(1000/2700),__EVAL(480/735)},
		{__EVAL(1200/2700),__EVAL(683/735)},
		{__EVAL(1400/2700),__EVAL(735/735)},
		{__EVAL(1700/2700),__EVAL(735/735)},
		{__EVAL(2000/2700),__EVAL(708/735)},
		{__EVAL(2300/2700),__EVAL(650/735)},
		{__EVAL(3200/2700),__EVAL(0/735)}
		};

		enginePower = 160;
		peakTorque = __EVAL(735*2.0);
		maxOmega = 282.74;
		minOmega = 65;
		idleRPM = 700;
		redRPM = 2700;

		engineLosses = 11;
		thrustDelay=0.8;
		engineBrakeCoef = 0.3;

		//----- Anti-rollbar Parameters -----//
		antiRollbarForceCoef=3.5;
		antiRollbarForceLimit=4.5;
		antiRollbarSpeedMin=40;
		antiRollbarSpeedMax=120;

		class Wheels
		{
			class LF
			{
				boneName				= "wheel_1_1_damper";
				center					= "wheel_1_1_axis";
				boundary				= "wheel_1_1_bound";
				suspForceAppPointOffset	= "wheel_1_1_axis";
				tireForceAppPointOffset	= "wheel_1_1_axis";
				side					= "left";
				suspTravelDirection[]	= SUSPTRAVELDIR_LEFT;
				steering				= 1;
				width					= 0.32;

				mass	= 60;
				MOI		= 10;

				dampingRate				= 3.1;
				dampingRateDamaged		= 1;
				dampingRateDestroyed	= 1000;
				maxBrakeTorque			= 12000;
				maxHandBrakeTorque		= 0;
				maxCompression	= 0.13;
				maxDroop		= 0.11;

				sprungMass			= -1;
				springStrength		= 135000;
				springDamperRate	= 12471;

				longitudinalStiffnessPerUnitGravity = 4800;
				latStiffX = 2.5;
				latStiffY = 18;
				frictionVsSlipGraph[] = {{ 0.17,0.95 }, { 0.4,0.85 },{ 1,0.75 }};
			};
			class LR: LF
			{
				boneName				= "wheel_1_2_damper";
				center					= "wheel_1_2_axis";
				boundary				= "wheel_1_2_bound";
				suspForceAppPointOffset	= "wheel_1_2_axis";
				tireForceAppPointOffset	= "wheel_1_2_axis";
				steering				= 0;
				maxBrakeTorque			= 15000;
				maxHandBrakeTorque		= 20000;
			};
			class RF: LF
			{
				boneName				= "wheel_2_1_damper";
				center					= "wheel_2_1_axis";
				boundary				= "wheel_2_1_bound";
				suspForceAppPointOffset	= "wheel_2_1_axis";
				tireForceAppPointOffset	= "wheel_2_1_axis";
				side					= "right";
				suspTravelDirection[]	= SUSPTRAVELDIR_RIGHT;
				steering				= 1;
			};
			class RR: RF
			{
				boneName				= "wheel_2_2_damper";
				center					= "wheel_2_2_axis";
				boundary				= "wheel_2_2_bound";
				suspForceAppPointOffset	= "wheel_2_2_axis";
				tireForceAppPointOffset	= "wheel_2_2_axis";
				steering				= 0;
				maxBrakeTorque			= 15000;
				maxHandBrakeTorque		= 20000;
			};
		};
