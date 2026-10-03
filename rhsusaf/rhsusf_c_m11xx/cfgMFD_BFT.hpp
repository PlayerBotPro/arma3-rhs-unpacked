topLeft					= "BFT_Map_TL";
topRight				= "BFT_Map_TR";
bottomLeft				= "BFT_Map_BL";
borderLeft				= 0;
borderRight				= 0;
borderTop				= 0;
borderBottom			= 0;
color[]					= {1.0, 1.0, 1.0, 1.0};
helmetMountedDisplay	= false;
helmetPosition[]		= {-0.0375,	0.0375,	0.1};
helmetRight[]			= {0.075,	0.0,	0.0};
helmetDown[]			= {0.0,		-0.075,	0.0};
font					= rhsusf_txled;

class material
{
	ambient[] = {33, 33, 33, 1};
	diffuse[] = {31, 31, 31, 1};
	emissive[] = {400, 200, 200, 1};
};

class Bones
{
	class Sensor_Offset
	{
		type	= fixed;
		pos[]	= {0.5, 0.48};
	};
	class Static_Offset
	{
		type	= fixed;
		pos[]	= {0.5, 0.5};
	};
	class LimitWaypoint
	{
		type			= limit;
		limits[]		= {0.22,0.06,0.78,0.06};
	};
	class Sensor_Rotation
	{
		center[]	= {0,0};
		type		= rotational;
		source		= heading;
		sourceScale	= 1.0;
		min			= 0;
		max			= 360;
		minAngle	= 0;
		maxAngle	= -180;
		aspectRatio	= __EVAL(1 / XtoYscale);
	};
	class WPPoint
	{
		type			= vector;
		source			= WPPoint;
		pos0[]			= {0.5, __EVAL(PosY0Center)};
		pos10[]			= {__EVAL(0.5 + SizeX10deg), __EVAL(PosY0Center + SizeY10deg)};
	};
	class Direction_Center
	{
		type	= fixed;
		pos[]	= {0.5, 0.5};
	};
	class Rotation_WP_Dir
	{
		pos0[]		= {0.0, 0.0};
		pos10[]		= {0.0, 0.0};
		center[]	= {0.0,0.0};
		type		= rotational;
		source		= user;
		sourceIndex	= 10;
		min			= 0;
		max			= 360;
		minAngle	= 0;
		maxAngle	= -360;
		aspectRatio	= 1;
	};
	class Rotation_WP_Center
	{
		pos0[]		= {0.0, 0.0};
		pos10[]		= {0.0, 0.0};
		center[]	= {0.5, 0.555};
		type		= rotational;
		source		= heading;
		min			= 0;
		max			= 360;
		minAngle	= -180;
		maxAngle	= -360-180;
		aspectRatio	= __EVAL(SizeY10deg/SizeX10deg);
	};

	// Waypoint related
	class MovementY
	{
		type			= linear;
		source			= user;
		sourceIndex 	= 5;
		refreshRate		= 0.1;
		min				= 0; // minus values were for some reason not working very well
		max				= 2;
		sourceScale		= 1;
		maxPos[]		= {0,1};
		minPos[]		= {0,-1};
	};
	class MovementX: MovementY
	{
		sourceIndex 	= 4;
		maxPos[]		= {-1,0};
		minPos[]		= {1,0};
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
	WP_MACRO(1,26)
	WP_MACRO(2,28)
	WP_MACRO(3,30)
	WP_MACRO(4,32)
	WP_MACRO(5,34)
	WP_MACRO(6,36)
	WP_MACRO(7,38)
	WP_MACRO(8,40)
	WP_MACRO(9,42)
	WP_MACRO(10,44)
	WP_MACRO(11,46)
};
class Draw
{
	alpha				= 1.0;
	color[]				= {0,0.0,0.12};
	//MFD_CONDITION(MFD_CONDITION_NUMBER,5)
	class StaticClip
	{
		//clipTL[]	= {0, 0.0};
		//clipBR[]	= {1, 0.815};
		class WaypointGroup
		{
			color[]				= {0,0.0,0.12};
			alpha = 0.6;
			class WP
			{
				condition		= "wpvalid";
				class Draw
				{
					type = line;
					points[] =
					{
					};
				};
				class WP1
				{
					condition = "user26>=0";
					class CurrentWaypoint
					{
						color[]	= {0.9, 0.0, 0.0};
						alpha	= 1;
						condition = "1-WPIndex";
						class WaypointShape
						{
							width		= 16;
							type		= line;
							points[]	=
							{
								CIRCLE_BIG_3B(Direction_Center,WP2_PosX,WP2_PosY, 0.01),{},
							};
						};
					};
					class WaypointShape
					{
						width		= 6;
						type		= line;
						points[]	=
						{
							CIRCLE_BIG_3B(Direction_Center,WP1_PosX,WP1_PosY, 0.02),{},
						};
					};
					HUD_TEXT_3BONES(Direction_Center,WP1_PosX,WP1_PosY,0.05,-0.008,0.022,0.019,center,"01",TexWPNumber)
				};
				class WP2
				{
					condition = "user28>=0";
					class CurrentWaypoint
					{
						color[]	= {0.9, 0.0, 0.0};
						alpha	= 1;
						condition = "(WPIndex>=1)*(WPIndex<=1)";
						class WaypointShape
						{
							width		= 16;
							type		= line;
							points[]	=
							{
								CIRCLE_BIG_3B(Direction_Center,WP2_PosX,WP2_PosY, 0.01),{},
							};
						};
					};
					class WaypointShape
					{
						width		= 6;
						type		= line;
						points[]	=
						{
							CIRCLE_BIG_3B(Direction_Center,WP2_PosX,WP2_PosY, 0.02),{},
							{Direction_Center,1,WP1_PosX,1,WP1_PosY,1,{0,0},1},
							{Direction_Center,1,WP2_PosX,1,WP2_PosY,1,{0,0},1}
						};
					};
					HUD_TEXT_3BONES(Direction_Center,WP2_PosX,WP2_PosY,0.05,-0.008,0.022,0.019,center,"02",TexWPNumber)
				};
				class WP3
				{
					condition = "user30>=0";
					class CurrentWaypoint
					{
						color[]	= {0.9, 0.0, 0.0};
						alpha	= 1;
						condition = "(WPIndex>=2)*(WPIndex<=2)";
						class WaypointShape
						{
							width		= 22;
							type		= line;
							points[]	=
							{
								CIRCLE_BIG_3B(Direction_Center,WP3_PosX,WP3_PosY, 0.01),{},
							};
						};
					};
					class WaypointShape
					{
						width		= 6;
						type		= line;
						points[]	=
						{
							CIRCLE_BIG_3B(Direction_Center,WP3_PosX,WP3_PosY, 0.02),{},
							{Direction_Center,1,WP2_PosX,1,WP2_PosY,1,{0,0},1},
							{Direction_Center,1,WP3_PosX,1,WP3_PosY,1,{0,0},1}
						};
					};
					HUD_TEXT_3BONES(Direction_Center,WP3_PosX,WP3_PosY,0.05,-0.008,0.022,0.019,center,"03",TexWPNumber)
				};
				class WP4
				{
					condition = "user32>=0";
					class CurrentWaypoint
					{
						color[]	= {0.9, 0.0, 0.0};
						alpha	= 1;
						condition = "(WPIndex>=3)*(WPIndex<=3)";
						class WaypointShape
						{
							width		= 22;
							type		= line;
							points[]	=
							{
								CIRCLE_BIG_3B(Direction_Center,WP4_PosX,WP4_PosY, 0.01),{},
							};
						};
					};
					class WaypointShape
					{
						width		= 6;
						type		= line;
						points[]	=
						{
							CIRCLE_BIG_3B(Direction_Center,WP4_PosX,WP4_PosY, 0.02),{},
							{Direction_Center,1,WP3_PosX,1,WP3_PosY,1,{0,0},1},
							{Direction_Center,1,WP4_PosX,1,WP4_PosY,1,{0,0},1}
						};
					};
					HUD_TEXT_3BONES(Direction_Center,WP4_PosX,WP4_PosY,0.05,-0.008,0.022,0.019,center,"04",TexWPNumber)
				};
				class WP5
				{
					condition = "user34>=0";
					class CurrentWaypoint
					{
						color[]	= {0.9, 0.0, 0.0};
						alpha	= 1;
						condition = "(WPIndex>=4)*(WPIndex<=4)";
						class WaypointShape
						{
							width		= 22;
							type		= line;
							points[]	=
							{
								CIRCLE_BIG_3B(Direction_Center,WP5_PosX,WP5_PosY, 0.01),{},
							};
						};
					};
					class WaypointShape
					{
						width		= 6;
						type		= line;
						points[]	=
						{
							CIRCLE_BIG_3B(Direction_Center,WP5_PosX,WP5_PosY, 0.02),{},
							{Direction_Center,1,WP4_PosX,1,WP4_PosY,1,{0,0},1},
							{Direction_Center,1,WP5_PosX,1,WP5_PosY,1,{0,0},1}
						};
					};
					HUD_TEXT_3BONES(Direction_Center,WP5_PosX,WP5_PosY,0.05,-0.008,0.022,0.019,center,"05",TexWPNumber)
				};
				class WP6
				{
					condition = "user36>=0";
					class CurrentWaypoint
					{
						color[]	= {0.9, 0.0, 0.0};
						alpha	= 1;
						condition = "(WPIndex>=5)*(WPIndex<=5)";
						class WaypointShape
						{
							width		= 22;
							type		= line;
							points[]	=
							{
								CIRCLE_BIG_3B(Direction_Center,WP6_PosX,WP6_PosY, 0.01),{},
							};
						};
					};
					class WaypointShape
					{
						width		= 6;
						type		= line;
						points[]	=
						{
							CIRCLE_BIG_3B(Direction_Center,WP6_PosX,WP6_PosY, 0.02),{},
							{Direction_Center,1,WP5_PosX,1,WP5_PosY,1,{0,0},1},
							{Direction_Center,1,WP6_PosX,1,WP6_PosY,1,{0,0},1}
						};
					};
					HUD_TEXT_3BONES(Direction_Center,WP6_PosX,WP6_PosY,0.05,-0.008,0.022,0.019,center,"06",TexWPNumber)
				};
				class WP7
				{
					condition = "user38>=0";
					class CurrentWaypoint
					{
						color[]	= {0.9, 0.0, 0.0};
						alpha	= 1;
						condition = "(WPIndex>=6)*(WPIndex<=6)";
						class WaypointShape
						{
							width		= 22;
							type		= line;
							points[]	=
							{
								CIRCLE_BIG_3B(Direction_Center,WP7_PosX,WP7_PosY, 0.01),{},
							};
						};
					};
					class WaypointShape
					{
						width		= 6;
						type		= line;
						points[]	=
						{
							CIRCLE_BIG_3B(Direction_Center,WP7_PosX,WP7_PosY, 0.02),{},
							{Direction_Center,1,WP6_PosX,1,WP6_PosY,1,{0,0},1},
							{Direction_Center,1,WP7_PosX,1,WP7_PosY,1,{0,0},1}
						};
					};
					HUD_TEXT_3BONES(Direction_Center,WP7_PosX,WP7_PosY,0.05,-0.008,0.022,0.019,center,"07",TexWPNumber)
				};
				class WP8
				{
					condition = "user40>=0";
					class CurrentWaypoint
					{
						color[]	= {0.9, 0.0, 0.0};
						alpha	= 1;
						condition = "(WPIndex>=7)*(WPIndex<=7)";
						class WaypointShape
						{
							width		= 22;
							type		= line;
							points[]	=
							{
								CIRCLE_BIG_3B(Direction_Center,WP8_PosX,WP8_PosY, 0.01),{},
							};
						};
					};
					class WaypointShape
					{
						width		= 6;
						type		= line;
						points[]	=
						{
							CIRCLE_BIG_3B(Direction_Center,WP8_PosX,WP8_PosY, 0.02),{},
							{Direction_Center,1,WP7_PosX,1,WP7_PosY,1,{0,0},1},
							{Direction_Center,1,WP8_PosX,1,WP8_PosY,1,{0,0},1}
						};
					};
					HUD_TEXT_3BONES(Direction_Center,WP8_PosX,WP8_PosY,0.05,-0.008,0.022,0.019,center,"08",TexWPNumber)
				};
				class WP9
				{
					condition = "user42>=0";
					class CurrentWaypoint
					{
						color[]	= {0.9, 0.0, 0.0};
						alpha	= 1;
						condition = "(WPIndex>=8)*(WPIndex<=8)";
						class WaypointShape
						{
							width		= 22;
							type		= line;
							points[]	=
							{
								CIRCLE_BIG_3B(Direction_Center,WP9_PosX,WP9_PosY, 0.01),{},
							};
						};
					};
					class WaypointShape
					{
						width		= 6;
						type		= line;
						points[]	=
						{
							CIRCLE_BIG_3B(Direction_Center,WP9_PosX,WP9_PosY, 0.02),{},
							{Direction_Center,1,WP8_PosX,1,WP8_PosY,1,{0,0},1},
							{Direction_Center,1,WP9_PosX,1,WP9_PosY,1,{0,0},1}
						};
					};
					HUD_TEXT_3BONES(Direction_Center,WP9_PosX,WP9_PosY,0.05,-0.008,0.022,0.019,center,"09",TexWPNumber)
				};
				class WP10
				{
					condition = "user44>=0";
					class CurrentWaypoint
					{
						color[]	= {0.9, 0.0, 0.0};
						alpha	= 1;
						condition = "(WPIndex>=9)*(WPIndex<=9)";
						class WaypointShape
						{
							width		= 22;
							type		= line;
							points[]	=
							{
								CIRCLE_BIG_3B(Direction_Center,WP10_PosX,WP10_PosY, 0.01),{},
							};
						};
					};
					class WaypointShape
					{
						width		= 6;
						type		= line;
						points[]	=
						{
							CIRCLE_BIG_3B(Direction_Center,WP10_PosX,WP10_PosY, 0.02),{},
							{Direction_Center,1,WP9_PosX,1,WP9_PosY,1,{0,0},1},
							{Direction_Center,1,WP10_PosX,1,WP10_PosY,1,{0,0},1}
						};
					};
					HUD_TEXT_3BONES(Direction_Center,WP10_PosX,WP10_PosY,0.05,-0.008,0.022,0.019,center,"10",TexWPNumber)
				};
				class CustomWP
				{
					condition = "user46>=0";
					color[]	= {1.0, 0.5, 0.0};
					alpha	= 0.5;
					class WaypointShape
					{
						width		= 6;
						type		= line;
						points[]	=
						{
							CIRCLE_BIG_3B(Direction_Center,WP11_PosX,WP11_PosY, 0.02),{}
						};
					};
					HUD_TEXT_3BONES(Direction_Center,WP11_PosX,WP11_PosY,0.05,-0.008,0.022,0.019,center,"CWP",TexWPNumber)
				};
			};
		};
	};
	class LightBlue
	{
		color[]				= {0.43,0.8,0.93};
		alpha = 0.15;
		class StaticDrawPolygon
		{
			type = polygon;
			points[] =
			{
				CIRCLE_POLYGON(Static_Offset,0.02,1,10),
				CIRCLE_POLYGON(Static_Offset,0.02,3,10),
				CIRCLE_POLYGON(Static_Offset,0.02,5,10),
				CIRCLE_POLYGON(Static_Offset,0.02,7,10),
				CIRCLE_POLYGON(Static_Offset,0.02,9,10),
				CIRCLE_POLYGON(Static_Offset,0.02,11,10),
				CIRCLE_POLYGON(Static_Offset,0.02,13,10),
				CIRCLE_POLYGON(Static_Offset,0.02,15,10),
				CIRCLE_POLYGON(Static_Offset,0.02,17,10),
				CIRCLE_POLYGON(Static_Offset,0.02,19,10),
				CIRCLE_POLYGON(Static_Offset,0.02,21,10),
				CIRCLE_POLYGON(Static_Offset,0.02,23,10),
				CIRCLE_POLYGON(Static_Offset,0.02,25,10),
				CIRCLE_POLYGON(Static_Offset,0.02,27,10),
				CIRCLE_POLYGON(Static_Offset,0.02,29,10),
				CIRCLE_POLYGON(Static_Offset,0.02,31,10),
				CIRCLE_POLYGON(Static_Offset,0.02,33,10),
				CIRCLE_POLYGON(Static_Offset,0.02,35,10),
			};
		};
	};
	class StaticDraw
	{
		type			= line;
		width			= 6.0;
		points[]		=
		{
			CIRCLE_BIG(Static_Offset,0.021),{},
			{Static_Offset,1,{-0.012,-0.01},1},
			{Static_Offset,1,{-0.012,+0.01},1},
			{Static_Offset,1,{+0.012,+0.01},1},
			{Static_Offset,1,{+0.012,-0.01},1},
			{Static_Offset,1,{-0.012,-0.01},1},{},
		};
	};

	#define COLOR_FRIENDLY color[]	= {0,0,0.12};
	#define COLOR_ENEMY color[]	= {0.12,0,0};
	// Radar
	class SensorGroup
	{
		class Sensor
		{
			type	= sensor;
			#define SENSOR_SIZE(numb)\
			pos[]	= {Sensor_Offset,1,{-0+numb, -0+numb}, 1};\
			down[]	= {Sensor_Offset,1,{0-numb, 0-numb}, 1};
			SENSOR_SIZE(-1)

			showTargetTypes = 2+4+8+16+32+64+128+256+512+1024;
			width			= 4;

			sensorLineType		= 0;
			sensorLineWidth		= 3;
			targetLineWidth		= __EVAL(-2.4*0.0008);
			targetLineLength	= 0.02;
			range				= user0;

			class MissileThreat
			{
				color[]	= {1,0,0};
				class TargetLines
				{
					type=line;
					width = 2;
					points[]=
					{
						CIRCLE_BIG_NB(0.02)
					};
				};
				class TextM
				{
					type	= text;
					source	= static;
					text	= "M";
					align	= center;
					scale	= 1;
					TEXT_SIZEPOS(0.0,-0.01,0.02,0.02)
				};
			};
			class lockingThreat
			{
				color[]	= {1,0.3,0};
				class TargetLines
				{
					type = line;
					points[]=
					{
						POINT2(+0.02,-0.00),
						POINT2(-0.00,+0.02),
						POINT2(-0.02,+0.00),
						POINT2(+0.00,-0.02),
						POINT2(+0.02,-0.00)
					};
				};
			};
			class markingThreat: lockingThreat
			{
				class TargetLines: TargetLines {};
			};
			class rwr
			{
				class TargetLines
				{
					type = line;
					width = 2;
					points[]=
					{
						POINT2(+0.02,-0.00),
						POINT2(-0.00,+0.02),
						POINT2(-0.02,+0.00),
						POINT2(+0.00,-0.02),
						POINT2(+0.02,-0.00)
					};
				};
			};
			class rwrFriendly: rwr
			{
				COLOR_FRIENDLY
				class TargetLines: TargetLines {};
			};
			class rwrEnemy: rwr
			{
				COLOR_ENEMY
				class TargetLines: TargetLines {};
			};
			class rwrGroup: rwr
			{
				color[]	= {1,0,0};
				class TargetLines: TargetLines {};
			};
			class rwrDestroyed {};
			// currently selected target
			class markedTarget
			{
				color[]	= {1,0.3,0};
				class TargetLines
				{
					type = line;
					width = 3;
					#define BOX_SIZE_1 0.017
					#define BOX_SIZE_2 0.01
					points[]=
					{
						POINT2(-BOX_SIZE_1,-BOX_SIZE_1),
						POINT2(-BOX_SIZE_2,-BOX_SIZE_1),{},
						POINT2(+BOX_SIZE_1,-BOX_SIZE_1),
						POINT2(+BOX_SIZE_2,-BOX_SIZE_1),{},

						POINT2(-BOX_SIZE_1,-BOX_SIZE_1),
						POINT2(-BOX_SIZE_1,-BOX_SIZE_2),{},
						POINT2(+BOX_SIZE_1,-BOX_SIZE_1),
						POINT2(+BOX_SIZE_1,-BOX_SIZE_2),{},

						POINT2(-BOX_SIZE_1,+BOX_SIZE_1),
						POINT2(-BOX_SIZE_2,+BOX_SIZE_1),{},
						POINT2(+BOX_SIZE_1,+BOX_SIZE_1),
						POINT2(+BOX_SIZE_2,+BOX_SIZE_1),{},

						POINT2(-BOX_SIZE_1,+BOX_SIZE_1),
						POINT2(-BOX_SIZE_1,+BOX_SIZE_2),{},
						POINT2(+BOX_SIZE_1,+BOX_SIZE_1),
						POINT2(+BOX_SIZE_1,+BOX_SIZE_2),{}
					};
				};
			};
			class assignedTarget: markedTarget
			{
				color[]	= {1,0.0,0};
				class TargetLines: TargetLines {};
			};
			// radar target (default state)
			class target
			{
				color[]	= {1,0.3,0};
				class TargetLines
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
			class targetFriendly: target
			{
				COLOR_FRIENDLY
				class TargetLines: TargetLines {};
			};
			class targetEnemy: target
			{
				COLOR_ENEMY
				class TargetLines: TargetLines {};
			};
			class targetGroup: target
			{
				COLOR_FRIENDLY
				class TargetLines: TargetLines {};
			};
			class targetDestroyed {};
			class targetGround: target
			{
				class TargetLines: TargetLines
				{
					type		= line;
					width		= 3;
					points[]=
					{
						{{-0.026,-0.0},1},
						{{-0.0,+0.026},1},
						{{+0.026,+0.0},1},
						{{+0.0,-0.026},1},
						{{-0.026,-0.0},1},{},
					};
				};
				class StaticDraw
				{
					type			= line;
					width			= 4.0;
					points[]		=
					{
						{{-0.012,-0.01},1},
						{{-0.012,+0.01},1},
						{{+0.012,+0.01},1},
						{{+0.012,-0.01},1},
						{{-0.012,-0.01},1},{},
					};
				};
			};
			class targetGroundFriendly: targetGround
			{
				COLOR_FRIENDLY
				class TargetLines: TargetLines
				{
					type		= line;
					width		= 3;
					points[]=
					{
						CIRCLE_BIG_NB(0.021)
					};
				};
				class StaticDraw
				{
					type			= line;
					width			= 4.0;
					points[]		=
					{
						{{-0.012,-0.01},1},
						{{-0.012,+0.01},1},
						{{+0.012,+0.01},1},
						{{+0.012,-0.01},1},
						{{-0.012,-0.01},1},{},
					};
				};
			};
			class targetGroundEnemy: targetGround
			{
				COLOR_ENEMY
				class TargetLines: TargetLines
				{
					type		= line;
					width		= 3;
					points[]=
					{
						{{-0.026,-0.0},1},
						{{-0.0,+0.026},1},
						{{+0.026,+0.0},1},
						{{+0.0,-0.026},1},
						{{-0.026,-0.0},1},{},
					};
				};
				class StaticDraw
				{
					type			= line;
					width			= 4.0;
					points[]		=
					{
						{{-0.012,-0.01},1},
						{{-0.012,+0.01},1},
						{{+0.012,+0.01},1},
						{{+0.012,-0.01},1},
						{{-0.012,-0.01},1},{},
					};
				};
			};
			class targetGroundGroup: targetGroundFriendly
			{
				COLOR_FRIENDLY
				class TargetLines: TargetLines {};
				class StaticDraw: StaticDraw {};
			};
			class targetGroundDestroyed {};
			class targetGroundRemote: target
			{
				class TargetLines: TargetLines {};
			};
			class targetGroundRemoteFriendly: targetGroundRemote
			{
				COLOR_FRIENDLY
				class TargetLines: TargetLines {};
			};
			class targetGroundRemoteEnemy: targetGroundRemote
			{
				COLOR_ENEMY
				class TargetLines: TargetLines {};
			};
			class targetGroundRemoteGroup: targetGroundRemote
			{
				COLOR_FRIENDLY
				class TargetLines: TargetLines {};
			};
			class targetGroundRemoteDestroyed {};
			class targetLaser: target
			{
				class TargetLines: TargetLines
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
			class targetLaserFriendly: targetLaser
			{
				COLOR_FRIENDLY
				class TargetLines: TargetLines {};
			};
			class targetLaserEnemy: targetLaser
			{
				COLOR_ENEMY
				class TargetLines: TargetLines {};
			};
			class targetLaserGroup: targetLaser
			{
				COLOR_FRIENDLY
				class TargetLines: TargetLines {};
			};
			class targetNVG: targetLaser
			{
				class TargetLines: TargetLines {};
			};
			class targetNVGFriendly: targetNVG
			{
				COLOR_FRIENDLY
				class TargetLines: TargetLines {};
			};
			class targetNVGEnemy: targetNVG
			{
				COLOR_ENEMY
				class TargetLines: TargetLines {};
			};
			class targetNVGGroup: targetNVG
			{
				color[]	= {1,0,0};
				class TargetLines: TargetLines {};
			};
			class targetMan: target
			{
				class TargetLines: TargetLines {};
			};
			class targetManFriendly: targetMan
			{
				COLOR_FRIENDLY
				class TargetLines: TargetLines {};
			};
			class targetManEnemy: targetMan
			{
				COLOR_ENEMY
				class TargetLines: TargetLines {};
			};
			class targetManGroup: targetMan
			{
				COLOR_FRIENDLY
				class TargetLines: TargetLines {};
			};
			class targetManRemote: target
			{
				class TargetLines: TargetLines {};
			};
			class targetManRemoteFriendly: targetManRemote
			{
				COLOR_FRIENDLY
				class TargetLines: TargetLines {};
			};
			class targetManRemoteEnemy: targetManRemote
			{
				COLOR_ENEMY
				class TargetLines: TargetLines {};
			};
			class targetManRemoteGroup: targetManRemote
			{
				COLOR_FRIENDLY
				class TargetLines: TargetLines {};
			};
			class targetAir
			{
				color[]	= {1,1,1};
				class TargetLines
				{
					type		= polygon;
					points[]=
					{
						{
							{{ 0.00, 0.00}, 1},
							{{ 0.012, 0.01}, 1},
							{{ 0.012,-0.01}, 1}
						},
						{
							{{ 0.00, 0.00}, 1},
							{{-0.012, 0.01}, 1},
							{{-0.012,-0.01}, 1}
						}
					};
				};
				class TargetArc
				{
					type = line;
					width = 4;
					points[] =
					{
						{{-0.02,0.0175},1},
						{{-0.02,-0.025},1},
						{{0.02,-0.025},1},
						{{0.02,0.0175},1},
					};
				};
			};
			class targetAirFriendly: targetAir
			{
				COLOR_FRIENDLY
				class TargetLines: TargetLines {};
				class TargetArc
				{
					type = line;
					width = 4;
					points[] =
					{
						{{-0.02,0.0175},1},
						{{-0.016,0.000400007},1},
						{{-0.012,-0.0129},1},
						{{-0.008,-0.0224},1},
						{{-0.004,-0.0281},1},
						{{0,-0.03},1},
						{{0.004,-0.0281},1},
						{{0.008,-0.0224},1},
						{{0.012,-0.0129},1},
						{{0.016,0.000400007},1},
						{{0.02,0.0175},1},
					};
				};
			};
			class targetAirEnemy: targetAir
			{
				COLOR_ENEMY
				class TargetLines: TargetLines {};
				class TargetArc
				{
					type = line;
					width = 4;
					points[] =
					{
						{{-0.02,0.0175},1},
						{{-0.016,0.000400007},1},
						{{-0.012,-0.0129},1},
						{{-0.008,-0.0224},1},
						{{-0.004,-0.0281},1},
						{{0,-0.03},1},
						{{0.004,-0.0281},1},
						{{0.008,-0.0224},1},
						{{0.012,-0.0129},1},
						{{0.016,0.000400007},1},
						{{0.02,0.0175},1},
					};
				};
			};
			class targetAirGroup: targetAir
			{
				COLOR_FRIENDLY
				class TargetLines: TargetLines {};
			};

			class targetAirDestroyed {};
			class targetAirRemote: targetAir
			{
				color[]	= {1,1,1};
				class TargetLines: TargetLines {};
				class TargetArc
				{
					type = line;
					width = 4;
					points[] =
					{
						{{-0.02,0.0175},1},
						{{-0.02,-0.025},1},
						{{0.02,-0.025},1},
						{{0.02,0.0175},1},
					};
				};
			};
			class targetAirRemoteFriendly: targetAirRemote
			{
				COLOR_FRIENDLY
				class TargetLines: TargetLines {};
				class TargetArc
				{
					type = line;
					width = 4;
					points[] =
					{
						{{-0.02,0.0175},1},
						{{-0.016,0.000400007},1},
						{{-0.012,-0.0129},1},
						{{-0.008,-0.0224},1},
						{{-0.004,-0.0281},1},
						{{0,-0.03},1},
						{{0.004,-0.0281},1},
						{{0.008,-0.0224},1},
						{{0.012,-0.0129},1},
						{{0.016,0.000400007},1},
						{{0.02,0.0175},1},
					};
				};
			};
			class targetAirRemoteEnemy: targetAirRemote
			{
				COLOR_ENEMY
				class TargetLines: TargetLines {};
				class TargetArc
				{
					type = line;
					width = 4;
					points[] =
					{
						{{-0.02,0.0175},1},
						{{-0.02,-0.0075},1},
						{{-0.0,-0.03},1},
						{{0.02,-0.0075},1},
						{{0.02,0.0175},1},
					};
				};
			};
			class targetAirRemoteGroup: targetAirRemote
			{
				COLOR_FRIENDLY
				class TargetLines: TargetLines {};
			};
			class targetAirRemoteDestroyed {};
		};
	};

};
