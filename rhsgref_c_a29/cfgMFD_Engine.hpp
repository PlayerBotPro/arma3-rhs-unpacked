#define PosX0Center 0.50 // 502
#define PosY0Center 0.50 // 49
#define SizeX10deg 0.186
#define SizeY10deg 0.141

MFD_MEMORY_MACRO(MFD_MEMORY_POINTS)
borderLeft				= 0;
borderRight				= 0;
borderTop				= 0;
borderBottom			= 0;
color[]					= {1.0, 1.0, 1.0, 1.0};
helmetMountedDisplay	= false;
helmetPosition[]		= {-0.0375,	0.0375,	0.1};
helmetRight[]			= {0.075,	0.0,	0.0};
helmetDown[]			= {0.0,		-0.075,	0.0};
font					= rhsusf_txled;
turret[]				= {-2};
MFD_MATERIAL


class Bones
{
	class TQ_Center
	{
		type	= fixed;
		pos[]	= {0.227, 0.293};
	};
	class TQ_Center_Rotate
	{
		type		= rotational;
		source		= throttle;
		sourceScale	= 1;
		center[]	= {0.227, 0.293};
		min			= 0.2;
		max			= 1;
		minAngle	= __EVAL(-360-60);
		maxAngle	= __EVAL(-360+180);
		aspectRatio	= __EVAL(SizeY10deg/SizeX10deg);
	};
	class T5_Center
	{
		type	= fixed;
		pos[]	= {0.518, 0.293};
	};
	class T5_Center_Rotate: TQ_Center_Rotate
	{
		source		= rpm;
		min			= 0;
		max			= 1;
		maxAngle	= __EVAL(-360+140);
		center[]	= {0.518, 0.293};
	};
	class Roll_Center
	{
		type	= fixed;
		pos[]	= {0.105, 0.64};
	};
	class Roll_Center_Rotate: TQ_Center_Rotate
	{
		source		= horizonBank;
		min			= rad(-45);
		max			= rad(45);
		minAngle	= __EVAL(-360+45);
		maxAngle	= __EVAL(-360-45);
		center[]	= {0.105, 0.64};
	};
	class Pitch_Center_Linear
	{
		type			= linear;
		source			= horizonDive;
		sourceScale		= 57.2957795;
		min				= -30;
		max				= 30;
		minPos[]		= {0, __EVAL(-0.085/2)};
		maxPos[]		= {0, __EVAL(0.085/2)};
	};
	class Yaw_Center_Linear
	{
		refreshRate = 0.3;
		type			= linear;
		source			= gmeterX;
		sourceScale		= 3;
		min				= -25;
		max				= 25;
		minPos[]		= {__EVAL(0.085/2), 0};
		maxPos[]		= {__EVAL(-0.085/2), 0};
	};
	class Fuel_Center
	{
		type	= fixed;
		pos[]	= {0.646, 0.71};
	};
	class FuelFlowRot1
	{
		type			= rotational;
		source			= fuel;
		sourceScale		= 8.5;
		center[]		= {0, 0};
		min				= 0;
		max				= 1;
		minAngle		= -92;
		maxAngle		= __EVAL(-120+ 170 * 0.05);
		aspectRatio		= __EVAL(1 / XtoYscale);
	};
	#define MISSILEFLIGHTTIME_ROT_MACRO(XX) 				\
	class FuelFlowRot##XX##: FuelFlowRot1	\
	{														\
		maxAngle		= __EVAL(-120+17 * (##XX##/2) );			\
		max  			= __EVAL(1 * (##XX##/2));			\
	};
	MISSILEFLIGHTTIME_ROT_MACRO(2)
	MISSILEFLIGHTTIME_ROT_MACRO(3)
	MISSILEFLIGHTTIME_ROT_MACRO(4)
	MISSILEFLIGHTTIME_ROT_MACRO(5)
	MISSILEFLIGHTTIME_ROT_MACRO(6)
	MISSILEFLIGHTTIME_ROT_MACRO(7)
	MISSILEFLIGHTTIME_ROT_MACRO(8)
	MISSILEFLIGHTTIME_ROT_MACRO(9)
	MISSILEFLIGHTTIME_ROT_MACRO(10)
	MISSILEFLIGHTTIME_ROT_MACRO(11)
	MISSILEFLIGHTTIME_ROT_MACRO(12)
	MISSILEFLIGHTTIME_ROT_MACRO(13)
	MISSILEFLIGHTTIME_ROT_MACRO(14)
	MISSILEFLIGHTTIME_ROT_MACRO(15)
	MISSILEFLIGHTTIME_ROT_MACRO(16)
	MISSILEFLIGHTTIME_ROT_MACRO(17)
};
class Draw
{
	alpha				= 1.0;
	color[]				= {0,0.12,0};
	MFD_CONDITION(MFD_CONDITION_NUMBER,0)
	class DarkBlue
	{
		color[] = {0,0.01,0.08};
		class Lines
		{
			type = line;
			width = 12;
			points[] =
			{
				{{0.025,0.92},1},
				{{0.975,0.92},1},{},
				{{0.025,0.495},1},
				{{0.975,0.495},1},{},
				{{0.025,0.775},1},
				{{0.445,0.775},1},{},
				{{0.445,0.92},1},
				{{0.445,0.495},1},{},
				{{0.005,0.185},1},
				{{0.135,0.185},1},
				{{0.135,0.153},1},
				{{0.932,0.153},1},
				{{0.932,0.185},1},
				{{0.99,0.185},1},{},
				{{0.545,0.495},1},
				{{0.545,0.41},1},
				{{0.975,0.41},1},{},
				{{0.705,0.41},1},
				{{0.705,0.153},1},{},
			};
		};
	};
	class White
	{
		color[] = {1,1,1};
		alpha = 0.4;

		HUD_TEXT_STATIC(0.105,	0.538	,0.022,0.015,center,"ROLL",TxtRoll)
		HUD_TEXT_STATIC(0.221,	0.538	,0.022,0.015,center,"PITCH",TxtPitch)
		HUD_TEXT_STATIC(0.37,	0.538	,0.022,0.015,center,"YAW",TxtYaw)
		HUD_TEXT_STATIC(0.13,	0.675	,0.024,0.018,center,"FLAPS",TxtFlaps)
		HUD_TEXT_STATIC(0.31,	0.675	,0.024,0.018,center,"SPDBRK",TxtSpeedBrake)
		HUD_TEXT_STATIC(0.22,	0.83	,0.022,0.015,center,"HYD",TxtHyd)
		HUD_TEXT_STATIC(0.35,	0.83	,0.022,0.015,center,"CAB ALT",TxtCabAlt)

		HUD_TEXT_STATIC(0.65,	0.765	,0.035,0.03,center,"FUEL",TxtFuel)
		HUD_TEXT_STATIC(0.53,	0.825	,0.025,0.02,center,"L",TxtFuel1)
		HUD_TEXT_STATIC(0.76,	0.825	,0.025,0.02,center,"R",TxtFuel2)

		HUD_TEXT_STATIC(0.615,	0.43	,0.022,0.015,center,"AMP",TxtAMP)
		HUD_TEXT_STATIC(0.76,	0.43	,0.022,0.015,center,"VOLT",TxtVOLT)
		HUD_TEXT_STATIC(0.905,	0.43	,0.022,0.015,center,"BATT",TxtBat)

		HUD_TEXT_STATIC(0.924,	0.572	,0.022,0.015,center,"DETOT",TxtDetot)
		HUD_TEXT_STATIC(0.924,	0.776	,0.022,0.015,center,"JOKER",TxtJoker)

		HUD_TEXT_STATIC(0.54,	0.536	,0.022,0.015,center,"FF",TxtFuelFlow1)
		HUD_TEXT_STATIC(0.74,	0.536	,0.022,0.015,center,"KG/HR",TxtFuelFlow2)

		HUD_TEXT_STATIC(0.845,	0.165	,0.035,0.027,center,"OIL",TxtOil)
		HUD_TEXT_STATIC(0.79,	0.21	,0.022,0.015,center,"PRES",TxtOilPress)
		HUD_TEXT_STATIC(0.89,	0.21	,0.022,0.015,center,"TEMP",TxtOilTemp)

		HUD_TEXT_STATIC(0.23,	0.165		,0.035,0.027,center,"TQ %",TxtTorquePerc)
		HUD_TEXT_STATIC(0.29,	0.315		,0.023,0.017,center,"2",TxtTorqueN1)
		HUD_TEXT_STATIC(0.225,	0.34		,0.023,0.017,center,"4",TxtTorqueN2)
		HUD_TEXT_STATIC(0.165,	0.315		,0.023,0.017,center,"6",TxtTorqueN3)
		HUD_TEXT_STATIC(0.165,	0.255		,0.023,0.017,center,"8",TxtTorqueN4)
		HUD_TEXT_STATIC(0.23,	0.23		,0.023,0.017,center,"10",TxtTorqueN5)
		HUD_TEXT_STATIC(0.285,	0.255		,0.023,0.017,center,"12",TxtTorqueN6)
		HUD_TEXT_STATIC(0.515,	0.165		,0.023,0.017,center,"T5  C",TxtTempDeg)
		HUD_TEXT_STATIC(0.515+0.019,	0.165-0.007	,0.025,0.017,center,"o",TxtTempDegC)
		HUD_TEXT_STATIC(0.29+ 0.29,	0.315		,0.023,0.017,center,"2",TxtTempN1)
		HUD_TEXT_STATIC(0.29+ 0.225,	0.34		,0.023,0.017,center,"4",TxtTempN2)
		HUD_TEXT_STATIC(0.29+ 0.165,	0.315		,0.023,0.017,center,"6",TxtTempN3)
		HUD_TEXT_STATIC(0.29+ 0.165,	0.255		,0.023,0.017,center,"8",TxtTempN4)
		HUD_TEXT_STATIC(0.29+ 0.23,	0.23		,0.023,0.017,center,"10",TxtTempN5)
		HUD_TEXT_STATIC(0.29+ 0.285,	0.255		,0.023,0.017,center,"12",TxtTempN6)

		HUD_TEXT_STATIC(0.3,	0.41	,0.04,0.03,center,"NG %",TxtNGPerc)
		HUD_TEXT_STATIC(0.185,	0.465	,0.027,0.017,center,"NP %",TxtNPPerc)
		HUD_TEXT_STATIC(0.05,	0.385	,0.027,0.017,center,"OAT",TxtOAT)
		class Polygon
		{
			type = polygon;
			points[] =
			{
				// Arrow Roll
				{
					{Roll_Center_Rotate, {__EVAL(-0.008), 	__EVAL(0 	+ 	0.05)}, 1},
					{Roll_Center_Rotate, {__EVAL(0.00), 	__EVAL(0.015 + 	0.05)}, 1},
					{Roll_Center_Rotate, {__EVAL(+0.008), 	__EVAL(0 	+ 	0.05)}, 1},
				},

				// Arrow Pitch
				{
					{Pitch_Center_Linear, {__EVAL(-0.0		+ 0.22), 	__EVAL(0.007 	+ 	0.565+0.085/2)}, 1},
					{Pitch_Center_Linear, {__EVAL(-0.012	+ 0.22), 	__EVAL(0 		+ 	0.565+0.085/2)}, 1},
					{Pitch_Center_Linear, {__EVAL(+0.0		+ 0.22), 	__EVAL(-0.007 	+ 	0.565+0.085/2)}, 1},
				},
				// Arrow Yaw
				{
					{Yaw_Center_Linear, {__EVAL(-0.008	+ 0.318+0.1/2), 	__EVAL(0 		+ 	0.57)}, 1},
					{Yaw_Center_Linear, {__EVAL(0.00	+ 0.318+0.1/2), 	__EVAL(0.015 	+ 	0.57)}, 1},
					{Yaw_Center_Linear, {__EVAL(+0.008	+ 0.318+0.1/2), 	__EVAL(0 		+ 	0.57)}, 1},
				},
			};
		};
		class Static
		{
			type = line;
			width = 3;
			points[] =
			{
				//CIRCLE_BIG(Fuel_Center,0.14),{},
				#define SizeIn 0.1
				#define SizeOut 0.14
				#define SizeOut2 0.155
				#define StepSize 11.25

				CIRCLE_MARK(Fuel_Center,SizeIn,SizeOut2, 	-90-StepSize*2),{},
				CIRCLE_MARK(Fuel_Center,SizeIn,SizeOut2, 	-90+StepSize*18),{},

				POINT_MARK(Fuel_Center,SizeOut, -90-StepSize*2),
				POINT_MARK(Fuel_Center,SizeOut, -90-StepSize*1),
				POINT_MARK(Fuel_Center,SizeOut, -90+StepSize*0),
				POINT_MARK(Fuel_Center,SizeOut, -90+StepSize*1),
				POINT_MARK(Fuel_Center,SizeOut, -90+StepSize*2),
				POINT_MARK(Fuel_Center,SizeOut, -90+StepSize*3),
				POINT_MARK(Fuel_Center,SizeOut, -90+StepSize*4),
				POINT_MARK(Fuel_Center,SizeOut, -90+StepSize*5),
				POINT_MARK(Fuel_Center,SizeOut, -90+StepSize*6),
				POINT_MARK(Fuel_Center,SizeOut, -90+StepSize*7),
				POINT_MARK(Fuel_Center,SizeOut, -90+StepSize*8),
				POINT_MARK(Fuel_Center,SizeOut, -90+StepSize*9),
				POINT_MARK(Fuel_Center,SizeOut, -90+StepSize*10),
				POINT_MARK(Fuel_Center,SizeOut, -90+StepSize*11),
				POINT_MARK(Fuel_Center,SizeOut, -90+StepSize*12),
				POINT_MARK(Fuel_Center,SizeOut, -90+StepSize*13),
				POINT_MARK(Fuel_Center,SizeOut, -90+StepSize*14),
				POINT_MARK(Fuel_Center,SizeOut, -90+StepSize*15),
				POINT_MARK(Fuel_Center,SizeOut, -90+StepSize*16),
				POINT_MARK(Fuel_Center,SizeOut, -90+StepSize*17),
				POINT_MARK(Fuel_Center,SizeOut, -90+StepSize*18),{},
				CIRCLE_MARK(Fuel_Center,SizeOut,SizeOut2, 	-90-StepSize*1),{},
				CIRCLE_MARK(Fuel_Center,SizeOut,SizeOut2, 	-90+StepSize*1),{},
				CIRCLE_MARK(Fuel_Center,SizeOut,SizeOut2, 	-90+StepSize*3),{},
				CIRCLE_MARK(Fuel_Center,SizeOut,SizeOut2, 	-90+StepSize*5),{},
				CIRCLE_MARK(Fuel_Center,SizeOut,SizeOut2, 	-90+StepSize*7),{},
				CIRCLE_MARK(Fuel_Center,SizeOut,SizeOut2, 	-90+StepSize*9),{},
				CIRCLE_MARK(Fuel_Center,SizeOut,SizeOut2, 	-90+StepSize*11),{},
				CIRCLE_MARK(Fuel_Center,SizeOut,SizeOut2, 	-90+StepSize*13),{},
				CIRCLE_MARK(Fuel_Center,SizeOut,SizeOut2, 	-90+StepSize*15),{},
				CIRCLE_MARK(Fuel_Center,SizeOut,SizeOut2, 	-90+StepSize*17),{},

				#define SizeOut 0.12
				POINT_MARK(Fuel_Center,SizeOut, -90-StepSize*2),
				POINT_MARK(Fuel_Center,SizeOut, -90-StepSize*1),
				POINT_MARK(Fuel_Center,SizeOut, -90+StepSize*0),
				POINT_MARK(Fuel_Center,SizeOut, -90+StepSize*1),
				POINT_MARK(Fuel_Center,SizeOut, -90+StepSize*2),
				POINT_MARK(Fuel_Center,SizeOut, -90+StepSize*3),
				POINT_MARK(Fuel_Center,SizeOut, -90+StepSize*4),
				POINT_MARK(Fuel_Center,SizeOut, -90+StepSize*5),
				POINT_MARK(Fuel_Center,SizeOut, -90+StepSize*6),
				POINT_MARK(Fuel_Center,SizeOut, -90+StepSize*7),
				POINT_MARK(Fuel_Center,SizeOut, -90+StepSize*8),
				POINT_MARK(Fuel_Center,SizeOut, -90+StepSize*9),
				POINT_MARK(Fuel_Center,SizeOut, -90+StepSize*10),
				POINT_MARK(Fuel_Center,SizeOut, -90+StepSize*11),
				POINT_MARK(Fuel_Center,SizeOut, -90+StepSize*12),
				POINT_MARK(Fuel_Center,SizeOut, -90+StepSize*13),
				POINT_MARK(Fuel_Center,SizeOut, -90+StepSize*14),
				POINT_MARK(Fuel_Center,SizeOut, -90+StepSize*15),
				POINT_MARK(Fuel_Center,SizeOut, -90+StepSize*16),
				POINT_MARK(Fuel_Center,SizeOut, -90+StepSize*17),
				POINT_MARK(Fuel_Center,SizeOut, -90+StepSize*18),{},

				CIRCLE_MARK(Fuel_Center,SizeOut,SizeOut2, 	-90-StepSize*0),{},
				CIRCLE_MARK(Fuel_Center,SizeOut,SizeOut2, 	-90+StepSize*2),{},
				CIRCLE_MARK(Fuel_Center,SizeOut,SizeOut2, 	-90+StepSize*4),{},
				CIRCLE_MARK(Fuel_Center,SizeOut,SizeOut2, 	-90+StepSize*6),{},
				CIRCLE_MARK(Fuel_Center,SizeOut,SizeOut2, 	-90+StepSize*8),{},
				CIRCLE_MARK(Fuel_Center,SizeOut,SizeOut2, 	-90+StepSize*10),{},
				CIRCLE_MARK(Fuel_Center,SizeOut,SizeOut2, 	-90+StepSize*12),{},
				CIRCLE_MARK(Fuel_Center,SizeOut,SizeOut2, 	-90+StepSize*14),{},
				CIRCLE_MARK(Fuel_Center,SizeOut,SizeOut2, 	-90+StepSize*16),{},

				#define SizeOut 0.1
				POINT_MARK(Fuel_Center,SizeOut, -90-StepSize*2),
				POINT_MARK(Fuel_Center,SizeOut, -90-StepSize*1),
				POINT_MARK(Fuel_Center,SizeOut, -90+StepSize*0),
				POINT_MARK(Fuel_Center,SizeOut, -90+StepSize*1),
				POINT_MARK(Fuel_Center,SizeOut, -90+StepSize*2),
				POINT_MARK(Fuel_Center,SizeOut, -90+StepSize*3),
				POINT_MARK(Fuel_Center,SizeOut, -90+StepSize*4),
				POINT_MARK(Fuel_Center,SizeOut, -90+StepSize*5),
				POINT_MARK(Fuel_Center,SizeOut, -90+StepSize*6),
				POINT_MARK(Fuel_Center,SizeOut, -90+StepSize*7),
				POINT_MARK(Fuel_Center,SizeOut, -90+StepSize*8),
				POINT_MARK(Fuel_Center,SizeOut, -90+StepSize*9),
				POINT_MARK(Fuel_Center,SizeOut, -90+StepSize*10),
				POINT_MARK(Fuel_Center,SizeOut, -90+StepSize*11),
				POINT_MARK(Fuel_Center,SizeOut, -90+StepSize*12),
				POINT_MARK(Fuel_Center,SizeOut, -90+StepSize*13),
				POINT_MARK(Fuel_Center,SizeOut, -90+StepSize*14),
				POINT_MARK(Fuel_Center,SizeOut, -90+StepSize*15),
				POINT_MARK(Fuel_Center,SizeOut, -90+StepSize*16),
				POINT_MARK(Fuel_Center,SizeOut, -90+StepSize*17),
				POINT_MARK(Fuel_Center,SizeOut, -90+StepSize*18),{},

			};
		};
	};
	class LightBlue
	{
		color[] = {0,1,1};
		alpha = 0.4;
		HUD_TEXT_SOURCE_SCALE(0.65,	0.725	,0.035,0.03,center,fuel,1054,0,0,0,TxtFuelVal)
		HUD_TEXT_SOURCE_SCALE(0.53,	0.865	,0.025,0.02,center,fuel,1054/2,0,0,0,TxtFuelVal1)
		HUD_TEXT_SOURCE_SCALE(0.76,	0.865	,0.025,0.02,center,fuel,1054/2,0,0,0,TxtFuelVal2)
		class FuelConsumption
		{
			type 			= text;
			source			= throttle;
			sourceScale		= 200;
			sourceOffset	= 40;
			refreshRate		= 0.5;

			align			= center;
			scale			= 1;
			TEXT_SIZEPOS(0.63,	0.536	,0.022,0.015)
		};
		HUD_TEXT_STATIC(0.05,	0.195	,0.027,0.017,center,"TO",TxtTO)
		class Static_Bold
		{
			type = line;
			width = 22;
			points[] =
			{
				FUEL_FLOW(Fuel_Center, FuelFlowRot, 0.11)
			};
		};
		// Fuel half circle numbers
		HUD_TEXT_BONE(Fuel_Center,-0.17,-0.01	,0.027,0.017,center,"1",Fuel1)
		HUD_TEXT_BONE(Fuel_Center,-0.16,-0.055	,0.027,0.017,center,"2",Fuel2)
		HUD_TEXT_BONE(Fuel_Center,-0.145,-0.08	,0.027,0.017,center,"3",Fuel3)
		HUD_TEXT_BONE(Fuel_Center,-0.12,-0.102	,0.027,0.017,center,"4",Fuel4)
		HUD_TEXT_BONE(Fuel_Center,-0.06,-0.13	,0.027,0.017,center,"6",Fuel5)
		HUD_TEXT_BONE(Fuel_Center,0.0,	-0.14	,0.027,0.017,center,"8",Fuel6)
		HUD_TEXT_BONE(Fuel_Center,0.06,-0.13	,0.027,0.017,center,"10",Fuel7)
		HUD_TEXT_BONE(Fuel_Center,0.12,-0.106	,0.027,0.017,center,"12",Fuel8)
		HUD_TEXT_BONE(Fuel_Center,0.165,-0.055	,0.027,0.017,center,"14",Fuel9)
		HUD_TEXT_BONE(Fuel_Center,0.175,-0.01	,0.027,0.017,center,"16",Fuel10)
		HUD_TEXT_BONE(Fuel_Center,0.165,0.035	,0.027,0.017,center,"18",Fuel11)
	};

	HUD_TEXT_STATIC(0.09,	0.83	,0.022,0.02,center,"SING",BtnEject1)
	HUD_TEXT_STATIC(0.09,	0.86	,0.022,0.02,center,"EJECT",BtnEject2)

	HUD_TEXT_STATIC(0.21,	0.96	,0.03,0.025,right,"IND",BtnIND)
	HUD_TEXT_STATIC(0.46,	0.96	,0.03,0.025,right,"SWAP",BtnSWAP)
	HUD_TEXT_STATIC(0.6,	0.96	,0.03,0.025,right,"HSD",BtnHSD)
	HUD_TEXT_STATIC(0.72,	0.96	,0.03,0.025,right,"DCLT",BtnDCLT)

	HUD_TEXT_STATIC(0.22,	0.86	,0.022,0.015,center,"3100",TxtHydVal)
	HUD_TEXT_STATIC(0.35,	0.86	,0.022,0.015,center,"500",TxtCabAltVal)

	HUD_TEXT_STATIC(0.615,	0.465	,0.022,0.015,center,"260",TxtAMPvAL)
	HUD_TEXT_STATIC(0.76,	0.465	,0.022,0.015,center,"28.0",TxtVOLTvAL)
	HUD_TEXT_STATIC(0.905,	0.465	,0.022,0.015,center,"15",TxtBatvAL)
	HUD_TEXT_STATIC(0.05,	0.41	,0.027,0.017,center,"014",TxtOATDir)

	HUD_TEXT_SOURCE_SCALE(0.44,	0.41	,0.04,0.03,center,rpm,100,0,0,0,NGVal)
	HUD_TEXT_SOURCE_SCALE(0.605,	0.281	,0.032,0.027,center,rpm,760,0,0,0,T5Val)
	HUD_TEXT_SOURCE_SCALE(0.33,	0.281	,0.032,0.027,center,throttle,100,0,0,0,TQVal)
	HUD_TEXT_SOURCE_SCALE(0.285,	0.465	,0.027,0.017,center,rpm,100,0,0,0,TPVal)

	HUD_TEXT_STATIC(0.79,	0.35	,0.022,0.015,center,"100",TxtOilPressVaL)
	HUD_TEXT_STATIC(0.89,	0.35	,0.022,0.015,center,"81",TxtOilTempVaL)
	HUD_TEXT_SOURCE_SCALE(0.225,	0.557+0.085/2	,0.027,0.017,right,horizonDive,57.2957795,0,0,0,PitchVal)

	HUD_TEXT_STATIC(0.924,	0.806	,0.022,0.015,center,"200",TxtJokerVal)
	HUD_TEXT_SOURCE_SCALE(0.924,	0.61	,0.022,0.015,center,fuel,1054,0,0,0,DetotVal)

	class GreenPolygon
	{
		type = polygon;
		points[] =
		{
			{
				POLYGON_BOX(0.14,0.05,0.31,0.95)
			},
			// oil left
			{
				POLYGON_BOX(0.024,0.015,0.805,0.26)
			},
			// oil left arrow
			#define POS_ARROW_X 0.779
			#define POS_ARROW_Y 0.265
			{
				{{__EVAL(0.022	+ 	POS_ARROW_X),		__EVAL(-0.0 	+ POS_ARROW_Y)},1},
				{{__EVAL(0.000	+ 	POS_ARROW_X),		__EVAL(-0.008 	+ POS_ARROW_Y)},1},
				{{__EVAL(0.005	+ 	POS_ARROW_X),		__EVAL(-0.0 	+ POS_ARROW_Y)},1},
			},
			{
				{{__EVAL(0.022	+ 	POS_ARROW_X),		__EVAL(-0.0 	+ POS_ARROW_Y)},1},
				{{__EVAL(0.000	+ 	POS_ARROW_X),		__EVAL(+0.008 	+ POS_ARROW_Y)},1},
				{{__EVAL(0.005	+ 	POS_ARROW_X),		__EVAL(-0.0 	+ POS_ARROW_Y)},1},
			},
			// oil right
			{
				POLYGON_BOX(0.024,0.05,0.855,0.255)
			},
			// oil right arrow
			#define POS_ARROW_X 0.905
			#define POS_ARROW_Y 0.275
			{
				{{__EVAL(-0.022	+ 	POS_ARROW_X),		__EVAL(-0.0 	+ POS_ARROW_Y)},1},
				{{__EVAL(0.000	+ 	POS_ARROW_X),		__EVAL(-0.008 	+ POS_ARROW_Y)},1},
				{{__EVAL(-0.005	+ 	POS_ARROW_X),		__EVAL(-0.0 	+ POS_ARROW_Y)},1},
			},
			{
				{{__EVAL(-0.022	+ 	POS_ARROW_X),		__EVAL(-0.0 	+ POS_ARROW_Y)},1},
				{{__EVAL(0.000	+ 	POS_ARROW_X),		__EVAL(+0.008 	+ POS_ARROW_Y)},1},
				{{__EVAL(-0.005	+ 	POS_ARROW_X),		__EVAL(-0.0 	+ POS_ARROW_Y)},1},
			},
		};
	};
	class Static
	{
		type = line;
		width = 6;
		points[] =
		{
			// Jokker arrows
			{{0.9	,0.758},1},
			{{0.95	,0.758},1},
			{{0.925	,0.738},1},
			{{0.9	,0.758},1},
			{},
			{{0.9	,__EVAL(0.838+0.001)},1},
			{{0.95	,__EVAL(0.838+0.001)},1},
			{{0.925	,__EVAL(0.858+0.001)},1},
			{{0.9	,__EVAL(0.838+0.001)},1},
			{},

			// Roll
			#define SizeIn 0.07
			#define SizeOut 0.08
			#define StepSize 22

			CIRCLE_MARK(Roll_Center,SizeIn,SizeOut, 	-360),{},
			CIRCLE_MARK(Roll_Center,SizeIn,SizeOut, 	-360+StepSize*1),{},
			CIRCLE_MARK(Roll_Center,SizeIn,SizeOut, 	-360+StepSize*2),{},
			CIRCLE_MARK(Roll_Center,SizeIn,SizeOut, 	-360-StepSize*1),{},
			CIRCLE_MARK(Roll_Center,SizeIn,SizeOut, 	-360-StepSize*2),{},
			POINT_MARK(Roll_Center,SizeOut, 			-360-StepSize*2),
			POINT_MARK(Roll_Center,SizeOut, 			-360-StepSize*1),
			POINT_MARK(Roll_Center,SizeOut, 			-360),
			POINT_MARK(Roll_Center,SizeOut, 			-360+StepSize*1),
			POINT_MARK(Roll_Center,SizeOut, 			-360+StepSize*2),
			{},

			// Pitch
			{{0.1915				,__EVAL(0.565		)	},1},
			{{0.1915				,__EVAL(0.565+0.085	)	},1},{},
			{{0.1915				,__EVAL(0.565+0.085/2		)},1},
			{{__EVAL(0.1915+0.015)	,__EVAL(0.565+0.085/2	)	},1},{},
			{{0.1915				,__EVAL(0.565+0.085		)},1},
			{{__EVAL(0.1915+0.015)	,__EVAL(0.565+0.085	)	},1},{},
			{{0.1915				,__EVAL(0.565		)},1},
			{{__EVAL(0.1915+0.015)	,__EVAL(0.565	)	},1},{},
			{{0.1915				,__EVAL(0.565+(0.085/4)		)},1},
			{{__EVAL(0.1915+0.01)	,__EVAL(0.565+(0.085/4)	)	},1},{},
			{{0.1915				,__EVAL(0.565+(0.085/4)*3		)},1},
			{{__EVAL(0.1915+0.01)	,__EVAL(0.565+(0.085/4)*3	)	},1},{},

			// Yaw
			{{__EVAL(0.318 + 0.1/4		)				,__EVAL(0.60	)	},1},
			{{__EVAL(0.318 + (0.1/4)*3 )			,__EVAL(0.60	)	},1},{},
			{{__EVAL(0.318 + 0.1/2		)				,__EVAL(0.60	)	},1},
			{{__EVAL(0.318 + 0.1/2		)				,__EVAL(0.60-0.01	)	},1},{},

			// Eject box
			POINT2(0.00 + 0.03, 1.125 + 0.044),
			POINT2(0.12 + 0.03, 1.125 + 0.044),
			POINT2(0.12 + 0.03, 1.125 - 0.044),
			POINT2(0.00 + 0.03, 1.125 - 0.044),
			POINT2(0.00 + 0.03, 1.125 + 0.044),{},

			#define SizeIn 0.09
			#define SizeOut 0.11

			CIRCLE_MARK(TQ_Center_Rotate,0.0,0.11, 	-360),{},
			CIRCLE_MARK(TQ_Center,SizeIn,SizeOut, 	-360),{},
			CIRCLE_MARK(TQ_Center,SizeIn,SizeOut, 	-360-30*1),{},
			CIRCLE_MARK(TQ_Center,SizeIn,SizeOut, 	-360-30*2),{},
			CIRCLE_MARK(TQ_Center,SizeIn,SizeOut, 	-360-30*3),{},
			CIRCLE_MARK(TQ_Center,SizeIn,SizeOut, 	-360-30*4),{},
			CIRCLE_MARK(TQ_Center,SizeIn,SizeOut, 	-360-30*5),{},
			CIRCLE_MARK(TQ_Center,SizeIn,SizeOut, 	-360-30*6),{},
			CIRCLE_MARK(TQ_Center,SizeIn,SizeOut, 	-360-30*7),{},
			CIRCLE_MARK(TQ_Center,SizeIn,SizeOut, 	-360-30*8),{},
			POINT_MARK(TQ_Center,SizeOut, 90+15*2),
			POINT_MARK(TQ_Center,SizeOut, 90+15*3),
			POINT_MARK(TQ_Center,SizeOut, 90+15*4),
			POINT_MARK(TQ_Center,SizeOut, 90+15*5),
			POINT_MARK(TQ_Center,SizeOut, 90+15*6),
			POINT_MARK(TQ_Center,SizeOut, 90+15*7),
			POINT_MARK(TQ_Center,SizeOut, 90+15*8),
			POINT_MARK(TQ_Center,SizeOut, 90+15*9),
			POINT_MARK(TQ_Center,SizeOut, 90+15*10),
			POINT_MARK(TQ_Center,SizeOut, 90+15*11),
			POINT_MARK(TQ_Center,SizeOut, 90+15*12),
			POINT_MARK(TQ_Center,SizeOut, 90+15*13),
			POINT_MARK(TQ_Center,SizeOut, 90+15*14),
			POINT_MARK(TQ_Center,SizeOut, 90+15*15),
			POINT_MARK(TQ_Center,SizeOut, 90+15*16),
			POINT_MARK(TQ_Center,SizeOut, 90+15*17),
			POINT_MARK(TQ_Center,SizeOut, 90+15*18),
			{},
			CIRCLE_MARK(T5_Center_Rotate,0.0,0.11, 	-360),{},
			CIRCLE_MARK(T5_Center,SizeIn,SizeOut, 	-360-30*2),{},
			CIRCLE_MARK(T5_Center,SizeIn,SizeOut, 	-360-30*3),{},
			CIRCLE_MARK(T5_Center,SizeIn,SizeOut, 	-360-30*4),{},
			CIRCLE_MARK(T5_Center,SizeIn,SizeOut, 	-360-30*5),{},
			CIRCLE_MARK(T5_Center,SizeIn,SizeOut, 	-360-30*6),{},
			CIRCLE_MARK(T5_Center,SizeIn,SizeOut, 	-360-30*7),{},
			CIRCLE_MARK(T5_Center,SizeIn,SizeOut, 	-360-30*8),{},
			POINT_MARK(T5_Center,SizeOut, 90+15*2),
			POINT_MARK(T5_Center,SizeOut, 90+15*3),
			POINT_MARK(T5_Center,SizeOut, 90+15*4),
			POINT_MARK(T5_Center,SizeOut, 90+15*5),
			POINT_MARK(T5_Center,SizeOut, 90+15*6),
			POINT_MARK(T5_Center,SizeOut, 90+15*7),
			POINT_MARK(T5_Center,SizeOut, 90+15*8),
			POINT_MARK(T5_Center,SizeOut, 90+15*9),
			POINT_MARK(T5_Center,SizeOut, 90+15*10),
			POINT_MARK(T5_Center,SizeOut, 90+15*11),
			POINT_MARK(T5_Center,SizeOut, 90+15*12),
			POINT_MARK(T5_Center,SizeOut, 90+15*13),
			POINT_MARK(T5_Center,SizeOut, 90+15*14),
			POINT_MARK(T5_Center,SizeOut, 90+15*15),

			//CIRCLE_BIG(TQ_Center,0.008),{},
			//CIRCLE_BIG(TQ_Center,0.11),{},
		};
	};
	class Static_Bold
	{
		type = line;
		width = 22;
		points[] =
		{
			FUEL_FLOW(Fuel_Center, FuelFlowRot, 0.13)
		};
	};
	class Yellow
	{
		color[] = {0.8,0.1,0.0};
		class Static
		{
			type = line;
			width = 4;
			points[] =
			{
				// Yaw
				{{__EVAL(0.318 		)			,__EVAL(0.60	)	},1},
				{{__EVAL(0.318 + 0.1/4 )		,__EVAL(0.60	)	},1},{},
				{{__EVAL(0.318 + (0.1/4)*3 )	,__EVAL(0.60	)	},1},
				{{__EVAL(0.318 + 0.1 )			,__EVAL(0.60	)	},1},{},
				{{__EVAL(0.318 	)		,__EVAL(0.60	)	},1},
				{{__EVAL(0.318  )		,__EVAL(0.60-0.01	)	},1},{},
				{{__EVAL(0.318 	+ 0.1)		,__EVAL(0.60	)	},1},
				{{__EVAL(0.318  + 0.1)		,__EVAL(0.60-0.01	)	},1},{},
				{{__EVAL(0.318 + (0.1/4)*3 )	,__EVAL(0.60	)	},1},
				{{__EVAL(0.318 + (0.1/4)*3 )	,__EVAL(0.60-0.008	)	},1},{},
				{{__EVAL(0.318 + (0.1/4) )	,__EVAL(0.60	)	},1},
				{{__EVAL(0.318 + (0.1/4) )	,__EVAL(0.60-0.008	)	},1},{},

				POINT_MARK(TQ_Center,SizeOut, 90+15*18),
				POINT_MARK(TQ_Center,SizeOut, 90+15*19),
				POINT_MARK(TQ_Center,SizeOut, 90+15*20),
				{},
				CIRCLE_MARK(T5_Center,SizeIn,SizeOut, 	-360-30*1),{},
				POINT_MARK(T5_Center,SizeOut, 90+15*15),
				POINT_MARK(T5_Center,SizeOut, 90+15*16),
			};
		};
		class Polygon
		{
			type = polygon;
			points[] =
			{
				// oil left
				{
					POLYGON_BOX(0.024,0.01,0.805,0.25)
				},
				{
					POLYGON_BOX(0.024,0.025,0.805,0.275)
				},
				// oil right
				{
					POLYGON_BOX(0.024,0.035,0.855,0.30)
				},
				{
					POLYGON_BOX(0.024,0.005,0.855,0.25)
				},
			};
		};
	};
	class Red
	{
		color[] = {1,0.0,0.0};
		class Static
		{
			type = line;
			points[] =
			{
				CIRCLE_MARK(TQ_Center,SizeIn,SizeOut, 	-360+30*1),{},
				CIRCLE_MARK(TQ_Center,SizeIn,SizeOut, 	-360+30*2),{},
				POINT_MARK(TQ_Center,SizeOut, 90+15*20),
				POINT_MARK(TQ_Center,SizeOut, 90+15*21),
				POINT_MARK(TQ_Center,SizeOut, 90+15*22),
				{},
				CIRCLE_MARK(T5_Center,SizeIn,SizeOut, 	-360),{},
				CIRCLE_MARK(T5_Center,SizeIn,SizeOut, 	-360+30*1),{},
				CIRCLE_MARK(T5_Center,SizeIn,SizeOut, 	-360+30*2),{},
				POINT_MARK(T5_Center,SizeOut, 90+15*16),
				POINT_MARK(T5_Center,SizeOut, 90+15*17),
				POINT_MARK(T5_Center,SizeOut, 90+15*18),
				POINT_MARK(T5_Center,SizeOut, 90+15*19),
				POINT_MARK(T5_Center,SizeOut, 90+15*20),
				POINT_MARK(T5_Center,SizeOut, 90+15*21),
				POINT_MARK(T5_Center,SizeOut, 90+15*22),
				{},
			};
		};
		class Static_Bold
		{
			type = line;
			width = 22;
			points[] =
			{
				FUEL_FLOW_RED(Fuel_Center, FuelFlowRot, 0.13),{},
				FUEL_FLOW_RED(Fuel_Center, FuelFlowRot, 0.11),{},
			};
		};
		class Polygon
		{
			type = polygon;
			points[] =
			{
				// oil left
				{
					POLYGON_BOX(0.024,0.012,0.805,0.24)
				},
				{
					POLYGON_BOX(0.024,0.03,0.805,0.3)
				},
				// oil right
				{
					POLYGON_BOX(0.024,0.005,0.855,0.33)
				},
				{
					POLYGON_BOX(0.024,0.012,0.855,0.24)
				},
			};
		};
	};
	class BlackText
	{
		color[] = {0,0,0};
		alpha = 1;
		HUD_TEXT_STATIC(0.32,	0.96	,0.03,0.025,right,"EICAS",BtnEICAS1)
		HUD_TEXT_STATIC(0.32,	0.96	,0.03,0.025,right,"EICAS",BtnEICAS2)
		HUD_TEXT_STATIC(0.32,	0.96	,0.03,0.025,right,"EICAS",BtnEICAS3)
	};
	class Flaps_Up
	{
		condition	= "1-flaps";
		color[]		= {1,1,1};
		alpha		= 0.6;
		class Static
		{
			type = line;
			width = 4;
			points[] =
			{
				DRAW_BOX(0.06,0.708,0.14,0.03),{},
			};
		};
		HUD_TEXT_STATIC(0.13,	0.715	,0.024,0.018,center,"UP",TxtFlaps)
	};
	class Flaps_Down1: Flaps_Up
	{
		condition	= "flaps";
		alpha		= 1.0;
		color[]		= {0,0.12,0};
		class Static: Static {};
		HUD_TEXT_STATIC(0.13,	0.715	,0.024,0.018,center,"DOWN",TxtFlaps)
	};
	class SpeedBrake_Closed
	{
		condition	= "1-user8";
		color[]		= {1,1,1};
		alpha		= 0.6;
		class Static
		{
			type = line;
			width = 4;
			points[] =
			{
				DRAW_BOX(0.24,0.708,0.14,0.03),{},
			};
		};
		HUD_TEXT_STATIC(0.31,	0.715	,0.024,0.018,center,"CLOSED",TxtFlaps)
	};
	class SpeedBrake_Open: SpeedBrake_Closed
	{
		condition	= "user8";
		alpha		= 1.0;
		color[]		= {0,0.12,0};
		class Static: Static {};
		HUD_TEXT_STATIC(0.31,	0.715	,0.024,0.018,center,"OPEN",TxtFlaps)
	};

	// Plane warnings
	class Canopy_Open
	{
		condition = "user13<=0.98";
		color[] = {1,0.0,0.0};
		alpha = 0.6;
		class Draw
		{
			type = line;
			width = 6;
			points[] = 
			{
				DRAW_BOX(0.05+0.18*0,0.01,0.17,0.06),{},
				DRAW_BOX(0.05+0.18*2,0.01,0.17,0.06),{},
				DRAW_BOX(0.05+0.18*3,0.01,0.17,0.06),{},
				DRAW_BOX(0.05+0.18*4,0.01,0.17,0.06),{},
				DRAW_BOX(0.05+0.18*0,0.08,0.17,0.06),{},
				DRAW_BOX(0.05+0.18*1,0.08,0.17,0.06),{},
				DRAW_BOX(0.05+0.18*2,0.08,0.17,0.06),{},
				DRAW_BOX(0.05+0.18*3,0.08,0.17,0.06),{},
				DRAW_BOX(0.05+0.18*4,0.08,0.17,0.06),{},
			};
		};
		HUD_TEXT_STATIC(0.135+0.18*0,	0.02	,0.024,0.018,center,"OPEN",WarningTextLine1)
		HUD_TEXT_STATIC(0.135+0.18*0,	0.02+0.025	,0.024,0.018,center,"CANOPY",WarningTextLine2)
	};
	class L_Aileron_Yellow
	{
		condition = "(user14>=0.25)*(user14<=0.8)";
		color[] = {0.6,0.3,0.0};
		alpha = 0.6;
		class Draw
		{
			type = line;
			width = 6;
			points[] = 
			{
				DRAW_BOX(0.05+0.18*2,0.01,0.17,0.06),{},
			};
		};
		HUD_TEXT_STATIC(0.135+0.18*2,	0.02	,0.024,0.018,center,"LEFT",WarningTextLine1)
		HUD_TEXT_STATIC(0.135+0.18*2,	0.02+0.025	,0.024,0.018,center,"AILERON",WarningTextLine2)
	};
	class L_Aileron_Red: L_Aileron_Yellow
	{
		condition = "(user14>=0.801)";
		color[] = {1,0.0,0.0};
		class Draw: Draw {};
		class WarningTextLine1: WarningTextLine1 {};
		class WarningTextLine2: WarningTextLine2 {};
	};
	class R_Aileron_Yellow
	{
		condition = "(user15>=0.25)*(user15<=0.8)";
		color[] = {0.6,0.3,0.0};
		alpha = 0.6;
		class Draw
		{
			type = line;
			width = 6;
			points[] = 
			{
				DRAW_BOX(0.05+0.18*3,0.01,0.17,0.06),{},
			};
		};
		HUD_TEXT_STATIC(0.135+0.18*3,	0.02	,0.024,0.018,center,"RIGHT",WarningTextLine1)
		HUD_TEXT_STATIC(0.135+0.18*3,	0.02+0.025	,0.024,0.018,center,"AILERON",WarningTextLine2)
	};
	class R_Aileron_Red: r_Aileron_Yellow
	{
		condition = "(user15>=0.801)";
		color[] = {1,0.0,0.0};
		class Draw: Draw {};
		class WarningTextLine1: WarningTextLine1 {};
		class WarningTextLine2: WarningTextLine2 {};
	};

	class Rudder_Yellow
	{
		condition = "(user18>=0.25)*(user18<=0.8)";
		color[] = {0.6,0.3,0.0};
		alpha = 0.6;
		class Draw
		{
			type = line;
			width = 6;
			points[] = 
			{
				DRAW_BOX(0.05+0.18*4,0.01,0.17,0.06),{},
			};
		};
		HUD_TEXT_STATIC(0.135+0.18*4,	0.02	,0.024,0.018,center,"RUDDER",WarningTextLine1)
		HUD_TEXT_STATIC(0.135+0.18*4,	0.02+0.025	,0.024,0.018,center,"HIT",WarningTextLine2)
	};
	class Rudder_Red: Rudder_Yellow
	{
		condition = "(user18>=0.801)";
		color[] = {1,0.0,0.0};
		class Draw: Draw {};
		class WarningTextLine1: WarningTextLine1 {};
		class WarningTextLine2: WarningTextLine2 {};
	};

	class L_Elevator_Yellow
	{
		condition = "(user16>=0.25)*(user16<=0.8)";
		color[] = {0.6,0.3,0.0};
		alpha = 0.6;
		class Draw
		{
			type = line;
			width = 6;
			points[] = 
			{
				DRAW_BOX(0.05+0.18*0,0.08,0.17,0.06),{},
			};
		};
		HUD_TEXT_STATIC(0.135+0.18*0,	0.09	,0.024,0.018,center,"LEFT",WarningTextLine1)
		HUD_TEXT_STATIC(0.135+0.18*0,	0.09+0.025	,0.024,0.018,center,"ELEV",WarningTextLine2)
	};
	class L_Elevator_Red: L_Elevator_Yellow
	{
		condition = "(user16>=0.801)";
		color[] = {1,0.0,0.0};
		class Draw: Draw {};
		class WarningTextLine1: WarningTextLine1 {};
		class WarningTextLine2: WarningTextLine2 {};
	};
	class R_Elevator_Yellow
	{
		condition = "(user17>=0.25)*(user17<=0.8)";
		color[] = {0.6,0.3,0.0};
		alpha = 0.6;
		class Draw
		{
			type = line;
			width = 6;
			points[] = 
			{
				DRAW_BOX(0.05+0.18*1,0.08,0.17,0.06),{},
			};
		};
		HUD_TEXT_STATIC(0.135+0.18*1,	0.09	,0.024,0.018,center,"RIGHT",WarningTextLine1)
		HUD_TEXT_STATIC(0.135+0.18*1,	0.09+0.025	,0.024,0.018,center,"ELEV",WarningTextLine2)
	};
	class R_Elevator_Red: r_Elevator_Yellow
	{
		condition = "(user17>=0.801)";
		color[] = {1,0.0,0.0};
		class Draw: Draw {};
		class WarningTextLine1: WarningTextLine1 {};
		class WarningTextLine2: WarningTextLine2 {};
	};

	class L_Fuel_Yellow
	{
		condition = "(user19>=0.25)*(user19<=0.8)";
		color[] = {0.6,0.3,0.0};
		alpha = 0.6;
		class Draw
		{
			type = line;
			width = 6;
			points[] = 
			{
				DRAW_BOX(0.05+0.18*2,0.08,0.17,0.06),{},
			};
		};
		HUD_TEXT_STATIC(0.135+0.18*2,	0.09	,0.024,0.018,center,"LEFT",WarningTextLine1)
		HUD_TEXT_STATIC(0.135+0.18*2,	0.09+0.025	,0.024,0.018,center,"FUEL",WarningTextLine2)
	};
	class L_Fuel_Red: L_Fuel_Yellow
	{
		condition = "(user19>=0.801)";
		color[] = {1,0.0,0.0};
		class Draw: Draw {};
		class WarningTextLine1: WarningTextLine1 {};
		class WarningTextLine2: WarningTextLine2 {};
	};
	class R_Fuel_Yellow
	{
		condition = "(user20>=0.25)*(user20<=0.8)";
		color[] = {0.6,0.3,0.0};
		alpha = 0.6;
		class Draw
		{
			type = line;
			width = 6;
			points[] = 
			{
				DRAW_BOX(0.05+0.18*3,0.08,0.17,0.06),{},
			};
		};
		HUD_TEXT_STATIC(0.135+0.18*3,	0.09	,0.024,0.018,center,"RIGHT",WarningTextLine1)
		HUD_TEXT_STATIC(0.135+0.18*3,	0.09+0.025	,0.024,0.018,center,"FUEL",WarningTextLine2)
	};
	class R_Fuel_Red: r_Fuel_Yellow
	{
		condition = "(user20>=0.801)";
		color[] = {1,0.0,0.0};
		class Draw: Draw {};
		class WarningTextLine1: WarningTextLine1 {};
		class WarningTextLine2: WarningTextLine2 {};
	};

	class FLIR_Yellow
	{
		condition = "(user22>=0.25)*(user22<=0.8)";
		color[] = {0.6,0.3,0.0};
		alpha = 0.6;
		class Draw
		{
			type = line;
			width = 6;
			points[] = 
			{
				DRAW_BOX(0.05+0.18*4,0.08,0.17,0.06),{},
			};
		};
		HUD_TEXT_STATIC(0.135+0.18*4,	0.09	,0.024,0.018,center,"FLIR",WarningTextLine1)
		HUD_TEXT_STATIC(0.135+0.18*4,	0.09+0.025	,0.024,0.018,center,"HIT",WarningTextLine2)
	};
	class FLIR_Red: FLIR_Yellow
	{
		condition = "(user22>=0.801)";
		color[] = {1,0.0,0.0};
		class Draw: Draw {};
		class WarningTextLine1: WarningTextLine1 {};
		class WarningTextLine2: WarningTextLine2 {};
	};

	class Engine_Yellow
	{
		condition = "(user21>=0.25)*(user21<=0.8)";
		color[] = {0.6,0.3,0.0};
		alpha = 0.6;
		class Draw
		{
			type = line;
			width = 6;
			points[] = 
			{
				DRAW_BOX(0.05+0.18*1,0.01,0.17,0.06),{},
			};
		};
		HUD_TEXT_STATIC(0.135+0.18*1,	0.02	,0.024,0.018,center,"ENGINE",WarningTextLine1)
		HUD_TEXT_STATIC(0.135+0.18*1,	0.02+0.025	,0.024,0.018,center,"HIT",WarningTextLine2)
	};
	class Engine_Red: Engine_Yellow
	{
		condition = "(user21>=0.801)";
		color[] = {1,0.0,0.0};
		class Draw: Draw {};
		class WarningTextLine1: WarningTextLine1 {};
		class WarningTextLine2: WarningTextLine2 {};
	};
};