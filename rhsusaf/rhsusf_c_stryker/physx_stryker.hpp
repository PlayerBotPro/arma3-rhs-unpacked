		/// PhysX start
		// ENGINE: Caterpillar 3126B
		// GEARBOX: Allison 3200SP
		simulation 			= CarX;
		thrustDelay			= 0.35;
		brakeIdleSpeed		= 1.78;
		maxSpeed			= 100;
		RHS_FUEL_RANGE(500)
		wheelCircumference		= 3.805;
		waterLeakiness			= 2.5;
		dampersBumpCoef			= 4.5;
		terrainCoef				= 1.5;
		turnCoef				= 3;
		wheelDestroyRadiusCoef	= 0.6;

		normalSpeedForwardCoef	= __EVAL(60/100); // desired speed / max speed
		slowSpeedForwardCoef	= __EVAL(30/100);

		accelAidForceYOffset	= -1.5;

		antiRollbarForceCoef	= 24;
		antiRollbarForceLimit	= 30;
		antiRollbarSpeedMin 	= 15;
		antiRollbarSpeedMax		= 65;


		/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
		// Engine parameters
		/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

		enginePower = __EVAL(260*1.25);
		peakTorque	= __EVAL(1166*1.25);
		idleRpm		= 650; // based on this https://www.youtube.com/watch?v=FSo5mxsaCn8
		redRpm		= 2600;
		maxOmega	= RPM2RADS(2600);
		minOmega	= RPM2RADS(500);

		dampingRateFullThrottle = 0.08;
		dampingRateZeroThrottleClutchEngaged = 2.0;
		dampingRateZeroThrottleClutchDisengaged = 0.05;

		torqueCurve[] =
		{
			{__EVAL(0/2600) , __EVAL(0/1166)},
			{__EVAL(424/2600) , __EVAL(323/1166)},
			{__EVAL(601/2600) , __EVAL(716/1166)},
			{__EVAL(796/2600) , __EVAL(1087/1166)},
			{__EVAL(933/2600) , __EVAL(1166/1166)},
			{__EVAL(1599/2600) , __EVAL(1166/1166)},
			{__EVAL(2532/2600) , __EVAL(927/1166)},
			{__EVAL(3333/2600) , __EVAL(265/1166)}
		};

		/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
		// Gearbox parameters
		/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

		changeGearMinEffectivity[]   = {0.5, 0.15, 0.97, 0.97, 0.97, 0.97, 0.97, 0.985};
		//https://www.allisontransmission.com/docs/default-source/specification-sheets/int3000_sa5341(201306)blk.pdf?sfvrsn=847fbf1c_2
		class complexGearbox
		{
			GearboxRatios[]			= {"R1",-5.03,"N",0,"D1",3.49,"D2",1.86,"D3",1.41,"D4",1,"D5",0.75,"D6",0.65};
			TransmissionRatios[]	= {"High",8};
			AmphibiousRatios[]		= {"R1",-10,"N",0,"D1",30};
			gearBoxMode				= "auto";
			moveOffGear				= 1;
			driveString				= "D";
			neutralString			= "N";
			reverseString			= "R";
		};
		switchTime		= 0.1;
		latency			= 1.4;
		clutchStrength	= 35.0;

		differentialType	= "all_limited";
		frontRearSplit		= 0.5;
		frontBias			= 1.3;
		rearBias			= 1.3;
		centreBias			= 1.3;

		/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
		// Wheels parameters
		/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
		class Wheels
		{
			class L1
			{
				steering				= true;
				side					= "left";
				suspTravelDirection[]	= SUSPTRAVELDIR_LEFT;
				boneName				= "wheel_1_1_damper";
				center					= "wheel_1_1_center";
				boundary				= "wheel_1_1_bound";
				suspForceAppPointOffset = "wheel_1_1_center";
				tireForceAppPointOffset = "wheel_1_1_center";

				width	= 0.275;
				mass	= 187.5;
				MOI		= 60;

				dampingRate				= 0.1;
				dampingRateDamaged		= 1.0;
				dampingRateDestroyed	= 1000.0;

				maxBrakeTorque = 45000;
				maxHandBrakeTorque = 0;

				maxCompression	= 0.1125;
				maxDroop		= 0.15;

				sprungMass			= -1;
				springStrength		= 160000;
				springDamperRate	= 8790;
				longitudinalStiffnessPerUnitGravity = 10000;

				latStiffX = 25;
				latStiffY = 180;

				frictionVsSlipGraph[] = {{0, 1}, {0.5, 1}, {1,1}};
			};
			class L2 : L1
			{
				steering				= true;
				boneName				= "wheel_1_2_damper";
				center					= "wheel_1_2_center";
				boundary				= "wheel_1_2_bound";
				suspForceAppPointOffset	= "wheel_1_2_center";
				tireForceAppPointOffset	= "wheel_1_2_center";
			};
			class L3 : L1
			{
				steering				= false;
				boneName				= "wheel_1_3_damper";
				center					= "wheel_1_3_center";
				boundary				= "wheel_1_3_bound";
				suspForceAppPointOffset	= "wheel_1_3_center";
				tireForceAppPointOffset	= "wheel_1_3_center";
				maxHandBrakeTorque		= 300000;
			};
			class L4 : L1
			{
				steering				= false;
				boneName				= "wheel_1_4_damper";
				center					= "wheel_1_4_center";
				boundary				= "wheel_1_4_bound";
				suspForceAppPointOffset	= "wheel_1_4_center";
				tireForceAppPointOffset	= "wheel_1_4_center";
				maxHandBrakeTorque		= 300000;
			};
			class R1 : L1
			{
				side					= "right";
				suspTravelDirection[]	= SUSPTRAVELDIR_RIGHT;
				boneName				= "wheel_2_1_damper";
				center					= "wheel_2_1_center";
				boundary				= "wheel_2_1_bound";
				suspForceAppPointOffset	= "wheel_2_1_center";
				tireForceAppPointOffset	= "wheel_2_1_center";
			};
			class R2 : R1
			{
				steering				= true;
				boneName				= "wheel_2_2_damper";
				center					= "wheel_2_2_center";
				boundary				= "wheel_2_2_bound";
				suspForceAppPointOffset	= "wheel_2_2_center";
				tireForceAppPointOffset	= "wheel_2_2_center";
			};
			class R3 : R1
			{
				steering				= false;
				boneName				= "wheel_2_3_damper";
				center					= "wheel_2_3_center";
				boundary				= "wheel_2_3_bound";
				suspForceAppPointOffset	= "wheel_2_3_center";
				tireForceAppPointOffset	= "wheel_2_3_center";
				maxHandBrakeTorque		= 300000;
			};
			class R4 : R1
			{
				steering				= false;
				boneName				= "wheel_2_4_damper";
				center					= "wheel_2_4_center";
				boundary				= "wheel_2_4_bound";
				suspForceAppPointOffset	= "wheel_2_4_center";
				tireForceAppPointOffset	= "wheel_2_4_center";
				maxHandBrakeTorque		= 300000;
			};
		};