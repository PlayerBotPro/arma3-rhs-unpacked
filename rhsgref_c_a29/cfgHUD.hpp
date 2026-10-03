#define PI 3.14159265359
#define ANGLEOFINDICENCE 0.0523599

#define PosX0Center 0.5 // 502
#define PosY0Center 0.45 // 49
#define PosYCenterHorizont 0.45
#define PosY0CenterAdjust 0.23

#define SizeX10deg (0.134*5.1)
#define SizeY10deg (0.144*5.1)
#define SizeX10degHorizon 0.384*2.8
#define SizeY10degHorizon 0.390*2.8

topLeft			= "HUD_1_top_left";
topRight		= "HUD_1_top_right";
bottomLeft		= "HUD_1_bottom_left";
borderLeft		= 0;
borderRight		= 0;
borderTop		= 0;
borderBottom	= 0.0;
color[]			= {0.15, 1, 0.15, 1};
enableParallax	= 1;
font			= "rhsusf_digital_font_usa";
turret[]		= {-2};

#define DEF_HORIZONT_SPACING_Plus(XX) 													\
	class LevelP##XX: Level0 															\
	{ 																					\
		type			= line; 														\
		width			= 3;															\
		points[]		= 																\
		{ 																				\
			{LevelP##XX,{__EVAL(-0.18+0.014),0.04},1}, 									\
			{LevelP##XX,{__EVAL(-0.18+0.014),0},1}, 									\
			{LevelP##XX,{__EVAL(-0.18+0.014*10),0},1}, 									\
			{}, 																		\
			{LevelP##XX,{__EVAL(+0.18-0.014*9),0},1}, 									\
			{LevelP##XX,{__EVAL(+0.18+0.014),0},1}, 									\
			{LevelP##XX,{__EVAL(+0.18+0.014),0.04},1} 									\
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
		right[]			= {LevelP##XX,{__EVAL(-0.13 + 0.02),__EVAL(-0.082+0.065)},1}; 	\
		down[]			= {LevelP##XX,{__EVAL(-0.21 + 0.02),__EVAL(-0.022+0.065)},1}; 	\
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
		right[]			= {LevelP##XX,{__EVAL( 0.29 + 0.00),__EVAL(-0.082+0.065)},1}; 	\
		down[]			= {LevelP##XX,{__EVAL( 0.21 + 0.00),__EVAL(-0.022+0.065)},1}; 	\
	}



#define DEF_HORIZONT_SPACING_Minus(XX) 													\
	class LevelM##XX: Level0 															\
	{ 																					\
		type			= line; 														\
		width			= 3;															\
		points[]		= 																\
		{ 																				\
			{LevelM##XX,{__EVAL(-0.18+0.014*1),-0.04},1}, 								\
			{LevelM##XX,{__EVAL(-0.18+0.014*1),0},1},									\
			{LevelM##XX,{__EVAL(-0.18+0.014*3),0},1}, 	{},								\
			{LevelM##XX,{__EVAL(-0.18+0.014*4),0},1},									\
			{LevelM##XX,{__EVAL(-0.18+0.014*6),0},1}, 	{},								\
			{LevelM##XX,{__EVAL(-0.18+0.014*7),0},1},									\
			{LevelM##XX,{__EVAL(-0.18+0.014*9),0},1}, 	{},								\
			{},																			\
			{LevelM##XX,{__EVAL( 0.18-0.014*1),-0.04},1}, 								\
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
		pos[]			= {LevelM##XX,{__EVAL(-0.21 + 0.03),__EVAL(-0.082+0.03)},1}; 	\
		right[]			= {LevelM##XX,{__EVAL(-0.13 + 0.03),__EVAL(-0.082+0.03)},1}; 	\
		down[]			= {LevelM##XX,{__EVAL(-0.21 + 0.03),__EVAL(-0.022+0.03)},1}; 	\
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
		pos[]			= {LevelM##XX,{__EVAL( 0.21 - 0.03),__EVAL(-0.082+0.03)},1}; 	\
		right[]			= {LevelM##XX,{__EVAL( 0.29 - 0.03),__EVAL(-0.082+0.03)},1}; 	\
		down[]			= {LevelM##XX,{__EVAL( 0.21 - 0.03),__EVAL(-0.022+0.03)},1}; 	\
	};

class Bones
{
	class PlaneW
	{
		type			= fixed;
		pos[]			= {PosX0Center,	PosY0Center};
		pos10[]			= {__EVAL(PosX0Center + SizeX10deg),	__EVAL(PosY0Center + SizeY10deg)};
	};
	class PlaneOrientation
	{
		type			= vector;
		source			= forward;
		pos[]			= {PosX0Center, PosYCenterHorizont};
		pos0[]			= {PosX0Center,	PosY0Center};
		pos10[]			= {__EVAL(PosX0Center + SizeX10deg),	__EVAL(PosY0Center + SizeY10deg)};
	};
	class Velocity
	{
		type			= vector;
		source			= velocity;
		pos0[]			= {PosX0Center, PosY0Center};
		pos10[]			= {__EVAL(PosX0Center + SizeX10deg), __EVAL(PosY0Center + SizeY10deg)};
	};
	class WeaponAim
	{
		type			= vector;
		source			= weapon;
		pos0[]			= {PosX0Center,	PosY0Center};
		pos10[]			= {__EVAL(PosX0Center + SizeX10deg),	__EVAL(PosY0Center + SizeY10deg)};
	};
	class ImpactPoint
	{
		type			= vector;
		source			= ImpactPointWeaponRelative;
		pos0[]			= {0.5, __EVAL(PosY0Center)};
		pos10[]			= {__EVAL(0.5 + SizeX10deg), __EVAL(PosY0Center + SizeY10deg)};
	};
	class NormalizeBombCircle
	{
		type			= normalizedorsmaller;
		limit			= 0.08;
		aspectRatio		= __EVAL(1 / XtoYscale);
	};
	class ImpactPointRelative
	{
		type			= vector;
		source			= impactpointweaponRelative;
		pos0[]			= {0.5, __EVAL(PosY0Center)};
		pos10[]			= {__EVAL(0.5 + SizeX10deg), __EVAL(PosY0Center + SizeY10deg)};
	};
	class Target
	{
		source	= target;
		type	= vector;
		pos0[]	= {__EVAL(PosX0Center),__EVAL(PosY0Center)};
		pos10[]	= {__EVAL(PosX0Center+SizeX10deg),__EVAL(PosY0Center+SizeY10deg)};
	};
	class TargetingPodDir
	{
		source	= pilotcamera;
		type	= vector;
		pos0[]	= {__EVAL(PosX0Center),__EVAL(PosY0Center)};
		pos10[]	= {__EVAL(PosX0Center+SizeX10deg),__EVAL(PosY0Center+SizeY10deg)};
	};
	class TargetingPodTarget
	{
		source	= pilotcameratarget;
		type	= vector;
		pos0[]	= {__EVAL(PosX0Center),__EVAL(PosY0Center)};
		pos10[]	= {__EVAL(PosX0Center+SizeX10deg),__EVAL(PosY0Center+SizeY10deg)};
	};
	class Limit0109
	{
		type			= limit;
		limits[]		= {0.1,0.1,0.9,0.9};
	};
	class LimitWaypoint
	{
		type			= limit;
		limits[]		= {0.33,0.1,0.67,0.1};
	};
	class WPPoint
	{
		type			= vector;
		source			= WPPoint;
		pos0[]			= {PosX0Center, __EVAL(PosY0Center)};
		pos10[]			= {__EVAL(0.5 + SizeX10deg), __EVAL(PosY0Center + SizeY10deg)};
	};
	class ASL_Instrument
	{
		type			= rotational;
		source			= altitudeASL;
		center[]		= {0.90, __EVAL(0.5 / XtoYscale)};
		min				= 0;
		max				= 20000;
		minAngle		= 0;
		maxAngle		= 72000;
		aspectRatio		= __EVAL(1 / XtoYscale);
	};
	class Speed_Instrument: ASL_Instrument
	{
		source			= speed;
		center[]		= {0.10, __EVAL(0.5 / XtoYscale)};
		max				= __EVAL(2000 / 3.6);
		maxAngle		= 7200;
	};
	/* ~~~~ AIRPORT OUTLINES ~~~~ */
	class Airport1
	{
		type			= vector;
		source			= airportCorner1;
		pos0[]			= {0.5, __EVAL(PosY0Center)};
		pos10[]			= {__EVAL(0.5 + SizeX10deg), __EVAL(PosY0Center + SizeY10deg)};
	};
	class Airport2: Airport1{source	= airportCorner2;};
	class Airport3: Airport1{source	= airportCorner3;};
	class Airport4: Airport1{source	= airportCorner4;};
	class ILS_H
	{
		type	= ils;
		pos0[]	= {0.5,__EVAL(PosY0Center)};
		pos3[]	= {__EVAL(0.5+(SizeX10deg)*3/10),__EVAL(PosY0Center)};
	};
	class ILS_W: ILS_H
	{
		pos3[]={0.5,__EVAL((PosY0Center)+(SizeY10deg)*3/10)};
	};
	class HorizonBankRot
	{
		type		= rotational;
		source		= horizonBank;
		center[]	= {0.5,0.5};
		min			= -rad(45);
		max			= rad(45);
		minAngle	= 180.25-35.5;
		maxAngle	= 180.75+35.5;
		aspectRatio	= 0.8;
	};
	class HorizonBankRotFull: HorizonBankRot
	{
		center[]		= {0, 0};
		min				= __EVAL(-3.1416);
		max				= __EVAL(3.1416);
		minAngle		= __EVAL(-180);
		maxAngle		= __EVAL(180);
		aspectRatio		= 1;
	};
	class Level0
	{
		pos0[]	= {PosX0Center, PosYCenterHorizont};
		pos10[]	= {__EVAL(PosX0Center + SizeX10degHorizon), __EVAL(PosYCenterHorizont + SizeY10degHorizon)};
		type	= horizon;
		angle	= 0;
	};
	class LevelP5 : Level0 { angle 	= 1.0*5;};
	class LevelM5 : Level0 {angle 	= 1.0*-5;};
	class LevelP10 : Level0 {angle 	= 1.0*10;};
	class LevelM10 : Level0 {angle 	= 1.0*-10;};
	class LevelP15 : Level0 {angle 	= 1.0*15;};
	class LevelM15 : Level0 {angle 	= 1.0*-15;};
	class LevelP20 : Level0 {angle 	= 1.0*20;};
	class LevelM20 : Level0 {angle 	= 1.0*-20;};
	class LevelP25 : Level0 {angle 	= 1.0*25;};
	class LevelM25 : Level0 {angle 	= 1.0*-25;};
	class LevelP30 : Level0 {angle 	= 1.0*30;};
	class LevelM30 : Level0 {angle 	= 1.0*-30;};
	class LevelP35 : Level0 {angle 	= 1.0*35;};
	class LevelM35 : Level0 {angle 	= 1.0*-35;};
	class LevelP40 : Level0 {angle 	= 1.0*40;};
	class LevelM40 : Level0 {angle 	= 1.0*-40;};
	class LevelP45 : Level0 {angle 	= 1.0*45;};
	class LevelM45 : Level0 {angle 	= 1.0*-45;};
	class LevelP50 : Level0 {angle 	= 1.0*50;};
	class LevelM50 : Level0 {angle 	= 1.0*-50;};
	class LevelP60 : Level0 {angle 	= 1.0*60;};
	class LevelM60 : Level0 {angle 	= 1.0*-60;};
	class LevelP70 : Level0 {angle 	= 1.0*70;};
	class LevelM70 : Level0 {angle 	= 1.0*-70;};
	class LevelP80 : Level0 {angle 	= 1.0*80;};
	class LevelM80 : Level0 {angle 	= 1.0*-80;};
	class LevelP90 : Level0 {angle 	= 1.0*90;};
	class LevelM90 : Level0 {angle 	= 1.0*-90;};
	class MissileFlightTimeRot1
	{
		type			= rotational;
		source			= MissileFlightTime;
		sourceScale		= 1.0;
		center[]		= {0, 0};
		min				= 0;
		max				= __EVAL(10 *0.05);
		minAngle		= 0;
		maxAngle		= __EVAL(360 * 0.05);
		aspectRatio		= __EVAL(1 / XtoYscale);
	};
	#define MISSILEFLIGHTTIME_ROT_MACRO(XX) 				\
	class MissileFlightTimeRot##XX##: MissileFlightTimeRot1	\
	{														\
		maxAngle		= __EVAL(36 * (##XX##/2) );			\
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
	MISSILEFLIGHTTIME_ROT_MACRO(18)
	MISSILEFLIGHTTIME_ROT_MACRO(19)
	MISSILEFLIGHTTIME_ROT_MACRO(20)
	class LarAmmoMax
	{
		type		= linear;
		source		= LarAmmoMax;
		sourceScale	= 1.0;
		min			= 0;
		max			= 1;
		minPos[]	= {0.0, 1.0};
		maxPos[]	= {0.0, 0.0};
	};
	class LarAmmoMin: LarAmmoMax
	{
		source		= LarAmmoMin;
	};
	class LarTargetDist: LarAmmoMax
	{
		source		= LarTargetDist;
	};
	class LarAmmoMGunMax
	{
		type		= rotational;
		source		= LarAmmoMax;
		sourceScale	= 1.0;
		center[]	= {0, 0};
		min				= 0;
		max				= 1;
		minAngle		= __EVAL(-180);
		maxAngle		= __EVAL(180);
		aspectRatio		= __EVAL(1 / XtoYscale);
	};
	class LarAmmoMGunMin: LarAmmoMGunMax
	{
		source		= LarAmmoMin;
	};
};
class Draw
{
	color[] = {0.15, 1, 0.15};
	alpha = 1;
	condition = "on";
	//MINIPLANE
	class PlaneW
	{
		type = line;
		width = 3.0;
		points[] =
		{
			//boresight indicator
			{PlaneW,{		-0.02,	0},1},
			{PlaneW,{		 0.02,	0},1},{},
			{PlaneW,{		-0,		__EVAL(-0.02/XtoYscale)},1},
			{PlaneW,{		 0,  	__EVAL( 0.02/XtoYscale)},1},{},
			// Box left
			POINT2(0.00 + 0.15, 0.5 + 0.024),
			POINT2(0.10 + 0.15, 0.5 + 0.024),
			POINT2(0.10 + 0.15, 0.5 - 0.024),
			POINT2(0.00 + 0.15, 0.5 - 0.024),
			POINT2(0.00 + 0.15, 0.5 + 0.024),{},
			{{0.26,	0.538},1},
			{{0.3,	0.538},1},{},

			{{0.7,	0.538},1},
			{{0.74,	0.538},1},{},

			// Box right
			POINT2(0.00 + 0.75, 0.5 + 0.024),
			POINT2(0.14 + 0.75, 0.5 + 0.024),
			POINT2(0.14 + 0.75, 0.5 - 0.024),
			POINT2(0.00 + 0.75, 0.5 - 0.024),
			POINT2(0.00 + 0.75, 0.5 + 0.024),{},
			// Box radar
			POINT2(0.00 + 0.72, 0.65 + 0.024),
			POINT2(0.125 + 0.72, 0.65 + 0.024),
			POINT2(0.125 + 0.72, 0.65 - 0.024),
			POINT2(0.00 + 0.72, 0.65 - 0.024),
			POINT2(0.00 + 0.72, 0.65 + 0.024),{},
			// bank lines
			CIRCLE_MARK_CENTER(PosX0Center, 0.2, 0.64, 0.66, 180 - 90 * 4 / 24),
			POINT_MARK_CENTER(PosX0Center, 	0.2, 0.64, 180 - 90 * 4 / 24),
			CIRCLE_MARK_CENTER(PosX0Center, 0.2, 0.64, 0.66, 180 - 90 * 3 / 24),{},
			POINT_MARK_CENTER(PosX0Center, 	0.2, 0.64, 180 - 90 * 3 / 24),
			CIRCLE_MARK_CENTER(PosX0Center, 0.2, 0.64, 0.66, 180 - 90 * 2 / 24),{},
			POINT_MARK_CENTER(PosX0Center, 	0.2, 0.64, 180 - 90 * 2 / 24),
			CIRCLE_MARK_CENTER(PosX0Center, 0.2, 0.64, 0.66, 180 - 90 * 1 / 24),{},
			POINT_MARK_CENTER(PosX0Center, 	0.2, 0.64, 180 - 90 * 1 / 24),
			CIRCLE_MARK_CENTER(PosX0Center, 0.2, 0.64, 0.66, 180),{},
			POINT_MARK_CENTER(PosX0Center, 	0.2, 0.64, 180),
			CIRCLE_MARK_CENTER(PosX0Center, 0.2, 0.64, 0.66, 180 + 90 * 1 / 24),{},
			POINT_MARK_CENTER(PosX0Center, 	0.2, 0.64, 180 + 90 * 1 / 24),
			CIRCLE_MARK_CENTER(PosX0Center, 0.2, 0.64, 0.66, 180 + 90 * 2 / 24),{},
			POINT_MARK_CENTER(PosX0Center, 	0.2, 0.64, 180 + 90 * 2 / 24),
			CIRCLE_MARK_CENTER(PosX0Center, 0.2, 0.64, 0.66, 180 + 90 * 3 / 24),{},
			POINT_MARK_CENTER(PosX0Center, 	0.2, 0.64, 180 + 90 * 3 / 24),
			CIRCLE_MARK_CENTER(PosX0Center, 0.2, 0.64, 0.66, 180 + 90 * 4 / 24),{},
			{HorizonBankRot, {XY_Scaled( 0.00, 0.35+0.13)}, 1},
			{HorizonBankRot, {XY_Scaled( 0.01, 0.37+0.13)}, 1},
			{HorizonBankRot, {XY_Scaled(-0.01, 0.37+0.13)}, 1},
			{HorizonBankRot, {XY_Scaled( 0.00, 0.35+0.13)}, 1},{},
			// FPM
			{Velocity, {0, -0.02}, 1},
			{Velocity, {0.01, -0.01732}, 1},
			{Velocity, {0.01732, -0.01}, 1},
			{Velocity, {0.02, 0}, 1},
			{Velocity, {0.01732, 0.01}, 1},
			{Velocity, {0.01, 0.01732}, 1},
			{Velocity, {0, 0.02}, 1},
			{Velocity, {-0.01, 0.01732}, 1},
			{Velocity, {-0.01732, 0.01}, 1},
			{Velocity, {-0.02, 0}, 1},
			{Velocity, {-0.01732, -0.01}, 1},
			{Velocity, {-0.01, -0.01732}, 1},
			{Velocity, {0, -0.02}, 1}, {},
			{Velocity, {0.04, 0}, 1},
			{Velocity, {0.02, 0}, 1}, {},
			{Velocity, {-0.04, 0}, 1},
			{Velocity, {-0.02, 0}, 1}, {},
			{Velocity, {0, -0.04}, 1},
			{Velocity, {0, -0.02}, 1}
		};
	};
	class Horizont
	{
		clipTL[] = {0.1, 0.15};
		clipBR[] = {0.85, 0.99};

		class Dimmed
		{
			class Level0
			{
				type			= line;
				width			= 3.0;
				points[]		=
				{
					{Level0, {0.32, 0.0}, 1},
					{Level0, {0.065, 0.0}, 1},
					{},
					{Level0, {-0.065, 0.0}, 1},
					{Level0, {-0.32, 0.0}, 1}
				};
			};
		};
		class Level0
		{
			type			= line;
			width			= 2.0;
			points[]		= {};
		};
		DEF_HORIZONT_SPACING_Minus(5);
		DEF_HORIZONT_SPACING_Plus(5);
		DEF_HORIZONT_SPACING_Minus(10);
		DEF_HORIZONT_SPACING_Plus(10);
		DEF_HORIZONT_SPACING_Minus(15);
		DEF_HORIZONT_SPACING_Plus(15);
		DEF_HORIZONT_SPACING_Minus(20);
		DEF_HORIZONT_SPACING_Plus(20);
		DEF_HORIZONT_SPACING_Minus(25);
		DEF_HORIZONT_SPACING_Plus(25);
		DEF_HORIZONT_SPACING_Minus(30);
		DEF_HORIZONT_SPACING_Plus(30);
		DEF_HORIZONT_SPACING_Minus(35);
		DEF_HORIZONT_SPACING_Plus(35);
		DEF_HORIZONT_SPACING_Minus(40);
		DEF_HORIZONT_SPACING_Plus(40);
		DEF_HORIZONT_SPACING_Minus(45);
		DEF_HORIZONT_SPACING_Plus(45);
		DEF_HORIZONT_SPACING_Minus(50);
		DEF_HORIZONT_SPACING_Plus(50);
		DEF_HORIZONT_SPACING_Minus(60);
		DEF_HORIZONT_SPACING_Plus(60);
		DEF_HORIZONT_SPACING_Minus(70);
		DEF_HORIZONT_SPACING_Plus(70);
		DEF_HORIZONT_SPACING_Minus(80);
		DEF_HORIZONT_SPACING_Plus(80);
		DEF_HORIZONT_SPACING_Minus(90);
		DEF_HORIZONT_SPACING_Plus(90);
	};


	class SpeedNumber
	{
		type			= text;
		source			= speed;
		sourceScale		= SPEED_FACTOR;

		align			= center;
		scale			= 1;
		pos[]			= {{XY_Scaled(0.2 + 0.00, 0.50 - 0.025)}, 1};
		right[]			= {{XY_Scaled(0.2 + 0.06, 0.50 - 0.025)}, 1};
		down[]			= {{XY_Scaled(0.2 + 0.00, 0.50 + 0.025)}, 1};
	};
	HUD_TEXT_STATIC(0.88,	0.51	,0.06,0.055,left,"0",AltNumber0)
	class AltNumber: SpeedNumber
	{
		source			= altitudeASL;
		sourceScale		= 0.1 * HEIGHT_FACTOR;
		align			= left;

		pos[]			= {{XY_Scaled(0.85 + 0.00, 0.50 - 0.025)}, 1};
		right[]			= {{XY_Scaled(0.85 + 0.06, 0.50 - 0.025)}, 1};
		down[]			= {{XY_Scaled(0.85 + 0.00, 0.50 + 0.025)}, 1};
	};

	//PITCH, ROLL, CLIMB INDICATOR DISPLAYS
	class GmeterNumber
	{
		type			= text;
		source			= gmeter;
		sourceScale		= 0.3;
		sourceOffset	= 1;
		sourcePrecision	= 1;
		refreshRate		= 0.4;
		align			= right;
		scale			= 1;
		TEXT_SIZEPOS(0.12,0.7,0.05,0.05)
	};
	class RadarATLText
	{
		type	= text;
		source	= static;
		align	= left;
		text	= "R";
		scale	= 1;
		TEXT_SIZEPOS(0.71,0.67,0.05,0.05)
	};
	class RadarATLNumber
	{
		type			= text;
		source			= altitudeAGL;
		sourceScale		= HEIGHT_FACTOR/10;
		sourceLength	= 2;
		sourceOffset	= -0.6;
		sourcePrecision	= 0;
		refreshRate		= 0.01;
		align			= left;
		scale			= 1;
		TEXT_SIZEPOS(0.813,0.67,0.05,0.05)
	};
	HUD_TEXT_STATIC(0.8135,0.67,0.05,0.05,right,"0",ATLNumber0)

	// Arrows above and below heading scale
	class HeadingNumber
	{
		type			= text;
		source			= heading;
		sourceScale		= 1;

		align			= center;
		scale			= 1;
		TEXT_SIZEPOS(0.5,0.14,0.07,0.07)
	};
	class HeadingArrows
	{
		type			= line;
		width			= 3.0;
		points[]		=
		{
			POINT2(0.00 + 0.45, 0.165 + 0.024),
			POINT2(0.10 + 0.45, 0.165 + 0.024),
			POINT2(0.10 + 0.45, 0.165 - 0.024),
			POINT2(0.00 + 0.45, 0.165 - 0.024),
			POINT2(0.00 + 0.45, 0.165 + 0.024),{}
		};
	};
	class ThrustNumber
	{
		type			= text;
		source			= throttle;
		sourceScale		= 100;
		sourceLength	= 3;
		sourceOffset	= 0;
		sourcePrecision	= 0;
		refreshRate		= 0.01;
		align			= left;
		scale			= 1;
		TEXT_SIZEPOS(0.15,0.89,0.05,0.05)
	};
	class NavigationMode
	{
		condition = "1-(missile+rocket+mgun+bomb)";
		class ModeText
		{
			type	= text;
			source	= static;
			align	= left;
			text	= "NAV";
			scale	= 1;
			TEXT_SIZEPOS(0.15,0.85,0.05,0.05)
		};
		class WP
		{
			condition		= wpvalid;
			class WPdist
			{
				type			= text;
				source			= wpdist;
				sourceScale		= 0.001;
				sourcePrecision = 1;

				align			= right;
				scale			= 1;
				TEXT_SIZEPOS(0.795,0.820,0.06,0.06)
			};
			class WPIndex
			{
				type			= text;
				source			= wpIndex;
				sourceScale		= 1;
				sourceLength	= 2;

				align			= right;
				scale			= 1;
				TEXT_SIZEPOS(0.725,0.820,0.06,0.06)
			};
			HUD_TEXT_STATIC(0.765,0.820,0.06,0.06,right,">",WPstatic)
			HUD_TEXT_STATIC(0.725,0.865,0.06,0.06,right,":14:36/-00:0",WPTime)
			class WPCurrentTime: WPdist
			{
				source			= time;
				text   			= "%X";
				align			= right;
				TEXT_SIZEPOS(0.725,0.910,0.06,0.06)
			};
			class WP
			{
				width			= 1;
				type			= line;
				points[]		=
				{
					CIRCLE(wppoint,0.01),{},
					{wppoint, 1, {HorizonBankRotFull, 0, -0.01}, 1},
					{wppoint, 1, {HorizonBankRotFull, 0, -0.023}, 1},
				};
			};
		};
	};

	// Group to condition AAMissileCrosshair by AA missile being the selected weapon
	class AAMissileCrosshairGroup
	{
		type			= group;
		condition		= AAmissile;

		class ModeText
		{
			type	= text;
			source	= static;
			align	= left;
			text	= "MSL";
			scale	= 1;
			TEXT_SIZEPOS(0.15,0.85,0.05,0.05)
		};
		// AA missile crosshair
		class AAMissileCrosshair
		{
			type			= line;
			width			= 4.0;
			points[]		=
			{
				CIRCLE_BIG_SPACE(PlaneW,0.28)
			};
		};
		class AmmoCount
		{
			type			= text;
			source			= ammoFormat;
			sourceScale		= 1;

			align			= right;
			scale			= 1;
			TEXT_SIZEPOS(0.74,0.9,0.06,0.06)
		};
		#define LARSize 0.16
		#define LARXPos 0.85
		#define LARYPos 0.18
		// launch acceptability region
		class Lines
		{
			type	= line;
			width	= 4.0;
			points[]  =
			{
				{{__EVAL(LARXPos+0.02),__EVAL(LARYPos)},1},
				{{__EVAL(LARXPos+0.00),__EVAL(LARYPos)},1},
				{{__EVAL(LARXPos+0.00),__EVAL(LARYPos+LARSize)},1},
				{{__EVAL(LARXPos+0.02),__EVAL(LARYPos+LARSize)},1},{},
				{{__EVAL(LARXPos+0.02),__EVAL(LARYPos+LARSize*0.75)},1},{{__EVAL(LARXPos),__EVAL(LARYPos+LARSize*0.75)},1},{},
				{{__EVAL(LARXPos+0.02),__EVAL(LARYPos+LARSize*0.50)},1},{{__EVAL(LARXPos),__EVAL(LARYPos+LARSize*0.50)},1},{},
				{{__EVAL(LARXPos+0.02),__EVAL(LARYPos+LARSize*0.25)},1},{{__EVAL(LARXPos),__EVAL(LARYPos+LARSize*0.25)},1},{},
				{LarTargetDist,__EVAL(-LARSize),{__EVAL(LARXPos-0.02),__EVAL(LARYPos+LARSize+0.02)},1},{LarTargetDist,__EVAL(-LARSize),{__EVAL(LARXPos),__EVAL(LARYPos+LARSize)},1},{LarTargetDist,__EVAL(-LARSize),{__EVAL(LARXPos-0.02),__EVAL(LARYPos+LARSize-0.02)},1},{}
			};
		};
		class Poly
		{
			type   = polygon;
			points[]  =
			{
				{
					{LarAmmoMin,__EVAL(-LARSize),{__EVAL(LARXPos+0.001),__EVAL(LARYPos+LARSize)},1},
					{LarAmmoMax,__EVAL(-LARSize),{__EVAL(LARXPos+0.001),__EVAL(LARYPos+LARSize)},1},
					{LarAmmoMax,__EVAL(-LARSize),{__EVAL(LARXPos+0.018),__EVAL(LARYPos+LARSize)},1},
					{LarAmmoMin,__EVAL(-LARSize),{__EVAL(LARXPos+0.018),__EVAL(LARYPos+LARSize)},1}
				}
			};
		};
		class TopText
		{
			type		= text;
			source		= LarTop;
			sourceScale	= 0.001;

			scale		= 1;
			pos[]		= {{__EVAL(LARXPos+0.03), __EVAL(LARYPos-0.02)}, 1};
			right[]		= {{__EVAL(LARXPos+0.07), __EVAL(LARYPos-0.02)}, 1};
			down[]		= {{__EVAL(LARXPos+0.03), __EVAL(LARYPos+0.02)}, 1};
			align		= right;
		};
		class MiddleText: TopText
		{
			source			= LarTop;
			sourcePrecision	= -1;
			sourceScale		= 0.0005;
			pos[]			= {{__EVAL(LARXPos+0.03), __EVAL(LARYPos-0.02+LARSize*0.5)}, 1};
			right[]			= {{__EVAL(LARXPos+0.07), __EVAL(LARYPos-0.02+LARSize*0.5)}, 1};
			down[]			= {{__EVAL(LARXPos+0.03), __EVAL(LARYPos+0.02+LARSize*0.5)}, 1};
		}
		class SpeedText: TopText
		{
			source		= LarTargetSpeed;
			align		= left;
			sourceScale	= 3.6;
			pos[]		= {LarTargetDist,__EVAL(-LARSize),{__EVAL(LARXPos-0.03), __EVAL(LARYPos+LARSize-0.02)},1};
			right[]		= {LarTargetDist,__EVAL(-LARSize),{__EVAL(LARXPos+0.01), __EVAL(LARYPos+LARSize-0.02)},1};
			down[]		= {LarTargetDist,__EVAL(-LARSize),{__EVAL(LARXPos-0.03), __EVAL(LARYPos+LARSize+0.02)},1};
		};
	};
	// Group to condition BombCrosshair by bomb being the selected weapon
	class BombCrosshairGroup
	{
		type			= group;
		condition		= bomb;

		class BombCrosshair
		{
			width			= 4.0;
			type			= line;
			points[]		=
			{
				// main cross
				//{ImpactPoint,{ 0.0, __EVAL(-0.09/XtoYscale)}, 1},
				//{ImpactPoint,{ 0.0, __EVAL(-0.08/XtoYscale)}, 1},
				//{},
				{ImpactPoint,{ 0.0,  __EVAL(0.09/XtoYscale)}, 1},
				{ImpactPoint,{ 0.0,  __EVAL(0.08/XtoYscale)}, 1},
				{},
				{ImpactPoint,{-0.09,  0.0}, 1},
				{ImpactPoint,{-0.08,  0.0}, 1},
				{},
				{ImpactPoint,{ 0.09,  0.0}, 1},
				{ImpactPoint,{ 0.08,  0.0}, 1},
				{},
				//middle dot
				{ImpactPoint,{ 0.0, __EVAL(-0.002/XtoYscale)}, 1},
				{ImpactPoint,{ 0.0,  __EVAL(0.002/XtoYscale)}, 1},
				{},
				{ImpactPoint,{-0.002, 0.0}, 1},
				{ImpactPoint,{ 0.002, 0.0}, 1},
				{},
				CIRCLE_BIG(ImpactPoint, 0.08),{},
				//CIRCLE_LIMIT(Limit0109, ImpactPoint, 0.02),
				{},
				{ImpactPoint, -1, Velocity, 1, NormalizeBombCircle, 1, ImpactPoint, 1, {0.0, 0.0}, 1},
				{Velocity, 1, Limit0109, 1, {0.0, 0.0}, 1}
			};
		};
		class Circle
		{
			type			= line;
			width			= 6.0;
			points[]		=
			{
				CIRCLE_LOCK_TIME(ImpactPoint, MissileFlightTimeRot, 0.08)
			};
		};
		class Distance
		{
			type			= text;
			source			= ImpactDistance;
			sourceScale		= 0.001;
			sourcePrecision	= 1;
			max				= 15;

			align			= center;
			scale			= 1;
			pos[]			= {ImpactPoint, {-0.002,  0.11}, 1};
			right[]			= {ImpactPoint, { 0.045,  0.11}, 1};
			down[]			= {ImpactPoint, {-0.002,  0.15}, 1};
		};
	};
	class MGun
	{
		condition		= "(mgun+rocket)";
		class ModeText
		{
			type	= text;
			source	= static;
			align	= left;
			text	= "CCIP";
			scale	= 1;
			TEXT_SIZEPOS(0.15,0.85,0.05,0.05)
		};
		class WeaponName
		{
			type			= text;
			source			= weapon;
			sourceScale		= 1;

			align			= left;
			scale			= 1;
			TEXT_SIZEPOS(0.95,0.84,0.06,0.06)
		};
		class AmmoCounter
		{
			type			= text;
			source			= ammo;
			sourceScale		= 1;

			align			= left;
			scale			= 1;
			TEXT_SIZEPOS(0.95,0.9,0.06,0.06)
		};
	};
	class MGunCross
	{
		condition		= "-1+(mgun+rocket)*impactDistance";
		class Cross
		{
			type			= line;
			width			= 3.0;
			points[]		=
			{
				// main cross
				{ImpactPointRelative,{ 0.0, -0.07}, 1},
				{ImpactPointRelative,{ 0.0, -0.03}, 1},
				{},
				{ImpactPointRelative,{ 0.0,  0.045}, 1},
				{ImpactPointRelative,{ 0.0,  0.03}, 1},
				{},
				{ImpactPointRelative,{-0.045,  0.0}, 1},
				{ImpactPointRelative,{-0.03,  0.0}, 1},
				{},
				{ImpactPointRelative,{ 0.045,  0.0}, 1},
				{ImpactPointRelative,{ 0.03,  0.0}, 1},
				{},
				//middle dot
				{ImpactPointRelative,{ 0.0, -0.002}, 1},
				{ImpactPointRelative,{ 0.0,  0.002}, 1},
				{},
				{ImpactPointRelative,{-0.002, 0.0}, 1},
				{ImpactPointRelative,{ 0.002, 0.0}, 1},
				{}
			};
		};
		class Circle
		{
			type			= line;
			width			= 6.0;
			points[]		=
			{
				CIRCLE_LOCK_TIME(ImpactPointRelative, MissileFlightTimeRot, 0.05)
			};
		};
		class Circle_LAR
		{
			type			= line;
			width			= 5.0;
			points[]		=
			{
				CIRCLE_MARK_2B(ImpactPointRelative,LarAmmoMGunMin,0.06,0.05,0),{},
				CIRCLE_MARK_2B(ImpactPointRelative,LarAmmoMGunMax,0.06,0.05,0),{}
			};
		};
		class Distance
		{
			type			= text;
			source			= ImpactDistance;
			sourceScale		= 0.001;
			sourcePrecision	= 1;
			max				= 15;

			align			= center;
			scale			= 1;
			pos[]			= {ImpactPointRelative, {-0.002, -0.10}, 1};
			right[]			= {ImpactPointRelative, { 0.045, -0.10}, 1};
			down[]			= {ImpactPointRelative, {-0.002, -0.06}, 1};
		};
	};
	class TargetInfo
	{
		condition = "targetDist";
		class TargetDist
		{
			type		= text;
			source		= targetDist;
			sourceScale	= 1;
			align		= right;
			scale		= 1;
			TEXT_SIZEPOS(0.83,0.86,0.06,0.06)
		};
		class TargetHeight
		{
			type		= text;
			source		= targetHeight;
			sourceScale	= 1;
			align		= right;
			scale		= 1;
			TEXT_SIZEPOS(0.83,0.82,0.06,0.06)
		};
	};
	class WeaponsLocking
	{
		condition		= "missilelocking";
		blinkingPattern[]	= {0.2, 0.2};
		blinkingStartsOn	= true;
		class Text
		{
			type			= text;
			source			= static;
			text			= "LOCKING";
			align			= center;
			scale			= 1;
			TEXT_SIZEPOS(0.5,0.87,0.07,0.07)
		};
	};
	class WeaponsLocked
	{
		condition		= "missilelocked";
		class Text
		{
			type			= text;
			source			= static;
			text			= "SHOOT";
			align			= center;
			scale			= 1;
			TEXT_SIZEPOS(0.5,0.87,0.07,0.07)
		};
	};
	class IncomingMissile
	{
		condition		= "incomingmissile";
		blinkingPattern[]	= {0.3, 0.3};
		blinkingStartsOn	= true;
		class Text
		{
			type			= text;
			source			= static;
			text			= "INCOMING MISSILE";
			align			= center;
			scale			= 1;
			TEXT_SIZEPOS(0.5,0.32,0.07,0.07)
		};
	};
	#define SCALE 0.3
	class ILS
	{
		condition		= ils;

		// Glideslope
		class Glideslope
		{
			clipTL[]		= {0.0,0.0};
			clipBR[]		= {1.0,1.0};

			class ILS
			{
				type			= line;
				width			= 2.0;
				points[]		=
				{
					POINT(ILS_W, -0.4 * SCALE, 0 * SCALE),
					POINT(ILS_W, +0.4 * SCALE, 0 * SCALE),
					{},

					POINT(ILS_W, -0.4 * SCALE, -0.04 * SCALE),
					POINT(ILS_W, -0.4 * SCALE, +0.04 * SCALE),
					{},
					POINT(ILS_W, -0.2 * SCALE, -0.03 * SCALE),
					POINT(ILS_W, -0.2 * SCALE, +0.03 * SCALE),
					{},
					POINT(ILS_W, 0 * SCALE, -0.04 * SCALE),
					POINT(ILS_W, 0 * SCALE, +0.04 * SCALE),
					{},
					POINT(ILS_W, 0.2 * SCALE, -0.03 * SCALE),
					POINT(ILS_W, 0.2 * SCALE, +0.03 * SCALE),
					{},
					POINT(ILS_W, 0.4 * SCALE, -0.04 * SCALE),
					POINT(ILS_W, 0.4 * SCALE, +0.04 * SCALE),
					{},

					POINT(ILS_H, 0 * SCALE, -0.4 * SCALE),
					POINT(ILS_H, 0 * SCALE, +0.4 * SCALE),
					{},

					POINT(ILS_H, -0.04 * SCALE, -0.4 * SCALE),
					POINT(ILS_H, +0.04 * SCALE, -0.4 * SCALE),
					{},
					POINT(ILS_H, -0.03 * SCALE, -0.2 * SCALE),
					POINT(ILS_H, +0.03 * SCALE, -0.2 * SCALE),
					{},
					POINT(ILS_H, -0.04 * SCALE, 0 * SCALE),
					POINT(ILS_H, +0.04 * SCALE, 0 * SCALE),
					{},
					POINT(ILS_H, -0.03 * SCALE, 0.2 * SCALE),
					POINT(ILS_H, +0.03 * SCALE, 0.2 * SCALE),
					{},
					POINT(ILS_H, -0.04 * SCALE, 0.4 * SCALE),
					POINT(ILS_H, +0.04 * SCALE, 0.4 * SCALE)
				};
			};
			// Airport outlines
			class airport
			{
				type			= line;
				points[]		=
				{
					{airport1,1},{airport2,1},{airport4,1},{airport3,1},{airport1,1}
				};
			};
		};
	};
	//RADRAR TARGET BOXES
	class RadarBoxes
	{
		type	= radar;
		pos0[]	= {__EVAL(PosX0Center),__EVAL(PosY0Center)};
		pos10[]	= {__EVAL(PosX0Center+SizeX10deg),__EVAL(PosY0Center+SizeY10deg)};
		width = 4;
		#define POLYGON_BOX(sizeX,sizeY,posX,posY)\
		{{__EVAL(posX			), __EVAL(posY)}, 1},\
		{{__EVAL(posX + sizeX 	), __EVAL(posY)}, 1},\
		{{__EVAL(posX + sizeX 	), __EVAL(posY + sizeY)}, 1},\
		{{__EVAL(posX			), __EVAL(posY + sizeY)}, 1}
		#define POLYGON_CIRCLE(STEP_INIT,STEP_SIZE) 					\
		{																\
			{	{0,0}, 1},								\
			{	{__EVAL((0.015) * sin(0+STEP_SIZE*(STEP_INIT+0))),	__EVAL(-(0.015) * cos(0+STEP_SIZE*(STEP_INIT+0)) / XtoYscale)},	1}, \
			{	{__EVAL((0.015) * sin(0+STEP_SIZE*(STEP_INIT+1))),	__EVAL(-(0.015) * cos(0+STEP_SIZE*(STEP_INIT+1)) / XtoYscale)},	1}, \
			{	{__EVAL((0.015) * sin(0+STEP_SIZE*(STEP_INIT+2))),	__EVAL(-(0.015) * cos(0+STEP_SIZE*(STEP_INIT+2)) / XtoYscale)},	1}, \
		}
		class points
		{
			class Draw
			{
				type		= line;
				width		= 4;
				lineType	= 2;
				points[]=
				{
					CIRCLE_BIG_NB(0.03),{},
				};
			};
		};
		class pointsUnknown: points
		{
			class Draw: Draw
			{
				type		= polygon;
				points[]=
				{
					{
						POLYGON_BOX(0.02,0.02,0,-0.01)
					}
				};
			};
		};
		class pointsUnknownEnemy: pointsUnknown {class Draw: Draw {};};
		class pointsUnknownFriend: pointsUnknown {class Draw: Draw {};};
		class pointsUnknownCiv: pointsUnknown {class Draw: Draw {};};
		class pointsCar: points
		{
			class Draw: Draw
			{
				type		= polygon;
				points[]=
				{
					POLYGON_CIRCLE(1,10),
					POLYGON_CIRCLE(3,10),
					POLYGON_CIRCLE(5,10),
					POLYGON_CIRCLE(7,10),
					POLYGON_CIRCLE(9,10),
					POLYGON_CIRCLE(11,10),
					POLYGON_CIRCLE(13,10),
					POLYGON_CIRCLE(15,10),
					POLYGON_CIRCLE(17,10),
					POLYGON_CIRCLE(19,10),
					POLYGON_CIRCLE(21,10),
					POLYGON_CIRCLE(23,10),
					POLYGON_CIRCLE(25,10),
					POLYGON_CIRCLE(27,10),
					POLYGON_CIRCLE(29,10),
					POLYGON_CIRCLE(31,10),
					POLYGON_CIRCLE(33,10),
					POLYGON_CIRCLE(35,10),
				};
			};
		};
		class pointsCarEnemy: pointsCar {class Draw: Draw {};};
		class pointsCarFriend: pointsCar {class Draw: Draw {};};
		class pointsCarCiv: pointsCar {class Draw: Draw {};};
		class pointsCarNeutral: pointsCar {class Draw: Draw {};};
		class pointsTank: points {class Draw: Draw {};};
		class pointsTankEnemy: pointsTank {class Draw: Draw {};};
		class pointsTankFriend: pointsTank {class Draw: Draw {};};
		class pointsTankCiv: pointsTank {class Draw: Draw {};};
		class pointsTankNeutral: pointsTank {class Draw: Draw {};};
		class pointsAirplane
		{
			class Draw
			{
				type		= line;
				width		= 4;
				lineType	= 2;
				points[]=
				{
					CIRCLE_BIG_NB(0.03),{},
				};
			};
		};
		class pointsAirplaneEnemy
		{
			class Draw
			{
				type		= line;
				width		= 4;
				points[]=
				{
					POINT2(+0.03,-0.00),
					POINT2(-0.00,+0.03),
					POINT2(-0.03,+0.00),
					POINT2(+0.00,-0.03),
					POINT2(+0.03,-0.00)
				};
			};
		};
		class pointsAirplaneFriend
		{
			class Draw
			{
				type		= line;
				width		= 4;
				points[]=
				{
					CIRCLE_BIG_NB(0.03),{},
					POINT_MARK_NB(0.03, 45),
					POINT_MARK_NB(0.03, 45+180),{},
					POINT_MARK_NB(0.03, 90+45),
					POINT_MARK_NB(0.03, 90+45+180),{}
				};
			};
		};
		class pointsHeli
		{
			class Draw
			{
				type		= line;
				width		= 2;
				points[]=
				{
					{{ 0.00, 0.00}, 1},
					{{ 0.01, 0.015}, 1},
					{{-0.01, 0.015}, 1},{},
					{{ 0.00, 0.00}, 1},
					{{ 0.01,-0.015}, 1},
					{{-0.01,-0.015}, 1}
				};
			};
		};
		class pointsHeliEnemy
		{
			class Draw
			{
				type		= polygon;
				points[]=
				{
					{
						{{ 0.00, 0.00}, 1},
						{{ 0.01, 0.015}, 1},
						{{-0.01, 0.015}, 1}
					},
					{
						{{ 0.00, 0.00}, 1},
						{{ 0.01,-0.015}, 1},
						{{-0.01,-0.015}, 1}
					}
				};
			};
		};
		class pointsHeliFriend
		{
			class Draw
			{
				type		= polygon;
				points[]=
				{
					{
						{{ 0.00, 0.00}, 1},
						{{ 0.01, 0.015}, 1},
						{{-0.01, 0.015}, 1}
					},
					{
						{{ 0.00, 0.00}, 1},
						{{ 0.01,-0.015}, 1},
						{{-0.01,-0.015}, 1}
					}
				};
			};
			class DrawLine
			{
				type		= line;
				width		= 4;
				points[]=
				{
					//POINT_MARK_NB(0.03, 45),
					//POINT_MARK_NB(0.03, 45+180),{},
					//POINT_MARK_NB(0.03, 90+45),
					//POINT_MARK_NB(0.03, 90+45+180),{}
				};
			};
			HUD_TEXT_STATIC(0.0,0.01,0.04,0.04,center,"ALLY",IFF_Text)
		};
		class pointsLaser
		{
			class Draw
			{
				type		= line;
				width		= 4;
				points[]=
				{
					POINT_MARK_NB(0.02, 0),
					POINT_MARK_NB(0.02, 180),{},
					POINT_MARK_NB(0.02, 90),
					POINT_MARK_NB(0.02, 270),{},
					POINT_MARK_NB(0.015, 45),
					POINT_MARK_NB(0.015, 45+180),{},
					POINT_MARK_NB(0.015, 90+45),
					POINT_MARK_NB(0.015, 90+45+180),{}
				};
			};
		};
		class pointsNVG: pointsLaser {};
		class pointsStatic
		{
			class Draw
			{
				type		= polygon;
				width		= 4;
				points[]=
				{
					{
						{{ 0.00, 0.00}, 1},
						{{ 0.01, 0.015}, 1},
						{{-0.01, 0.015}, 1}
					}
				};
			};
		};
		class pointsStaticEnemy: pointsStatic {};
		class pointsStaticFriend: pointsStatic {};
		class pointsStaticCiv: pointsStatic {};
		class pointsStaticNeutral: pointsStatic {};
	};
	class TargetDiamond
	{
		class shape
		{
			type=line;
			width = 4;
			points[]=
			{
				POINT_2B(Target,Limit0109,-0.002,-0.002),
				POINT_2B(Target,Limit0109,+0.002,-0.002),
				POINT_2B(Target,Limit0109,+0.002,+0.002),
				POINT_2B(Target,Limit0109,-0.002,+0.002),
				POINT_2B(Target,Limit0109,-0.002,-0.002),{},
				{Target, 1, Limit0109, 1, {XY_Scaled(0.02, 0.02)}, 1},
				{Target, 1, Limit0109, 1, {XY_Scaled(-0.02, 0.02)}, 1},
				{Target, 1, Limit0109, 1, {XY_Scaled(-0.02, -0.02)}, 1},
				{Target, 1, Limit0109, 1, {XY_Scaled(0.02, -0.02)}, 1},
				{Target, 1, Limit0109, 1, {XY_Scaled(0.02, 0.02)}, 1}
			};
		};
	};
};