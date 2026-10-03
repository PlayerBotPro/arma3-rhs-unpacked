
		//symulacja
		maxSpeed=585;
		//simulation="helicopterRTD";
		fuelCapacity = 2130;
		AGM_fuelCapacity = 2130;
		fuelConsumptionRate=0.50;

		mainBladeRadius = 7.0;
		tailBladeRadius=1.5;
		tailBladeVertical=1;
		tailBladeCenter = "mala osa";
		mainBladeCenter = "rotor_center";
		bodyFrictionCoef = 0.52;
		backRotorForceCoef = 1.0;
		liftForceCoef = 2.0;

		altFullForce = 4000;
		altNoForce = 6000;
		mainRotorSpeed=1;
		backrotorspeed = 1;
		numberPhysicalWheels 	= 3;

		class RotorLibHelicopterProperties: RotorLibHelicopterProperties
		{
			rtd_center = "rtd_center";
			//RTDconfig = "A3\Air_F_Beta\Heli_Attack_02\RTD_Heli_Attack_02.xml";
			//RTDconfig="G:\Projekty\Arma3\rhsafrf\addons\rhs_c_a2port_air\Mi35\RTD_Mi24.xml";
//completly wrong yet suspension is a little bit better
			//RTDconfig="rhsafrf\addons\rhs_c_a2port_air\Mi35\RTD_Mi24.xml";
			RTDconfig="rhsafrf\addons\rhs_c_a2port_air\Mi35\RTD_mi24.xml";
			maxTorque=201754;
			maxMainRotorStress=320000;
			maxTailRotorStress=60000;
			maxHorizontalStabilizerLeftStress=12000;
			maxHorizontalStabilizerRightStress=12000;
			maxVerticalStabilizerStress=8000;
			defaultCollective=0.75;
			autoHoverCorrection[]={6,-1,0};
			retreatBladeStallWarningSpeed=93.056;
			horizontalWingsAngleCollMin=-12.5;
			horizontalWingsAngleCollMax=7.5;
			stressDamagePerSec=0.0033333332;
		};
/*
		class RotorLibHelicopterProperties: RotorLibHelicopterProperties
		{
			RTDconfig="rhsafrf\addons\rhs_a2port_air\Mi17\Mi8-GenHeli600-DesktopSim.xml";
			maxTorque=5370;
			maxMainRotorStress=5;
			maxTailRotorStress=20000;
			throttleOffToIdle=15;
			throttleIdleToOff=18;
			throttleIdleToFull=12;
			throttleFullToIdle=20;
			autoHoverCorrection[]={5,4,0};
			retreatBladeStallWarningSpeed=92.583;
		};*/