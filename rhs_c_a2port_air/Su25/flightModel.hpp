// GENERAL
maxSpeed					= 900;

landingAoa            		= DEG2RAD(6.5); // landing angle of attack in radians, for AI
landingSpeed        		= 250; // for AI to approach the runawy, the plane should be stable at this speed

stallSpeed					= 190;
stallWarningTreshold		= 0.07;

wheelSteeringSensitivity	= 1.3; // steering authority of the nose wheel

airBrake 					= 1;
airBrakeFrictionCoef 		= 2.2;
flaps						= 1;
flapsFrictionCoef 			= 0.32;
gearsUpFrictionCoef 		= 0.55;

airFrictionCoefs0[] 		= { 0.0, 0.0, 0.0 };
airFrictionCoefs1[]         = { 0.1, 0.52, 0.0067 };
airFrictionCoefs2[]         = { 0.001, 0.0054, 0.00007};

angleOfIndicence    		= DEG2RAD(-0.5); // difference between forward and airfold chord line in radians
envelope[] =
{
	0.0,	// 0
	0.07,	// 56
	0.28,	// 113
	0.83,	// 169
	1.11,	// 225
	1.74,	// 281
	2.51,	// 338
	3.41,	// 394
	4.46,	// 450
	5.64,	// 506
	6.96,	// 563
	8.42,	// 619
	8.80,	// 675
	9.11,	// 731
	9.38,	// 788
	9.45,	// 844
	9.43,	// 900
	9.0,	// 956
	8.0,	// 1013
	7.0,	// 1069
	6.0		// 1125
};

// THRUST
altNoForce            	= 15000;
altFullForce        	= 4000;
thrustCoef[]        	=
{    //         fSpeed = maxI * speedRel; speedRel = speed / (maxSpeed * 1.5f); maxI = _thrustCoef.Size() - 1;
	1.28,	// 0
	1.33,	// 75
	1.37,	// 150
	1.40,	// 225
	1.41,	// 300
	1.39,	// 375
	1.36,	// 450
	1.33,	// 525
	1.29,	// 600
	1.25,	// 675
	1.20,	// 750
	1.15,	// 825
	1.05,	// 900
	0.5,	// 975
	0.0,	// 1050
	0.0,	// 1125
	0.0,	// 1200
	0.0,	// 1275
	0.0		// 1350
};

// CONTROL SURFACES
aileronSensitivity    	= 0.85;
aileronCoef[]        	=
{
	0.0,	// 0
	0.10,	// 75
	0.30,	// 150
	0.60,	// 225
	0.80,	// 300
	0.95,	// 375
	1.00,	// 450
	1.02,	// 525
	1.03,	// 600
	1.04,	// 675
	1.04,	// 750
	1.00,	// 825
	0.9,	// 900
	0.7,	// 975
	0.3,	// 1050
	0.2,	// 1125
	0.15,	// 1200
	0.1,	// 1275
	0.1		// 1350
};

elevatorSensitivity    	= 0.95;
elevatorCoef[]          =
{
	0.0,	// 0
	0.20,	// 75
	0.95,	// 150
	0.80,	// 225
	0.75,	// 300
	0.70,	// 375
	0.65,	// 450
	0.60,	// 525
	0.55,	// 600
	0.50,	// 675
	0.46,	// 750
	0.32,	// 825
	0.29,	// 900
	0.16,	// 975
	0.14,	// 1050
	0.12,	// 1125
	0.1,	// 1200
	0.09,	// 1275
	0.08	// 1350
};


rudderInfluence        	= 0.9660; 	// Basic angle (cos angle) of the rudder extent
rudderCoef[]        	=     		// default value is fabs(speed.Z())*InvSqrt(Square(speed.X())+Square(speed.Z()));
{
	0.0,	// 0
	0.6,	// 75
	1.2,	// 150
	1.5,	// 225
	1.8,	// 300
	2.0,	// 375
	3.2,	// 450
	3.4,	// 525
	3.45,	// 600
	3.5,	// 675
	3.55,	// 750
	3.6,	// 825
	2.2,	// 900
	1.3,	// 975
	0.3,	// 1050
	0.2,	// 1125
	0.15,	// 1200
	0.1,	// 1275
	0.1		// 1350
};

// CONTROLS - sensitivity/speed in which control surface reaches its maximum extent
aileronControlsSensitivityCoef    	= 3.6;    // default value is 4
elevatorControlsSensitivityCoef     = 3.4;    // default value is 4
rudderControlsSensitivityCoef    	= 3.4;    // default value is 4

// FORCES - how good the airplane changes the flight vector or alignes with it
draconicForceXCoef      = 13; //7.5
draconicForceYCoef      = 1.3; //1
draconicForceZCoef      = 1.0; //1
draconicTorqueXCoef[] =
{
	4.8,	// 0
	5.0,	// 90
	5.5,	// 180
	6.2,	// 270
	6.6,	// 360
	7.4,	// 450
	8.0,	// 540
	8.5,	// 630
	8.0,	// 720
	8.4,	// 810
	8.6,	// 900
	8.7,	// 990
	8.8,	// 1080
	8.9,	// 1170
	9.0,	// 1260
	9.1	// 1350
};
draconicTorqueYCoef[] =
{
	12.0,	// 0
	7.5,	// 75
	4.0,	// 150
	1.5,	// 225
	0.1,	// 300
	0.0,	// 375
	0.0,	// 450
	0.0,	// 525
	0.0,	// 600
	0.0,	// 675
	0.0,	// 750
	0.0,	// 825
	0.0,	// 900
	0.0,	// 975
	0.0,	// 1050
	0.0,	// 1125
	0.0,	// 1200
	0.0,	// 1275
	0.0		// 1350
};