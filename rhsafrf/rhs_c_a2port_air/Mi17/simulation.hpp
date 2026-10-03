
		//symulacja
		//startDuration 		= .35;
		maxspeed = 240;
		fuelCapacity = 1870;
		AGM_fuelCapacity = 1870;
		fuelConsumptionRate=0.3300;

		mainBladeRadius = 11;
		backRotorForceCoef = 0.9;
		tailBladeCenter = "tail_blade_center";
		mainBladeCenter = "main_blade_center";

		altFullForce = 4500;
		altNoForce = 6000;
		mainRotorSpeed=1;

		backrotorspeed = 1;
		liftForceCoef = 1;
		bodyFrictionCoef = 1.25;
		numberPhysicalWheels 	= 3;

		class RotorLibHelicopterProperties: RotorLibHelicopterProperties
		{
			//nice for testing with diag_merge, as xml is readed once upon mission startup
			//RTDconfig = "T:\RHS\rhsafrf\addons\rhs_c_a2port_air\Mi17\RTD_MI8.xml";

			RTDconfig = "rhsafrf\addons\rhs_c_a2port_air\Mi17\RTD_MI8.xml";
			autoHoverCorrection[] = {4.3,-1.7,0};
			defaultCollective = 0.665;
			retreatBladeStallWarningSpeed = 92.583;
			maxTorque = 201754;
			stressDamagePerSec = 0.00333333;
			maxHorizontalStabilizerLeftStress = 10000;
			maxHorizontalStabilizerRightStress = 10000;
			maxVerticalStabilizerStress = 10000;
			horizontalWingsAngleCollMin = 0;
			horizontalWingsAngleCollMax = 0;
			maxMainRotorStress = 320000;
			maxTailRotorStress = 60000;
		};
/*
		class RotorLibHelicopterProperties: RotorLibHelicopterProperties
		{
			RTDconfig="rhsafrf\addons\rhs_a2port_air\Mi17\Mi8-GenHeli600-DesktopSim.xml";
			maxTorque=3569.4;
			starterBatteryDrain=10;
			starterTime=26;
			throttleOffToIdle=15;
			throttleIdleToOff=18;
			throttleIdleToFull=12;
			throttleFullToIdle=20;
			autoHoverCorrection[]={5,4,0};
			retreatBladeStallWarningSpeed=92.583;

			stressDamagePerSec	= 0.0033333332666667; 	// after 300 seconds the damage will be 1

			maxHorizontalStabilizerLeftStress	= 10000;
			maxHorizontalStabilizerRightStress	= 10000;
			maxVerticalStabilizerStress			= 10000;
			horizontalWingsAngleCollMin			= 0;
			horizontalWingsAngleCollMax			= 0;
			maxMainRotorStress 					= 130000;
			maxTailRotorStress 					= 10000;
		};*/
