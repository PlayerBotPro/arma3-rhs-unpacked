#define PosX0Center 0.50 // 502
#define PosY0Center 0.50 // 49
#define SizeX10deg 0.434
#define SizeY10deg 0.430

MFD_MEMORY_MACRO(MFD_MEMORY_POINTS)
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
turret[]				= {-2};

class Bones
{
	class Sensor_Offset
	{
		type	= fixed;
		pos[]	= {0.0, 0.38};
	};
	class Static_Offset
	{
		type	= fixed;
		pos[]	= {0.5, 0.85};
	};
	class Static_Offset2: Static_Offset
	{
		pos[]	= {0.5, 0.88};
	};
	class Static_Offset_AA: Static_Offset
	{
		pos[]	= {0.5, 0.495};
	};
	class Sensor_Offset_AA: Static_Offset
	{
		pos[]	= {0.0, -0.005};
	};
	class LimitWaypoint
	{
		type			= limit;
		limits[]		= {0.22,0.06,0.78,0.06};
	};
	class FCR_Bearing
	{
		type			= linear;
		source			= user;
		sourceIndex		= 17;
		min				= -180;
		max				= 180;
		minPos[]		= {0.35, 0.085};
		maxPos[]		= {0.66, 0.085};
	};
	class FCR_ScanLine_Bottom
	{
		type			= rotational;
		source			= user;
		sourceIndex		= 16;
		min				= 0;
		max				= 0.5;
		pos0[]			= {0.0,0.0};
		pos10[]			= {0.0,0.0};
		center[]		= {0.0,0.0};
		minAngle		= __EVAL(180-45);
		maxAngle		= __EVAL(180+45);
		aspectRatio		= 1;
	};
	class FCR_ScanLine_Top: FCR_ScanLine_Bottom
	{
		min				= 0.5;
		max				= 1;
		minAngle		= __EVAL(180+45);
		maxAngle		= __EVAL(180-45);
	};
	class FCR_ScanLine_AA: FCR_ScanLine_Bottom
	{
		min				= 0;
		max				= 1;
		minAngle		= __EVAL(180+0);
		maxAngle		= __EVAL(180+360);
	};
	class WPPoint
	{
		type			= vector;
		source			= WPPoint;
		pos0[]			= {0.5, __EVAL(PosY0Center)};
		pos10[]			= {__EVAL(0.5 + SizeX10deg), __EVAL(PosY0Center + SizeY10deg)};
	};
	class GunnerAim
	{
		type		= vector;
		source		= turret;
		pos0[]		= {0, -2.0}; // in spherical this is offset
		pos10[]		= {0.0068, -0.01}; // in spherical pos10 is scale
		projection	= 0;  // 1 (default) planar projection. 0 spherical projection
	};
};
#define DRAW_BOX(posX,posY,sizeX,sizeY)\
	{{__EVAL(posX			), __EVAL(posY)}, 1},\
	{{__EVAL(posX + sizeX 	), __EVAL(posY)}, 1},\
	{{__EVAL(posX + sizeX 	), __EVAL(posY + sizeY)}, 1},\
	{{__EVAL(posX			), __EVAL(posY + sizeY)}, 1},\
	{{__EVAL(posX			), __EVAL(posY)}, 1}

class Draw
{
	alpha				= 1.0;
	color[]				= {0,0.12,0};
	MFD_CONDITION(MFD_CONDITION_NUMBER,5)
	class Static
	{
		type			= line;
		width			= 5.0;
		points[]		=
		{
			// Top (heading) line
			{{0.5, __EVAL(0.11-0.02)}, 1},
			{{0.5, __EVAL(0.14-0.02)}, 1},{},
			// Radar Elev 
			{{0.01, __EVAL(0.83)}, 1}, 			{{0.035, __EVAL(0.83)}, 1},{},
			{{0.01, __EVAL(0.83+0.015*1)}, 1}, 	{{0.02, __EVAL(0.83+0.015*1)}, 1},{},
			{{0.01, __EVAL(0.83+0.015*2)}, 1}, 	{{0.02, __EVAL(0.83+0.015*2)}, 1},{},
			{{0.01, __EVAL(0.83+0.015*3)}, 1}, 	{{0.02, __EVAL(0.83+0.015*3)}, 1},{},
			{{0.01, __EVAL(0.83+0.015*4)}, 1}, 	{{0.02, __EVAL(0.83+0.015*4)}, 1},{},
			{{0.01, __EVAL(0.83+0.015*5)}, 1}, 	{{0.035, __EVAL(0.83+0.015*5)}, 1},{},
			{{0.01, __EVAL(0.83+0.015*6)}, 1}, 	{{0.02, __EVAL(0.83+0.015*6)}, 1},{},
			{{0.01, __EVAL(0.83+0.015*7)}, 1}, 	{{0.02, __EVAL(0.83+0.015*7)}, 1},{},
			{{0.01, __EVAL(0.83+0.015*8)}, 1}, 	{{0.035, __EVAL(0.83+0.015*8)}, 1},{},
			// Rounded box - left
			{{__EVAL(0.36 	- 0.28), 		__EVAL(0.86		+ 0.05)}, 1},
			{{__EVAL(0.355 	- 0.28), 		__EVAL(0.865	+ 0.05)}, 1},
			{{__EVAL(0.35 	- 0.28), 		__EVAL(0.87		+ 0.05)}, 1},
			{{__EVAL(0.35 	- 0.28), 		__EVAL(0.93		+ 0.05)}, 1},
			{{__EVAL(0.355 	- 0.28), 		__EVAL(0.935	+ 0.05)}, 1},
			{{__EVAL(0.36 	- 0.28), 		__EVAL(0.94		+ 0.05)}, 1},
			{{__EVAL(0.62 	- 0.28), 		__EVAL(0.94		+ 0.05)}, 1},
			{{__EVAL(0.625 	- 0.28), 		__EVAL(0.935	+ 0.05)}, 1},
			{{__EVAL(0.63 	- 0.28), 		__EVAL(0.93		+ 0.05)}, 1},
			{{__EVAL(0.63 	- 0.28), 		__EVAL(0.87		+ 0.05)}, 1},
			{{__EVAL(0.625 	- 0.28), 		__EVAL(0.865	+ 0.05)}, 1},
			{{__EVAL(0.62 	- 0.28), 		__EVAL(0.86		+ 0.05)}, 1},
			{{__EVAL(0.36 	- 0.28), 		__EVAL(0.86		+ 0.05)}, 1},{},
			// Rounded box - right
			{{__EVAL(0.36 	+ 0.3), 		__EVAL(0.86		+ 0.05)}, 1},
			{{__EVAL(0.355 	+ 0.3), 		__EVAL(0.865	+ 0.05)}, 1},
			{{__EVAL(0.35 	+ 0.3), 		__EVAL(0.87		+ 0.05)}, 1},
			{{__EVAL(0.35 	+ 0.3), 		__EVAL(0.93		+ 0.05)}, 1},
			{{__EVAL(0.355 	+ 0.3), 		__EVAL(0.935	+ 0.05)}, 1},
			{{__EVAL(0.36 	+ 0.3), 		__EVAL(0.94		+ 0.05)}, 1},
			{{__EVAL(0.62 	+ 0.3), 		__EVAL(0.94		+ 0.05)}, 1},
			{{__EVAL(0.625 	+ 0.3), 		__EVAL(0.935	+ 0.05)}, 1},
			{{__EVAL(0.63 	+ 0.3), 		__EVAL(0.93		+ 0.05)}, 1},
			{{__EVAL(0.63 	+ 0.3), 		__EVAL(0.87		+ 0.05)}, 1},
			{{__EVAL(0.625 	+ 0.3), 		__EVAL(0.865	+ 0.05)}, 1},
			{{__EVAL(0.62 	+ 0.3), 		__EVAL(0.86		+ 0.05)}, 1},
			{{__EVAL(0.36 	+ 0.3), 		__EVAL(0.86		+ 0.05)}, 1},{},
			{},
			// Line Util
			{{0.8, __EVAL(0.014)}, 1},
			{{0.87, __EVAL(0.014)}, 1},{},

			#define SCALE_IMG 2010
			#define OFFSET_IMG_X -0.007
			#define OFFSET_IMG_Y -0.01
			//name":"PathItem","points":

			{{__EVAL(1914/SCALE_IMG + OFFSET_IMG_X), __EVAL(695/SCALE_IMG + OFFSET_IMG_Y)},1},
			{{__EVAL(1952/SCALE_IMG + OFFSET_IMG_X), __EVAL(695/SCALE_IMG + OFFSET_IMG_Y)},1},
			{{__EVAL(1952/SCALE_IMG + OFFSET_IMG_X), __EVAL(707/SCALE_IMG + OFFSET_IMG_Y)},1},
			{{__EVAL(2013/SCALE_IMG + OFFSET_IMG_X), __EVAL(675/SCALE_IMG + OFFSET_IMG_Y)},1},
			{{__EVAL(1952/SCALE_IMG + OFFSET_IMG_X), __EVAL(642/SCALE_IMG + OFFSET_IMG_Y)},1},
			{{__EVAL(1952/SCALE_IMG + OFFSET_IMG_X), __EVAL(655/SCALE_IMG + OFFSET_IMG_Y)},1},
			{{__EVAL(1914/SCALE_IMG + OFFSET_IMG_X), __EVAL(655/SCALE_IMG + OFFSET_IMG_Y)},1},
			{{__EVAL(1914/SCALE_IMG + OFFSET_IMG_X), __EVAL(695/SCALE_IMG + OFFSET_IMG_Y)},1},{},

			//name":"PathItem","points":

			{{__EVAL(134/SCALE_IMG + OFFSET_IMG_X), __EVAL(695/SCALE_IMG + OFFSET_IMG_Y)},1},
			{{__EVAL(96/SCALE_IMG + OFFSET_IMG_X), __EVAL(695/SCALE_IMG + OFFSET_IMG_Y)},1},
			{{__EVAL(96/SCALE_IMG + OFFSET_IMG_X), __EVAL(707/SCALE_IMG + OFFSET_IMG_Y)},1},
			{{__EVAL(36/SCALE_IMG + OFFSET_IMG_X), __EVAL(675/SCALE_IMG + OFFSET_IMG_Y)},1},
			{{__EVAL(96/SCALE_IMG + OFFSET_IMG_X), __EVAL(642/SCALE_IMG + OFFSET_IMG_Y)},1},
			{{__EVAL(96/SCALE_IMG + OFFSET_IMG_X), __EVAL(655/SCALE_IMG + OFFSET_IMG_Y)},1},
			{{__EVAL(134/SCALE_IMG + OFFSET_IMG_X), __EVAL(655/SCALE_IMG + OFFSET_IMG_Y)},1},
			{{__EVAL(134/SCALE_IMG + OFFSET_IMG_X), __EVAL(695/SCALE_IMG + OFFSET_IMG_Y)},1},{},

		};
	};

	class ClassArrows
	{
		type			= polygon;
		points[]		=
		{
			// Util arrow
			{
				{ {__EVAL(0.85+0.02), __EVAL(0.6*0.488	-0.286)}, 1},
				{ {__EVAL(0.87+0.02), __EVAL(0.6*0.50	-0.286)}, 1},
				{ {__EVAL(0.85+0.02), __EVAL(0.6*0.512	-0.286)}, 1},
			},
			// Radar elevation indicator
			{

				{ {__EVAL(0.87-0.81), __EVAL(0.9*0.488	+ 0.455)}, 1},
				{ {__EVAL(0.85-0.81), __EVAL(0.9*0.50	+ 0.455)}, 1},
				{ {__EVAL(0.87-0.81), __EVAL(0.9*0.512	+ 0.455)}, 1},
			},
			// FCR Centerline Bearing
			{
				POLYGON_BOX_BONE(FCR_Bearing,0.011,0.011,-0.011-0.008,0.0)
			},
			{
				POLYGON_BOX_BONE(FCR_Bearing,0.011,0.011,-0.011+0.008,0.0)
			},
			{
				{FCR_Bearing,{__EVAL(0.011-0.011+0.008), __EVAL(0.0		)}, 1},
				{FCR_Bearing,{__EVAL(0.017-0.011+0.008), __EVAL(0.011/2	)}, 1},
				{FCR_Bearing,{__EVAL(0.011-0.011+0.008), __EVAL(0.011		)}, 1},
			},
			//left
			{
				{FCR_Bearing,{__EVAL(0.011-0.022-0.008), __EVAL(0.0		)}, 1},
				{FCR_Bearing,{__EVAL(0.005-0.022-0.008), __EVAL(0.011/2	)}, 1},
				{FCR_Bearing,{__EVAL(0.011-0.022-0.008), __EVAL(0.011		)}, 1},
			},
		};
	};
	class HeadingHeadNumber
	{
		type			= text;
		source			= heading;
		sourceScale		= 1;

		align			= center;
		scale			= 1;
		TEXT_SIZEPOS(0.5,0.042-0.03,0.04,0.04)

	};
	class HeadingScaleRight
	{
		clipTL[]              = {0.55, 0.00};
		clipBR[]              = {0.77, 0.11};

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

			lineXleft				= __EVAL(0.11-0.03);
			lineYright				= __EVAL(0.10-0.03);
			lineXleftMajor			= __EVAL(0.11-0.03);
			lineYrightMajor			= __EVAL(0.09-0.03);
			majorLineEach			= 3;
			numberEach				= 3;
			step					= __EVAL(10*0.1);
			stepSize				= __EVAL(1/36*0.95);

			align                   = center;
			scale                   = 1;
			pos[]                   = {__EVAL(0.525 - 0.03), 0.05-0.03};
			right[]                 = {__EVAL(0.55 	- 0.03), 0.05-0.03};
			down[]                  = {__EVAL(0.525 - 0.03), 0.08-0.03};
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

		lineXleft		= __EVAL(0.11-0.03);
		lineYright		= __EVAL(0.10-0.03);
		lineXleftMajor	= __EVAL(0.11-0.03);
		lineYrightMajor	= __EVAL(0.10-0.03);
		majorLineEach	= 2;
		step			= __EVAL(10*0.1);
		stepSize		= __EVAL(1/36*0.95);


		align			= center;
		scale			= 1;

		numberEach		= 0; // hidden
		pos[]			= {0.47, 0.05-0.03};
		right[]			= {0.50, 0.05-0.03};
		down[]			= {0.45, 0.09-0.03};

	};
	class HeadingScaleLeft
	{
		clipTL[]              = {0.23, 0.00};
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

			lineXleft				= __EVAL(0.11-0.03);
			lineYright				= __EVAL(0.10-0.03);
			lineXleftMajor			= __EVAL(0.11-0.03);
			lineYrightMajor			= __EVAL(0.09-0.03);
			majorLineEach			= 3;
			numberEach				= 3;
			step					= __EVAL(10*0.1);
			stepSize				= __EVAL(1/36*0.95);

			align					= center;
			scale					= 1;

			pos[]					= {__EVAL(0.175-0.009), 0.05-0.03};
			right[]					= {__EVAL(0.20- 0.009), 0.05-0.03};
			down[]					= {__EVAL(0.175-0.009), 0.08-0.03};
		};
	};

	class WP
	{
		condition		= "wpvalid";
		class Static
		{
			type			= line;
			width			= 4.0;
			points[]		=
			{
				{WPPoint, 1 ,LimitWaypoint, 1, {-0.01, 0.04}, 1},
				{WPPoint, 1 ,LimitWaypoint, 1, { 0.00, 0.02}, 1},
				{WPPoint, 1 ,LimitWaypoint, 1, { 0.01, 0.04}, 1},{},
			};
		};
	};

	HUD_TEXT_STATIC(0.005,	0.54-0.03	,0.03,0.03,right,"T",TgtStoreSelection1)
	HUD_TEXT_STATIC(0.005,	0.58-0.03	,0.03,0.03,right,"G",TgtStoreSelection2)
	HUD_TEXT_STATIC(0.005,	0.62-0.03	,0.03,0.03,right,"T",TgtStoreSelection3)

	HUD_TEXT_STATIC(0.005,	0.54-0.4	,0.03,0.03,right,"N",NextToShoot1)
	HUD_TEXT_STATIC(0.005,	0.58-0.4	,0.03,0.03,right,"T",NextToShoot2)
	HUD_TEXT_STATIC(0.005,	0.62-0.4	,0.03,0.03,right,"S",NextToShoot3)

	HUD_TEXT_STATIC(0.995,	0.54+0.01	,0.03,0.03,left,"RF",RF_Sel1)
	HUD_TEXT_STATIC(0.995,	0.58+0.01	,0.03,0.03,left,"HO",RF_Sel2)

	HUD_TEXT_STATIC(0.995,	0.54+0.24	,0.03,0.03,left,"ACQ",AcquisitionBtn1)
	HUD_TEXT_STATIC(0.995,	0.60+0.24	,0.03,0.03,left,"T32",AcquisitionBtn2)

	HUD_TEXT_STATIC(0.23,	0.03	,0.03,0.03,left,"C SCP",CScope)
	HUD_TEXT_STATIC(0.89,	0.03	,0.03,0.03,left,"UTIL",Utilities)

	HUD_TEXT_STATIC(0.97,	0.08	,0.03,0.03,left,"XXXX",TotalTargetCount)

	class RadarGround
	{
		condition = "1-user8";
		class Static
		{
			type	= line;
			width	= 4;
			points[] = 
			{
				// Gunner field rectangle
				{{0.4, 		__EVAL(0.86		+ 0.05)}, 1},
				{{0.4, 		__EVAL(0.94		+ 0.05)}, 1},
				{{0.6, 		__EVAL(0.94		+ 0.05)}, 1},
				{{0.6, 		__EVAL(0.86		+ 0.05)}, 1},
				{{0.4, 		__EVAL(0.86		+ 0.05)}, 1}, {},
				{{0.4, 		__EVAL(0.885	+ 0.05)}, 1},
				{{0.408, 	__EVAL(0.885	+ 0.05)}, 1}, {},
				{{0.6, 		__EVAL(0.885 	+ 0.05)}, 1},
				{{0.592, 	__EVAL(0.885 	+ 0.05)}, 1}, {},
				{{0.5, 		__EVAL(0.86 	+ 0.05)}, 1},
				{{0.5, 		__EVAL(0.868 	+ 0.05)}, 1}, {},
				{{0.5, 		__EVAL(0.94 	+ 0.05)}, 1},
				{{0.5, 		__EVAL(0.932 	+ 0.05)}, 1}, {},
				DRAW_BOX(0.001,0.71,0.11,0.05),{},
				DRAW_BOX(0.915,0.83,0.085,0.05),{},
				// Gunner aim rectangle
				{GunnerAim, {__EVAL(0.5 - 0.015), __EVAL(0.95 - 0.008)}, 1},
				{GunnerAim, {__EVAL(0.5 - 0.015), __EVAL(0.95 + 0.008)}, 1},
				{GunnerAim, {__EVAL(0.5 + 0.015), __EVAL(0.95 + 0.008)}, 1},
				{GunnerAim, {__EVAL(0.5 + 0.015), __EVAL(0.95 - 0.008)}, 1},
				{GunnerAim, {__EVAL(0.5 - 0.015), __EVAL(0.95 - 0.008)}, 1},
				{},
				POINT_MARK(Static_Offset2,0.05,45),
				POINT_MARK(Static_Offset2,0.68,45),
				POINT_MARK(Static_Offset2,0.68,45-2.5*1),
				POINT_MARK(Static_Offset2,0.68,45-2.5*2),
				POINT_MARK(Static_Offset2,0.68,45-2.5*3),
				POINT_MARK(Static_Offset2,0.68,45-2.5*4),
				POINT_MARK(Static_Offset2,0.68,45-2.5*5),
				POINT_MARK(Static_Offset2,0.68,45-2.5*6),
				POINT_MARK(Static_Offset2,0.68,45-2.5*7),
				POINT_MARK(Static_Offset2,0.68,45-2.5*8),
				POINT_MARK(Static_Offset2,0.68,45-2.5*9),
				POINT_MARK(Static_Offset2,0.68,45-2.5*10),
				POINT_MARK(Static_Offset2,0.68,45-2.5*11),
				POINT_MARK(Static_Offset2,0.68,45-2.5*12),
				POINT_MARK(Static_Offset2,0.68,45-2.5*13),
				POINT_MARK(Static_Offset2,0.68,45-2.5*14),
				POINT_MARK(Static_Offset2,0.68,45-2.5*15),
				POINT_MARK(Static_Offset2,0.68,45-2.5*16),
				POINT_MARK(Static_Offset2,0.68,45-2.5*17),
				POINT_MARK(Static_Offset2,0.68,45-2.5*18),
				POINT_MARK(Static_Offset2,0.68,45-2.5*19),
				POINT_MARK(Static_Offset2,0.68,45-2.5*20),
				POINT_MARK(Static_Offset2,0.68,45-2.5*21),
				POINT_MARK(Static_Offset2,0.68,45-2.5*22),
				POINT_MARK(Static_Offset2,0.68,45-2.5*23),
				POINT_MARK(Static_Offset2,0.68,45-2.5*24),
				POINT_MARK(Static_Offset2,0.68,45-2.5*25),
				POINT_MARK(Static_Offset2,0.68,45-2.5*26),
				POINT_MARK(Static_Offset2,0.68,45-2.5*27),
				POINT_MARK(Static_Offset2,0.68,45-2.5*28),
				POINT_MARK(Static_Offset2,0.68,45-2.5*29),
				POINT_MARK(Static_Offset2,0.68,45-2.5*30),
				POINT_MARK(Static_Offset2,0.68,45-2.5*31),
				POINT_MARK(Static_Offset2,0.68,45-2.5*32),
				POINT_MARK(Static_Offset2,0.68,45-2.5*33),
				POINT_MARK(Static_Offset2,0.68,45-2.5*34),
				POINT_MARK(Static_Offset2,0.68,45-2.5*35),
				POINT_MARK(Static_Offset2,0.68,45-2.5*36),
				POINT_MARK(Static_Offset2,0.05,-45),
				POINT_MARK(Static_Offset2,0.68,-45),{},
				POINT_MARK(Static_Offset2,0.68,0),
				POINT_MARK(Static_Offset2,0.66,0),{},
				POINT_MARK(Static_Offset2,0.68,7.5),
				POINT_MARK(Static_Offset2,0.66,7.5),{},
				POINT_MARK(Static_Offset2,0.68,15),
				POINT_MARK(Static_Offset2,0.66,15),{},
				POINT_MARK(Static_Offset2,0.68,22.5),
				POINT_MARK(Static_Offset2,0.66,22.5),{},
				POINT_MARK(Static_Offset2,0.68,-7.5),
				POINT_MARK(Static_Offset2,0.66,-7.5),{},
				POINT_MARK(Static_Offset2,0.68,-15),
				POINT_MARK(Static_Offset2,0.66,-15),{},
				POINT_MARK(Static_Offset2,0.68,-22.5),
				POINT_MARK(Static_Offset2,0.66,-22.5),{},
			};
		};
		class StaticLight
		{
			type			= line;
			width			= 2.0;
			points[]		=
			{
				POINT_MARK(Static_Offset2,0.51,45-2.5*0),
				POINT_MARK(Static_Offset2,0.51,45-2.5*1),
				POINT_MARK(Static_Offset2,0.51,45-2.5*2),
				POINT_MARK(Static_Offset2,0.51,45-2.5*3),
				POINT_MARK(Static_Offset2,0.51,45-2.5*4),
				POINT_MARK(Static_Offset2,0.51,45-2.5*5),
				POINT_MARK(Static_Offset2,0.51,45-2.5*6),
				POINT_MARK(Static_Offset2,0.51,45-2.5*7),
				POINT_MARK(Static_Offset2,0.51,45-2.5*8),
				POINT_MARK(Static_Offset2,0.51,45-2.5*9),
				POINT_MARK(Static_Offset2,0.51,45-2.5*10),
				POINT_MARK(Static_Offset2,0.51,45-2.5*11),
				POINT_MARK(Static_Offset2,0.51,45-2.5*12),
				POINT_MARK(Static_Offset2,0.51,45-2.5*13),
				POINT_MARK(Static_Offset2,0.51,45-2.5*14),
				POINT_MARK(Static_Offset2,0.51,45-2.5*15),
				POINT_MARK(Static_Offset2,0.51,45-2.5*16),
				POINT_MARK(Static_Offset2,0.51,45-2.5*17),
				POINT_MARK(Static_Offset2,0.51,45-2.5*18),
				POINT_MARK(Static_Offset2,0.51,45-2.5*19),
				POINT_MARK(Static_Offset2,0.51,45-2.5*20),
				POINT_MARK(Static_Offset2,0.51,45-2.5*21),
				POINT_MARK(Static_Offset2,0.51,45-2.5*22),
				POINT_MARK(Static_Offset2,0.51,45-2.5*23),
				POINT_MARK(Static_Offset2,0.51,45-2.5*24),
				POINT_MARK(Static_Offset2,0.51,45-2.5*25),
				POINT_MARK(Static_Offset2,0.51,45-2.5*26),
				POINT_MARK(Static_Offset2,0.51,45-2.5*27),
				POINT_MARK(Static_Offset2,0.51,45-2.5*28),
				POINT_MARK(Static_Offset2,0.51,45-2.5*29),
				POINT_MARK(Static_Offset2,0.51,45-2.5*30),
				POINT_MARK(Static_Offset2,0.51,45-2.5*31),
				POINT_MARK(Static_Offset2,0.51,45-2.5*32),
				POINT_MARK(Static_Offset2,0.51,45-2.5*33),
				POINT_MARK(Static_Offset2,0.51,45-2.5*34),
				POINT_MARK(Static_Offset2,0.51,45-2.5*35),
				POINT_MARK(Static_Offset2,0.51,45-2.5*36),{},
				POINT_MARK(Static_Offset2,0.34,45-2.5*0),
				POINT_MARK(Static_Offset2,0.34,45-2.5*1),
				POINT_MARK(Static_Offset2,0.34,45-2.5*2),
				POINT_MARK(Static_Offset2,0.34,45-2.5*3),
				POINT_MARK(Static_Offset2,0.34,45-2.5*4),
				POINT_MARK(Static_Offset2,0.34,45-2.5*5),
				POINT_MARK(Static_Offset2,0.34,45-2.5*6),
				POINT_MARK(Static_Offset2,0.34,45-2.5*7),
				POINT_MARK(Static_Offset2,0.34,45-2.5*8),
				POINT_MARK(Static_Offset2,0.34,45-2.5*9),
				POINT_MARK(Static_Offset2,0.34,45-2.5*10),
				POINT_MARK(Static_Offset2,0.34,45-2.5*11),
				POINT_MARK(Static_Offset2,0.34,45-2.5*12),
				POINT_MARK(Static_Offset2,0.34,45-2.5*13),
				POINT_MARK(Static_Offset2,0.34,45-2.5*14),
				POINT_MARK(Static_Offset2,0.34,45-2.5*15),
				POINT_MARK(Static_Offset2,0.34,45-2.5*16),
				POINT_MARK(Static_Offset2,0.34,45-2.5*17),
				POINT_MARK(Static_Offset2,0.34,45-2.5*18),
				POINT_MARK(Static_Offset2,0.34,45-2.5*19),
				POINT_MARK(Static_Offset2,0.34,45-2.5*20),
				POINT_MARK(Static_Offset2,0.34,45-2.5*21),
				POINT_MARK(Static_Offset2,0.34,45-2.5*22),
				POINT_MARK(Static_Offset2,0.34,45-2.5*23),
				POINT_MARK(Static_Offset2,0.34,45-2.5*24),
				POINT_MARK(Static_Offset2,0.34,45-2.5*25),
				POINT_MARK(Static_Offset2,0.34,45-2.5*26),
				POINT_MARK(Static_Offset2,0.34,45-2.5*27),
				POINT_MARK(Static_Offset2,0.34,45-2.5*28),
				POINT_MARK(Static_Offset2,0.34,45-2.5*29),
				POINT_MARK(Static_Offset2,0.34,45-2.5*30),
				POINT_MARK(Static_Offset2,0.34,45-2.5*31),
				POINT_MARK(Static_Offset2,0.34,45-2.5*32),
				POINT_MARK(Static_Offset2,0.34,45-2.5*33),
				POINT_MARK(Static_Offset2,0.34,45-2.5*34),
				POINT_MARK(Static_Offset2,0.34,45-2.5*35),
				POINT_MARK(Static_Offset2,0.34,45-2.5*36),{},
				POINT_MARK(Static_Offset2,0.17,45-2.5*0),
				POINT_MARK(Static_Offset2,0.17,45-2.5*1),
				POINT_MARK(Static_Offset2,0.17,45-2.5*2),
				POINT_MARK(Static_Offset2,0.17,45-2.5*3),
				POINT_MARK(Static_Offset2,0.17,45-2.5*4),
				POINT_MARK(Static_Offset2,0.17,45-2.5*5),
				POINT_MARK(Static_Offset2,0.17,45-2.5*6),
				POINT_MARK(Static_Offset2,0.17,45-2.5*7),
				POINT_MARK(Static_Offset2,0.17,45-2.5*8),
				POINT_MARK(Static_Offset2,0.17,45-2.5*9),
				POINT_MARK(Static_Offset2,0.17,45-2.5*10),
				POINT_MARK(Static_Offset2,0.17,45-2.5*11),
				POINT_MARK(Static_Offset2,0.17,45-2.5*12),
				POINT_MARK(Static_Offset2,0.17,45-2.5*13),
				POINT_MARK(Static_Offset2,0.17,45-2.5*14),
				POINT_MARK(Static_Offset2,0.17,45-2.5*15),
				POINT_MARK(Static_Offset2,0.17,45-2.5*16),
				POINT_MARK(Static_Offset2,0.17,45-2.5*17),
				POINT_MARK(Static_Offset2,0.17,45-2.5*18),
				POINT_MARK(Static_Offset2,0.17,45-2.5*19),
				POINT_MARK(Static_Offset2,0.17,45-2.5*20),
				POINT_MARK(Static_Offset2,0.17,45-2.5*21),
				POINT_MARK(Static_Offset2,0.17,45-2.5*22),
				POINT_MARK(Static_Offset2,0.17,45-2.5*23),
				POINT_MARK(Static_Offset2,0.17,45-2.5*24),
				POINT_MARK(Static_Offset2,0.17,45-2.5*25),
				POINT_MARK(Static_Offset2,0.17,45-2.5*26),
				POINT_MARK(Static_Offset2,0.17,45-2.5*27),
				POINT_MARK(Static_Offset2,0.17,45-2.5*28),
				POINT_MARK(Static_Offset2,0.17,45-2.5*29),
				POINT_MARK(Static_Offset2,0.17,45-2.5*30),
				POINT_MARK(Static_Offset2,0.17,45-2.5*31),
				POINT_MARK(Static_Offset2,0.17,45-2.5*32),
				POINT_MARK(Static_Offset2,0.17,45-2.5*33),
				POINT_MARK(Static_Offset2,0.17,45-2.5*34),
				POINT_MARK(Static_Offset2,0.17,45-2.5*35),
				POINT_MARK(Static_Offset2,0.17,45-2.5*36),{},
				POINT_MARK(Static_Offset2,0.68*0.125,45),
				POINT_MARK(Static_Offset2,0.68*0.125,32),{},
				POINT_MARK(Static_Offset2,0.68*0.125*3,45),
				POINT_MARK(Static_Offset2,0.68*0.125*3,40),{},
				POINT_MARK(Static_Offset2,0.68*0.125*5,45),
				POINT_MARK(Static_Offset2,0.68*0.125*5,42),{},
				POINT_MARK(Static_Offset2,0.68*0.125*7,45),
				POINT_MARK(Static_Offset2,0.68*0.125*7,43),{},
				POINT_MARK(Static_Offset2,0.68*0.125,-45),
				POINT_MARK(Static_Offset2,0.68*0.125,-32),{},
				POINT_MARK(Static_Offset2,0.68*0.125*3,-45),
				POINT_MARK(Static_Offset2,0.68*0.125*3,-40),{},
				POINT_MARK(Static_Offset2,0.68*0.125*5,-45),
				POINT_MARK(Static_Offset2,0.68*0.125*5,-42),{},
				POINT_MARK(Static_Offset2,0.68*0.125*7,-45),
				POINT_MARK(Static_Offset2,0.68*0.125*7,-43),{},
			};
		};
		HUD_TEXT_STATIC(0.005,	0.66	,0.03,0.03,right,"ELEV",TransponderID)
		HUD_TEXT_STATIC(0.005,	0.72	,0.03,0.03,right,"AUTO",ElevMode)

		HUD_TEXT_STATIC(0.965,	0.54-0.4	,0.03,0.03,right,"Z",ZoomBtn1)
		HUD_TEXT_STATIC(0.965,	0.58-0.4	,0.03,0.03,right,"O",ZoomBtn2)
		HUD_TEXT_STATIC(0.965,	0.62-0.4	,0.03,0.03,right,"O",ZoomBtn3)
		HUD_TEXT_STATIC(0.965,	0.66-0.4	,0.03,0.03,right,"M",ZoomBtn4)
		// Radar
		class SensorGroup
		{
			class Sensor
			{
				type	= sensor;
				#define SENSOR_SIZE(numb)\
				pos[]	= {Sensor_Offset,{0+numb, 0+numb}, 1};\
				down[]	= {Sensor_Offset,{1-numb, 1-numb}, 1};
				SENSOR_SIZE(-0.18)

				showTargetTypes = 2+4+8+16+32+64+128+256+512+1024;
				width			= 4;

				sensorLineType		= 0;
				sensorLineWidth		= 3;
				targetLineWidth		= __EVAL(-2.4*0.0008);
				targetLineLength	= 0.02;
				range				= 8000;

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
					color[]	= {0,1,0};
					class TargetLines: TargetLines {};
				};
				class rwrEnemy: rwr
				{
					color[]	= {1,0,0};
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
					color[]	= {0,1,0};
					class TargetLines: TargetLines {};
				};
				class targetEnemy: target
				{
					color[]	= {1,0,0};
					class TargetLines: TargetLines {};
				};
				class targetGroup: target
				{
					color[]	= {1,0,0};
					class TargetLines: TargetLines {};
				};
				class targetDestroyed {};
				class targetGround: target
				{
					class TargetLines: TargetLines 
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
				class targetGroundFriendly: targetGround
				{
					color[]	= {0,1,0};
					class TargetLines: TargetLines {};
				};
				class targetGroundEnemy: targetGround
				{
					color[]	= {1,0,0};
					class TargetLines: TargetLines {};
				};
				class targetGroundGroup: targetGround
				{
					color[]	= {1,0,0};
					class TargetLines: TargetLines {};
				};
				class targetGroundDestroyed {};
				class targetGroundRemote: target
				{
					class TargetLines: TargetLines {};
				};
				class targetGroundRemoteFriendly: targetGroundRemote
				{
					color[]	= {0,1,0};
					class TargetLines: TargetLines {};
				};
				class targetGroundRemoteEnemy: targetGroundRemote
				{
					color[]	= {1,0,0};
					class TargetLines: TargetLines {};
				};
				class targetGroundRemoteGroup: targetGroundRemote
				{
					color[]	= {1,0,0};
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
				class targetNVG: targetLaser
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
				class targetMan: target
				{
					class TargetLines: TargetLines {};
				};
				class targetManFriendly: targetMan
				{
					color[]	= {0,1,0};
					class TargetLines: TargetLines {};
				};
				class targetManEnemy: targetMan
				{
					color[]	= {1,0,0};
					class TargetLines: TargetLines {};
				};
				class targetManGroup: targetMan
				{
					color[]	= {1,0,0};
					class TargetLines: TargetLines {};
				};
				class targetManRemote: target
				{
					class TargetLines: TargetLines {};
				};
				class targetManRemoteFriendly: targetManRemote
				{
					color[]	= {0,1,0};
					class TargetLines: TargetLines {};
				};
				class targetManRemoteEnemy: targetManRemote
				{
					color[]	= {1,0,0};
					class TargetLines: TargetLines {};
				};
				class targetManRemoteGroup: targetManRemote
				{
					color[]	= {1,0,0};
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
				class targetAirFriendly: targetAir
				{
					color[]	= {0,1,0};
					class TargetLines: TargetLines {};
				};
				class targetAirEnemy: targetAir
				{
					color[]	= {1,0,0};
					class TargetLines: TargetLines {};
				};
				class targetAirGroup: targetAir
				{
					color[]	= {1,0,0};
					class TargetLines: TargetLines {};
				};

				class targetAirDestroyed {};
				class targetAirRemote: targetAir
				{
					color[]	= {1,1,1};
					class TargetLines: TargetLines {};
				};
				class targetAirRemoteFriendly: targetAirRemote
				{
					color[]	= {0,1,0};
					class TargetLines: TargetLines {};
				};
				class targetAirRemoteEnemy: targetAirRemote
				{
					color[]	= {1,0,0};
					class TargetLines: TargetLines {};
				};
				class targetAirRemoteGroup: targetAirRemote
				{
					color[]	= {1,0,0};
					class TargetLines: TargetLines {};
				};
				class targetAirRemoteDestroyed {};
			};
		};
	};
	class RadarAir
	{
		condition = "user8";
		class Static
		{
			type	= line;
			width	= 4;
			points[] = 
			{

				POINT_MARK(Static_Offset_AA,0.36,0),
				POINT_MARK(Static_Offset_AA,0.31,0),{},
				POINT_MARK(Static_Offset_AA,0.36,90),
				POINT_MARK(Static_Offset_AA,0.31,90),{},
				POINT_MARK(Static_Offset_AA,0.36,180),
				POINT_MARK(Static_Offset_AA,0.31,180),{},
				POINT_MARK(Static_Offset_AA,0.36,270),
				POINT_MARK(Static_Offset_AA,0.31,270),{},
				//name":"PathItem","points":

				{{__EVAL(51/SCALE_IMG + OFFSET_IMG_X), __EVAL(1450/SCALE_IMG + OFFSET_IMG_Y)},1},
				{{__EVAL(51/SCALE_IMG + OFFSET_IMG_X), __EVAL(1414/SCALE_IMG + OFFSET_IMG_Y)},1},
				{{__EVAL(40/SCALE_IMG + OFFSET_IMG_X), __EVAL(1414/SCALE_IMG + OFFSET_IMG_Y)},1},
				{{__EVAL(70/SCALE_IMG + OFFSET_IMG_X), __EVAL(1361/SCALE_IMG + OFFSET_IMG_Y)},1},
				{{__EVAL(100/SCALE_IMG + OFFSET_IMG_X), __EVAL(1414/SCALE_IMG + OFFSET_IMG_Y)},1},
				{{__EVAL(88/SCALE_IMG + OFFSET_IMG_X), __EVAL(1414/SCALE_IMG + OFFSET_IMG_Y)},1},
				{{__EVAL(88/SCALE_IMG + OFFSET_IMG_X), __EVAL(1450/SCALE_IMG + OFFSET_IMG_Y)},1},
				{{__EVAL(51/SCALE_IMG + OFFSET_IMG_X), __EVAL(1450/SCALE_IMG + OFFSET_IMG_Y)},1},{},

				//name":"PathItem","points":

				{{__EVAL(51/SCALE_IMG + OFFSET_IMG_X), __EVAL(1553/SCALE_IMG + OFFSET_IMG_Y)},1},
				{{__EVAL(51/SCALE_IMG + OFFSET_IMG_X), __EVAL(1588/SCALE_IMG + OFFSET_IMG_Y)},1},
				{{__EVAL(40/SCALE_IMG + OFFSET_IMG_X), __EVAL(1588/SCALE_IMG + OFFSET_IMG_Y)},1},
				{{__EVAL(70/SCALE_IMG + OFFSET_IMG_X), __EVAL(1642/SCALE_IMG + OFFSET_IMG_Y)},1},
				{{__EVAL(100/SCALE_IMG + OFFSET_IMG_X), __EVAL(1588/SCALE_IMG + OFFSET_IMG_Y)},1},
				{{__EVAL(88/SCALE_IMG + OFFSET_IMG_X), __EVAL(1588/SCALE_IMG + OFFSET_IMG_Y)},1},
				{{__EVAL(88/SCALE_IMG + OFFSET_IMG_X), __EVAL(1553/SCALE_IMG + OFFSET_IMG_Y)},1},
				{{__EVAL(51/SCALE_IMG + OFFSET_IMG_X), __EVAL(1553/SCALE_IMG + OFFSET_IMG_Y)},1},{},


				{{__EVAL(894/SCALE_IMG + OFFSET_IMG_X), __EVAL(1863/SCALE_IMG + OFFSET_IMG_Y)},1},
				{{__EVAL(901/SCALE_IMG + OFFSET_IMG_X), __EVAL(1845/SCALE_IMG + OFFSET_IMG_Y)},1},
				{{__EVAL(922/SCALE_IMG + OFFSET_IMG_X), __EVAL(1834/SCALE_IMG + OFFSET_IMG_Y)},1},
				{{__EVAL(1123/SCALE_IMG + OFFSET_IMG_X), __EVAL(1834/SCALE_IMG + OFFSET_IMG_Y)},1},
				{{__EVAL(1144/SCALE_IMG + OFFSET_IMG_X), __EVAL(1844/SCALE_IMG + OFFSET_IMG_Y)},1},
				{{__EVAL(1150/SCALE_IMG + OFFSET_IMG_X), __EVAL(1863/SCALE_IMG + OFFSET_IMG_Y)},1},
				{{__EVAL(1150/SCALE_IMG + OFFSET_IMG_X), __EVAL(1984/SCALE_IMG + OFFSET_IMG_Y)},1},
				{{__EVAL(1145/SCALE_IMG + OFFSET_IMG_X), __EVAL(1994/SCALE_IMG + OFFSET_IMG_Y)},1},
				{{__EVAL(1134/SCALE_IMG + OFFSET_IMG_X), __EVAL(2004/SCALE_IMG + OFFSET_IMG_Y)},1},
				{{__EVAL(1124/SCALE_IMG + OFFSET_IMG_X), __EVAL(2010/SCALE_IMG + OFFSET_IMG_Y)},1},
				{{__EVAL(922/SCALE_IMG + OFFSET_IMG_X), __EVAL(2010/SCALE_IMG + OFFSET_IMG_Y)},1},
				{{__EVAL(910/SCALE_IMG + OFFSET_IMG_X), __EVAL(2003/SCALE_IMG + OFFSET_IMG_Y)},1},
				{{__EVAL(900/SCALE_IMG + OFFSET_IMG_X), __EVAL(1993/SCALE_IMG + OFFSET_IMG_Y)},1},
				{{__EVAL(894/SCALE_IMG + OFFSET_IMG_X), __EVAL(1982/SCALE_IMG + OFFSET_IMG_Y)},1},
				{{__EVAL(894/SCALE_IMG + OFFSET_IMG_X), __EVAL(1863/SCALE_IMG + OFFSET_IMG_Y)},1},{},

			};
		};
		class StaticBold
		{
			type	= line;
			width	= 6;
			points[] = 
			{

				CIRCLE_BIG(Static_Offset_AA,0.36),{},
				CIRCLE_BIG(Static_Offset_AA,0.26),{},
				CIRCLE_BIG(Static_Offset_AA,0.17),{},
				CIRCLE_BIG(Static_Offset_AA,0.08),{},
				CIRCLE_BIG(Static_Offset_AA,0.015),{},
			};
		};
		// Radar
		class SensorGroup
		{
			class Sensor
			{
				type	= sensor;
				#define SENSOR_SIZE(numb)\
				pos[]	= {Sensor_Offset_AA,{0+numb, 0+numb}, 1};\
				down[]	= {Sensor_Offset_AA,{1-numb, 1-numb}, 1};
				SENSOR_SIZE(0.145)

				showTargetTypes = 2+4+8+16+32+64+128+256+512+1024;
				width			= 4;

				sensorLineType		= 0;
				sensorLineWidth		= 3;
				targetLineWidth		= __EVAL(-2.4*0.0008);
				targetLineLength	= 0.02;
				range				= 8000;

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
					color[]	= {0,1,0};
					class TargetLines: TargetLines {};
				};
				class rwrEnemy: rwr
				{
					color[]	= {1,0,0};
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
					color[]	= {0,1,0};
					class TargetLines: TargetLines {};
				};
				class targetEnemy: target
				{
					color[]	= {1,0,0};
					class TargetLines: TargetLines {};
				};
				class targetGroup: target
				{
					color[]	= {1,0,0};
					class TargetLines: TargetLines {};
				};
				class targetDestroyed {};
				class targetGround: target
				{
					class TargetLines: TargetLines 
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
				class targetGroundFriendly: targetGround
				{
					color[]	= {0,1,0};
					class TargetLines: TargetLines {};
				};
				class targetGroundEnemy: targetGround
				{
					color[]	= {1,0,0};
					class TargetLines: TargetLines {};
				};
				class targetGroundGroup: targetGround
				{
					color[]	= {1,0,0};
					class TargetLines: TargetLines {};
				};
				class targetGroundDestroyed {};
				class targetGroundRemote: target
				{
					class TargetLines: TargetLines {};
				};
				class targetGroundRemoteFriendly: targetGroundRemote
				{
					color[]	= {0,1,0};
					class TargetLines: TargetLines {};
				};
				class targetGroundRemoteEnemy: targetGroundRemote
				{
					color[]	= {1,0,0};
					class TargetLines: TargetLines {};
				};
				class targetGroundRemoteGroup: targetGroundRemote
				{
					color[]	= {1,0,0};
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
				class targetNVG: targetLaser
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
				class targetMan: target
				{
					class TargetLines: TargetLines {};
				};
				class targetManFriendly: targetMan
				{
					color[]	= {0,1,0};
					class TargetLines: TargetLines {};
				};
				class targetManEnemy: targetMan
				{
					color[]	= {1,0,0};
					class TargetLines: TargetLines {};
				};
				class targetManGroup: targetMan
				{
					color[]	= {1,0,0};
					class TargetLines: TargetLines {};
				};
				class targetManRemote: target
				{
					class TargetLines: TargetLines {};
				};
				class targetManRemoteFriendly: targetManRemote
				{
					color[]	= {0,1,0};
					class TargetLines: TargetLines {};
				};
				class targetManRemoteEnemy: targetManRemote
				{
					color[]	= {1,0,0};
					class TargetLines: TargetLines {};
				};
				class targetManRemoteGroup: targetManRemote
				{
					color[]	= {1,0,0};
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
				class targetAirFriendly: targetAir
				{
					color[]	= {0,1,0};
					class TargetLines: TargetLines {};
				};
				class targetAirEnemy: targetAir
				{
					color[]	= {1,0,0};
					class TargetLines: TargetLines {};
				};
				class targetAirGroup: targetAir
				{
					color[]	= {1,0,0};
					class TargetLines: TargetLines {};
				};

				class targetAirDestroyed {};
				class targetAirRemote: targetAir
				{
					color[]	= {1,1,1};
					class TargetLines: TargetLines {};
				};
				class targetAirRemoteFriendly: targetAirRemote
				{
					color[]	= {0,1,0};
					class TargetLines: TargetLines {};
				};
				class targetAirRemoteEnemy: targetAirRemote
				{
					color[]	= {1,0,0};
					class TargetLines: TargetLines {};
				};
				class targetAirRemoteGroup: targetAirRemote
				{
					color[]	= {1,0,0};
					class TargetLines: TargetLines {};
				};
				class targetAirRemoteDestroyed {};
			};
		};
	};

	// High Action Display
	// Left side
	class RadarGroup
	{
		condition		= "activeSensorsOn";
		class RadarGround
		{
			condition = "1-user8";
			HUD_TEXT_STATIC(0.1-0.02,	0.86+0.06		,0.027,	0.027,right,"FCR/G",TransText)
			class DrawLines
			{
				type	= line;
				width	= 4;
				points[] =
				{
					POINT_MARK_2B(Static_Offset2,FCR_ScanLine_Bottom,0.05,0),
					POINT_MARK_2B(Static_Offset2,FCR_ScanLine_Bottom,0.34,0),{},
					POINT_MARK_2B(Static_Offset2,FCR_ScanLine_Top,0.34,0),
					POINT_MARK_2B(Static_Offset2,FCR_ScanLine_Top,0.68,0),{},
				};
			};
		};
		class RadarAir
		{
			condition = "user8>=1";
			HUD_TEXT_STATIC(0.1-0.02,	0.86+0.06		,0.027,	0.027,right,"FCR/A",TransText)
			class DrawLines
			{
				type	= line;
				width	= 4;
				points[] =
				{
					POINT_MARK_2B(Static_Offset_AA,FCR_ScanLine_AA,0.013,0),
					POINT_MARK_2B(Static_Offset_AA,FCR_ScanLine_AA,0.36,0),{},
				};
			};
			class RangeBottom_Null
			{
				condition = "altitudeAGL<=100";
				HUD_TEXT_STATIC(0.5,0.90+0.055,0.024,0.024,center,"30",RangeBottom)
			};
			class RangeBottom
			{
				condition = "altitudeAGL>=100";
				class RangeBottom
				{
					type			= text;
					source			= altitudeAGL;
					sourceScale		= HEIGHT_FACTOR*0.6;
					sourceOffset 	= -50*HEIGHT_FACTOR*0.6;
					refreshRate		= 0.1;
					align			= center;
					scale			= 1;
					TEXT_SIZEPOS(0.5,0.90+0.055,0.024,0.024)
				};
			};
			class RangeTop
			{
				type			= text;
				source			= altitudeAGL;
				sourceScale		= HEIGHT_FACTOR;
				sourceOffset 	= 100*HEIGHT_FACTOR;
				refreshRate		= 0.1;
				align			= center;
				scale			= 1;
				TEXT_SIZEPOS(0.5,0.855+0.06,0.024,0.024)
			};
		};
		class AutoRange
		{
			condition = "targetDist>=1";
			HUD_TEXT_STATIC(0.26-0.05,	0.86+0.06		,0.027,	0.027,right,"R",RangeText)
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
				TEXT_SIZEPOS(0.29-0.05,0.86+0.06,0.027,0.027)
			};
		};
		class LaserRange
		{
			condition = "targetDist<=0.99";
			HUD_TEXT_STATIC(0.26-0.05,	0.86+0.06		,0.027,	0.027,right,"*",RangeText)
			class SpeedSource
			{
				type			= text;
				source			= laserDist;
				sourceScale		= 1;
				sourceLength	= 4;
				refreshRate		= 0.1;
				align			= right;
				scale			= 1;
				TEXT_SIZEPOS(0.29-0.05,0.86+0.06,0.027,0.027)
			};
		};
	};
	class TADSGroup
	{
		condition		= "1-activeSensorsOn";
		HUD_TEXT_STATIC(0.1-0.02,	0.86+0.06		,0.027,	0.027,right,"TADS",TransText)
		class AutoRange
		{
			condition = "targetDist>=1";
			HUD_TEXT_STATIC(0.26-0.05,	0.86+0.06		,0.027,	0.027,right,"A",RangeText)
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
				TEXT_SIZEPOS(0.29-0.05,0.86+0.06,0.027,0.027)
			};
		};
		class LaserRange
		{
			condition = "targetDist<=0.99";
			HUD_TEXT_STATIC(0.26-0.05,	0.86+0.06		,0.027,	0.027,right,"*",RangeText)
			class SpeedSource
			{
				type			= text;
				source			= laserDist;
				sourceScale		= 1;
				sourceLength	= 4;
				refreshRate		= 0.1;
				align			= right;
				scale			= 1;
				TEXT_SIZEPOS(0.29-0.05,0.86+0.06,0.027,0.027)
			};
		};
	};
	// Right side
	class MGun
	{
		condition		= mgun;

		HUD_TEXT_STATIC(0.61+0.05,0.86+0.06,0.027,0.027,right,"P GUN",RangeText)
		class Weapons
		{
			type			= text;
			source			= weapon;
			text			= "GUN";
			sourceScale		= 1;

			align			= right;
			scale			= 0.5;
			TEXT_SIZEPOS(0.61+0.05,0.90+0.055,0.027,0.027)
		};
		class Ammo
		{
			type			= text;
			source			= ammo;
			sourceScale		= 1;

			align			= left;
			scale			= 0.5;
			TEXT_SIZEPOS(0.85+0.05,0.86+0.06,0.027,0.027)
		};
	};

	class AAMissile
	{
		condition		= "bomb";
		HUD_TEXT_STATIC(0.61+0.05,0.86+0.06,0.027,0.027,right,"P ATA",ModeText)

		class Weapons
		{
			type			= text;
			source			= weapon;
			sourceScale		= 1;

			align			= right;
			scale			= 0.5;
			TEXT_SIZEPOS(0.61+0.05,0.90+0.055,0.027,0.027)
		};
	};
	class ATMissile
	{
		condition		= "ATmissile + AAmissile";
		HUD_TEXT_STATIC(0.61+0.05,0.86+0.06,0.027,0.027,right,"P MSL",ModeText)

		class Weapons
		{
			type			= text;
			source			= weapon;
			sourceScale		= 1;

			align			= right;
			scale			= 0.5;
			TEXT_SIZEPOS(0.61+0.05,0.90+0.055,0.027,0.027)
		};
	};
	class Rockets
	{
		condition		= "rocket";
		HUD_TEXT_STATIC(0.61+0.05,0.86+0.06,0.027,0.027,right,"P RKT",ModeText)
		class AmmoName
		{
			type			= text;
			source			= ammoFormat;
			sourceScale		= 1;

			align			= right;
			scale			= 0.5;
			TEXT_SIZEPOS(0.61+0.05,0.90+0.055,0.027,0.027)
		};
	};

};
