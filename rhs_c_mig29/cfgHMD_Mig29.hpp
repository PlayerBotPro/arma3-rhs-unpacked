
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
					condition			= user2;
/* ~~~~ HELMET MODE ~~~~ */

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
					class InvalidLock
					{
						condition = "abs(cameraHeadingDiff) > 70 - missileLocked - missileLocking";

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
				};
