		maxSpeed					= 800;
		landingAoa					= __EVAL(3*3.1415/180);
		landingSpeed				= 215;
		stallSpeed					= 148;
		stallWarningTreshold		= 0.1;
		wheelSteeringSensitivity	= 2;
		airBrake					= 1;
		airBrakeFrictionCoef		= 2.2;
		flaps						= 1;
		flapsFrictionCoef			= 0.32;
		gearsUpFrictionCoef			= 0.6;
		airFrictionCoefs0[]			= {0,0,0};
		airFrictionCoefs1[]			= {0.1,0.5,0.0066};
		airFrictionCoefs2[]			= {0.001,0.005,0.000067};
		angleOfIndicence			= __EVAL(-2*3.1415/180);

		/// envelope defines lift produced by the shape of the plane according to current speed relative to maxSpeed
		/// the first element of the array is for zero speed, the last for 125 % of maxSpeed, the rest in between is evenly distributed
		/// there may be as many elements as you wish, using 13 should be preferred as it modulates the 10% increase with reasonable error
		/// this setting is linked to geometry LOD in the model, and usees the weight data from GEO LOD
		envelope[]					=
		{
			0,
			0.05,
			0.6,
			0.9,
			1.4,
			1.8,
			2.1,
			2.40,
			2.88,
			3.65,
			4.5,
			5.45,
			6.48,
			7.61,
			8.1,
			8.3,
			8.4,
			8.3,
			8,
			7.6,
			7
		};
		altNoForce					= 10680;
		altFullForce				= 2000;
		/// rudder, elevator, aileron, thrust effectiveness; if empty old settings is used
		/// effectiveness according to current speed and maxSpeed ratio
		/// last value goes for 150% of max speed
		thrustCoef[]				=
		{
			1.22,
			1.28,
			1.34,
			1.35,
			1.35,
			1.4,
			1.49,
			1.01,
			0.57,
			0.37,
			0.26,
			0.16,
			0.1,
			0,
			0,
			0,
			0
		};
		aileronSensitivity			= 0.7;
		aileronCoef[]				=
		{
			0,
			0.11,
			0.445,
			0.81,
			1.0,
			1.05,
			1.1,
			1.15,
			1.2,
			1.3,
			1.3,
			1.33,
			1.35,
			1.34,
			1.29,
			1.2,
			0.800
		};
		elevatorSensitivity			= 0.95;
		elevatorCoef[]				=
		{
			0,
			0.14,
			0.54,
			0.62,
			0.588,
			0.56,
			0.54,
			0.52,
			0.489,
			0.430,
			0.38,
			0.35,
			0.300,
			0.25,
			0.2,
			0.150,
			0.1
		};
		rudderInfluence				= 0.866;
		rudderCoef[]				=
		{
			0,
			0.800,
			2,
			2.2,
			2.3,
			2.40,
			2.3,
			2.2,
			2.1,
			2,
			1.2
		};
		aileronControlsSensitivityCoef	= 3.5;
		elevatorControlsSensitivityCoef	= 3.0;
		rudderControlsSensitivityCoef	= 3.8;
		draconicForceXCoef				= 12;
		draconicForceYCoef				= 1.4;
		draconicForceZCoef				= 1;
		draconicTorqueXCoef[]			=
		{
			4.8,
			5,
			5.5,
			6.2,
			7,
			7.7,
			9.4,
			11.1,
			12,
			14,
			15
		};
		draconicTorqueYCoef[]		=
		{
			12,
			10,
			6,
			2,
			0.2,
			0,
			0,
			0,
			0,
			0,
			0,
			0,
			0,
			0,
			0,
			0,
			0
		};