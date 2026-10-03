
				/// adjust position inside of memory points LOD
				borderLeft				= 0;
				borderRight				= 0;
				borderTop				= 0;
				borderBottom			= 0;
				color[]					= {0.0, 1.0, 0.0, 0.1};
				font					= "rhs_digital_font_rus";
				class material
				{
					ambient[] = {10, 10, 10, 1};
					diffuse[] = {10, 10, 10, 1};
					emissive[] = {400, 200, 200, 1};
				};
#undef Factor
#define Factor 0.8

#define DEF2_HORIZONTPlus(XX) \
				class Level2P##XX##: Level00 \
				{ \
					type			= line; \
					lineType 		= 2;\
					points[]		= \
					{ \
						{Level0, {__EVAL( 0.280 * Factor),__EVAL( +SizeY10deg / 27 * XX)}, 1}, \
						{Level0, {__EVAL( 0.225 * Factor),__EVAL( +SizeY10deg / 27 * XX)}, 1} \
					}; \
				}; \
				class VALP2_1_##XX \
				{ \
					type			= text; \
					source			= static; \
					text			= -XX; \
					align			= center; \
					scale			= 1; \
					sourceScale		= 1; \
					pos[]			= {Level0, {__EVAL(0.000 * Factor + 0.2), __EVAL(-0.02-0.020 * Factor + SizeY10deg / 27 * XX)}, 1}; \
					right[]			= {Level0, {__EVAL(0.050 * Factor + 0.2), __EVAL(-0.02-0.020 * Factor + SizeY10deg / 27 * XX)}, 1}; \
					down[]			= {Level0, {__EVAL(0.000 * Factor + 0.2), __EVAL(-0.02+0.020 * Factor + SizeY10deg / 27 * XX)}, 1}; \
				};


#define DEF2_HORIZONTMinus(XX) \
				class Level2M##XX: Level00 \
				{ \
					type			= line; \
					lineType 		= 0;\
					points[]		= \
					{ \
						{Level0, {__EVAL( 0.280 * Factor),__EVAL( -SizeY10deg / 27 * XX)}, 1}, \
						{Level0, {__EVAL( 0.225 * Factor),__EVAL( -SizeY10deg / 27 * XX)}, 1} \
					}; \
				}; \
				class VALM2_1_##XX \
				{ \
					type			= text; \
					source			= static; \
					text			= XX; \
					align			= center; \
					scale			= 1; \
					sourceScale		= 1; \
					pos[]			= {Level0, {__EVAL(0.000 * Factor + 0.2), __EVAL(-0.02-0.020 * Factor - SizeY10deg / 27 * XX)}, 1}; \
					right[]			= {Level0, {__EVAL(0.050 * Factor + 0.2), __EVAL(-0.02-0.020 * Factor - SizeY10deg / 27 * XX)}, 1}; \
					down[]			= {Level0, {__EVAL(0.000 * Factor + 0.2), __EVAL(-0.02+0.020 * Factor - SizeY10deg / 27 * XX)}, 1}; \
				};

				class Bones
				{
					class PlaneOrientation
					{
						type			= fixed;
						refreshRate		= 0.1;
						pos[]			= {PosX0Center, PosYCenterHorizont};
					};
					class ClimbFixed
					{
						type			= fixed;
						pos[]			= {0.898, 0.70};
					};
					class ClimbRotate
					{
						type			= rotational;
						source			= vspeed;
						sourceScale		= 1.0;
						center[]		= {0.88, 0.70};
						min				= -30;
						max				= 30;
						minAngle		= -90;
						maxAngle		=  90;
						aspectRatio		= __EVAL(1 / XtoYscale);
					};


					class WeaponAim
					{
						type			= vector;
						source			= weapon;
						pos0[]			= {PosX0Center, PosY0Center};
						pos10[]			= {__EVAL(PosX0Center + SizeX10deg), __EVAL(PosY0Center + SizeY10deg)};
					};

					class Velocity
					{
						type			= vector;
						source			= velocity;
						pos0[]			= {PosX0Center, PosY0Center};
						pos10[]			= {__EVAL(PosX0Center + SizeX10deg), __EVAL(PosY0Center + SizeY10deg)};
					};

					class HorizonBankSource
					{
						type			= rotational;
						source			= HorizonBank;
						center[]		= {PosX0Center, PosY0Center};
						min				= -6.2831;
						max				= 6.2831;
						minAngle		= -360;
						maxAngle		= 360;
					};
					class HorizonBankInverted
					{
						type			= rotational;
						source			= HorizonBank;
						center[]		= {PosX0Center, PosY0Center};
						min				= -6.2831;
						max				= 6.2831;
						minAngle		= 360;
						maxAngle		= -360;
						refreshRate		= 0.1;
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

					class Level0
					{
						source			= horizonDive;
						type			= linear;
						//pos0[]			= {0.5, __EVAL(PosYCenterHorizont + 0.00)};
						//pos10[]			= {__EVAL(0.5 + SizeX10deg), __EVAL(PosYCenterHorizont + SizeY10deg + 0.00)};
						angle			= 0;
						min				= -3.4;
						max				= 3.4;
						minPos[]		= {PosX0Center,	__EVAL(PosY0Center + 4.25)};
						maxPos[]		= {PosX0Center,	__EVAL(PosY0Center - 4.25)};
						refreshRate		= 0.1;
					};
					class TerrainBone
					{
						type			= linear;
						source			= altitudeAGL;
						sourceScale		= 1.0;
						min				= 0;
						max				= 200;
						minPos[]		= {0.0, 0.666};
						maxPos[]		= {0.0, 0.400};
					};
					class ImpactPoint
					{
						type			= vector;
						source			= ImpactPoint;
						pos0[]			= {0.5, __EVAL(PosY0Center)};
						pos10[]			= {__EVAL(0.5 + SizeX10deg), __EVAL(PosY0Center + SizeY10deg)};
					};
					class ImpactPointRelative
					{
						type			= vector;
						source			= impactpointweaponRelative;
						pos0[]			= {0.5, __EVAL(PosY0Center)};
						pos10[]			= {__EVAL(0.5 + SizeX10deg), __EVAL(PosY0Center + SizeY10deg)};
					};
					class Limit0109
					{
						type			= limit;
						limits[]		= {0.1,0.1,0.9,0.9};
					};
					class Target
					{
						source	= target;
						type	= vector;
						pos0[]	= {__EVAL(PosX0Center),__EVAL(PosY0Center)};
						pos10[]	= {__EVAL(PosX0Center+SizeX10deg),__EVAL(PosY0Center+SizeY10deg)};
					};
					class TargetingPodTarget
					{
						source	= pilotcamera;
						type	= vector;
						pos0[]	= {__EVAL(PosX0Center),__EVAL(PosY0Center)};
						pos10[]	= {__EVAL(PosX0Center+SizeX10deg),__EVAL(PosY0Center+SizeY10deg)};
					};
					class WPPoint
					{
						type			= vector;
						source			= WPPoint;
						pos0[]			= {0.5, __EVAL(PosY0Center)};
						pos10[]			= {__EVAL(0.5 + SizeX10deg), __EVAL(PosY0Center + SizeY10deg)};
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
						sourceScale	= 0.65;
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
					color[]				= {0.15, 1.0, 0.15};
					alpha				= 1;
					condition			= "on-user3";

/* ~~~~ HORIZON AND CLIMB ANGLES~~~~ */
					class Horizont
					{
						clipTL[]		= {0.10,0.38};
						clipBR[]		= {0.90,0.78};
						condition = "1-(bomb+mgun+atmissile+aamissile+rocket)*activeSensorsOn";
						class Dimmed
						{

							class Level00
							{
								type			= line;
								width			= 5.0;
								points[]		=
								{
									{Level0, {__EVAL( 0.220 * Factor), 0}, 1},
									{Level0, {__EVAL(-0.220 * Factor), 0}, 1},
									{}
								};
							};

							DEF2_HORIZONTMinus(00)
							DEF2_HORIZONTMinus(10)
							DEF2_HORIZONTPlus(10)
							DEF2_HORIZONTMinus(20)
							DEF2_HORIZONTPlus(20)
							DEF2_HORIZONTMinus(30)
							DEF2_HORIZONTPlus(30)
							DEF2_HORIZONTMinus(40)
							DEF2_HORIZONTPlus(40)
							DEF2_HORIZONTMinus(50)
							DEF2_HORIZONTPlus(50)
							DEF2_HORIZONTMinus(60)
							DEF2_HORIZONTPlus(60)
							DEF2_HORIZONTMinus(70)
							DEF2_HORIZONTPlus(70)
							DEF2_HORIZONTMinus(80)
							DEF2_HORIZONTPlus(80)
						};
						class BankDetailed
						{
							condition = "1-(bomb+mgun+atmissile+aamissile+rocket+missilelocked + missilelocking+activeSensorsOn)";
							class Level00
							{
								type			= line;
								width			= 5.0;
								points[]		=
								{
									#define SizeIn 0.15
									#define SizeOut 0.17
									#define SizeOutBig 0.19

									CIRCLE_MARK(PlaneOrientation,SizeIn,SizeOut,-15-90),{},
									CIRCLE_MARK(PlaneOrientation,SizeIn,SizeOutBig,-30-90),{},
									CIRCLE_MARK(PlaneOrientation,SizeIn,SizeOut,-45-90),{},
									CIRCLE_MARK(PlaneOrientation,SizeIn,SizeOutBig,-60-90),{},

									CIRCLE_MARK(PlaneOrientation,SizeIn,SizeOut,-270+15),{},
									CIRCLE_MARK(PlaneOrientation,SizeIn,SizeOutBig,-270+30),{},
									CIRCLE_MARK(PlaneOrientation,SizeIn,SizeOut,-270+45),{},
									CIRCLE_MARK(PlaneOrientation,SizeIn,SizeOutBig,-270+60),{},
								};
							};
						};
					};

/* ~~~~ MOVEMENT BASED CROSSHAIRS ~~~~ */
					// Plane forward direction crosshair
					class PlaneOrientationCrosshair
					{
						type			= line;
						width			= 3.0;
						points[]		=
						{
							#define SCALE_HUD 1.2
							{HorizonBankInverted, {__EVAL(-0.165/SCALE_HUD),	 0.00}, 1},
							{HorizonBankInverted, {__EVAL(-0.050/SCALE_HUD),	 0.00}, 1},
							{},
							{HorizonBankInverted, {__EVAL(-0.100/SCALE_HUD),	__EVAL(-0.00/SCALE_HUD)}, 1},
							{HorizonBankInverted, {__EVAL(-0.100/SCALE_HUD),	__EVAL(-0.03/SCALE_HUD)}, 1},
							{},
							{HorizonBankInverted, {__EVAL( 0.050/SCALE_HUD),	 0.00}, 1},
							{HorizonBankInverted, {__EVAL( 0.165/SCALE_HUD),	 0.00}, 1},
							{},
							{HorizonBankInverted, {__EVAL( 0.100/SCALE_HUD),	__EVAL(-0.00/SCALE_HUD)}, 1},
							{HorizonBankInverted, {__EVAL( 0.100/SCALE_HUD),	__EVAL(-0.03/SCALE_HUD)}, 1},
							{},
							{HorizonBankInverted, {-0.0,	 __EVAL(0.04/SCALE_HUD)}, 1},
							{HorizonBankInverted, {-0.0,	 __EVAL(0.09/SCALE_HUD)}, 1},
							{},

							{PlaneOrientation, {__EVAL(-0.205/SCALE_HUD),	 0.00}, 1},
							{PlaneOrientation, {__EVAL(-0.175/SCALE_HUD),	 0.00}, 1},{},
							{PlaneOrientation, {__EVAL( 0.175/SCALE_HUD),	 0.00}, 1},
							{PlaneOrientation, {__EVAL( 0.205/SCALE_HUD),	 0.00}, 1},
							{},

						};
					};

					// Plane movement direction crosshair
					class GunCross
					{
						condition = "1-mgun*impactDistance*(altitudeAGL>=5)";
						class Cross
						{
							type			= line;
							width			= 3.0;
							points[]		=
							{
								//boresight indicator
								{PlaneOrientation,{ 0.0, -0.03}, 1},
								{PlaneOrientation,{ 0.0, -0.01}, 1}, {},
								{PlaneOrientation,{ 0.0,  0.03}, 1},
								{PlaneOrientation,{ 0.0,  0.01}, 1}, {},
								{PlaneOrientation,{-0.03,  0.0}, 1},
								{PlaneOrientation,{-0.01,  0.0}, 1}, {},
								{PlaneOrientation,{ 0.03,  0.0}, 1},
								{PlaneOrientation,{ 0.01,  0.0}, 1},
								{}
							};
						};
					};

					class MissileLocked
					{
						condition = "missilelocked";
						class LaunchReady
						{
							type			= text;
							source			= static;
							text 			= "ПР";

							align			= center;
							scale			= 1;
							TEXT_SIZEPOS(0.50,0.49+0.19,0.08,0.07)
						};
					};
					class MissileLocking
					{
						condition = "missilelocking";
						blinkingPattern[]	= {0.2, 0.5};
						blinkingStartsOn	= true;
						class LaunchReady
						{
							type			= text;
							source			= static;
							text 			= "ПР";

							align			= center;
							scale			= 1;
							TEXT_SIZEPOS(0.50,0.49+0.19,0.08,0.07)
						};
					};
					class SpeedNumber0
					{
						type			= text;
						source			= static;
						text 			= 0;

						align			= left;
						scale			= 1;
						TEXT_SIZEPOS(0.31,0.09+0.19,0.065,0.07)
					};
					class SpeedNumber: SpeedNumber0
					{
						source			= speed;
						sourceScale		= 0.36;
						TEXT_SIZEPOS(0.275,0.09+0.19,0.065,0.07)
					};
					class AccelerationLine
					{
						type				= line;
						width				= 4.0;
						points[]			=
						{
							{{__EVAL(0.23-0.01), __EVAL(0.16+0.19)}, 1},
							{{__EVAL(0.30-0.01), __EVAL(0.16+0.19)}, 1}
						};
					};
					class Acceleration0Group
					{
						condition = "1-abs(gmeterZ)";
						class Acceleration
						{
							type			= line;
							width			= 2.0;
							points[]		=
							{
							// Top arrow for heading scale
								{{__EVAL(0.255 - 0.006),	__EVAL(	0.13 + 0.012 + 0.03 + 0.19)},	1},
								{{__EVAL(0.255 + 0.000),	__EVAL( 0.13 + 0.000 + 0.03 + 0.19)},	1},
								{{__EVAL(0.255 + 0.006),	__EVAL(	0.13 + 0.012 + 0.03 + 0.19)},	1},
								{{__EVAL(0.255 - 0.006),	__EVAL(	0.13 + 0.012 + 0.03 + 0.19)},	1}
							};
						};
					};
					class AccelerationPlusGroup
					{
						condition = "gmeterZ>=0.5";
						class Acceleration
						{
							type			= line;
							width			= 2.0;
							points[]		=
							{
							// Top arrow for heading scale
								{{__EVAL(0.285 - 0.006),	__EVAL(	0.13 + 0.012 + 0.03 + 0.19)},	1},
								{{__EVAL(0.285 + 0.000),	__EVAL( 0.13 + 0.000 + 0.03 + 0.19)},	1},
								{{__EVAL(0.285 + 0.006),	__EVAL(	0.13 + 0.012 + 0.03 + 0.19)},	1},
								{{__EVAL(0.285 - 0.006),	__EVAL(	0.13 + 0.012 + 0.03 + 0.19)},	1}
							};
						};
					};
					class AccelerationMinusGroup
					{
						condition = "gmeterZ<=-0.5";
						class Acceleration
						{
							type			= line;
							width			= 2.0;
							points[]		=
							{
							// Top arrow for heading scale
								{{__EVAL(0.225 - 0.006),	__EVAL(	0.13 + 0.012 + 0.03 + 0.19)},	1},
								{{__EVAL(0.225 + 0.000),	__EVAL( 0.13 + 0.000 + 0.03 + 0.19)},	1},
								{{__EVAL(0.225 + 0.006),	__EVAL(	0.13 + 0.012 + 0.03 + 0.19)},	1},
								{{__EVAL(0.225 - 0.006),	__EVAL(	0.13 + 0.012 + 0.03 + 0.19)},	1}
							};
						};
					};
					class AltitudeNumber0
					{
						type			= text;
						source			= static;
						text 			= 0;

						align			= left;
						scale			= 1;
						TEXT_SIZEPOS(0.82,0.09+0.19,0.065,0.07)
					};
					class AltitudeNumber: AltitudeNumber0
					{
						source			= altitudeASL;
						sourceScale		= 0.1;
						sourceLength	= 1;
						TEXT_SIZEPOS(0.785,0.09+0.19,0.065,0.07)
					};

					class RadarOnGroup
					{
						condition = "activeSensorsOn";
						class RadarText
						{
							type			= text;
							source			= static;
							text 			= "РЛ";

							align			= left;
							scale			= 1;
							TEXT_SIZEPOS(0.18,0.45,0.05,0.05)
						};
					};
/* ~~~~ Pylon Info ~~~~ */
					class PylonGroup
					{
						condition = "bomb+mgun+atmissile+aamissile+rocket";

						#define PYLON_MACRO(NUM,DIR)\
						class Pylon##NUM##\
						{\
							condition = 1-pylonSelected##NUM##;\
							class PylonLine\
							{\
								type			= line;\
								width			= 6.0;\
								points[]		=\
								{\
									{{__EVAL(0.5 + 0.025*##NUM## * ##DIR## - 0.016),	__EVAL(0.78+0)},	1},\
									{{__EVAL(0.5 + 0.025*##NUM## * ##DIR## + 0.016),	__EVAL(0.78+0)},	1}\
								};\
							};\
						};\
						class Pylon##NUM##Selected: Pylon##NUM##\
						{\
							condition = pylonSelected##NUM##;\
							class PylonLine: PylonLine\
							{\
								points[]		=\
								{\
									{{__EVAL(0.5 + 0.025*##NUM## * ##DIR## - 0.016),	__EVAL(0.78-0.035)},	1},\
									{{__EVAL(0.5 + 0.025*##NUM## * ##DIR## + 0.016),	__EVAL(0.78-0.035)},	1}\
								};\
							};\
						};
						PYLON_MACRO(1,1)
						PYLON_MACRO(2,-1)
						PYLON_MACRO(3,1)
						PYLON_MACRO(4,-1)
						PYLON_MACRO(5,1)
						PYLON_MACRO(6,-1)

						class PylonName1
						{
							type	= "pylonicon";
							pos[]	= {{0.74, 0.73}, 1};
							pylon	= 1;
							name	= "rhs_rus_ammoname";
						};
						class PylonName2: PylonName1 {pylon	= 2;};
						class PylonName3: PylonName1 {pylon	= 3;};
						class PylonName4: PylonName1 {pylon	= 4;};
						class PylonName5: PylonName1 {pylon	= 5;};
						class PylonName6: PylonName1 {pylon	= 6;};
					};

/* ~~~~ Weapons Info ~~~~ */

/* ~~~~ ILS Info ~~~~ */
					#define SCALE 0.6
					class ILS
					{
						condition		= ils;

						class Glideslope
						{
							clipTL[]		= {0.0,0.0};
							clipBR[]		= {1.0,1.0};

							class ILS
							{
								type			= line;
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


/* ~~~~ HEADING SCALE ~~~~ */
					// Arrows above and below heading scale
					class HeadingArrow
					{
						type			= line;
						width			= 3.0;
						points[]		=
						{
						// Top arrow for heading scale
							{{__EVAL(0.5 - 0.02),	__EVAL(	0.125 + 0.02 + 0.22)},	1},
							{{0.5,					__EVAL( 0.125 + 0.00 + 0.22)},	1},
							{{__EVAL(0.5 + 0.02),	__EVAL(	0.125 + 0.02 + 0.22)},	1},
							{{__EVAL(0.5 - 0.02),	__EVAL(	0.125 + 0.02 + 0.22)},	1}
						};
					};

					class HeadingLine
					{
						type				= line;
						width				= 4.0;
						points[]			=
						{
							{{0.35, 0.34}, 1},
							{{0.65, 0.34}, 1}
						};
					};
					class HeadingScale
					{
						type			= scale;
						horizontal		= true;
						source			= heading;
						sourceScale		= 0.1;
						width			= 4.0;
						NeverEatSeaWeed = 0;
						refreshRate		= 0.1;

						top				= 0.35;
						center			= 0.50;
						bottom			= 0.65;

						lineXleft		= __EVAL(0.06 + 0.058 + 0.22);
						lineYright		= __EVAL(0.05 + 0.058 + 0.22);
						lineXleftMajor	= __EVAL(0.06 + 0.058 + 0.22);
						lineYrightMajor	= __EVAL(0.04 + 0.058 + 0.22);
						majorLineEach	= 2;
						numberEach		= 2;
						step			= __EVAL(5*0.1);
						stepSize		= __EVAL(1/19);

						align			= center;
						scale			= 1.0;
						pos[]			= {0.35, __EVAL(0.0 + 	0.27)};
						right[]			= {0.40, __EVAL(0.0 + 	0.27)};
						down[]			= {0.35, __EVAL(0.04 + 	0.27)};
					};

/* ~~~~ MARCH MODE ~~~~ */

					class MarchGroup
					{
						condition = "1-(bomb+mgun+atmissile+aamissile+rocket)";
						HUD_TEXT_STATIC(0.18,0.75,0.05,0.05,center,"МРШ",MarchText)
						class SpeedNumber0
						{
							type			= text;
							source			= WPDist;
							sourceScale 	= 0.001;
							sourcePrecision = 1;

							align			= center;
							scale			= 1;
							TEXT_SIZEPOS(0.50,0.75,0.05,0.05)
						};
						class WP
						{
							condition		= "wpvalid";
							class shape
							{
								type	= line;
								width	= 4;
								points[]=
								{
									CIRCLE_BIG(WPPoint,0.04),{}
								};
							};
						};
					};
/* ~~~~ HELMET MODE ~~~~ */

					class HelmetModeGroup
					{
						condition = "user2*(bomb+mgun+atmissile+aamissile+rocket)";
						HUD_TEXT_STATIC(0.18,0.75,0.05,0.05,center,"ШЛМ",HelmetText)
						HUD_TEXT_STATIC(0.18,0.79,0.05,0.05,center,"БВБ",BWBText)
					};
/* ~~~~ WEAPON-DEPENDANT CROSSHAIRS ~~~~ */
					class MGun
					{
						condition		= "mgun";

						class AmmoBox
						{
							type			= line;
							width			= 3.0;
							points[]		=
							{
								{{ __EVAL( 0.017+0.74), __EVAL(-0.017+0.765)}, 1},
								{{ __EVAL( 0.017+0.74), __EVAL( 0.017+0.765)}, 1},
								{{ __EVAL(-0.017+0.74), __EVAL( 0.017+0.765)}, 1},
								{{ __EVAL(-0.017+0.74), __EVAL(-0.017+0.765)}, 1},
								{{ __EVAL( 0.017+0.74), __EVAL(-0.017+0.765)}, 1},
								{}
							};
						};
						class Full
						{
							condition		= "ammo>=113";
							HUD_TEXT_STATIC(0.74,0.755-0.01,0.045,0.045,center,"4",AmmoText)
						};
						class AlmostFull
						{
							condition		= "(ammo>=75)*(ammo<=112)";
							HUD_TEXT_STATIC(0.74,0.755-0.015,0.045,0.045,center,"3",AmmoText)
						};
						class Half
						{
							condition		= "(ammo>=38)*(ammo<=74)";
							HUD_TEXT_STATIC(0.74,0.755-0.015,0.045,0.045,center,"2",AmmoText)
						};
						class AlmostEmpty
						{
							condition		= "(ammo>=1)*(ammo<=37)";
							HUD_TEXT_STATIC(0.74,0.755-0.01,0.045,0.045,center,"1",AmmoText)
						};
						class Empty
						{
							condition		= "ammo<=0";
							HUD_TEXT_STATIC(0.74,0.755-0.01,0.045,0.045,center,"0",AmmoText)
						};
						class CrossCondition
						{
							condition		= "impactDistance*(altitudeAGL>=5)";
							class Cross
							{
								type			= line;
								width			= 3.0;
								points[]		=
								{
									// main cross
									{ImpactPointRelative,{ XY_Scaled(0.0, -0.025)}, 1},
									{ImpactPointRelative,{ XY_Scaled(0.0, -0.015)}, 1},{},
									{ImpactPointRelative,{ XY_Scaled(0.0, 0.025)}, 1},
									{ImpactPointRelative,{ XY_Scaled(0.0, 0.015)}, 1},{},
									{ImpactPointRelative,{ XY_Scaled(-0.025, -0.0)}, 1},
									{ImpactPointRelative,{ XY_Scaled(-0.015, -0.0)}, 1},{},
									{ImpactPointRelative,{ XY_Scaled(0.025, -0.0)}, 1},
									{ImpactPointRelative,{ XY_Scaled(0.015, -0.0) }, 1},
									{},
									//middle dot
									{ImpactPointRelative,{ 0.0, -0.002}, 1},
									{ImpactPointRelative,{ 0.0,  0.002}, 1},{},
									{ImpactPointRelative,{-0.002, 0.0}, 1},
									{ImpactPointRelative,{ 0.002, 0.0}, 1},
									{}
								};
							};
							class Circle
							{
								type			= line;
								width			= 4.0;
								points[]		=
								{
									CIRCLE_LOCK_TIME(ImpactPointRelative, MissileFlightTimeRot, 0.032)
								};
							};
						};
					};
					// Group to condition BombCrosshair by bomb being the selected weapon
					class BombCrosshairGroup
					{
						type			= group;
						condition		= "bomb+rocket*impactDistance";

						class BombCrosshair
						{
							type			= line;
							width			= 4.0;
							points[]		=
							{
								CIRCLE_BIG(ImpactPoint, 0.04),{},
								{},
								{ImpactPoint,{ 0.00,	 0.005},1},
								{ImpactPoint,{ 0.005,	-0.00},1},
								{ImpactPoint,{ 0.00,	-0.005},1},
								{ImpactPoint,{-0.005,	-0.00},1},
								{ImpactPoint,{ 0.00,	 0.005},1}
							};
						};
					};
					class AAMissilesGroup
					{
						type			= group;
						condition		= "aamissile";

						// Attack Mode: ППС Head on
						class PPSGroup
						{
							condition = "1";
							class GText
							{
								type			= text;
								source			= static;
								text 			= "ППС";

								align			= left;
								scale			= 1;
								TEXT_SIZEPOS(0.18,0.39,0.05,0.05)
							};
						};
						// Attack Mode: ЗПС Pursuit
						class ZPSGroup: PPSGroup
						{
							condition = "0";
							class GText: GText
							{
								text 			= "ЗПС";
							};
						};
					};

					class TargetDiamond
					{
						class shape
						{
							type	= line;
							width	= 4;
							points[]={
								//middle dot
								{Target,1, Limit0109, 1, { 0.0, -0.015}, 1},
								{Target,1, Limit0109, 1, {-0.0075, 0.0}, 1},
								{Target,1, Limit0109, 1, { 0.0,  0.0125}, 1},
								{Target,1, Limit0109, 1, { 0.0075, 0.0}, 1},
								{Target,1, Limit0109, 1, { 0.0, -0.0125}, 1}
							};
						};
					};
					class TargetLocked
					{
						condition = "TargetHeight>=1";
						class TargetSquare
						{
							type=line;
							width = 4;
							points[]={
								{Target, 1, Limit0109, 1, {XY_Scaled(0.0, -0.05)}, 1},
								{Target, 1, Limit0109, 1, {XY_Scaled(0.05, 0.0)}, 1},
								{Target, 1, Limit0109, 1, {XY_Scaled(0.0, 0.05)}, 1},
								{Target, 1, Limit0109, 1, {XY_Scaled(-0.05, 0.0)}, 1},
								{Target, 1, Limit0109, 1, {XY_Scaled(0.0, -0.05)}, 1}
							};
						};
						class TargetSpeed0
						{
							type			= text;
							source			= static;
							text 			= 0;

							align			= left;
							scale			= 1;
							TEXT_SIZEPOS(0.31,0.09+0.15,0.04,0.045)
						};
						class TargetSpeed: SpeedNumber0
						{
							source			= LarTargetSpeed;
							sourceScale		= 0.36;
							TEXT_SIZEPOS(0.29,0.09+0.15,0.04,0.045)
						};
						class TargetHeight0
						{
							type			= text;
							source			= static;
							text 			= 0;

							align			= left;
							scale			= 1;
							TEXT_SIZEPOS(0.82,0.09+0.15,0.04,0.045)
						};
						class TargetHeight: AltitudeNumber0
						{
							source			= TargetHeight;
							sourceScale		= 0.1;
							sourceLength	= 1;
							TEXT_SIZEPOS(0.8,0.09+0.15,0.04,0.045)
						};

					};
					#define LARSize 0.32
					#define LARXPos 0.26
					#define LARYPos 0.375
					class LAR //launch acceptability region
					{
						type		= group;
						condition = "bomb+mgun+atmissile+aamissile+rocket";

						// AA missile crosshair
						class Lines
						{
							type	= line;
							width	= 3.0;
							points[]  =
							{
								// left side
								{{__EVAL(LARXPos-0.02),__EVAL(LARYPos)},1},
								{{__EVAL(LARXPos-0.00),__EVAL(LARYPos)},1},
								{{__EVAL(LARXPos-0.00),__EVAL(LARYPos+LARSize)},1},
								{{__EVAL(LARXPos-0.02),__EVAL(LARYPos+LARSize)},1},{},
								{{__EVAL(LARXPos-0.02),__EVAL(LARYPos+LARSize*0.80)},1},{{__EVAL(LARXPos),__EVAL(LARYPos+LARSize*0.80)},1},{},
								{{__EVAL(LARXPos-0.02),__EVAL(LARYPos+LARSize*0.60)},1},{{__EVAL(LARXPos),__EVAL(LARYPos+LARSize*0.60)},1},{},
								{{__EVAL(LARXPos-0.02),__EVAL(LARYPos+LARSize*0.40)},1},{{__EVAL(LARXPos),__EVAL(LARYPos+LARSize*0.40)},1},{},
								{{__EVAL(LARXPos-0.02),__EVAL(LARYPos+LARSize*0.20)},1},{{__EVAL(LARXPos),__EVAL(LARYPos+LARSize*0.20)},1},{},
								// dist arrow
								{LarTargetDist,__EVAL(-LARSize),{__EVAL(LARXPos+0.012),__EVAL(LARYPos+LARSize+0.012)},1},
								{LarTargetDist,__EVAL(-LARSize),{__EVAL(LARXPos),__EVAL(LARYPos+LARSize)},1},
								{LarTargetDist,__EVAL(-LARSize),{__EVAL(LARXPos+0.012),__EVAL(LARYPos+LARSize-0.012)},1},
								{LarTargetDist,__EVAL(-LARSize),{__EVAL(LARXPos+0.012),__EVAL(LARYPos+LARSize-0.003)},1},
								{LarTargetDist,__EVAL(-LARSize),{__EVAL(LARXPos+0.022),__EVAL(LARYPos+LARSize-0.003)},1},
								{LarTargetDist,__EVAL(-LARSize),{__EVAL(LARXPos+0.022),__EVAL(LARYPos+LARSize+0.003)},1},
								{LarTargetDist,__EVAL(-LARSize),{__EVAL(LARXPos+0.012),__EVAL(LARYPos+LARSize+0.003)},1},
								{LarTargetDist,__EVAL(-LARSize),{__EVAL(LARXPos+0.012),__EVAL(LARYPos+LARSize+0.012)},1}
							};
						};
						class RadarSearch
						{
							condition = "activeSensorsOn - missilelocked - missilelocking";
							class Shape
							{
								type	= line;
								width	= 3.0;
								points[]  =
								{
									// right side
									{{__EVAL(0.985-LARXPos-0.00),__EVAL(LARYPos)},1},
									{{__EVAL(1-LARXPos-0.00),__EVAL(LARYPos)},1},
									{{__EVAL(1-LARXPos-0.00),__EVAL(LARYPos+LARSize)},1},
									{{__EVAL(0.985-LARXPos-0.00),__EVAL(LARYPos+LARSize)},1},{},
									{{__EVAL(1-LARXPos-0.00),__EVAL(LARYPos+LARSize*0.5)},1},
									{{__EVAL(0.985-LARXPos-0.00),__EVAL(LARYPos+LARSize*0.5)},1},{},
									// radar elev
									{{__EVAL(1.02-LARXPos-0.00),__EVAL(LARYPos+LARSize*0.45)},1},
									{{__EVAL(1.02-LARXPos-0.00),__EVAL(LARYPos+LARSize*0.55)},1},{},
									// radar elev current
									{{__EVAL(1.015-LARXPos-0.00),__EVAL(LARYPos+LARSize*0.46)},1},
									{{__EVAL(1.00-LARXPos-0.00),__EVAL(LARYPos+LARSize*0.46)},1},{},
									{{__EVAL(1.00-LARXPos-0.00),__EVAL(LARYPos+LARSize*0.54)},1},
									{{__EVAL(1.015-LARXPos-0.00),__EVAL(LARYPos+LARSize*0.54)},1},{},
									// radar horizontal
									{{__EVAL(0.76-LARXPos-0.03),__EVAL(LARYPos+LARSize+0.02)},1},
									{{__EVAL(0.76-LARXPos+0.03),__EVAL(LARYPos+LARSize+0.02)},1},
								};
							};
							HUD_TEXT_STATIC(0.96-LARXPos,LARYPos*0.95,0.035,0.035,center,"60",RadarTopText)
							HUD_TEXT_STATIC(1.035-LARXPos,LARYPos+LARSize*0.45,0.035,0.035,center,"0",RadarElevText)
						};

						class Poly
						{
							type   = polygon;
							points[]  =
							{
								{
									{LarAmmoMin,__EVAL(-LARSize),{__EVAL(LARXPos+0.001),__EVAL(LARYPos+LARSize)},1},
									{LarAmmoMin,__EVAL(-LARSize),{__EVAL(LARXPos+0.001),__EVAL(LARYPos+LARSize+0.005)},1},
									{LarAmmoMin,__EVAL(-LARSize),{__EVAL(LARXPos+0.012),__EVAL(LARYPos+LARSize+0.005)},1},
									{LarAmmoMin,__EVAL(-LARSize),{__EVAL(LARXPos+0.012),__EVAL(LARYPos+LARSize)},1}
								},
								{
									{LarAmmoMin,__EVAL(-LARSize),{__EVAL(LARXPos+0.001),__EVAL(LARYPos-0.075+LARSize)},1},
									{LarAmmoMin,__EVAL(-LARSize),{__EVAL(LARXPos+0.001),__EVAL(LARYPos-0.075+LARSize+0.01)},1},
									{LarAmmoMin,__EVAL(-LARSize),{__EVAL(LARXPos+0.012),__EVAL(LARYPos-0.075+LARSize+0.01)},1},
									{LarAmmoMin,__EVAL(-LARSize),{__EVAL(LARXPos+0.012),__EVAL(LARYPos-0.075+LARSize)},1}
								},
								{
									{LarAmmoMax,__EVAL(-LARSize),{__EVAL(LARXPos+0.001),__EVAL(LARYPos+0.09+LARSize)},1},
									{LarAmmoMax,__EVAL(-LARSize),{__EVAL(LARXPos+0.001),__EVAL(LARYPos+0.09+LARSize+0.005)},1},
									{LarAmmoMax,__EVAL(-LARSize),{__EVAL(LARXPos+0.012),__EVAL(LARYPos+0.09+LARSize+0.005)},1},
									{LarAmmoMax,__EVAL(-LARSize),{__EVAL(LARXPos+0.012),__EVAL(LARYPos+0.09+LARSize)},1}
								}
							};
						};

						class LARText1
						{
							type		= text;
							source		= LarTop;
							sourceScale	= 0.001*1.5;

							scale		= 1;
							pos[]		= {{__EVAL(LARXPos-0.065+0.04), __EVAL(LARYPos-0.014)}, 1};
							right[]		= {{__EVAL(LARXPos-0.030+0.04), __EVAL(LARYPos-0.014)}, 1};
							down[]		= {{__EVAL(LARXPos-0.065+0.04), __EVAL(LARYPos+0.014)}, 1};
							align		= left;
						};
						class LARText2: LARText1
						{
							source			= LarTop;
							sourcePrecision	= -1;
							sourceScale		= 0.0008*1.5;
							pos[]			= {{__EVAL(LARXPos-0.065+0.04), __EVAL(LARYPos-0.014+LARSize*0.2)}, 1};
							right[]			= {{__EVAL(LARXPos-0.030+0.04), __EVAL(LARYPos-0.014+LARSize*0.2)}, 1};
							down[]			= {{__EVAL(LARXPos-0.065+0.04), __EVAL(LARYPos+0.014+LARSize*0.2)}, 1};
						};
						class LARText3: LARText1
						{
							source			= LarTop;
							sourcePrecision	= -1;
							sourceScale		= 0.0006*1.5;
							pos[]			= {{__EVAL(LARXPos-0.065+0.04), __EVAL(LARYPos-0.014+LARSize*0.4)}, 1};
							right[]			= {{__EVAL(LARXPos-0.030+0.04), __EVAL(LARYPos-0.014+LARSize*0.4)}, 1};
							down[]			= {{__EVAL(LARXPos-0.065+0.04), __EVAL(LARYPos+0.014+LARSize*0.4)}, 1};
						};
						class LARText4: LARText1
						{
							source			= LarTop;
							sourcePrecision	= -1;
							sourceScale		= 0.0004*1.5;
							pos[]			= {{__EVAL(LARXPos-0.065+0.04), __EVAL(LARYPos-0.014+LARSize*0.6)}, 1};
							right[]			= {{__EVAL(LARXPos-0.030+0.04), __EVAL(LARYPos-0.014+LARSize*0.6)}, 1};
							down[]			= {{__EVAL(LARXPos-0.065+0.04), __EVAL(LARYPos+0.014+LARSize*0.6)}, 1};
						};
						class LARText5: LARText1
						{
							source			= LarTop;
							sourcePrecision	= -1;
							sourceScale		= 0.0002*1.5;
							pos[]			= {{__EVAL(LARXPos-0.065+0.04), __EVAL(LARYPos-0.014+LARSize*0.8)}, 1};
							right[]			= {{__EVAL(LARXPos-0.030+0.04), __EVAL(LARYPos-0.014+LARSize*0.8)}, 1};
							down[]			= {{__EVAL(LARXPos-0.065+0.04), __EVAL(LARYPos+0.014+LARSize*0.8)}, 1};
						};
						class LARText6: LARText1
						{
							source			= static;
							text			= 0;
							sourcePrecision	= -1;
							sourceScale		= 0.0002*1.5;
							pos[]			= {{__EVAL(LARXPos-0.065+0.04), __EVAL(LARYPos-0.014+LARSize*1.0)}, 1};
							right[]			= {{__EVAL(LARXPos-0.030+0.04), __EVAL(LARYPos-0.014+LARSize*1.0)}, 1};
							down[]			= {{__EVAL(LARXPos-0.065+0.04), __EVAL(LARYPos+0.014+LARSize*1.0)}, 1};
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
							CIRCLE_BIG_NB(0.04),{}
						};
					};
				};
