#define PosX0Center 0.50 // 502
#define PosY0Center 0.50 // 49
#define SizeX10deg 0.5
#define SizeY10deg 0.5

MFD_MEMORY_MACRO(MFD_MEMORY_POINTS)
borderLeft				= 0;
borderRight				= 0;
// Unfortunetly there is no way to compensate for screen ratio with sensor source so another MFD class is necessary to compensate for that fact
// Ratio of that MFD is 1:1
borderTop				= __EVAL( (1-(0.141/0.186))/2);
borderBottom			= __EVAL( (1-(0.141/0.186))/2);
color[]					= {1.0, 1.0, 1.0, 1.0};
helmetMountedDisplay	= false;
helmetPosition[]		= {-0.0375,	0.0375,	0.1};
helmetRight[]			= {0.075,	0.0,	0.0};
helmetDown[]			= {0.0,		-0.075,	0.0};
font					= rhsusf_txled;
turret[]				= {-2};
MFD_MATERIAL


class Bones
{
	class Sensor_Offset
	{
		type	= fixed;
		pos[]	= {-0.00, (0.03-0.122)};
	};
	class Static_Offset
	{
		type	= fixed;
		pos[]	= {0.5, (0.53-0.1)};
	};
};
class Draw
{
	alpha				= 1.0;
	color[]				= {0,0.12,0};
	MFD_CONDITION(MFD_CONDITION_NUMBER,4)

	class Group_RWR
	{
		color[] = {0.12,0,0};
		class RWR
		{
			type	= sensor;
			#define SENSOR_SIZE(numb)\
			pos[]	= {Sensor_Offset,{0+numb, 0+numb}, 1};\
			down[]	= {Sensor_Offset,{1-numb, 1-numb}, 1};
			SENSOR_SIZE(0.12)

			showTargetTypes = 1+2 + 4 + 8 + 16 + 32 + 64 + 128 + 256 + 1024;
			width			= 4;

			sensorLineType		= 1;
			sensorLineWidth		= 3;
			targetLineWidth		= __EVAL(-2.0*0.0008);
			targetLineLength	= 0.02;
			range				= user25;

			class MissileThreat
			{
				color[]	= {1,0,0};
				class TargetLines
				{
					type	= line;
					width	= 2;
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
					type	= line;
					width	= 2;
					points[]=
					{
						POINT2(+0.02,-0.0),
						POINT2(-0.0,+0.02),
						POINT2(-0.02,+0.0),
						POINT2(+0.0,-0.02),
						POINT2(+0.02,-0.0)
					};
				};
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
				class TextA
				{
					type	= text;
					source	= static;
					text	= "A";
					align	= center;
					scale	= 1;
					TEXT_SIZEPOS(0.0,-0.01,0.02,0.02)
				};
			};
			class rwrFriendly: rwr
			{
				color[]	= {0,1,0};
				class TargetLines: TargetLines {};
				class TextA: TextA {};
			};
			class rwrEnemy: rwr
			{
				color[]	= {1,0,0};
				class TargetLines: TargetLines {};
				class TextA: TextA {};
			};
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
			// currently selected target
			class assignedTarget
			{
				color[]	= {1,0.3,0};
				class TargetLines
				{
					type = line;
					width = 7;
					points[]=
					{
						CIRCLE_BIG_NB(0.018)
					};
				};
			};
			class target
			{
				class TargetLines
				{
					type = line;
					width = 2;
					points[]=
					{
						POINT2(+0.02,-0.0),
						POINT2(-0.0,+0.02),
						POINT2(-0.02,+0.0),
						POINT2(+0.0,-0.02),
						POINT2(+0.02,-0.0)
					};
				};
				class TextA
				{
					type	= text;
					source	= static;
					text	= "T";
					align	= center;
					scale	= 1;
					TEXT_SIZEPOS(0.0,-0.008,0.02,0.02)
				};
			};
			class targetFriendly: target
			{
				color[]	= {0,1,0};
				class TargetLines: TargetLines {};
				class TextA: TextA {};
			};
			class targetEnemy: target
			{
				color[]	= {1,0,0};
				class TargetLines: TargetLines {};
				class TextA: TextA {};
			};
			class targetGround: target
			{
				class TargetLines: TargetLines {};
				class TextA
				{
					type	= text;
					source	= static;
					text	= "G";
					align	= center;
					scale	= 1;
					TEXT_SIZEPOS(0.0,-0.009,0.02,0.02)
				};
			};
			class targetGroundFriendly: targetGround
			{
				color[]	= {0,1,0};
				class TargetLines: TargetLines {};
				class TextA: TextA {};
			};
			class targetGroundEnemy: targetGround
			{
				color[]	= {1,0,0};
				class TargetLines: TargetLines {};
				class TextA: TextA {};
			};
			class targetGroundRemote: target
			{
				class TargetLines: TargetLines {};
				class TextA
				{
					type	= text;
					source	= static;
					text	= "G";
					align	= center;
					scale	= 1;
					TEXT_SIZEPOS(0.0,-0.009,0.02,0.02)
				};
			};
			class targetGroundRemoteFriendly: targetGroundRemote
			{
				color[]	= {0,1,0};
				class TargetLines: TargetLines {};
				class TextA: TextA {};
			};
			class targetGroundRemoteEnemy: targetGroundRemote
			{
				color[]	= {1,0,0};
				class TargetLines: TargetLines {};
				class TextA: TextA {};
			};
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
				color[]	= {0,1,0};
				class TargetLines: TargetLines {};
			};
			class targetLaserEnemy: targetLaser
			{
				color[]	= {1,0,0};
				class TargetLines: TargetLines {};
			};
			class targetLaserGroup: targetLaser
			{
				color[]	= {1,0,0};
				class TargetLines: TargetLines {};
			};
			class targetNVG: target
			{
				class TargetLines: TargetLines {};
			};
			class targetNVGFriendly: targetNVG
			{
				color[]	= {0,1,0};
				class TargetLines: TargetLines {};
			};
			class targetNVGEnemy: targetNVG
			{
				color[]	= {1,0,0};
				class TargetLines: TargetLines {};
			};
			class targetNVGGroup: targetNVG
			{
				color[]	= {1,0,0};
				class TargetLines: TargetLines {};
			};
			class targetAir
			{
				color[]	= {1,1,1};
				class TargetLines
				{
					type = line;
					width = 2;
					points[]=
					{
						CIRCLE_BIG_NB(0.013)
					};
				};
				class TextA
				{
					type	= text;
					source	= static;
					text	= "A";
					align	= center;
					scale	= 1;
					TEXT_SIZEPOS(0.0,-0.009,0.02,0.02)
				};
			};
			class targetAirFriendly: targetAir
			{
				color[]	= {0,1,0};
				class TargetLines: TargetLines {};
				class TextA: TextA {};
			};
			class targetAirEnemy: targetAir
			{
				color[]	= {1,0,0};
				class TargetLines: TargetLines {};
				class TextA: TextA {};
			};
			class targetAirRemote: targetAir
			{
				color[]	= {1,1,1};
				class TargetLines: TargetLines {};
				class TextA
				{
					type	= text;
					source	= static;
					text	= "R";
					align	= center;
					scale	= 1;
					TEXT_SIZEPOS(0.0,-0.009,0.02,0.02)
				};
			};
			class targetAirRemoteFriendly: targetAirRemote
			{
				color[]	= {0,1,0};
				class TargetLines: TargetLines {};
				class TextA: TextA {};
			};
			class targetAirRemoteEnemy: targetAirRemote
			{
				color[]	= {1,0,0};
				class TargetLines: TargetLines {};
				class TextA: TextA {};
			};
		};
	};
};