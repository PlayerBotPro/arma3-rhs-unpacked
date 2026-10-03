
#define PosX0Center 0.50
#define PosY0Center 0.27
#define PosYCenterHorizont 0.53
#define SizeX10deg 0.88
#define SizeY10deg 0.74

#undef CIRCLE_LOCK_TIME
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

#define CIRCLE_LOCK_TIME_SMALL(boneCenter,bone,scale) \
{boneCenter,{0,	__EVAL(-1.0000 * scale / XtoYscale)}, 1}, \
{bone##1,{0,	__EVAL(1.0000 * scale )}, 1,    boneCenter,	1}, \
{bone##2,{0,	__EVAL(1.0000 * scale )}, 1,    boneCenter,	1}, \
{bone##3,{0,	__EVAL(1.0000 * scale )}, 1,    boneCenter,	1}, \
{bone##4,{0,	__EVAL(1.0000 * scale )}, 1,    boneCenter,	1}, \
{bone##5,{0,	__EVAL(1.0000 * scale )}, 1,    boneCenter,	1}, \
{bone##6,{0,	__EVAL(1.0000 * scale )}, 1,    boneCenter,	1}

#define CIRCLE_LOCK_TIME_BIG(boneCenter,bone,scale) \
{bone##1,{0,	__EVAL(1.0000 * scale )}, 1,    boneCenter,	1}, \
{bone##2,{0,	__EVAL(1.0000 * scale )}, 1,    boneCenter,	1}, \
{bone##3,{0,	__EVAL(1.0000 * scale )}, 1,    boneCenter,	1}, \
{bone##4,{0,	__EVAL(1.0000 * scale )}, 1,    boneCenter,	1}, \
{bone##5,{0,	__EVAL(1.0000 * scale )}, 1,    boneCenter,	1}


class MFD
{
	class AirplaneHUD
	{
		enableParallax = 1;
		topLeft = "HUD LH";
		topRight = "HUD PH";
		bottomLeft = "HUD LD";
		borderLeft = 0;
		borderRight = 0;
		borderTop = 0;
		borderBottom = 0;

		class Pos10Vector
		{
			pos0[] = {0.52,0.03};
			pos10[] = {2.02,1.23};
			type = "vector";
		};
		color[] = {0,1,0,0.1};
		class Bones
		{
			class PlaneW
			{
				pos[] = {0.5,0.5};
				type = "fixed";
			};
			class HorizonBankMGun
			{
				center[]	= {0,0};
				type		= rotational;
				source		= HorizonBank;
				min			= -6.28319;
				max			= 6.28319;
				minAngle	= -360;
				maxAngle	= 360;
				aspectRatio	= 0.8;
			};
			class HorizonBankReverted
			{
				pos0[]		= {-0.0,-0.0};
				pos10[]		= {0.0,0.0};
				center[]	= {0.0,0.0};
				type		= rotational;
				source		= HorizonBank;
				min			= __EVAL(-3.14159265*2);
				max			= __EVAL(3.14159265*2);
				minAngle	= 360;
				maxAngle	= -360;
				aspectRatio	= 0.8;
			};
			class ImpactPoint
			{
				type	= vector;
				source	= ImpactPoint;
				pos0[]	= {0.5, __EVAL(PosY0Center-0.04)};
				pos10[]	= {__EVAL(0.5 + SizeX10deg), __EVAL(PosY0Center + SizeY10deg+0.45)};
			};
			class TargetingPodDir
			{
				type	= vector;
				source	= pilotcamera;
				pos0[]	= {PosX0Center+0.034, PosY0Center-0.0455};
				pos10[]	= {__EVAL(PosX0Center + SizeX10deg+0.64), __EVAL(PosY0Center + SizeY10deg+0.46)};
			};
			class TargetingPodTarget: TargetingPodDir
			{
				// source available in 1.77, uncomment after 0.4.3.1 release
				//source	= pilotcameratarget;
			};
			class MissileFlightTimeRot1
			{
				type			= rotational;
				source			= MissileFlightTime;
				sourceScale		= 2.5;
				center[]		= {0, 0};
				min				= 0;
				max				= __EVAL(10 *0.05);
				minAngle		= 0;
				maxAngle		= __EVAL(360 * 0.05);
				aspectRatio		= __EVAL(1 / XtoYscale );
			};
			#define MISSILEFLIGHTTIME_ROT_MACRO(XX) 				\
			class MissileFlightTimeRot##XX##: MissileFlightTimeRot1	\
			{														\
				maxAngle		= __EVAL(37 * (##XX##/2) );			\
				max  			= __EVAL(6 * (##XX##/2));			\
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
			class UserRot1
			{
				type			= rotational;
				source			= user;
				sourceIndex 	= 4;
				sourceScale		= 0.004;
				center[]		= {0, 0};
				min				= 0;
				max				= __EVAL(10 *0.05);
				minAngle		= 0;
				maxAngle		= __EVAL(360 * 0.05);
				aspectRatio		= __EVAL(1 / XtoYscale );
			};
			#define USER_ROT_MACRO(XX) 				\
			class UserRot##XX##: UserRot1	\
			{														\
				maxAngle		= __EVAL(37 * (##XX##/2) );			\
				max  			= __EVAL(6 * (##XX##/2));			\
			};
			USER_ROT_MACRO(2)
			USER_ROT_MACRO(3)
			USER_ROT_MACRO(4)
			USER_ROT_MACRO(5)
			USER_ROT_MACRO(6)
			USER_ROT_MACRO(7)
			USER_ROT_MACRO(8)
			USER_ROT_MACRO(9)
			USER_ROT_MACRO(10)
			USER_ROT_MACRO(11)
			USER_ROT_MACRO(12)
			USER_ROT_MACRO(13)
			USER_ROT_MACRO(14)
			USER_ROT_MACRO(15)
			USER_ROT_MACRO(16)
			USER_ROT_MACRO(17)
			USER_ROT_MACRO(18)
			USER_ROT_MACRO(19)
			USER_ROT_MACRO(20)
		};
		class Draw
		{
			color[] = {0.69,0.22,0};
			alpha = 1.0;
			class ImpactPoint
			{
				condition = "1 - atmissile";
				class Cros
				{
					type = "line";
					points[] =
					{
						{ImpactPoint, 1,{XY_Scaled( 0.20/1.8,0.0)},1},
						{ImpactPoint, 1,{XY_Scaled( 0.05/1.8,0.0)},1},{},
						{ImpactPoint, 1,{XY_Scaled(-0.20/1.8,0.0)},1},
						{ImpactPoint, 1,{XY_Scaled(-0.05/1.8,0.0)},1},{},

						{ImpactPoint, 1,{XY_Scaled(0.0, 0.20/1.8)},1},
						{ImpactPoint, 1,{XY_Scaled(0.0, 0.05/1.8)},1},{},
						{ImpactPoint, 1,{XY_Scaled(0.0,-0.20/1.8)},1},
						{ImpactPoint, 1,{XY_Scaled(0.0,-0.05/1.8)},1},{}
					};
				};
				class Dot
				{
					type = "line";
					points[] =
					{
						{ImpactPoint,{ 0.00,	 0.0035},1},
						{ImpactPoint,{ 0.0035,	-0.00},1},
						{ImpactPoint,{ 0.00,	-0.0035},1},
						{ImpactPoint,{-0.0035,	-0.00},1},
						{ImpactPoint,{ 0.00,	 0.0035},1}
					};
				};
				class Ring
				{
					type = "line";
					points[] =
					{
						//CIRCLE_BIG(ImpactPoint,0.2),{},
						POINT_MARK(ImpactPoint,0.2,110),
						POINT_MARK(ImpactPoint,0.2,105),
						POINT_MARK(ImpactPoint,0.2,100),
						POINT_MARK(ImpactPoint,0.2,95),
						POINT_MARK(ImpactPoint,0.2,90),
						POINT_MARK(ImpactPoint,0.2,85),
						POINT_MARK(ImpactPoint,0.2,80),
						POINT_MARK(ImpactPoint,0.2,75),
						POINT_MARK(ImpactPoint,0.2,70),
						POINT_MARK(ImpactPoint,0.2,65),
						POINT_MARK(ImpactPoint,0.2,60),
						POINT_MARK(ImpactPoint,0.2,55),
						POINT_MARK(ImpactPoint,0.2,50),
						POINT_MARK(ImpactPoint,0.2,45),
						POINT_MARK(ImpactPoint,0.2,40),
						POINT_MARK(ImpactPoint,0.2,35),
						POINT_MARK(ImpactPoint,0.2,30),
						POINT_MARK(ImpactPoint,0.2,25),
						POINT_MARK(ImpactPoint,0.2,20),
						POINT_MARK(ImpactPoint,0.2,15),
						POINT_MARK(ImpactPoint,0.2,10),
						POINT_MARK(ImpactPoint,0.2,05),
						POINT_MARK(ImpactPoint,0.2,00),
						{},
						#define MARK_SMALL 0.19
						#define MARK_BIG 0.18
						CIRCLE_MARK(ImpactPoint,0.2,MARK_BIG,110),{},
						CIRCLE_MARK(ImpactPoint,0.2,MARK_SMALL,100),{},
						CIRCLE_MARK(ImpactPoint,0.2,MARK_BIG,90),{},
						CIRCLE_MARK(ImpactPoint,0.2,MARK_SMALL,80),{},
						CIRCLE_MARK(ImpactPoint,0.2,MARK_SMALL,70),{},
						CIRCLE_MARK(ImpactPoint,0.2,MARK_BIG,60),{},
						CIRCLE_MARK(ImpactPoint,0.2,MARK_SMALL,50),{},
						CIRCLE_MARK(ImpactPoint,0.2,MARK_SMALL,40),{},
						CIRCLE_MARK(ImpactPoint,0.2,MARK_BIG,30),{},
						CIRCLE_MARK(ImpactPoint,0.2,MARK_SMALL,20),{},
						CIRCLE_MARK(ImpactPoint,0.2,MARK_SMALL,10),{},
						CIRCLE_MARK(ImpactPoint,0.2,MARK_BIG,00),{}
					};
				};
				class Triangle
				{
					type = "line";
					width = 9;
					points[] =
					{
						{ImpactPoint,1,{HorizonBankReverted, 0.00,	__EVAL(0.015+0.177)},1},
						{ImpactPoint,1,{HorizonBankReverted, 0.01,	__EVAL(0.000+0.177)},1},
						{ImpactPoint,1,{HorizonBankReverted,-0.01,	__EVAL(0.000+0.177)},1},
						{ImpactPoint,1,{HorizonBankReverted, 0.00,	__EVAL(0.015+0.177)},1}
					};
				};
				class LaunchAutorization
				{
					type = "line";
					width = 14;
					points[] =
					{
						CIRCLE_LOCK_TIME_SMALL(ImpactPoint,MissileFlightTimeRot,0.205)
					};
				};
				class LaunchAutorizationBig
				{
					type = "line";
					width = 24;
					points[] =
					{
						CIRCLE_LOCK_TIME_BIG(ImpactPoint,MissileFlightTimeRot,0.215)
					};
				};
				/*class Dot
				{
					type = "polygon";
					points[] =
					{
						{
							{ImpactPoint,{0.01,	0.01},1},
							{ImpactPoint,{0.01,	0.0},1},
							{ImpactPoint,{0.00,	0.0},1},
							{ImpactPoint,{0.00,	0.01},1}
						}
					};
				};*/
			};
			class TargetingPod: ImpactPoint
			{
				condition = "atmissile-pilotcameralock";
				class Cros
				{
					type = "line";
					points[] =
					{
						{TargetingPodDir, 1,{XY_Scaled( 0.20/1.8,0.0)},1},
						{TargetingPodDir, 1,{XY_Scaled( 0.05/1.8,0.0)},1},{},
						{TargetingPodDir, 1,{XY_Scaled(-0.20/1.8,0.0)},1},
						{TargetingPodDir, 1,{XY_Scaled(-0.05/1.8,0.0)},1},{},

						{TargetingPodDir, 1,{XY_Scaled(0.0, 0.20/1.8)},1},
						{TargetingPodDir, 1,{XY_Scaled(0.0, 0.05/1.8)},1},{},
						{TargetingPodDir, 1,{XY_Scaled(0.0,-0.20/1.8)},1},
						{TargetingPodDir, 1,{XY_Scaled(0.0,-0.05/1.8)},1},{}
					};
				};
				class Dot
				{
					type = "line";
					points[] =
					{
						{TargetingPodDir,{ 0.00,	 0.0035},1},
						{TargetingPodDir,{ 0.0035,	-0.00},1},
						{TargetingPodDir,{ 0.00,	-0.0035},1},
						{TargetingPodDir,{-0.0035,	-0.00},1},
						{TargetingPodDir,{ 0.00,	 0.0035},1}
					};
				};
				class Ring
				{
					type = "line";
					points[] =
					{
						//CIRCLE_BIG(ImpactPoint,0.2),{},
						POINT_MARK(TargetingPodDir,0.2,110),
						POINT_MARK(TargetingPodDir,0.2,105),
						POINT_MARK(TargetingPodDir,0.2,100),
						POINT_MARK(TargetingPodDir,0.2,95),
						POINT_MARK(TargetingPodDir,0.2,90),
						POINT_MARK(TargetingPodDir,0.2,85),
						POINT_MARK(TargetingPodDir,0.2,80),
						POINT_MARK(TargetingPodDir,0.2,75),
						POINT_MARK(TargetingPodDir,0.2,70),
						POINT_MARK(TargetingPodDir,0.2,65),
						POINT_MARK(TargetingPodDir,0.2,60),
						POINT_MARK(TargetingPodDir,0.2,55),
						POINT_MARK(TargetingPodDir,0.2,50),
						POINT_MARK(TargetingPodDir,0.2,45),
						POINT_MARK(TargetingPodDir,0.2,40),
						POINT_MARK(TargetingPodDir,0.2,35),
						POINT_MARK(TargetingPodDir,0.2,30),
						POINT_MARK(TargetingPodDir,0.2,25),
						POINT_MARK(TargetingPodDir,0.2,20),
						POINT_MARK(TargetingPodDir,0.2,15),
						POINT_MARK(TargetingPodDir,0.2,10),
						POINT_MARK(TargetingPodDir,0.2,05),
						POINT_MARK(TargetingPodDir,0.2,00),
						{},
						#define MARK_SMALL 0.19
						#define MARK_BIG 0.18
						CIRCLE_MARK(TargetingPodDir,0.2,MARK_BIG,110),{},
						CIRCLE_MARK(TargetingPodDir,0.2,MARK_SMALL,100),{},
						CIRCLE_MARK(TargetingPodDir,0.2,MARK_BIG,90),{},
						CIRCLE_MARK(TargetingPodDir,0.2,MARK_SMALL,80),{},
						CIRCLE_MARK(TargetingPodDir,0.2,MARK_SMALL,70),{},
						CIRCLE_MARK(TargetingPodDir,0.2,MARK_BIG,60),{},
						CIRCLE_MARK(TargetingPodDir,0.2,MARK_SMALL,50),{},
						CIRCLE_MARK(TargetingPodDir,0.2,MARK_SMALL,40),{},
						CIRCLE_MARK(TargetingPodDir,0.2,MARK_BIG,30),{},
						CIRCLE_MARK(TargetingPodDir,0.2,MARK_SMALL,20),{},
						CIRCLE_MARK(TargetingPodDir,0.2,MARK_SMALL,10),{},
						CIRCLE_MARK(TargetingPodDir,0.2,MARK_BIG,00),{}
					};
				};
				class Triangle
				{
					type = "line";
					width = 9;
					points[] =
					{
						{TargetingPodDir,1,{HorizonBankReverted, 0.00,	__EVAL(0.015+0.177)},1},
						{TargetingPodDir,1,{HorizonBankReverted, 0.01,	__EVAL(0.000+0.177)},1},
						{TargetingPodDir,1,{HorizonBankReverted,-0.01,	__EVAL(0.000+0.177)},1},
						{TargetingPodDir,1,{HorizonBankReverted, 0.00,	__EVAL(0.015+0.177)},1}
					};
				};
				class LaunchAutorization
				{
					type = "line";
					width = 14;
					points[] =
					{
						CIRCLE_LOCK_TIME_SMALL(TargetingPodDir,UserRot,0.205)
					};
				};
				class LaunchAutorizationBig
				{
					type = "line";
					width = 24;
					points[] =
					{
						CIRCLE_LOCK_TIME_BIG(TargetingPodDir,UserRot,0.215)
					};
				};
			};
			class TargetingPodTarget: ImpactPoint
			{
				condition = "(atmissile)*(pilotcameralock>=0)*laseron";
				class Cros
				{
					type = "line";
					points[] =
					{
						{TargetingPodTarget, 1,{XY_Scaled( 0.20/1.8,0.0)},1},
						{TargetingPodTarget, 1,{XY_Scaled( 0.05/1.8,0.0)},1},{},
						{TargetingPodTarget, 1,{XY_Scaled(-0.20/1.8,0.0)},1},
						{TargetingPodTarget, 1,{XY_Scaled(-0.05/1.8,0.0)},1},{},

						{TargetingPodTarget, 1,{XY_Scaled(0.0, 0.20/1.8)},1},
						{TargetingPodTarget, 1,{XY_Scaled(0.0, 0.05/1.8)},1},{},
						{TargetingPodTarget, 1,{XY_Scaled(0.0,-0.20/1.8)},1},
						{TargetingPodTarget, 1,{XY_Scaled(0.0,-0.05/1.8)},1},{}
					};
				};
				class Dot
				{
					type = "line";
					points[] =
					{
						{TargetingPodTarget,{ 0.00,	 0.0035},1},
						{TargetingPodTarget,{ 0.0035,	-0.00},1},
						{TargetingPodTarget,{ 0.00,	-0.0035},1},
						{TargetingPodTarget,{-0.0035,	-0.00},1},
						{TargetingPodTarget,{ 0.00,	 0.0035},1}
					};
				};
				class Ring
				{
					type = "line";
					points[] =
					{
						//CIRCLE_BIG(ImpactPoint,0.2),{},
						POINT_MARK(TargetingPodTarget,0.2,110),
						POINT_MARK(TargetingPodTarget,0.2,105),
						POINT_MARK(TargetingPodTarget,0.2,100),
						POINT_MARK(TargetingPodTarget,0.2,95),
						POINT_MARK(TargetingPodTarget,0.2,90),
						POINT_MARK(TargetingPodTarget,0.2,85),
						POINT_MARK(TargetingPodTarget,0.2,80),
						POINT_MARK(TargetingPodTarget,0.2,75),
						POINT_MARK(TargetingPodTarget,0.2,70),
						POINT_MARK(TargetingPodTarget,0.2,65),
						POINT_MARK(TargetingPodTarget,0.2,60),
						POINT_MARK(TargetingPodTarget,0.2,55),
						POINT_MARK(TargetingPodTarget,0.2,50),
						POINT_MARK(TargetingPodTarget,0.2,45),
						POINT_MARK(TargetingPodTarget,0.2,40),
						POINT_MARK(TargetingPodTarget,0.2,35),
						POINT_MARK(TargetingPodTarget,0.2,30),
						POINT_MARK(TargetingPodTarget,0.2,25),
						POINT_MARK(TargetingPodTarget,0.2,20),
						POINT_MARK(TargetingPodTarget,0.2,15),
						POINT_MARK(TargetingPodTarget,0.2,10),
						POINT_MARK(TargetingPodTarget,0.2,05),
						POINT_MARK(TargetingPodTarget,0.2,00),
						{},
						#define MARK_SMALL 0.19
						#define MARK_BIG 0.18
						CIRCLE_MARK(TargetingPodTarget,0.2,MARK_BIG,110),{},
						CIRCLE_MARK(TargetingPodTarget,0.2,MARK_SMALL,100),{},
						CIRCLE_MARK(TargetingPodTarget,0.2,MARK_BIG,90),{},
						CIRCLE_MARK(TargetingPodTarget,0.2,MARK_SMALL,80),{},
						CIRCLE_MARK(TargetingPodTarget,0.2,MARK_SMALL,70),{},
						CIRCLE_MARK(TargetingPodTarget,0.2,MARK_BIG,60),{},
						CIRCLE_MARK(TargetingPodTarget,0.2,MARK_SMALL,50),{},
						CIRCLE_MARK(TargetingPodTarget,0.2,MARK_SMALL,40),{},
						CIRCLE_MARK(TargetingPodTarget,0.2,MARK_BIG,30),{},
						CIRCLE_MARK(TargetingPodTarget,0.2,MARK_SMALL,20),{},
						CIRCLE_MARK(TargetingPodTarget,0.2,MARK_SMALL,10),{},
						CIRCLE_MARK(TargetingPodTarget,0.2,MARK_BIG,00),{}
					};
				};
				class Triangle
				{
					type = "line";
					width = 9;
					points[] =
					{
						{TargetingPodTarget,1,{HorizonBankReverted, 0.00,	__EVAL(0.015+0.177)},1},
						{TargetingPodTarget,1,{HorizonBankReverted, 0.01,	__EVAL(0.000+0.177)},1},
						{TargetingPodTarget,1,{HorizonBankReverted,-0.01,	__EVAL(0.000+0.177)},1},
						{TargetingPodTarget,1,{HorizonBankReverted, 0.00,	__EVAL(0.015+0.177)},1}
					};
				};
				class LaunchAutorization
				{
					type = "line";
					width = 14;
					points[] =
					{
						CIRCLE_LOCK_TIME_SMALL(TargetingPodTarget,UserRot,0.205)
					};
				};
				class LaunchAutorizationBig
				{
					type = "line";
					width = 24;
					points[] =
					{
						CIRCLE_LOCK_TIME_BIG(TargetingPodTarget,UserRot,0.215)
					};
				};
			};
			class StaticReticle
			{
				condition = "user5";

				class Shape
				{
					type		= polygon;
					texture		= "rhsafrf\addons\rhs_c_a2port_air\Su25\rhs_su25_reticle_static_ca.paa";
					points[]	=
					{
						{
							{{__EVAL(-0.45+0.505),__EVAL(-0.35+0.495)},1},
							{{__EVAL(+0.45+0.505),__EVAL(-0.35+0.495)},1},
							{{__EVAL(+0.45+0.505),__EVAL(+0.35+0.495)},1},
							{{__EVAL(-0.45+0.505),__EVAL(+0.35+0.495)},1}
						}
					};
				};
			};
		};
	};
	#include "cfgMFD_SU25.hpp" 
};


#undef PosX0Center
#undef PosY0Center
#undef PosYCenterHorizont
#undef SizeX10deg
#undef SizeY10deg
#undef PI
#undef XtoYscale
#undef XY_Scaled