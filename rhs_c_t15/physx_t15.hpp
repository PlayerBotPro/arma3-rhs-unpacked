// GENERAL
	simulation				= tankX;
	brakeIdleSpeed			= 0.1; 					// in m/s, forced handbrake when slower
	maxSpeed				= 70;
	normalSpeedForwardCoef 	= 0.75;					// thrust value for W
	slowSpeedForwardCoef 	= 0.25; 				// thrust value for CTRL+W
	waterResistanceCoef 	= 0.25;

// ENGINE
	enginePower		= 1120;							// in kW, 		1500hp A-85-3A
	maxOmega 		= __EVAL((2400)/(60/(2*PI)));	// in rad/s,
	minOmega		= __EVAL((1000)/(60/(2*PI)));	// in rad/s, tactical idle
	redRpm 			= 2400;							// max rpm for audio only
	idleRpm 		= 1000;							// min rpm for audio only
	peakTorque 		= 5500;							// in Nm, 3900+ lb-ft at 2000rpm
	torqueCurve[] 	= {
		{__EVAL(1000/2400)	, __EVAL(4200/5500)},
		{__EVAL(1200/2400)	, __EVAL(4900/5500)},
		{__EVAL(1400/2400)	, __EVAL(5050/5500)},
		{__EVAL(1600/2400)	, __EVAL(5400/5500)},
		{__EVAL(1800/2400)	, __EVAL(5500/5500)},
		{__EVAL(2000/2400)	, __EVAL(5300/5500)},
		{__EVAL(2200/2400)	, __EVAL(4750/5500)},
		{__EVAL(2400/2400)	, __EVAL(3600/5500)}
	};
	thrustDelay								= 0.5;	// time it takes from 0 thrust to 1 wanted thrust
	engineMOI								= 20.0;
	dampingRateFullThrottle 				= 2.5;	// engine braking with thrust 1
	dampingRateZeroThrottleClutchEngaged 	= 8.0;	// engine braking with thrust 0
	dampingRateZeroThrottleClutchDisengaged = 2.0; // engine braking in neutral/open clutch


// DRIVETRAIN
	clutchStrength 				= 60.0;
	latency 					= 0.5;				// time to stay in a gear
	switchTime					= 0;				// time off gear when switching
	changeGearType 				= "rpmratio";		// condition for switching gears
	changeGearOmegaRatios[] = {						// rpm ratio max/min pair
		__EVAL(2400/2400)	, __EVAL(1400/2400),
		__EVAL(1000/2400)	, __EVAL(1000/2400),
		__EVAL(2300/2400)	, __EVAL(1000/2400),
		__EVAL(2250/2400)	, __EVAL(1750/2400),
		__EVAL(2200/2400)	, __EVAL(1700/2400),
		__EVAL(2200/2400)	, __EVAL(1700/2400),
		__EVAL(2200/2400)	, __EVAL(1700/2400),
		__EVAL(2200/2400)	, __EVAL(1600/2400),
		__EVAL(2400/2400)	, __EVAL(1500/2400)
    };
	class complexGearbox
	{
		GearboxRatios[]	= {
			"R1",	-4.5,
			"N"	,	0,
			"D1",	7.8,
			"D2",	5.6,
			"D3",	4.0,
			"D4",	2.9,
			"D5",	2.1,
			"D6",	1.50,
			"D7",	1.1
		};
		transmissionRatios[]	= {"High",5.5};		// remaining drivetrain ratios (final drive)
		gearBoxMode        		= "auto";
		moveOffGear        		= 1;
		driveString        		= "D";
		neutralString      		= "N";
		reverseString      		= "R";
	};

// ARTIFICIAL FORCES
	tankTurnForce			= 1.5e6;				// initial force applied to turning in [0,tankTurnForceAngMinSpd] ang. speed range
	tankTurnForceAngMinSpd	= __EVAL(45*(PI/180)));	// in rad/s, speed where tankTurnForce starts fading to 0 @ tankTurnForceAngSpd
	tankTurnForceAngSpd		= __EVAL(48*(PI/180))); // in rad/s, angular speed where tankTurnForce becomes 0
	accelAidForceCoef		= 2.5;					// acceleration aid force
	accelAidForceYOffset	= -2.0;					// Y offset from the CoG where to apply the accelAidForce
	accelAidForceSpd		= 1.4;					// in m/s, speed where accelAidForceCoef becomes 0

// WHEELS
	class Wheels
	{
	// LEFT SIDE
		class L2
		{
			side 					= "left";
			suspTravelDirection[]	= SUSPTRAVELDIR_LEFT;
			boneName	= "wheel_podkoloL1";
			center		= "wheel_1_2_axis";
			boundary	= "wheel_1_2_bound";
			steering	= false;
			width					= 0.5;
			mass					= 160;
			MOI						= __EVAL(0.5*160*(0.4^2));

			dampingRate				= 960.0;
			dampingRateInAir		= 960.0;
			dampingRateDestroyed	= 3000.0;

			maxDroop				= 0.18;
			maxCompression			= 0.18;
			sprungMass				= 6000;
			springStrength			= 600000;
			springDamperRate		= 45000;
			maxBrakeTorque			= 45000;
			latStiffX				= 1.5;
			latStiffY				= 60;
			longitudinalStiffnessPerUnitGravity = 13000;
			frictionVsSlipGraph[]	= {
				{0.0, 	0.55},
				{0.1, 	1.55},
				{0.6, 	0.9}
			};
		};
		class L3 : L2
		{
			boneName = "wheel_podkolol2";
			center   = "wheel_1_3_axis";
			boundary = "wheel_1_3_bound";
		};
		class L4 : L2
		{
			boneName = "wheel_podkolol3";
			center   = "wheel_1_4_axis";
			boundary = "wheel_1_4_bound";
		};
		class L5 : L4
		{
			boneName = "wheel_podkolol4";
			center   = "wheel_1_5_axis";
			boundary = "wheel_1_5_bound";

		};
		class L6 : L4
		{
			boneName = "wheel_podkolol5";
			center   = "wheel_1_6_axis";
			boundary = "wheel_1_6_bound";
		};
		class L7 : L2
		{
			boneName = "wheel_podkolol6";
			center   = "wheel_1_7_axis";
			boundary = "wheel_1_7_bound";
		};
		class L8 : L2
		{
			boneName = "wheel_podkolol7";
			center   = "wheel_1_8_axis";
			boundary = "wheel_1_8_bound";
		};
		// rear left wheel, usually Idler or Drive Sproket
		// Note, this wheel may not always be touching the ground, but we need it anyway!
		class L9 : L2
		{
			boneName = "wheel_podkolol9";
			center   = "wheel_1_9_axis";
			boundary = "wheel_1_9_bound";
			maxDroop = 0.01;
			maxCompression = 0.01;
		};
		// front left wheel, usually Idler or Drive Sproket
		// Note, this wheel may not always be touching the ground, but we need it anyway!
		class L1: L2
		{
			boneName = "";
			center   = "wheel_1_1_axis";
			boundary = "wheel_1_1_bound";
			maxDroop = 0.01;
			maxCompression = 0.01;
		};
	// RIGHT SIDE
		class R2 : L2
		{
			side 					= "right";
			suspTravelDirection[]	= SUSPTRAVELDIR_RIGHT;
			boneName = "wheel_podkolop1";
			center   = "wheel_2_2_axis";
			boundary = "wheel_2_2_bound";
		};
		class R3 : R2
		{
			boneName = "wheel_podkolop2";
			center   = "wheel_2_3_axis";
			boundary = "wheel_2_3_bound";
		};
		class R4 : R2
		{
			boneName = "wheel_podkolop3";
			center   = "wheel_2_4_axis";
			boundary = "wheel_2_4_bound";
		};
		class R5 : R2
		{
			boneName = "wheel_podkolop4";
			center   = "wheel_2_5_axis";
			boundary = "wheel_2_5_bound";
		};
		class R6 : R2
		{
			boneName = "wheel_podkolop5";
			center   = "wheel_2_6_axis";
			boundary = "wheel_2_6_bound";
		};
		class R7 : R2
		{
			boneName = "wheel_podkolop6";
			center   = "wheel_2_7_axis";
			boundary = "wheel_2_7_bound";
		};
		class R8 : R2
		{
			boneName = "wheel_podkolop7";
			center   = "wheel_2_8_axis";
			boundary = "wheel_2_8_bound";
		};
		// rear right wheel, usually Idler or Drive Sproket
		// Note, this wheel may not always be touching the ground, but we need it anyway!
		class R9 : R2
		{
			boneName = "wheel_podkolop9";
			center   = "wheel_2_9_axis";
			boundary = "wheel_2_9_bound";
			maxDroop = 0.01;
			maxCompression = 0.01;
		};
		// front right wheel, usually Idler or Drive Sproket
		// Note, this wheel may not always be touching the ground, but we need it anyway!
		class R1 : R2
		{
			boneName = "";
			center   = "wheel_2_1_axis";
			boundary = "wheel_2_1_bound";
			maxDroop = 0.01;
			maxCompression = 0.01;
		};
	};