#define PosX0Center 0.50 // 502
#define PosY0Center 0.50 // 49
#define SizeX10deg 0.43
#define SizeY10deg 0.47
#define XtoYscale (SizeX10deg / SizeY10deg)

#define PosXCenterHorizont 0.5
#define PosYCenterHorizont 0.495
#define SizeX10degHorizon 0.43*0.7
#define SizeY10degHorizon 0.47*0.7

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
			{LevelP##XX,{__EVAL(-0.26+0.014),0.04},1}, 									\
			{LevelP##XX,{__EVAL(+0.26-0.014),0.04},1},{}, 								\
			{LevelP##XX,{__EVAL(-0.1+0.014*1),-0.04},1}, 								\
			{LevelP##XX,{__EVAL( 0.1-0.014*1),-0.04},1}, 								\
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
		pos[]			= {LevelP##XX,{__EVAL(0.00 - 0.29),__EVAL(0.0 	+0.03)},1}; 	\
		right[]			= {LevelP##XX,{__EVAL(0.05 - 0.29),__EVAL(0.0 	+0.03)},1}; 	\
		down[]			= {LevelP##XX,{__EVAL(0.00 - 0.29),__EVAL(0.05	+0.03)},1}; 	\
	};																					\
	class VALP_1_##XX##_R 																\
	{ 																					\
		type			= text; 														\
		source			= static; 														\
		text			= #XX; 															\
		align			= right; 														\
		scale			= 1; 															\
		sourceScale		= 1; 															\
		pos[]			= {LevelP##XX,{__EVAL(0.00 + 0.29),__EVAL(0.0 	+0.03)},1}; 	\
		right[]			= {LevelP##XX,{__EVAL(0.05 + 0.29),__EVAL(0.0 	+0.03)},1}; 	\
		down[]			= {LevelP##XX,{__EVAL(0.00 + 0.29),__EVAL(0.05	+0.03)},1}; 	\
	}



#define DEF_HORIZONT_SPACING_Minus(XX) 													\
	class LevelM##XX: Level0 															\
	{ 																					\
		type			= line; 														\
		width			= 3;															\
		points[]		= 																\
		{ 																				\
			{LevelM##XX,{__EVAL(-0.26+0.014*1),-0.04},1}, 								\
			{LevelM##XX,{__EVAL( 0.26-0.014*1),-0.04},1},{}, 							\
			{LevelM##XX,{__EVAL(-0.1+0.014*1),0.04},1}, 								\
			{LevelM##XX,{__EVAL( 0.1-0.014*1),0.04},1}, 								\
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
		pos[]			= {LevelM##XX,{__EVAL(0.00 - 0.29),__EVAL(0.0 	-0.05)},1}; 	\
		right[]			= {LevelM##XX,{__EVAL(0.05 - 0.29),__EVAL(0.0 	-0.05)},1}; 	\
		down[]			= {LevelM##XX,{__EVAL(0.00 - 0.29),__EVAL(0.05	-0.05)},1}; 	\
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
		pos[]			= {LevelM##XX,{__EVAL(0.00 + 0.29),__EVAL(0.0 	-0.05)},1}; 	\
		right[]			= {LevelM##XX,{__EVAL(0.05 + 0.29),__EVAL(0.0 	-0.05)},1}; 	\
		down[]			= {LevelM##XX,{__EVAL(0.00 + 0.29),__EVAL(0.05	-0.05)},1}; 	\
	};

#define DEF_HORIZONT_SPACING_Plus2(XX) 													\
	class LevelP##XX: Level0 															\
	{ 																					\
		type			= line; 														\
		width			= 3;															\
		points[]		= 																\
		{ 																				\
			{LevelP##XX,{__EVAL(-0.1+0.014),-0.04},1}, 									\
			{LevelP##XX,{__EVAL(+0.1-0.014),-0.04},1},{},								\
			{LevelP##XX,{__EVAL(-0.18+0.014*1),0.04},1}, 								\
			{LevelP##XX,{__EVAL( 0.18-0.014*1),0.04},1}, 								\
		}; 																				\
	}

#define DEF_HORIZONT_SPACING_Minus2(XX) 												\
	class LevelM##XX: Level0 															\
	{ 																					\
		type			= line; 														\
		width			= 3;															\
		points[]		= 																\
		{ 																				\
			{LevelM##XX,{__EVAL(-0.18+0.014*1),-0.04},1}, 								\
			{LevelM##XX,{__EVAL( 0.18-0.014*1),-0.04},1},{}, 							\
			{LevelM##XX,{__EVAL(-0.1+0.014*1),0.04},1}, 								\
			{LevelM##XX,{__EVAL( 0.1-0.014*1),0.04},1}, 								\
		}; 																				\
	};

class Bones
{
	class Horizont_Center
	{
		type	= fixed;
		pos[]	= {0.49, 0.5};
	};
	class Horizont_Rotate
	{
		type			= rotational;
		source			= horizonBank;
		sourceScale		= 1;
		center[]		= {0.49, 0.5};
		min				= rad(-360);
		max				= rad(360);
		minAngle		= 360-180;
		maxAngle		= -360-180;
		aspectRatio	= __EVAL(SizeY10deg/SizeX10deg);
	};
	class HorizonBankRot
	{
		type			= linear;
		source			= gmeterXgrav;
		min				= -1;
		max				= 1;
		minPos[]		= {__EVAL(0.3-0.01), 0.9};
		maxPos[]		= {__EVAL(0.7-0.01), 0.9};
		aspectRatio		= 1;
	};
	class L_Center
	{
		type	= fixed;
		pos[]	= {0.25, 0.41};
	};
	class Level0
	{
		pos0[]	= {PosXCenterHorizont, PosYCenterHorizont};
		pos10[]	= {__EVAL(PosXCenterHorizont + SizeX10degHorizon), __EVAL(PosYCenterHorizont + SizeY10degHorizon)};
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


};
class Draw
{
	condition			= "on";
	alpha				= 0.3;
	color[]				= {1,1,1};
	// Artifical horizon
	class HorizontBackground
	{
		color[]		= {0,0.54,0.82};
		alpha 		= 0.2;
		clipTL[]	= {0.17, 0.2};
		clipBR[]	= {0.8, 0.82};
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
			alpha 		= 0.2;

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
			color[]		= {1.0, 1.0, 1.0};
			alpha 		= 0.9;
			class Dimmed
			{
				class Level0
				{
					type			= line;
					width			= 3.0;
					points[]		=
					{
						{Level0, {0.75, 0.0}, 1},
						{Level0, {-0.75, 0.0}, 1}
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
				};
			};
		};
		class Black
		{
			color[] = {0,0,0};
			alpha = 1;
			class Static
			{
				type = polygon;
				points[] =
				{
					// Left filler
					{
						POLYGON_BOX_BONE(Horizont_Center,0.12,0.03,0.1,-0.015)
					},
					{
						POLYGON_BOX_BONE(Horizont_Center,0.03,0.062,0.1,-0.015)
					},
					// Right filler
					{
						POLYGON_BOX_BONE(Horizont_Center,0.12,0.03,-0.22,-0.015)
					},
					{
						POLYGON_BOX_BONE(Horizont_Center,0.03,0.062,-0.13,-0.015)
					},
				};
			};
		};
	};
	class Static
	{
		type			= line;
		width			= 6.0;
		points[]		=
		{

			// Left
			{{0.05, 0.83}, 1},
			{{0.17, 0.83}, 1},
			{{0.17, 0.13}, 1},{},
			// Right
			{{0.95, 0.83}, 1},
			{{0.8, 0.83}, 1},
			{{0.8, 0.18}, 1},
			{{0.95, 0.18}, 1},{},
			// Bottom
			{{__EVAL(0.2*0.94+0.02), 0.855}, 1},
			{{__EVAL(0.8*0.94+0.02), 0.855}, 1},
			{{__EVAL(0.8*0.94+0.02), 0.94}, 1},
			{{__EVAL(0.2*0.94+0.02), 0.94}, 1},
			{{__EVAL(0.2*0.94+0.02), 0.855}, 1},{},

			{{__EVAL(0.55*0.94+0.02), 0.855}, 1},
			{{__EVAL(0.55*0.94+0.02), 0.94}, 1},{},
			{{__EVAL(0.45*0.94+0.02), 0.94}, 1},
			{{__EVAL(0.45*0.94+0.02), 0.855}, 1},{},
			// Flight indicator
			{Horizont_Center,{-0.023, __EVAL(0.0 	-0.015)}, 1},
			{Horizont_Center,{ 0.023, __EVAL(0.0 	-0.015)}, 1},
			{Horizont_Center,{ 0.023, __EVAL(0.03 	-0.015)}, 1},
			{Horizont_Center,{-0.023, __EVAL(0.03 	-0.015)}, 1},
			{Horizont_Center,{-0.023, __EVAL(0.0 	-0.015)}, 1},{},

			{Horizont_Center,{-0.1, __EVAL(0.0 	-0.015)}, 1},
			{Horizont_Center,{-0.22, __EVAL(0.0 	-0.015)}, 1},
			{Horizont_Center,{-0.22, __EVAL(0.03 	-0.015)}, 1},
			{Horizont_Center,{-0.13, __EVAL(0.03 	-0.015)}, 1},
			{Horizont_Center,{-0.13, __EVAL(0.06 	-0.015)}, 1},
			{Horizont_Center,{-0.1, __EVAL(0.06 	-0.015)}, 1},
			{Horizont_Center,{-0.1, __EVAL(0.0 	-0.015)}, 1},{},

			{Horizont_Center,{0.1, __EVAL(0.0 	-0.015)}, 1},
			{Horizont_Center,{0.22, __EVAL(0.0 	-0.015)}, 1},
			{Horizont_Center,{0.22, __EVAL(0.03 	-0.015)}, 1},
			{Horizont_Center,{0.13, __EVAL(0.03 	-0.015)}, 1},
			{Horizont_Center,{0.13, __EVAL(0.06 	-0.015)}, 1},
			{Horizont_Center,{0.1, __EVAL(0.06 	-0.015)}, 1},
			{Horizont_Center,{0.1, __EVAL(0.0 	-0.015)}, 1},{},

			#define SizeIn 0.205
			#define SizeInLong 0.19
			#define SizeOut 0.23
			CIRCLE_MARK(Horizont_Center,SizeInLong+0.04,SizeOut+0.04, 	-360),{},
			CIRCLE_MARK(Horizont_Center,SizeIn+0.04,SizeOut+0.04, 		-360+12.5*1),{},
			CIRCLE_MARK(Horizont_Center,SizeInLong+0.035,SizeOut+0.035, -360+12.5*2),{},
			CIRCLE_MARK(Horizont_Center,SizeIn+0.02,SizeOut+0.02, 		-360+12.5*3),{},
			CIRCLE_MARK(Horizont_Center,SizeIn+0.01,SizeOut+0.01, 		-360+12.5*4),{},

			CIRCLE_MARK(Horizont_Center,SizeIn+0.04,SizeOut+0.04, 		-360-12.5*1),{},
			CIRCLE_MARK(Horizont_Center,SizeInLong+0.035,SizeOut+0.035, -360-12.5*2),{},
			CIRCLE_MARK(Horizont_Center,SizeIn+0.02,SizeOut+0.02, 		-360-12.5*3),{},
			CIRCLE_MARK(Horizont_Center,SizeIn+0.01,SizeOut+0.01, 		-360-12.5*4),{},
			//CIRCLE_BIG(Direction_Center,0.24),{},
		};
	};
	class Polygon
	{
		type = polygon;
		#define CIRCLE_POLYGON(STEP_INIT,STEP_SIZE) 					\
		{																\
			{HorizonBankRot,1,{0,0}, 1},								\
			{HorizonBankRot,	{__EVAL((0.03) * sin(0+STEP_SIZE*(STEP_INIT+0))),	__EVAL(-(0.03) * cos(0+STEP_SIZE*(STEP_INIT+0)) / XtoYscale)},	1}, \
			{HorizonBankRot,	{__EVAL((0.03) * sin(0+STEP_SIZE*(STEP_INIT+1))),	__EVAL(-(0.03) * cos(0+STEP_SIZE*(STEP_INIT+1)) / XtoYscale)},	1}, \
			{HorizonBankRot,	{__EVAL((0.03) * sin(0+STEP_SIZE*(STEP_INIT+2))),	__EVAL(-(0.03) * cos(0+STEP_SIZE*(STEP_INIT+2)) / XtoYscale)},	1}, \
		}
		points[] =
		{
			{
				{Horizont_Rotate,{0.02, 	__EVAL(-0.24 	+0.011)}, 1},
				{Horizont_Rotate,{0.0, 		__EVAL(-0.24 	-0.011)}, 1},
				{Horizont_Rotate,{-0.02, 	__EVAL(-0.24 	+0.011)}, 1},
			},
			CIRCLE_POLYGON(1,10),
			CIRCLE_POLYGON(3,10),
			CIRCLE_POLYGON(5,10),
			CIRCLE_POLYGON(7,10),
			CIRCLE_POLYGON(9,10),
			CIRCLE_POLYGON(11,10),
			CIRCLE_POLYGON(13,10),
			CIRCLE_POLYGON(15,10),
			CIRCLE_POLYGON(17,10),
			CIRCLE_POLYGON(19,10),
			CIRCLE_POLYGON(21,10),
			CIRCLE_POLYGON(23,10),
			CIRCLE_POLYGON(25,10),
			CIRCLE_POLYGON(27,10),
			CIRCLE_POLYGON(29,10),
			CIRCLE_POLYGON(31,10),
			CIRCLE_POLYGON(33,10),
			CIRCLE_POLYGON(35,10),
		};
	};
	class Group_Green
	{
		color[]				= {0,0.15,0};
		alpha = 0.4;
		HUD_TEXT_STATIC(0.9,	0.09	,0.05,0.065,left,"1013",AtmPressText)
		HUD_TEXT_STATIC(0.98,	0.115	,0.03,0.04,left,"hPa",AtmPressText2)
	};

	class SpeedScale
	{
		type			= scale;
		horizontal		= false;
		source			= speed;
		sourceScale		= SPEED_FACTOR;
		width			= 4.0;

		top				= 0.82;
		center			= __EVAL((0.62+0.17)/2+0.2);
		bottom			= 0.17;

		lineXleft		= __EVAL(0.88-0.71);
		lineYright		= __EVAL(0.88-0.71);
		lineXleftMajor	= __EVAL(0.88-0.71);
		lineYrightMajor	= __EVAL(0.83-0.71);
		majorLineEach	= 4;
		numberEach		= 4;
		step			= 5;
		stepSize		= __EVAL((0.82 - 0.17) / 15);

		align			= left;
		scale			= 1;
		pos[]			= {__EVAL(0.00	+0.14), 	__EVAL(0.00		+0.73)};
		right[]			= {__EVAL(0.04	+0.14), 	__EVAL(0.00		+0.73)};
		down[]			= {__EVAL(0.00	+0.14), 	__EVAL(0.04		+0.73)};
	};
	class ClipScaleAlt
	{
		clipTL[]	= {0.147, 0.15};
		clipBR[]	= {0.97, 0.75};
		class ALtitudeScale
		{
			type			= scale;
			horizontal		= false;
			source			= altitudeASL;
			sourceScale		= 1 * HEIGHT_FACTOR;
			sourceOffset 	= -6;
			sourcePrecision	= 0;
			width			= 4.0;

			top				= 0.82;
			center			= __EVAL((0.82+0.17)/2-0.17);
			bottom			= 0.17;

			lineXleft		= __EVAL(0.88-0.02);
			lineYright		= __EVAL(0.88-0.02);
			lineXleftMajor	= __EVAL(0.83-0.02);
			lineYrightMajor	= __EVAL(0.88-0.02);
			majorLineEach	= 4;
			numberEach		= 4;
			step			= 5;
			stepSize		= __EVAL((0.82 - 0.05) / 15);

			align			= left;
			scale			= 0.01;
			pos[]			= {__EVAL(0.00	+ 0.9), 	__EVAL(0.00+0.77)};
			right[]			= {__EVAL(0.03	+ 0.9), 	__EVAL(0.00+0.77)};
			down[]			= {__EVAL(0.00	+ 0.9), 	__EVAL(0.03+0.77)};
		};
	};
	class ScaleBackground
	{
		color[] = {0,0,0};
		alpha = 1;
		class DrawPolygon
		{
			type = polygon;
			points[] =
			{
				{
					POLYGON_BOX(0.14,0.095,0.04,0.45)
				},
				{
					POLYGON_BOX(0.19,0.095,0.04+0.75,0.45)
				},
			};
		};
		class DrawOutline
		{
			color[] = {1,1,1};
			alpha = 0.2;
			class Outline
			{
				type = line;
				width = 4;
				points[] =
				{
					DRAW_BOX(0.04,0.45,0.14,0.095),{},
					DRAW_BOX(0.04+0.75,0.45,0.19,0.095)
				};
			};
			HUD_TEXT_SOURCE_SCALE(0.14,	0.475 ,0.045,0.045,left,speed,0.1*SPEED_FACTOR,0,-0.48,1,SpeedText)
			class ClipScale
			{
				clipTL[]	= {0.147, 0.45};
				clipBR[]	= {0.17, 0.55};
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
					pos[]			= {__EVAL(0.00	+0.145), 	__EVAL(0.00 +0.64)};
					right[]			= {__EVAL(0.03	+0.145), 	__EVAL(0.00 +0.64)};
					down[]			= {__EVAL(0.00	+0.145), 	__EVAL(0.025+0.64)};
				};
			};
			HUD_TEXT_SOURCE_SCALE(0.91,	0.475 ,0.045,0.045,left,altitudeAGL,0.01*HEIGHT_FACTOR,0,-0.48,3,AltitudeText)
			class ClipScale2
			{
				clipTL[]	= {0.915, 0.45};
				clipBR[]	= {0.945, 0.55};
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
					pos[]			= {__EVAL(0.00	+0.885 + 0.018), 	__EVAL(0.00+0.64)};
					right[]			= {__EVAL(0.03	+0.885 + 0.018), 	__EVAL(0.00+0.64)};
					down[]			= {__EVAL(0.00	+0.885 + 0.018), 	__EVAL(0.03+0.64)};
				};
			};
			class ClipScale3
			{
				clipTL[]	= {0.95, 0.45};
				clipBR[]	= {0.975, 0.55};
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
					pos[]			= {__EVAL(0.00	+0.905 + 0.009), 	__EVAL(0.00+0.64)};
					right[]			= {__EVAL(0.03	+0.905 + 0.009), 	__EVAL(0.00+0.64)};
					down[]			= {__EVAL(0.00	+0.905 + 0.009), 	__EVAL(0.03+0.64)};
				};
			};
		};
	};
};