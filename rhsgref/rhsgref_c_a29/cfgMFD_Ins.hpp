#define PosX0Center 0.50 // 502
#define PosY0Center 0.50 // 49
#define SizeX10deg 0.140
#define SizeY10deg 0.119
#define XtoYscale (SizeX10deg / SizeY10deg)

#define PosXCenterHorizont 0.65
#define PosYCenterHorizont 0.245
#define SizeX10degHorizon 0.02
#define SizeY10degHorizon 0.3

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
MFD_MATERIAL

#define DEF_HORIZONT_SPACING_Plus(XX) 													\
	class LevelP##XX: Level0 															\
	{ 																					\
		type			= line; 														\
		width			= 3;															\
		points[]		= 																\
		{ 																				\
			{LevelP##XX,{__EVAL(-0.09+0.014),0.04},1}, 									\
			{LevelP##XX,{__EVAL(+0.09-0.014),0.04},1} 									\
		}; 																				\
	}; 																					\
	class VALP_1_##XX 																	\
	{ 																					\
		type			= text; 														\
		source			= static; 														\
		text			= #XX; 															\
		align			= left; 														\
		scale			= 1; 															\
		sourceScale		= 1; 															\
		pos[]			= {LevelP##XX,{__EVAL(0.00 - 0.09),__EVAL(0.0 	+0.03)},1}; 	\
		right[]			= {LevelP##XX,{__EVAL(0.03 - 0.09),__EVAL(0.0 	+0.03)},1}; 	\
		down[]			= {LevelP##XX,{__EVAL(0.00 - 0.09),__EVAL(0.025	+0.03)},1}; 	\
	};																					\
	class VALP_1_##XX##_R 																\
	{ 																					\
		type			= text; 														\
		source			= static; 														\
		text			= #XX; 															\
		align			= right; 														\
		scale			= 1; 															\
		sourceScale		= 1; 															\
		pos[]			= {LevelP##XX,{__EVAL(0.00 + 0.09),__EVAL(0.0 	+0.03)},1}; 	\
		right[]			= {LevelP##XX,{__EVAL(0.03 + 0.09),__EVAL(0.0 	+0.03)},1}; 	\
		down[]			= {LevelP##XX,{__EVAL(0.00 + 0.09),__EVAL(0.025	+0.03)},1}; 	\
	}



#define DEF_HORIZONT_SPACING_Minus(XX) 													\
	class LevelM##XX: Level0 															\
	{ 																					\
		type			= line; 														\
		width			= 3;															\
		points[]		= 																\
		{ 																				\
			{LevelM##XX,{__EVAL(-0.09+0.014*1),-0.04},1}, 								\
			{LevelM##XX,{__EVAL( 0.09-0.014*1),-0.04},1}, 								\
		}; 																				\
	}; 																					\
	class VALM_1_##XX 																	\
	{ 																					\
		type			= text; 														\
		source			= static; 														\
		text			= ##XX##;														\
		align			= left; 														\
		scale			= 1; 															\
		sourceScale		= 1; 															\
		sourceLength	= 2; 															\
		pos[]			= {LevelM##XX,{__EVAL(0.00 - 0.09),__EVAL(0.0 	-0.05)},1}; 	\
		right[]			= {LevelM##XX,{__EVAL(0.03 - 0.09),__EVAL(0.0 	-0.05)},1}; 	\
		down[]			= {LevelM##XX,{__EVAL(0.00 - 0.09),__EVAL(0.025	-0.05)},1}; 	\
	};																					\
	class VALM_1_##XX##_R 																\
	{ 																					\
		type			= text; 														\
		source			= static; 														\
		text			= ##XX##;														\
		align			= right; 														\
		scale			= 1; 															\
		sourceScale		= 1; 															\
		sourceLength	= 2; 															\
		pos[]			= {LevelM##XX,{__EVAL(0.00 + 0.09),__EVAL(0.0 	-0.05)},1}; 	\
		right[]			= {LevelM##XX,{__EVAL(0.03 + 0.09),__EVAL(0.0 	-0.05)},1}; 	\
		down[]			= {LevelM##XX,{__EVAL(0.00 + 0.09),__EVAL(0.025	-0.05)},1}; 	\
	};

#define DEF_HORIZONT_SPACING_Plus2(XX) 													\
	class LevelP##XX: Level0 															\
	{ 																					\
		type			= line; 														\
		width			= 3;															\
		points[]		= 																\
		{ 																				\
			{LevelP##XX,{__EVAL(-0.05+0.014),0.04},1}, 									\
			{LevelP##XX,{__EVAL(+0.05-0.014),0.04},1} 									\
		}; 																				\
	}

#define DEF_HORIZONT_SPACING_Minus2(XX) 												\
	class LevelM##XX: Level0 															\
	{ 																					\
		type			= line; 														\
		width			= 3;															\
		points[]		= 																\
		{ 																				\
			{LevelM##XX,{__EVAL(-0.05+0.014*1),-0.04},1}, 								\
			{LevelM##XX,{__EVAL( 0.05-0.014*1),-0.04},1}, 								\
		}; 																				\
	};

class Bones
{
	class Direction_Center
	{
		type	= fixed;
		pos[]	= {0.5, 0.7};
	};
	class Horizont_Center
	{
		type	= fixed;
		pos[]	= {0.5, 0.25};
	};
	class Horizont_Rotate
	{
		type			= rotational;
		source			= horizonBank;
		sourceScale		= 1;
		center[]		= {0.5, 0.25};
		min				= rad(-360);
		max				= rad(360);
		minAngle		= 360-180;
		maxAngle		= -360-180;
		aspectRatio	= __EVAL(SizeY10deg/SizeX10deg);
	};
	class L_Center
	{
		type	= fixed;
		pos[]	= {0.25, 0.41};
	};
	class Level0
	{
		pos0[]	= {PosXCenterHorizont-0.15, PosYCenterHorizont};
		pos10[]	= {__EVAL(PosXCenterHorizont + SizeX10degHorizon* 0.5), __EVAL(PosYCenterHorizont + SizeY10degHorizon* 0.5)};
		type	= horizon;
		angle	= 0;
	};
	class Level0_Background: Level0
	{
		pos0[]	= {0, 0};
		pos10[]	= {__EVAL( SizeX10degHorizon), __EVAL( SizeY10degHorizon)};
	};
	class LevelP5 : Level0 { angle 	= 5;};
	class LevelM5 : Level0 {angle 	= -5;};
	class LevelP10 : Level0 {angle 	= 10;};
	class LevelM10 : Level0 {angle 	= -10;};
	class LevelP15 : Level0 {angle 	= 15;};
	class LevelM15 : Level0 {angle 	= -15;};
	class LevelP20 : Level0 {angle 	= 20;};
	class LevelM20 : Level0 {angle 	= -20;};
	class LevelP25 : Level0 {angle 	= 25;};
	class LevelM25 : Level0 {angle 	= -25;};
	class LevelP30 : Level0 {angle 	= 30;};
	class LevelM30 : Level0 {angle 	= -30;};
	class LevelP35 : Level0 {angle 	= 35;};
	class LevelM35 : Level0 {angle 	= -35;};
	class LevelP40 : Level0 {angle 	= 40;};
	class LevelM40 : Level0 {angle 	= -40;};
	class LevelP45 : Level0 {angle 	= 45;};
	class LevelM45 : Level0 {angle 	= -45;};
	class LevelP50 : Level0 {angle 	= 50;};
	class LevelM50 : Level0 {angle 	= -50;};
	class LevelP60 : Level0 {angle 	= 60;};
	class LevelM60 : Level0 {angle 	= -60;};
	class LevelP70 : Level0 {angle 	= 70;};
	class LevelM70 : Level0 {angle 	= -70;};
	class LevelP80 : Level0 {angle 	= 80;};
	class LevelM80 : Level0 {angle 	= -80;};
	class LevelP90 : Level0 {angle 	= 90;};
	class LevelM90 : Level0 {angle 	= -90;};
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
		center[]	= {0.5, 0.7};
		type		= rotational;
		source		= heading;
		min			= 0;
		max			= 360;
		minAngle	= -180;
		maxAngle	= -360-180;
		aspectRatio	= __EVAL(SizeY10deg/SizeX10deg);
	};

	class ClimbFixed
	{
		type			= fixed;
		pos[]			= {1.05, 0.57};
	};
	class ClimbRotate
	{
		type			= rotational;
		source			= vspeed;
		sourceScale		= 0.3048; // ft/s
		center[]		= {1.05, 0.57};
		min				= -6;
		max				= 6;
		minAngle		= -48;
		maxAngle		=  48;
		aspectRatio		= __EVAL(1 / XtoYscale);
	};

};
class Draw
{
	condition			= "on";
	alpha				= 1.0;
	color[]				= {0,0.12,0};
	// Artifical horizon
	class HorizontBackground
	{
		color[]		= {0,0.54,0.82};
		alpha 		= 0.1;
		clipTL[]	= {0.26, 0.04};
		clipBR[]	= {0.74, 0.46};
		class Static
		{
			type			= polygon;
			points[]		=
			{
				{
					{Level0	,{__EVAL(-10		), __EVAL(-20+0)}, 1},
					{Level0	,{__EVAL(-10 + 20 	), __EVAL(-20+0)}, 1},
					{Level0	,{__EVAL(-10 + 20 	), __EVAL(-20+0 + 20)}, 1},
					{Level0	,{__EVAL(-10		), __EVAL(-20+0 + 20)}, 1}
				}
			};
		};
		class StaticBlack
		{
			color[]		= {0.2,0.08,0};
			alpha 		= 0.1;

			class Static
			{
				type			= polygon;
				points[]		=
				{
					{
						{Level0	,{__EVAL(-10			), __EVAL(0.00)}, 1},
						{Level0	,{__EVAL(-10 + 20 		), __EVAL(0.00)}, 1},
						{Level0	,{__EVAL(-10 + 20 		), __EVAL(0.00 + 20)}, 1},
						{Level0	,{__EVAL(-10			), __EVAL(0.00 + 20)}, 1}
					}
				};
			};
		};
		class HorizontWhite
		{
			color[]		= {0.0, 0.0, 0.0};
			alpha 		= 0.9;
			class Dimmed
			{
				class Level0
				{
					type			= line;
					width			= 7.0;
					points[]		=
					{
						{Level0, {0.25, 0.0}, 1},
						{Level0, {0.065, 0.0}, 1},
						{},
						{Level0, {-0.065, 0.0}, 1},
						{Level0, {-0.25, 0.0}, 1}
					};
				};
			};
			class Level0
			{
				type			= line;
				width			= 16.0;
				points[]		= {};
			};
			DEF_HORIZONT_SPACING_Plus2(5);
			DEF_HORIZONT_SPACING_Plus(10);
			DEF_HORIZONT_SPACING_Plus2(15);
			DEF_HORIZONT_SPACING_Plus(20);
			DEF_HORIZONT_SPACING_Plus2(25);
			DEF_HORIZONT_SPACING_Plus(30);
			DEF_HORIZONT_SPACING_Plus2(35);
			DEF_HORIZONT_SPACING_Plus(40);
			DEF_HORIZONT_SPACING_Plus2(45);
			DEF_HORIZONT_SPACING_Plus(50);
			DEF_HORIZONT_SPACING_Plus(60);
			DEF_HORIZONT_SPACING_Plus(70);
			DEF_HORIZONT_SPACING_Plus(80);
			DEF_HORIZONT_SPACING_Plus(90);
		};
		class HorizontBlack
		{
			color[]		= {1.0, 1.0, 1.0};
			alpha 		= 0.3;
			class Level0
			{
				type			= line;
				width			= 7.0;
				points[]		= {};
			};
			DEF_HORIZONT_SPACING_Minus2(5);
			DEF_HORIZONT_SPACING_Minus(10);
			DEF_HORIZONT_SPACING_Minus2(15);
			DEF_HORIZONT_SPACING_Minus(20);
			DEF_HORIZONT_SPACING_Minus2(25);
			DEF_HORIZONT_SPACING_Minus(30);
			DEF_HORIZONT_SPACING_Minus2(35);
			DEF_HORIZONT_SPACING_Minus(40);
			DEF_HORIZONT_SPACING_Minus2(45);
			DEF_HORIZONT_SPACING_Minus(50);
			DEF_HORIZONT_SPACING_Minus(60);
			DEF_HORIZONT_SPACING_Minus(70);
			DEF_HORIZONT_SPACING_Minus(80);
			DEF_HORIZONT_SPACING_Minus(90);
		};
		class HorizonYellow
		{
			color[] = {0.62,0.36,0};
			alpha = 0.9;
			class Static
			{
				type = polygon;
				width = 8;
				points[] =
				{
					{
						{Horizont_Center,{__EVAL(-0.125),	__EVAL(0.00)},1},
						{Horizont_Center,{__EVAL(-0.025),	__EVAL(0.00)},1},
						{Horizont_Center,{__EVAL(-0.025),	__EVAL(-0.03)},1},
					},
					{
						{Horizont_Center,{__EVAL(-0.025),	__EVAL(-0.01)},1},
						{Horizont_Center,{__EVAL(-0.025),	__EVAL(-0.03)},1},
						{Horizont_Center,{__EVAL(-0.0),		__EVAL(-0.035)},1},
						{Horizont_Center,{__EVAL(-0.0),		__EVAL(-0.01)},1},
					},
					{
						{Horizont_Center,{__EVAL(0.125),	__EVAL(0.00)},1},
						{Horizont_Center,{__EVAL(0.025),	__EVAL(0.00)},1},
						{Horizont_Center,{__EVAL(0.025),	__EVAL(-0.03)},1},
					},
					{
						{Horizont_Center,{__EVAL(0.025),	__EVAL(-0.01)},1},
						{Horizont_Center,{__EVAL(0.025),	__EVAL(-0.03)},1},
						{Horizont_Center,{__EVAL(0.0),		__EVAL(-0.035)},1},
						{Horizont_Center,{__EVAL(0.0),		__EVAL(-0.01)},1},
					},
					{
						{Horizont_Center,{__EVAL(-0.011),	__EVAL(-0.11 - 0.045)},1},
						{Horizont_Center,{__EVAL(+0.011),	__EVAL(-0.11 - 0.045)},1},
						{Horizont_Center,{__EVAL(-0.0),		__EVAL(-0.12 - 0.045)},1}
					},
				};
			};
		};
		class HorizonDarkBlue
		{
			color[] = {0,0.01,0.08};
			alpha = 1;
			class Static
			{
				type = line;
				width = 8;
				points[] =
				{
					#define SizeIn 0.205
					#define SizeInLong 0.19
					#define SizeOut 0.23
					CIRCLE_MARK(Horizont_Rotate,SizeInLong+0.04,SizeOut+0.04, 	-360),{},
					CIRCLE_MARK(Horizont_Rotate,SizeIn+0.04,SizeOut+0.04, 		-360+12.5*1),{},
					CIRCLE_MARK(Horizont_Rotate,SizeInLong+0.035,SizeOut+0.035, -360+12.5*2),{},
					CIRCLE_MARK(Horizont_Rotate,SizeIn+0.02,SizeOut+0.02, 		-360+12.5*3),{},
					CIRCLE_MARK(Horizont_Rotate,SizeIn+0.01,SizeOut+0.01, 		-360+12.5*4),{},

					CIRCLE_MARK(Horizont_Rotate,SizeIn+0.04,SizeOut+0.04, 		-360-12.5*1),{},
					CIRCLE_MARK(Horizont_Rotate,SizeInLong+0.035,SizeOut+0.035, -360-12.5*2),{},
					CIRCLE_MARK(Horizont_Rotate,SizeIn+0.02,SizeOut+0.02, 		-360-12.5*3),{},
					CIRCLE_MARK(Horizont_Rotate,SizeIn+0.01,SizeOut+0.01, 		-360-12.5*4),{},
				};
			};
		};
	};
	class BlackCover
	{
		color[] = {0.05,0.05,0.05};
		alpha = 1;
		class DrawPolygon
		{
			type = polygon;
			texture = "rhsgref\addons\rhsgref_c_a29\data\mfd_round_cover_ca.paa";
			points[] =
			{
				{
					POLYGON_BOX(0.5,0.42,0.25,0.04)
				},
			};
		};
	};
	class Static
	{
		type			= line;
		width			= 4.0;
		points[]		=
		{
			//CIRCLE_BIG(Direction_Center,0.24),{},
			CIRCLE_BIG(L_Center,0.028),{},
			// Box Speed
			POINT2(0.00 + 0.05, 0.23 + 0.18),
			POINT2(0.18 + 0.05, 0.23 + 0.18),
			POINT2(0.18 + 0.05, 0.23 - 0.18),
			POINT2(0.00 + 0.05, 0.23 - 0.18),
			POINT2(0.00 + 0.05, 0.23 + 0.18),{},
			// Box ATL
			POINT2(0.00 + 0.77, 0.23 + 0.18),
			POINT2(0.18 + 0.77, 0.23 + 0.18),
			POINT2(0.18 + 0.77, 0.23 - 0.18),
			POINT2(0.00 + 0.77, 0.23 - 0.18),
			POINT2(0.00 + 0.77, 0.23 + 0.18),{},
		};
	};
	class Group_White
	{
		color[]				= {1,1,1};
		alpha = 0.4;
		class Static
		{
			type			= line;
			width			= 4.0;
			points[]		=
			{
				#define SCALE_IMG 350
				#define OFFSET_IMG_X +0.53
				#define OFFSET_IMG_Y -0.14
				// Arrow 1
				{{__EVAL(129/SCALE_IMG + OFFSET_IMG_X),__EVAL(343/SCALE_IMG + OFFSET_IMG_Y)},1},
				{{__EVAL(131/SCALE_IMG + OFFSET_IMG_X),__EVAL(345/SCALE_IMG + OFFSET_IMG_Y)},1},
				{{__EVAL(135/SCALE_IMG + OFFSET_IMG_X),__EVAL(347/SCALE_IMG + OFFSET_IMG_Y)},1},
				{{__EVAL(138/SCALE_IMG + OFFSET_IMG_X),__EVAL(348/SCALE_IMG + OFFSET_IMG_Y)},1},
				{{__EVAL(141/SCALE_IMG + OFFSET_IMG_X),__EVAL(348/SCALE_IMG + OFFSET_IMG_Y)},1},
				{{__EVAL(143/SCALE_IMG + OFFSET_IMG_X),__EVAL(348/SCALE_IMG + OFFSET_IMG_Y)},1},
				{{__EVAL(146/SCALE_IMG + OFFSET_IMG_X),__EVAL(347/SCALE_IMG + OFFSET_IMG_Y)},1},
				{{__EVAL(149/SCALE_IMG + OFFSET_IMG_X),__EVAL(345/SCALE_IMG + OFFSET_IMG_Y)},1},
				{{__EVAL(153/SCALE_IMG + OFFSET_IMG_X),__EVAL(343/SCALE_IMG + OFFSET_IMG_Y)},1},
				{{__EVAL(147/SCALE_IMG + OFFSET_IMG_X),__EVAL(343/SCALE_IMG + OFFSET_IMG_Y)},1},
				{{__EVAL(153/SCALE_IMG + OFFSET_IMG_X),__EVAL(348/SCALE_IMG + OFFSET_IMG_Y)},1},
				{{__EVAL(153/SCALE_IMG + OFFSET_IMG_X),__EVAL(343/SCALE_IMG + OFFSET_IMG_Y)},1},
				{},
				// Arrow 2
				{{__EVAL(129/SCALE_IMG + OFFSET_IMG_X),__EVAL(307/SCALE_IMG + OFFSET_IMG_Y)},1},
				{{__EVAL(131/SCALE_IMG + OFFSET_IMG_X),__EVAL(305/SCALE_IMG + OFFSET_IMG_Y)},1},
				{{__EVAL(134/SCALE_IMG + OFFSET_IMG_X),__EVAL(303/SCALE_IMG + OFFSET_IMG_Y)},1},
				{{__EVAL(136/SCALE_IMG + OFFSET_IMG_X),__EVAL(302/SCALE_IMG + OFFSET_IMG_Y)},1},
				{{__EVAL(139/SCALE_IMG + OFFSET_IMG_X),__EVAL(302/SCALE_IMG + OFFSET_IMG_Y)},1},
				{{__EVAL(143/SCALE_IMG + OFFSET_IMG_X),__EVAL(302/SCALE_IMG + OFFSET_IMG_Y)},1},
				{{__EVAL(145/SCALE_IMG + OFFSET_IMG_X),__EVAL(303/SCALE_IMG + OFFSET_IMG_Y)},1},
				{{__EVAL(148/SCALE_IMG + OFFSET_IMG_X),__EVAL(304/SCALE_IMG + OFFSET_IMG_Y)},1},
				{{__EVAL(150/SCALE_IMG + OFFSET_IMG_X),__EVAL(305/SCALE_IMG + OFFSET_IMG_Y)},1},
				{{__EVAL(152/SCALE_IMG + OFFSET_IMG_X),__EVAL(306/SCALE_IMG + OFFSET_IMG_Y)},1},
				{{__EVAL(153/SCALE_IMG + OFFSET_IMG_X),__EVAL(307/SCALE_IMG + OFFSET_IMG_Y)},1},
				{{__EVAL(146/SCALE_IMG + OFFSET_IMG_X),__EVAL(307/SCALE_IMG + OFFSET_IMG_Y)},1},
				{{__EVAL(153/SCALE_IMG + OFFSET_IMG_X),__EVAL(301/SCALE_IMG + OFFSET_IMG_Y)},1},
				{{__EVAL(153/SCALE_IMG + OFFSET_IMG_X),__EVAL(307/SCALE_IMG + OFFSET_IMG_Y)},1},
				{},
				CIRCLE_BIG(Horizont_Center,0.23),{},
			};
		};
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
					POLYGON_BOX_BONE(Direction_Center,0.01,0.06,0.0,-0.04)
				},
				{
					POLYGON_BOX_BONE(Direction_Center,0.065,0.01,-0.0275,-0.03)
				},
				{
					POLYGON_BOX_BONE(Direction_Center,0.03,0.01,-0.01,0.0)
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
		class Black_Background
		{
			color[] = {0,0,0};
			alpha = 1;
			class DrawPolygon
			{
				type = polygon;
				points[] =
				{
					{
						POLYGON_BOX(0.1,0.04,0.45,0.475)
					}
				};
			};
		};
		class Static_Heading
		{
			type			= line;
			width			= 3.0;
			points[]		=
			{
				POINT2(0.00 + 0.45, 0.58 + 0.024),
				POINT2(0.10 + 0.45, 0.58 + 0.024),
				POINT2(0.10 + 0.45, 0.58 - 0.024),
				POINT2(0.00 + 0.45, 0.58 - 0.024),
				POINT2(0.00 + 0.45, 0.58 + 0.024),{},
			};
		};
		class HeadingNumber
		{
			type			= text;
			source			= heading;
			sourceScale		= 1;

			align			= center;
			scale			= 1;
			TEXT_SIZEPOS(0.5,0.48,0.035,0.03)
		};
		HUD_TEXT_STATIC(0.02,	0.44	,0.04,0.03,right,"ILS",BtnILS)
		HUD_TEXT_STATIC(0.97,	0.76	,0.03,0.025,left,"CRS",BtnCRS)
		HUD_TEXT_STATIC(0.97,	0.79	,0.03,0.025,left,"000",BtnCRS_DIR)
		class ClimbNumber
		{
			type			= text;
			source			= vspeed;
			sourceScale		= 30.8;
			refreshRate 	= 0.05;

			align			= left;
			scale			= 1;
			TEXT_SIZEPOS(0.955,0.56,0.025,0.02)
		};
		HUD_TEXT_STATIC(0.975,0.56,0.025,0.02,left,"0",ClimbNumber0)

		// Arrows between Climb scale and Climb indicator
		class ClimbArrow
		{
			type			= line;
			width			= 4.0;
			points[]		=
			{
			// Arrow for Climb scale

				{ClimbRotate,{__EVAL(-0.235 + 0.010),		__EVAL(0.0 - 0.006)},	1},
				{ClimbRotate,{__EVAL(-0.235 - 0.0),	0.0},			1},
				{ClimbRotate,{__EVAL(-0.235 + 0.010),		__EVAL(0.0 + 0.006)},	1},
				{ClimbRotate,{__EVAL(-0.235 + 0.010),		__EVAL(0.0 - 0.006)},	1},{},
				{ClimbRotate,{__EVAL(-0.235 - 0.0),			0.0},			1},
				{ClimbRotate,{__EVAL(-0.235 + 0.06),			0.0},			1},
			};
		};

		class ClimbLine
		{
			type				= line;
			width				= 4.0;
			points[]			=
			{
				{{__EVAL(0.88 	- 0.0),		__EVAL(0.572 - 0.022)},	1},
				{{__EVAL(0.88 	- 0.0),		__EVAL(0.572 + 0.022)},	1},
				{{__EVAL(0.98	- 0.0),		__EVAL(0.572 + 0.022)},	1},
				{{__EVAL(0.98	- 0.0),		__EVAL(0.572 - 0.022)},	1},
				{{__EVAL(0.88 	- 0.0),		__EVAL(0.572 - 0.022)},	1},
				{},
			};
		};
	};
	class Group_Blue
	{
		color[] = {0.02,0.87,0.9};
		class ClimbLine
		{
			type				= line;
			width				= 4.0;
			points[]			=
			{
				#define SCALE_IMG 350
				#define OFFSET_IMG_X -0.34
				#define OFFSET_IMG_Y -0.14
				// Arrow 1
				{{__EVAL(129/SCALE_IMG + OFFSET_IMG_X),__EVAL(343/SCALE_IMG + OFFSET_IMG_Y)},1},
				{{__EVAL(131/SCALE_IMG + OFFSET_IMG_X),__EVAL(345/SCALE_IMG + OFFSET_IMG_Y)},1},
				{{__EVAL(135/SCALE_IMG + OFFSET_IMG_X),__EVAL(347/SCALE_IMG + OFFSET_IMG_Y)},1},
				{{__EVAL(138/SCALE_IMG + OFFSET_IMG_X),__EVAL(348/SCALE_IMG + OFFSET_IMG_Y)},1},
				{{__EVAL(141/SCALE_IMG + OFFSET_IMG_X),__EVAL(348/SCALE_IMG + OFFSET_IMG_Y)},1},
				{{__EVAL(143/SCALE_IMG + OFFSET_IMG_X),__EVAL(348/SCALE_IMG + OFFSET_IMG_Y)},1},
				{{__EVAL(146/SCALE_IMG + OFFSET_IMG_X),__EVAL(347/SCALE_IMG + OFFSET_IMG_Y)},1},
				{{__EVAL(149/SCALE_IMG + OFFSET_IMG_X),__EVAL(345/SCALE_IMG + OFFSET_IMG_Y)},1},
				{{__EVAL(153/SCALE_IMG + OFFSET_IMG_X),__EVAL(343/SCALE_IMG + OFFSET_IMG_Y)},1},
				{{__EVAL(147/SCALE_IMG + OFFSET_IMG_X),__EVAL(343/SCALE_IMG + OFFSET_IMG_Y)},1},
				{{__EVAL(153/SCALE_IMG + OFFSET_IMG_X),__EVAL(348/SCALE_IMG + OFFSET_IMG_Y)},1},
				{{__EVAL(153/SCALE_IMG + OFFSET_IMG_X),__EVAL(343/SCALE_IMG + OFFSET_IMG_Y)},1},
				{},
				// Arrow 2
				{{__EVAL(129/SCALE_IMG + OFFSET_IMG_X),__EVAL(307/SCALE_IMG + OFFSET_IMG_Y)},1},
				{{__EVAL(131/SCALE_IMG + OFFSET_IMG_X),__EVAL(305/SCALE_IMG + OFFSET_IMG_Y)},1},
				{{__EVAL(134/SCALE_IMG + OFFSET_IMG_X),__EVAL(303/SCALE_IMG + OFFSET_IMG_Y)},1},
				{{__EVAL(136/SCALE_IMG + OFFSET_IMG_X),__EVAL(302/SCALE_IMG + OFFSET_IMG_Y)},1},
				{{__EVAL(139/SCALE_IMG + OFFSET_IMG_X),__EVAL(302/SCALE_IMG + OFFSET_IMG_Y)},1},
				{{__EVAL(143/SCALE_IMG + OFFSET_IMG_X),__EVAL(302/SCALE_IMG + OFFSET_IMG_Y)},1},
				{{__EVAL(145/SCALE_IMG + OFFSET_IMG_X),__EVAL(303/SCALE_IMG + OFFSET_IMG_Y)},1},
				{{__EVAL(148/SCALE_IMG + OFFSET_IMG_X),__EVAL(304/SCALE_IMG + OFFSET_IMG_Y)},1},
				{{__EVAL(150/SCALE_IMG + OFFSET_IMG_X),__EVAL(305/SCALE_IMG + OFFSET_IMG_Y)},1},
				{{__EVAL(152/SCALE_IMG + OFFSET_IMG_X),__EVAL(306/SCALE_IMG + OFFSET_IMG_Y)},1},
				{{__EVAL(153/SCALE_IMG + OFFSET_IMG_X),__EVAL(307/SCALE_IMG + OFFSET_IMG_Y)},1},
				{{__EVAL(146/SCALE_IMG + OFFSET_IMG_X),__EVAL(307/SCALE_IMG + OFFSET_IMG_Y)},1},
				{{__EVAL(153/SCALE_IMG + OFFSET_IMG_X),__EVAL(301/SCALE_IMG + OFFSET_IMG_Y)},1},
				{{__EVAL(153/SCALE_IMG + OFFSET_IMG_X),__EVAL(307/SCALE_IMG + OFFSET_IMG_Y)},1},
				{},
				#define SizeIn 0.25
				#define SizeInLong 0.235
				#define SizeOut 0.26
				CIRCLE_MARK(ClimbFixed,SizeInLong,SizeOut, -90),{},
				CIRCLE_MARK(ClimbFixed,SizeIn,SizeOut, 8-90),{},
				CIRCLE_MARK(ClimbFixed,SizeInLong,SizeOut, 16-90),{},
				CIRCLE_MARK(ClimbFixed,SizeIn,SizeOut, 24-90),{},
				CIRCLE_MARK(ClimbFixed,SizeInLong,SizeOut, 32-90),{},
				CIRCLE_MARK(ClimbFixed,SizeIn,SizeOut, 40-90),{},
				CIRCLE_MARK(ClimbFixed,SizeInLong,SizeOut, 48-90),{},

				POINT_MARK(ClimbFixed,SizeOut, 48-90),
				POINT_MARK(ClimbFixed,SizeOut, 36-90),
				POINT_MARK(ClimbFixed,SizeOut, 24-90),
				POINT_MARK(ClimbFixed,SizeOut, 12-90),
				POINT_MARK(ClimbFixed,SizeOut, -90),
			};
		};
		HUD_TEXT_STATIC(0.765,	0.49	,0.03,0.025,right,"2",Climb2)
		HUD_TEXT_STATIC(0.795,	0.43	,0.03,0.025,right,"4",Climb4)
		HUD_TEXT_STATIC(0.84,	0.38	,0.03,0.025,right,"6",Climb6)

		HUD_TEXT_STATIC(0.1,	0.76	,0.03,0.025,left,"HDG",BtnHDG)
		HUD_TEXT_STATIC(0.1,	0.79	,0.03,0.025,left,"000",BtnHDG_DIR)
	};
	class Group_Red
	{
		color[] = {0.12,0,0};

		class ClimbLine
		{
			type				= line;
			width				= 4.0;
			points[]			=
			{
				CIRCLE_MARK(ClimbFixed,SizeIn,SizeOut, -12-90),{},
				CIRCLE_MARK(ClimbFixed,SizeInLong,SizeOut, -24-90),{},
				CIRCLE_MARK(ClimbFixed,SizeIn,SizeOut, -36-90),{},
				CIRCLE_MARK(ClimbFixed,SizeInLong,SizeOut, -48-90),{},

				POINT_MARK(ClimbFixed,SizeOut, -90),
				POINT_MARK(ClimbFixed,SizeOut, -12-90),
				POINT_MARK(ClimbFixed,SizeOut, -24-90),
				POINT_MARK(ClimbFixed,SizeOut, -36-90),
				POINT_MARK(ClimbFixed,SizeOut, -48-90),
			};
		};
		HUD_TEXT_STATIC(0.765,	0.38+0.24	,0.03,0.025,right,"2",Climb2)
		HUD_TEXT_STATIC(0.795,	0.43+0.24	,0.03,0.025,right,"4",Climb4)
		HUD_TEXT_STATIC(0.84,	0.49+0.24	,0.03,0.025,right,"6",Climb6)
	};

	class SpeedScale
	{
		type			= scale;
		horizontal		= false;
		source			= speed;
		sourceScale		= SPEED_FACTOR;
		width			= 4.0;

		top				= 0.35;
		center			= __EVAL((0.35+0.05)/2);
		bottom			= 0.05;

		lineXleft		= __EVAL(0.88-0.65);
		lineYright		= __EVAL(0.85-0.65);
		lineXleftMajor	= __EVAL(0.88-0.65);
		lineYrightMajor	= __EVAL(0.83-0.65);
		majorLineEach	= 4;
		numberEach		= 4;
		step			= 5;
		stepSize		= __EVAL((0.35 - 0.05) / 15);

		align			= left;
		scale			= 1;
		pos[]			= {__EVAL(0.00	+0.14), 	__EVAL(0.00+0.34)};
		right[]			= {__EVAL(0.03	+0.14), 	__EVAL(0.00+0.34)};
		down[]			= {__EVAL(0.00	+0.14), 	__EVAL(0.025+0.34)};
	};
	class ALtitudeScale
	{
		type			= scale;
		horizontal		= false;
		source			= altitudeASL;
		sourceScale		= 0.001 * HEIGHT_FACTOR;
		sourceOffset 	= -6;
		sourcePrecision	= 1;
		width			= 4.0;

		top				= 0.35;
		center			= __EVAL((0.35+0.05)/2);
		bottom			= 0.05;

		lineXleft		= __EVAL(0.83-0.06);
		lineYright		= __EVAL(0.86-0.06);
		lineXleftMajor	= __EVAL(0.83-0.06);
		lineYrightMajor	= __EVAL(0.88-0.06);
		majorLineEach	= 4;
		numberEach		= 4;
		step			= 0.05;
		stepSize		= __EVAL((0.35 - 0.05) / 15);

		align			= left;
		scale			= 0.01;
		pos[]			= {__EVAL(0.00	+ 0.91), 	__EVAL(0.00+0.34)};
		right[]			= {__EVAL(0.03	+ 0.91), 	__EVAL(0.00+0.34)};
		down[]			= {__EVAL(0.00	+ 0.91), 	__EVAL(0.025+0.34)};
	};
	class ScaleBackground
	{
		color[] = {0,0,0};
		class DrawPolygon
		{
			type = polygon;
			points[] =
			{
				{
					POLYGON_BOX(0.07,0.05,0.07,0.1775)
				},
				{
					POLYGON_BOX(0.04,0.095,0.14,0.155)
				},
				{
					{ {__EVAL(0.85-0.67), __EVAL(0.8*0.488	-0.199)}, 1},
					{ {__EVAL(0.87-0.67), __EVAL(0.8*0.50	-0.199)}, 1},
					{ {__EVAL(0.85-0.67), __EVAL(0.8*0.512	-0.199)}, 1},
				},
				{
					POLYGON_BOX(0.07,0.05,0.07+0.75,0.1775)
				},
				{
					POLYGON_BOX(0.05,0.095,0.14+0.75,0.155)
				},
				{
					{ {__EVAL(0.87-0.05), __EVAL(0.8*0.488	-0.197)}, 1},
					{ {__EVAL(0.85-0.05), __EVAL(0.8*0.50	-0.197)}, 1},
					{ {__EVAL(0.87-0.05), __EVAL(0.8*0.512	-0.197)}, 1},
				},
			};
		};
		class DrawOutline
		{
			color[] = {1,1,1};
			alpha = 0.5;
			class Outline
			{
				type = line;
				width = 4;
				points[] =
				{
					{{__EVAL(0.07 	+ 0.11),	__EVAL(0.1775 + 0.01)},1},
					{{__EVAL(0.07 	+ 0.11),	__EVAL(0.1775 - 0.025)},1},
					{{__EVAL(0.07 	+ 0.07),	__EVAL(0.1775 - 0.025)},1},
					{{__EVAL(0.07 	+ 0.07),	__EVAL(0.1775 - 0.0)},	1},
					{{__EVAL(0.07 	- 0.0),		__EVAL(0.1775 - 0.0)},	1},
					{{__EVAL(0.07 	- 0.0),		__EVAL(0.1775 + 0.05)},	1},
					{{__EVAL(0.07 	+ 0.07),	__EVAL(0.1775 + 0.05)},	1},
					{{__EVAL(0.07 	+ 0.07),	__EVAL(0.1775 + 0.075)},1},
					{{__EVAL(0.07 	+ 0.11),	__EVAL(0.1775 + 0.075)},1},
					{{__EVAL(0.07 	+ 0.11),	__EVAL(0.1775 + 0.035)},1},
					{{__EVAL(0.07 	+ 0.13),	__EVAL(0.1775 + 0.0225)},1},
					{{__EVAL(0.07 	+ 0.11),	__EVAL(0.1775 + 0.01)},1},{},

					{{__EVAL(0.82 	+ 0.12),	__EVAL(0.1775 - 0.025)},1},
					{{__EVAL(0.82 	+ 0.07),	__EVAL(0.1775 - 0.025)},1},
					{{__EVAL(0.82 	+ 0.07),	__EVAL(0.1775 - 0.0)},	1},
					{{__EVAL(0.82 	- 0.0),		__EVAL(0.1775 - 0.0)},	1},
					{{__EVAL(0.82 	- 0.0),		__EVAL(0.1775 + 0.01)},	1},
					{{__EVAL(0.82 	- 0.02),	__EVAL(0.1775 + 0.025)},1},
					{{__EVAL(0.82 	- 0.0),		__EVAL(0.1775 + 0.04)},	1},
					{{__EVAL(0.82 	- 0.0),		__EVAL(0.1775 + 0.05)},	1},
					{{__EVAL(0.82 	+ 0.07),	__EVAL(0.1775 + 0.05)},	1},
					{{__EVAL(0.82 	+ 0.07),	__EVAL(0.1775 + 0.075)},1},
					{{__EVAL(0.82 	+ 0.12),	__EVAL(0.1775 + 0.075)},1},
					{{__EVAL(0.82 	+ 0.12),	__EVAL(0.1775 - 0.025)},1},
				};
			};
			HUD_TEXT_SOURCE_SCALE(0.14,	0.19 ,0.035,0.03,left,speed,0.1*SPEED_FACTOR,0,-0.48,1,SpeedText)
			class ClipScale
			{
				clipTL[]	= {0.147, 0.15};
				clipBR[]	= {0.17, 0.25};
				class SpeedScale
				{
					type			= scale;
					horizontal		= false;
					source			= speed;
					sourceScale		= SPEED_FACTOR;
					sourceLength 	= 4;
					width			= 4.0;

					top				= 0.35;
					center			= __EVAL((0.35+0.05)/2);
					bottom			= 0.05;

					lineXleft		= 0;
					lineYright		= 0;
					lineXleftMajor	= 0;
					lineYrightMajor	= 0;
					majorLineEach	= 1;
					numberEach		= 1;
					step			= 1;
					stepSize		= __EVAL((0.35 - 0.05) / 9);

					align			= left;
					scale			= 1;
					pos[]			= {__EVAL(0.00	+0.145), 	__EVAL(0.00+0.34)};
					right[]			= {__EVAL(0.03	+0.145), 	__EVAL(0.00+0.34)};
					down[]			= {__EVAL(0.00	+0.145), 	__EVAL(0.025+0.34)};
				};
			};
			HUD_TEXT_SOURCE_SCALE(0.895,	0.19 ,0.028,0.025,left,altitudeAGL,0.01*HEIGHT_FACTOR,0,-0.48,3,AltitudeText)
			class ClipScale2
			{
				clipTL[]	= {0.895, 0.15};
				clipBR[]	= {0.935, 0.25};
				class SpeedScale
				{
					type			= scale;
					horizontal		= false;
					source			= altitudeASL;
					sourceScale		= HEIGHT_FACTOR*0.1;
					sourceOffset 	= -6;
					sourceLength	= 6;
					sourcePrecision	= 0;

					top				= 0.35;
					center			= __EVAL((0.35+0.05)/2);
					bottom			= 0.05;

					lineXleft		= 0;
					lineYright		= 0;
					lineXleftMajor	= 0;
					lineYrightMajor	= 0;
					majorLineEach	= 1;
					numberEach		= 1;
					step			= 1;
					stepSize		= __EVAL((0.35 - 0.05) / 9);

					align			= left;
					scale			= 1;
					pos[]			= {__EVAL(0.00	+0.885), 	__EVAL(0.00+0.34)};
					right[]			= {__EVAL(0.025	+0.885), 	__EVAL(0.00+0.34)};
					down[]			= {__EVAL(0.00	+0.885), 	__EVAL(0.02+0.34)};
				};
			};
			class ClipScale3
			{
				clipTL[]	= {0.915, 0.15};
				clipBR[]	= {0.935, 0.25};
				class SpeedScale
				{
					type			= scale;
					horizontal		= false;
					source			= altitudeASL;
					sourceScale		= HEIGHT_FACTOR*0.1;
					sourceOffset 	= -6;
					sourceLength	= 10;
					sourcePrecision	= 2;

					top				= 0.35;
					center			= __EVAL((0.35+0.05)/2);
					bottom			= 0.05;

					lineXleft		= 0;
					lineYright		= 0;
					lineXleftMajor	= 0;
					lineYrightMajor	= 0;
					majorLineEach	= 1;
					numberEach		= 1;
					step			= 1;
					stepSize		= __EVAL((0.35 - 0.05) / 9);

					align			= left;
					scale			= 1;
					pos[]			= {__EVAL(0.00	+0.905), 	__EVAL(0.00+0.34)};
					right[]			= {__EVAL(0.025	+0.905), 	__EVAL(0.00+0.34)};
					down[]			= {__EVAL(0.00	+0.905), 	__EVAL(0.02+0.34)};
				};
			};
		};
	};
	class WPvalid
	{
		condition		= "wpvalid";
		class WPIndex
		{
			type			= text;
			source			= wpIndex;
			sourceScale		= 1;
			sourceLength	= 2;

			align			= right;
			scale			= 1;
			TEXT_SIZEPOS(0.02+0.07 ,0.53,0.03,0.025)
		};
		class WPdist
		{
			type			= text;
			source			= wpdist;
			sourceScale		= 0.001;
			sourcePrecision = 1;

			align			= right;
			scale			= 1;
			TEXT_SIZEPOS(0.02 ,0.53+0.045,0.03,0.025)
		};
		HUD_TEXT_STATIC(0.02,			0.53		,0.03,0.025,right,"WP",WPstatic)
		HUD_TEXT_SOURCE_INDEX(0.02,			0.53+0.09	,0.03,0.025,right,userText,1,WPTime)
	};
	class WPNone
	{
		condition		= "1-wpvalid";
		HUD_TEXT_STATIC(0.02,	0.54	,0.04,0.03,right,"SEL",WPTex1)
		HUD_TEXT_STATIC(0.02,	0.59	,0.04,0.03,right,"WP",WPTex2)
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
				};
			};
			class Polygon
			{
				type = polygon;
				points[] =
				{
					{
						{Rotation_WP_Center,{Rotation_WP_Dir,	+0.01,	__EVAL(-0.36*0.75)},1},
						{Rotation_WP_Center,{Rotation_WP_Dir,	-0.01,	__EVAL(-0.36*0.75)},1},
						{Rotation_WP_Center,{Rotation_WP_Dir,	-0.01,	__EVAL(-0.39*0.75)},1},
						{Rotation_WP_Center,{Rotation_WP_Dir,	+0.01,	__EVAL(-0.39*0.75)},1},
					},
					{
						{Rotation_WP_Center,{Rotation_WP_Dir,	0,		__EVAL(0.39*0.75)},1},
						{Rotation_WP_Center,{Rotation_WP_Dir,	0.022,	__EVAL(0.37*0.75)},1},
						{Rotation_WP_Center,{Rotation_WP_Dir,	-0.022,	__EVAL(0.37*0.75)},1},
					},
					{
						{Rotation_WP_Center,{Rotation_WP_Dir,	0.014,	__EVAL(0.36*0.75)},1},
						{Rotation_WP_Center,{Rotation_WP_Dir,	-0.014,	__EVAL(0.36*0.75)},1},
						{Rotation_WP_Center,{Rotation_WP_Dir,	-0.014,	__EVAL(0.37*0.75)},1},
						{Rotation_WP_Center,{Rotation_WP_Dir,	0.014,	__EVAL(0.37*0.75)},1},
					},
				};
			};
		};
	};
	HUD_TEXT_STATIC(0.14,	0.94	,0.04,0.03,right,"IND",BtnIND)
	HUD_TEXT_STATIC(0.62,	0.94	,0.04,0.03,right,"EW",BtnEW)
	HUD_TEXT_STATIC(0.755,	0.94	,0.04,0.03,right,"DCLT",BtnDCLT)
	HUD_TEXT_STATIC(0.13,	0.4	,0.03,0.02,right,"BCN",BtnBCN)
	HUD_TEXT_STATIC(0.24,	0.4	,0.03,0.02,right,"L",BtnL)
	HUD_TEXT_STATIC(0.05,	0.355	,0.025,0.02,right,"M 0.40",MText)
	HUD_TEXT_STATIC(0.95,	0.355	,0.025,0.02,left,"1003  HPA",AtmPressText)
	class GreenPolygon
	{
		type = polygon;
		points[] =
		{
			{
				POLYGON_BOX(0.145,0.05,0.27,0.93)
			}
		};
	};
	class BlackText
	{
		color[] = {0,0,0};
		alpha = 1;
		HUD_TEXT_STATIC(0.31,	0.94	,0.03,0.025,right,"BFD",BtnEICAS1)
		HUD_TEXT_STATIC(0.31,	0.94	,0.03,0.025,right,"BFD",BtnEICAS2)
		HUD_TEXT_STATIC(0.31,	0.94	,0.03,0.025,right,"BFD",BtnEICAS3)
	};
};