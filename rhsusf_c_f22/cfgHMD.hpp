
#define PI 3.14159265359
#define ANGLEOFINDICENCE 0.0523599

#define PosX0Center 0.50 // 502
#define PosY0Center 0.50 // 49
#define PosYCenterHorizont 0.50
#define PosY0CenterAdjust 0.23

#define SizeX10deg (0.25*0.415)
#define SizeY10deg (0.50*0.415)
#define SizeX10degHorizon 0.324
#define SizeY10degHorizon 0.570
			class HMD_F22
			{
				enableParallax = 0;
				helmetMountedDisplay = 1;
				#define HMD_SIZE 0.09
				helmetPosition[] = {-HMD_SIZE, __EVAL(HMD_SIZE/2), 0.1};
				helmetRight[] = {HMD_SIZE*2, 0.0, 0.0};
				helmetDown[] = {0.0, -HMD_SIZE, 0.0};

				topLeft = "HUD LH";
				topRight = "HUD PH";
				bottomLeft = "HUD LD";
				borderLeft = 0;
				borderRight = 0;
				borderTop = 0;
				borderBottom = 0;
				color[] = {0.082,0.408,0.039,1};

				class Bones
				{
					class PlaneW
					{
						type			= fixed;
						pos[]			= {PosX0Center,	PosY0Center};
						pos10[]			= {__EVAL(PosX0Center + SizeX10deg),	__EVAL(PosY0Center + SizeY10deg)};
					};
					class Velocity
					{
						type			= vector;
						source			= velocityToView;
						pos0[]			= {PosX0Center, PosY0Center};
						pos10[]			= {__EVAL(PosX0Center + SizeX10deg), __EVAL(PosY0Center + SizeY10deg)};
					};
					class PlaneOrientation
					{
						type			= vector;
						source			= forward;
						pos[]			= {PosX0Center, PosYCenterHorizont};
						pos0[]			= {PosX0Center,	PosY0Center};
						pos10[]			= {__EVAL(PosX0Center + SizeX10deg),	__EVAL(PosY0Center + SizeY10deg)};
					};
					class WeaponAim
					{
						type			= vector;
						source			= weaponToView;
						pos0[]			= {PosX0Center,	PosY0Center};
						pos10[]			= {__EVAL(PosX0Center + SizeX10deg),	__EVAL(PosY0Center + SizeY10deg)};
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

					class Target
					{
						type			= vector;
						source			= targetToView;
						pos0[]			= {__EVAL(PosX0Center),__EVAL(PosY0Center)};
						pos10[]			= {__EVAL(PosX0Center+SizeX10deg),__EVAL(PosY0Center+SizeY10deg)};
					};
					class TargetingPodDir
					{
						source			= pilotcameratoview;
						type			= vector;
						pos0[]			= {__EVAL(PosX0Center),__EVAL(PosY0Center)};
						pos10[]			= {__EVAL(PosX0Center+SizeX10deg),__EVAL(PosY0Center+SizeY10deg)};
					};
					class TargetingPodTarget
					{
						source	= pilotcameratargettoview;
						type	= vector;
						pos0[]	= {__EVAL(PosX0Center),__EVAL(PosY0Center)};
						pos10[]	= {__EVAL(PosX0Center+SizeX10deg),__EVAL(PosY0Center+SizeY10deg)};
					};
					class ImpactPoint
					{
						type			= vector;
						source			= ImpactPointToView;
						pos0[]			= {0.5, __EVAL(PosY0Center)};
						pos10[]			= {__EVAL(0.5 + SizeX10deg), __EVAL(PosY0Center + SizeY10deg)};
					};
					class ImpactPointRelative
					{
						type			= vector;
						source			= impactpointtoviewweaponRelative;
						pos0[]			= {0.5, __EVAL(PosY0Center)};
						pos10[]			= {__EVAL(0.5 + SizeX10deg), __EVAL(PosY0Center + SizeY10deg)};
					};
					class NormalizeBombCircle
					{
						type			= normalizedorsmaller;
						limit			= 0.08;
						aspectRatio		= __EVAL(1 / XtoYscale);
					};
					class Limit0109
					{
						type			= limit;
						limits[]		= {0.1,0.1,0.9,0.9};
					};
					class LimitWaypoint
					{
						type			= limit;
						limits[]		= {0.2,0.1,0.8,0.1};
					};
					class WPPoint
					{
						type			= vector;
						source			= WPPoint;
						pos0[]			= {0.5, __EVAL(PosY0Center)};
						pos10[]			= {__EVAL(0.5 + SizeX10deg), __EVAL(PosY0Center + SizeY10deg)};
					};
					class WPPointToView: WPPoint
					{
						source			= WPPointToView;
					};
					/* ~~~~ AIRPORT OUTLINES ~~~~ */
					class Airport1
					{
						type			= vector;
						source			= airportCorner1ToView;
						pos0[]			= {0.5, __EVAL(PosY0Center)};
						pos10[]			= {__EVAL(0.5 + SizeX10deg), __EVAL(PosY0Center + SizeY10deg)};
					};
					class Airport2: Airport1{source	= airportCorner2ToView;};
					class Airport3: Airport1{source	= airportCorner3ToView;};
					class Airport4: Airport1{source	= airportCorner4ToView;};
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
						min			= -rad(30);
						max			= rad(30);
						minAngle	= 180.25-30;
						maxAngle	= 180.75+30;
						aspectRatio	= 1;
					};

					class Level0 
					{
						pos0[]	= {PosX0Center, PosYCenterHorizont};
						pos10[]	= {__EVAL(PosX0Center + SizeX10degHorizon), __EVAL(PosYCenterHorizont + SizeY10degHorizon)};
						type	= horizontoview;
						angle	= 0;
					};

					class LevelP5 : Level0 { angle = 5;};
					class LevelM5 : Level0 {angle = -5;};
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
				};

				class Draw
				{
					width = 1.0;
					alpha				= user3;
					color[]				= {user0, user1, user2};
					//condition = "on";
					condition = "(1 - (cameraHeadingDiffY<=-19) + (abs(cameraHeadingDiffX)>=24))*on";

					//MINIPLANE
					class PlaneW
					{
						clipTL[] = {0.0, 1.0};
						clipBR[] = {1.0, 0.0};
						type = "line";
						width = 3.0;
						points[] =
						{
							//boresight indicator
							/*{PlaneOrientation,{		-0.02,	0},1},
							{PlaneOrientation,{		 0.02,	0},1},{},
							{PlaneOrientation,{		-0,		__EVAL(-0.02/XtoYscale)},1},
							{PlaneOrientation,{		 0,  	__EVAL( 0.02/XtoYscale)},1},{},*/
							{PlaneOrientation, {-0.04, 0}, 1},
							{PlaneOrientation, {-0.015, 0}, 1},
							{PlaneOrientation, {-0.0075, 0.015}, 1},
							{PlaneOrientation, {0.0, 0}, 1},
							{PlaneOrientation, {0.0075, 0.015}, 1},
							{PlaneOrientation, {0.015, 0}, 1},
							{PlaneOrientation, {0.04, 0}, 1}
						};
					};

					//VELOCITY INDICATOR
					class PlaneMovementCrosshair
					{
						type = "line";
						width = 3.0;
						points[] = {
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

					/* ~~~~ WEAPON-DEPENDANT CROSSHAIRS ~~~~ */
					// Group to condition MachineGunCrosshair by machine gun being the selected weapon
					class MachineGunCrosshairGroup
					{
						type			= group;
						condition		= "-2+(mgun+rocket)*ImpactDistance";

						class MachineGunCrosshair
						{
							type			= line;
							width			= 3.0;
							points[]		=
							{
								// main cross
								{ImpactPointRelative,{ 0.0, __EVAL(-0.09/XtoYscale)}, 1},
								{ImpactPointRelative,{ 0.0, __EVAL(-0.08/XtoYscale)}, 1},
								{},
								{ImpactPointRelative,{ 0.0,  __EVAL(0.09/XtoYscale)}, 1},
								{ImpactPointRelative,{ 0.0,  __EVAL(0.08/XtoYscale)}, 1},
								{},
								{ImpactPointRelative,{-0.09,  0.0}, 1},
								{ImpactPointRelative,{-0.08,  0.0}, 1},
								{},
								{ImpactPointRelative,{ 0.09,  0.0}, 1},
								{ImpactPointRelative,{ 0.08,  0.0}, 1},
								{},
								//middle dot
								{ImpactPointRelative,{ 0.0, __EVAL(-0.002/XtoYscale)}, 1},
								{ImpactPointRelative,{ 0.0,  __EVAL(0.002/XtoYscale)}, 1},
								{},
								{ImpactPointRelative,{-0.002, 0.0}, 1},
								{ImpactPointRelative,{ 0.002, 0.0}, 1},
								{},
								// boresight indicator
								//{WeaponAim,{		-0.01,	0},1},
								//{WeaponAim,{		 0.01,	0},1},{},
								//{WeaponAim,{		-0,		__EVAL(-0.01/XtoYscale)},1},
								//{WeaponAim,{		 0,  	__EVAL( 0.01/XtoYscale)},1},{},

							};
						};
						class Circle
						{
							type			= line;
							width			= 6.0;
							points[]		=
							{
								CIRCLE_LOCK_TIME(ImpactPointRelative, MissileFlightTimeRot, 0.08)
							};
						};
						class Circle_Min_Range
						{
							type			= line;
							width			= 3.0;
							points[]		=
							{
								CIRCLE_BIG(ImpactPointRelative, 0.08)
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
							pos[]			= {ImpactPointRelative, {-0.002,  0.11}, 1};
							right[]			= {ImpactPointRelative, { 0.045,  0.11}, 1};
							down[]			= {ImpactPointRelative, {-0.002,  0.15}, 1};
						};
					};

					// Group to condition AAMissileCrosshair by AA missile being the selected weapon
					class AAMissileCrosshairGroup
					{
						type			= group;
						condition		= AAmissile;

						// AA missile crosshair
						class AAMissileCrosshair
						{
							type			= line;
							width			= 4.0;
							points[]		=
							{
								CIRCLE_BIG(PlaneOrientation,0.25)
								/*,{},
								POINT(Target,0.0,-0.07),
								POINT(Target,+0.07,0.0),
								POINT(Target,0.0,+0.07),
								POINT(Target,-0.07,0.0),
								POINT(Target,0.0,-0.07)*/
							};
						};
						#define LARSize 0.16
						#define LARXPos 0.19
						#define LARYPos 0.55
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

					// Group to condition ATMissileCrosshair by AT missile being the selected weapon
					class ATMissileCrosshairGroup
					{
						condition		= ATmissile;
						type			= group;

						class ATMissileCrosshair
						{
							type			= line;
							width			= 4.0;
							points[]		=
							{
								{WeaponAim,{-0.15, -0.15}, 1},
								{WeaponAim,{-0.15, __EVAL(-0.15 + 0.02)}, 1},
								{},
								{WeaponAim,{-0.15, 0.15}, 1},
								{WeaponAim,{-0.15, __EVAL(0.15 - 0.02)}, 1},
								{},
								{WeaponAim,{0.15, -0.15}, 1},
								{WeaponAim,{0.15, __EVAL(-0.15 + 0.02)}, 1},
								{},
								{WeaponAim,{0.15, 0.15}, 1},
								{WeaponAim,{0.15, __EVAL(0.15 - 0.02)}, 1},
								{},
								{WeaponAim,{-0.15, -0.15}, 1},
								{WeaponAim,{__EVAL(-0.15 + 0.02), -0.15}, 1},
								{},
								{WeaponAim,{-0.15, 0.15}, 1},
								{WeaponAim,{__EVAL(-0.15 + 0.02), 0.15}, 1},
								{},
								{WeaponAim,{0.15, -0.15}, 1},
								{WeaponAim,{__EVAL(0.15 - 0.02), -0.15}, 1},
								{},
								{WeaponAim,{0.15, 0.15}, 1},
								{WeaponAim,{__EVAL(0.15 - 0.02), 0.15}, 1}
							};
						};
					};

				// Group to condition RocketCrosshair by rocket being the selected weapon
					class RocketCrosshairGroup
					{
						type			= group;
						condition		= Rocket;

						class MachineGunCrosshair
						{
							type			= line;
							width			= 3.0;
							points[]		=
							{
								// main cross
								{ImpactPoint,{ 0.0, __EVAL(-0.04/XtoYscale)}, 1},
								{ImpactPoint,{ 0.0, __EVAL(-0.02/XtoYscale)}, 1},
								{},
								{ImpactPoint,{ 0.0,  __EVAL(0.04/XtoYscale)}, 1},
								{ImpactPoint,{ 0.0,  __EVAL(0.02/XtoYscale)}, 1},
								{},
								{ImpactPoint,{-0.04,  0.0}, 1},
								{ImpactPoint,{-0.02,  0.0}, 1},
								{},
								{ImpactPoint,{ 0.04,  0.0}, 1},
								{ImpactPoint,{ 0.02,  0.0}, 1},
								{},
								//top line
								{ImpactPoint,{  0.01, __EVAL(-0.04/XtoYscale)}, 1},
								{ImpactPoint,{ -0.01, __EVAL(-0.04/XtoYscale)}, 1},
								{},
								//middle dot
								{ImpactPoint,{ 0.0, __EVAL(-0.002/XtoYscale)}, 1},
								{ImpactPoint,{ 0.0,  __EVAL(0.002/XtoYscale)}, 1},
								{},
								{ImpactPoint,{-0.002, 0.0}, 1},
								{ImpactPoint,{ 0.002, 0.0}, 1},
								{}

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
							pos[]			= {ImpactPoint, {-0.002,  0.07}, 1};
							right[]			= {ImpactPoint, { 0.045,  0.07}, 1};
							down[]			= {ImpactPoint, {-0.002,  0.11}, 1};
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
					class WeaponsText
					{
						condition = "1- mgun";
						// Current Weapon
						class WeaponsText
						{
							type			= text;
							source			= weapon;
							sourceScale		= 1;

							align			= right;
							scale			= 1;
							pos[]			= {{__EVAL(0.000+0.032), __EVAL(0.000+0.840)} ,1};
							right[]			= {{__EVAL(0.055+0.032), __EVAL(0.000+0.840)}, 1};
							down[]			= {{__EVAL(0.000+0.032), __EVAL(0.045+0.840)}, 1};
						};
					};
					class MGunText
					{
						condition		= mgun;
						// Current Weapon
						class WeaponsText
						{
							type			= text;
							source			= static;
							text			= "GUN";
							sourceScale		= 1;

							align			= right;
							scale			= 1;
							pos[]			= {{__EVAL(0.000+0.032), __EVAL(0.000+0.840)} ,1};
							right[]			= {{__EVAL(0.055+0.032), __EVAL(0.000+0.840)}, 1};
							down[]			= {{__EVAL(0.000+0.032), __EVAL(0.045+0.840)}, 1};
						};
					};
					// Current Weapon ammo count
					class AmmoText
					{
						type			= text;
						source			= ammo;
						sourceScale		= 1;

						align			= right;
						scale			= 1;
						pos[]			= {{__EVAL(0.000+0.032), __EVAL(0.000+0.880)} ,1};
						right[]			= {{__EVAL(0.055+0.032), __EVAL(0.000+0.880)}, 1};
						down[]			= {{__EVAL(0.000+0.032), __EVAL(0.045+0.880)}, 1};
					};
					/* ~~~~ Flaps Info ~~~~ */
					class Flaps
					{
						condition		= "flaps";
						class FlapsText
						{
							type			= text;
							source			= static;
							text			= "FLAPS";

							align			= left;
							scale			= 1;
							pos[]			= {{__EVAL(0.000+0.932), __EVAL(0.000+0.920)} ,1};
							right[]			= {{__EVAL(0.055+0.932), __EVAL(0.000+0.920)}, 1};
							down[]			= {{__EVAL(0.000+0.932), __EVAL(0.045+0.920)}, 1};
						};
					};

					/* ~~~~ ILS Info ~~~~ */
					#define SCALE 0.3
					class ILS
					{
						condition		= ils;

						// "GEAR" on gear indicator
						class GearText
						{
							type			= text;
							source			= static;
							text			= "GEAR";

							align			= left;
							scale			= 1;
							pos[]			= {{__EVAL(0.000+0.932), __EVAL(0.000+0.840)} ,1};
							right[]			= {{__EVAL(0.055+0.932), __EVAL(0.000+0.840)}, 1};
							down[]			= {{__EVAL(0.000+0.932), __EVAL(0.045+0.840)}, 1};
						};
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
					class TargetLocking
					{
						condition		= "missilelocking";
						blinkingPattern[]	= {0.2, 0.2};
						blinkingStartsOn	= true;
						class shape
						{
							type=line;
							width = 4;
							points[]={
								{Target, 1, Limit0109, 1, {XY_Scaled(0.0, -0.03)}, 1},
								{Target, 1, Limit0109, 1, {XY_Scaled(0.03, 0.0)}, 1},
								{Target, 1, Limit0109, 1, {XY_Scaled(0.0, 0.03)}, 1},
								{Target, 1, Limit0109, 1, {XY_Scaled(-0.03, 0.0)}, 1},
								{Target, 1, Limit0109, 1, {XY_Scaled(0.0, -0.03)}, 1}
							};
						};
					};
					class TargetLocked
					{
						condition = "missilelocked";
						class shape
						{
							type=line;
							width = 4;
							points[]={
								{Target, 1, Limit0109, 1, {XY_Scaled(0.0, -0.03)}, 1},
								{Target, 1, Limit0109, 1, {XY_Scaled(0.03, 0.0)}, 1},
								{Target, 1, Limit0109, 1, {XY_Scaled(0.0, 0.03)}, 1},
								{Target, 1, Limit0109, 1, {XY_Scaled(-0.03, 0.0)}, 1},
								{Target, 1, Limit0109, 1, {XY_Scaled(0.0, -0.03)}, 1}
							};
						};
					};
					// TGP direction pos
					class TargetingPodGroup
					{
						condition = "1-pilotcameralock";
						class TargetingPodDir
						{
							type			= line;
							width			= 3.0;
							points[]		=
							{
								CIRCLE_SPACE(TargetingPodDir, 0.015),{}
							};
						};
					};
					class TargetingPodGroupOn
					{
						condition = "pilotcameralock";
						class TargetingPodDir
						{
							type			= line;
							width			= 3.0;
							points[]		=
							{
								CIRCLE_SPACE2B(TargetingPodTarget,Limit0109, 0.015),{}
							};
						};
					};

					//CENTER LINES
					class MainCenterLine1
					{
						type = "line";
						width = 3.0;
						points[] = {{"PlaneW", {-0.49, 0 + 0.025}, 1}, {"PlaneW", {-0.49, 0}, 1},{"PlaneW", {-0.45, 0}, 1}};
					};

					class MainCenterLine2
					{
						type = "line";
						width = 3.0;
						points[] = {{"PlaneW", {-0.33, 0}, 1}, {"PlaneW", {-0.25, 0},1}};
					};

					class MainCenterLine3
					{
						type = "line";
						width = 3.0;
						points[] = {{"PlaneW", {+0.49, 0 + 0.025}, 1}, {"PlaneW", {+0.49, 0}, 1},{"PlaneW", {+0.25, 0}, 1}};
					};

					//SPPED INDICATOR BOX
					class SpeedIndicatorBox
					{
						type = "line";
						width = 3.0;
						points[] = {{"PlaneW", {-0.49, -0.25}, 1}, {"PlaneW", {-0.49, -0.20}, 1},{"PlaneW", {-0.3, -0.20}, 1},{"PlaneW", {-0.3, -0.25}, 1},{"PlaneW", {-0.49, -0.25}, 1}};
					};

					class SpeedNumber
					{
						type		= "text";
						source		= "speed";
						sourceScale	= 3.6;
						align		= "center";
						scale		= 1;
						pos[]		= {"PlaneW", {-0.4, -0.25}, 1};
						right[]		= {"PlaneW", {-0.3, -0.25}, 1};
						down[]		= {"PlaneW", {-0.4, -0.20}, 1};
					};

					//ALT INDICATOR BOX

					class AltitudeIndicatorBox
					{
						type = "line";
						width = 3.0;
						points[] = {{"PlaneW", {+0.49, -0.25}, 1}, {"PlaneW", {+0.49, -0.20}, 1},{"PlaneW", {+0.3, -0.20}, 1},{"PlaneW", {+0.3, -0.25}, 1},{"PlaneW", {+0.49, -0.25}, 1}};
					};

					class AltitudeNumberASL
					{
						type		= "text";
						source		= "altitudeASL";
						sourceScale	= 1;
						align		= "center";
						scale		= 1;
						pos[]		= {"PlaneW", {+0.4, -0.25}, 1};
						right[]		= {"PlaneW", {+0.48, -0.25}, 1};
						down[]		= {"PlaneW", {+0.4, -0.20}, 1};
					};

					class AltitudeRadarText
					{
						type		= "text";
						source		= "static";
						text		= R;
						align		= "left";
						scale		= 1;
						sourceScale	= 1;
						pos[]		= {"PlaneW", {+0.32, -0.192}, 1};
						right[]		= {"PlaneW", {+0.32 + 0.04, -0.192 }, 1};
						down[]		= {"PlaneW", {+0.32, -0.192 + 0.041}, 1};

					};

					class AltitudeNumberAGL
					{
						type		= "text";
						source		="altitudeAGL";
						sourceScale	= 1;
						sourceLength= 4;
						sourceOffset= -2;
						align		= "left";
						scale		= 1;
						pos[]		= {"PlaneW", {__EVAL(+0.33+0.15), -0.19}, 1};
						right[]		= {"PlaneW", {__EVAL(+0.39+0.15), -0.19}, 1};
						down[]		= {"PlaneW", {__EVAL(+0.33+0.15), -0.15}, 1};
					};

					//PITCH, ROLL, CLIMB INDICATOR DISPLAYS
					class PitchNumber
					{
						type		= "text";
						source		= "horizonDive";
						sourceScale	= 57.2958;
						align		= "right";
						scale		= 1;
						pos[]		= {"PlaneW", {-0.39, -0.076}, 1};
						right[]		= {"PlaneW", {-0.39 + 0.04, -0.076}, 1};
						down[]		= {"PlaneW", {-0.39, -0.076 + 0.05}, 1};
					};

					class PitchText
					{
						type	= "text";
						source	= "static";
						text	= P:;
						align	= "left";
						scale	= 1;
						pos[]	= {"PlaneW", {-0.41, -0.076}, 1};
						right[]	= {"PlaneW", {-0.41 + 0.04, -0.076}, 1};
						down[]	= {"PlaneW", {-0.41, -0.076 + 0.05}, 1};
					};

					class RollNumber
					{
						type		= "text";
						source		= "horizonBank";
						sourceScale	= 57.2958;
						align		= "right";
						scale		= 1;
						pos[]		= {"PlaneW", {-0.39, -0.025}, 1};
						right[]		= {"PlaneW", {-0.39 + 0.04, -0.025}, 1};
						down[]		= {"PlaneW", {-0.39, -0.025 + 0.05}, 1};
					};

					class RollText
					{
						type	= "text";
						source	= "static";
						text	= R:;
						align	= "left";
						scale	= 1;
						pos[]	= {"PlaneW", {-0.41, -0.025}, 1};
						right[]	= {"PlaneW", {-0.41 + 0.04, -0.025}, 1};
						down[]	= {"PlaneW", {-0.41, -0.025 + 0.05}, 1};
					};

					class ClimbNumber
					{
						type		= "text";
						source		= "vspeed";
						sourceScale	= 1;
						align		= "right";
						scale		= 1;
						pos[]		= {"PlaneW", {-0.39, +0.026}, 1};
						right[]		= {"PlaneW", {-0.39 + 0.04, +0.026}, 1};
						down[]		= {"PlaneW", {-0.39, +0.026 + 0.05}, 1};
					};

					class ClimbText
					{
						type	= "text";
						source	= "static";
						text	= C:;
						align	= "left";
						scale	= 1;
						pos[]	= {"PlaneW", {-0.41, +0.026}, 1};
						right[]	= {"PlaneW", {-0.41 + 0.04, +0.026}, 1};
						down[]	= {"PlaneW", {-0.41, +0.026 + 0.05}, 1};
					};

					//HEADING DISPLAY
					// compass to WP
					class HeadingArrow
					{
						type = "line";
						width = 3.0;
						points[] =
						{
							{WPPoint, 1, LimitWaypoint, 1, {__EVAL(0 - 0.02	), __EVAL(0.012 + 0.03)}, 1},
							{WPPoint, 1, LimitWaypoint, 1, {__EVAL(0			), __EVAL(0.012 + 0.01)}, 1},
							{WPPoint, 1, LimitWaypoint, 1, {__EVAL(0 + 0.02	), __EVAL(0.012 + 0.03)}, 1}
						};
					};
					class WP
					{
						condition		= "wpvalid";
						class WPdist
						{
							type			= text;
							source			= wpdist;
							sourceScale		= 0.001;
							sourcePrecision = 1;

							align			= right;
							scale			= 1;
							pos[]			= {{XY_Scaled(0.885 + 0.00 + 0.039, 0.540 - 0.019 - 0.0085)}, 1};
							down[]			= {{XY_Scaled(0.885 + 0.00 + 0.039, 0.540 + 0.019 - 0.0085)}, 1};
							right[]			= {{XY_Scaled(0.885 + 0.04 + 0.039, 0.540 - 0.019 - 0.0085)}, 1};
						};
						class WPIndex
						{
							type			= text;
							source			= wpIndex;
							sourceScale		= 1;
							sourceLength	= 2;

							align			= right;
							scale			= 1;
							pos[]			= {{XY_Scaled(0.875 + 0.00 + 0.002, 0.540 - 0.019 - 0.0085)}, 1};
							right[]			= {{XY_Scaled(0.875 + 0.04 + 0.002, 0.540 - 0.019 - 0.0085)}, 1};
							down[]			= {{XY_Scaled(0.875 + 0.00 + 0.002, 0.540 + 0.019 - 0.0085)}, 1};
						};
						HUD_TEXT_STATIC(0.825+0.01,			0.540 - 0.030 - 0.0035		,0.04,	0.035,right,"WP",WPstatic)
						HUD_TEXT_STATIC(0.825+0.09,			0.540 - 0.030 - 0.0035		,0.04,	0.035,left,":",WPKM)
					};
					class HeadingRotation
					{
						condition = "abs(cameraDir-heading)*( (abs(heading-cameraDir))<=355)-5";
						class HeadingHeadNumber
						{
							type			= text;
							source			= cameraDir;
							sourceScale		= 1;

							align			= center;
							scale			= 1;
							pos[]			= {{0.80-0.302, 0.082+0.065}, 1};
							right[]			= {{0.83-0.302, 0.082+0.065}, 1};
							down[]			= {{0.80-0.302, 0.113+0.065}, 1};
						};
						class HeadingArrow
						{
							type			= line;
							width			= 3.0;
							points[]		=
							{
								#define BSIZE 0.012
								{ { __EVAL(0.50 - BSIZE)			, __EVAL(0.181 - 0.04)	},1 },
								{ { __EVAL(0.50 + BSIZE)			, __EVAL(0.181 - 0.04)	},1 },
								{ { __EVAL(0.50 + BSIZE + 0.03)		, __EVAL(0.181 - 0.04/2)	},1 },
								{ { __EVAL(0.50 + BSIZE)			, __EVAL(0.181 		)	},1 },
								{ { __EVAL(0.50 - BSIZE)			, __EVAL(0.181 		)	},1 },
								{ { __EVAL(0.50 - BSIZE - 0.03)		, __EVAL(0.181 - 0.04/2)	},1 },
								{ { __EVAL(0.50 - BSIZE)			, __EVAL(0.181 - 0.04)	},1 }, {}
							};
						};
					};

					class HeadingScale
					{
						type			= scale;
						NeverEatSeaWeed	= 1;
						horizontal		= 1;
						source			= heading;
						sourceScale		= 1.0;
						width			= 3.0;
						top				= 0.30;
						center			= 0.5;
						bottom			= 0.70;
						lineXleft		= __EVAL(0.085+0.02);
						lineYright		= __EVAL(0.095+0.02);
						lineXleftMajor	= __EVAL(0.075+0.02);
						lineYrightMajor	= __EVAL(0.095+0.02);
						majorLineEach	= 5;
						numberEach		= 5;
						step			= __EVAL(18 / 9);
						stepSize		= (0.70 - 0.3) / 15;
						align			= "center";
						scale			= 1.0;
						pos[]			= {__EVAL(0.296			), __EVAL(0.093 - 0.0384)};
						right[]			= {__EVAL(0.296 + 0.037	), __EVAL(0.093 - 0.0384)};
						down[]			= {__EVAL(0.296			), __EVAL(0.093			)};
					};

					class HeadingIndicatorBox
					{
						type		= "line";
						width		= 3.0;
						points[]	=
						{
							{PlaneW, {__EVAL(-0.035), __EVAL(-0.355 - 0.1)}, 1},
							{PlaneW, {__EVAL(-0.035), __EVAL(-0.400 - 0.1)}, 1},
							{PlaneW, {__EVAL(+0.035), __EVAL(-0.400 - 0.1)}, 1},
							{PlaneW, {__EVAL(+0.035), __EVAL(-0.355 - 0.1)}, 1},
							{PlaneW, {__EVAL(-0.035), __EVAL(-0.355 - 0.1)}, 1}
						};
					};
					class HeadingIndicatorArrow
					{
						type		= polygon;
						points[]=
						{
							{
								{PlaneW, {__EVAL(-0.015), __EVAL(-0.455 - 0.0)}, 1},
								{PlaneW, {__EVAL( 0.000), __EVAL(-0.455 + 0.01)}, 1},
								{PlaneW, {__EVAL(+0.015), __EVAL(-0.455 - 0.0)}, 1},
							}
						};
					};

					class HeadingNumber
					{
						type		= text;
						source		= heading;
						sourceScale	= 1;
						align		= center;
						scale		= 1;
						pos[]		= {PlaneW, {0		, (-0.5			)}, 1};
						right[]		= {PlaneW, {+0.03	, (-0.5			)}, 1};
						down[]		= {PlaneW, {0		, (-0.5 + 0.045	)}, 1};
					};

					//HORIZON BANK INDICATOR
					class HorizonBankRot
					{
						type="line";
						width = 2.0;
						points[]=
						{
							{"HorizonBankRot",{0,0.39421001-0.109},1},
							{"HorizonBankRot",{0.0099999998,0.41673699-0.109},1},
							{"HorizonBankRot",{-0.0099999998,0.41673699-0.109},1},
							{"HorizonBankRot",{0,0.39421001-0.109},1}
						};
					};

					class HorizonBankRotLines
					{
						type = "line";
						width = 3.0;
						points[] = {
								{{0.619959,0.71298599},1},{{0.63143897,0.74420297},1},
								{},
								{{0.58291,0.73901898},1},{{0.58808702,0.76077801},1},
								{},
								{{0.54057401,0.74850398},1},{{0.54318398,0.77083802},1},
								{},
								{{0.4975,0.740421},1},{{0.4975,0.77420998},1},
								{},
								{{0.45442599,0.74850398},1},{{0.45181599,0.77083802},1},
								{},
								{{0.41209,0.73901898},1},{{0.40691301,0.76077801},1},
								{},
								{{0.37504101,0.71298599},1},{{0.363561,0.74420297},1}
							};
					};

					//HORIZONT INDICATOR LINES
					class Horizont
					{
						clipTL[] = {0.2, 0.2};
						clipBR[] = {0.8, 0.8};

						class Dimmed
						{
							class Level0
							{
								type			= line;
								width			= 3.0;
								points[]		=
								{
									{Level0, {0.75, 0.0}, 1},
									{Level0, {0.065, 0.0}, 1},
									{},
									{Level0, {-0.065, 0.0}, 1},
									{Level0, {-0.75, 0.0}, 1}
								};
							};
						};
						class HideOnTurn
						{
							condition = "5-abs(cameraDir-heading)*( (abs(heading-cameraDir))<=355)) ";
							class Limiter
							{
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
						};
						class UnhideOnTurn
						{
							condition = "abs(cameraDir-heading)*( (abs(heading-cameraDir))<=355)-5";
							class Cross
							{
								type			= line;
								width			= 3.0;
								points[]		=
								{
									// boresight indicator
									{PlaneW,{		-0.02,	0},1},
									{PlaneW,{		-0.04,	0},1},{},
									{PlaneW,{		 0.02,	0},1},
									{PlaneW,{		 0.04,	0},1},{},
									{PlaneW,{		-0,		__EVAL(-0.02/XtoYscale)},1},
									{PlaneW,{		 0,  	__EVAL(-0.04/XtoYscale)},1},{},
									{PlaneW,{		-0,		__EVAL( 0.02/XtoYscale)},1},
									{PlaneW,{		 0,  	__EVAL( 0.04/XtoYscale)},1},{}
								};
							};
						};
					};
					//RADRAR TARGET BOXES
					class RadarBoxes
					{
						type=radartoview;
						pos0[]={__EVAL(PosX0Center),__EVAL(PosY0Center)};
						pos10[]={__EVAL((PosX0Center)+(SizeX10deg)),__EVAL((PosY0Center)+(SizeY10deg))};

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
							type=line;
							width = 4;
							points[]={
								{Target, 1, Limit0109, 1, {XY_Scaled(0.02, 0.02)}, 1},
								{Target, 1, Limit0109, 1, {XY_Scaled(-0.02, 0.02)}, 1},
								{Target, 1, Limit0109, 1, {XY_Scaled(-0.02, -0.02)}, 1},
								{Target, 1, Limit0109, 1, {XY_Scaled(0.02, -0.02)}, 1},
								{Target, 1, Limit0109, 1, {XY_Scaled(0.02, 0.02)}, 1}
							};
						};
					};
				};
			};