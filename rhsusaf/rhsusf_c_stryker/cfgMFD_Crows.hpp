
class MFD_CROWS
{
	topLeft					= "PIP_3_TL";
	topRight				= "PIP_3_TR";
	bottomLeft				= "PIP_3_BL";
	borderLeft				= 0;
	borderRight				= 0;
	borderTop				= 0;
	borderBottom			= 0;
	color[]					= {0.84,0.86,0.84};
	alpha					= 1;
	enableParallax			= 0;
	font					= RobotoCondensedLight;
	class material
	{
		ambient[] = {3, 3, 3, 1};
		diffuse[] = {10, 10, 10, 1};
		emissive[] = {400, 200, 200, 1};
	};
	class Bones
	{
		class Static_Offset
		{
			type	= fixed;
			pos[]	= {0.08, 0.9};
		};
		class Cross
		{
			type	= fixed;
			pos[]	= {0.0, -0.145};
		};
		class TurretRotation
		{
			type			= rotational;
			source			= weaponHeading;
			sourceIndex		= 0;
			center[]		= {0.0, 0.0};
			min				= -180;
			max				= 180;
			minAngle		= -180;
			maxAngle		= 180;
			sourceOffset	= -180;
			aspectRatio		= __EVAL(SizeY10deg / SizeX10deg);
		};
	};
	#define XtoYscaleInv (SizeY10deg / SizeX10deg)
	class Draw
	{
		color[] = {1,0,0,1};
		alpha = 1;
		class StaticDraw
		{
			type			= line;
			width			= 3.0;
			points[]		=
			{
				POINT(Cross,0.43,0.5),
				POINT(Cross,0.57,0.5),{},
				POINT(Cross,0.5,0.43),
				POINT(Cross,0.5,0.57),{},
				CIRCLE_BIG(Static_Offset,0.06),{},

				POINT_MARK(Static_Offset,0.06,30*0),	POINT_MARK(Static_Offset,0.05,30*0),{},
				POINT_MARK(Static_Offset,0.06,30*1),	POINT_MARK(Static_Offset,0.05,30*1),{},
				POINT_MARK(Static_Offset,0.06,30*2),	POINT_MARK(Static_Offset,0.05,30*2),{},
				POINT_MARK(Static_Offset,0.06,30*3),	POINT_MARK(Static_Offset,0.05,30*3),{},
				POINT_MARK(Static_Offset,0.06,30*4),	POINT_MARK(Static_Offset,0.05,30*4),{},
				POINT_MARK(Static_Offset,0.06,30*5),	POINT_MARK(Static_Offset,0.05,30*5),{},
				POINT_MARK(Static_Offset,0.06,30*6),	POINT_MARK(Static_Offset,0.05,30*6),{},
				POINT_MARK(Static_Offset,0.06,30*7),	POINT_MARK(Static_Offset,0.05,30*7),{},
				POINT_MARK(Static_Offset,0.06,30*8),	POINT_MARK(Static_Offset,0.05,30*8),{},
				POINT_MARK(Static_Offset,0.06,30*9),	POINT_MARK(Static_Offset,0.05,30*9),{},
				POINT_MARK(Static_Offset,0.06,30*10),	POINT_MARK(Static_Offset,0.05,30*10),{},
				POINT_MARK(Static_Offset,0.06,30*11),	POINT_MARK(Static_Offset,0.05,30*11),{},
				// Gun direction
				POINT_MARK_2B(Static_Offset,TurretRotation,0.045,0),	POINT_MARK_2B(Static_Offset,TurretRotation,0.0,0),{},
			};
		};
		class StaticDrawBold
		{
			type			= line;
			width			= 8.0;
			points[]		=
			{
				POINT(Cross,0.3,	0.5),
				POINT(Cross,0.43,	0.5),{},
				POINT(Cross,0.57,	0.5),
				POINT(Cross,0.7,	0.5),{},
				POINT(Cross,0.5,	0.3),
				POINT(Cross,0.5,	0.43),{},
				POINT(Cross,0.5,	0.57),
				POINT(Cross,0.5,	0.7),{},
			};
		};
		#define FONT_SIZE 0.05
		HUD_TEXT_STATIC(0.01,0.510,FONT_SIZE,FONT_SIZE,right,"LRF:",Range_Text)
		class Range_Value
		{
			type		= "text";
			source		= "laserDist";
			sourceScale	= 1;
			sourceLength= 3;
			scale 		= 1;
			align		= "right";
			refreshRate = 0.08;

			TEXT_SIZEPOS(0.01+0.1,0.51,FONT_SIZE,FONT_SIZE)
		};
		HUD_TEXT_STATIC(0.01,0.67,FONT_SIZE,FONT_SIZE,right,"Ballistic:",Ballistic_Text)
		class Ballistic_Value
		{
			type		= "text";
			source		= "laserDist";
			sourceScale	= 1;
			sourceLength= 3;
			scale 		= 1;
			align		= "right";
			refreshRate = 0.08;

			TEXT_SIZEPOS(0.01+0.13,0.67,FONT_SIZE,FONT_SIZE)
		};
		HUD_TEXT_STATIC(0.01,0.71,FONT_SIZE,FONT_SIZE,right,"FOV:",Mode_Text)
		class Mode_Value
		{
			type		= "text";
			source		= "userText";
			text		= "1.0x";
			sourceIndex = 1;
			sourceScale	= 1;
			sourceLength= 3;
			scale 		= 1;
			align		= "right";
			refreshRate = 0.08;

			TEXT_SIZEPOS(0.01+0.1,0.71,FONT_SIZE,FONT_SIZE)
		};
		HUD_TEXT_STATIC(0.01,0.75,FONT_SIZE,FONT_SIZE,right,"Elev:",Elev_Text)
		class Elev_Value
		{
			type		= "text";
			source		= "[y]turretworld";
			sourceScale	= 1;
			sourcePrecision = 1;
			sourceLength= 3;
			scale 		= 1;
			align		= "right";
			refreshRate = 0.08;

			TEXT_SIZEPOS(0.01+0.1,0.75,FONT_SIZE,FONT_SIZE)
		};

	};
};