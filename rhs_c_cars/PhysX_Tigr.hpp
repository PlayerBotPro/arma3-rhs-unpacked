		//----- General Parameters -----//
		normalSpeedForwardCoef=0.6;
		slowSpeedForwardCoef=0.45;
		turnCoef=3.0;
		terrainCoef=1.5;
		waterSpeedFactor=0.4;
		simulation="carx";
		dampersBumpCoef=4;

		precision=9;
		brakeDistance=3;
		acceleration=15;
		fireResistance=5;

		maxSpeed=140;
		// http://dokwar.ru/publ/vooruzhenie/bronetekhnika/bronevik_tigr_gaz_2330/13-1-0-340
		// 40 l / 100km
		// supposed to be 12.6l on road but thats veeery optimistic
		RHS_FUEL_RANGE(350)
		RHS_fuelCapacity = 140;
		wheelCircumference=2.45;

		brakeIdleSpeed=2.0;

		// Soft Water Ford config
		maxFordingDepth = 0;
		waterResistance = 1;
		waterLeakiness = 10;

		//----- Gearbox Parameters -----//
		class complexGearbox
		{
			GearboxRatios[] = {"R1",-4.476,"N",0,"D1",3.1,"D2",1.81,"D3",1.41,"D4",1.0,"D5",0.71};
			TransmissionRatios[] = {"High",5.0};
			gearBoxMode = "auto";
			moveOffGear = 1;
			driveString = "D";
			neutralString = "N";
			reverseString = "R";
		};
		changeGearMinEffectivity[]={0.95,0.0,0.90,0.90,0.90,0.90,0.90};
		switchTime=0.28;
		latency=1.0;

		//----- Clutch and Driveline Parameters -----//
		differentialType="all_limited";
		frontRearSplit=0.5;
		frontBias=1.5;
		rearBias=1.5;
		centreBias=1.3;
		clutchStrength=35;
		transmissionLosses = 9;

		dampingRateFullThrottle=0.08;
		dampingRateZeroThrottleClutchEngaged=1.35;
		dampingRateZeroThrottleClutchDisengaged=0.35;

		//----- Engine Parameters -----//

		torqueCurve[] = {
		{__EVAL(750/2500),__EVAL(213/610)},
		{__EVAL(1000/2500),__EVAL(424/610)},
		{__EVAL(1200/2500),__EVAL(594/610)},
		{__EVAL(1500/2500),__EVAL(610/610)},
		{__EVAL(1800/2500),__EVAL(610/610)},
		{__EVAL(2000/2500),__EVAL(589/610)},
		{__EVAL(2200/2500),__EVAL(556/610)},
		{__EVAL(2811/2500),__EVAL(0/610)}
		};

		enginePower	= 134;
		peakTorque	= __EVAL(610*1.5);
		maxOmega	= 261.8;
		minOmega	= 55;
		idleRPM		= 750;
		redRPM		= 2500;

		engineLosses = 11;
		thrustDelay=0.8;
		engineBrakeCoef = 0.3;

		//----- Anti-rollbar Parameters -----//
		antiRollbarForceCoef	= 3.5;
		antiRollbarForceLimit	= 4.5;
		antiRollbarSpeedMin		= 40;
		antiRollbarSpeedMax		= 120;

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
				width					= 0.32;
				steering				= 1;

				mass	= 60;
				MOI		= 10;

				dampingRate				= 3.1;
				dampingRateDamaged		= 1;
				dampingRateDestroyed	= 1000;
				maxBrakeTorque			= 12000;
				maxHandBrakeTorque		= 0;
				maxCompression	= 0.13;
				maxDroop		= 0.11;

				sprungMass = -1;
				springStrength = 135000;
				springDamperRate = 12471;

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
				maxHandBrakeTorque		= 20000;
			};
		};