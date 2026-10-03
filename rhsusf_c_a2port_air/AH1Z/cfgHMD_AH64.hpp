#define PosX0Center 0.50 // 502
#define PosY0Center 0.50 // 49
#define SizeX10deg 0.234
#define SizeY10deg 0.230

#define DEF_HORIZONT_SPACING_Plus(XX) 													\
	class LevelP##XX: Level0 															\
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



#define DEF_HORIZONT_SPACING_Minus(XX) 													\
	class LevelM##XX: Level0 															\
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


				topLeft					= "HUD_top_left";
				topRight				= "HUD_top_right";
				bottomLeft				= "HUD_bottom_left";
				borderLeft				= 0;
				borderRight				= 0;
				borderTop				= 0;
				borderBottom			= 0;
				color[]					= {1.0, 1.0, 1.0, 1.0};
				helmetMountedDisplay	= true;
				helmetPosition[]		= {-0.0375,	0.0375,	0.1};
				helmetRight[]			= {0.075,	0.0,	0.0};
				helmetDown[]			= {0.0,		-0.075,	0.0};
				font					= rhsusf_txled;
				turret[]				= {-2};
				class material
				{
					ambient[] = {1, 1, 1, 1};
					diffuse[] = {1, 1, 1, 1};
					emissive[] = {400, 200, 200, 1};
				};

				class Bones
				{
					class HUDCenter
					{
						type			= fixed;
						pos[]			= {PosX0Center, PosY0Center};
					};

					class WeaponAim
					{
						type			= vector;
						source			= weapon;
						pos0[]			= {PosX0Center, PosY0Center};
						pos10[]			= {__EVAL(PosX0Center + SizeX10deg), __EVAL(PosY0Center + SizeY10deg)};
					};
					class WeaponAimRelative: WeaponAim {source = weapontoview;};

					class VelocityVector
					{
						type			= vector;
						source			= velocityToView;
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
						type			= horizontoview;
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
						minPos[]		= {0, -0.32};
						maxPos[]		= {0, 0.32};
					};
					class HorizonBankRot
					{
						type			= linear;
						source			= gmeterXgrav;
						min				= -1;
						max				= 1;
						minPos[]		= {0.41, 0.84};
						maxPos[]		= {0.59, 0.84};
						aspectRatio		= 1;
					};
					class ImpactPoint
					{
						type			= vector;
						source			= ImpactPointToView;
						pos0[]			= {0.5, __EVAL(PosY0Center)};
						pos10[]			= {__EVAL(0.5 + SizeX10deg), __EVAL(PosY0Center + SizeY10deg)};
					};
					class Target
					{
						source			= targettoview;
						type			= vector;
						pos0[]			= {__EVAL(PosX0Center),__EVAL(PosY0Center)};
						pos10[]			= {__EVAL(PosX0Center+SizeX10deg),__EVAL(PosY0Center+SizeY10deg)};
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

					class Level0
					{
						pos0[]	= {PosX0Center, PosY0Center};
						pos10[]	= {__EVAL(PosX0Center + SizeX10deg * 1.4142), __EVAL(PosY0Center + SizeY10deg * 1.4142)};
						type	= horizontoview;
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
					#define RADAR_X 903
					#define RADAR_Y 820
					class RadarHeight
					{
						type			= linear;
						source			= altitudeAGL;
						sourceScale		= 1;
						sourceOffset	= -2;
						min				= 0;
						max				= 61;	// IRL it's 200 feets ~ 61 meters
						minPos[]		= {0.RADAR_X,0.18};
						maxPos[]		= {0.RADAR_X,0.RADAR_Y};
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
					class HeadTrackerX
					{
						type			= linear;
						source			= cameraHeadingDiffX;
						sourceScale		= 1;
						min				= -180;
						max				= 180;
						minPos[]		= {1,0};
						maxPos[]		= {0,0};
					};
					class HeadTrackerY: HeadTrackerX
					{
						source			= cameraHeadingDiffY;
						minPos[]		= {0,0};
						maxPos[]		= {0,1};
					};
				};

				class Draw
				{
					alpha				= user3;
					color[]				= {user0, user1, user2};
					condition 			= "on";

					class Static
					{
						type			= line;
						width			= 4.0;
						points[]		=
						{
							// Top (heading) line
							{{0.5, 0.11}, 1},
							{{0.5, 0.14}, 1},{},
							// Gunner field rectangle
							{{0.4, 0.86}, 1},
							{{0.4, 0.94}, 1},
							{{0.6, 0.94}, 1},
							{{0.6, 0.86}, 1},
							{{0.4, 0.86}, 1},
							{},
							{{0.4, 0.885}, 1},
							{{0.408, 0.885}, 1},
							{},
							{{0.6, 0.885}, 1},
							{{0.592, 0.885}, 1},
							{},
							{{0.5, 0.86}, 1},
							{{0.5, 0.868}, 1},
							{},
							{{0.5, 0.94}, 1},
							{{0.5, 0.932}, 1},
							{},
							{{0.52, 0.86}, 1},{{0.52, 0.82}, 1},
							{},
							{{0.48, 0.86}, 1},{{0.48, 0.82}, 1},
							{}
						};
					};

					class HeadingHeadNumber
					{
						type			= text;
						source			= heading;
						sourceScale		= 1;

						align			= center;
						scale			= 1;
						TEXT_SIZEPOS(0.5,0.042,0.04,0.04)

					};
					class HeadingScaleRight
					{
						clipTL[]              = {0.55, 0.05};
						clipBR[]              = {0.83, 0.11};

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

							lineXleft				= 0.11;
							lineYright				= 0.10;
							lineXleftMajor			= 0.11;
							lineYrightMajor			= 0.09;
							majorLineEach			= 3;
							numberEach				= 3;
							step					= __EVAL(10*0.1);
							stepSize				= __EVAL(1/36);

							align                   = center;
							scale                   = 1;
							pos[]                   = {__EVAL(0.52 - 0.024), 0.05};
							right[]                 = {__EVAL(0.55 - 0.024), 0.05};
							down[]                  = {__EVAL(0.52 - 0.024), 0.08};

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

						lineXleft		= 0.11;
						lineYright		= 0.10;
						lineXleftMajor	= 0.11;
						lineYrightMajor	= 0.10;
						majorLineEach	= 2;
						step					= __EVAL(10*0.1);
						stepSize				= __EVAL(1/36);


						align			= center;
						scale			= 1;

						numberEach		= 0; // hidden
						pos[]			= {0.47, 0.05};
						right[]			= {0.50, 0.05};
						down[]			= {0.45, 0.09};

					};
					class HeadingScaleLeft
					{
						clipTL[]              = {0.18, 0.05};
						clipBR[]              = {0.45, 0.11};

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

							lineXleft				= 0.11;
							lineYright				= 0.10;
							lineXleftMajor			= 0.11;
							lineYrightMajor			= 0.09;
							majorLineEach			= 3;
							numberEach				= 3;
							step					= __EVAL(10*0.1);
							stepSize				= __EVAL(1/36);

							align					= center;
							scale					= 1;

							pos[]					= {__EVAL(0.17-0.004), 0.05};
							right[]					= {__EVAL(0.20-0.004), 0.05};
							down[]					= {__EVAL(0.17-0.004), 0.08};
						};
					};
 					class HorizonBankRot
					{
						type			= polygon;
						width			= 4.0;

						#define CIRCLE_POLYGON(STEP_INIT,STEP_SIZE) 					\
						{																\
							{HorizonBankRot,	{0,0}, 1},								\
							{HorizonBankRot,	{__EVAL((0.015) * sin(0+STEP_SIZE*(STEP_INIT+0))),	__EVAL(-(0.015) * cos(0+STEP_SIZE*(STEP_INIT+0)) / XtoYscale)},	1}, \
							{HorizonBankRot,	{__EVAL((0.015) * sin(0+STEP_SIZE*(STEP_INIT+1))),	__EVAL(-(0.015) * cos(0+STEP_SIZE*(STEP_INIT+1)) / XtoYscale)},	1}, \
							{HorizonBankRot,	{__EVAL((0.015) * sin(0+STEP_SIZE*(STEP_INIT+2))),	__EVAL(-(0.015) * cos(0+STEP_SIZE*(STEP_INIT+2)) / XtoYscale)},	1}, \
						}

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

							/*
							//CIRCLE(HorizonBankRot, 0.015)
							{
								{HorizonBankRot,1,{0,0}, 1},
								POINT_MARK(HorizonBankRot,0.015,0),
								POINT_MARK(HorizonBankRot,0.015,0),
								POINT_MARK(HorizonBankRot,0.015,0+),
							},
							{
								{HorizonBankRot,1,{0,0}, 1},
								POINT_MARK(HorizonBankRot,0.015,90+45*2),
								POINT_MARK(HorizonBankRot,0.015,90+45*1),
								POINT_MARK(HorizonBankRot,0.015,90+45*0),
							},
							{
								{HorizonBankRot,1,{0,0}, 1},
								POINT_MARK(HorizonBankRot,0.015,90+45*4),
								POINT_MARK(HorizonBankRot,0.015,90+45*3),
								POINT_MARK(HorizonBankRot,0.015,90+45*2),
							},
							{
								{HorizonBankRot,1,{0,0}, 1},
								POINT_MARK(HorizonBankRot,0.015,90+45*6),
								POINT_MARK(HorizonBankRot,0.015,90+45*5),
								POINT_MARK(HorizonBankRot,0.015,90+45*4),

							},*/
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
							TEXT_SIZEPOS(0.09,0.20,0.03,0.03)
						};

						class CollectiveNumber
						{
							type			= text;
							source			= rtdCollective;
							sourceScale		= 100;

							align			= left;
							scale			= 1;
							TEXT_SIZEPOS(0.09,0.20,0.03,0.03)
						};
					};
					class FlightMode
					{
						condition = "1-(mgun+missile+aamissile+atmissile+rocket+bomb)";
						class SpeedNumber
						{
							type			= text;
							source			= speed;
							sourceScale		= SPEED_FACTOR;

							align			= right;
							scale			= 1;
							TEXT_SIZEPOS(0.16,0.48,0.04,0.04)
						};
						class AltNumber
						{
							type			= text;
							source			= altitudeAGL;
							sourceScale		= HEIGHT_FACTOR;
							sourceOffset	= __EVAL(-2.1*HEIGHT_FACTOR);

							align			= left;
							scale			= 1;
							TEXT_SIZEPOS(0.81,0.48,0.04,0.04)
						};

						class HeadTracker
						{
							condition = "(cameraHeadingDiff>=8)+(cameraHeadingDiff<=-8)";
							class Shape
							{
								type			= line;
								width			= 4.0;
								points[]		=
								{
									{HeadTrackerX,1,HeadTrackerY,1,{-0.04,-0.02},1},
									{HeadTrackerX,1,HeadTrackerY,1,{-0.06,0.0},1},
									{HeadTrackerX,1,HeadTrackerY,1,{-0.04,0.02},1},
									{},
									{HeadTrackerX,1,HeadTrackerY,1,{0.04,-0.02},1},
									{HeadTrackerX,1,HeadTrackerY,1,{0.06,0.0},1},
									{HeadTrackerX,1,HeadTrackerY,1,{0.04,0.02},1},
									{},
									{HeadTrackerX,1,HeadTrackerY,1,{-0.02,-0.04},1},
									{HeadTrackerX,1,HeadTrackerY,1,{0.0,-0.06},1},
									{HeadTrackerX,1,HeadTrackerY,1,{0.02,-0.04},1},
									{},
									{HeadTrackerX,1,HeadTrackerY,1,{-0.02,0.04},1},
									{HeadTrackerX,1,HeadTrackerY,1,{0.0,0.06},1},
									{HeadTrackerX,1,HeadTrackerY,1,{0.02,0.04},1},
								};
							};
						};
						class LOS_Reticle
						{

							type			= line;
							width			= 6.0;
							points[]		=
							{
								// Aircraft centerline
								{HUDCenter,1, { -0.03*1.3,	0.0},1},
								{HUDCenter,1, { -0.01*1.3,	0.0},1},{},
								{HUDCenter,1, { 0.01*1.3,	0.0},1},
								{HUDCenter,1, { 0.03*1.3,	0.0},1},{},
								{HUDCenter,1, { 0.0,	-0.01*1.3},1},
								{HUDCenter,1, { 0.0,	-0.03*1.3},1},{},
								{HUDCenter,1, { 0.0,	0.01*1.3},1},
								{HUDCenter,1, { 0.0,	0.03*1.3},1},
								{}
							};
						};

						class VerticalSpeedScale
						{
							type			= line;
							width			= 4.0;
							points[]		=
							{
								// Gunner Aim cross
								{WeaponAimRelative,1, { -0.03,	0.0},1},
								{WeaponAimRelative,1, { -0.02,	0.0},1},{},
								{WeaponAimRelative,1, { 0.02,	0.0},1},
								{WeaponAimRelative,1, { 0.03,	0.0},1},{},
								{WeaponAimRelative,1, { 0.0,	-0.02},1},
								{WeaponAimRelative,1, { 0.0,	-0.03},1},{},
								{WeaponAimRelative,1, { 0.0,	0.02},1},
								{WeaponAimRelative,1, { 0.0,	0.03},1},
								{},
								// Side vspeed scale
								#define SCALE_SPACE 0.032
								{{__EVAL(0.870+0.045), __EVAL(0.50 - SCALE_SPACE * 10)}, 1},
								{{__EVAL(0.890+0.045), __EVAL(0.50 - SCALE_SPACE * 10)}, 1},{},
								{{__EVAL(0.870+0.000), __EVAL(0.50 - SCALE_SPACE * 10)}, 1},
								{{__EVAL(0.890+0.000), __EVAL(0.50 - SCALE_SPACE * 10)}, 1},{},

								{{__EVAL(0.870+0.045), __EVAL(0.50 - SCALE_SPACE * 5)}, 1},
								{{__EVAL(0.890+0.045), __EVAL(0.50 - SCALE_SPACE * 5)}, 1}, {},
								{{0.870, __EVAL(0.50 - SCALE_SPACE * 5)}, 1},
								{{0.890, __EVAL(0.50 - SCALE_SPACE * 5)}, 1}, {},
								{{0.875, __EVAL(0.50 - SCALE_SPACE * 4)}, 1},
								{{0.885, __EVAL(0.50 - SCALE_SPACE * 4)}, 1}, {},
								{{0.875, __EVAL(0.50 - SCALE_SPACE * 3)}, 1},
								{{0.885, __EVAL(0.50 - SCALE_SPACE * 3)}, 1}, {},
								{{0.875, __EVAL(0.50 - SCALE_SPACE * 2)}, 1},
								{{0.885, __EVAL(0.50 - SCALE_SPACE * 2)}, 1}, {},
								{{0.875, __EVAL(0.50 - SCALE_SPACE * 1)}, 1},
								{{0.885, __EVAL(0.50 - SCALE_SPACE * 1)}, 1}, {},

								{{0.870, __EVAL(0.50 - SCALE_SPACE * 0)}, 1},
								{{0.890, __EVAL(0.50 - SCALE_SPACE * 0)}, 1}, {},
								{{__EVAL(0.870+0.045), __EVAL(0.50 - SCALE_SPACE * 0)}, 1},
								{{__EVAL(0.890+0.045), __EVAL(0.50 - SCALE_SPACE * 0)}, 1}, {},

								{{__EVAL(0.870+0.045), __EVAL(0.50 + SCALE_SPACE * 5)}, 1},
								{{__EVAL(0.890+0.045), __EVAL(0.50 + SCALE_SPACE * 5)}, 1}, {},
								{{0.870, __EVAL(0.50 + SCALE_SPACE * 5)}, 1},
								{{0.890, __EVAL(0.50 + SCALE_SPACE * 5)}, 1}, {},
								{{0.875, __EVAL(0.50 + SCALE_SPACE * 4)}, 1},
								{{0.885, __EVAL(0.50 + SCALE_SPACE * 4)}, 1}, {},
								{{0.875, __EVAL(0.50 + SCALE_SPACE * 3)}, 1},
								{{0.885, __EVAL(0.50 + SCALE_SPACE * 3)}, 1}, {},
								{{0.875, __EVAL(0.50 + SCALE_SPACE * 2)}, 1},
								{{0.885, __EVAL(0.50 + SCALE_SPACE * 2)}, 1}, {},
								{{0.875, __EVAL(0.50 + SCALE_SPACE * 1)}, 1},
								{{0.885, __EVAL(0.50 + SCALE_SPACE * 1)}, 1},{},
								// right side
								{{__EVAL(0.875+0.045), __EVAL(0.50 + SCALE_SPACE * 6)}, 1},
								{{__EVAL(0.885+0.045), __EVAL(0.50 + SCALE_SPACE * 6)}, 1}, {},
								{{__EVAL(0.875+0.045), __EVAL(0.50 + SCALE_SPACE * 7)}, 1},
								{{__EVAL(0.885+0.045), __EVAL(0.50 + SCALE_SPACE * 7)}, 1}, {},
								{{__EVAL(0.875+0.045), __EVAL(0.50 + SCALE_SPACE * 8)}, 1},
								{{__EVAL(0.885+0.045), __EVAL(0.50 + SCALE_SPACE * 8)}, 1}, {},
								{{__EVAL(0.875+0.045), __EVAL(0.50 + SCALE_SPACE * 9)}, 1},
								{{__EVAL(0.885+0.045), __EVAL(0.50 + SCALE_SPACE * 9)}, 1}, {},
								{{__EVAL(0.870+0.045), __EVAL(0.50 + SCALE_SPACE * 10)}, 1},
								{{__EVAL(0.890+0.045), __EVAL(0.50 + SCALE_SPACE * 10)}, 1},{},
								{{__EVAL(0.870+0.000), __EVAL(0.50 + SCALE_SPACE * 10)}, 1},
								{{__EVAL(0.890+0.000), __EVAL(0.50 + SCALE_SPACE * 10)}, 1},{},

							};
						};
						class VerticalSpeedArrow
						{
							type			= polygon;
							points[]		=
							{
								// Side vspeed arrow
								{
									{VerticalSpeedBone, {0.85, 0.488}, 1},
									{VerticalSpeedBone, {0.87, 0.50}, 1},
									{VerticalSpeedBone, {0.85, 0.512}, 1},
								}
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



						class HorizonLine
						{
							condition = "1-autohover";
							clipTL[]		= {0.2, 0.145};
							clipBR[]		= {0.8, 0.855};

							class HorizonLineDraw
							{
								type			= line;
								width			= 4.0;

								#define lineSegmentWidth 0.0375
								points[]		=
								{
									{HorizonVector, {__EVAL(-6 * lineSegmentWidth), 0.0}, 1},
									{HorizonVector, {__EVAL(-5 * lineSegmentWidth), 0.0}, 1},
									{},
									{HorizonVector, {__EVAL(-4 * lineSegmentWidth), 0.0}, 1},
									{HorizonVector, {__EVAL(-3 * lineSegmentWidth), 0.0}, 1},
									{},
									{HorizonVector, {__EVAL(-2 * lineSegmentWidth), 0.0}, 1},
									{HorizonVector, {__EVAL(-1 * lineSegmentWidth), 0.0}, 1},
									{},
									{HorizonVector, {__EVAL(1 * lineSegmentWidth), 0.0}, 1},
									{HorizonVector, {__EVAL(2 * lineSegmentWidth), 0.0}, 1},
									{},
									{HorizonVector, {__EVAL(3 * lineSegmentWidth), 0.0}, 1},
									{HorizonVector, {__EVAL(4 * lineSegmentWidth), 0.0}, 1},
									{},
									{HorizonVector, {__EVAL(5 * lineSegmentWidth), 0.0}, 1},
									{HorizonVector, {__EVAL(6 * lineSegmentWidth), 0.0}, 1}
								};
							};
						};

						class HoverMode
						{
							condition = "autohover";
							HUD_TEXT_STATIC(0.005,	0.075		,0.03,	0.03,right,"HOVER",HoverText)
						};
						class CruiseMode
						{
							condition = "((altitudeASL-27) min 1) - autohover";
							//HUD_TEXT_STATIC(0.005,	0.075		,0.03,	0.03,right,"CRUISE",CruiseText)

							class AltNumberASL
							{
								type			= text;
								source			= altitudeASL;
								sourceScale		= HEIGHT_FACTOR;

								align			= left;
								scale			= 1;
								TEXT_SIZEPOS(0.81,0.16,0.04,0.04)
							};
							class HorizontalLine
							{
								clipTL[]		= {0.2, 0.15};
								clipBR[]		= {0.8, 0.8};

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
								DEF_HORIZONT_SPACING_Minus(10);
								DEF_HORIZONT_SPACING_Plus(10);
								DEF_HORIZONT_SPACING_Minus(20);
								DEF_HORIZONT_SPACING_Plus(20);
								DEF_HORIZONT_SPACING_Minus(30);
								DEF_HORIZONT_SPACING_Plus(30);
							};
						};
						class TransitionMode
						{
							condition = "((27-altitudeASL) min 1) - autohover";
							//HUD_TEXT_STATIC(0.005,	0.075		,0.03,	0.03,right,"TRANS",TransText)
						};
						class HoverModeHide
						{
							condition = "1-autohover";

							class VelocityLine
							{
								type			= line;
								width			= 4.0;
								points[]		=
								{
									CIRCLE(VelocityVector,0.02),{},
									{VelocityVector, { 0.04, __EVAL(0/XtoYscale)}, 1}, {VelocityVector, { 0.02, __EVAL(0/XtoYscale)}, 1},{},
									{VelocityVector, {-0.04, __EVAL(0/XtoYscale)}, 1}, {VelocityVector, {-0.02, __EVAL(0/XtoYscale)}, 1},{},
									{VelocityVector, {0, __EVAL(-0.04/XtoYscale)}, 1}, {VelocityVector, {0, __EVAL(-0.02/XtoYscale)}, 1},{}

								};
							};
						};
						class WP
						{
							condition		= "wpvalid - autohover";
							class WPdist
							{
								type			= text;
								source			= wpdist;
								sourceScale		= 0.001;
								sourcePrecision = 1;

								align			= left;
								scale			= 1;
								TEXT_SIZEPOS(0.255,0.735,0.027,0.027)
							};
							class WPIndex
							{
								type			= text;
								source			= wpIndex;
								sourceScale		= 1;
								sourceLength	= 2;

								align			= right;
								scale			= 1;
								TEXT_SIZEPOS(0.12,0.735,0.027,0.027)
							};
							class WPGroundSpeed
							{
								type			= text;
								source			= speed;
								sourceScale		= SPEED_FACTOR;

								align			= right;
								scale			= 1;
								TEXT_SIZEPOS(0.075,0.735+0.035,0.027,0.027)
							};
							HUD_TEXT_STATIC(0.075,			0.735		,0.027,	0.027,right,"W",WPstatic)
							HUD_TEXT_STATIC(0.075 +0.035,	0.735+0.035	,0.027,	0.027,right,"",WPAuto)
							HUD_TEXT_STATIC(0.075 +0.18,	0.735		,0.027,	0.027,right,"KM",WPKM)
							HUD_TEXT_STATIC(0.075 +0.13,	0.735+0.035	,0.027,	0.027,right,"-:--",WPTime)
							class WP
							{
								width			= 2;
								type			= line;
								points[]		=
								{
									// Top (waypoint) arrow
									{WPPoint, 1 ,LimitWaypoint, 1, {-0.02, 0.04}, 1},
									{WPPoint, 1 ,LimitWaypoint, 1, { 0.00, 0.02}, 1},
									{WPPoint, 1 ,LimitWaypoint, 1, { 0.02, 0.04}, 1},
									{}/*,
									{wppointtoview, 1, {HorizonBankRotFull, +0.015, -0.035}, 1},
									{wppointtoview, 1, {HorizonBankRotFull, 0.0, 0.0}, 1},
									{wppointtoview, 1, {HorizonBankRotFull, -0.015, -0.035}, 1},*/
								};
							};
						};
					};
					class LaserGroup
					{
						condition		= "laseron";

						class Gunner
						{
							type			= line;
							width			= 4.0;
							points[]		=
							{
								{HUDCenter, {__EVAL(0.04), __EVAL(0.038)}, 1},
								{HUDCenter, {__EVAL(0.015), __EVAL(0.01)}, 1},{},
								{HUDCenter, {__EVAL(-0.04), __EVAL(0.038)}, 1},
								{HUDCenter, {__EVAL(-0.015), __EVAL(0.01)}, 1},{},
								{HUDCenter, {__EVAL(0.04), __EVAL(-0.038)}, 1},
								{HUDCenter, {__EVAL(0.015), __EVAL(-0.01)}, 1},{},
								{HUDCenter, {__EVAL(-0.04), __EVAL(-0.038)}, 1},
								{HUDCenter, {__EVAL(-0.015), __EVAL(-0.01)}, 1},{},
							};
						};

					};
					class RadarGroup
					{
						condition		= "activeSensorsOn";
						class RadarGround
						{
							condition = "1-user8";
							HUD_TEXT_STATIC(0.1,	0.86		,0.027,	0.027,right,"FCR/G",TransText)

						};
						class RadarAir
						{
							condition = "user8>=1";
							HUD_TEXT_STATIC(0.1,	0.86		,0.027,	0.027,right,"FCR/A",TransText)
						};
						class AutoRange
						{
							condition = "targetDist>=1";
							HUD_TEXT_STATIC(0.26,	0.86		,0.027,	0.027,right,"R",RangeText)
							class RangeSource
							{
								type			= text;
								source			= targetDist;
								sourceScale		= 0.001;
								sourceLength	= 2;
								sourcePrecision = 1;
								refreshRate		= 0.1;
								align			= right;
								scale			= 1;
								TEXT_SIZEPOS(0.29,0.86,0.027,0.027)
							};
						};
						class LaserRange
						{
							condition = "targetDist<=0.99";
							HUD_TEXT_STATIC(0.26,	0.86		,0.027,	0.027,right,"*",RangeText)
							class SpeedSource
							{
								type			= text;
								source			= laserDist;
								sourceScale		= 1;
								sourceLength	= 4;
								refreshRate		= 0.1;
								align			= right;
								scale			= 1;
								TEXT_SIZEPOS(0.29,0.86,0.027,0.027)
							};
						};
					};
					class TADSGroup
					{
						condition		= "1-activeSensorsOn";
						HUD_TEXT_STATIC(0.1,	0.86		,0.027,	0.027,right,"TADS",TransText)
						class AutoRange
						{
							condition = "targetDist>=1";
							HUD_TEXT_STATIC(0.26,	0.86		,0.027,	0.027,right,"A",RangeText)
							class RangeSource
							{
								type			= text;
								source			= targetDist;
								sourceScale		= 0.001;
								sourceLength	= 2;
								sourcePrecision = 1;
								refreshRate		= 0.1;
								align			= right;
								scale			= 1;
								TEXT_SIZEPOS(0.29,0.86,0.027,0.027)
							};
						};
						class LaserRange
						{
							condition = "targetDist<=0.99";
							HUD_TEXT_STATIC(0.26,	0.86		,0.027,	0.027,right,"*",RangeText)
							class SpeedSource
							{
								type			= text;
								source			= laserDist;
								sourceScale		= 1;
								sourceLength	= 4;
								refreshRate		= 0.1;
								align			= right;
								scale			= 1;
								TEXT_SIZEPOS(0.29,0.86,0.027,0.027)
							};
						};
					};
					class Gunner
					{
						type			= line;
						width			= 4.0;
						points[]		=
						{
							// Gunner aim rectangle
							{GunnerAim, {__EVAL(0.5 - 0.015), __EVAL(0.9 - 0.008)}, 1},
							{GunnerAim, {__EVAL(0.5 - 0.015), __EVAL(0.9 + 0.008)}, 1},
							{GunnerAim, {__EVAL(0.5 + 0.015), __EVAL(0.9 + 0.008)}, 1},
							{GunnerAim, {__EVAL(0.5 + 0.015), __EVAL(0.9 - 0.008)}, 1},
							{GunnerAim, {__EVAL(0.5 - 0.015), __EVAL(0.9 - 0.008)}, 1}
						};
					};

					class WeaponMode
					{
						condition = "(mgun+missile+aamissile+atmissile+rocket+bomb)";
						class Static
						{
							type			= line;
							width			= 4.0;
							points[]		=
							{
								// Aiming center
								{HUDCenter,1, { -0.07,	0.0},1},
								{HUDCenter,1, { -0.02,	0.0},1},{},
								{HUDCenter,1, { 0.02,	0.0},1},
								{HUDCenter,1, { 0.07,	0.0},1},{},
								{HUDCenter,1, { 0.0,	-0.02},1},
								{HUDCenter,1, { 0.0,	-0.05},1},{},
								{HUDCenter,1, { 0.0,	0.05},1},
								{HUDCenter,1, { 0.0,	0.02},1}
							};
						};
						class SpeedNumber
						{
							type			= text;
							source			= speed;
							sourceScale		= SPEED_FACTOR;

							align			= left;
							scale			= 1;
							TEXT_SIZEPOS(0.39,0.81,0.027,0.027)
						};
						class AltNumber
						{
							type			= text;
							source			= altitudeAGL;
							sourceScale		= HEIGHT_FACTOR;
							sourceOffset	= __EVAL(-2.1*HEIGHT_FACTOR);

							align			= right;
							scale			= 1;
							TEXT_SIZEPOS(0.62,0.81,0.027,0.027)
						};
					};

					class MGun
					{
						condition		= mgun;

						HUD_TEXT_STATIC(0.61,0.86,0.027,0.027,right,"P GUN",RangeText)
						class Weapons
						{
							type			= text;
							source			= weapon;
							text			= "GUN";
							sourceScale		= 1;

							align			= right;
							scale			= 0.5;
							TEXT_SIZEPOS(0.61,0.90,0.027,0.027)
						};
						class Ammo
						{
							type			= text;
							source			= ammo;
							sourceScale		= 1;

							align			= left;
							scale			= 0.5;
							TEXT_SIZEPOS(0.93,0.90,0.027,0.027)
						};
						class Circle
						{
							type			= line;
							width			= 4.0;
							points[]		=
							{
								POINT_1B(WeaponAimRelative,0.025,0.0),
								POINT_1B(WeaponAimRelative,0.010,0.0), {},
								POINT_1B(WeaponAimRelative,0.0,0.025),
								POINT_1B(WeaponAimRelative,0.0,0.010), {},
								POINT_1B(WeaponAimRelative,-0.025,0.0),
								POINT_1B(WeaponAimRelative,-0.010,0.0), {},
								POINT_1B(WeaponAimRelative,0.0,-0.025),
								POINT_1B(WeaponAimRelative,0.0,-0.010), {},
								CIRCLE(WeaponAimRelative,0.010)
							};
						};
					};

					class AAMissile
					{
						condition		= "bomb";
						HUD_TEXT_STATIC(0.61,0.86,0.027,0.027,right,"P ATA",ModeText)

						class Weapons
						{
							type			= text;
							source			= weapon;
							sourceScale		= 1;

							align			= right;
							scale			= 0.5;
							TEXT_SIZEPOS(0.61,0.90,0.027,0.027)
						};
						class Circle
						{
							type			= line;
							width			= 4.0;
							points[]		=
							{
								CIRCLE_BIG_2B(ForwardVector,HUDCenter,0.06),{},
								CIRCLE_BIG_2B(ForwardVector,HUDCenter,0.03)
							};
						};
					};

					class ATMissile
					{
						condition		= "missile";
						HUD_TEXT_STATIC(0.61,0.86,0.027,0.027,right,"P MSL",ModeText)

						class Weapons
						{
							type			= text;
							source			= weapon;
							sourceScale		= 1;

							align			= right;
							scale			= 0.5;
							TEXT_SIZEPOS(0.61,0.90,0.027,0.027)
						};
						class LOBL_Locked
						{
							condition = "(targetDist>=1)*(missilelocked)";
							class Draw
							{
								type			= line;
								width			= 4.0;
								points[]		=
								{
									{Target,{-0.15, __EVAL(-0.15 / XtoYscale)}, 1},
									{Target,{-0.15, __EVAL(0.15 / XtoYscale)}, 1},
									{Target,{0.15, __EVAL(0.15 / XtoYscale)}, 1},
									{Target,{0.15, __EVAL(-0.15 / XtoYscale)}, 1},
									{Target,{-0.15, __EVAL(-0.15 / XtoYscale)}, 1}
								};
							};
						};
						class LOBL_TargetSelected
						{
							condition = "(targetDist>=1)*(1-missilelocked)-(user10>=1)";
							class Draw
							{
								type			= line;
								width			= 4.0;
								points[]		=
								{
									{Target,{-0.15, __EVAL(-0.15 / XtoYscale)}, 1}, 			{Target,{-0.15, __EVAL(-0.15+0.02*1 / XtoYscale)}, 1},{},
									{Target,{-0.15, __EVAL(-0.15+0.02*2 / XtoYscale)}, 1}, 	{Target,{-0.15, __EVAL(-0.15+0.02*3 / XtoYscale)}, 1},{},
									{Target,{-0.15, __EVAL(-0.15+0.02*4 / XtoYscale)}, 1}, 	{Target,{-0.15, __EVAL(-0.15+0.02*5 / XtoYscale)}, 1},{},
									{Target,{-0.15, __EVAL(-0.15+0.02*6 / XtoYscale)}, 1}, 	{Target,{-0.15, __EVAL(-0.15+0.02*7 / XtoYscale)}, 1},{},
									{Target,{-0.15, __EVAL(-0.15+0.02*8 / XtoYscale)}, 1}, 	{Target,{-0.15, __EVAL(-0.15+0.02*9 / XtoYscale)}, 1},{},
									{Target,{-0.15, __EVAL(-0.15+0.02*10 / XtoYscale)}, 1}, 	{Target,{-0.15, __EVAL(-0.15+0.02*11 / XtoYscale)}, 1},{},
									{Target,{-0.15, __EVAL(-0.15+0.02*12 / XtoYscale)}, 1}, 	{Target,{-0.15, __EVAL(-0.15+0.02*13 / XtoYscale)}, 1},{},
									{Target,{-0.15, __EVAL(-0.15+0.02*14 / XtoYscale)}, 1}, 	{Target,{-0.15, __EVAL(-0.15+0.02*15 / XtoYscale)}, 1},{},

									{Target,{__EVAL(-0.15), __EVAL(0.15 / XtoYscale)}, 1},			{Target,{__EVAL(-0.15+0.02*1), __EVAL(0.15 / XtoYscale)}, 1},{},
									{Target,{__EVAL(-0.15+0.02*2), __EVAL(0.15 / XtoYscale)}, 1},	{Target,{__EVAL(-0.15+0.02*3), __EVAL(0.15 / XtoYscale)}, 1},{},
									{Target,{__EVAL(-0.15+0.02*4), __EVAL(0.15 / XtoYscale)}, 1},	{Target,{__EVAL(-0.15+0.02*5), __EVAL(0.15 / XtoYscale)}, 1},{},
									{Target,{__EVAL(-0.15+0.02*6), __EVAL(0.15 / XtoYscale)}, 1},	{Target,{__EVAL(-0.15+0.02*7), __EVAL(0.15 / XtoYscale)}, 1},{},
									{Target,{__EVAL(-0.15+0.02*8), __EVAL(0.15 / XtoYscale)}, 1},	{Target,{__EVAL(-0.15+0.02*9), __EVAL(0.15 / XtoYscale)}, 1},{},
									{Target,{__EVAL(-0.15+0.02*10), __EVAL(0.15 / XtoYscale)}, 1},	{Target,{__EVAL(-0.15+0.02*11), __EVAL(0.15 / XtoYscale)}, 1},{},
									{Target,{__EVAL(-0.15+0.02*12), __EVAL(0.15 / XtoYscale)}, 1},	{Target,{__EVAL(-0.15+0.02*13), __EVAL(0.15 / XtoYscale)}, 1},{},
									{Target,{__EVAL(-0.15+0.02*14), __EVAL(0.15 / XtoYscale)}, 1},	{Target,{__EVAL(-0.15+0.02*15), __EVAL(0.15 / XtoYscale)}, 1},{},


									{Target,{0.15, __EVAL(+0.15 / XtoYscale)}, 1}, 			{Target,{0.15, __EVAL(+0.15-0.02*1 / XtoYscale)}, 1},{},
									{Target,{0.15, __EVAL(+0.15-0.02*2 / XtoYscale)}, 1}, 	{Target,{0.15, __EVAL(+0.15-0.02*3 / XtoYscale)}, 1},{},
									{Target,{0.15, __EVAL(+0.15-0.02*4 / XtoYscale)}, 1}, 	{Target,{0.15, __EVAL(+0.15-0.02*5 / XtoYscale)}, 1},{},
									{Target,{0.15, __EVAL(+0.15-0.02*6 / XtoYscale)}, 1}, 	{Target,{0.15, __EVAL(+0.15-0.02*7 / XtoYscale)}, 1},{},
									{Target,{0.15, __EVAL(+0.15-0.02*8 / XtoYscale)}, 1}, 	{Target,{0.15, __EVAL(+0.15-0.02*9 / XtoYscale)}, 1},{},
									{Target,{0.15, __EVAL(+0.15-0.02*10 / XtoYscale)}, 1}, 	{Target,{0.15, __EVAL(+0.15-0.02*11 / XtoYscale)}, 1},{},
									{Target,{0.15, __EVAL(+0.15-0.02*12 / XtoYscale)}, 1}, 	{Target,{0.15, __EVAL(+0.15-0.02*13 / XtoYscale)}, 1},{},
									{Target,{0.15, __EVAL(+0.15-0.02*14 / XtoYscale)}, 1}, 	{Target,{0.15, __EVAL(+0.15-0.02*15 / XtoYscale)}, 1},{},


									{Target,{__EVAL(-0.15), __EVAL(-0.15 / XtoYscale)}, 1},			{Target,{__EVAL(-0.15+0.02*1), __EVAL(-0.15 / XtoYscale)}, 1},{},
									{Target,{__EVAL(-0.15+0.02*2), __EVAL(-0.15 / XtoYscale)}, 1},	{Target,{__EVAL(-0.15+0.02*3), __EVAL(-0.15 / XtoYscale)}, 1},{},
									{Target,{__EVAL(-0.15+0.02*4), __EVAL(-0.15 / XtoYscale)}, 1},	{Target,{__EVAL(-0.15+0.02*5), __EVAL(-0.15 / XtoYscale)}, 1},{},
									{Target,{__EVAL(-0.15+0.02*6), __EVAL(-0.15 / XtoYscale)}, 1},	{Target,{__EVAL(-0.15+0.02*7), __EVAL(-0.15 / XtoYscale)}, 1},{},
									{Target,{__EVAL(-0.15+0.02*8), __EVAL(-0.15 / XtoYscale)}, 1},	{Target,{__EVAL(-0.15+0.02*9), __EVAL(-0.15 / XtoYscale)}, 1},{},
									{Target,{__EVAL(-0.15+0.02*10), __EVAL(-0.15 / XtoYscale)}, 1},	{Target,{__EVAL(-0.15+0.02*11), __EVAL(-0.15 / XtoYscale)}, 1},{},
									{Target,{__EVAL(-0.15+0.02*12), __EVAL(-0.15 / XtoYscale)}, 1},	{Target,{__EVAL(-0.15+0.02*13), __EVAL(-0.15 / XtoYscale)}, 1},{},
									{Target,{__EVAL(-0.15+0.02*14), __EVAL(-0.15 / XtoYscale)}, 1},	{Target,{__EVAL(-0.15+0.02*15), __EVAL(-0.15 / XtoYscale)}, 1},{},
								};
							};
						};
						class LOBL_Seeking: LOBL_Locked
						{
							condition = "targetDist<=0.99-(user10>=1)";
							class Draw: Draw
							{
								points[]		=
								{
									{HUDCenter,{-0.15, __EVAL(-0.15 / XtoYscale)}, 1}, 			{HUDCenter,{-0.15, __EVAL(-0.15+0.02*1 / XtoYscale)}, 1},{},
									{HUDCenter,{-0.15, __EVAL(-0.15+0.02*2 / XtoYscale)}, 1}, 	{HUDCenter,{-0.15, __EVAL(-0.15+0.02*3 / XtoYscale)}, 1},{},
									{HUDCenter,{-0.15, __EVAL(-0.15+0.02*4 / XtoYscale)}, 1}, 	{HUDCenter,{-0.15, __EVAL(-0.15+0.02*5 / XtoYscale)}, 1},{},
									{HUDCenter,{-0.15, __EVAL(-0.15+0.02*6 / XtoYscale)}, 1}, 	{HUDCenter,{-0.15, __EVAL(-0.15+0.02*7 / XtoYscale)}, 1},{},
									{HUDCenter,{-0.15, __EVAL(-0.15+0.02*8 / XtoYscale)}, 1}, 	{HUDCenter,{-0.15, __EVAL(-0.15+0.02*9 / XtoYscale)}, 1},{},
									{HUDCenter,{-0.15, __EVAL(-0.15+0.02*10 / XtoYscale)}, 1}, 	{HUDCenter,{-0.15, __EVAL(-0.15+0.02*11 / XtoYscale)}, 1},{},
									{HUDCenter,{-0.15, __EVAL(-0.15+0.02*12 / XtoYscale)}, 1}, 	{HUDCenter,{-0.15, __EVAL(-0.15+0.02*13 / XtoYscale)}, 1},{},
									{HUDCenter,{-0.15, __EVAL(-0.15+0.02*14 / XtoYscale)}, 1}, 	{HUDCenter,{-0.15, __EVAL(-0.15+0.02*15 / XtoYscale)}, 1},{},

									{HUDCenter,{__EVAL(-0.15), __EVAL(0.15 / XtoYscale)}, 1},			{HUDCenter,{__EVAL(-0.15+0.02*1), __EVAL(0.15 / XtoYscale)}, 1},{},
									{HUDCenter,{__EVAL(-0.15+0.02*2), __EVAL(0.15 / XtoYscale)}, 1},	{HUDCenter,{__EVAL(-0.15+0.02*3), __EVAL(0.15 / XtoYscale)}, 1},{},
									{HUDCenter,{__EVAL(-0.15+0.02*4), __EVAL(0.15 / XtoYscale)}, 1},	{HUDCenter,{__EVAL(-0.15+0.02*5), __EVAL(0.15 / XtoYscale)}, 1},{},
									{HUDCenter,{__EVAL(-0.15+0.02*6), __EVAL(0.15 / XtoYscale)}, 1},	{HUDCenter,{__EVAL(-0.15+0.02*7), __EVAL(0.15 / XtoYscale)}, 1},{},
									{HUDCenter,{__EVAL(-0.15+0.02*8), __EVAL(0.15 / XtoYscale)}, 1},	{HUDCenter,{__EVAL(-0.15+0.02*9), __EVAL(0.15 / XtoYscale)}, 1},{},
									{HUDCenter,{__EVAL(-0.15+0.02*10), __EVAL(0.15 / XtoYscale)}, 1},	{HUDCenter,{__EVAL(-0.15+0.02*11), __EVAL(0.15 / XtoYscale)}, 1},{},
									{HUDCenter,{__EVAL(-0.15+0.02*12), __EVAL(0.15 / XtoYscale)}, 1},	{HUDCenter,{__EVAL(-0.15+0.02*13), __EVAL(0.15 / XtoYscale)}, 1},{},
									{HUDCenter,{__EVAL(-0.15+0.02*14), __EVAL(0.15 / XtoYscale)}, 1},	{HUDCenter,{__EVAL(-0.15+0.02*15), __EVAL(0.15 / XtoYscale)}, 1},{},


									{HUDCenter,{0.15, __EVAL(+0.15 / XtoYscale)}, 1}, 			{HUDCenter,{0.15, __EVAL(+0.15-0.02*1 / XtoYscale)}, 1},{},
									{HUDCenter,{0.15, __EVAL(+0.15-0.02*2 / XtoYscale)}, 1}, 	{HUDCenter,{0.15, __EVAL(+0.15-0.02*3 / XtoYscale)}, 1},{},
									{HUDCenter,{0.15, __EVAL(+0.15-0.02*4 / XtoYscale)}, 1}, 	{HUDCenter,{0.15, __EVAL(+0.15-0.02*5 / XtoYscale)}, 1},{},
									{HUDCenter,{0.15, __EVAL(+0.15-0.02*6 / XtoYscale)}, 1}, 	{HUDCenter,{0.15, __EVAL(+0.15-0.02*7 / XtoYscale)}, 1},{},
									{HUDCenter,{0.15, __EVAL(+0.15-0.02*8 / XtoYscale)}, 1}, 	{HUDCenter,{0.15, __EVAL(+0.15-0.02*9 / XtoYscale)}, 1},{},
									{HUDCenter,{0.15, __EVAL(+0.15-0.02*10 / XtoYscale)}, 1}, 	{HUDCenter,{0.15, __EVAL(+0.15-0.02*11 / XtoYscale)}, 1},{},
									{HUDCenter,{0.15, __EVAL(+0.15-0.02*12 / XtoYscale)}, 1}, 	{HUDCenter,{0.15, __EVAL(+0.15-0.02*13 / XtoYscale)}, 1},{},
									{HUDCenter,{0.15, __EVAL(+0.15-0.02*14 / XtoYscale)}, 1}, 	{HUDCenter,{0.15, __EVAL(+0.15-0.02*15 / XtoYscale)}, 1},{},


									{HUDCenter,{__EVAL(-0.15), __EVAL(-0.15 / XtoYscale)}, 1},			{HUDCenter,{__EVAL(-0.15+0.02*1), __EVAL(-0.15 / XtoYscale)}, 1},{},
									{HUDCenter,{__EVAL(-0.15+0.02*2), __EVAL(-0.15 / XtoYscale)}, 1},	{HUDCenter,{__EVAL(-0.15+0.02*3), __EVAL(-0.15 / XtoYscale)}, 1},{},
									{HUDCenter,{__EVAL(-0.15+0.02*4), __EVAL(-0.15 / XtoYscale)}, 1},	{HUDCenter,{__EVAL(-0.15+0.02*5), __EVAL(-0.15 / XtoYscale)}, 1},{},
									{HUDCenter,{__EVAL(-0.15+0.02*6), __EVAL(-0.15 / XtoYscale)}, 1},	{HUDCenter,{__EVAL(-0.15+0.02*7), __EVAL(-0.15 / XtoYscale)}, 1},{},
									{HUDCenter,{__EVAL(-0.15+0.02*8), __EVAL(-0.15 / XtoYscale)}, 1},	{HUDCenter,{__EVAL(-0.15+0.02*9), __EVAL(-0.15 / XtoYscale)}, 1},{},
									{HUDCenter,{__EVAL(-0.15+0.02*10), __EVAL(-0.15 / XtoYscale)}, 1},	{HUDCenter,{__EVAL(-0.15+0.02*11), __EVAL(-0.15 / XtoYscale)}, 1},{},
									{HUDCenter,{__EVAL(-0.15+0.02*12), __EVAL(-0.15 / XtoYscale)}, 1},	{HUDCenter,{__EVAL(-0.15+0.02*13), __EVAL(-0.15 / XtoYscale)}, 1},{},
									{HUDCenter,{__EVAL(-0.15+0.02*14), __EVAL(-0.15 / XtoYscale)}, 1},	{HUDCenter,{__EVAL(-0.15+0.02*15), __EVAL(-0.15 / XtoYscale)}, 1},{},
								};
							};
						};
						class LOAL_TargetSelected: LOBL_TargetSelected
						{
							condition = "(targetDist>=1)*(user10>=1)";
							class Draw: Draw
							{
								points[]		=
								{
									{Target,{-0.06, __EVAL(-0.06 / XtoYscale)}, 1},
									{Target,{-0.06, __EVAL(0.06 / XtoYscale)}, 1},
									{Target,{0.06, __EVAL(0.06 / XtoYscale)}, 1},
									{Target,{0.06, __EVAL(-0.06 / XtoYscale)}, 1},
									{Target,{-0.06, __EVAL(-0.06 / XtoYscale)}, 1}
								};
							};
						};
						class LOAL_Seeking: LOBL_Seeking
						{
							condition = "(targetDist<=1)*(user10>=1)";
							class Draw: Draw
							{
								lineType 		= 0;
								points[]		=
								{
									{HUDCenter,{__EVAL(-0.06), 			__EVAL(-0.06 / XtoYscale)}, 1}, 		{HUDCenter,{__EVAL(-0.06+0.024*1), 	__EVAL(-0.06 / XtoYscale)}, 1},{},
									{HUDCenter,{__EVAL(-0.06+0.024*2), 	__EVAL(-0.06 / XtoYscale)}, 1}, 		{HUDCenter,{__EVAL(-0.06+0.024*3), 	__EVAL(-0.06 / XtoYscale)}, 1},{},
									{HUDCenter,{__EVAL(-0.06+0.024*4), 	__EVAL(-0.06 / XtoYscale)}, 1}, 		{HUDCenter,{__EVAL(-0.06+0.024*5), 	__EVAL(-0.06 / XtoYscale)}, 1},{},

									{HUDCenter,{__EVAL(-0.06), 			__EVAL(+0.06 / XtoYscale)}, 1}, 		{HUDCenter,{__EVAL(-0.06+0.024*1), 	__EVAL(+0.06 / XtoYscale)}, 1},{},
									{HUDCenter,{__EVAL(-0.06+0.024*2), 	__EVAL(+0.06 / XtoYscale)}, 1}, 		{HUDCenter,{__EVAL(-0.06+0.024*3), 	__EVAL(+0.06 / XtoYscale)}, 1},{},
									{HUDCenter,{__EVAL(-0.06+0.024*4), 	__EVAL(+0.06 / XtoYscale)}, 1}, 		{HUDCenter,{__EVAL(-0.06+0.024*5), 	__EVAL(+0.06 / XtoYscale)}, 1},{},


									{HUDCenter,{__EVAL(-0.06), 			__EVAL(-0.06 / XtoYscale)}, 1}, 		{HUDCenter,{__EVAL(-0.06), 			__EVAL(-0.06+0.024*1 / XtoYscale)}, 1},{},
									{HUDCenter,{__EVAL(-0.06), 			__EVAL(-0.06+0.024*2 / XtoYscale)}, 1}, {HUDCenter,{__EVAL(-0.06), 			__EVAL(-0.06+0.024*3 / XtoYscale)}, 1},{},
									{HUDCenter,{__EVAL(-0.06), 			__EVAL(-0.06+0.024*4 / XtoYscale)}, 1}, {HUDCenter,{__EVAL(-0.06), 			__EVAL(-0.06+0.024*5 / XtoYscale)}, 1},{},

									{HUDCenter,{__EVAL(+0.06), 			__EVAL(-0.06 / XtoYscale)}, 1}, 		{HUDCenter,{__EVAL(+0.06), 			__EVAL(-0.06+0.024*1 / XtoYscale)}, 1},{},
									{HUDCenter,{__EVAL(+0.06), 			__EVAL(-0.06+0.024*2 / XtoYscale)}, 1}, {HUDCenter,{__EVAL(+0.06), 			__EVAL(-0.06+0.024*3 / XtoYscale)}, 1},{},
									{HUDCenter,{__EVAL(+0.06), 			__EVAL(-0.06+0.024*4 / XtoYscale)}, 1}, {HUDCenter,{__EVAL(+0.06), 			__EVAL(-0.06+0.024*5 / XtoYscale)}, 1},{},
								};
							};
						};
					};
					class Rockets
					{
						condition		= "rocket";
						HUD_TEXT_STATIC(0.61,0.86,0.027,0.027,right,"P RKT",ModeText)
						class RocketDummy
						{
							type			= line;
							width			= 3.0;
							points[]		=
							{
								// top line
								{ImpactPoint,{  0.02, __EVAL(-0.06/XtoYscale)}, 1},
								{ImpactPoint,{ -0.02, __EVAL(-0.06/XtoYscale)}, 1},
								{},
								// bottom line
								{ImpactPoint,{  0.02, __EVAL(0.06/XtoYscale)}, 1},
								{ImpactPoint,{ -0.02, __EVAL(0.06/XtoYscale)}, 1},
								{},
								// middle line
								{ImpactPoint,{ 0.00,  __EVAL(-0.06/XtoYscale)}, 1},
								{ImpactPoint,{ 0.00,  __EVAL(0.06/XtoYscale)}, 1},
								{}
							};
						};
						class AmmoName
						{
							type			= text;
							source			= ammoFormat;
							sourceScale		= 1;

							align			= right;
							scale			= 0.5;
							TEXT_SIZEPOS(0.61,0.90,0.027,0.027)
						};
					};

					//RADRAR TARGET BOXES
					class RadarBoxes
					{
						type	= radartoview;
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
							{	{__EVAL((0.01) * sin(0+STEP_SIZE*(STEP_INIT+0))),	__EVAL(-(0.01) * cos(0+STEP_SIZE*(STEP_INIT+0)) / XtoYscale)},	1}, \
							{	{__EVAL((0.01) * sin(0+STEP_SIZE*(STEP_INIT+1))),	__EVAL(-(0.01) * cos(0+STEP_SIZE*(STEP_INIT+1)) / XtoYscale)},	1}, \
							{	{__EVAL((0.01) * sin(0+STEP_SIZE*(STEP_INIT+2))),	__EVAL(-(0.01) * cos(0+STEP_SIZE*(STEP_INIT+2)) / XtoYscale)},	1}, \
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
										POLYGON_BOX(0.01,0.01,-0.01,-0.01)
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
						class pointsTank: points
						{
							class Draw
							{
								type		= polygon;
								points[]=
								{
									{
										POLYGON_BOX(0.025,0.01,-0.01,-0.01)
									},
									{
										POLYGON_BOX(0.005,0.025,-0.007,-0.018)
									},
									{
										POLYGON_BOX(0.005,0.025,0.007,-0.018)
									}
								};
							};
						};
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
								points[]=
								{
									POINT2(+0.02,-0.00),
									POINT2(-0.02,+0.00),{},
									POINT2(-0.015,-0.01),
									POINT2(+0.00,+0.01),
									POINT2(+0.015,-0.01)
								};
							};
						};
						class pointsAirplaneEnemy: pointsAirplane {class Draw: Draw {};};
						class pointsAirplaneFriend: pointsAirplane {class Draw: Draw {};};
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
									{{-0.01, 0.015}, 1},
									{{ 0.00, 0.00}, 1},{},
									{{ 0.00, 0.00}, 1},
									{{ 0.01,-0.015}, 1},
									{{-0.01,-0.015}, 1},
									{{ 0.00, 0.00}, 1},
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
							width = 3;
							points[]={
								#define SPACING 0.0025
								{Target, 1, Limit0109, 1, {XY_Scaled(0.00 + SPACING * (2+1	), 0.00)}, 1},
								{Target, 1, Limit0109, 1, {XY_Scaled(0.00 + SPACING * (2+3	), 0.00)}, 1},{},
								{Target, 1, Limit0109, 1, {XY_Scaled(0.00 + SPACING * (2+5	), 0.00)}, 1},
								{Target, 1, Limit0109, 1, {XY_Scaled(0.00 + SPACING * (2+7	), 0.00)}, 1},{},
								{Target, 1, Limit0109, 1, {XY_Scaled(0.00 + SPACING * (2+9	), 0.00)}, 1},
								{Target, 1, Limit0109, 1, {XY_Scaled(0.00 + SPACING * (2+11	), 0.00)}, 1},{},
								{Target, 1, Limit0109, 1, {XY_Scaled(0.00 + SPACING * (2+13	), 0.00)}, 1},
								{Target, 1, Limit0109, 1, {XY_Scaled(0.00 + SPACING * (2+15	), 0.00)}, 1},{},
								{Target, 1, Limit0109, 1, {XY_Scaled(0.00 + SPACING * (2+17	), 0.00)}, 1},
								{Target, 1, Limit0109, 1, {XY_Scaled(0.00 + SPACING * (2+19	), 0.00)}, 1},{},

								{Target, 1, Limit0109, 1, {XY_Scaled(0.00 - SPACING * (2+1	), 0.00)}, 1},
								{Target, 1, Limit0109, 1, {XY_Scaled(0.00 - SPACING * (2+3	), 0.00)}, 1},{},
								{Target, 1, Limit0109, 1, {XY_Scaled(0.00 - SPACING * (2+5	), 0.00)}, 1},
								{Target, 1, Limit0109, 1, {XY_Scaled(0.00 - SPACING * (2+7	), 0.00)}, 1},{},
								{Target, 1, Limit0109, 1, {XY_Scaled(0.00 - SPACING * (2+9	), 0.00)}, 1},
								{Target, 1, Limit0109, 1, {XY_Scaled(0.00 - SPACING * (2+11	), 0.00)}, 1},{},
								{Target, 1, Limit0109, 1, {XY_Scaled(0.00 - SPACING * (2+13	), 0.00)}, 1},
								{Target, 1, Limit0109, 1, {XY_Scaled(0.00 - SPACING * (2+15	), 0.00)}, 1},{},
								{Target, 1, Limit0109, 1, {XY_Scaled(0.00 - SPACING * (2+17	), 0.00)}, 1},
								{Target, 1, Limit0109, 1, {XY_Scaled(0.00 - SPACING * (2+19	), 0.00)}, 1},{},

								{Target, 1, Limit0109, 1, {XY_Scaled(0.00, 0.00 + SPACING * (2+1	))}, 1},
								{Target, 1, Limit0109, 1, {XY_Scaled(0.00, 0.00 + SPACING * (2+3	))}, 1},{},
								{Target, 1, Limit0109, 1, {XY_Scaled(0.00, 0.00 + SPACING * (2+5	))}, 1},
								{Target, 1, Limit0109, 1, {XY_Scaled(0.00, 0.00 + SPACING * (2+7	))}, 1},{},
								{Target, 1, Limit0109, 1, {XY_Scaled(0.00, 0.00 + SPACING * (2+9	))}, 1},
								{Target, 1, Limit0109, 1, {XY_Scaled(0.00, 0.00 + SPACING * (2+11	))}, 1},{},
								{Target, 1, Limit0109, 1, {XY_Scaled(0.00, 0.00 + SPACING * (2+13	))}, 1},
								{Target, 1, Limit0109, 1, {XY_Scaled(0.00, 0.00 + SPACING * (2+15	))}, 1},{},
								{Target, 1, Limit0109, 1, {XY_Scaled(0.00, 0.00 + SPACING * (2+17	))}, 1},
								{Target, 1, Limit0109, 1, {XY_Scaled(0.00, 0.00 + SPACING * (2+19	))}, 1},{},

								{Target, 1, Limit0109, 1, {XY_Scaled(0.00, 0.00 - SPACING * (2+1	))}, 1},
								{Target, 1, Limit0109, 1, {XY_Scaled(0.00, 0.00 - SPACING * (2+3	))}, 1},{},
								{Target, 1, Limit0109, 1, {XY_Scaled(0.00, 0.00 - SPACING * (2+5	))}, 1},
								{Target, 1, Limit0109, 1, {XY_Scaled(0.00, 0.00 - SPACING * (2+7	))}, 1},{},
								{Target, 1, Limit0109, 1, {XY_Scaled(0.00, 0.00 - SPACING * (2+9	))}, 1},
								{Target, 1, Limit0109, 1, {XY_Scaled(0.00, 0.00 - SPACING * (2+11	))}, 1},{},
								{Target, 1, Limit0109, 1, {XY_Scaled(0.00, 0.00 - SPACING * (2+13	))}, 1},
								{Target, 1, Limit0109, 1, {XY_Scaled(0.00, 0.00 - SPACING * (2+15	))}, 1},{},
								{Target, 1, Limit0109, 1, {XY_Scaled(0.00, 0.00 - SPACING * (2+17	))}, 1},
								{Target, 1, Limit0109, 1, {XY_Scaled(0.00, 0.00 - SPACING * (2+19	))}, 1},{},
							};
						};
					};
					/*class TargetLocked
					{
						condition = "missilelocked";
						HUD_TEXT_STATIC(0.493,0.820-0.041,0.040,0.031,center,"VALID LOCK",TargetLockedText)
						HUD_TEXT_STATIC(0.127+0.49,0.880-0.011,0.035,0.035,right,"TOF:",TimeOfFlightText)
						HUD_TEXT_STATIC(0.125+0.49,0.880+0.021,0.035,0.035,right,"DIST:",DistanceText)
						class TOF_source
						{
							type			= text;
							scale			= 1;
							sourceScale		= 1;
							source			= missileflighttime;
							align			= right;
							pos[]			= {{__EVAL(0.100+0.639), __EVAL(0.000+0.880-0.011)} ,1};
							right[]			= {{__EVAL(0.135+0.639), __EVAL(0.000+0.880-0.011)}, 1};
							down[]			= {{__EVAL(0.100+0.639), __EVAL(0.035+0.880-0.011)}, 1};
						};
						class TargetDistance: TOF_source
						{
							source			= targetDist;
							sourceLength	= 0;
							sourcePrecision	= 1;
							sourceScale		= 0.001;
							align			= right;
							pos[]			= {{__EVAL(0.100+0.639), __EVAL(0.000+0.880+0.021)} ,1};
							right[]			= {{__EVAL(0.135+0.639), __EVAL(0.000+0.880+0.021)}, 1};
							down[]			= {{__EVAL(0.100+0.639), __EVAL(0.035+0.880+0.021)}, 1};
						};
					};*/
				};