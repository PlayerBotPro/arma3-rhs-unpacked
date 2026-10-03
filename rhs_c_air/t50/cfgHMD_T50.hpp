
				helmetMountedDisplay = 1;
				#define HMD_SIZE 0.065
				helmetPosition[] = {__EVAL(-HMD_SIZE/2), __EVAL(HMD_SIZE/2), 0.1};
				helmetRight[] = {HMD_SIZE, 0.0, 0.0};
				helmetDown[] = {0.0, -HMD_SIZE, 0.0};

				/// adjust position inside of memory points LOD
				borderLeft				= 0;
				borderRight				= 0;
				borderTop				= 0;
				borderBottom			= 0;
				color[]					= {0.0, 1.0, 0.0, 0.1};
				font					= "rhs_digital_font_rus";

				class Bones
				{
					class PlaneW
					{
						type			= fixed;
						pos[]			= {PosX0Center,	PosY0Center};
						pos10[]			= {__EVAL(PosX0Center + SizeX10deg),	__EVAL(PosY0Center + SizeY10deg)};
					};
					class Target
					{
						source	= targettoview;
						type	= vector;
						pos0[]	= {__EVAL(PosX0Center),__EVAL(PosY0Center)};
						pos10[]	= {__EVAL(PosX0Center+SizeX10deg),__EVAL(PosY0Center+SizeY10deg)};
					};
				};

				class Draw
				{
					color[]				= {0.15, 1.0, 0.15};
					alpha				= 1;
					condition			= on;
/* ~~~~ HELMET MODE ~~~~ */

					class HeadOutside
					{
						condition = "(abs(cameraHeadingDiffY)>7)+(abs(cameraHeadingDiffX)>12)";
						class SearchMode
						{
							condition = "1-missileLocked - missileLocking";
							class CircleLock
							{
								type				= line;
								width				= 12.0;
								points[]			=
								{
									CIRCLE_BIG(PlaneW,0.06),{}
								};
							};
						};

						class Locking
						{
							blinkingPattern[]	= {0.2, 0.2};
							blinkingStartsOn	= true;
							condition = "missileLocking";
							class CircleLock
							{
								type				= line;
								width				= 12.0;
								points[]			=
								{
									CIRCLE_BIG(Target,0.06),{}
								};
							};
						};
						class Locked
						{
							condition = "missileLocked";
							class CircleLock
							{
								type				= line;
								width				= 12.0;
								points[]			=
								{
									CIRCLE_BIG(Target,0.06),{}
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
						class RadarBoxes
						{
							type	= radartoview;
							pos0[]	= {__EVAL(PosX0Center),__EVAL(PosY0Center)};
							pos10[]	= {__EVAL((PosX0Center)+(SizeX10deg)),__EVAL((PosY0Center)+(SizeY10deg))};

							width = 3;
							points[]=
							{
								CIRCLE_BIG_NB(0.02),{}
							};
						};
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
						class TargetLocked
						{
							condition = "TargetHeight>=1";
							class shape
							{
								type=line;
								width = 4;
								points[]=
								{
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
						class HeadingHeadNumber
						{
							type			= text;
							source			= cameraDir;
							sourceScale		= 1;

							align			= center;
							scale			= 1;
							pos[]			= {{0.80-0.302, 0.082+0.001}, 1};
							right[]			= {{0.83-0.302, 0.082+0.001}, 1};
							down[]			= {{0.80-0.302, 0.113+0.001}, 1};
						};
						class HeadingArrow
						{
							type			= line;
							width			= 3.0;
							points[]		=
							{
								#define BSIZE 0.022
								{ { __EVAL(0.50 - BSIZE)			, __EVAL(0.115 - 0.04)	},1 },
								{ { __EVAL(0.50 + BSIZE)			, __EVAL(0.115 - 0.04)	},1 },
								{ { __EVAL(0.50 + BSIZE + 0.03)		, __EVAL(0.115 - 0.02)	},1 },
								{ { __EVAL(0.50 + BSIZE)			, __EVAL(0.115 		)	},1 },
								{ { __EVAL(0.50 - BSIZE)			, __EVAL(0.115 		)	},1 },
								{ { __EVAL(0.50 - BSIZE - 0.03)		, __EVAL(0.115 - 0.02)	},1 },
								{ { __EVAL(0.50 - BSIZE)			, __EVAL(0.115 - 0.04)	},1 }, {},
							};
						};
					};
					class InvalidLock
					{
						condition = "abs(cameraHeadingDiff) > 85 - missileLocked - missileLocking";

						class CircleLock
						{
							type				= line;
							width				= 12.0;
							points[]			=
							{
								CIRCLE_MARK(PlaneW,-0.10,0.10,45),{},
								CIRCLE_MARK(PlaneW,-0.10,0.10,135),
							};
						};
					};
				};
