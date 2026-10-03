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
turret[]				= {0};
MFD_MATERIAL


class Bones
{
	class Turret_Center
	{
		type	= fixed;
		pos[]	= {0.67, 0.875};
	};
	class Cross_Center
	{
		type	= fixed;
		pos[]	= {0.5, 0.45};
	};
	class TurretRotation
	{
		type			= rotational;
		source			= weaponHeading;
		sourceIndex		= 0;
		center[]		= {0.67, 0.875};
		min				= -180;
		max				= 180;
		minAngle		= 0;
		maxAngle		= 360;
		sourceOffset	= -180;
		aspectRatio		= __EVAL(SizeY10deg / SizeX10deg);
	};
	class TurretHorizontal
	{
		type			= linear;
		source			= weaponHeading;
		min				= 0;
		max				= 180;
		sourceScale		= 1;
		maxPos[]		= {-0.364*0,0};
		minPos[]		= {+0.364*1,0};
	};
	class TurretHorizontal2: TurretHorizontal
	{
		min				= 180;
		max				= 360;
		maxPos[]		= {0,0};
		minPos[]		= {+0.364*1,0};
	};
	class TurretHorizontal3: TurretHorizontal
	{
		min				= 179.99;
		max				= 180;
		maxPos[]		= {0,0};
		minPos[]		= {-0.364*2,0};
	};
	class TurretVertical: TurretHorizontal
	{
		source			= user;
		sourceIndex		= 23;
		sourceOffset	= 0;
		min				= -90;
		max				= 30;
		maxPos[]		= {0,__EVAL(0.074*4)};
		minPos[]		= {0,0};
	};
	class Wind_Center_Rotate
	{
		type		= rotational;
		source		= windage;
		sourceScale	= 1;
		center[]	= {0.93, 0.645};
		min			= 0;
		max			= 360;
		minAngle	= __EVAL(-0);
		maxAngle	= __EVAL(+360);
		aspectRatio	= __EVAL(SizeY10deg/SizeX10deg);
	};
};
class Draw
{
	alpha				= 1.0;
	color[]				= {0,0.12,0};
	MFD_CONDITION(MFD_CONDITION_NUMBER,3)

	HUD_TEXT_STATIC(0.21,	0.96	,0.03,0.025,right,"IND",BtnIND)
	HUD_TEXT_STATIC(0.46,	0.96	,0.03,0.025,right,"SWAP",BtnSWAP)
	HUD_TEXT_STATIC(0.6,	0.96	,0.03,0.025,right,"HSD",BtnHSD)
	HUD_TEXT_STATIC(0.72,	0.96	,0.03,0.025,right,"DCLT",BtnDCLT)

	HUD_TEXT_STATIC(0.01,	0.84		,0.027,0.02,right,"STOW",BtnSTOW)

	HUD_TEXT_STATIC(0.22,	0.81		,0.027,0.02,right,"TARGET",TxtTarget)
	HUD_TEXT_STATIC(		0.20,	0.85		,0.027,0.02,right,"LRF:",TxtTargetDist)
	HUD_TEXT_SOURCE_SCALE(	0.29,	0.85		,0.027,0.02,right,laserDist,1,0,0,4,TargetDist)

	HUD_TEXT_STATIC(0.21,	0.01		,0.027,0.02,right,"GAIN/",BtnGAINLVL1)
	HUD_TEXT_STATIC(0.21,	0.01+0.03	,0.027,0.02,right,"LEVEL",BtnGAINLVL2)
	HUD_TEXT_STATIC(0.34,	0.01		,0.027,0.02,right,"BRT/",BtnBRT1)
	HUD_TEXT_STATIC(0.34,	0.01+0.03	,0.027,0.02,right,"CONT",BtnBRT2)
	HUD_TEXT_STATIC(0.46,	0.01		,0.027,0.02,right,"FOCUS",BtnWHT)
	HUD_TEXT_STATIC(0.6,	0.01		,0.027,0.02,right,"COMP",BtnCOMP)
	HUD_TEXT_STATIC(0.72,	0.01		,0.027,0.02,right,"MENU",BtnMENU)
	class Static
	{
		type = line;
		width = 4;
		points[] =
		{
			CIRCLE_MARK(Turret_Center,0.05,0.08, 0),{},
			CIRCLE_MARK(Turret_Center,0.05,0.08, 90),{},
			CIRCLE_MARK(Turret_Center,0.05,0.08, 180),{},
			CIRCLE_MARK(Turret_Center,0.05,0.08, 270),{},
		};
	};
	class White
	{
		color[] = {1,1,1};
		alpha = 0.6;
		class Polygon
		{
			type = polygon;
			points[] =
			{
				// FLIR
				{
					POLYGON_BOX_ROT(TurretRotation,0.01,0.05,-0.005,0.0)
				},
				{
					{{TurretRotation,-0.01,	0.05},1},
					{{TurretRotation,0,		0.07},1},
					{{TurretRotation,0.01,	0.05},1},
				},
				// Turret Arrows
				{
					{TurretHorizontal,1,TurretHorizontal2,1,TurretHorizontal3,1,{__EVAL(-0.01	+0.5),	__EVAL(0.045	+0.595)},1},
					{TurretHorizontal,1,TurretHorizontal2,1,TurretHorizontal3,1,{__EVAL(0		+0.5),	__EVAL(0.06		+0.595)},1},
					{TurretHorizontal,1,TurretHorizontal2,1,TurretHorizontal3,1,{__EVAL(0.01	+0.5),	__EVAL(0.045	+0.595)},1},
				},
				{
					{TurretVertical,1,{__EVAL(-0.00	+0.1),	__EVAL(-0.008	+0.25)},1},
					{TurretVertical,1,{__EVAL(-0.015	+0.1),	__EVAL(-0.00	+0.25)},1},
					{TurretVertical,1,{__EVAL(-0.00	+0.1),	__EVAL(+0.008	+0.25)},1},
				}
			};
		};
		class Static
		{
			type = line;
			width = 4;
			points[] =
			{
				#define STEP_SIZE 0.074
				{{0.06,0.25+STEP_SIZE*0},1},{{0.08,0.25+STEP_SIZE*0},1},{},
				{{0.06,0.25+STEP_SIZE*1},1},{{0.08,0.25+STEP_SIZE*1},1},{},
				{{0.06,0.25+STEP_SIZE*2},1},{{0.08,0.25+STEP_SIZE*2},1},{},
				{{0.06,0.25+STEP_SIZE*3},1},{{0.08,0.25+STEP_SIZE*3},1},{},
				{{0.06,0.25+STEP_SIZE*4},1},{{0.08,0.25+STEP_SIZE*4},1},{},

				#define STEP_SIZE 0.074
				{{0.07,0.25+STEP_SIZE*0.5},1},{{0.08,0.25+STEP_SIZE*0.5},1},{},
				{{0.07,0.25+STEP_SIZE*1.5},1},{{0.08,0.25+STEP_SIZE*1.5},1},{},
				{{0.07,0.25+STEP_SIZE*2.5},1},{{0.08,0.25+STEP_SIZE*2.5},1},{},
				{{0.07,0.25+STEP_SIZE*3.5},1},{{0.08,0.25+STEP_SIZE*3.5},1},{},

				#define STEP_SIZE 0.091
				#define SIZE_BIG 0.02
				#define SIZE_SMALL 0.01
				{{0.5+STEP_SIZE*0,0.66},1},{{0.5+STEP_SIZE*0,0.66+SIZE_BIG},1},{},
				{{0.5+STEP_SIZE*1,0.66},1},{{0.5+STEP_SIZE*1,0.66+SIZE_SMALL},1},{},
				{{0.5+STEP_SIZE*2,0.66},1},{{0.5+STEP_SIZE*2,0.66+SIZE_BIG},1},{},
				{{0.5+STEP_SIZE*3,0.66},1},{{0.5+STEP_SIZE*3,0.66+SIZE_SMALL},1},{},
				{{0.5+STEP_SIZE*4,0.66},1},{{0.5+STEP_SIZE*4,0.66+SIZE_BIG},1},{},

				{{0.5-STEP_SIZE*1,0.66},1},{{0.5-STEP_SIZE*1,0.66+SIZE_SMALL},1},{},
				{{0.5-STEP_SIZE*2,0.66},1},{{0.5-STEP_SIZE*2,0.66+SIZE_BIG},1},{},
				{{0.5-STEP_SIZE*3,0.66},1},{{0.5-STEP_SIZE*3,0.66+SIZE_SMALL},1},{},
				{{0.5-STEP_SIZE*4,0.66},1},{{0.5-STEP_SIZE*4,0.66+SIZE_BIG},1},{},
			};
		};
		HUD_TEXT_STATIC(0.05,	0.245+0.074*0		,0.018,0.014,left,"+30",LeftDeg1)
		HUD_TEXT_STATIC(0.05,	0.245+0.074*1		,0.018,0.014,left,"0",LeftDeg2)
		HUD_TEXT_STATIC(0.05,	0.245+0.074*2		,0.018,0.014,left,"-30",LeftDeg3)
		HUD_TEXT_STATIC(0.05,	0.245+0.074*3		,0.018,0.014,left,"-60",LeftDeg4)
		HUD_TEXT_STATIC(0.05,	0.245+0.074*4		,0.018,0.014,left,"-90",LeftDeg5)

		HUD_TEXT_STATIC(0.498+0.182*0,	0.685		,0.018,0.014,center," 0",BottomDeg1)
		HUD_TEXT_STATIC(0.498+0.182*1,	0.685		,0.018,0.014,center,"+90",BottomDeg2)
		HUD_TEXT_STATIC(0.498+0.182*2,	0.685		,0.018,0.014,center,"+180",BottomDeg3)
		HUD_TEXT_STATIC(0.498-0.182*1,	0.685		,0.018,0.014,center,"-90",BottomDeg4)
		HUD_TEXT_STATIC(0.498-0.182*2,	0.685		,0.018,0.014,center,"-180",BottomDeg5)
	};
	HUD_TEXT_STATIC(0.2,	0.3	,0.04,0.04,left,"",TestString)
	class Black
	{
		color[] = {0,0,0};

		HUD_TEXT_SOURCE_INDEX(0.9,	0.2	,0.03,0.025,left,userText,0,CameraMode)
		HUD_TEXT_SOURCE_INDEX(0.87,	0.24	,0.03,0.025,left,user,24,ZoomLevel)
		HUD_TEXT_STATIC(0.9,	0.24	,0.03,0.025,left," x",ZoomLevelStatic)
		class Static
		{
			type = line;
			points[] =
			{
				{{0.5,0.135},1},
				{{0.5,0.155},1},{},
				// Aiming cross
				POINT_1B(Cross_Center,0,-0.11	),
				POINT_1B(Cross_Center,0,-0.05	),{},
				POINT_1B(Cross_Center,0,0.05	),
				POINT_1B(Cross_Center,0,0.11		),{},
				POINT_1B(Cross_Center,-0.11,0.0	),
				POINT_1B(Cross_Center,-0.05,0.0	),{},
				POINT_1B(Cross_Center,0.05,0.0	),
				POINT_1B(Cross_Center,0.11,0.0	),{},
			};
		};
		HUD_TEXT_STATIC(0.46,	0.16	,0.02,0.017,center,"LOS",HeadingText1)
		HUD_TEXT_STATIC(0.56,	0.16	,0.02,0.017,center,"T",HeadingText2)
		HUD_TEXT_SOURCE_SCALE(0.52,	0.16	,0.02,0.017,center,heading,1,0,0,3,HeadingVal)

		class Polygon
		{
			type = polygon;
			points[] =
			{
				// Wind direction
				{
					POLYGON_BOX_ROT(Wind_Center_Rotate,0.01,0.05,-0.005,-0.02)
				},
				{
					{{Wind_Center_Rotate,-0.01,	0.05-0.02},1},
					{{Wind_Center_Rotate,0,		0.07-0.02},1},
					{{Wind_Center_Rotate,0.01,	0.05-0.02},1},
				},
			};
		};
		#define HEADING_OFFSET_Y 0.047
		class HeadingScale
		{
			type			= scale;
			horizontal		= true;
			source			= heading;
			sourceScale		= 0.1;
			width			= 4.0;
			NeverEatSeaWeed = 1;

			top				= 0.25;
			center			= 0.50;
			bottom			= 0.75;

			lineXleft		= __EVAL(0.11+HEADING_OFFSET_Y);
			lineYright		= __EVAL(0.10+HEADING_OFFSET_Y);
			lineXleftMajor	= __EVAL(0.11+HEADING_OFFSET_Y);
			lineYrightMajor	= __EVAL(0.09+HEADING_OFFSET_Y);
			majorLineEach	= 3;
			numberEach		= 3;
			step			= __EVAL(10*0.1);
			stepSize		= __EVAL(1/36*0.95);


			align			= center;
			scale			= 1;

			pos[]			= {__EVAL(0.48-0.234), __EVAL(0.05+HEADING_OFFSET_Y +0.015)};
			right[]			= {__EVAL(0.50-0.234), __EVAL(0.05+HEADING_OFFSET_Y +0.015)};
			down[]			= {__EVAL(0.48-0.234), __EVAL(0.07+HEADING_OFFSET_Y +0.015)};

		};
		class LaserActive
		{
			condition = "laserOn";
			class Static
			{
				type = line;
				points[] =
				{
					POINT_1B(Cross_Center,0.01,-0.01	),
					POINT_1B(Cross_Center,-0.01,0.01	),{},
					POINT_1B(Cross_Center,-0.01,-0.01	),
					POINT_1B(Cross_Center,0.01,0.01	),{},

					POINT_1B(Cross_Center,0.02,-0.11	),
					POINT_1B(Cross_Center,-0.02,-0.11	),{},
					POINT_1B(Cross_Center,0.02,0.11	),
					POINT_1B(Cross_Center,-0.02	,0.11	),{},
					POINT_1B(Cross_Center,+0.11	,-0.02	),
					POINT_1B(Cross_Center,+0.11	,+0.02	),{},
					POINT_1B(Cross_Center,-0.11	,+0.02	),
					POINT_1B(Cross_Center,-0.11	,-0.02	),{},
			};

			};
		};
		class ZoomLevel1
		{
			condition = "user24<=3";
			class Static
			{
				type = line;
				points[] =
				{
					// Aiming box
					POINT_1B(Cross_Center,	1.4*-0.2,		1.3*-0.11	),
					POINT_1B(Cross_Center,	1.4*-0.2,		1.3*-0.15	),
					POINT_1B(Cross_Center,	1.4*-0.15,		1.3*-0.15	),{},
					POINT_1B(Cross_Center,	1.4*0.2,		1.3*-0.11		),
					POINT_1B(Cross_Center,	1.4*0.2,		1.3*-0.15		),
					POINT_1B(Cross_Center,	1.4*0.15,		1.3*-0.15	),{},
					POINT_1B(Cross_Center,	1.4*-0.2,		1.3*0.11	),
					POINT_1B(Cross_Center,	1.4*-0.2,		1.3*0.15	),
					POINT_1B(Cross_Center,	1.4*-0.15,		1.3*0.15	),{},
					POINT_1B(Cross_Center,	1.4*0.2,		1.3*0.11		),
					POINT_1B(Cross_Center,	1.4*0.2,		1.3*0.15		),
					POINT_1B(Cross_Center,	1.4*0.15,		1.3*0.15		),{},
				};
			};
		};
		class ZoomLevel2: ZoomLevel1
		{
			condition = "(user24>=4)*(user24<=4)";
			class Static
			{
				type = line;
				points[] =
				{
					// Aiming box
					POINT_1B(Cross_Center,	1.2*-0.2,		1.2*-0.11	),
					POINT_1B(Cross_Center,	1.2*-0.2,		1.2*-0.15	),
					POINT_1B(Cross_Center,	1.2*-0.15,		1.2*-0.15	),{},
					POINT_1B(Cross_Center,	1.2*0.2,		1.2*-0.11		),
					POINT_1B(Cross_Center,	1.2*0.2,		1.2*-0.15		),
					POINT_1B(Cross_Center,	1.2*0.15,		1.2*-0.15	),{},
					POINT_1B(Cross_Center,	1.2*-0.2,		1.2*0.11	),
					POINT_1B(Cross_Center,	1.2*-0.2,		1.2*0.15	),
					POINT_1B(Cross_Center,	1.2*-0.15,		1.2*0.15	),{},
					POINT_1B(Cross_Center,	1.2*0.2,		1.2*0.11		),
					POINT_1B(Cross_Center,	1.2*0.2,		1.2*0.15		),
					POINT_1B(Cross_Center,	1.2*0.15,		1.2*0.15		),{},
				};
			};
		};

		class ZoomLevel3: ZoomLevel1
		{
			condition = "(user24>=8)*(user24<=8)";
			class Static
			{
				type = line;
				points[] =
				{
					// Aiming box
					POINT_1B(Cross_Center,	1.1*-0.2,		1.1*-0.11	),
					POINT_1B(Cross_Center,	1.1*-0.2,		1.1*-0.15	),
					POINT_1B(Cross_Center,	1.1*-0.15,		1.1*-0.15	),{},
					POINT_1B(Cross_Center,	1.1*0.2,		1.1*-0.11		),
					POINT_1B(Cross_Center,	1.1*0.2,		1.1*-0.15		),
					POINT_1B(Cross_Center,	1.1*0.15,		1.1*-0.15	),{},
					POINT_1B(Cross_Center,	1.1*-0.2,		1.1*0.11	),
					POINT_1B(Cross_Center,	1.1*-0.2,		1.1*0.15	),
					POINT_1B(Cross_Center,	1.1*-0.15,		1.1*0.15	),{},
					POINT_1B(Cross_Center,	1.1*0.2,		1.1*0.11		),
					POINT_1B(Cross_Center,	1.1*0.2,		1.1*0.15		),
					POINT_1B(Cross_Center,	1.1*0.15,		1.1*0.15		),{},
				};
			};
		};
		class ZoomLevel4: ZoomLevel1
		{
			condition = "(user24>=18)*(user24<=18)";
			class Static
			{
				type = line;
				points[] =
				{
					// Aiming box
					POINT_1B(Cross_Center,	0.9*-0.2,		0.9*-0.11	),
					POINT_1B(Cross_Center,	0.9*-0.2,		0.9*-0.15	),
					POINT_1B(Cross_Center,	0.9*-0.15,		0.9*-0.15	),{},
					POINT_1B(Cross_Center,	0.9*0.2,		0.9*-0.11		),
					POINT_1B(Cross_Center,	0.9*0.2,		0.9*-0.15		),
					POINT_1B(Cross_Center,	0.9*0.15,		0.9*-0.15	),{},
					POINT_1B(Cross_Center,	0.9*-0.2,		0.9*0.11	),
					POINT_1B(Cross_Center,	0.9*-0.2,		0.9*0.15	),
					POINT_1B(Cross_Center,	0.9*-0.15,		0.9*0.15	),{},
					POINT_1B(Cross_Center,	0.9*0.2,		0.9*0.11		),
					POINT_1B(Cross_Center,	0.9*0.2,		0.9*0.15		),
					POINT_1B(Cross_Center,	0.9*0.15,		0.9*0.15		),{},
				};
			};
		};
	};
	class GreenPolygon
	{
		type = polygon;
		points[] =
		{
			// FLIR
			{
				POLYGON_BOX(0.125,0.05,0.31,0.95)
			},
		};
	};
	class BlackText
	{
		color[] = {0,0,0};
		alpha = 1;
		HUD_TEXT_STATIC(0.32,	0.96	,0.03,0.025,right,"FLIR",BtnFLIR1)
		HUD_TEXT_STATIC(0.32,	0.96	,0.03,0.025,right,"FLIR",BtnFLIR2)
		HUD_TEXT_STATIC(0.32,	0.96	,0.03,0.025,right,"FLIR",BtnFLIR3)
	};
};