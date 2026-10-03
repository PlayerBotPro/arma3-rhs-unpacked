#define Factor 0.8
#define DEF2_HORIZONTPlusNoText(XX) \
					class Level2PH##XX: Level00 \
					{ \
						type			= line; \
						lineType		= 0;\
						points[]		= \
						{ \
							{Level0, {__EVAL( 0.255 * Factor),__EVAL( +SizeY10deg / 40 * (XX+2.5))}, 1}, \
							{Level0, {__EVAL( 0.225 * Factor),__EVAL( +SizeY10deg / 40 * (XX+2.5))}, 1}, \
						}; \
					};

#define DEF2_HORIZONTPlus(XX) \
					class Level2P##XX: Level00 \
					{ \
						type			= line; \
						points[]		= \
						{ \
							{Level0, {__EVAL( 0.275 * Factor),__EVAL( +SizeY10deg / 40 * XX)}, 1}, \
							{Level0, {__EVAL( 0.225 * Factor),__EVAL( +SizeY10deg / 40 * XX)}, 1}, \
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
						pos[]			= {Level0, {__EVAL(0.000 * Factor + 0.26), __EVAL(-0.0-0.020 * Factor + SizeY10deg / 40 * XX)}, 1}; \
						right[]			= {Level0, {__EVAL(0.050 * Factor + 0.26), __EVAL(-0.0-0.020 * Factor + SizeY10deg / 40 * XX)}, 1}; \
						down[]			= {Level0, {__EVAL(0.000 * Factor + 0.26), __EVAL(-0.0+0.020 * Factor + SizeY10deg / 40 * XX)}, 1}; \
					};



#define DEF2_HORIZONTMinusNoText(XX) \
					class Level2MH##XX: Level00 \
					{ \
						type			= line; \
						lineType		= 0;\
						points[]		= \
						{ \
							{Level0, {__EVAL( 0.255 * Factor),__EVAL( -SizeY10deg / 40 * (XX+2.5))}, 1}, \
							{Level0, {__EVAL( 0.245 * Factor),__EVAL( -SizeY10deg / 40 * (XX+2.5))}, 1}, {},\
							{Level0, {__EVAL( 0.235 * Factor),__EVAL( -SizeY10deg / 40 * (XX+2.5))}, 1}, \
							{Level0, {__EVAL( 0.225 * Factor),__EVAL( -SizeY10deg / 40 * (XX+2.5))}, 1}, \
						}; \
					};

#define DEF2_HORIZONTMinus(XX) \
					class Level2M##XX: Level00 \
					{ \
						type			= line; \
						points[]		= \
						{ \
							{Level0, {__EVAL( 0.275 * Factor),__EVAL( -SizeY10deg / 40 * (XX))}, 1}, \
							{Level0, {__EVAL( 0.265 * Factor),__EVAL( -SizeY10deg / 40 * (XX))}, 1}, {},\
							{Level0, {__EVAL( 0.255 * Factor),__EVAL( -SizeY10deg / 40 * (XX))}, 1}, \
							{Level0, {__EVAL( 0.245 * Factor),__EVAL( -SizeY10deg / 40 * (XX))}, 1}, {},\
							{Level0, {__EVAL( 0.235 * Factor),__EVAL( -SizeY10deg / 40 * (XX))}, 1}, \
							{Level0, {__EVAL( 0.225 * Factor),__EVAL( -SizeY10deg / 40 * (XX))}, 1}, \
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
						pos[]			= {Level0, {__EVAL(0.000 * Factor + 0.26), __EVAL(-0.00-0.020 * Factor - SizeY10deg / 40 * XX)}, 1}; \
						right[]			= {Level0, {__EVAL(0.050 * Factor + 0.26), __EVAL(-0.00-0.020 * Factor - SizeY10deg / 40 * XX)}, 1}; \
						down[]			= {Level0, {__EVAL(0.000 * Factor + 0.26), __EVAL(-0.00+0.020 * Factor - SizeY10deg / 40 * XX)}, 1}; \
					};

				topLeft					= "HUD_top_left";
				topRight				= "HUD_top_right";
				bottomLeft				= "HUD_bottom_left";
				/// adjust position inside of memory points LOD
				borderLeft				= 0;
				borderRight				= 0;
				borderTop				= 0;
				borderBottom			= 0;
				color[]					= {0.0, 1.0, 0.0, 0.1};
				enableParallax			= true;
				font					= "rhs_digital_font_rus";

				class Bones
				{
					class PlaneOrientation
					{
						type			= fixed;
						pos[]			= {PosX0Center, PosYCenterHorizont};
					};
					class ClimbFixed
					{
						type			= fixed;
						pos[]			= {0.898+0.09, PosYCenterHorizont};
					};
					class ClimbRotate
					{
						type			= rotational;
						source			= vspeed;
						sourceScale		= 1.0;
						center[]		= {0.91+0.09, PosYCenterHorizont};
						min				= -30;
						max				= 30;
						minAngle		= -80;
						maxAngle		=  80;
						aspectRatio		= __EVAL(1 / XtoYscale);
					};


					class WeaponAim
					{
						type			= fixed;
						source			= weapon;
						pos[]			= {PosX0Center, PosYCenterHorizont};
					};

					class Velocity
					{
						type			= vector;
						source			= velocity;
						pos0[]			= {PosX0Center, PosYCenterHorizont};
						pos10[]			= {__EVAL(PosX0Center + SizeX10deg), __EVAL(PosYCenterHorizont + SizeY10deg)};
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
					/*class TargetingPodTarget
					{
						source	= pilotcamera;
						type	= vector;
						pos0[]	= {__EVAL(PosX0Center),__EVAL(PosY0Center)};
						pos10[]	= {__EVAL(PosX0Center+SizeX10deg),__EVAL(PosY0Center+SizeY10deg)};
					};*/
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
					alpha				= user3;
					color[]				= {user0, user1, user2};
					condition			= on;

/* ~~~~ HORIZON AND CLIMB ANGLES~~~~ */
					class Horizont
					{
						clipTL[]		= {0.10,0.28};
						clipBR[]		= {0.90,0.80};

						class Dimmed
						{
							class Level00
							{
								type			= line;
								width			= 2.0;
								points[]		=
								{
									{Level0, {__EVAL( 0.300 * Factor), 0}, 1},
									{Level0, {__EVAL(-0.300 * Factor), 0}, 1},
									{}
								};
							};

							DEF2_HORIZONTMinusNoText(5)
							DEF2_HORIZONTMinusNoText(0)
							DEF2_HORIZONTPlusNoText(5)
							DEF2_HORIZONTPlusNoText(0)
							DEF2_HORIZONTMinus(5)
							DEF2_HORIZONTPlus(5)
							DEF2_HORIZONTMinusNoText(10)
							DEF2_HORIZONTPlusNoText(10)
							DEF2_HORIZONTMinus(10)
							DEF2_HORIZONTPlus(10)
							DEF2_HORIZONTMinusNoText(15)
							DEF2_HORIZONTPlusNoText(15)
							DEF2_HORIZONTMinus(15)
							DEF2_HORIZONTPlus(15)
							DEF2_HORIZONTMinusNoText(20)
							DEF2_HORIZONTPlusNoText(20)
							DEF2_HORIZONTMinus(20)
							DEF2_HORIZONTPlus(20)
							DEF2_HORIZONTMinusNoText(25)
							DEF2_HORIZONTPlusNoText(25)
							DEF2_HORIZONTMinus(25)
							DEF2_HORIZONTPlus(25)
							DEF2_HORIZONTMinusNoText(30)
							DEF2_HORIZONTPlusNoText(30)
							DEF2_HORIZONTMinus(30)
							DEF2_HORIZONTPlus(30)
							DEF2_HORIZONTMinusNoText(35)
							DEF2_HORIZONTPlusNoText(35)
							DEF2_HORIZONTMinus(35)
							DEF2_HORIZONTPlus(35)
							DEF2_HORIZONTMinusNoText(40)
							DEF2_HORIZONTPlusNoText(40)
							DEF2_HORIZONTMinus(40)
							DEF2_HORIZONTPlus(40)
							DEF2_HORIZONTMinusNoText(45)
							DEF2_HORIZONTPlusNoText(45)
							DEF2_HORIZONTMinus(45)
							DEF2_HORIZONTPlus(45)
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
							{HorizonBankInverted, {-0.165,	 0.00}, 1},
							{HorizonBankInverted, {-0.110,	 0.00}, 1},
							{HorizonBankInverted, {-0.100,	-0.02}, 1},
							{HorizonBankInverted, {-0.090,	 0.00}, 1},
							{HorizonBankInverted, {-0.050,	 0.00}, 1},
							{},
							{HorizonBankInverted, { 0.050,	 0.00}, 1},
							{HorizonBankInverted, { 0.090,	 0.00}, 1},
							{HorizonBankInverted, { 0.100,	-0.02}, 1},
							{HorizonBankInverted, { 0.110,	 0.00}, 1},
							{HorizonBankInverted, { 0.165,	 0.00}, 1},
							{},
							{HorizonBankInverted, {-0.0,	 	 0.06}, 1},
							{HorizonBankInverted, {-0.0,	 	 0.12}, 1},
							{},

							{PlaneOrientation, {-0.205,	 0.00}, 1},
							{PlaneOrientation, {-0.175,	 0.00}, 1},
							{},
							{PlaneOrientation, { 0.175,	 0.00}, 1},
							{PlaneOrientation, { 0.205,	 0.00}, 1},
							{},

							//boresight indicator
							{PlaneOrientation,{ 0.0, -0.002}, 1},
							{PlaneOrientation,{-0.002,  0.0}, 1},
							{PlaneOrientation,{ 0.0,  0.002}, 1},
							{PlaneOrientation,{ 0.002,  0.0}, 1},
							{PlaneOrientation,{ 0.0, -0.002}, 1},
							{},
						};
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
								#define SizeOutBig 0.17

								CIRCLE_MARK(PlaneOrientation,SizeIn,SizeOutBig,-30-90),{},
								CIRCLE_MARK(PlaneOrientation,SizeIn,SizeOutBig,-60-90),{},
								CIRCLE_MARK(PlaneOrientation,SizeIn,SizeOutBig,-90-90),{},

								CIRCLE_MARK(PlaneOrientation,SizeIn,SizeOutBig,-270+30),{},
								CIRCLE_MARK(PlaneOrientation,SizeIn,SizeOutBig,-270+60),{}
							};
						};
					};

					// Plane movement direction crosshair
					class PlaneMovementCrosshair
					{
						type			= line;
						width			= 3.0;
						points[]		=
						{
							CIRCLE(Velocity,0.02),
							{},
							{Velocity, { 0.04, __EVAL(0 / XtoYscale)}, 1},
							{Velocity, { 0.02, __EVAL(0 / XtoYscale)}, 1},
							{},
							{Velocity, {-0.04, __EVAL(0 / XtoYscale)}, 1},
							{Velocity, {-0.02, __EVAL(0 / XtoYscale)}, 1},
							{},
							{Velocity, {0, __EVAL(-0.04 / XtoYscale)}, 1},
							{Velocity, {0, __EVAL(-0.02 / XtoYscale)}, 1}
						};
					};

/* ~~~~ WEAPON AND AMMO INFO ~~~~ */
					class WeaponsGroupMGun
					{
						condition = "mgun";
						class WeaponName
						{
							type			= text;
							source			= static;
							sourceScale		= 1;
							text 			= "ГШ";

							align			= right;
							scale			= 1;
							pos[]			= {{__EVAL(0.03+0.11), __EVAL(0.000+0.74)}, 1};
							right[]			= {{__EVAL(0.08+0.11), __EVAL(0.000+0.74)}, 1};
							down[]			= {{__EVAL(0.03+0.11), __EVAL(0.045+0.74)}, 1};
						};
					};
					class WeaponsGroup
					{
						condition = "1-mgun";
						class PylonName1
						{
							type	= "pylonicon";
							pos[]	= {{__EVAL(0.035+0.11), 0.72}, 1};
							pylon	= 1;
							name	= "rhs_rus_ammoname_right";
						};
						class PylonName2: PylonName1 {pylon	= 2;};
						class PylonName3: PylonName1 {pylon	= 3;};
						class PylonName4: PylonName1 {pylon	= 4;};
						class PylonName5: PylonName1 {pylon	= 5;};
						class PylonName6: PylonName1 {pylon	= 6;};
					};
					class AmmoCount
					{
						type			= text;
						source			= ammo;
						sourceScale		= 1;

						align			= right;
						scale			= 1;
						pos[]			= {{__EVAL(0.03+0.11), 0.000+0.79}, 1};
						right[]			= {{__EVAL(0.08+0.11), 0.000+0.79}, 1};
						down[]			= {{__EVAL(0.03+0.11), 0.045+0.79}, 1};
					};

					HUD_TEXT_STATIC(0.95,0.25,0.05,0.05,left,"ЛТЦ",CMText)
					class CMCount
					{
						type			= text;
						source			= cmammo;
						sourceScale		= 1;

						align			= left;
						scale			= 1;
						pos[]			= {{__EVAL(0.00+0.95), __EVAL(0.89-0.59)}, 1};
						right[]			= {{__EVAL(0.05+0.95), __EVAL(0.89-0.59)}, 1};
						down[]			= {{__EVAL(0.00+0.95), __EVAL(0.93-0.59)}, 1};
					};


/* ~~~~ TARGETING POD INFO ~~~~ */
					// Showing targeting pod direction when laser is activated
					/*class TGPGroup
					{
						type			= group;
						condition		= laseron;

						// "LASER" on laser marker indicator
						class LaserText
						{
							type			= text;
							source			= static;
							text			= "LASER";

							align			= right;
							scale			= 1;
							pos[]			= {{0.03, __EVAL(PosYCenterHorizont - 0.045-0.05)}, 1};
							right[]			= {{0.08, __EVAL(PosYCenterHorizont - 0.045-0.05)}, 1};
							down[]			= {{0.03, __EVAL(PosYCenterHorizont - 0.005-0.05)}, 1};
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

								#define SizeIn 0.01
								#define SizeOut 0.03
								CIRCLE_MARK_2B_LIMIT(TargetingPodTarget,Limit0109,SizeIn,SizeOut,-45-90),{},
								CIRCLE_MARK_2B_LIMIT(TargetingPodTarget,Limit0109,SizeIn,SizeOut,-135-90),{},
								CIRCLE_MARK_2B_LIMIT(TargetingPodTarget,Limit0109,SizeIn,SizeOut,-225-90),{},
								CIRCLE_MARK_2B_LIMIT(TargetingPodTarget,Limit0109,SizeIn,SizeOut,-315-90),{}
							};
						};
					};*/


/* ~~~~ GEAR INFO ~~~~ */
					// Group to condition GearText by gear being extended
					class GearGroup
					{
						type			= group;
						condition		= ils;

						// "GEAR" on gear indicator
						class GearText
						{
							type			= text;
							source			= static;
							text			= "ШАССИ";

							align			= center;
							scale			= 1;
							pos[]			= {{__EVAL(0.03+0.465), __EVAL(PosYCenterHorizont + 0.005 + 0.35)}, 1};
							right[]			= {{__EVAL(0.08+0.465), __EVAL(PosYCenterHorizont + 0.005 + 0.35)}, 1};
							down[]			= {{__EVAL(0.03+0.465), __EVAL(PosYCenterHorizont + 0.045 + 0.35)}, 1};
						};
					};

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


/* ~~~~ SPEED INDICATOR ~~~~ */
					// Speed indicator on the left side
					class SpeedNumber
					{
						type			= text;
						source			= speed;
						sourceScale		= 3.6;
						sourceLength	= 3;

						align			= left;
						scale			= 1;
						TEXT_SIZEPOS(0.21,0.11,0.045,0.045)
					};
					HUD_TEXT_STATIC(0.24,0.11,0.045,0.045,center,"И",SpeedText)
					class MachNumber: SpeedNumber
					{
						sourceScale		= 0.002939;
						sourceLength	= 1;
						sourcePrecision = 2;

						TEXT_SIZEPOS(0.21,0.15,0.045,0.045)
					};
					HUD_TEXT_STATIC(0.24,0.15,0.045,0.045,center,"М",MachText)

/* ~~~~ TERRAIN INDICATOR ~~~~ */
					class TerrainNumber
					{
						type			= text;
						source			= altitudeAGL;
						sourceScale		= 1;
						sourceLength 	= 3;
						sourceOffset 	= -2;

						align			= right;
						scale			= 1;
						TEXT_SIZEPOS(0.78,0.15,0.045,0.045)
					};
					HUD_TEXT_STATIC(0.86,0.15,0.045,0.045,center,"Р",RadarText)

/* ~~~~ ALTITUDE SCALE ~~~~ */
					// Altitude indicator on the right side
					class AltitudeNumber
					{
						type			= text;
						source			= altitudeASL;
						sourceScale		= 1;
						sourceLength 	= 3;

						align			= right;
						scale			= 1;
						TEXT_SIZEPOS(0.78,0.11,0.045,0.045)
					};
/* ~~~~ CLIMB SCALE ~~~~ */
					// Climb indicator on the right side
					class ClimbNumber
					{
						type			= text;
						source			= vspeed;
						sourceScale		= 1;

						align			= left;
						scale			= 1;
						pos[]			= {{__EVAL(0.89-0.005), __EVAL(0.00+0.51)}, 1};
						right[]			= {{__EVAL(0.94-0.005), __EVAL(0.00+0.51)}, 1};
						down[]			= {{__EVAL(0.89-0.005), __EVAL(0.04+0.51)}, 1};
					};

					// Arrows between Climb scale and Climb indicator
					class ClimbArrow
					{
						type			= line;
						width			= 4.0;
						points[]		=
						{
						// Arrow for Climb scale

							{ClimbRotate,{__EVAL(-0.084 + 0.010),		__EVAL(0.0 - 0.006)},	1},
							{ClimbRotate,{__EVAL(-0.084 - 0.0),	0.0},			1},
							{ClimbRotate,{__EVAL(-0.084 + 0.010),		__EVAL(0.0 + 0.006)},	1},
							{ClimbRotate,{__EVAL(-0.084 + 0.010),		__EVAL(0.0 - 0.006)},	1},{},
							{ClimbRotate,{__EVAL(-0.084 - 0.0),			0.0},			1},
							{ClimbRotate,{__EVAL(-0.084 + 0.09),			0.0},			1},
						};
					};

					class ClimbLine
					{
						type				= line;
						width				= 4.0;
						points[]			=
						{
							#define SizeIn 0.075
							#define SizeOut 0.085
							CIRCLE_MARK(ClimbFixed,0.09,0.075, -90),{},
							CIRCLE_MARK(ClimbFixed,SizeIn,SizeOut, 20-90),{},
							CIRCLE_MARK(ClimbFixed,SizeIn,SizeOut, 40-90),{},
							CIRCLE_MARK(ClimbFixed,SizeIn,SizeOut, 60-90),{},
							CIRCLE_MARK(ClimbFixed,SizeIn,SizeOut, 80-90),{},
							CIRCLE_MARK(ClimbFixed,SizeIn,SizeOut, -20-90),{},
							CIRCLE_MARK(ClimbFixed,SizeIn,SizeOut, -40-90),{},
							CIRCLE_MARK(ClimbFixed,SizeIn,SizeOut, -60-90),{},
							CIRCLE_MARK(ClimbFixed,SizeIn,SizeOut, -80-90),{},
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
							{{__EVAL(0.5 - 0.02),	__EVAL(	0.125 + 0.02)},	1},
							{{0.5,							0.125},			1},
							{{__EVAL(0.5 + 0.02),	__EVAL(	0.125 + 0.02)},	1},
							{{__EVAL(0.52 + 0.02),	__EVAL(	0.125 + 0.02)},	1},
							{{__EVAL(0.52 + 0.02),	__EVAL(	0.125 + 0.055)},	1},
							{{__EVAL(0.48 - 0.02),	__EVAL(	0.125 + 0.055)},	1},
							{{__EVAL(0.48 - 0.02),	__EVAL(	0.125 + 0.02)},	1},
							{{__EVAL(0.5 - 0.02),	__EVAL(	0.125 + 0.02)},	1},
						};
					};

					class HeadingLine
					{
						type				= line;
						width				= 4.0;
						points[]			=
						{
							{{0.3, 0.12}, 1},
							{{0.7, 0.12}, 1}
						};
					};

					// Climb indicator on the right side
					class HeadingNumber
					{
						type			= text;
						source			= heading;
						sourceScale		= 1;

						align			= center;
						scale			= 1;
						pos[]			= {{__EVAL(0.00+0.5), __EVAL(0.000+0.145)}, 1};
						right[]			= {{__EVAL(0.05+0.5), __EVAL(0.000+0.145)}, 1};
						down[]			= {{__EVAL(0.00+0.5), __EVAL(0.035+0.145)}, 1};
					};

					class HeadingScale
					{
						type			= scale;
						horizontal		= true;
						source			= heading;
						sourceScale		= 0.1;
						width			= 4.0;
						NeverEatSeaWeed = 1;

						top				= 0.30;
						center			= 0.50;
						bottom			= 0.70;

						lineXleft		= __EVAL(0.06 + 0.058);
						lineYright		= __EVAL(0.05 + 0.058);
						lineXleftMajor	= __EVAL(0.06 + 0.058);
						lineYrightMajor	= __EVAL(0.04 + 0.058);
						majorLineEach	= 2;
						numberEach		= 2;
						step			= __EVAL(5*0.1);
						stepSize		= __EVAL(1/29);

						align			= center;
						scale			= 1.0;
						pos[]			= {0.295, __EVAL(0.0 + 0.05)};
						right[]			= {0.35, __EVAL(0.0 + 0.05)};
						down[]			= {0.295, __EVAL(0.04 + 0.05)};
					};

/* ~~~~ WEAPON-DEPENDANT CROSSHAIRS ~~~~ */

					class MGun
					{
						condition		= "-2+(mgun+rocket)*ImpactDistance";

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
								{},


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
								CIRCLE_MARK_2B(ImpactPointRelative,LarAmmoMGunMax,0.06,0.05,0),{},
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
								CIRCLE_BIG(WeaponAim,0.25)
							};
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

					// Group to condition BombCrosshair by bomb being the selected weapon
					class BombCrosshairGroup
					{
						type			= group;
						condition		= bomb;

						class BombCrosshair
						{
							type			= line;
							width			= 4.0;
							points[]		=
							{
								CIRCLE_BIG(ImpactPoint, 0.1),{},
								CIRCLE_LIMIT(Limit0109, ImpactPoint, 0.02),
								{},
								{Velocity, 0.001, ImpactPoint, 1, Limit0109, 1, {0.0, 0.0}, 1},
								{Velocity, 1, Limit0109, 1, {0.0, 0.0}, 1}
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

					class WP
					{
						condition		= wpvalid;
						class WPdist
						{
							type			= text;
							source			= WPDist;
							sourceScale 	= 0.001;
							sourcePrecision = 1;

							align			= center;
							scale			= 1;
							TEXT_SIZEPOS(0.50,0.8,0.05,0.05)
						};
						class WP
						{
							width			= 1;
							type			= line;
							points[]		=
							{
								{Limit0109, 1, wppoint, 1, {HorizonBankRotFull, +0.015, -0.035}, 1},
								{Limit0109, 1, wppoint, 1, {HorizonBankRotFull, 0.0, 0.0}, 1},
								{Limit0109, 1, wppoint, 1, {HorizonBankRotFull, -0.015, -0.035}, 1},
							};
						};
					};
					class CoordXNumber
					{
						type			= text;
						source			= coordinateX;
						sourceScale		= 0.01;
						sourceLength	= 3;
						sourceOffset	= -0.5;

						align			= left;
						scale			= 1;
						pos[]			= {{__EVAL(0.10+0.729+0.045), __EVAL(0.900-0.071-0.04)} ,1};
						right[]			= {{__EVAL(0.15+0.729+0.045), __EVAL(0.900-0.071-0.04)}, 1};
						down[]			= {{__EVAL(0.10+0.729+0.045), __EVAL(0.935-0.071-0.04)}, 1};
					};
					class CoordYNumber: CoordXNumber
					{
						source			= coordinateY;
						pos[]			= {{__EVAL(0.10+0.806+0.045), __EVAL(0.900-0.071-0.04)} ,1};
						right[]			= {{__EVAL(0.15+0.806+0.045), __EVAL(0.900-0.071-0.04)}, 1};
						down[]			= {{__EVAL(0.10+0.806+0.045), __EVAL(0.935-0.071-0.04)}, 1};
					};
					class Time: CoordXNumber
					{
						source			= time;
						text   			= "%X";
						align			= left;
						pos[]			= {{__EVAL(0.10+0.804+0.045), __EVAL(0.900-0.038-0.04)} ,1};
						right[]			= {{__EVAL(0.15+0.804+0.045), __EVAL(0.900-0.038-0.04)}, 1};
						down[]			= {{__EVAL(0.10+0.804+0.045), __EVAL(0.935-0.038-0.04)}, 1};
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

					class TargetLocked
					{
						condition = "TargetHeight>=1";
						class shape
						{
							type=line;
							width = 4;
							points[]=
							{
								// target diamond
								{Target,1, Limit0109, 1, { 0.0, -0.015}, 1},
								{Target,1, Limit0109, 1, {-0.0075, 0.0}, 1},
								{Target,1, Limit0109, 1, { 0.0,  0.0125}, 1},
								{Target,1, Limit0109, 1, { 0.0075, 0.0}, 1},
								{Target,1, Limit0109, 1, { 0.0, -0.0125}, 1},
								{},
								// speed box
								{{0.145,0.06},1},
								{{0.215,0.06},1},
								{{0.215,0.11},1},
								{{0.145,0.11},1},
								{{0.145,0.06},1},{},
								// height box
								{{__EVAL(0.145+0.632),0.06},1},
								{{__EVAL(0.215+0.632),0.06},1},
								{{__EVAL(0.215+0.632),0.11},1},
								{{__EVAL(0.145+0.632),0.11},1},
								{{__EVAL(0.145+0.632),0.06},1},
							};
						};
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
						class TargetSpeed: SpeedNumber
						{
							source			= LarTargetSpeed;
							sourceScale		= 0.36;
							TEXT_SIZEPOS(0.21,0.065,0.045,0.045)
						};
						class TargetHeight: AltitudeNumber
						{
							source			= TargetHeight;
							sourceScale		= 0.1;
							sourceLength	= 3;
							TEXT_SIZEPOS(0.78,0.065,0.045,0.045)
						};
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
							TEXT_SIZEPOS(0.10,0.45,0.05,0.05)
						};
					};
					#define LARSize 0.45
					#define LARXPos 0.20
					#define LARYPos 0.245
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
									{LarAmmoMax,__EVAL(-LARSize),{__EVAL(LARXPos+0.001),__EVAL(LARYPos+0.1+LARSize)},1},
									{LarAmmoMax,__EVAL(-LARSize),{__EVAL(LARXPos+0.001),__EVAL(LARYPos+0.1+LARSize+0.005)},1},
									{LarAmmoMax,__EVAL(-LARSize),{__EVAL(LARXPos+0.012),__EVAL(LARYPos+0.1+LARSize+0.005)},1},
									{LarAmmoMax,__EVAL(-LARSize),{__EVAL(LARXPos+0.012),__EVAL(LARYPos+0.1+LARSize)},1}
								}
							};
						};

						class LARText1
						{
							type		= text;
							source		= LarTop;
							sourceScale	= 0.001;

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
							sourceScale		= 0.0008;
							pos[]			= {{__EVAL(LARXPos-0.065+0.04), __EVAL(LARYPos-0.014+LARSize*0.2)}, 1};
							right[]			= {{__EVAL(LARXPos-0.030+0.04), __EVAL(LARYPos-0.014+LARSize*0.2)}, 1};
							down[]			= {{__EVAL(LARXPos-0.065+0.04), __EVAL(LARYPos+0.014+LARSize*0.2)}, 1};
						};
						class LARText3: LARText1
						{
							source			= LarTop;
							sourcePrecision	= -1;
							sourceScale		= 0.0006;
							pos[]			= {{__EVAL(LARXPos-0.065+0.04), __EVAL(LARYPos-0.014+LARSize*0.4)}, 1};
							right[]			= {{__EVAL(LARXPos-0.030+0.04), __EVAL(LARYPos-0.014+LARSize*0.4)}, 1};
							down[]			= {{__EVAL(LARXPos-0.065+0.04), __EVAL(LARYPos+0.014+LARSize*0.4)}, 1};
						};
						class LARText4: LARText1
						{
							source			= LarTop;
							sourcePrecision	= -1;
							sourceScale		= 0.0004;
							pos[]			= {{__EVAL(LARXPos-0.065+0.04), __EVAL(LARYPos-0.014+LARSize*0.6)}, 1};
							right[]			= {{__EVAL(LARXPos-0.030+0.04), __EVAL(LARYPos-0.014+LARSize*0.6)}, 1};
							down[]			= {{__EVAL(LARXPos-0.065+0.04), __EVAL(LARYPos+0.014+LARSize*0.6)}, 1};
						};
						class LARText5: LARText1
						{
							source			= LarTop;
							sourcePrecision	= -1;
							sourceScale		= 0.0002;
							pos[]			= {{__EVAL(LARXPos-0.065+0.04), __EVAL(LARYPos-0.014+LARSize*0.8)}, 1};
							right[]			= {{__EVAL(LARXPos-0.030+0.04), __EVAL(LARYPos-0.014+LARSize*0.8)}, 1};
							down[]			= {{__EVAL(LARXPos-0.065+0.04), __EVAL(LARYPos+0.014+LARSize*0.8)}, 1};
						};
						class LARText6: LARText1
						{
							source			= static;
							text			= 0;
							sourcePrecision	= -1;
							sourceScale		= 0.0002;
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
