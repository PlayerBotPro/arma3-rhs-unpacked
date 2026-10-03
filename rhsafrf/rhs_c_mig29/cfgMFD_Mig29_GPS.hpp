
				/// adjust position inside of memory points LOD
				borderLeft				= 0;
				borderRight				= 0;
				borderTop				= 0;
				borderBottom			= 0;
				color[]					= {0.0, 1.0, 0.0, 0.1};
				//font					= "rhs_digital_font_rus";

				class material
				{
					ambient[] = {3, 3, 3, 1};
					diffuse[] = {10, 10, 10, 1};
					emissive[] = {400, 200, 200, 1};
				};

				class Bones
				{
					class MovementY
					{
						type			= linear;
						source			= user;
						sourceIndex 	= 5;
						refreshRate		= 0.1;
						min				= 0;
						max				= 1;
						sourceScale		= 1;
						maxPos[]		= {0,1};
						minPos[]		= {0,0};
					};
					class MovementX: MovementY
					{
						sourceIndex 	= 4;
						maxPos[]		= {0.24,0};
						minPos[]		= {1,0};
					};
					class PlaneDirection
					{
						type		= rotational;
						source		= heading;
						sourceScale	= 1.0;
						center[]	= {0.0, 0.0};
						min			= 0;
						max			= 360;
						minAngle	= 0;
						maxAngle	= 360;
						aspectRatio	= __EVAL(1 / XtoYscale);

					};
					#define WP_MACRO(num,index)						\
					class WP##num##_PosX: MovementX 				\
					{												\
						sourceIndex 	= ##index##;				\
					};												\
					class WP##num##_PosY: MovementY					\
					{												\
						sourceIndex 	= __EVAL(##index## + 1);	\
					};
					WP_MACRO(1,6)
					WP_MACRO(2,8)
					WP_MACRO(3,10)
					WP_MACRO(4,12)
					WP_MACRO(5,14)
					WP_MACRO(6,16)
					WP_MACRO(7,18)
					WP_MACRO(8,20)
					WP_MACRO(9,22)
					WP_MACRO(10,24)
				};

				class Draw
				{
					color[]				= {0.15, 1.0, 0.15};
					alpha				= 1;
					condition			= on;

					HUD_TEXT_STATIC(0.01,0.02,0.05,0.05,right,"Current time:",CurrentTimeText)
					class CurrentTimeSource: CurrentTimeText
					{
						source	= time;
						text	= "%X";
						TEXT_SIZEPOS(0.01,0.08,0.05,0.05)
					};
					HUD_TEXT_STATIC(0.01,0.15,0.05,0.05,right,"Date:",CurrentDateText)
					class CurrentDateSource: CurrentDateText
					{
						source	= time;
						text	= "%x";
						TEXT_SIZEPOS(0.01,0.22,0.05,0.05)
					};
					HUD_TEXT_STATIC(0.01,0.30,0.05,0.05,right,"Speed:",SpeedText)
					class SpeedSource: CurrentDateText
					{
						source		= speed;
						sourceScale = 3.6;
						refreshRate	= 0.9;
						TEXT_SIZEPOS(0.01,0.37,0.05,0.05)
					};
					HUD_TEXT_STATIC(0.09,0.37,0.05,0.05,right,"KM/H",SpeedText2)
					class WP_Data
					{
						condition		= wpvalid;
						HUD_TEXT_STATIC(0.01,0.4+0.2,0.05,0.05,right,"Dist to WP:",WPdistText)
						class WPdist
						{
							type			= text;
							source			= WPDist;
							sourceScale 	= 0.001;
							sourcePrecision = 1;

							align			= right;
							scale			= 1;
							TEXT_SIZEPOS(0.01,0.47+0.2,0.05,0.05)
						};
						HUD_TEXT_STATIC(0.01,0.55+0.2,0.05,0.05,right,"Current WP:",WPIndexText)
						class WPIndex
						{
							type			= text;
							source			= WPIndex;
							sourceScale 	= 1;

							align			= right;
							scale			= 1;
							TEXT_SIZEPOS(0.01,0.62+0.2,0.05,0.05)
						};
						class WP1
						{
							condition = "user6>=0";
							class CurrentWaypoint
							{
								color[]				= {0.9, 0.0, 0.0};
								condition = "1-WPIndex";
								class WaypointShape
								{
									width		= 22;
									type		= line;
									points[]	=
									{
										CIRCLE_BIG_2B(WP2_PosX,WP2_PosY, 0.02),{},
									};
								};
							};
							class WaypointShape
							{
								width		= 6;
								type		= line;
								points[]	=
								{
									CIRCLE_BIG_2B(WP1_PosX,WP1_PosY, 0.02),{},
								};
							};
						};
						class WP2
						{
							condition = "user8>=0";
							class CurrentWaypoint
							{
								color[]				= {0.9, 0.0, 0.0};
								condition = "(WPIndex>=1)*(WPIndex<=1)";
								class WaypointShape
								{
									width		= 22;
									type		= line;
									points[]	=
									{
										CIRCLE_BIG_2B(WP2_PosX,WP2_PosY, 0.02),{},
									};
								};
							};
							class WaypointShape
							{
								width		= 6;
								type		= line;
								points[]	=
								{
									CIRCLE_BIG_2B(WP2_PosX,WP2_PosY, 0.02),{},
									{WP1_PosX,1,WP1_PosY,1,{0,0},1},
									{WP2_PosX,1,WP2_PosY,1,{0,0},1}
								};
							};
						};
						class WP3
						{
							condition = "user10>=0";
							class CurrentWaypoint
							{
								color[]				= {0.9, 0.0, 0.0};
								condition = "(WPIndex>=2)*(WPIndex<=2)";
								class WaypointShape
								{
									width		= 22;
									type		= line;
									points[]	=
									{
										CIRCLE_BIG_2B(WP3_PosX,WP3_PosY, 0.02),{},
									};
								};
							};
							class WaypointShape
							{
								width		= 6;
								type		= line;
								points[]	=
								{
									CIRCLE_BIG_2B(WP3_PosX,WP3_PosY, 0.02),{},
									{WP2_PosX,1,WP2_PosY,1,{0,0},1},
									{WP3_PosX,1,WP3_PosY,1,{0,0},1}
								};
							};
						};
						class WP4
						{
							condition = "user12>=0";
							class CurrentWaypoint
							{
								color[]				= {0.9, 0.0, 0.0};
								condition = "(WPIndex>=3)*(WPIndex<=3)";
								class WaypointShape
								{
									width		= 22;
									type		= line;
									points[]	=
									{
										CIRCLE_BIG_2B(WP4_PosX,WP4_PosY, 0.02),{},
									};
								};
							};
							class WaypointShape
							{
								width		= 6;
								type		= line;
								points[]	=
								{
									CIRCLE_BIG_2B(WP4_PosX,WP4_PosY, 0.02),{},
									{WP3_PosX,1,WP3_PosY,1,{0,0},1},
									{WP4_PosX,1,WP4_PosY,1,{0,0},1}
								};
							};
						};
						class WP5
						{
							condition = "user14>=0";
							class CurrentWaypoint
							{
								color[]				= {0.9, 0.0, 0.0};
								condition = "(WPIndex>=4)*(WPIndex<=4)";
								class WaypointShape
								{
									width		= 22;
									type		= line;
									points[]	=
									{
										CIRCLE_BIG_2B(WP5_PosX,WP5_PosY, 0.02),{},
									};
								};
							};
							class WaypointShape
							{
								width		= 6;
								type		= line;
								points[]	=
								{
									CIRCLE_BIG_2B(WP5_PosX,WP5_PosY, 0.02),{},
									{WP4_PosX,1,WP4_PosY,1,{0,0},1},
									{WP5_PosX,1,WP5_PosY,1,{0,0},1}
								};
							};
						};
						class WP6
						{
							condition = "user16>=0";
							class CurrentWaypoint
							{
								color[]				= {0.9, 0.0, 0.0};
								condition = "(WPIndex>=5)*(WPIndex<=5)";
								class WaypointShape
								{
									width		= 22;
									type		= line;
									points[]	=
									{
										CIRCLE_BIG_2B(WP5_PosX,WP5_PosY, 0.02),{},
									};
								};
							};
							class WaypointShape
							{
								width		= 6;
								type		= line;
								points[]	=
								{
									CIRCLE_BIG_2B(WP6_PosX,WP6_PosY, 0.02),{},
									{WP5_PosX,1,WP5_PosY,1,{0,0},1},
									{WP6_PosX,1,WP6_PosY,1,{0,0},1}
								};
							};
						};
						class WP7
						{
							condition = "user18>=0";
							class CurrentWaypoint
							{
								color[]				= {0.9, 0.0, 0.0};
								condition = "(WPIndex>=6)*(WPIndex<=6)";
								class WaypointShape
								{
									width		= 22;
									type		= line;
									points[]	=
									{
										CIRCLE_BIG_2B(WP7_PosX,WP7_PosY, 0.02),{},
									};
								};
							};
							class WaypointShape
							{
								width		= 6;
								type		= line;
								points[]	=
								{
									CIRCLE_BIG_2B(WP7_PosX,WP7_PosY, 0.02),{},
									{WP6_PosX,1,WP6_PosY,1,{0,0},1},
									{WP7_PosX,1,WP7_PosY,1,{0,0},1}
								};
							};
						};
						class WP8
						{
							condition = "user20>=0";
							class CurrentWaypoint
							{
								color[]				= {0.9, 0.0, 0.0};
								condition = "(WPIndex>=7)*(WPIndex<=7)";
								class WaypointShape
								{
									width		= 22;
									type		= line;
									points[]	=
									{
										CIRCLE_BIG_2B(WP8_PosX,WP8_PosY, 0.02),{},
									};
								};
							};
							class WaypointShape
							{
								width		= 6;
								type		= line;
								points[]	=
								{
									CIRCLE_BIG_2B(WP8_PosX,WP8_PosY, 0.02),{},
									{WP7_PosX,1,WP7_PosY,1,{0,0},1},
									{WP8_PosX,1,WP8_PosY,1,{0,0},1}
								};
							};
						};
						class WP9
						{
							condition = "user22>=0";
							class CurrentWaypoint
							{
								color[]				= {0.9, 0.0, 0.0};
								condition = "(WPIndex>=8)*(WPIndex<=8)";
								class WaypointShape
								{
									width		= 22;
									type		= line;
									points[]	=
									{
										CIRCLE_BIG_2B(WP9_PosX,WP9_PosY, 0.02),{},
									};
								};
							};
							class WaypointShape
							{
								width		= 6;
								type		= line;
								points[]	=
								{
									CIRCLE_BIG_2B(WP9_PosX,WP9_PosY, 0.02),{},
									{WP8_PosX,1,WP8_PosY,1,{0,0},1},
									{WP9_PosX,1,WP9_PosY,1,{0,0},1}
								};
							};
						};
						class WP10
						{
							condition = "user24>=0";
							class CurrentWaypoint
							{
								color[]				= {0.9, 0.0, 0.0};
								condition = "(WPIndex>=9)*(WPIndex<=9)";
								class WaypointShape
								{
									width		= 22;
									type		= line;
									points[]	=
									{
										CIRCLE_BIG_2B(WP10_PosX,WP10_PosY, 0.02),{},
									};
								};
							};
							class WaypointShape
							{
								width		= 6;
								type		= line;
								points[]	=
								{
									CIRCLE_BIG_2B(WP10_PosX,WP10_PosY, 0.02),{},
									{WP9_PosX,1,WP9_PosY,1,{0,0},1},
									{WP10_PosX,1,WP10_PosY,1,{0,0},1}
								};
							};
						};
					};
					class PlanePositionGroup
					{
						color[]				= {0.7, 0.0, 0.1};
						class PlanePosition
						{
							width			= 8;
							type			= line;
							points[]		=
							{

								{MovementY,1,MovementX,1,{PlaneDirection,__EVAL( 0.0),	__EVAL( 0.0 	+ 0.02)		},1},
								{MovementY,1,MovementX,1,{PlaneDirection,__EVAL( 0.02),	__EVAL(-0.035	+ 0.02)		},1},
								{MovementY,1,MovementX,1,{PlaneDirection,__EVAL( 0.0),	__EVAL(-0.025	+ 0.02)		},1},
								{MovementY,1,MovementX,1,{PlaneDirection,__EVAL(-0.02),	__EVAL(-0.035	+ 0.02)		},1},
								{MovementY,1,MovementX,1,{PlaneDirection,__EVAL( 0.0),	__EVAL( 0.0 	+ 0.02)		},1},

							};
						};
					};
				};
