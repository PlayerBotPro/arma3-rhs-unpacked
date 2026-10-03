#define PosX0Center 0.50 // 502
#define PosY0Center 0.39 // 49
#define SizeX10deg (0.694-0.06)
#define SizeY10deg (0.630-0.06)
#define SizeX10degHorizon (0.170*5.2)
#define SizeY10degHorizon (0.151*5.2)
#define PosYCenterHorizont 0.58
#define PosY0CenterAdjust 0.13
#define XtoYscale (SizeX10deg / SizeY10deg)
//#define SizeX10deg 0.347
//#define SizeY10deg 0.345

#define CIRCLE_LOCK_TIME(boneCenter,bone,scale) \
{boneCenter,{0,	__EVAL(-1.0000 * scale / XtoYscale)}, 1}, \
{bone##1,{0,	__EVAL(1.0000 * scale )}, 1,    boneCenter,	1}, \
{bone##2,{0,	__EVAL(1.0000 * scale )}, 1,    boneCenter,	1}, \
{bone##3,{0,	__EVAL(1.0000 * scale )}, 1,    boneCenter,	1}, \
{bone##4,{0,	__EVAL(1.0000 * scale )}, 1,    boneCenter,	1}, \
{bone##5,{0,	__EVAL(1.0000 * scale )}, 1,    boneCenter,	1}, \
{bone##6,{0,	__EVAL(1.0000 * scale )}, 1,    boneCenter,	1}, \
{bone##7,{0,	__EVAL(1.0000 * scale )}, 1,    boneCenter,	1}, \
{bone##8,{0,	__EVAL(1.0000 * scale )}, 1,    boneCenter,	1}, \
{bone##9,{0,	__EVAL(1.0000 * scale )}, 1,    boneCenter,	1}, \
{bone##10,{0,	__EVAL(1.0000 * scale )}, 1,    boneCenter,	1}, \
{bone##11,{0,	__EVAL(1.0000 * scale )}, 1,    boneCenter,	1}, \
{bone##12,{0,	__EVAL(1.0000 * scale )}, 1,    boneCenter,	1}, \
{bone##13,{0,	__EVAL(1.0000 * scale )}, 1,    boneCenter,	1}, \
{bone##14,{0,	__EVAL(1.0000 * scale )}, 1,    boneCenter,	1}, \
{bone##15,{0,	__EVAL(1.0000 * scale )}, 1,    boneCenter,	1}, \
{bone##16,{0,	__EVAL(1.0000 * scale )}, 1,    boneCenter,	1}, \
{bone##17,{0,	__EVAL(1.0000 * scale )}, 1,    boneCenter,	1},	\
{bone##18,{0,	__EVAL(1.0000 * scale )}, 1,    boneCenter,	1},	\
{bone##19,{0,	__EVAL(1.0000 * scale )}, 1,    boneCenter,	1},	\
{bone##20,{0,	__EVAL(1.0000 * scale )}, 1,    boneCenter,	1}

#define Factor 2/3
#define DEF_HORIZONTPlus(XX) \
	class LevelP##XX: Level0 \
	{ \
		type			= line; \
		points[]		= \
		{ \
			{LevelP##XX,{-0.32,0},1}, \
			{LevelP##XX,{-0.22,0},1}, {}, \
			{LevelP##XX,{ 0.22,0},1}, \
			{LevelP##XX,{+0.32,0},1} \
		}; \
	}; \
	class VALP_1_##XX \
	{ \
		type			= text; \
		source			= static; \
		text			= #XX; \
		align			= right; \
		scale			= 1; \
		sourceScale		= 1; \
		pos[]			= {LevelP##XX,{__EVAL(-0.21 + 0.00),__EVAL(0.019-0.04+0.000)},1}; \
		right[]			= {LevelP##XX,{__EVAL(-0.21 + 0.06),__EVAL(0.019-0.04+0.000)},1}; \
		down[]			= {LevelP##XX,{__EVAL(-0.21 + 0.00),__EVAL(0.019-0.04+0.045)},1}; \
	};\
	class VALP_1_##XX##L: VALP_1_##XX \
	{ \
		align			= left; \
		pos[]			= {LevelP##XX,{__EVAL(0.21 + 0.00),__EVAL(0.019-0.04+0.000)},1}; \
		right[]			= {LevelP##XX,{__EVAL(0.21 + 0.06),__EVAL(0.019-0.04+0.000)},1}; \
		down[]			= {LevelP##XX,{__EVAL(0.21 + 0.00),__EVAL(0.019-0.04+0.045)},1}; \
	};

#define DEF_HORIZONTMinus(XX) \
	class LevelM##XX: Level0 \
	{ \
		type			= line; \
		points[]		= \
		{ \
			{LevelM##XX,{-0.32,0},1}, \
			{LevelM##XX,{-0.22,0},1},{}, \
			{LevelM##XX,{ 0.22,0},1}, \
			{LevelM##XX,{+0.32,0},1}, \
		}; \
	}; \
	class VALM_1_##XX \
	{ \
		type			= text; \
		source			= static; \
		text			= -##XX; \
		align			= right; \
		scale			= 1; \
		sourceScale		= 1; \
		pos[]			= {LevelM##XX,{__EVAL(-0.21 + 0.00),__EVAL(0.019-0.04+0.000)},1}; \
		right[]			= {LevelM##XX,{__EVAL(-0.21 + 0.06),__EVAL(0.019-0.04+0.000)},1}; \
		down[]			= {LevelM##XX,{__EVAL(-0.21 + 0.00),__EVAL(0.019-0.04+0.045)},1}; \
	};\
	class VALM_1_##XX##L: VALM_1_##XX \
	{ \
		align			= left; \
		pos[]			= {LevelM##XX,{__EVAL(0.21 + 0.00),__EVAL(0.019-0.04+0.000)},1}; \
		right[]			= {LevelM##XX,{__EVAL(0.21 + 0.06),__EVAL(0.019-0.04+0.000)},1}; \
		down[]			= {LevelM##XX,{__EVAL(0.21 + 0.00),__EVAL(0.019-0.04+0.045)},1}; \
	};


#define MFD_MATERIAL \
class material\
{\
	ambient[] = {1, 1, 1, 1};\
	diffuse[] = {1, 1, 1, 1};\
	emissive[] = {400, 200, 200, 1};\
};

class MFD
{
	class MFD_Left_Compass
	{
		topLeft			= mfd_2_nav_tl;
		topRight		= mfd_2_nav_tr;
		bottomLeft		= mfd_2_nav_bl;
		borderLeft		= 0;
		borderRight		= 0;
		borderTop		= 0;
		borderBottom	= 0;
		color[]			= {0,1,0,0.1};
		font			= rhs_digital_font_var;
		enableParallax	= 0;
		MFD_MATERIAL
		class Bones {};
		class Draw
		{
			alpha		= 0.95;
			color[]		= {0,0.83,0.83};
			condition	= "on";
			class Text
			{
				type		= text;
				align		= center;
				scale		= 1;
				source		= Heading;
				sourceScale	= 1;
				//sourceLength	= 3;
				TEXT_SIZEPOS(0.498,0.19,0.045,0.05)
			};
		};
	};
	class MFD_Right_Gun: MFD_Left_Compass
	{
		topLeft		= mfd_3_gun_tl;
		topRight	= mfd_3_gun_tr;
		bottomLeft	= mfd_3_gun_bl;
		color[]		= {0,1,0,0.1};
		font 		= rhs_digital_font_var;
		turret[]	= {0};
		MFD_MATERIAL
		class Draw
		{
			alpha=0.95;
			color[]={0.45,0.7,0.29};
			condition="on";
			class Speed
			{
				type			= text;
				align			= left;
				scale			= 1; 		//Text size, obsolete (but still required)
				source			= speed;
				sourceScale		= 3.6;
				sourceLength	= 1;
				TEXT_SIZEPOS(0.425,0.165,0.035,0.045)
			};
			class Height: Speed
			{
				source			= altitudeAGL;
				sourceOffset	= -2;
				sourceScale		= 1;
				sourceLength	= 1;
				TEXT_SIZEPOS(0.625,0.165,0.035,0.045)
			};
			class TurretDirection
			{
				type			= text;
				align			= center;
				scale 			= 1;
				source			= userText;
				sourceIndex		= 2;
				sourceScale		= 1;
				sourceLength	= 2;
				TEXT_SIZEPOS(0.515,0.165,0.035,0.045)
			};
			class TurretElevation
			{
				type			= text;
				align			= left;
				scale 			= 1;
				source			= userText;
				sourceIndex		= 3;
				sourceScale		= 1;
				sourceLength	= 1;
				sourcePrecision = 1;
				TEXT_SIZEPOS(0.88,0.385,0.015,0.02)
			};
			class DistanceToTarget
			{
				type			= text;
				align			= center;
				scale 			= 1;
				source			= userText;
				sourceIndex		= 1;
				sourceScale		= 1;
				sourceLength	= 1;
				sourcePrecision = 1;
				TEXT_SIZEPOS(0.515,0.74,0.035,0.045)
			};
		};
	};
	class MFD_left_Gun: MFD_Right_Gun
	{
		topLeft		= mfd_2_gun_tl;
		topRight	= mfd_2_gun_tr;
		bottomLeft	= mfd_2_gun_bl;
		color[]		= {0,1,0,0.1};
		font		= rhs_digital_font_var;
		MFD_MATERIAL
		class Draw: Draw
		{
			class Speed: Speed {};
			class Height: Height {};
			class TurretDirection: TurretDirection {};
			class TurretElevation: TurretElevation {};
			class DistanceToTarget: DistanceToTarget {};
		};
	};
	class CrossGunner
	{
		topLeft			= HUD LH;
		topRight		= HUD PH;
		bottomLeft		= HUD LD;
		borderLeft		= 0;
		borderRight		= 0;
		borderTop		= 0;
		borderBottom	= 0;
		color[]			= {0,1,0,0.1};
		enableParallax	= 1;
		turret[]		= {0};
		class Bones
		{
			class WeaponAim
			{
				type	= vector;
				source	= turretworld;
				pos0[] = {0.5,0.41};
				pos10[] = {1.15,1.75};
				//pos0[]	= {PosX0Center + 0.19, PosY0Center - 0.1};
				//pos10[]	= {__EVAL(PosX0Center + 0.19 + SizeX10deg), __EVAL((PosY0Center - 0.1 + SizeY10deg))};
			};
		};
		class Draw
		{
			alpha		= 0.95;
			color[]		= {0,0.3,0.05};
			condition	= "on";
			class MGun
			{
				class Circle
				{
					type = "line";
					width = 4;
					points[] =
					{
						{WeaponAim,{ 0.00,	 0.020},1},
						{WeaponAim,{ 0.00,	 0.01},1},{},
						{WeaponAim,{ 0.00,	-0.01},1},
						{WeaponAim,{ 0.00,	-0.02},1},{},
						{WeaponAim,{ 0.02,	 0.000},1},
						{WeaponAim,{ 0.01,	 0.000},1},{},
						{WeaponAim,{-0.01,	 0.000},1},
						{WeaponAim,{-0.02,	 0.000},1},{}
					};
				};
			};
		};
	};
	class AirplaneHUD
	{
		class Pos10Vector
		{
			type="vector";
			pos0[]={0.502,0.49};
			pos10[]={1.112,1.03};
		};
		topLeft			= HUD LH;
		topRight		= HUD PH;
		bottomLeft		= HUD LD;
		borderLeft		= 0;
		borderRight		= 0;
		borderTop		= 0;
		borderBottom	= 0;
		color[]			= {0,1,0,0.1};
		enableParallax	= 1;
		turret[]		= {-1};
		font			= rhs_digital_font_rus;
		class Bones
		{
			class PlaneW
			{
				type="fixed";
				pos[]={0.502,0.49};
			};
			class ImpactPoint
			{
				type			= vector;
				source			= ImpactPoint;
				pos0[]			= {0.5, __EVAL(PosY0Center)};
				pos10[]			= {__EVAL(0.5 + SizeX10deg), __EVAL(PosY0Center + SizeY10deg)};
			};
			class Limit0109
			{
				type			= limit;
				limits[]		= {0.1,0.1,0.9,0.9};
			};
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
				aspectRatio		= __EVAL(1 / XtoYscale );
			};
			#undef MISSILEFLIGHTTIME_ROT_MACRO
			#define MISSILEFLIGHTTIME_ROT_MACRO(XX) 				\
			class MissileFlightTimeRot##XX##: MissileFlightTimeRot1	\
			{														\
				maxAngle		= __EVAL(37 * (##XX##/2) );			\
				max  			= __EVAL(2 * (##XX##/2));			\
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

			class ForwardVector
			{
				type	= "vector";
				source	= "forward";
				pos0[]	= {0,0};
				pos10[]	= {0.347,0.345};
			};
			class Target
			{
				source	= target;
				type	= vector;
				pos0[]	= {__EVAL(PosX0Center),__EVAL(PosY0Center)};
				pos10[]	= {__EVAL(PosX0Center+SizeX10deg),__EVAL(PosY0Center+SizeY10deg)};
			};
			class Velocity: Pos10Vector
			{
				type	= vector;
				source	= velocity;
				pos0[]	= {0.502,0.49};
				pos10[]	= {0.56300002,0.54400003};
			};
			class SliderSpeedSource
			{
				type		= linear;
				source		= speed;
				min			= 0;
				max			= __EVAL(500 / 3.6);
				minPos[]	= {0.255, __EVAL(0.2 + 0 * 0.065)};
				maxPos[]	= {0.255, __EVAL(0.2 + 5 * 0.065)};
			};
			class AGLMove
			{
				type		= linear;
				source		= altitudeAGL;
				min			= 0;
				max			= 50;
				minPos[]	= { 0, 0.15*0.65 };
				maxPos[]	= { 0, 0.65*0.65 };
			};
			class Heading
			{
				type		= linear;
				source		= Heading;
				min			= -36;
				max			= 36;
				minPos[]	= {0,0};
				maxPos[]	= {1,0};
			};
			class TargetDistanceMissile
			{
				type		= rotational;
				source		= targetDist;
				center[]	= {0,0};
				min			= 100;
				max			= 3000;
				minAngle	= -120;
				maxAngle	= 120;
			};
			class vspeed
			{
				source		= vspeed;
				type		= linear;
				min			= -30;
				max			= 30;
				minPos[]	= {0,__EVAL(0.15*0.4)};
				maxPos[]	= {0,__EVAL(0.75*0.4)};
			};
			class HorizonBankMGun
			{
				type		= rotational;
				source		= HorizonBank;
				center[]	= {0,0};
				min			= -6.2831898;
				max			= 6.2831898;
				minAngle	= -360;
				maxAngle	= 360;
				aspectRatio	= 0.88524598;
			};
			class HorizonDive
			{
				source		= horizonDive;
				type		= linear;
				min			= -1;
				max			= 1;
				minPos[]	= {0.502,2.49};
				maxPos[]	= {0.502,-1.51};
			};
			class HorizonBankReverted
			{
				center[]	= {0.5,0.6016};
				type		= rotational;
				source		= HorizonBank;
				min			= -3.14159265*2;
				max			= 3.14159265*2;
				minAngle	= 360;
				maxAngle	= -360;
				aspectRatio	= 0.8;
			};
			class Level0
			{
				pos0[]			= {PosX0Center, PosYCenterHorizont};
				pos10[]			= {__EVAL(PosX0Center + SizeX10degHorizon), __EVAL(PosYCenterHorizont + SizeY10degHorizon)};
				type			= horizon;
				angle			= 0;
			};
			class LevelP5: Level0 {angle = +5;};
			class LevelM5: Level0 {angle = -5;};
			class LevelP10: Level0 {angle = +10;};
			class LevelM10: Level0 {angle = -10;};
			class LevelP15: Level0 {angle = +15;};
			class LevelM15: Level0 {angle = -15;};
			class LevelP20: Level0 {angle = +20;};
			class LevelM20: Level0 {angle = -20;};
			class LevelP25: Level0 {angle = +25;};
			class LevelM25: Level0 {angle = -25;};
			class LevelP30: Level0 {angle = +30;};
			class LevelM30: Level0 {angle = -30;};
			class LevelP35: Level0 {angle = +35;};
			class LevelM35: Level0 {angle = -35;};
			class LevelP40: Level0 {angle = +40;};
			class LevelM40: Level0 {angle = -40;};
			class LevelP45: Level0 {angle = +45;};
			class LevelM45: Level0 {angle = -45;};
		};
		class Draw
		{
			alpha		= 0.95;
			color[]		= {0,0.3,0.05};
			condition	= "on";
			class MGunD
			{
				condition		= "mgun+rocket+bomb";
				class Cross
				{
					type			= line;
					width			= 3.0;
					points[]		=
					{
						{ImpactPoint,{ 0.0, __EVAL(-0.03/XtoYscale)}, 1},
						{ImpactPoint,{ 0.0, __EVAL(-0.04/XtoYscale)}, 1},
						{},
						{ImpactPoint,{ 0.020,  -0.024}, 1},
						{ImpactPoint,{ 0.025,  -0.031}, 1},
						{},
						//middle dot
						{ImpactPoint,{ 0.0, -0.002}, 1},
						{ImpactPoint,{ 0.0,  0.002}, 1},
						{},
						{ImpactPoint,{-0.002, 0.0}, 1},
						{ImpactPoint,{ 0.002, 0.0}, 1},
						{}

					};
				};
				class Circle
				{
					type			= line;
					width			= 3.0;
					points[]		=
					{
						CIRCLE_LOCK_TIME(ImpactPoint, MissileFlightTimeRot, 0.035)
					};
				};
				class Circle_Min_Range
				{
					type			= line;
					width			= 3.0;
					points[]		=
					{
						CIRCLE_BIG(ImpactPoint, 0.03)
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
					pos[]			= {ImpactPoint, {-0.002, __EVAL(-0.10+0.02)}, 1};
					right[]			= {ImpactPoint, { 0.045, __EVAL(-0.10+0.02)}, 1};
					down[]			= {ImpactPoint, {-0.002, __EVAL(-0.06+0.02)}, 1};
				};
			};

			class Static2
			{
				clipTL[] = {0,0.5};
				clipBR[] = {1,0};
				#define POSITION_Y_FIX -0.12
				points[] = {{"PlaneW",{-0.21,7.34351e-009-POSITION_Y_FIX},1},{"PlaneW",{-0.28,9.79135e-009-POSITION_Y_FIX},1},{},{"PlaneW",{0.21,-2.00338e-009-POSITION_Y_FIX},1},{"PlaneW",{0.28,-2.67117e-009-POSITION_Y_FIX},1},{},{"PlaneW",{-0.105,0.145492-POSITION_Y_FIX},1},{"PlaneW",{-0.14,0.19399-POSITION_Y_FIX},1},{},{"PlaneW",{0.105,0.145492-POSITION_Y_FIX},1},{"PlaneW",{0.14,0.19399-POSITION_Y_FIX},1},{},{"PlaneW",{-0.181865,0.084-POSITION_Y_FIX},1},{"PlaneW",{-0.242487,0.112-POSITION_Y_FIX},1},{},{"PlaneW",{0.181865,0.084-POSITION_Y_FIX},1},{"PlaneW",{0.242487,0.112-POSITION_Y_FIX},1},{},{"PlaneW",{-0.202844,0.0434816-POSITION_Y_FIX},1},{"PlaneW",{-0.270459,0.0579755-POSITION_Y_FIX},1},{},{"PlaneW",{0.202844,0.0434816-POSITION_Y_FIX},1},{"PlaneW",{0.270459,0.0579755-POSITION_Y_FIX},1},{},{"PlaneW",{-0.209201,0.0146422-POSITION_Y_FIX},1},{"PlaneW",{-0.244068,0.0170825-POSITION_Y_FIX},1},{},{"PlaneW",{-0.20681,0.0291729-POSITION_Y_FIX},1},{"PlaneW",{-0.241278,0.034035-POSITION_Y_FIX},1},{},{"PlaneW",{0.20681,0.0291729-POSITION_Y_FIX},1},{"PlaneW",{0.241278,0.034035-POSITION_Y_FIX},1},{},{"PlaneW",{0.209201,0.0146422-POSITION_Y_FIX},1},{"PlaneW",{0.244068,0.0170825-POSITION_Y_FIX},1},{}};
				type = "line";
			};
			class HorizonBank
			{
				#define POSITION_Y_FIX2 0.50
				#define POSITION_X_FIX2 0.50
				points[] = {
					{"PlaneW",1,"HorizonBankReverted",{0.21-POSITION_X_FIX2,0-POSITION_Y_FIX2},1},{"PlaneW",1,"HorizonBankReverted",{0.14-POSITION_X_FIX2,0-POSITION_Y_FIX2},1},{"PlaneW",1,"HorizonBankReverted",{0.11-POSITION_X_FIX2,-0.035-POSITION_Y_FIX2},1},{"PlaneW",1,"HorizonBankReverted",{0.08-POSITION_X_FIX2,0-POSITION_Y_FIX2},1},{"PlaneW",1,"HorizonBankReverted",{0.03-POSITION_X_FIX2,0-POSITION_Y_FIX2},1},{},
					{"PlaneW",1,"HorizonBankReverted",{-0.21-POSITION_X_FIX2,0-POSITION_Y_FIX2},1},{"PlaneW",1,"HorizonBankReverted",{-0.14-POSITION_X_FIX2,0-POSITION_Y_FIX2},1},{"PlaneW",1,"HorizonBankReverted",{-0.11-POSITION_X_FIX2,-0.035-POSITION_Y_FIX2},1},{"PlaneW",1,"HorizonBankReverted",{-0.08-POSITION_X_FIX2,0-POSITION_Y_FIX2},1},{"PlaneW",1,"HorizonBankReverted",{-0.03-POSITION_X_FIX2,0-POSITION_Y_FIX2},1},{},
					{"PlaneW",1,"HorizonBankReverted",{0-POSITION_X_FIX2,-0.004-POSITION_Y_FIX2},1},{"PlaneW",1,"HorizonBankReverted",{0-POSITION_X_FIX2,0.004-POSITION_Y_FIX2},1}};
				type = "line";
			};
			class CollectiveGroup
			{
				condition = "simulRTD";
				class CollectiveText
				{
					type = "text";
					source = "static";
					text = "%";
					align = "right";
					scale = 1;
					pos[] = {{0.2,0.2},1};
					right[] = {{0.26,0.2},1};
					down[] = {{0.2,0.25},1};
				};
				class CollectiveNumber
				{
					type = "text";
					source = "rtdCollective";
					sourceScale = 100;
					align = "left";
					scale = 1;
					pos[] = {{0.2,0.2},1};
					right[] = {{0.26,0.2},1};
					down[] = {{0.2,0.25},1};
				};
			};

			class Horizont
			{
				clipTL[] = {0.25,0.25};
				clipBR[] = {0.75,0.75};
				class Dimmed
				{
					class Level0
					{
						type			= line;
						width			= 4.0;
						points[] =
						{
							{Level0,{__EVAL(-0.200 * 1.4),	0},1},
							{Level0,{__EVAL(-0.125 * 1.4),	0},1},{},
							{Level0,{__EVAL(-0.045 * 1.4),	0},1},
							{Level0,{__EVAL(-0.005 * 1.4),	0},1},{},
							{Level0,{__EVAL(0.005 * 1.4),	0},1},
							{Level0,{__EVAL(0.045 * 1.4),	0},1},{},
							{Level0,{__EVAL(0.125 * 1.4),	0},1},
							{Level0,{__EVAL(0.200 * 1.4),	0},1}
						};
					};
					DEF_HORIZONTMinus(5);
					DEF_HORIZONTPlus(5);
					DEF_HORIZONTMinus(10);
					DEF_HORIZONTPlus(10);
					DEF_HORIZONTMinus(15);
					DEF_HORIZONTPlus(15);
					DEF_HORIZONTMinus(20);
					DEF_HORIZONTPlus(20);
					DEF_HORIZONTMinus(25);
					DEF_HORIZONTPlus(25);
					DEF_HORIZONTMinus(30);
					DEF_HORIZONTPlus(30);
					DEF_HORIZONTMinus(35);
					DEF_HORIZONTPlus(35);
					DEF_HORIZONTMinus(40);
					DEF_HORIZONTPlus(40);
					DEF_HORIZONTMinus(45);
					DEF_HORIZONTPlus(45);
				};
			};
			class Static
			{
				type	= line;
				width	= 4;
				points[]=
				{
					{vspeed,	{__EVAL(0.27-0.05),		__EVAL(.55+0.01)},1},
					{vspeed,	{__EVAL(0.255-0.05),	__EVAL(.55+0.0)},1},
					{vspeed,	{__EVAL(0.27-0.05),		__EVAL(.55-0.01)},1},
					{vspeed,	{__EVAL(0.27-0.05),		__EVAL(.55+0.01)},1},{},
					{{__EVAL(0.25-0.05),	__EVAL(0.55+0.12*0.40)},1},
					{{__EVAL(0.25-0.05),	__EVAL(0.55+0.58*0.40)},1},{},
					{{__EVAL(0.25-0.05),	__EVAL(0.55+0.15*0.40)},1},
					{{__EVAL(0.23-0.05),	__EVAL(0.55+0.15*0.40)},1},{},
					{{__EVAL(0.245-0.05),	__EVAL(0.55+0.55*0.40)},1},
					{{__EVAL(0.23-0.05),	__EVAL(0.55+0.55*0.40)},1},{},
					{{__EVAL(0.245-0.05),	__EVAL(0.55+0.25*0.40)},1},
					{{__EVAL(0.23-0.05),	__EVAL(0.55+0.25*0.40)},1},{},
					{{__EVAL(0.245-0.05),	__EVAL(0.55+0.35*0.40)},1},
					{{__EVAL(0.23-0.05),	__EVAL(0.55+0.35*0.40)},1},{},
					{{__EVAL(0.245-0.05),	__EVAL(0.55+0.45*0.40)},1},
					{{__EVAL(0.23-0.05),	__EVAL(0.55+0.45*0.40)},1},{},

					{vspeed,	{__EVAL(1-0.27+0.05),	__EVAL(0.55+0.01)},1},
					{vspeed,	{__EVAL(1-0.255+0.05),	__EVAL(0.55+0.0)},1},
					{vspeed,	{__EVAL(1-0.27+0.05),	__EVAL(0.55-0.01)},1},
					{vspeed,	{__EVAL(1-0.27+0.05),	__EVAL(0.55+0.01)},1},{},
					{{__EVAL(1-0.25 +0.05),	__EVAL(0.55+0.12*0.40)},1},
					{{__EVAL(1-0.25+0.05),	__EVAL(0.55+0.78*0.40)},1},{},
					{{__EVAL(1-0.25 +0.05),	__EVAL(0.55+0.15*0.40)},1},
					{{__EVAL(1-0.22+0.05),	__EVAL(0.55+0.15*0.40)},1},{},
					{{__EVAL(1-0.245+0.05),	__EVAL(0.55+0.75*0.40)},1},
					{{__EVAL(1-0.22+0.05),	__EVAL(0.55+0.75*0.40)},1},{},
					{{__EVAL(1-0.245+0.05),	__EVAL(0.55+0.25*0.40)},1},
					{{__EVAL(1-0.23+0.05),	__EVAL(0.55+0.25*0.40)},1},{},
					{{__EVAL(1-0.245+0.05),	__EVAL(0.55+0.35*0.40)},1},
					{{__EVAL(1-0.23+0.05),	__EVAL(0.55+0.35*0.40)},1},{},
					{{__EVAL(1-0.245+0.05),	__EVAL(0.55+0.45*0.40)},1},
					{{__EVAL(1-0.22+0.05),	__EVAL(0.55+0.45*0.40)},1},{},
					{{__EVAL(1-0.245+0.05),	__EVAL(0.55+0.55*0.40)},1},
					{{__EVAL(1-0.23+0.05),	__EVAL(0.55+0.55*0.40)},1},{},
					{{__EVAL(1-0.245+0.05),	__EVAL(0.55+0.65*0.40)},1},
					{{__EVAL(1-0.23+0.05),	__EVAL(0.55+0.65*0.40)},1},{},

					{{0.52,	__EVAL(0.08+0.01+0.05)},1},
					{{0.5,	__EVAL(0.06+0.01+0.05)},1},
					{{0.48,	__EVAL(0.08+0.01+0.05)},1},{},
					{{0.3,	__EVAL(0.055+0.01+0.05)},1},
					{{0.7,	__EVAL(0.055+0.01+0.05)},1},{}
				};
			};
			class SpeedGroup
			{
				condition		= "speed-2.78";
				class Static
				{
					type			= line;
					width			= 4.0;

					points[]		=
					{
						#define LADDER_SIZE_Y 0.065
						{SliderSpeedSource, {0.015-0.03, 0.01}, 1},
						{SliderSpeedSource, {0.000-0.03, 0.00}, 1},
						{SliderSpeedSource, {0.015-0.03, -0.01}, 1},
						{SliderSpeedSource, {0.015-0.03, 0.01}, 1},
						{},
						{{0.25-0.03, __EVAL(0.2 + 0 * LADDER_SIZE_Y)}, 1},
						{{0.25-0.03, __EVAL(0.2 + 5 * LADDER_SIZE_Y)}, 1},{},
						{{0.25-0.03, __EVAL(0.2 + 0 * LADDER_SIZE_Y)}, 1},
						{{0.23-0.03, __EVAL(0.2 + 0 * LADDER_SIZE_Y)}, 1},{},
						{{0.24-0.03, __EVAL(0.2 + 1 * LADDER_SIZE_Y)}, 1},
						{{0.23-0.03, __EVAL(0.2 + 1 * LADDER_SIZE_Y)}, 1},{},
						{{0.24-0.03, __EVAL(0.2 + 2 * LADDER_SIZE_Y)}, 1},
						{{0.23-0.03, __EVAL(0.2 + 2 * LADDER_SIZE_Y)}, 1},{},
						{{0.24-0.03, __EVAL(0.2 + 3 * LADDER_SIZE_Y)}, 1},
						{{0.23-0.03, __EVAL(0.2 + 3 * LADDER_SIZE_Y)}, 1},{},
						{{0.24-0.03, __EVAL(0.2 + 4 * LADDER_SIZE_Y)}, 1},
						{{0.23-0.03, __EVAL(0.2 + 4 * LADDER_SIZE_Y)}, 1},{},
						{{0.25-0.03, __EVAL(0.2 + 5 * LADDER_SIZE_Y)}, 1},
						{{0.23-0.03, __EVAL(0.2 + 5 * LADDER_SIZE_Y)}, 1},
						{}
					};
				};
				HUD_TEXT_STATIC(0.220-0.03,0.183,0.04,0.03,left,"500",SpeedStatic500)
				HUD_TEXT_STATIC(0.220-0.03,0.508,0.04,0.03,left,"0",SpeedStatic0)
			};
			class AGL_Radar
			{
				condition = "50-altitudeAGL";
				class Panel
				{
					width		= 4.0;
					type		= line;
					points[]=
					{
						{AGLMove,{__EVAL(1-0.27)	,__EVAL(0.1+0.01)},1},
						{AGLMove,{__EVAL(1-0.255)	,__EVAL(0.1+0.0)},1},
						{AGLMove,{__EVAL(1-0.27)	,__EVAL(0.1-0.01)},1},
						{AGLMove,{__EVAL(1-0.27)	,__EVAL(0.1+0.01)},1},{},
						{{__EVAL(1-0.25)			,__EVAL(0.1+0.15*0.65)},1},
						{{__EVAL(1-0.25)			,__EVAL(0.1+0.65*0.65)},1},{},
						{{__EVAL(1-0.25)			,__EVAL(0.1+0.15*0.65)},1},
						{{__EVAL(1-0.23)			,__EVAL(0.1+0.15*0.65)},1},{},
						{{__EVAL(1-0.245-0.03)		,__EVAL(0.1+0.65*0.65)},1},
						{{__EVAL(1-0.23+0.005)		,__EVAL(0.1+0.65*0.65)},1},{},
						{{__EVAL(1-0.245)			,__EVAL(0.1+0.25*0.65)},1},
						{{__EVAL(1-0.23)			,__EVAL(0.1+0.25*0.65)},1},{},
						{{__EVAL(1-0.245)			,__EVAL(0.1+0.35*0.65)},1},
						{{__EVAL(1-0.23)			,__EVAL(0.1+0.35*0.65)},1},{},
						{{__EVAL(1-0.245)			,__EVAL(0.1+0.45*0.65)},1},
						{{__EVAL(1-0.23)			,__EVAL(0.1+0.45*0.65)},1},{},
						{{__EVAL(1-0.245)			,__EVAL(0.1+0.55*0.65)},1},
						{{__EVAL(1-0.23)			,__EVAL(0.1+0.55*0.65)},1},
						{}
					};
				};
				class AltStatic50
				{
					type		= text;
					source		= static;
					scale		= 1;
					sourceScale	= 1;
					align		= right;
					text		= 50;
					TEXT_SIZEPOS(0.79,0.17,0.04,0.035)
				};
			};
			class RadarBoxes
			{
				type	= radar;
				pos0[]	= {__EVAL(PosX0Center),__EVAL(PosY0Center)};
				pos10[]	= {__EVAL((PosX0Center)+(SizeX10deg)),__EVAL((PosY0Center)+(SizeY10deg))};

				width = 4;
				points[]=
				{
					POINT2(-0.002,-0.002),
					POINT2(+0.002,-0.002),
					POINT2(+0.002,+0.002),
					POINT2(-0.002,+0.002),
					POINT2(-0.002,-0.002)
				};
			};
			class TargetDiamond
			{
				class shape
				{
					type	= line;
					width	= 4;
					points[]=
					{
						#define XY_Scaled(xx,yy) __EVAL(xx),__EVAL((yy) / (XtoYscale))
						{Target, 1, Limit0109, 1, {XY_Scaled(0.02, 0.02)}, 1},
						{Target, 1, Limit0109, 1, {XY_Scaled(-0.02, 0.02)}, 1},
						{Target, 1, Limit0109, 1, {XY_Scaled(-0.02, -0.02)}, 1},
						{Target, 1, Limit0109, 1, {XY_Scaled(0.02, -0.02)}, 1},
						{Target, 1, Limit0109, 1, {XY_Scaled(0.02, 0.02)}, 1}
					};
				};
			};
			class SpeedNumber
			{
				type			= text;
				align			= right;
				source			= speed;
				sourceScale		= 3.6;
				sourceLength	= 3;
				scale			= 1;
				TEXT_SIZEPOS(0.07,0.07,0.08,0.05)
			};
			class AltNumber: SpeedNumber
			{
				source			= altitudeAGL;
				sourceScale		= 1;
				sourceLength	= 3;
				sourceOffset	= -2;
				align			= right;
				TEXT_SIZEPOS(0.76,0.07,0.08,0.05)
			};
			class AltNumberStatic: AltNumber
			{
				type		= text;
				source		= static;
				align		= right;
				text		= "р";
				scale		= 1;
				sourceScale	= 1;
				TEXT_SIZEPOS(0.88,0.09,0.05,0.04)
			};
			class VspeedNumber: SpeedNumber
			{
				source			= vspeed;
				sourceScale		= 1;
				sourceLength	= 2;
				align			= left;
				TEXT_SIZEPOS(0.81,0.55,0.08,0.05)
			};
			HUD_TEXT_STATIC(0.835,0.59,0.05,0.04,right,"+30",VspeedNumberStaticP30)
			HUD_TEXT_STATIC(0.835,0.71,0.05,0.04,right,"0",VspeedNumberStaticZERO)
			HUD_TEXT_STATIC(0.835,0.83,0.05,0.04,right,"-30",VspeedNumberStaticM30)

			// gmeter
			HUD_TEXT_STATIC(0.14,0.59,0.05,0.04,right,"3",NevimStatic3)
			HUD_TEXT_STATIC(0.14,0.71,0.05,0.04,right,"0",NevimStaticZERO)
			HUD_TEXT_STATIC(0.14,0.75,0.05,0.04,right,"1",NevimStatic1)
			class HeadingScale
			{
				type			= scale;
				source			= heading;
				horizontal		= 1;
				sourceScale		= 0.1;
				width			= 4;
				top				= 0.3;
				center			= 0.5;
				bottom			= 0.7;
				lineXleft		= 0.11;
				lineYright		= 0.1;
				lineXleftMajor	= 0.11;
				lineYrightMajor	= 0.09;
				majorLineEach	= 2;
				numberEach		= 2;
				step			= __EVAL(5*0.1);
				stepSize		= __EVAL(1/18);
				align			= center;
				scale			= 1;
				pos[]=
				{
					"0.32-0.01",
					"0.0+0.05"
				};
				right[]=
				{
					"0.38-0.01",
					"0.0+0.05"
				};
				down[]=
				{
					"0.32-0.01",
					"0.04+0.05"
				};
			};
		};
	};
};
