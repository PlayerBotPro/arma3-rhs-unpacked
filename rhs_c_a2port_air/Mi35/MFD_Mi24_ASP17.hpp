
#define PosX0Center 0.44
#define PosY0Center 0.47
#define PosYCenterHorizont 0.53
#define SizeX10deg 0.68
#define SizeY10deg 0.74

class MFD
{
	class AirplaneHUD
	{
		enableParallax	= 1;
		topLeft			= "MFD_1_TL";
		topRight		= "MFD_1_TR";
		bottomLeft		= "MFD_1_BL";
		borderLeft		= 0;
		borderRight		= 0;
		borderTop		= 0;
		borderBottom	= 0;
		color[]			= {0,1,0,0.1};
		turret[] 		= {-1};
		class Bones
		{
					class PlaneOrientation
					{
						type			= fixed;
						refreshRate		= 0.1;
						pos[]			= {PosX0Center, PosYCenterHorizont};
					};
			class ImpactPoint
			{
				type	= vector;
				source	= ImpactPoint;
						pos[]			= {PosX0Center, PosYCenterHorizont};
				pos0[]	= {PosX0Center, __EVAL(PosY0Center)};
				pos10[]	= {__EVAL(PosX0Center + SizeX10deg), __EVAL(PosY0Center + SizeY10deg)};
			};
		};
		class Draw
		{
			color[]				= {0.15, 1.0, 0.15};
			alpha				= 0.8;
			condition 			= on;
			class ImpactCross
			{
				width			= 4.0;
				type			= line;
				points[]		=
				{
					{ImpactPoint,{ 0.0, __EVAL(-0.16/XtoYscale)}, 1},
					{ImpactPoint,{ 0.0, __EVAL(-0.03/XtoYscale)}, 1},
					{},
					{ImpactPoint,{ 0.0,  __EVAL(0.16/XtoYscale)}, 1},
					{ImpactPoint,{ 0.0,  __EVAL(0.03/XtoYscale)}, 1},
					{},
					{ImpactPoint,{-0.16,  0.0}, 1},
					{ImpactPoint,{-0.03,  0.0}, 1},
					{},
					{ImpactPoint,{ 0.16,  0.0}, 1},
					{ImpactPoint,{ 0.03,  0.0}, 1},
				};
			};
		};
	};
	class MFD_Map
	{
		topLeft					= "MFD_MAP_TL";
		topRight				= "MFD_MAP_TR";
		bottomLeft				= "MFD_MAP_BL";
		borderLeft				= 0;
		borderRight				= 0;
		borderTop				= 0;
		borderBottom			= 0;
		color[]					= {0.0, 1.0, 0.0, 0.1};
		enableParallax 			= 0;

		class material
		{
			ambient[] = {1, 1, 1, 1};
			diffuse[] = {10, 10, 10, 1};
			emissive[] = {400, 200, 200, 1};
		};

		class Bones
		{
			class MovementY
			{
				type			= linear;
				source			= user;
				sourceIndex 	= 0;
				refreshRate		= 0.1;
				min				= 0;
				max				= 1;
				sourceScale		= 1;
				maxPos[]		= {0,1};
				minPos[]		= {0,0};
			};
			class MovementX: MovementY
			{
				sourceIndex 	= 1;
				maxPos[]		= {0.0,0};
				minPos[]		= {1,0};
			};
		};
		class Draw
		{
			color[]				= {0.9, 0.0, 0.0};
			alpha				= 1;
			condition			= 1;
			class PlanePosition
			{
				width			= 8;
				type			= line;
				#define BOX_SIZE 0.05
				points[]		=
				{
					{MovementY,1,MovementX,1,{__EVAL( BOX_SIZE/1.8),	__EVAL( BOX_SIZE 	+ 0.02)		},1},
					{MovementY,1,MovementX,1,{__EVAL( BOX_SIZE/1.8),	__EVAL(-BOX_SIZE	+ 0.02)		},1},
					{MovementY,1,MovementX,1,{__EVAL(-BOX_SIZE/1.8),	__EVAL(-BOX_SIZE	+ 0.02)		},1},
					{MovementY,1,MovementX,1,{__EVAL(-BOX_SIZE/1.8),	__EVAL( BOX_SIZE	+ 0.02)		},1},
					{MovementY,1,MovementX,1,{__EVAL( BOX_SIZE/1.8),	__EVAL( BOX_SIZE 	+ 0.02)		},1},
				};
			};
			class BlackGroup
			{
				color[]				= {0.0, 0.0, 0.0};
				alpha				= 1;
				condition			= 1;

				class Cross
				{
					width			= 8;
					type			= line;
					points[]		=
					{
						{MovementY,1,MovementX,1,{__EVAL(-BOX_SIZE/1.8),	__EVAL( 0 	+ 0.02)		},1},
						{MovementY,1,MovementX,1,{__EVAL( BOX_SIZE/1.8),	__EVAL(-0	+ 0.02)		},1},{},
						{MovementY,1,MovementX,1,{__EVAL(-0),				__EVAL(-BOX_SIZE	+ 0.02)		},1},
						{MovementY,1,MovementX,1,{__EVAL(-0),				__EVAL( BOX_SIZE	+ 0.02)		},1},{}
					};
				};
			};
		};
	};
};