
// GENERAL
maxSpeed					= 1300; // flight behavior arrays are dependable on this value

landingAoa            		= 5*3.1415/180; // landing angle of attack in radians, for AI
landingSpeed        		= 190; // for AI to approach the runawy, the plane should be stable at this speed

stallSpeed					= 170;
stallWarningTreshold		= 0.5;

wheelSteeringSensitivity	= 2.0; // steering authority of the nose wheel

airBrake 					= 1;
airBrakeFrictionCoef 		= 3.3;
flaps						= 1;
flapsFrictionCoef 			= 0.32;
gearsUpFrictionCoef 		= 0.5;

airFrictionCoefs0[] 		= { 0.0, 0.0, 0.0 };
airFrictionCoefs1[]         = { 0.1, 0.5, 0.0082 };
airFrictionCoefs2[]         = { 0.001, 0.005, 0.000075};

angleOfIndicence    		= 1*3.1415/180; // difference between forward and airfold chord line in radians
envelope[] =
{
	0,
	0.02,
	0.60,
	1.19,
	1.45,
	2.2,
	2.7,
	3.1,
	4.2,
	4.9,
	5.1,
	5.,
	5.6,
	5.75,
	5.82,
	5.9,
	5.95,
	6.0,
	6.03,
	6.05,
	6.07,
	6.08,
	6.09,
	4.0,
	1.5
};

// THRUST
altNoForce            	= 14000;
altFullForce        	= 6000;
thrustCoef[]        	=
{
	1.54,
	1.46,
	1.37,
	1.35,
	1.21,
	1.17,
	1.02,
	0.97,
	0.92,
	0.85,
	0.7,
	0.3,
	0.0,
	0.0,
	0.0,
	0.0
};

// CONTROL SURFACES
aileronSensitivity    	= 1.1;
aileronCoef[]        	=
{
	0.0,
	0.15,
	0.4,
	0.85,
	1.2,
	1.3,
	1.4,
	1.4,
	1.4,
	1.4,
	1.4,
	1.4,
	1.4,
	1.4,
	1.1,
	0.6
};

elevatorSensitivity    	= 1.6;
elevatorCoef[]          =
{
	0.0,
	0.2,
	0.55,
	0.8,
	1.02,
	1.04,
	1.05,
	1.06,
	1.07,
	1.07,
	1.06,
	1.04,
	1.02,
	1.0,
	0.9,
	0.6
};


rudderInfluence        	= 0.8660; 	// Basic angle (cos angle) of the rudder extent
rudderCoef[]        	=
{
	0.0,
	0.6,
	1.0,
	1.5,
	2.0,
	2.2,
	2.3,
	2.3,
	2.0,
	1.6,
	1.0
};

// CONTROLS - sensitivity/speed in which control surface reaches its maximum extent
aileronControlsSensitivityCoef		= 4.0;    // default value is 4
elevatorControlsSensitivityCoef		= 3.5;    // default value is 4
rudderControlsSensitivityCoef		= 4.0;    // default value is 4

// FORCES - how good the airplane changes the flight vector or alignes with it
draconicForceXCoef      = 9.0; //7.5
draconicForceYCoef      = 1.9; //1
draconicForceZCoef      = 1.0; //1
draconicTorqueXCoef[] =
{
	4.8,
	5.0,
	5.5,
	6.2,
	7.0,
	7.7,
	8.4,
	10.1,
	11.0,
	12.0,
	13.0
};
draconicTorqueYCoef[] =
{
	12.0,
	10.0,
	6.0,
	2.0,
	0.2,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0,
	0.0
};