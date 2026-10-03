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
	class Direction_Center
	{
		type	= fixed;
		pos[]	= {0.5, 0.555};
	};
	class Rotation_0
	{
		pos0[]		= {0.0,0.0};
		pos10[]		= {0.0,0.0};
		center[]	= {0.0,0.0};
		type		= rotational;
		source		= heading;
		min			= 0;
		max			= 360;
		minAngle	= 0;
		maxAngle	= -360;
		aspectRatio	= __EVAL(SizeY10deg/SizeX10deg);
	};
	#define ROTATION_BONE(numb)\
	class Rotation_##numb##: Rotation_0\
	{\
		minAngle	= __EVAL(numb + 0);\
		maxAngle	= __EVAL(numb - 360);\
	};
	ROTATION_BONE(10)
	ROTATION_BONE(20)
	ROTATION_BONE(30)
	ROTATION_BONE(40)
	ROTATION_BONE(50)
	ROTATION_BONE(60)
	ROTATION_BONE(70)
	ROTATION_BONE(80)
	ROTATION_BONE(90)
	ROTATION_BONE(100)
	ROTATION_BONE(110)
	ROTATION_BONE(120)
	ROTATION_BONE(130)
	ROTATION_BONE(140)
	ROTATION_BONE(150)
	ROTATION_BONE(160)
	ROTATION_BONE(170)
	ROTATION_BONE(180)
	ROTATION_BONE(190)
	ROTATION_BONE(200)
	ROTATION_BONE(210)
	ROTATION_BONE(220)
	ROTATION_BONE(230)
	ROTATION_BONE(240)
	ROTATION_BONE(250)
	ROTATION_BONE(260)
	ROTATION_BONE(270)
	ROTATION_BONE(280)
	ROTATION_BONE(290)
	ROTATION_BONE(300)
	ROTATION_BONE(310)
	ROTATION_BONE(320)
	ROTATION_BONE(330)
	ROTATION_BONE(340)
	ROTATION_BONE(350)
	class Rotation_Inv_0: Rotation_0
	{
		min			= 0;
		max			= 360;
		minAngle	= 180;
		maxAngle	= -180;
	};
	#define ROTATION_INV_BONE(numb)\
	class Rotation_Inv_##numb##: Rotation_Inv_0\
	{\
		minAngle	= __EVAL(numb + 180);\
		maxAngle	= __EVAL(numb - 180);\
	};
	ROTATION_INV_BONE(30)
	ROTATION_INV_BONE(60)
	ROTATION_INV_BONE(90)
	ROTATION_INV_BONE(120)
	ROTATION_INV_BONE(150)
	ROTATION_INV_BONE(180)
	ROTATION_INV_BONE(210)
	ROTATION_INV_BONE(240)
	ROTATION_INV_BONE(270)
	ROTATION_INV_BONE(300)
	ROTATION_INV_BONE(330)

	class Rotation_WP_Dir
	{
		pos0[]		= {0.0, 0.0};
		pos10[]		= {0.0, 0.0};
		center[]	= {0.0,0.0};
		type		= rotational;
		source		= user;
		sourceIndex	= 10;
		min			= 0;
		max			= 360;
		minAngle	= 0;
		maxAngle	= -360;
		aspectRatio	= 1;
	};
	class Rotation_WP_Center
	{
		pos0[]		= {0.0, 0.0};
		pos10[]		= {0.0, 0.0};
		center[]	= {0.5, 0.555};
		type		= rotational;
		source		= heading;
		min			= 0;
		max			= 360;
		minAngle	= -180;
		maxAngle	= -360-180;
		aspectRatio	= __EVAL(SizeY10deg/SizeX10deg);
	};

	// Waypoint related
	class MovementY
	{
		type			= linear;
		source			= user;
		sourceIndex 	= 5;
		refreshRate		= 0.1;
		min				= 0; // minus values were for some reason not working very well
		max				= 2;
		sourceScale		= 1;
		maxPos[]		= {0,1};
		minPos[]		= {0,-1};
	};
	class MovementX: MovementY
	{
		sourceIndex 	= 4;
		maxPos[]		= {-1,0};
		minPos[]		= {1,0};
	};
	#define WP_MACRO(num,index)						\
	class WP##num##_PosX: MovementX 				\
	{												\
		sourceIndex 	= ##index##;				\
	};												\
	class WP##num##_PosY: MovementY					\
	{												\
		sourceIndex 	= __EVAL(##index## + 1);	\
	};
	WP_MACRO(1,26)
	WP_MACRO(2,28)
	WP_MACRO(3,30)
	WP_MACRO(4,32)
	WP_MACRO(5,34)
	WP_MACRO(6,36)
	WP_MACRO(7,38)
	WP_MACRO(8,40)
	WP_MACRO(9,42)
	WP_MACRO(10,44)
	WP_MACRO(11,46)
};
class Draw
{
	alpha				= 1.0;
	color[]				= {0,0.12,0};
	MFD_CONDITION(MFD_CONDITION_NUMBER,1)
	class Static
	{
		type = line;
		width = 4;
		points[] =
		{
			{{0,0.815},1},
			{{1,0.815},1},{},
			{{0,0.825},1},
			{{1,0.825},1},{},

			// Joker arrows
			{{__EVAL(0.0	+0.02),__EVAL(0.158-0.00)},1},
			{{__EVAL(0.05	+0.02),__EVAL(0.158-0.00)},1},
			{{__EVAL(0.025	+0.02),__EVAL(0.138-0.00)},1},
			{{__EVAL(0.0	+0.02),__EVAL(0.158-0.00)},1},
			{},
			{{__EVAL(0.0	+0.02),__EVAL(0.138+0.1)},1},
			{{__EVAL(0.05	+0.02),__EVAL(0.138+0.1)},1},
			{{__EVAL(0.025	+0.02),__EVAL(0.158+0.1)},1},
			{{__EVAL(0.0	+0.02),__EVAL(0.138+0.1)},1},
			{},
		};
	};
	class StaticClip
	{
		clipTL[]	= {0, 0.0};
		clipBR[]	= {1, 0.815};
		class Static
		{
			type = line;
			width = 4;
			points[] =
			{
				CIRCLE_BIG(Direction_Center,0.57),{},
			};
		};
		class Purple
		{
			color[] = {0.11,0.02,0.12};
			alpha = 0.4;
			class WP
			{
				condition		= "wpvalid";
				class Draw
				{
					type = line;
					points[] =
					{
						{Rotation_WP_Center,{Rotation_WP_Dir,	0,		__EVAL(0.41*0.75)},1},
						{Rotation_WP_Center,{Rotation_WP_Dir,	0.022,	__EVAL(0.38*0.75)},1},
						{Rotation_WP_Center,{Rotation_WP_Dir,	0.014,	__EVAL(0.38*0.75)},1},
						{Rotation_WP_Center,{Rotation_WP_Dir,	0.014,	__EVAL(0.36*0.75)},1},
						{Rotation_WP_Center,{Rotation_WP_Dir,	-0.014,	__EVAL(0.36*0.75)},1},
						{Rotation_WP_Center,{Rotation_WP_Dir,	-0.014,	__EVAL(0.38*0.75)},1},
						{Rotation_WP_Center,{Rotation_WP_Dir,	-0.022,	__EVAL(0.38*0.75)},1},
						{Rotation_WP_Center,{Rotation_WP_Dir,	0,		__EVAL(0.41*0.75)},1},
						{},
						{Rotation_WP_Center,{Rotation_WP_Dir,	+0.01,	__EVAL(-0.36*0.75)},1},
						{Rotation_WP_Center,{Rotation_WP_Dir,	-0.01,	__EVAL(-0.36*0.75)},1},
						{Rotation_WP_Center,{Rotation_WP_Dir,	-0.01,	__EVAL(-0.41*0.75)},1},
						{Rotation_WP_Center,{Rotation_WP_Dir,	+0.01,	__EVAL(-0.41*0.75)},1},
						{Rotation_WP_Center,{Rotation_WP_Dir,	+0.01,	__EVAL(-0.36*0.75)},1},
					};
				};
				class WP1
				{
					condition = "user26>=0";
					class CurrentWaypoint
					{
						color[]	= {0.9, 0.0, 0.0};
						alpha	= 1;
						condition = "1-WPIndex";
						class WaypointShape
						{
							width		= 16;
							type		= line;
							points[]	=
							{
								CIRCLE_BIG_3B(Direction_Center,WP2_PosX,WP2_PosY, 0.01),{},
							};
						};
					};
					class WaypointShape
					{
						width		= 6;
						type		= line;
						points[]	=
						{
							CIRCLE_BIG_3B(Direction_Center,WP1_PosX,WP1_PosY, 0.02),{},
						};
					};
					HUD_TEXT_3BONES(Direction_Center,WP1_PosX,WP1_PosY,0.05,-0.008,0.022,0.019,center,"01",TexWPNumber)
				};
				class WP2
				{
					condition = "user28>=0";
					class CurrentWaypoint
					{
						color[]	= {0.9, 0.0, 0.0};
						alpha	= 1;
						condition = "(WPIndex>=1)*(WPIndex<=1)";
						class WaypointShape
						{
							width		= 16;
							type		= line;
							points[]	=
							{
								CIRCLE_BIG_3B(Direction_Center,WP2_PosX,WP2_PosY, 0.01),{},
							};
						};
					};
					class WaypointShape
					{
						width		= 6;
						type		= line;
						points[]	=
						{
							CIRCLE_BIG_3B(Direction_Center,WP2_PosX,WP2_PosY, 0.02),{},
							{Direction_Center,1,WP1_PosX,1,WP1_PosY,1,{0,0},1},
							{Direction_Center,1,WP2_PosX,1,WP2_PosY,1,{0,0},1}
						};
					};
					HUD_TEXT_3BONES(Direction_Center,WP2_PosX,WP2_PosY,0.05,-0.008,0.022,0.019,center,"02",TexWPNumber)
				};
				class WP3
				{
					condition = "user30>=0";
					class CurrentWaypoint
					{
						color[]	= {0.9, 0.0, 0.0};
						alpha	= 1;
						condition = "(WPIndex>=2)*(WPIndex<=2)";
						class WaypointShape
						{
							width		= 22;
							type		= line;
							points[]	=
							{
								CIRCLE_BIG_3B(Direction_Center,WP3_PosX,WP3_PosY, 0.01),{},
							};
						};
					};
					class WaypointShape
					{
						width		= 6;
						type		= line;
						points[]	=
						{
							CIRCLE_BIG_3B(Direction_Center,WP3_PosX,WP3_PosY, 0.02),{},
							{Direction_Center,1,WP2_PosX,1,WP2_PosY,1,{0,0},1},
							{Direction_Center,1,WP3_PosX,1,WP3_PosY,1,{0,0},1}
						};
					};
					HUD_TEXT_3BONES(Direction_Center,WP3_PosX,WP3_PosY,0.05,-0.008,0.022,0.019,center,"03",TexWPNumber)
				};
				class WP4
				{
					condition = "user32>=0";
					class CurrentWaypoint
					{
						color[]	= {0.9, 0.0, 0.0};
						alpha	= 1;
						condition = "(WPIndex>=3)*(WPIndex<=3)";
						class WaypointShape
						{
							width		= 22;
							type		= line;
							points[]	=
							{
								CIRCLE_BIG_3B(Direction_Center,WP4_PosX,WP4_PosY, 0.01),{},
							};
						};
					};
					class WaypointShape
					{
						width		= 6;
						type		= line;
						points[]	=
						{
							CIRCLE_BIG_3B(Direction_Center,WP4_PosX,WP4_PosY, 0.02),{},
							{Direction_Center,1,WP3_PosX,1,WP3_PosY,1,{0,0},1},
							{Direction_Center,1,WP4_PosX,1,WP4_PosY,1,{0,0},1}
						};
					};
					HUD_TEXT_3BONES(Direction_Center,WP4_PosX,WP4_PosY,0.05,-0.008,0.022,0.019,center,"04",TexWPNumber)
				};
				class WP5
				{
					condition = "user34>=0";
					class CurrentWaypoint
					{
						color[]	= {0.9, 0.0, 0.0};
						alpha	= 1;
						condition = "(WPIndex>=4)*(WPIndex<=4)";
						class WaypointShape
						{
							width		= 22;
							type		= line;
							points[]	=
							{
								CIRCLE_BIG_3B(Direction_Center,WP5_PosX,WP5_PosY, 0.01),{},
							};
						};
					};
					class WaypointShape
					{
						width		= 6;
						type		= line;
						points[]	=
						{
							CIRCLE_BIG_3B(Direction_Center,WP5_PosX,WP5_PosY, 0.02),{},
							{Direction_Center,1,WP4_PosX,1,WP4_PosY,1,{0,0},1},
							{Direction_Center,1,WP5_PosX,1,WP5_PosY,1,{0,0},1}
						};
					};
					HUD_TEXT_3BONES(Direction_Center,WP5_PosX,WP5_PosY,0.05,-0.008,0.022,0.019,center,"05",TexWPNumber)
				};
				class WP6
				{
					condition = "user36>=0";
					class CurrentWaypoint
					{
						color[]	= {0.9, 0.0, 0.0};
						alpha	= 1;
						condition = "(WPIndex>=5)*(WPIndex<=5)";
						class WaypointShape
						{
							width		= 22;
							type		= line;
							points[]	=
							{
								CIRCLE_BIG_3B(Direction_Center,WP6_PosX,WP6_PosY, 0.01),{},
							};
						};
					};
					class WaypointShape
					{
						width		= 6;
						type		= line;
						points[]	=
						{
							CIRCLE_BIG_3B(Direction_Center,WP6_PosX,WP6_PosY, 0.02),{},
							{Direction_Center,1,WP5_PosX,1,WP5_PosY,1,{0,0},1},
							{Direction_Center,1,WP6_PosX,1,WP6_PosY,1,{0,0},1}
						};
					};
					HUD_TEXT_3BONES(Direction_Center,WP6_PosX,WP6_PosY,0.05,-0.008,0.022,0.019,center,"06",TexWPNumber)
				};
				class WP7
				{
					condition = "user38>=0";
					class CurrentWaypoint
					{
						color[]	= {0.9, 0.0, 0.0};
						alpha	= 1;
						condition = "(WPIndex>=6)*(WPIndex<=6)";
						class WaypointShape
						{
							width		= 22;
							type		= line;
							points[]	=
							{
								CIRCLE_BIG_3B(Direction_Center,WP7_PosX,WP7_PosY, 0.01),{},
							};
						};
					};
					class WaypointShape
					{
						width		= 6;
						type		= line;
						points[]	=
						{
							CIRCLE_BIG_3B(Direction_Center,WP7_PosX,WP7_PosY, 0.02),{},
							{Direction_Center,1,WP6_PosX,1,WP6_PosY,1,{0,0},1},
							{Direction_Center,1,WP7_PosX,1,WP7_PosY,1,{0,0},1}
						};
					};
					HUD_TEXT_3BONES(Direction_Center,WP7_PosX,WP7_PosY,0.05,-0.008,0.022,0.019,center,"07",TexWPNumber)
				};
				class WP8
				{
					condition = "user40>=0";
					class CurrentWaypoint
					{
						color[]	= {0.9, 0.0, 0.0};
						alpha	= 1;
						condition = "(WPIndex>=7)*(WPIndex<=7)";
						class WaypointShape
						{
							width		= 22;
							type		= line;
							points[]	=
							{
								CIRCLE_BIG_3B(Direction_Center,WP8_PosX,WP8_PosY, 0.01),{},
							};
						};
					};
					class WaypointShape
					{
						width		= 6;
						type		= line;
						points[]	=
						{
							CIRCLE_BIG_3B(Direction_Center,WP8_PosX,WP8_PosY, 0.02),{},
							{Direction_Center,1,WP7_PosX,1,WP7_PosY,1,{0,0},1},
							{Direction_Center,1,WP8_PosX,1,WP8_PosY,1,{0,0},1}
						};
					};
					HUD_TEXT_3BONES(Direction_Center,WP8_PosX,WP8_PosY,0.05,-0.008,0.022,0.019,center,"08",TexWPNumber)
				};
				class WP9
				{
					condition = "user42>=0";
					class CurrentWaypoint
					{
						color[]	= {0.9, 0.0, 0.0};
						alpha	= 1;
						condition = "(WPIndex>=8)*(WPIndex<=8)";
						class WaypointShape
						{
							width		= 22;
							type		= line;
							points[]	=
							{
								CIRCLE_BIG_3B(Direction_Center,WP9_PosX,WP9_PosY, 0.01),{},
							};
						};
					};
					class WaypointShape
					{
						width		= 6;
						type		= line;
						points[]	=
						{
							CIRCLE_BIG_3B(Direction_Center,WP9_PosX,WP9_PosY, 0.02),{},
							{Direction_Center,1,WP8_PosX,1,WP8_PosY,1,{0,0},1},
							{Direction_Center,1,WP9_PosX,1,WP9_PosY,1,{0,0},1}
						};
					};
					HUD_TEXT_3BONES(Direction_Center,WP9_PosX,WP9_PosY,0.05,-0.008,0.022,0.019,center,"09",TexWPNumber)
				};
				class WP10
				{
					condition = "user44>=0";
					class CurrentWaypoint
					{
						color[]	= {0.9, 0.0, 0.0};
						alpha	= 1;
						condition = "(WPIndex>=9)*(WPIndex<=9)";
						class WaypointShape
						{
							width		= 22;
							type		= line;
							points[]	=
							{
								CIRCLE_BIG_3B(Direction_Center,WP10_PosX,WP10_PosY, 0.01),{},
							};
						};
					};
					class WaypointShape
					{
						width		= 6;
						type		= line;
						points[]	=
						{
							CIRCLE_BIG_3B(Direction_Center,WP10_PosX,WP10_PosY, 0.02),{},
							{Direction_Center,1,WP9_PosX,1,WP9_PosY,1,{0,0},1},
							{Direction_Center,1,WP10_PosX,1,WP10_PosY,1,{0,0},1}
						};
					};
					HUD_TEXT_3BONES(Direction_Center,WP10_PosX,WP10_PosY,0.05,-0.008,0.022,0.019,center,"10",TexWPNumber)
				};
				class CustomWP
				{
					condition = "user46>=0";
					color[]	= {1.0, 0.5, 0.0};
					alpha	= 0.5;
					class WaypointShape
					{
						width		= 6;
						type		= line;
						points[]	=
						{
							CIRCLE_BIG_3B(Direction_Center,WP11_PosX,WP11_PosY, 0.02),{}
						};
					};
					HUD_TEXT_3BONES(Direction_Center,WP11_PosX,WP11_PosY,0.05,-0.008,0.022,0.019,center,"CWP",TexWPNumber)
				};
			};
		};
	};
	HUD_TEXT_STATIC(0.21,	0.96	,0.03,0.025,right,"IND",BtnIND)
	HUD_TEXT_STATIC(0.46,	0.96	,0.03,0.025,right,"SWAP",BtnSWAP)
	HUD_TEXT_STATIC(0.6,	0.96	,0.03,0.025,right,"SMS",BtnSMS)
	HUD_TEXT_STATIC(0.72,	0.96	,0.03,0.025,right,"DCLT",BtnDCLT)

	HUD_TEXT_STATIC(0.01,	0.418+0.022*0	,0.023,0.017,right,"D",BtnDEL1)
	HUD_TEXT_STATIC(0.01,	0.418+0.022*1	,0.023,0.017,right,"E",BtnDEL2)
	HUD_TEXT_STATIC(0.01,	0.418+0.022*2	,0.023,0.017,right,"L",BtnDEL3)

	HUD_TEXT_STATIC(0.01,	0.345	,0.023,0.017,right,"ADHSI",BtnADHSI)

	class MapScale
	{
		type			= text;
		source			= user;
		sourceIndex 	= 9;
		sourceScale		= 1;
		sourceLength	= 2;

		align			= right;
		scale			= 1;
		TEXT_SIZEPOS(0.02 ,0.185,0.03,0.025)
	};

	HUD_TEXT_STATIC(0.99,	0.418+0.022*0	,0.023,0.017,left,"A",BtnAnm1)
	HUD_TEXT_STATIC(0.99,	0.418+0.022*1	,0.023,0.017,left,"N",BtnAnm2)
	HUD_TEXT_STATIC(0.99,	0.418+0.022*2	,0.023,0.017,left,"M",BtnAnm3)

	HUD_TEXT_STATIC(0.99,	0.512+0.022*0	,0.023,0.017,left,"R",BtnRout1)
	HUD_TEXT_STATIC(0.99,	0.512+0.022*1	,0.023,0.017,left,"O",BtnRout2)
	HUD_TEXT_STATIC(0.99,	0.512+0.022*2	,0.023,0.017,left,"U",BtnRout3)
	HUD_TEXT_STATIC(0.99,	0.512+0.022*3	,0.023,0.017,left,"T",BtnRout4)

	HUD_TEXT_STATIC(0.99,	0.321+0.022*0	,0.023,0.017,left,"S",BtnSym1)
	HUD_TEXT_STATIC(0.99,	0.321+0.022*1	,0.023,0.017,left,"Y",BtnSym2)
	HUD_TEXT_STATIC(0.99,	0.321+0.022*2	,0.023,0.017,left,"M",BtnSym3)

	HUD_TEXT_STATIC(0.99,	0.121+0.022*0	,0.023,0.017,left,"D",BtnDep1)
	HUD_TEXT_STATIC(0.99,	0.121+0.022*1	,0.023,0.017,left,"E",BtnDep2)
	HUD_TEXT_STATIC(0.99,	0.121+0.022*2	,0.023,0.017,left,"P",BtnDep3)

	HUD_TEXT_STATIC(0.92,	0.638+0.022*0	,0.023,0.017,right,"CLR",BtnClrStrm1)
	HUD_TEXT_STATIC(0.92,	0.638+0.022*1	,0.023,0.017,right,"STRM",BtnClrStrm2)

	HUD_TEXT_STATIC(0.245,	0.015	,0.023,0.017,center,"MAN",BtnClrMan1)

	// Waypoint related
	HUD_TEXT_STATIC(0.77,	0.015	,0.023,0.017,center,"ROUTE",BtnClrRoute1)
	class WPIndex
	{
		type			= text;
		source			= wpIndex;
		sourceScale		= 1;
		sourceLength	= 2;

		align			= right;
		scale			= 1;
		TEXT_SIZEPOS(0.72 ,0.04,0.023,0.017)
	};
	HUD_TEXT_STATIC(0.768 ,0.04	,0.023,0.017,center,"-",BtnClrRoute2)
	class WPTotal
	{
		type			= text;
		source			= user;
		sourceIndex		= 12;
		sourceScale		= 1;
		sourceLength	= 2;

		align			= right;
		scale			= 1;
		TEXT_SIZEPOS(0.78 ,0.04,0.023,0.017)
	};
	// Bottom
	class WPdist
	{
		type			= text;
		source			= wpdist;
		sourceScale		= 0.001;
		sourcePrecision = 1;

		align			= left;
		scale			= 1;
		TEXT_SIZEPOS(0.32 ,0.85,0.022,0.017)
	};
	class WPDirection
	{
		refreshRate 	= 0.2;
		type			= text;
		source			= user;
		sourceIndex		= 10;
		sourceScale		= 1;
		sourceLength	= 2;

		align			= left;
		scale			= 1;
		TEXT_SIZEPOS(0.32-0.015 ,0.85+0.02*1,0.022,0.017)
	};
	HUD_TEXT_STATIC(0.32,	0.85+0.02*1-0.003	,0.017,0.013,left,"o",WPDirectionDeg)
	class WPDirectionRelative: WPDirection
	{
		sourceIndex		= 11;
		sourceScale		= 1;
		sourceLength	= 4;
		sourcePrecision = 1;
		TEXT_SIZEPOS(0.32 ,0.85+0.02*2,0.022,0.017)
	};

	HUD_TEXT_STATIC(0.72,					0.85	,0.022,0.017,right,"TQ",TxtTq1)
	HUD_TEXT_STATIC(0.72+0.13,				0.85	,0.022,0.017,right,"%",TxtTq2)
	HUD_TEXT_SOURCE_SCALE(0.72+0.13,		0.85	,0.022,0.017,left,throttle,100,0,0,0,TQVal)
	HUD_TEXT_STATIC(0.72,					0.87	,0.022,0.017,right,"T5",TxtT51)
	HUD_TEXT_STATIC(0.72+0.13,				0.865	,0.02,0.015,right,"o",TxtT52)
	HUD_TEXT_SOURCE_SCALE(0.72+0.13,		0.87	,0.022,0.017,left,rpm,760,0,0,0,T5Val)
	class GreenPolygon
	{
		type = polygon;
		points[] =
		{
			// HSD
			{
				POLYGON_BOX(0.14,0.05,0.31,0.95)
			},
		};
	};
	class BlackText
	{
		color[] = {0,0,0};
		alpha = 1;
		HUD_TEXT_STATIC(0.34,	0.96	,0.03,0.025,right,"HSD",BtnEICAS1)
		HUD_TEXT_STATIC(0.34,	0.96	,0.03,0.025,right,"HSD",BtnEICAS2)
		HUD_TEXT_STATIC(0.34,	0.96	,0.03,0.025,right,"HSD",BtnEICAS3)
	};
	class White
	{
		color[] = {1,1,1};
		alpha = 0.4;

		class Static_3
		{
			type			= line;
			width			= 3.0;
			points[]		=
			{
				#define LINE_ROT(size,numb)\
				{Direction_Center,1,{Rotation_##numb##, 0.0,__EVAL(0.26)},1},\
				{Direction_Center,1,{Rotation_##numb##, 0.0,__EVAL(0.26 - size)},1},{}
				#define SIZE_LINE_SMALL 0.035
				LINE_ROT(SIZE_LINE_SMALL,10),{},
				LINE_ROT(SIZE_LINE_SMALL,20),{},
				LINE_ROT(SIZE_LINE_SMALL,40),{},
				LINE_ROT(SIZE_LINE_SMALL,50),{},
				LINE_ROT(SIZE_LINE_SMALL,70),{},
				LINE_ROT(SIZE_LINE_SMALL,80),{},
				LINE_ROT(SIZE_LINE_SMALL,100),{},
				LINE_ROT(SIZE_LINE_SMALL,110),{},
				LINE_ROT(SIZE_LINE_SMALL,130),{},
				LINE_ROT(SIZE_LINE_SMALL,140),{},
				LINE_ROT(SIZE_LINE_SMALL,160),{},
				LINE_ROT(SIZE_LINE_SMALL,170),{},
				LINE_ROT(SIZE_LINE_SMALL,190),{},
				LINE_ROT(SIZE_LINE_SMALL,200),{},
				LINE_ROT(SIZE_LINE_SMALL,220),{},
				LINE_ROT(SIZE_LINE_SMALL,230),{},
				LINE_ROT(SIZE_LINE_SMALL,250),{},
				LINE_ROT(SIZE_LINE_SMALL,260),{},
				LINE_ROT(SIZE_LINE_SMALL,280),{},
				LINE_ROT(SIZE_LINE_SMALL,290),{},
				LINE_ROT(SIZE_LINE_SMALL,310),{},
				LINE_ROT(SIZE_LINE_SMALL,320),{},
				LINE_ROT(SIZE_LINE_SMALL,340),{},
				LINE_ROT(SIZE_LINE_SMALL,350),{},
			};
		};
		class DrawPolygon
		{
			type = polygon;
			points[] =
			{
				{
					POLYGON_BOX_BONE(Direction_Center,0.008,0.05,0.0,-0.03)
				},
				{
					POLYGON_BOX_BONE(Direction_Center,0.065,0.008,-0.0275,-0.02)
				},
				{
					POLYGON_BOX_BONE(Direction_Center,0.03,0.005,-0.01,0.005)
				},
			};
		};
		HUD_TEXT_2BONES(Direction_Center,Rotation_Inv_0,	0.0,-0.26,0.03,0.025,center,"N",Rotation_0_Text)
		HUD_TEXT_2BONES(Direction_Center,Rotation_Inv_30,	0.0,-0.26,0.03,0.025,center,"03",Rotation_30_Text)
		HUD_TEXT_2BONES(Direction_Center,Rotation_Inv_60,	0.0,-0.26,0.03,0.025,center,"06",Rotation_60_Text)
		HUD_TEXT_2BONES(Direction_Center,Rotation_Inv_90,	0.0,-0.26,0.03,0.025,center,"E",Rotation_90_Text)
		HUD_TEXT_2BONES(Direction_Center,Rotation_Inv_120,	0.0,-0.26,0.03,0.025,center,"12",Rotation_120_Text)
		HUD_TEXT_2BONES(Direction_Center,Rotation_Inv_150,	0.0,-0.26,0.03,0.025,center,"15",Rotation_150_Text)
		HUD_TEXT_2BONES(Direction_Center,Rotation_Inv_180,	0.0,-0.26,0.03,0.025,center,"S",Rotation_180_Text)
		HUD_TEXT_2BONES(Direction_Center,Rotation_Inv_210,	0.0,-0.26,0.03,0.025,center,"21",Rotation_210_Text)
		HUD_TEXT_2BONES(Direction_Center,Rotation_Inv_240,	0.0,-0.26,0.03,0.025,center,"24",Rotation_240_Text)
		HUD_TEXT_2BONES(Direction_Center,Rotation_Inv_270,	0.0,-0.26,0.03,0.025,center,"W",Rotation_270_Text)
		HUD_TEXT_2BONES(Direction_Center,Rotation_Inv_300,	0.0,-0.26,0.03,0.025,center,"30",Rotation_300_Text)
		HUD_TEXT_2BONES(Direction_Center,Rotation_Inv_330,	0.0,-0.26,0.03,0.025,center,"33",Rotation_330_Text)
	};
};