	/// PhysX part
normalSpeedForwardCoef	= 0.75;					// thrust value for W
slowSpeedForwardCoef	= 0.25; 				// thrust value for CTRL+W
RHS_FUEL_RANGE(590)
RHS_fuelCapacity		= 1200;
brakeIdleSpeed			= 1.78; 	/// speed in m/s below which braking is applied

maxSpeed = 68;

torqueCurve[] = {
{__EVAL(0/2300),__EVAL(0/3334)},
{__EVAL(1100/2300),__EVAL(2845/3334)},
{__EVAL(1200/2300),__EVAL(3290/3334)},
{__EVAL(1300/2300),__EVAL(3334/3334)},
{__EVAL(1400/2300),__EVAL(3334/3334)},
{__EVAL(1600/2300),__EVAL(3270/3334)},
{__EVAL(2000/2300),__EVAL(2950/3334)},
{__EVAL(3300/2300),__EVAL(0/3334)}
};
// V-92S2F
// http://igorrgroup.blogspot.nl/2011/09/russian-prospective-tank-engine.html
// http://3.bp.blogspot.com/-A15lSmFjY3E/Tm2pnAtWuQI/AAAAAAAAATw/rm7Cpk0TZHw/s1600/0105+%25D0%25BA%25D0%25BE%25D0%25BF%25D0%25B8%25D1%258F.jpg
engineMOI 	= 17;
enginePower	= 736;
peakTorque	= 3920;
minOmega 	= 80;
maxOmega	= 240.86;
idleRPM		= 800;
redRPM		= 2300;

// DRIVETRAIN
changeGearOmegaRatios[] = {						// rpm ratio max/min pair
	__EVAL(2300/2300)	, __EVAL(1000/2300),
	__EVAL(1000/2300)	, 0,
	__EVAL(2200/2300)	, __EVAL(1000/2300),
	__EVAL(2200/2300)	, __EVAL(1800/2300),
	__EVAL(2100/2300)	, __EVAL(1800/2300),
	__EVAL(2100/2300)	, __EVAL(1800/2300),
	__EVAL(2000/2300)	, __EVAL(1700/2300),
	__EVAL(1900/2300)	, __EVAL(1600/2300),
	__EVAL(2300/2300)	, __EVAL(1400/2300)
};
class complexGearbox {
	GearboxRatios[] =
	{
		"R1",	-16.35,
		"N",	0,
		"D1",	8.173,
		"D2",	4.4,
		"D3",	3.485,
		"D4",	2.787,
		"D5",	2.027,
		"D6",	1.467,
		"D7",	1
	};
	TransmissionRatios[] = {"High",9.05};
	gearBoxMode        = "auto";
	moveOffGear        = 1;
	driveString        = "D";
	neutralString      = "N";
	reverseString      = "R";
	transmissionDelay  = 0.1;
};
/// end of gearbox

class Wheels: Wheels {
	class L2: L2 {
		width 		= __EVAL(0.56*0.9);
		MOI			= __EVAL(1.1*(0.5*193*(0.401^2)));		// radius 0.378626m
		sprungMass			= -1;

		dampingRate				= 3143.0;
		dampingRateInAir		= 3143.0;
	};
	class L3: L2 {
		boneName = "wheel_podkolol2";
		center   = "wheel_1_3_axis";
		boundary = "wheel_1_3_bound";
	};
	class L4: L2 {
		boneName = "wheel_podkolol3";
		center   = "wheel_1_4_axis";
		boundary = "wheel_1_4_bound";
	};
	class L5: L2 {
		boneName = "wheel_podkolol4";
		center   = "wheel_1_5_axis";
		boundary = "wheel_1_5_bound";
	};
	class L6: L2 {
		boneName = "wheel_podkolol5";
		center   = "wheel_1_6_axis";
		boundary = "wheel_1_6_bound";
	};
	class L7: L2 {
		boneName = "wheel_podkolol6";
		center   = "wheel_1_7_axis";
		boundary = "wheel_1_7_bound";
	};
	// rear left wheel, usually Idler or Drive Sproket
	// Note, this wheel may not always be touching the ground, but we need it anyway!
	class L9: L2 {
		boneName = "wheel_podkolol9";
		center   = "wheel_1_9_axis";
		boundary = "wheel_1_9_bound";
		maxDroop = 0;
		maxCompression = 0;
	};
	// front left wheel, usually Idler or Drive Sproket
	// Note, this wheel may not always be touching the ground, but we need it anyway!
	class L1: L2 {
		boneName = "";
		center   = "wheel_1_1_axis";
		boundary = "wheel_1_1_bound";
		maxDroop = 0;
		maxCompression = 0;
	};

	class R2: L2 {
		boneName = "wheel_podkolop1";
		center   = "wheel_2_2_axis";
		boundary = "wheel_2_2_bound";
		side = "right";
	};
	class R3: R2 {
		boneName = "wheel_podkolop2";
		center   = "wheel_2_3_axis";
		boundary = "wheel_2_3_bound";
	};
	class R4: R2 {
		boneName = "wheel_podkolop3";
		center   = "wheel_2_4_axis";
		boundary = "wheel_2_4_bound";
	};
	class R5: R2 {
		boneName = "wheel_podkolop4";
		center   = "wheel_2_5_axis";
		boundary = "wheel_2_5_bound";
	};
	class R6: R2 {
		boneName = "wheel_podkolop5";
		center   = "wheel_2_6_axis";
		boundary = "wheel_2_6_bound";
	};
	class R7: R2 {
		boneName = "wheel_podkolop6";
		center   = "wheel_2_7_axis";
		boundary = "wheel_2_7_bound";
	};
	// rear right wheel, usually Idler or Drive Sproket
	// Note, this wheel may not always be touching the ground, but we need it anyway!
	class R9: R2 {
		boneName = "wheel_podkolop9";
		center   = "wheel_2_9_axis";
		boundary = "wheel_2_9_bound";
		maxDroop = 0;
		maxCompression = 0;
	};
	// front right wheel, usually Idler or Drive Sproket
	// Note, this wheel may not always be touching the ground, but we need it anyway!
	class R1: R2 {
		boneName = "";
		center   = "wheel_2_1_axis";
		boundary = "wheel_2_1_bound";
		maxDroop = 0;
		maxCompression = 0;
	};
};
/// End of PhysX