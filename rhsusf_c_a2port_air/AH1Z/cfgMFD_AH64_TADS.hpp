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
	class HUDCenter
	{
		type			= fixed;
		pos[]			= {PosX0Center, PosY0Center};
	};


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
		type			= horizon;
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
		minPos[]		= {0, -0.26};
		maxPos[]		= {0, 0.26};
	};
	class TurnRate
	{
		type			= linear;
		source			= gmeterxgrav;
		min				= -2;
		max				= 2;
		minPos[]		= {0.36, 0.87};
		maxPos[]		= {0.64, 0.87};
		aspectRatio		= 1;
	};
	class FCR_Bearing
	{
		type			= linear;
		source			= user;
		sourceIndex		= 17;
		min				= -180;
		max				= 180;
		minPos[]		= {0.35, 0.165};
		maxPos[]		= {0.66, 0.165};
	};
	class HorizonBankRot
	{
		type			= linear;
		source			= horizonBank;
		min				= __EVAL(-3.1416 / 90 * 15);
		max				= __EVAL(3.1416 / 90 * 15);
		minPos[]		= {0.41, 0.94};
		maxPos[]		= {0.59, 0.94};
		aspectRatio		= 1;
	};
	class HorizonBankRot_Up
	{
		type		= rotational;
		source		= horizonBank;
		center[]	= {0.5,0.5};
		min			= -rad(30);
		max			= rad(30);
		minAngle	= 180.25-29;
		maxAngle	= 180.75+29;
		aspectRatio	= 1;
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
	class LimitWaypoint
	{
		type			= limit;
		limits[]		= {0.23,0.18,0.77,0.18};
	};
	class WPPoint
	{
		type			= vector;
		source			= WPPoint;
		pos0[]			= {0.5, __EVAL(PosY0Center)};
		pos10[]			= {__EVAL(0.5 + SizeX10deg), __EVAL(PosY0Center + SizeY10deg)};
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
	MFD_CONDITION(MFD_CONDITION_NUMBER,4)
	HUD_TEXT_SOURCE_INDEX(0.2,	0.3	,0.04,0.04,left,userText,0,CameraMode)

	class Static
	{
		type			= line;
		width			= 4.0;
		points[]		=
		{
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
			// Aiming center
			{HUDCenter,1, { -0.07,	0.0},1},
			{HUDCenter,1, { -0.02,	0.0},1},{},
			{HUDCenter,1, { 0.02,	0.0},1},
			{HUDCenter,1, { 0.07,	0.0},1},{},
			{HUDCenter,1, { 0.0,	-0.02},1},
			{HUDCenter,1, { 0.0,	-0.07},1},{},
			{HUDCenter,1, { 0.0,	0.07},1},
			{HUDCenter,1, { 0.0,	0.02},1}
		};
	};
	class ZoomBox
	{
		condition = "user9<=2";

		class Static
		{
			type			= line;
			width			= 4.0;
			points[]		=
			{
				// Aiming center
				{HUDCenter,1, { __EVAL(-0.2			* 0.75 - 0.05),__EVAL(	-0.15 	* 0.75)},1},
				{HUDCenter,1, { __EVAL(-0.2			* 0.75 - 0.05),__EVAL(	-0.2 	* 0.75)},1},
				{HUDCenter,1, { __EVAL(-0.15		* 0.75 - 0.05),__EVAL(	-0.2 	* 0.75)},1},{},
				{HUDCenter,1, { __EVAL(-0.2			* 0.75 - 0.05),__EVAL(	+0.15 	* 0.75)},1},
				{HUDCenter,1, { __EVAL(-0.2			* 0.75 - 0.05),__EVAL(	+0.2 	* 0.75)},1},
				{HUDCenter,1, { __EVAL(-0.15		* 0.75 - 0.05),__EVAL(	+0.2 	* 0.75)},1},{},
				{HUDCenter,1, { __EVAL(+0.2			* 0.75 + 0.05),__EVAL(	+0.15 	* 0.75)},1},
				{HUDCenter,1, { __EVAL(+0.2			* 0.75 + 0.05),__EVAL(	+0.2 	* 0.75)},1},
				{HUDCenter,1, { __EVAL(+0.15		* 0.75 + 0.05),__EVAL(	+0.2 	* 0.75)},1},{},
				{HUDCenter,1, { __EVAL(+0.2			* 0.75 + 0.05),__EVAL(	-0.15 	* 0.75)},1},
				{HUDCenter,1, { __EVAL(+0.2			* 0.75 + 0.05),__EVAL(	-0.2 	* 0.75)},1},
				{HUDCenter,1, { __EVAL(+0.15		* 0.75 + 0.05),__EVAL(	-0.2 	* 0.75)},1},{},
			};
		};
	};
	class ZoomBoxNarrow
	{
		condition = "(user9>=3)*(user9<=8)";

		class Static
		{
			type			= line;
			width			= 4.0;
			points[]		=
			{
				// Aiming center
				{HUDCenter,1, { __EVAL(-0.2			* 0.95 - 0.05),__EVAL(	-0.15 	* 0.95)},1},
				{HUDCenter,1, { __EVAL(-0.2			* 0.95 - 0.05),__EVAL(	-0.2 	* 0.95)},1},
				{HUDCenter,1, { __EVAL(-0.15		* 0.95 - 0.05),__EVAL(	-0.2 	* 0.95)},1},{},
				{HUDCenter,1, { __EVAL(-0.2			* 0.95 - 0.05),__EVAL(	+0.15 	* 0.95)},1},
				{HUDCenter,1, { __EVAL(-0.2			* 0.95 - 0.05),__EVAL(	+0.2 	* 0.95)},1},
				{HUDCenter,1, { __EVAL(-0.15		* 0.95 - 0.05),__EVAL(	+0.2 	* 0.95)},1},{},
				{HUDCenter,1, { __EVAL(+0.2			* 0.95 + 0.05),__EVAL(	+0.15 	* 0.95)},1},
				{HUDCenter,1, { __EVAL(+0.2			* 0.95 + 0.05),__EVAL(	+0.2 	* 0.95)},1},
				{HUDCenter,1, { __EVAL(+0.15		* 0.95 + 0.05),__EVAL(	+0.2 	* 0.95)},1},{},
				{HUDCenter,1, { __EVAL(+0.2			* 0.95 + 0.05),__EVAL(	-0.15 	* 0.95)},1},
				{HUDCenter,1, { __EVAL(+0.2			* 0.95 + 0.05),__EVAL(	-0.2 	* 0.95)},1},
				{HUDCenter,1, { __EVAL(+0.15		* 0.95 + 0.05),__EVAL(	-0.2 	* 0.95)},1},{},
			};
		};
	};
	class StaticBold
	{
		type			= line;
		width			= 6.0;
		points[]		=
		{
			{{0.5, 0.18}, 1},
			{{0.5, 0.22}, 1},{},
		};
	};
	class DrawPolygons
	{
		type			= polygon;
		width			= 4.0;
		points[]		=
		{
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
			// Turn rate
			{
				POLYGON_BOX_BONE(TurnRate,0.03,0.03,-0.013,0.0)
			}
		};
	};
	#define HEADING_OFFSET_Y 0.077
	class HeadingHeadNumber
	{
		type			= text;
		source			= heading;
		sourceScale		= 1;

		align			= center;
		scale			= 1;
		TEXT_SIZEPOS(0.5,0.042+HEADING_OFFSET_Y,0.04,0.04)

	};
	class HeadingScaleRight
	{
		clipTL[]              = {0.55, 0.00};
		clipBR[]              = {0.77, 0.5};

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

			lineXleft				= __EVAL(0.11+HEADING_OFFSET_Y);
			lineYright				= __EVAL(0.10+HEADING_OFFSET_Y);
			lineXleftMajor			= __EVAL(0.11+HEADING_OFFSET_Y);
			lineYrightMajor			= __EVAL(0.09+HEADING_OFFSET_Y);
			majorLineEach			= 3;
			numberEach				= 3;
			step					= __EVAL(10*0.1);
			stepSize				= __EVAL(1/36*0.95);

			align                   = center;
			scale                   = 1;
			pos[]                   = {__EVAL(0.525 - 0.03), 0.05+HEADING_OFFSET_Y};
			right[]                 = {__EVAL(0.55 	- 0.03), 0.05+HEADING_OFFSET_Y};
			down[]                  = {__EVAL(0.525 - 0.03), 0.08+HEADING_OFFSET_Y};
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

		lineXleft		= __EVAL(0.11+HEADING_OFFSET_Y);
		lineYright		= __EVAL(0.10+HEADING_OFFSET_Y);
		lineXleftMajor	= __EVAL(0.11+HEADING_OFFSET_Y);
		lineYrightMajor	= __EVAL(0.10+HEADING_OFFSET_Y);
		majorLineEach	= 2;
		step			= __EVAL(10*0.1);
		stepSize		= __EVAL(1/36*0.95);


		align			= center;
		scale			= 1;

		numberEach		= 0; // hidden
		pos[]			= {0.47, 0.05+HEADING_OFFSET_Y};
		right[]			= {0.50, 0.05+HEADING_OFFSET_Y};
		down[]			= {0.45, 0.09+HEADING_OFFSET_Y};

	};
	class HeadingScaleLeft
	{
		clipTL[]              = {0.23, 0.00};
		clipBR[]              = {0.45, 0.5};

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

			lineXleft				= __EVAL(0.11+HEADING_OFFSET_Y);
			lineYright				= __EVAL(0.10+HEADING_OFFSET_Y);
			lineXleftMajor			= __EVAL(0.11+HEADING_OFFSET_Y);
			lineYrightMajor			= __EVAL(0.09+HEADING_OFFSET_Y);
			majorLineEach			= 3;
			numberEach				= 3;
			step					= __EVAL(10*0.1);
			stepSize				= __EVAL(1/36*0.95);

			align					= center;
			scale					= 1;

			pos[]					= {__EVAL(0.175-0.009), 0.05+HEADING_OFFSET_Y};
			right[]					= {__EVAL(0.20- 0.009), 0.05+HEADING_OFFSET_Y};
			down[]					= {__EVAL(0.175-0.009), 0.08+HEADING_OFFSET_Y};
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

			class DrawLine
			{

			};
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
	};

	class ATMissile
	{
		condition		= "ATmissile + AAmissile";
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
	};
	class Rockets
	{
		condition		= "rocket";
		HUD_TEXT_STATIC(0.61,0.86,0.027,0.027,right,"P RKT",ModeText)
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
};
