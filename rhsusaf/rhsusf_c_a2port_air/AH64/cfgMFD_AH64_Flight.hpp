#define PosX0Center 0.50 // 502
#define PosY0Center 0.50 // 49
#define SizeX10deg 0.434
#define SizeY10deg 0.430

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

#define DEF_HORIZONT_SPACING_Plus(XX) 													\
	class LevelP##XX		 															\
	{ 																					\
		type			= line; 														\
		width			= 3;															\
		points[]		= 																\
		{ 																				\
			{LevelP##XX,{__EVAL(-0.18+0.014),0.02},1}, 									\
			{LevelP##XX,{__EVAL(-0.18+0.014),0},1}, 									\
			{LevelP##XX,{__EVAL(-0.18+0.014*10),0},1}, 									\
			{}, 																		\
			{LevelP##XX,{__EVAL(+0.18-0.014*9),0},1}, 									\
			{LevelP##XX,{__EVAL(+0.18+0.014),0},1}, 									\
			{LevelP##XX,{__EVAL(+0.18+0.014),0.02},1} 									\
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
		pos[]			= {LevelP##XX,{__EVAL(-0.21 + 0.02),__EVAL(-0.082+0.065)},1}; 	\
		right[]			= {LevelP##XX,{__EVAL(-0.17 + 0.02),__EVAL(-0.082+0.065)},1}; 	\
		down[]			= {LevelP##XX,{__EVAL(-0.21 + 0.02),__EVAL(-0.034+0.065)},1}; 	\
	};																					\
	class VALP_1_##XX##_R 																\
	{ 																					\
		type			= text; 														\
		source			= static; 														\
		text			= #XX; 															\
		align			= right; 														\
		scale			= 1; 															\
		sourceScale		= 1; 															\
		pos[]			= {LevelP##XX,{__EVAL( 0.21 + 0.00),__EVAL(-0.082+0.065)},1}; 	\
		right[]			= {LevelP##XX,{__EVAL( 0.25 + 0.00),__EVAL(-0.082+0.065)},1}; 	\
		down[]			= {LevelP##XX,{__EVAL( 0.21 + 0.00),__EVAL(-0.034+0.065)},1}; 	\
	}



#define DEF_HORIZONT_SPACING_SMALL(XX) 													\
	class Level##XX		 																\
	{ 																					\
		type			= line; 														\
		width			= 3;															\
		points[]		= 																\
		{ 																				\
			{Level##XX,{__EVAL(-0.015*1+0.01),0},1}, 									\
			{Level##XX,{__EVAL(+0.015*1+0.01),0},1}										\
		};  																			\
	}

#define DEF_HORIZONT_SPACING_Minus(XX) 													\
	class LevelM##XX		 															\
	{ 																					\
		type			= line; 														\
		width			= 3;															\
		points[]		= 																\
		{ 																				\
			{LevelM##XX,{__EVAL(-0.18+0.014*1),-0.02},1}, 								\
			{LevelM##XX,{__EVAL(-0.18+0.014*1),0},1},									\
			{LevelM##XX,{__EVAL(-0.18+0.014*3),0},1}, 	{},								\
			{LevelM##XX,{__EVAL(-0.18+0.014*4),0},1},									\
			{LevelM##XX,{__EVAL(-0.18+0.014*6),0},1}, 	{},								\
			{LevelM##XX,{__EVAL(-0.18+0.014*7),0},1},									\
			{LevelM##XX,{__EVAL(-0.18+0.014*9),0},1}, 	{},								\
			{},																			\
			{LevelM##XX,{__EVAL( 0.18-0.014*1),-0.02},1}, 								\
			{LevelM##XX,{__EVAL( 0.18-0.014*1),0},1},									\
			{LevelM##XX,{__EVAL( 0.18-0.014*3),0},1},	{},								\
			{LevelM##XX,{__EVAL( 0.18-0.014*4),0},1},									\
			{LevelM##XX,{__EVAL( 0.18-0.014*6),0},1}, 	{},								\
			{LevelM##XX,{__EVAL( 0.18-0.014*7),0},1},									\
			{LevelM##XX,{__EVAL( 0.18-0.014*9),0},1}, 	{}								\
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
		pos[]			= {LevelM##XX,{__EVAL(-0.21 + 0.03),__EVAL(-0.082+0.05)},1}; 	\
		right[]			= {LevelM##XX,{__EVAL(-0.17 + 0.03),__EVAL(-0.082+0.05)},1}; 	\
		down[]			= {LevelM##XX,{__EVAL(-0.21 + 0.03),__EVAL(-0.034+0.05)},1}; 	\
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
		pos[]			= {LevelM##XX,{__EVAL( 0.21 - 0.03),__EVAL(-0.082+0.05)},1}; 	\
		right[]			= {LevelM##XX,{__EVAL( 0.25 - 0.03),__EVAL(-0.082+0.05)},1}; 	\
		down[]			= {LevelM##XX,{__EVAL( 0.21 - 0.03),__EVAL(-0.034+0.05)},1}; 	\
	}

class Bones
{
	class HUDCenter
	{
		type			= fixed;
		pos[]			= {PosX0Center, PosY0Center};
	};


	class VelocityVector
	{
		type			= vector;
		source			= velocity;
		pos0[]			= {PosX0Center, PosY0Center};
		pos10[]			= {__EVAL(PosX0Center + SizeX10deg), __EVAL(PosY0Center + SizeY10deg)};
	};

	class ForwardVector
	{
		type			= vector;
		source			= forward;
		pos0[]			= {0, 0};
		pos10[]			= {SizeX10deg, SizeY10deg};
	};

	class HorizonVector
	{
		type			= horizon;
		pos0[]			= {PosX0Center, PosY0Center};
		pos10[]			= {__EVAL(PosX0Center + SizeX10deg * 1.4142), __EVAL(PosY0Center + SizeY10deg * 1.4142)};
		angle			= 0;
	};

	class GunnerAim
	{
		type		= vector;
		source		= turret;
		pos0[]		= {0, -2.0}; // in spherical this is offset
		pos10[]		= {0.0068, -0.01}; // in spherical pos10 is scale
		projection	= 0;  // 1 (default) planar projection. 0 spherical projection
	};
	class VerticalSpeedBone
	{
		type			= linear;
		source			= vspeed;
		sourceScale		= 1;
		min				= -10;
		max				= 10;
		minPos[]		= {0, -0.26};
		maxPos[]		= {0, 0.26};
	};
	class TurnRate
	{
		type			= linear;
		source			= user;
		sourceIndex 	= 11;
		min				= -4.8;
		max				= 4.8;
		minPos[]		= {0.36, 0.87};
		maxPos[]		= {0.64, 0.87};
		aspectRatio		= 1;
	};
	class FCR_Bearing
	{
		type			= linear;
		source			= user;
		sourceIndex		= 17;
		min				= -180;
		max				= 180;
		minPos[]		= {0.35, 0.165};
		maxPos[]		= {0.66, 0.165};
	};
	class HorizonBankRot
	{
		type			= linear;
		source			= gmeterXgrav;
		min				= -1;
		max				= 1;
		minPos[]		= {0.41, 0.94};
		maxPos[]		= {0.59, 0.94};
		aspectRatio		= 1;
	};
	class HorizonBankRot_Up
	{
		type		= rotational;
		source		= horizonBank;
		center[]	= {0.5,0.5};
		min			= -rad(90);
		max			= rad(90);
		minAngle	= 180.25-89;
		maxAngle	= 180.75+89;
		aspectRatio	= 1;
	};
	class HorizonBankRotFull
	{
		type			= rotational;
		source			= horizonBank;
		center[]		= {0, 0};
		min				= __EVAL(-3.1416);
		max				= __EVAL(3.1416);
		minAngle		= __EVAL(-180);
		maxAngle		= __EVAL(180);
		aspectRatio		= 1;
	};
	class LimitWaypoint
	{
		type			= limit;
		limits[]		= {0.23,0.14,0.77,0.14};
	};
	class WPPoint
	{
		type			= vector;
		source			= WPPoint;
		pos0[]			= {0.5, __EVAL(PosY0Center)};
		pos10[]			= {__EVAL(0.5 + 0.1), __EVAL(PosY0Center + SizeY10deg)};
	};

	class Level0
	{
		pos0[]	= {PosX0Center, PosY0Center};
		pos10[]	= {__EVAL(PosX0Center + SizeX10deg * 0.24), __EVAL(PosY0Center + SizeY10deg * 0.24)};
		type	= horizon;
		angle	= 0;
	};
	class LevelP05 : Level0 {angle = 5;};
	class LevelM05 : Level0 {angle = -5;};
	class LevelP10 : Level0 {angle = 10;};
	class LevelM10 : Level0 {angle = -10;};
	class LevelP15 : Level0 {angle = 15;};
	class LevelM15 : Level0 {angle = -15;};
	class LevelP20 : Level0 {angle = 20;};
	class LevelM20 : Level0 {angle = -20;};
	class LevelP25 : Level0 {angle = 25;};
	class LevelM25 : Level0 {angle = -25;};
	class LevelP30 : Level0 {angle = 30;};
	class LevelM30 : Level0 {angle = -30;};
	class LevelP35 : Level0 {angle = 35;};
	class LevelM35 : Level0 {angle = -35;};
	class LevelP40 : Level0 {angle = 40;};
	class LevelM40 : Level0 {angle = -40;};
	class LevelP45 : Level0 {angle = 45;};
	class LevelM45 : Level0 {angle = -45;};
	class LevelP50 : Level0 {angle = 50;};
	class LevelM50 : Level0 {angle = -50;};
	class LevelP60 : Level0 {angle = 60;};
	class LevelM60 : Level0 {angle = -60;};
	class LevelP70 : Level0 {angle = 70;};
	class LevelM70 : Level0 {angle = -70;};
	class LevelP80 : Level0 {angle = 80;};
	class LevelM80 : Level0 {angle = -80;};
	class LevelP90 : Level0 {angle = 90;};
	class LevelM90 : Level0 {angle = -90;};
	#define RADAR_X 973
	#define RADAR_Y 780
	class RadarHeight
	{
		type			= linear;
		source			= altitudeAGL;
		sourceScale		= 1;
		sourceOffset	= -2;
		min				= 0;
		max				= 61;	// IRL it's 200 feets ~ 61 meters
		minPos[]		= {0.RADAR_X,0.25};
		maxPos[]		= {0.RADAR_X,0.RADAR_Y};
	};
};
#define DRAW_BOX(posX,posY,sizeX,sizeY)\
	{{__EVAL(posX			), __EVAL(posY)}, 1},\
	{{__EVAL(posX + sizeX 	), __EVAL(posY)}, 1},\
	{{__EVAL(posX + sizeX 	), __EVAL(posY + sizeY)}, 1},\
	{{__EVAL(posX			), __EVAL(posY + sizeY)}, 1},\
	{{__EVAL(posX			), __EVAL(posY)}, 1}

class Draw
{
	alpha				= 1.0;
	color[]				= {0,0.12,0};
	MFD_CONDITION(MFD_CONDITION_NUMBER,0)
	class Static
	{
		type			= line;
		width			= 4.0;
		points[]		=
		{
			// Velocity vector
			CIRCLE(VelocityVector,0.02),{},
			{VelocityVector, { 0.04, __EVAL(0/XtoYscale)}, 1}, {VelocityVector, { 0.02, __EVAL(0/XtoYscale)}, 1},{},
			{VelocityVector, {-0.04, __EVAL(0/XtoYscale)}, 1}, {VelocityVector, {-0.02, __EVAL(0/XtoYscale)}, 1},{},
			{VelocityVector, {0, __EVAL(-0.04/XtoYscale)}, 1}, {VelocityVector, {0, __EVAL(-0.02/XtoYscale)}, 1},{},
			// bank lines
			CIRCLE_MARK_CENTER(PosX0Center, 0.54, 0.33+0.01, 0.34+0.01, - 90 * 5 / 22),{},
			CIRCLE_MARK_CENTER(PosX0Center, 0.54, 0.32+0.01, 0.34+0.01, - 90 * 4 / 22),{},
			CIRCLE_MARK_CENTER(PosX0Center, 0.54, 0.33+0.01, 0.34+0.01, - 90 * 3 / 22),{},
			CIRCLE_MARK_CENTER(PosX0Center, 0.54, 0.32+0.01, 0.34+0.01, - 90 * 2 / 22),{},
			CIRCLE_MARK_CENTER(PosX0Center, 0.54, 0.33+0.01, 0.34+0.01, - 90 * 1 / 22),{},
			CIRCLE_MARK_CENTER(PosX0Center, 0.54, 0.33+0.01, 0.34+0.01, + 90 * 1 / 22),{},
			CIRCLE_MARK_CENTER(PosX0Center, 0.54, 0.32+0.01, 0.34+0.01, + 90 * 2 / 22),{},
			CIRCLE_MARK_CENTER(PosX0Center, 0.54, 0.33+0.01, 0.34+0.01, + 90 * 3 / 22),{},
			CIRCLE_MARK_CENTER(PosX0Center, 0.54, 0.32+0.01, 0.34+0.01, + 90 * 4 / 22),{},
			CIRCLE_MARK_CENTER(PosX0Center, 0.54, 0.33+0.01, 0.34+0.01, + 90 * 5 / 22),{},
			// Slip indicator
			{{0.38, 0.96}, 1},
			{{0.62, 0.96}, 1},
			{},
			{{0.52, 0.96}, 1},{{0.52, 0.92}, 1},
			{},
			{{0.48, 0.96}, 1},{{0.48, 0.92}, 1},
			{},
			// Turn rate
			{{0.36, 0.90}, 1},{{0.36, 0.865}, 1},{},
			{{0.40, 0.90}, 1},{{0.40, 0.865}, 1},{},
			{{0.44, 0.90}, 1},{{0.44, 0.865}, 1},{},
			{{0.48, 0.90}, 1},{{0.48, 0.865}, 1},{},
			{{0.52, 0.90}, 1},{{0.52, 0.865}, 1},{},
			{{0.56, 0.90}, 1},{{0.56, 0.865}, 1},{},
			{{0.60, 0.90}, 1},{{0.60, 0.865}, 1},{},
			{{0.64, 0.90}, 1},{{0.64, 0.865}, 1},{},
			// Side vspeed scale
			#define SCALE_SPACE 0.026
			#define OFFSET_X 0.07
			#define OFFSET_Y 0.52
			{{__EVAL(0.870+0.045 + OFFSET_X), __EVAL(OFFSET_Y - SCALE_SPACE * 10)}, 1},
			{{__EVAL(0.890+0.045 + OFFSET_X), __EVAL(OFFSET_Y - SCALE_SPACE * 10)}, 1},{},
			{{__EVAL(0.870+0.000 + OFFSET_X), __EVAL(OFFSET_Y - SCALE_SPACE * 10)}, 1},
			{{__EVAL(0.890+0.000 + OFFSET_X), __EVAL(OFFSET_Y - SCALE_SPACE * 10)}, 1},{},

			{{__EVAL(0.870+0.045 + OFFSET_X), __EVAL(OFFSET_Y - SCALE_SPACE * 5)}, 1},
			{{__EVAL(0.890+0.045 + OFFSET_X), __EVAL(OFFSET_Y - SCALE_SPACE * 5)}, 1}, {},
			{{__EVAL(0.870 + OFFSET_X), __EVAL(OFFSET_Y - SCALE_SPACE * 5)}, 1},
			{{__EVAL(0.890 + OFFSET_X), __EVAL(OFFSET_Y - SCALE_SPACE * 5)}, 1}, {},
			{{__EVAL(0.875 + OFFSET_X), __EVAL(OFFSET_Y - SCALE_SPACE * 4)}, 1},
			{{__EVAL(0.885 + OFFSET_X), __EVAL(OFFSET_Y - SCALE_SPACE * 4)}, 1}, {},
			{{__EVAL(0.875 + OFFSET_X), __EVAL(OFFSET_Y - SCALE_SPACE * 3)}, 1},
			{{__EVAL(0.885 + OFFSET_X), __EVAL(OFFSET_Y - SCALE_SPACE * 3)}, 1}, {},
			{{__EVAL(0.875 + OFFSET_X), __EVAL(OFFSET_Y - SCALE_SPACE * 2)}, 1},
			{{__EVAL(0.885 + OFFSET_X), __EVAL(OFFSET_Y - SCALE_SPACE * 2)}, 1}, {},
			{{__EVAL(0.875 + OFFSET_X), __EVAL(OFFSET_Y - SCALE_SPACE * 1)}, 1},
			{{__EVAL(0.885 + OFFSET_X), __EVAL(OFFSET_Y - SCALE_SPACE * 1)}, 1}, {},

			{{__EVAL(0.870+ OFFSET_X), __EVAL(OFFSET_Y - SCALE_SPACE * 0)}, 1},
			{{__EVAL(0.890+ OFFSET_X), __EVAL(OFFSET_Y - SCALE_SPACE * 0)}, 1}, {},
			{{__EVAL(0.870+0.045 + OFFSET_X), __EVAL(OFFSET_Y - SCALE_SPACE * 0)}, 1},
			{{__EVAL(0.890+0.045 + OFFSET_X), __EVAL(OFFSET_Y - SCALE_SPACE * 0)}, 1}, {},

			{{__EVAL(0.870+0.045 + OFFSET_X), __EVAL(OFFSET_Y + SCALE_SPACE * 5)}, 1},
			{{__EVAL(0.890+0.045 + OFFSET_X), __EVAL(OFFSET_Y + SCALE_SPACE * 5)}, 1}, {},
			{{__EVAL(0.870 + OFFSET_X), __EVAL(OFFSET_Y + SCALE_SPACE * 5)}, 1},
			{{__EVAL(0.890 + OFFSET_X), __EVAL(OFFSET_Y + SCALE_SPACE * 5)}, 1}, {},
			{{__EVAL(0.875 + OFFSET_X), __EVAL(OFFSET_Y + SCALE_SPACE * 4)}, 1},
			{{__EVAL(0.885 + OFFSET_X), __EVAL(OFFSET_Y + SCALE_SPACE * 4)}, 1}, {},
			{{__EVAL(0.875 + OFFSET_X), __EVAL(OFFSET_Y + SCALE_SPACE * 3)}, 1},
			{{__EVAL(0.885 + OFFSET_X), __EVAL(OFFSET_Y + SCALE_SPACE * 3)}, 1}, {},
			{{__EVAL(0.875 + OFFSET_X), __EVAL(OFFSET_Y + SCALE_SPACE * 2)}, 1},
			{{__EVAL(0.885 + OFFSET_X), __EVAL(OFFSET_Y + SCALE_SPACE * 2)}, 1}, {},
			{{__EVAL(0.875 + OFFSET_X), __EVAL(OFFSET_Y + SCALE_SPACE * 1)}, 1},
			{{__EVAL(0.885 + OFFSET_X), __EVAL(OFFSET_Y + SCALE_SPACE * 1)}, 1},{},
			// right side
			{{__EVAL(0.875+0.045 + OFFSET_X), __EVAL(OFFSET_Y + SCALE_SPACE * 6)}, 1},
			{{__EVAL(0.885+0.045 + OFFSET_X), __EVAL(OFFSET_Y + SCALE_SPACE * 6)}, 1}, {},
			{{__EVAL(0.875+0.045 + OFFSET_X), __EVAL(OFFSET_Y + SCALE_SPACE * 7)}, 1},
			{{__EVAL(0.885+0.045 + OFFSET_X), __EVAL(OFFSET_Y + SCALE_SPACE * 7)}, 1}, {},
			{{__EVAL(0.875+0.045 + OFFSET_X), __EVAL(OFFSET_Y + SCALE_SPACE * 8)}, 1},
			{{__EVAL(0.885+0.045 + OFFSET_X), __EVAL(OFFSET_Y + SCALE_SPACE * 8)}, 1}, {},
			{{__EVAL(0.875+0.045 + OFFSET_X), __EVAL(OFFSET_Y + SCALE_SPACE * 9)}, 1},
			{{__EVAL(0.885+0.045 + OFFSET_X), __EVAL(OFFSET_Y + SCALE_SPACE * 9)}, 1}, {},
			{{__EVAL(0.870+0.045 + OFFSET_X), __EVAL(OFFSET_Y + SCALE_SPACE * 10)}, 1},
			{{__EVAL(0.890+0.045 + OFFSET_X), __EVAL(OFFSET_Y + SCALE_SPACE * 10)}, 1},{},
			{{__EVAL(0.870+0.000 + OFFSET_X), __EVAL(OFFSET_Y + SCALE_SPACE * 10)}, 1},
			{{__EVAL(0.890+0.000 + OFFSET_X), __EVAL(OFFSET_Y + SCALE_SPACE * 10)}, 1},{},
			// Box Flight
			DRAW_BOX(0.125,0.93,0.09,0.05),{},
			// Line Util
			{{0.8, __EVAL(0.014)}, 1},
			{{0.87, __EVAL(0.014)}, 1},{},
			// Line Perf
			{{0.51, __EVAL(0.014)}, 1},
			{{0.61, __EVAL(0.014)}, 1},{},
			// Line Perf
			{{0.38, __EVAL(0.014)}, 1},
			{{0.46, __EVAL(0.014)}, 1},{},
			// Line eng
			{{0.135, __EVAL(0.014)}, 1},
			{{0.2, __EVAL(0.014)}, 1},{},
		};
	};
	class StaticBold
	{
		type			= line;
		width			= 6.0;
		points[]		=
		{
			CIRCLE_MARK_CENTER(PosX0Center, 0.54, 0.32+0.01, 0.34+0.01, - 90 * 6 / 22),{},
			CIRCLE_MARK_CENTER(PosX0Center, 0.54, 0.32+0.01, 0.373+0.01, 0),{},
			CIRCLE_MARK_CENTER(PosX0Center, 0.54, 0.32+0.01, 0.34+0.01, + 90 * 6 / 22),{},
			// Whisky mark
			{HUDCenter, {__EVAL(1.8*-0.06		), 	__EVAL(1.9*0 		)}, 1},
			{HUDCenter, {__EVAL(1.8*-0.015		), 	__EVAL(1.9*0 		)}, 1},
			{HUDCenter, {__EVAL(1.8*-0.0075		), 	__EVAL(1.9*0.015	)}, 1},
			{HUDCenter, {__EVAL(1.8*+0.0		), 	__EVAL(1.9*0 		)}, 1},
			{HUDCenter, {__EVAL(1.8*+0.0075		), 	__EVAL(1.9*0.015	)}, 1},
			{HUDCenter, {__EVAL(1.8*+0.015		), 	__EVAL(1.9*0 		)}, 1},
			{HUDCenter, {__EVAL(1.8*+0.06		), 	__EVAL(1.9*0 		)}, 1},{}
		};
	};
	class DrawBankLeft
	{
		condition = "(horizonBank<=-0.4)";
		color[] = {1,1,1};
		class Static
		{
			type			= line;
			width			= 4.0;
			points[]		=
			{
				// bank lines
				CIRCLE_MARK_CENTER(PosX0Center, 0.54, 0.32+0.01, 0.34+0.01, - 90 * 19 	/ 22),{},
				CIRCLE_MARK_CENTER(PosX0Center, 0.54, 0.33+0.01, 0.34+0.01, - 90 * 17 	/ 22),{},
				CIRCLE_MARK_CENTER(PosX0Center, 0.54, 0.33+0.01, 0.34+0.01, - 90 * 15 	/ 22),{},
				CIRCLE_MARK_CENTER(PosX0Center, 0.54, 0.32+0.01, 0.34+0.01, - 90 * 13 	/ 22),{},
				CIRCLE_MARK_CENTER(PosX0Center, 0.54, 0.33+0.01, 0.34+0.01, - 90 * 11 	/ 22),{},
				CIRCLE_MARK_CENTER(PosX0Center, 0.54, 0.32+0.01, 0.34+0.01, - 90 * 9 	/ 22),{},
				CIRCLE_MARK_CENTER(PosX0Center, 0.54, 0.33+0.01, 0.34+0.01, - 90 * 7 	/ 22),{}
			};
		};
	};
	class DrawBankRight
	{
		condition = "(horizonBank>=0.4)";
		color[] = {1,1,1};
		class Static
		{
			type			= line;
			width			= 4.0;
			points[]		=
			{
				// bank lines
				CIRCLE_MARK_CENTER(PosX0Center, 0.54, 0.33+0.01, 0.34+0.01, + 90 * 7 	/ 22),{},
				CIRCLE_MARK_CENTER(PosX0Center, 0.54, 0.32+0.01, 0.34+0.01, + 90 * 9 	/ 22),{},
				CIRCLE_MARK_CENTER(PosX0Center, 0.54, 0.33+0.01, 0.34+0.01, + 90 * 11 	/ 22),{},
				CIRCLE_MARK_CENTER(PosX0Center, 0.54, 0.32+0.01, 0.34+0.01, + 90 * 13 	/ 22),{},
				CIRCLE_MARK_CENTER(PosX0Center, 0.54, 0.33+0.01, 0.34+0.01, + 90 * 15 	/ 22),{},
				CIRCLE_MARK_CENTER(PosX0Center, 0.54, 0.33+0.01, 0.34+0.01, + 90 * 17 	/ 22),{},
				CIRCLE_MARK_CENTER(PosX0Center, 0.54, 0.32+0.01, 0.34+0.01, + 90 * 19 	/ 22),{}
			};
		};
	};
	class RadarAltitude
	{
		condition = "62-altitudeAGL";
		class RadarHeight
		{
			type	=line;
			width	=15;
			points[]=
			{
				{				{0.RADAR_X,	0.RADAR_Y},1},
				{RadarHeight,	{0,		0.0},1},{},
			};
		};
	};
	#define HEADING_OFFSET_Y 0.05
	class HeadingHeadNumber
	{
		type			= text;
		source			= heading;
		sourceScale		= 1;

		align			= center;
		scale			= 1;
		TEXT_SIZEPOS(0.5,0.042+HEADING_OFFSET_Y,0.04,0.04)

	};
	class HeadingScaleRight
	{
		clipTL[]              = {0.55, 0.00};
		clipBR[]              = {0.77, 0.5};

		class lines
		{
			type                    = scale;
			horizontal              = true;
			source                  = heading;
			sourceScale             = 0.1;
			width                   = 4.0;
			NeverEatSeaWeed 		= 1;

			top                     = 0.50;
			center                  = 0.50;
			bottom                  = 0.82;

			lineXleft				= __EVAL(0.11+HEADING_OFFSET_Y);
			lineYright				= __EVAL(0.10+HEADING_OFFSET_Y);
			lineXleftMajor			= __EVAL(0.11+HEADING_OFFSET_Y);
			lineYrightMajor			= __EVAL(0.09+HEADING_OFFSET_Y);
			majorLineEach			= 3;
			numberEach				= 3;
			step					= __EVAL(10*0.1);
			stepSize				= __EVAL(1/36*0.95);

			align                   = center;
			scale                   = 1;
			pos[]                   = {__EVAL(0.525 - 0.03), 0.05+HEADING_OFFSET_Y};
			right[]                 = {__EVAL(0.55 	- 0.03), 0.05+HEADING_OFFSET_Y};
			down[]                  = {__EVAL(0.525 - 0.03), 0.08+HEADING_OFFSET_Y};
		};
	};
	class HeadingScaleMidle
	{
		type			= scale;
		horizontal		= true;
		source			= heading;
		sourceScale		= 0.1;
		width			= 4.0;
		NeverEatSeaWeed = 1;

		top				= 0.45;
		center			= 0.50;
		bottom			= 0.55;

		lineXleft		= __EVAL(0.11+HEADING_OFFSET_Y);
		lineYright		= __EVAL(0.10+HEADING_OFFSET_Y);
		lineXleftMajor	= __EVAL(0.11+HEADING_OFFSET_Y);
		lineYrightMajor	= __EVAL(0.10+HEADING_OFFSET_Y);
		majorLineEach	= 2;
		step			= __EVAL(10*0.1);
		stepSize		= __EVAL(1/36*0.95);


		align			= center;
		scale			= 1;

		numberEach		= 0; // hidden
		pos[]			= {0.47, 0.05+HEADING_OFFSET_Y};
		right[]			= {0.50, 0.05+HEADING_OFFSET_Y};
		down[]			= {0.45, 0.09+HEADING_OFFSET_Y};

	};
	class HeadingScaleLeft
	{
		clipTL[]              = {0.23, 0.00};
		clipBR[]              = {0.45, 0.5};

		class lines
		{
			type					= scale;
			horizontal				= true;
			source					= heading;
			sourceScale				= 0.1;
			width					= 4.0;
			NeverEatSeaWeed 		= 1;

			top						= 0.17;
			center					= 0.50;
			bottom					= 0.55;

			lineXleft				= __EVAL(0.11+HEADING_OFFSET_Y);
			lineYright				= __EVAL(0.10+HEADING_OFFSET_Y);
			lineXleftMajor			= __EVAL(0.11+HEADING_OFFSET_Y);
			lineYrightMajor			= __EVAL(0.09+HEADING_OFFSET_Y);
			majorLineEach			= 3;
			numberEach				= 3;
			step					= __EVAL(10*0.1);
			stepSize				= __EVAL(1/36*0.95);

			align					= center;
			scale					= 1;

			pos[]					= {__EVAL(0.175-0.009), 0.05+HEADING_OFFSET_Y};
			right[]					= {__EVAL(0.20- 0.009), 0.05+HEADING_OFFSET_Y};
			down[]					= {__EVAL(0.175-0.009), 0.08+HEADING_OFFSET_Y};
		};
	};
	class HorizonBankRot
	{
		type			= polygon;
		width			= 4.0;

		#define CIRCLE_POLYGON(STEP_INIT,STEP_SIZE) 					\
		{																\
			{HorizonBankRot,1,{0,0}, 1},								\
			{HorizonBankRot,	{__EVAL((0.015) * sin(0+STEP_SIZE*(STEP_INIT+0))),	__EVAL(-(0.015) * cos(0+STEP_SIZE*(STEP_INIT+0)) / XtoYscale)},	1}, \
			{HorizonBankRot,	{__EVAL((0.015) * sin(0+STEP_SIZE*(STEP_INIT+1))),	__EVAL(-(0.015) * cos(0+STEP_SIZE*(STEP_INIT+1)) / XtoYscale)},	1}, \
			{HorizonBankRot,	{__EVAL((0.015) * sin(0+STEP_SIZE*(STEP_INIT+2))),	__EVAL(-(0.015) * cos(0+STEP_SIZE*(STEP_INIT+2)) / XtoYscale)},	1}, \
		}
		#define POLYGON_BOX_BONE(bone,sizeX,sizeY,posX,posY)\
		{bone,{__EVAL(posX			), __EVAL(posY)}, 1},\
		{bone,{__EVAL(posX + sizeX 	), __EVAL(posY)}, 1},\
		{bone,{__EVAL(posX + sizeX 	), __EVAL(posY + sizeY)}, 1},\
		{bone,{__EVAL(posX			), __EVAL(posY + sizeY)}, 1}

		points[]		=
		{
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
			// FCR Centerline Bearing
			{
				POLYGON_BOX_BONE(FCR_Bearing,0.011,0.011,-0.011-0.008,0.0)
			},
			{
				POLYGON_BOX_BONE(FCR_Bearing,0.011,0.011,-0.011+0.008,0.0)
			},
			{
				{FCR_Bearing,{__EVAL(0.011-0.011+0.008), __EVAL(0.0		)}, 1},
				{FCR_Bearing,{__EVAL(0.017-0.011+0.008), __EVAL(0.011/2	)}, 1},
				{FCR_Bearing,{__EVAL(0.011-0.011+0.008), __EVAL(0.011		)}, 1},
			},
			//left
			{
				{FCR_Bearing,{__EVAL(0.011-0.022-0.008), __EVAL(0.0		)}, 1},
				{FCR_Bearing,{__EVAL(0.005-0.022-0.008), __EVAL(0.011/2	)}, 1},
				{FCR_Bearing,{__EVAL(0.011-0.022-0.008), __EVAL(0.011		)}, 1},
			},
			// Turn rate
			{
				POLYGON_BOX_BONE(TurnRate,0.03,0.03,-0.013,0.0)
			},
			{
				{{0.40, 0.865}, 1},
				{{0.42, 0.845}, 1},
				{{0.44, 0.865}, 1},
			},
			{
				{{0.48, 0.865}, 1},
				{{0.50, 0.845}, 1},
				{{0.52, 0.865}, 1},
			},
			{
				{{0.56, 0.865}, 1},
				{{0.58, 0.845}, 1},
				{{0.60, 0.865}, 1},
			},
			// Bank arrow
			{
				{HorizonBankRot_Up, {XY_Scaled( 0.00, 0.35-0.64)}, 1},
				{HorizonBankRot_Up, {XY_Scaled( 0.01, 0.37-0.64)}, 1},
				{HorizonBankRot_Up, {XY_Scaled(-0.01, 0.37-0.64)}, 1}
			},
			// Util arrow
			{
				{ {__EVAL(0.85+0.02), __EVAL(0.6*0.488	-0.286)}, 1},
				{ {__EVAL(0.87+0.02), __EVAL(0.6*0.50	-0.286)}, 1},
				{ {__EVAL(0.85+0.02), __EVAL(0.6*0.512	-0.286)}, 1},
			},
			// Perf arrow
			{
				{ {__EVAL(0.85-0.26), __EVAL(0.6*0.488	-0.286)}, 1},
				{ {__EVAL(0.87-0.26), __EVAL(0.6*0.50	-0.286)}, 1},
				{ {__EVAL(0.85-0.26), __EVAL(0.6*0.512	-0.286)}, 1},
			},
			// Fuel arrow
			{
				{ {__EVAL(0.85-0.39), __EVAL(0.6*0.488	-0.286)}, 1},
				{ {__EVAL(0.87-0.39), __EVAL(0.6*0.50	-0.286)}, 1},
				{ {__EVAL(0.85-0.39), __EVAL(0.6*0.512	-0.286)}, 1},
			},
			// Eng arrow
			{
				{ {__EVAL(0.85-0.66), __EVAL(0.6*0.488	-0.286)}, 1},
				{ {__EVAL(0.87-0.66), __EVAL(0.6*0.50	-0.286)}, 1},
				{ {__EVAL(0.85-0.66), __EVAL(0.6*0.512	-0.286)}, 1},
			},
			// Side vspeed arrow
			{
				{VerticalSpeedBone, {__EVAL(0.85 + 0.07), __EVAL(0.488 	+ 0.02)}, 1},
				{VerticalSpeedBone, {__EVAL(0.87 + 0.07), __EVAL(0.50 	+ 0.02)}, 1},
				{VerticalSpeedBone, {__EVAL(0.85 + 0.07), __EVAL(0.512 	+ 0.02)}, 1},
			}
		};
	};
	class CollectiveGroup
	{
		condition		= simulRTD;

		class CollectiveText
		{
			type			= text;
			source			= static;
			text			= "%";

			align			= right;
			scale			= 1;
			TEXT_SIZEPOS(0.11,0.13,0.04,0.04)
		};

		class CollectiveNumber
		{
			type			= text;
			source			= rtdRotorTorque;
			sourceScale		= 200;

			align			= left;
			scale			= 1;
			TEXT_SIZEPOS(0.11,0.13,0.04,0.04)
		};
	};
	class Speed_Normal
	{
		condition = "speed<=108";
		class SpeedNumber
		{
			type			= text;
			source			= speed;
			sourceScale		= SPEED_FACTOR;

			align			= right;
			scale			= 1;
			TEXT_SIZEPOS(0.07,0.48,0.04,0.04)
		};
	};
	// Velocity not to exceed = 210kts
	class Speed_VNE: Speed_Normal
	{
		condition = "speed>=108";
		color[] = {1,0,0};
		class SpeedNumber: SpeedNumber {};
	};
	class AltNumber
	{
		type			= text;
		source			= altitudeAGL;
		sourceScale		= HEIGHT_FACTOR;
		sourceOffset	= __EVAL(-2.1*HEIGHT_FACTOR);

		align			= left;
		scale			= 1;
		TEXT_SIZEPOS(0.91,0.505,0.03,0.03)
	};
	class AslNumber
	{
		type			= text;
		source			= altitudeASL;
		sourceScale		= HEIGHT_FACTOR;
		sourceOffset	= __EVAL(-2*HEIGHT_FACTOR);

		align			= left;
		scale			= 1;
		TEXT_SIZEPOS(0.92,0.115,0.04,0.04)
	};
	#define OFFSET_X -0.03
	#define OFFSET_Y 0.05
	class WP
	{
		condition		= "wpvalid";
		class WPdist
		{
			type			= text;
			source			= wpdist;
			sourceScale		= 0.001;
			sourcePrecision = 1;

			align			= left;
			scale			= 1;
			TEXT_SIZEPOS(0.26+OFFSET_X,0.735+OFFSET_Y,0.035,0.035)
		};
		class WPIndex
		{
			type			= text;
			source			= wpIndex;
			sourceScale		= 1;
			sourceLength	= 2;

			align			= right;
			scale			= 1;
			TEXT_SIZEPOS(0.09+OFFSET_X,0.735+OFFSET_Y,0.035,0.035)
		};
		class WPGroundSpeed
		{
			type			= text;
			source			= speed;
			sourceScale		= SPEED_FACTOR;

			align			= right;
			scale			= 1;
			TEXT_SIZEPOS(0.055+OFFSET_X,0.735+0.055+OFFSET_Y,0.035,0.035)
		};
		HUD_TEXT_STATIC(OFFSET_X + 0.055,			OFFSET_Y + 0.735		,0.035,	0.035,right,"W",WPstatic)
		HUD_TEXT_STATIC(OFFSET_X + 0.055 +0.035,	OFFSET_Y + 0.735+0.055	,0.035,	0.035,right,"",WPAuto)
		HUD_TEXT_STATIC(OFFSET_X + 0.055 +0.21,		OFFSET_Y + 0.735		,0.035,	0.035,right,"KM",WPKM)
		class WPTime_NoEst
		{
			condition = "(speed<=5)+(wpdist<=1)";
			HUD_TEXT_STATIC(OFFSET_X + 0.055 +0.15,		OFFSET_Y + 0.735+0.055	,0.035,	0.035,right,"-:--",WPTime)
		};
		class WPTime_Est
		{
			condition = "(speed>=5)*(wpdist>=1)";
			HUD_TEXT_SOURCE_INDEX(OFFSET_X + 0.055 +0.15,		OFFSET_Y + 0.735+0.055	,0.035,	0.035,right,userText,1,WPTime)
		};
		class Static
		{
			type			= line;
			width			= 4.0;
			points[]		=
			{
				{WPPoint, 1 ,LimitWaypoint, 1, {-0.01, 0.04}, 1},
				{WPPoint, 1 ,LimitWaypoint, 1, { 0.00, 0.02}, 1},
				{WPPoint, 1 ,LimitWaypoint, 1, { 0.01, 0.04}, 1},{},
				{{__EVAL(1.09	*0.36 	- 0.375), 		__EVAL(1.4*0.86		- 0.43)}, 1},
				{{__EVAL(1.09	*0.355 	- 0.375), 		__EVAL(1.4*0.865	- 0.43)}, 1},
				{{__EVAL(1.09	*0.35 	- 0.375), 		__EVAL(1.4*0.87		- 0.43)}, 1},
				{{__EVAL(1.09	*0.35 	- 0.375), 		__EVAL(1.4*0.93		- 0.43)}, 1},
				{{__EVAL(1.09	*0.355 	- 0.375), 		__EVAL(1.4*0.935	- 0.43)}, 1},
				{{__EVAL(1.09	*0.36 	- 0.375), 		__EVAL(1.4*0.94		- 0.43)}, 1},
				{{__EVAL(1.09	*0.62 	- 0.375), 		__EVAL(1.4*0.94		- 0.43)}, 1},
				{{__EVAL(1.09	*0.625 	- 0.375), 		__EVAL(1.4*0.935	- 0.43)}, 1},
				{{__EVAL(1.09	*0.63 	- 0.375), 		__EVAL(1.4*0.93		- 0.43)}, 1},
				{{__EVAL(1.09	*0.63 	- 0.375), 		__EVAL(1.4*0.87		- 0.43)}, 1},
				{{__EVAL(1.09	*0.625 	- 0.375), 		__EVAL(1.4*0.865	- 0.43)}, 1},
				{{__EVAL(1.09	*0.62 	- 0.375), 		__EVAL(1.4*0.86		- 0.43)}, 1},
				{{__EVAL(1.09	*0.36 	- 0.375), 		__EVAL(1.4*0.86		- 0.43)}, 1},{},
			};
		};
	};
	class Cyan
	{
		color[] = {0.01,0.36,0.83};
		alpha = 0.5;
		class HorizontalLine
		{
			clipTL[]		= {0.2, 0.25};
			clipBR[]		= {0.8, 0.75};
			DEF_HORIZONT_SPACING_SMALL(P05);
			DEF_HORIZONT_SPACING_SMALL(P15);
			DEF_HORIZONT_SPACING_SMALL(P25);
			DEF_HORIZONT_SPACING_SMALL(P35);
			DEF_HORIZONT_SPACING_SMALL(P45);
			DEF_HORIZONT_SPACING_Plus(10);
			DEF_HORIZONT_SPACING_Plus(20);
			DEF_HORIZONT_SPACING_Plus(30);
			DEF_HORIZONT_SPACING_Plus(40);
			DEF_HORIZONT_SPACING_Plus(50);
			DEF_HORIZONT_SPACING_Plus(60);
			DEF_HORIZONT_SPACING_Plus(70);
			DEF_HORIZONT_SPACING_Plus(80);
		};
	};
	class Brown
	{
		color[] = {0.94,0.18,0};
		alpha = 0.5;
		class HorizontalLine
		{
			clipTL[]		= {0.2, 0.25};
			clipBR[]		= {0.8, 0.75};

			class Level0
			{
				type			= line;
				source			= Level0;
				width			= 3;

				#define lineSegmentWidth 0.09/2
				points[]		=
				{
					{Level0, { __EVAL(-12 * lineSegmentWidth), 0}, 1},
					{Level0, { __EVAL(-1.5 * lineSegmentWidth), 0}, 1},

					{},

					{Level0, { __EVAL(1.5 * lineSegmentWidth), 0}, 1},
					{Level0, { __EVAL(12 * lineSegmentWidth), 0}, 1}
				};
			};
			DEF_HORIZONT_SPACING_SMALL(M05);
			DEF_HORIZONT_SPACING_SMALL(M15);
			DEF_HORIZONT_SPACING_SMALL(M25);
			DEF_HORIZONT_SPACING_SMALL(M35);
			DEF_HORIZONT_SPACING_SMALL(M45);
			DEF_HORIZONT_SPACING_Minus(10);
			DEF_HORIZONT_SPACING_Minus(20);
			DEF_HORIZONT_SPACING_Minus(30);
			DEF_HORIZONT_SPACING_Minus(40);
			DEF_HORIZONT_SPACING_Minus(50);
			DEF_HORIZONT_SPACING_Minus(60);
			DEF_HORIZONT_SPACING_Minus(70);
			DEF_HORIZONT_SPACING_Minus(80);
		};
	};
	class Red
	{
		color[] = {1,0,0};
		alpha = 0.3;
		class LO_Alt
		{
			condition = "altitudeAGL <= 10";
			HUD_TEXT_STATIC(0.91,0.57,0.04,0.04,left,"LO",Lo_ALT)
		};
	};
	HUD_TEXT_STATIC(0.21,	0.03	,0.03,0.03,left,"ENG",Engine)
	HUD_TEXT_STATIC(0.48,	0.03	,0.03,0.03,left,"FUEL",Fuel)
	HUD_TEXT_STATIC(0.61,	0.03	,0.03,0.03,left,"PERF",Performance)
	HUD_TEXT_STATIC(0.89,	0.03	,0.03,0.03,left,"UTIL",Utilities)

	HUD_TEXT_STATIC(0.21,	0.94	,0.03,0.03,left,"FLT",Flight)
	HUD_TEXT_STATIC(0.89,	0.94	,0.03,0.03,left,"SET",Set)
	HUD_TEXT_STATIC(0.08,	0.69	,0.03,0.03,left,"-W-",Waterline)
};
