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
	class Sensor_Offset
	{
		type	= fixed;
		pos[]	= {0.0, (0.03-0.1)};
	};
	class Static_Offset
	{
		type	= fixed;
		pos[]	= {0.5, (0.53-0.1)};
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
		aspectRatio		= __EVAL(SizeY10deg / SizeX10deg);
	};
	ROTATION_BONE(30)
	ROTATION_BONE(60)
	ROTATION_BONE(90)
	ROTATION_BONE(120)
	ROTATION_BONE(150)
	ROTATION_BONE(180)
	ROTATION_BONE(210)
	ROTATION_BONE(240)
	ROTATION_BONE(270)
	ROTATION_BONE(300)
	ROTATION_BONE(330)
	class Rotation_Inv_0: Rotation_0
	{
		min			= 0;
		max			= 360;
		minAngle	= 180;
		maxAngle	= -180;
	};
	ROTATION_INV_BONE(90)
	ROTATION_INV_BONE(180)
	ROTATION_INV_BONE(270)
};
class Draw
{
	alpha				= 1.0;
	color[]				= {0,0.12,0};
	MFD_CONDITION(MFD_CONDITION_NUMBER,4)
	class Draw_Static
	{
		type			= line;
		width			= 6.0;
		points[]		=
		{
			POINT2(0.00 + 0.03, 1.125 + 0.044),
			POINT2(0.12 + 0.03, 1.125 + 0.044),
			POINT2(0.12 + 0.03, 1.125 - 0.044),
			POINT2(0.00 + 0.03, 1.125 - 0.044),
			POINT2(0.00 + 0.03, 1.125 + 0.044),{},
			// Range arrows
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
			CIRCLE_BIG(Static_Offset,0.38),{},
			CIRCLE_BIG(Static_Offset,0.19),{},
			{Static_Offset,{0,		__EVAL(-0.74+0.45)},1},
			{Static_Offset,{0,		__EVAL(-0.76+0.45)},1},
			{Static_Offset,{0.05,	__EVAL(-0.76+0.45)},1},
			{Static_Offset,{0.05,	__EVAL(-0.80+0.45)},1},
			{Static_Offset,{-0.05,	__EVAL(-0.80+0.45)},1},
			{Static_Offset,{-0.05,	__EVAL(-0.76+0.45)},1},
			{Static_Offset,{0,		__EVAL(-0.76+0.45)},1},{},
			#define LINE_ROT(size,numb)\
			{Static_Offset,1,{Rotation_##numb##, 0.0,__EVAL(0.355/XtoYscale)},1},\
			{Static_Offset,1,{Rotation_##numb##, 0.0,__EVAL((0.355 - size)/XtoYscale)},1},{}
			#define SIZE_LINE_SMALL 0.025
			#define SIZE_LINE_BIG 0.04
			LINE_ROT(SIZE_LINE_BIG,0),
			LINE_ROT(SIZE_LINE_BIG,30),
			LINE_ROT(SIZE_LINE_BIG,60),
			LINE_ROT(SIZE_LINE_BIG,90),
			LINE_ROT(SIZE_LINE_BIG,120),
			LINE_ROT(SIZE_LINE_BIG,150),
			LINE_ROT(SIZE_LINE_BIG,180),
			LINE_ROT(SIZE_LINE_BIG,210),
			LINE_ROT(SIZE_LINE_BIG,240),
			LINE_ROT(SIZE_LINE_BIG,270),
			LINE_ROT(SIZE_LINE_BIG,300),
			LINE_ROT(SIZE_LINE_BIG,330),
			{}
		};
	};
	HUD_TEXT_2BONES(Static_Offset,Rotation_Inv_0,0.0,	-0.345,0.04,0.035,center,"N",Rotation_0_Text)
	HUD_TEXT_2BONES(Static_Offset,Rotation_Inv_90,0.0,	-0.345,0.04,0.035,center,"E",Rotation_90_Text)
	HUD_TEXT_2BONES(Static_Offset,Rotation_Inv_180,0.0,	-0.345,0.04,0.035,center,"S",Rotation_180_Text)
	HUD_TEXT_2BONES(Static_Offset,Rotation_Inv_270,0.0,	-0.345,0.04,0.035,center,"W",Rotation_270_Text)

	HUD_TEXT_STATIC(0.21,	0.96	,0.03,0.025,right,"IND",BtnIND)
	HUD_TEXT_STATIC(0.46,	0.96	,0.03,0.025,right,"SWAP",BtnSWAP)
	HUD_TEXT_STATIC(0.6,	0.96	,0.03,0.025,right,"HSD",BtnHSD)
	HUD_TEXT_STATIC(0.72,	0.96	,0.03,0.025,right,"DCLT",BtnDCLT)

	HUD_TEXT_STATIC(0.21,	0.015	,0.023,0.017,right,"SAR",BtnSAR)
	HUD_TEXT_STATIC(0.61,	0.015	,0.023,0.017,right,"FAC",BtnFAC)
	HUD_TEXT_STATIC(0.74,	0.015	,0.023,0.017,right,"INT",BtnINT)

	HUD_TEXT_STATIC(0.99,	0.418+0.022*0	,0.023,0.017,left,"S",BtnSen1)
	HUD_TEXT_STATIC(0.99,	0.418+0.022*1	,0.023,0.017,left,"E",BtnSen2)
	HUD_TEXT_STATIC(0.99,	0.418+0.022*2	,0.023,0.017,left,"N",BtnSen3)

	HUD_TEXT_STATIC(0.99,	0.121+0.022*0	,0.023,0.017,left,"N",BtnNett1)
	HUD_TEXT_STATIC(0.99,	0.121+0.022*1	,0.023,0.017,left,"E",BtnNett2)
	HUD_TEXT_STATIC(0.99,	0.121+0.022*2	,0.023,0.017,left,"T",BtnNett3)
	class GreenPolygon
	{
		type = polygon;
		points[] =
		{
			// EW
			{
				POLYGON_BOX(0.125,0.05,0.31,0.95)
			},
		};
	};
	class Black
	{
		color[]		= {0.0, 0.0, 0.0};
		alpha 		= 1;

		HUD_TEXT_STATIC(0.37,	0.96	,0.03,0.025,center,"EW",BtnFLIR1)
		HUD_TEXT_STATIC(0.37,	0.96	,0.03,0.025,center,"EW",BtnFLIR2)
		HUD_TEXT_STATIC(0.37,	0.96	,0.03,0.025,center,"EW",BtnFLIR3)
		class Static
		{
			type			= polygon;
			points[]		=
			{
				{
					POLYGON_BOX(0.05,0.04,0.6,0.31)
				},
				{
					POLYGON_BOX(0.07,0.05,0.745,0.21)
				}
			};
		};
	};
	class White
	{
		color[] = {1,1,1};
		alpha = 0.4;

		HUD_TEXT_STATIC(0.75,0.85-0.15,0.03,0.025,right,"M CHAFF",MChaff_Text)
		HUD_TEXT_STATIC(0.75,0.89-0.15,0.03,0.025,right,"M FLARE",MFlare_Text)
		HUD_TEXT_STATIC(0.75,0.93-0.15,0.03,0.025,right,"1 PROG",Prog_Text)
		class ChaffSource
		{
			type			= text;
			source			= cmammo;
			sourceScale 	= 1;
			align			= right;
			scale			= 1;
			TEXT_SIZEPOS(0.93,0.85-0.15,0.03,0.025)
		};
		class FlareSource: ChaffSource
		{
			TEXT_SIZEPOS(0.93,0.89-0.15,0.03,0.025)
		};
		HUD_TEXT_STATIC(0.93,0.93-0.15,0.03,0.025,right,"10",ProgS_Text)
		HUD_TEXT_SOURCE_SCALE(0.5,0.74,0.03,0.025,left,coordinateX,0.01,0,0,3,Range_TextVal1)
		HUD_TEXT_SOURCE_SCALE(0.6,0.74,0.03,0.025,left,coordinateY,0.01,0,0,3,Range_TextVal2)
		class DrawPolygon
		{
			type = polygon;
			points[] =
			{
				{
					POLYGON_BOX_BONE(Static_Offset,0.008,0.05,0.0-0.005,-0.03)
				},
				{
					POLYGON_BOX_BONE(Static_Offset,0.065,0.008,-0.0275-0.005,-0.02)
				},
				{
					POLYGON_BOX_BONE(Static_Offset,0.03,0.005,-0.01-0.005,0.005)
				},
			};
		};
	};
	HUD_TEXT_STATIC(0.09,	0.83	,0.022,0.02,center,"JTRS",BtnDatalink1)
	HUD_TEXT_STATIC(0.09,	0.86	,0.022,0.02,center,"ON",BtnDatalink2)
	HUD_TEXT_STATIC(0.06,	0.75	,0.022,0.02,right,"HOOK",BtnHook)

	class TargetInfo
	{
		condition = "targetHeight >= 1";
		HUD_TEXT_STATIC(0.505,	0.78	,0.022,0.02,center,"TARGET",BtnDatalink1)
		HUD_TEXT_SOURCE_SCALE(0.57,0.81,0.03,0.025,left,targetHeight,1,0,0,1,TargetInfo1)
		HUD_TEXT_SOURCE_SCALE(0.57,0.84,0.03,0.025,left,LarTargetDist,1,0,0,1,TargetInfo2)
		HUD_TEXT_SOURCE_SCALE(0.57,0.87,0.03,0.025,left,LarTargetSpeed,1,0,0,1,TargetInfo3)
		class Static
		{
			type			= line;
			width = 4;
			points[]		=
			{
				DRAW_BOX(0.41,0.775,0.185,0.13),{},
			};
		};
	};

	class HeadingText
	{
		type			= text;
		source			= heading;
		sourceScale		= 1;
		sourceLength	= 3;
		refreshRate		= 0.1;
		align			= center;
		scale			= 1;
		TEXT_SIZEPOS(0.5,0.09,0.03,0.025)
	};
	HUD_TEXT_SOURCE_SCALE_INDEX(0.81,0.22,0.04,0.03,left,user,0.001,0,0,0,25,Range_TextVal1)
	HUD_TEXT_SOURCE_SCALE_INDEX(0.64,0.315,0.03,0.025,left,user,0.0005,0,0,0,25,Range_TextVal2)
	HUD_TEXT_SOURCE_SCALE_INDEX(0.02 ,0.185,0.03,0.025,right,user,0.001,0,0,0,25,Range_TextVal3)
};