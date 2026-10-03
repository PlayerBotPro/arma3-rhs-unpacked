#undef DEF_HORIZONT_SPACING_Plus
#undef DEF_HORIZONT_SPACING_Minus

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
	}

				topLeft					= HUD LH;
				topRight				= HUD PH;
				bottomLeft				= HUD LD;
				/// adjust position inside of memory points LOD
				borderLeft				= 0;
				borderRight				= 0;
				borderTop				= 0;
				borderBottom			= 0.2;
				color[]					= {0.15, 1.0, 0.15, 1.0};
				enableParallax			= true;
				font					= "rhsusf_digital_font_usa";

				class Bones
				{
					class PlaneOrientation
					{
						type			= fixed;
						pos[]			= {PosX0Center, PosYCenterHorizont};
					};

					class WeaponAim
					{
						type			= vector;
						source			= weapon;
						pos0[]			= {PosX0Center, PosY0Center};	// position of 0-degree dive line
						pos10[]			= {__EVAL(PosX0Center + SizeX10deg), __EVAL(PosY0Center + SizeY10deg)};	// position of 10 degree bank and 10-degree dive (used to adjust scale)
					};
					class WeaponAimAA
					{
						type			= vector;
						source			= weapon;
						pos0[]			= {PosX0Center, __EVAL(PosY0Center-0.4)};	// position of 0-degree dive line
						pos10[]			= {__EVAL(PosX0Center + SizeX10deg), __EVAL(PosY0Center + SizeY10deg-0.3)};	// position of 10 degree bank and 10-degree dive (used to adjust scale)
					};


					class Target
					{
						type			= vector;
						source			= target;
						pos0[]={__EVAL(PosX0Center),__EVAL(PosY0Center+0.05)};
						pos10[]={__EVAL(PosX0Center+SizeX10deg),__EVAL(PosY0Center+SizeY10deg+0.15)};
					};
					class TargetingPodDir
					{
						source			= pilotcamera;
						type			= vector;
						pos0[]			= {__EVAL(PosX0Center),__EVAL(PosY0Center-0.05)};
						pos10[]			= {__EVAL(PosX0Center+SizeX10deg+0.05),__EVAL(PosY0Center+SizeY10deg+0.15)};
					};
					class TargetingPodTarget: TargetingPodDir
					{
						source			= pilotcameratarget;
						pos0[]			= {__EVAL(PosX0Center),__EVAL(PosY0Center+0.05)};
						pos10[]			= {__EVAL(PosX0Center+SizeX10deg),__EVAL(PosY0Center+SizeY10deg+0.15)};
					};
					class ImpactPoint
					{
						type			= vector;
						source			= ImpactPoint;
						pos0[]			= {0.5, __EVAL(PosY0Center)};
						pos10[]			= {__EVAL(0.5 + SizeX10deg), __EVAL(PosY0Center + SizeY10deg)};
					};
					class NormalizeBombCircle
					{
						type			= normalizedorsmaller;
						limit			= 0.08;
						aspectRatio		= __EVAL(1 / XtoYscale);
					};

					class Velocity
					{
						type			= vector;
						source			= velocity;
						pos0[]			= {PosX0Center, PosY0Center};
						pos10[]			= {__EVAL(PosX0Center + SizeX10deg), __EVAL(PosY0Center + SizeY10deg)};
					};

					class Level0
					{
						pos0[]	= {PosX0Center, PosYCenterHorizont};
						pos10[]	= {__EVAL(PosX0Center + SizeX10degHorizon), __EVAL(PosYCenterHorizont + SizeY10degHorizon)};
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

					class Limit0109
					{
						type			= limit;
						limits[]		= {0.1,0.1,0.9,0.9};
					};

					class LimitWaypoint
					{
						type			= limit;
						limits[]		= {0.2,0.97,0.8,0.97};
					};
					class WPPoint
					{
						type			= vector;
						source			= WPPoint;
						pos0[]			= {0.5, __EVAL(PosY0Center)};
						pos10[]			= {__EVAL(0.5 + SizeX10deg), __EVAL(PosY0Center + SizeY10deg)};
					};

					// Bone for climb scale
					class VerticalSpeed
					{
						type			= linear;
						source			= vspeed;
						sourceScale		= 1.0;
						min				= -100;
						max				= 100;
						minPos[]		= {0.0, 0.15};
						maxPos[]		= {0.0, -0.15};
					};

					class HorizonIndicatorBank
					{
						type			= rotational;
						source			= horizonBank;
						sourceScale		= 1.0;
						center[]		= {0.065, 0.12};
						min				= -PI;
						max				= PI;
						minAngle		= 0;
						maxAngle		= 360;
						aspectRatio		= __EVAL(1 / XtoYscale);
					};
					class HorizonIndicatorDive: HorizonIndicatorBank
					{
						source			= horizonDive;
						min			= __EVAL(-PI / 2);
						max			= __EVAL(PI / 2);
						minAngle		= 90;
						maxAngle		= -90;
					};
					class TerrainBone
					{
						type			= linear;
						source			= altitudeAGL;
						sourceScale		= 1.0;
						sourceOffset 	= -1;
						min				= 0;
						max				= 500;
						minPos[]		= {0.0, -0.195};
						maxPos[]		= {0.0, 0.0};
					};
					class TerrainBone2: TerrainBone
					{
						sourceOffset 	= 0;
						min				= 500;
						max				= 1500;
						minPos[]		= {0.0, -0.078};
						maxPos[]		= {0.0, 0.0};
					};
					class VerticalSpeedBone
					{
						type			= linear;
						source			= vspeed;
						sourceScale		= 1;
						min				= -10;
						max				= 10;
						minPos[]		= {0, -0.32};
						maxPos[]		= {0, 0.32};
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
					class ILS_H
					{
						type=ils;
						pos0[]={0.5,__EVAL(PosY0Center)};
						pos3[]={__EVAL(0.5+(SizeX10deg)*3/10),__EVAL(PosY0Center)};
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
				};

				class Draw
				{
					alpha				= user3;
					color[]				= {user0, user1, user2};
					condition			= on;

/* ~~~~ MOVEMENT BASED CROSSHAIRS ~~~~ */
					// Plane forward direction crosshair
					// replaced with gun boresight indicator
					class PlaneOrientationCrosshair
					{
						clipTL[]		= {0.0, 1.0};
						clipBR[]		= {1.0, 0.0};
						type			= line;
						width			= 4.0;
						points[]		=
						{
							{PlaneOrientation,{		-0.01,	0},1},
							{PlaneOrientation,{		 0.01,	0},1},{},
							{PlaneOrientation,{		-0,		__EVAL(-0.01/XtoYscale)},1},
							{PlaneOrientation,{		 0,  	__EVAL( 0.01/XtoYscale)},1},{}
							//CIRCLE(PlaneOrientation,0.02)
						};
					};

					// Plane movement direction crosshair
					class PlaneMovementCrosshair
					{
						clipTL[]		= {0.0, 1.0};
						clipBR[]		= {1.0, 0.0};
						type			= line;
						width			= 4.0;
						points[]		=
						{
							CIRCLE(Velocity,0.02),{},
							{Velocity, { 0.04, __EVAL(0/XtoYscale)}, 1}, {Velocity, { 0.02, __EVAL(0/XtoYscale)}, 1},{},
							{Velocity, {-0.04, __EVAL(0/XtoYscale)}, 1}, {Velocity, {-0.02, __EVAL(0/XtoYscale)}, 1},{},
							{Velocity, {0, __EVAL(-0.04/XtoYscale)}, 1}, {Velocity, {0, __EVAL(-0.02/XtoYscale)}, 1},{}
						};
					};

					HUD_TEXT_STATIC(0.06,0.68,0.06,0.06,right,"BARO",BaroStatic)
					class WeaponGroup
					{
						condition = "mgun + ATmissile + bomb + rocket";
						class SlantRange
						{
							type			= text;
							source			= ImpactDistance;
							sourceScale		= 1;
							sourceLength 	= 4;
							refreshRate		= 0.1;

							align			= right;
							scale			= 1;
							TEXT_SIZEPOS(0.04,0.86,0.06,0.06)
						};
						HUD_TEXT_STATIC(0.155,0.86,0.06,0.06,right,"M",SlantRangeText)
						class ValidTarget
						{
							condition = "targetDist>=1";
							class ImpactHeight
							{
								type			= text;
								source			= targetHeight;
								sourceScale		= 1;
								sourceLength 	= 1;
								refreshRate		= 0.1;

								align			= right;
								scale			= 1;
								TEXT_SIZEPOS(0.04,0.81,0.06,0.06)
							};
						};
					};
					class NavigationMode
					{
						condition = "1 - (mgun + AAmissile + ATmissile + bomb + rocket + user4)";

						class VerticalSpeedScale
						{
							type			= line;
							width			= 4.0;
							points[]		=
							{
								// Side vspeed scale
								#define SCALE_SPACE 0.039

								{{__EVAL(0.875-0.12), __EVAL(0.50 - SCALE_SPACE * 2)}, 1},
								{{__EVAL(0.895-0.12), __EVAL(0.50 - SCALE_SPACE * 2)}, 1}, {},
								{{__EVAL(0.875-0.12), __EVAL(0.50 - SCALE_SPACE * 1)}, 1},
								{{__EVAL(0.895-0.12), __EVAL(0.50 - SCALE_SPACE * 1)}, 1}, {}, // middle
								{{__EVAL(0.875-0.12), __EVAL(0.50 - SCALE_SPACE * 0)}, 1},
								{{__EVAL(0.895-0.12), __EVAL(0.50 - SCALE_SPACE * 0)}, 1}, {},
								{{__EVAL(0.875-0.12), __EVAL(0.50 + SCALE_SPACE * 5)}, 1},
								{{__EVAL(0.895-0.12), __EVAL(0.50 + SCALE_SPACE * 5)}, 1}, {},
								{{__EVAL(0.875-0.12), __EVAL(0.50 + SCALE_SPACE * 4)}, 1},
								{{__EVAL(0.895-0.12), __EVAL(0.50 + SCALE_SPACE * 4)}, 1}, {},
								{{__EVAL(0.875-0.12), __EVAL(0.50 + SCALE_SPACE * 3)}, 1},
								{{__EVAL(0.895-0.12), __EVAL(0.50 + SCALE_SPACE * 3)}, 1}, {},
								{{__EVAL(0.875-0.12), __EVAL(0.50 + SCALE_SPACE * 2)}, 1},
								{{__EVAL(0.895-0.12), __EVAL(0.50 + SCALE_SPACE * 2)}, 1}, {},
								{{__EVAL(0.875-0.12), __EVAL(0.50 + SCALE_SPACE * 1)}, 1},
								{{__EVAL(0.895-0.12), __EVAL(0.50 + SCALE_SPACE * 1)}, 1},{},

								{{__EVAL(0.875-0.12), __EVAL(0.50 - SCALE_SPACE * 0)}, 1},
								{{__EVAL(0.875-0.12), __EVAL(0.50 + SCALE_SPACE * 5)}, 1}, {},
								// ALT T symbol
								{TerrainBone2,1,TerrainBone,{__EVAL(0.875-0.12), __EVAL(0.50 + SCALE_SPACE * 5)}, 1},
								{TerrainBone2,1,TerrainBone,{__EVAL(0.855-0.12), __EVAL(0.50 + SCALE_SPACE * 5)}, 1}, {},
								{TerrainBone2,1,TerrainBone,{__EVAL(0.855-0.12), __EVAL(0.50 + SCALE_SPACE * 5.4)}, 1},
								{TerrainBone2,1,TerrainBone,{__EVAL(0.855-0.12), __EVAL(0.50 + SCALE_SPACE * 4.6)}, 1}, {}
							};
						};

						HUD_TEXT_STATIC(0.91-0.12,0.512 + 0.039 * 4,0.05,0.05,center,"0",AltText0)
						HUD_TEXT_STATIC(0.91-0.12,0.512 + 0.039 * 3,0.05,0.05,center,"1",AltText1)
						HUD_TEXT_STATIC(0.91-0.12,0.512 + 0.039 * 2,0.05,0.05,center,"2",AltText2)
						HUD_TEXT_STATIC(0.91-0.12,0.512 + 0.039 * 1,0.05,0.05,center,"3",AltText3)
						HUD_TEXT_STATIC(0.91-0.12,0.512 + 0.039 * 0,0.05,0.05,center,"4",AltText4)
						HUD_TEXT_STATIC(0.91-0.12,0.512 - 0.039 * 1,0.05,0.05,center,"5",AltText5)
						HUD_TEXT_STATIC(0.91-0.12,0.512 - 0.039 * 2,0.05,0.05,center,"10",AltText10)
						HUD_TEXT_STATIC(0.91-0.12,0.512 - 0.039 * 3,0.05,0.05,center,"15",AltText15)
					};

/* ~~~~ WEAPON-DEPENDANT CROSSHAIRS ~~~~ */
					// Group to condition MachineGunCrosshair by machine gun being the selected weapon
					class MachineGunCrosshairGroup
					{
						type			= group;
						condition		= "mgun";

						class WeaponName
						{
							type			= text;
							source			= weapon;
							sourceScale		= 1;

							align			= right;
							scale			= 1;
							TEXT_SIZEPOS(0.04,0.76,0.06,0.06)
						};

						class AmmoCount
						{
							type			= text;
							source			= ammo;
							sourceScale		= 1;

							align			= right;
							scale			= 1;
							TEXT_SIZEPOS(0.13,0.76,0.06,0.06)
						};
						HUD_TEXT_STATIC(0.10,0.76,0.06,0.06,right,"/",AmmoStatic)

						class MachineGunCrosshair
						{
							type			= line;
							width			= 3.0;
							points[]		=
							{
								// main cross
								{ImpactPoint,{ 0.0, __EVAL(-0.09/XtoYscale)}, 1},
								{ImpactPoint,{ 0.0, __EVAL(-0.08/XtoYscale)}, 1},
								{},
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
								{}

							};
						};
						class Circle
						{
							type			= line;
							width			= 9.0;
							points[]		=
							{
								CIRCLE_LOCK_TIME(ImpactPoint, MissileFlightTimeRot, 0.08)
							};
						};
						class Circle_Min_Range
						{
							type			= line;
							width			= 3.0;
							points[]		=
							{
								CIRCLE_BIG(ImpactPoint, 0.08)
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
								CIRCLE_BIG(WeaponAimAA,0.04)
							};
						};
						class AmmoCount
						{
							type			= text;
							source			= ammoFormat;
							sourceScale		= 1;

							align			= right;
							scale			= 1;
							TEXT_SIZEPOS(0.04,0.76,0.06,0.06)
						};
					};

					// Group to condition ATMissileCrosshair by AT missile being the selected weapon
					class ATMissileCrosshairGroup
					{
						condition		= ATmissile;
						type			= group;

						// TGP direction pos
						class TargetingPodGroup
						{
							condition = "1-pilotcameralock-missilelocked";
							class TargetingPodDir
							{
								type			= line;
								width			= 3.0;
								points[]		=
								{
									CIRCLE_AGM(TargetingPodDir, 0.035),{},
									//middle dot
									{TargetingPodDir,{ 0.0, __EVAL(-0.002/XtoYscale)}, 1},
									{TargetingPodDir,{ 0.0,  __EVAL(0.002/XtoYscale)}, 1},
									{},
									{TargetingPodDir,{-0.002, 0.0}, 1},
									{TargetingPodDir,{ 0.002, 0.0}, 1},
									{}
								};
							};
							class Distance
							{
								type			= text;
								source			= targetDist;
								sourceScale		= 0.001;
								sourcePrecision	= 1;
								max				= 15;

								align			= center;
								scale			= 1;
								pos[]			= {TargetingPodDir, {-0.002,  __EVAL(0.11-0.065)}, 1};
								right[]			= {TargetingPodDir, { 0.045,  __EVAL(0.11-0.065)}, 1};
								down[]			= {TargetingPodDir, {-0.002,  __EVAL(0.15-0.065)}, 1};
							};
						};
						class TargetingPodGroupOn
						{
							condition = "pilotcameralock-missilelocked";
							class TargetingPodDir
							{
								type			= line;
								width			= 3.0;
								points[]		=
								{
									CIRCLE_BIG_2B(TargetingPodTarget,Limit0109, 0.035),{},
									// main cross
									{TargetingPodTarget,{ XY_Scaled(0.0, -0.035)}, 1},
									{TargetingPodTarget,{ XY_Scaled(0.0, -0.020)}, 1},{},
									{TargetingPodTarget,{ XY_Scaled(0.0, 0.035)}, 1},
									{TargetingPodTarget,{ XY_Scaled(0.0, 0.020)}, 1},{},
									{TargetingPodTarget,{ XY_Scaled(-0.035, -0.0)}, 1},
									{TargetingPodTarget,{ XY_Scaled(-0.020, -0.0)}, 1},{},
									{TargetingPodTarget,{ XY_Scaled(0.035, -0.0)}, 1},
									{TargetingPodTarget,{ XY_Scaled(0.020, -0.0) }, 1},{},
									//middle dot
									{TargetingPodTarget,{ 0.0, __EVAL(-0.002/XtoYscale)}, 1},
									{TargetingPodTarget,{ 0.0,  __EVAL(0.002/XtoYscale)}, 1},
									{},
									{TargetingPodTarget,{-0.002, 0.0}, 1},
									{TargetingPodTarget,{ 0.002, 0.0}, 1},
									{}
								};
							};
							class Distance
							{
								type			= text;
								source			= targetDist;
								sourceScale		= 0.001;
								sourcePrecision	= 1;
								max				= 15;

								align			= center;
								scale			= 1;
								pos[]			= {TargetingPodTarget, {-0.002,  __EVAL(0.11-0.065)}, 1};
								right[]			= {TargetingPodTarget, { 0.045,  __EVAL(0.11-0.065)}, 1};
								down[]			= {TargetingPodTarget, {-0.002,  __EVAL(0.15-0.065)}, 1};
							};
						};
						class TargetLocked
						{
							condition = "missilelocked";
							class TargetingPodDir
							{
								type			= line;
								width			= 3.0;
								points[]		=
								{
									CIRCLE_BIG_2B(Target,Limit0109, 0.035),{},
									// main cross
									{Target,{ XY_Scaled(0.0, -0.035)}, 1},
									{Target,{ XY_Scaled(0.0, -0.020)}, 1},{},
									{Target,{ XY_Scaled(0.0, 0.035)}, 1},
									{Target,{ XY_Scaled(0.0, 0.020)}, 1},{},
									{Target,{ XY_Scaled(-0.035, -0.0)}, 1},
									{Target,{ XY_Scaled(-0.020, -0.0)}, 1},{},
									{Target,{ XY_Scaled(0.035, -0.0)}, 1},
									{Target,{ XY_Scaled(0.020, -0.0) }, 1},{},
									//middle dot
									{Target,{ 0.0, __EVAL(-0.002/XtoYscale)}, 1},
									{Target,{ 0.0,  __EVAL(0.002/XtoYscale)}, 1},
									{},
									{Target,{-0.002, 0.0}, 1},
									{Target,{ 0.002, 0.0}, 1},
									{}
								};
							};
							class Distance
							{
								type			= text;
								source			= targetDist;
								sourceScale		= 0.001;
								sourcePrecision	= 1;
								max				= 15;

								align			= center;
								scale			= 1;
								pos[]			= {Target, {-0.002,  __EVAL(0.11-0.065)}, 1};
								right[]			= {Target, { 0.045,  __EVAL(0.11-0.065)}, 1};
								down[]			= {Target, {-0.002,  __EVAL(0.15-0.065)}, 1};
							};
						};
						class AmmoCount
						{
							type			= text;
							source			= ammoFormat;
							sourceScale		= 1;

							align			= right;
							scale			= 1;
							TEXT_SIZEPOS(0.04,0.76,0.06,0.06)
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
						class AmmoCount
						{
							type			= text;
							source			= ammoFormat;
							sourceScale		= 1;

							align			= right;
							scale			= 1;
							TEXT_SIZEPOS(0.04,0.76,0.06,0.06)
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
						class AmmoCount
						{
							type			= text;
							source			= ammoFormat;
							sourceScale		= 1;

							align			= right;
							scale			= 1;
							TEXT_SIZEPOS(0.04,0.76,0.06,0.06)
						};
					};


/* ~~~~ PITCH AND ROLL INDICATORS ~~~~ */
					// Pitch indicator on the left side
					class PitchNumber
					{
						type			= text;
						source			= horizonDive;
						sourceScale		= 57.2957795;

						align			= right;
						scale			= 1;
						TEXT_SIZEPOS(0.84,0.56,0.07,0.07)
					};

					class BaroNumber
					{
						type			= text;
						source			= altitudeASL;
						sourceScale		= 1;
						sourceLength	= 1;

						align			= right;
						scale			= 1;
						TEXT_SIZEPOS(0.84,0.50,0.07,0.07)
					};

/* ~~~~ SPEED INDICATOR ~~~~ */
					// Speed indicator on the left side
					class SpeedNumber
					{
						type			= text;
						source			= speed;
						sourceScale		= 3.6;

						align			= right;
						scale			= 1;
						TEXT_SIZEPOS(0.10,0.5,0.07,0.07)
					};
					class LandingMode
					{
						condition = "user4 - (mgun + AAmissile + ATmissile + bomb + rocket)";
						class VerticalSpeedScale
						{
							type			= line;
							width			= 4.0;
							points[]		=
							{
								// Side vspeed scale
								#define SCALE_SPACE 0.039

								{{__EVAL(0.870-0.14), __EVAL(0.50 - SCALE_SPACE * 5)}, 1},
								{{__EVAL(0.900-0.14), __EVAL(0.50 - SCALE_SPACE * 5)}, 1}, {},
								{{__EVAL(0.875-0.14), __EVAL(0.50 - SCALE_SPACE * 4)}, 1},
								{{__EVAL(0.885-0.14), __EVAL(0.50 - SCALE_SPACE * 4)}, 1}, {},
								{{__EVAL(0.875-0.14), __EVAL(0.50 - SCALE_SPACE * 3)}, 1},
								{{__EVAL(0.885-0.14), __EVAL(0.50 - SCALE_SPACE * 3)}, 1}, {},
								{{__EVAL(0.875-0.14), __EVAL(0.50 - SCALE_SPACE * 2)}, 1},
								{{__EVAL(0.885-0.14), __EVAL(0.50 - SCALE_SPACE * 2)}, 1}, {},
								{{__EVAL(0.875-0.14), __EVAL(0.50 - SCALE_SPACE * 1)}, 1},
								{{__EVAL(0.885-0.14), __EVAL(0.50 - SCALE_SPACE * 1)}, 1}, {}, // middle
								{{__EVAL(0.870-0.14), __EVAL(0.50 - SCALE_SPACE * 0)}, 1},
								{{__EVAL(0.930-0.14), __EVAL(0.50 - SCALE_SPACE * 0)}, 1}, {},
								{{__EVAL(0.870-0.14), __EVAL(0.50 + SCALE_SPACE * 5)}, 1},
								{{__EVAL(0.900-0.14), __EVAL(0.50 + SCALE_SPACE * 5)}, 1}, {},
								{{__EVAL(0.875-0.14), __EVAL(0.50 + SCALE_SPACE * 4)}, 1},
								{{__EVAL(0.885-0.14), __EVAL(0.50 + SCALE_SPACE * 4)}, 1}, {},
								{{__EVAL(0.875-0.14), __EVAL(0.50 + SCALE_SPACE * 3)}, 1},
								{{__EVAL(0.885-0.14), __EVAL(0.50 + SCALE_SPACE * 3)}, 1}, {},
								{{__EVAL(0.875-0.14), __EVAL(0.50 + SCALE_SPACE * 2)}, 1},
								{{__EVAL(0.885-0.14), __EVAL(0.50 + SCALE_SPACE * 2)}, 1}, {},
								{{__EVAL(0.875-0.14), __EVAL(0.50 + SCALE_SPACE * 1)}, 1},
								{{__EVAL(0.885-0.14), __EVAL(0.50 + SCALE_SPACE * 1)}, 1},{},

								{{__EVAL(0.870-0.14), __EVAL(0.50 - SCALE_SPACE * 0)}, 1},
								{{__EVAL(0.930-0.14), __EVAL(0.50 - SCALE_SPACE * 0)}, 1},
								{VerticalSpeedBone, {__EVAL(0.930-0.14), __EVAL(0.50 - SCALE_SPACE * 0)}, 1},
								{VerticalSpeedBone, {__EVAL(0.900-0.14), __EVAL(0.50 - SCALE_SPACE * 0)}, 1}, {}
							};
						};
						class VerticalSpeedArrow
						{
							type			= polygon;
							points[]		=
							{
								// Side vspeed arrow
								{
									{VerticalSpeedBone, {__EVAL(0.88-0.11), 0.492}, 1},
									{VerticalSpeedBone, {__EVAL(0.87-0.11), 0.50}, 1},
									{VerticalSpeedBone, {__EVAL(0.88-0.11), 0.508}, 1}
								}
							};
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
						};
					};

/* ~~~~ HEADING SCALE ~~~~ */
					// Arrows above and below heading scale
					class HeadingArrows
					{
						type			= line;
						width			= 3.0;
						points[]		=
						{
						// Top arrow for heading scale
							{{ __EVAL(0.5 - 0.014),  __EVAL(0.915 + 0.022 + 0.02)}, 1},
							{{ __EVAL(0.5 + 0.000),  __EVAL(0.915 + 0.000 + 0.02)}, 1},
							{{ __EVAL(0.5 + 0.014),  __EVAL(0.915 + 0.022 + 0.02)}, 1},
							{{ __EVAL(0.5 - 0.014),  __EVAL(0.915 + 0.022 + 0.02)}, 1},
							{},
						// Bottom arrow for heading scale
							{WPPoint, 1, LimitWaypoint, 1,{ __EVAL(0.0 - 0.011),  __EVAL(0.0 + 0.000)}, 1},
							{WPPoint, 1, LimitWaypoint, 1,{ __EVAL(0.0 - 0.011),  __EVAL(0.0 + 0.022)}, 1},
							{},
							{WPPoint, 1, LimitWaypoint, 1,{ __EVAL(0.0 + 0.011),  __EVAL(0.0 + 0.000)}, 1},
							{WPPoint, 1, LimitWaypoint, 1,{ __EVAL(0.0 + 0.011),  __EVAL(0.0 + 0.022)}, 1}
						};
					};

					class HeadingScale
					{
						type			= scale;
						horizontal		= true;
						source			= heading;
						sourceScale		= 0.1;
						sourceLength	= 2;
						width			= 4.0;

						top				= 0.3;
						center			= 0.5;
						bottom			= 0.7;

						lineXleft		= 0.92;
						lineYright		= 0.90;
						lineXleftMajor	= 0.93;
						lineYrightMajor	= 0.90;
						majorLineEach	= 2;
						numberEach		= 2;
						step			= __EVAL(5*0.1);
						stepSize		= __EVAL(1/18);

						align			= center;
						scale			= 1.0;
						pos[]			= {__EVAL(0.05+0.245), __EVAL(0.90-0.035)};
						right[]			= {__EVAL(0.09+0.245), __EVAL(0.90-0.035)};
						down[]			= {__EVAL(0.05+0.245), __EVAL(0.94-0.035)};
					};

/* ~~~~ WAYPOINT INDICATOR ~~~~ */
					class RadarNumber
					{
						type			= text;
						source			= altitudeAGL;
						sourceScale		= 1;
						sourceLength	= 4;
						sourceOffset 	= -0.5;

						align			= right;
						scale			= 1;
						TEXT_SIZEPOS(0.725,0.775,0.06,0.06)
					};
					HUD_TEXT_STATIC(0.825,0.775,0.06,0.06,right,"R",RadarText)
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
					HUD_TEXT_STATIC(0.765,0.820,0.06,0.06,right,"/",WPstatic)
					HUD_TEXT_STATIC(0.725,0.865,0.06,0.06,right,":11:34/-00:0",WPTime)
					class WPCurrentTime: WPdist
					{
						source			= time;
						text   			= "%X";
						align			= right;
						TEXT_SIZEPOS(0.725,0.910,0.06,0.06)
					};
					class WaypointGroup
					{
						condition = wpvalid;

						class Tadpol
						{
							type			= line;
							width			= 3;
							points[]		=
							{
							};
						};
					};
/* ~~~~ HORIZON ~~~~ */
					class HorizontalLine
					{
						clipTL[]		= {0.2, 0.0};
						clipBR[]		= {0.8, 0.96};

						class Level0
						{
							type			= line;
							source			= Level0;
							width			= 3;

							#define lineSegmentWidth 0.09/2
							points[]		=
							{
								{Level0, { __EVAL(-6 * lineSegmentWidth), 0}, 1},
								{Level0, { __EVAL(-1.5 * lineSegmentWidth), 0}, 1},

								{},

								{Level0, { __EVAL(1.5 * lineSegmentWidth), 0}, 1},
								{Level0, { __EVAL(6 * lineSegmentWidth), 0}, 1}
							};
						};
						DEF_HORIZONT_SPACING_Minus(05);
						DEF_HORIZONT_SPACING_Plus(05);
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

					class LockingSquare
					{
						condition = "bomb + AAmissile";
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
						class TargetLocking
						{
							condition = "missileLocking";
							blinkingPattern[]	= {0.3, 0.3};
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
					};
					//RADRAR TARGET BOXES
					class RadarBoxes
					{
						type	= radar;
						pos0[]	= {__EVAL(PosX0Center),__EVAL(PosY0Center)};
						pos10[]	= {__EVAL(PosX0Center+SizeX10deg),__EVAL(PosY0Center+SizeY10deg)};
						width = 4;

						class points {};
						class pointsUnknown: points {};
						class pointsUnknownEnemy: pointsUnknown {};
						class pointsUnknownFriend: pointsUnknown {};
						class pointsUnknownCiv: pointsUnknown {};
						class pointsCar: points {};
						class pointsCarEnemy: pointsCar {};
						class pointsCarFriend: pointsCar {};
						class pointsCarCiv: pointsCar {};
						class pointsCarNeutral: pointsCar {};
						class pointsTank: points {};
						class pointsTankEnemy: pointsTank {};
						class pointsTankFriend: pointsTank {};
						class pointsTankCiv: pointsTank {};
						class pointsTankNeutral: pointsTank {};
						class pointsAirplane {};
						class pointsAirplaneEnemy: pointsAirplane {};
						class pointsAirplaneFriend: pointsAirplane {};
						class pointsHeli {};
						class pointsHeliEnemy {};
						class pointsHeliFriend {};
						class pointsLaser
						{
							class Draw
							{
								type		= line;
								width		= 3;
								points[]=
								{
									POINT_MARK_NB(0.015, 0),
									POINT_MARK_NB(0.015, 90),
									POINT_MARK_NB(0.015, 180),
									POINT_MARK_NB(0.015, 270),
									POINT_MARK_NB(0.015, 0),{},
									POINT_MARK_NB(0.01, 45),
									POINT_MARK_NB(0.021, 45),{},
									POINT_MARK_NB(0.01, 135),
									POINT_MARK_NB(0.021, 135),{},
									POINT_MARK_NB(0.01, 225),
									POINT_MARK_NB(0.021, 225),{},
									POINT_MARK_NB(0.01, 315),
									POINT_MARK_NB(0.021, 315),{},
								};
							};
						};
						class pointsNVG: pointsLaser {};
						class pointsStatic {};
						class pointsStaticEnemy: pointsStatic {};
						class pointsStaticFriend: pointsStatic {};
						class pointsStaticCiv: pointsStatic {};
						class pointsStaticNeutral: pointsStatic {};
					};
/*
					#define LARSize 0.22
					#define LARXPos 0.23
					#define LARYPos 0.45
					class LAR //launch acceptability region
					{
						type		= group;
						condition	= "(AAmissile + missilelocked)/2";

						// AA missile crosshair
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
								//{LarAmmoMin,__EVAL(-LARSize),{__EVAL(LARXPos+0.004),__EVAL(LARYPos+LARSize)},1},{LarAmmoMax,__EVAL(-LARSize),{__EVAL(LARXPos+0.004),__EVAL(LARYPos+LARSize)},1},{},
								//{LarAmmoMin,__EVAL(-LARSize),{__EVAL(LARXPos+0.008),__EVAL(LARYPos+LARSize)},1},{LarAmmoMax,__EVAL(-LARSize),{__EVAL(LARXPos+0.008),__EVAL(LARYPos+LARSize)},1},{},
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
						};
						class SpeedText: TopText
						{
							source		= LarTargetSpeed;
							align		= left;
							sourceScale	= 3.6;
							pos[]		= {LarTargetDist,__EVAL(-LARSize),{__EVAL(LARXPos-0.03), __EVAL(LARYPos+LARSize-0.02)},1};
							right[]		= {LarTargetDist,__EVAL(-LARSize),{__EVAL(LARXPos+0.01), __EVAL(LARYPos+LARSize-0.02)},1};
							down[]		= {LarTargetDist,__EVAL(-LARSize),{__EVAL(LARXPos-0.03), __EVAL(LARYPos+LARSize+0.02)},1};
						};
					};*/
				};