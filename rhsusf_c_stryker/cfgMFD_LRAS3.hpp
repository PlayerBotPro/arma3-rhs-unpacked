
class MFD_LRAS3
{
	topLeft					= "PIP_3_TL";
	topRight				= "PIP_3_TR";
	bottomLeft				= "PIP_3_BL";
	borderLeft				= 0;
	borderRight				= 0;
	borderTop				= 0.2;
	borderBottom			= 0.2;
	color[]					= {0.84,0.86,0.84};
	alpha					= 1;
	enableParallax			= 0;
	font					= rhsusf_digital_font_var;
	turret[] = {2};
	class material
	{
		ambient[] = {3, 3, 3, 1};
		diffuse[] = {10, 10, 10, 1};
		emissive[] = {400, 200, 200, 1};
	};
	class Bones
	{		class Cross
		{
			type	= fixed;
			pos[]	= {0.5, 0.49};
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
			};
		};
		class StaticDrawBold
		{
			type			= line;
			width			= 5.0;
			points[]		=
			{
			};
		};
		#define FONT_SIZE 0.02
		class Green
		{
			color[] = {0,1,0};
			alpha = 0.1;
			class Mode_Value
			{
				type		= "text";
				source		= "userText";
				text		= "DAY";
				sourceIndex = 1;
				sourceScale	= 1;
				sourceLength= 3;
				scale 		= 1;
				align		= "right";

				TEXT_SIZEPOS(0.75,0.060,FONT_SIZE,FONT_SIZE)
			};
			HUD_TEXT_STATIC(0.75,0.080,FONT_SIZE,FONT_SIZE,right,"CLEAR",Clear_Text)
			HUD_TEXT_STATIC(0.75,0.100,FONT_SIZE,FONT_SIZE,right,"STARE",Stare_Text)
			HUD_TEXT_STATIC(0.75,0.120,FONT_SIZE,FONT_SIZE,right,"FIRST",LASER_Text)

			HUD_TEXT_STATIC(0.42,0.85,FONT_SIZE,FONT_SIZE,right,"RANGE",Pos_Text)
			class Range_Value
			{
				type		= "text";
				source		= "laserDist";
				sourceScale	= 1;
				sourceLength= 3;
				scale 		= 1;
				align		= "right";

				TEXT_SIZEPOS(0.52,0.85,FONT_SIZE,FONT_SIZE)
			};
			HUD_TEXT_STATIC(0.2,0.85,FONT_SIZE,FONT_SIZE,right,"TIME",TimeStatic_Text)
			class CurrentTimeHour
			{
				type		= "text";
				source		= "time";
				text		= "%H";
				scale 		= 1;
				align		= "right";

				TEXT_SIZEPOS(0.25,0.85,FONT_SIZE,FONT_SIZE)
			};
			HUD_TEXT_STATIC(0.27,0.85,FONT_SIZE,FONT_SIZE,right,":",TimeStatic2_Text)
			class CurrentTimeMinute: CurrentTimeHour
			{
				text		= "%M";
				TEXT_SIZEPOS(0.28,0.85,FONT_SIZE,FONT_SIZE)
			};
			HUD_TEXT_STATIC(0.2,0.9,FONT_SIZE,FONT_SIZE,right,"SIGHT",SIGHT_Text)
			class CordX
			{
				type			= text;
				source			= coordinateX;
				sourceScale		= 0.01;
				sourceLength	= 3;
				sourceOffset	= -0.5;

				align			= right;
				scale			= 1;
				TEXT_SIZEPOS(0.26,0.9,FONT_SIZE,FONT_SIZE)
			};
			class CordY: CordX
			{
				source			= coordinateY;
				TEXT_SIZEPOS(0.3,0.9,FONT_SIZE,FONT_SIZE)
			};
			HUD_TEXT_STATIC(0.41,0.9,FONT_SIZE,FONT_SIZE,right,"TGT",Tgt_Text)
			class TgtPos_Value
			{
				type		= "text";
				source		= "userText";
				text		= "434 434";
				sourceIndex = 2;
				sourceScale	= 1;
				sourceLength= 3;
				scale 		= 1;
				align		= "right";

				TEXT_SIZEPOS(0.46,0.9,FONT_SIZE,FONT_SIZE)
			};
			HUD_TEXT_STATIC(0.67,0.9,FONT_SIZE,FONT_SIZE,right,"AZ",AZ_Text)
			class AZ_Value
			{
				type		= "text";
				source		= "[x]turretworld";
				text		= "DAY";
				sourceIndex = 1;
				sourceScale	= 1;
				sourceLength= 3;
				scale 		= 1;
				align		= "left";

				TEXT_SIZEPOS(0.73,0.9,FONT_SIZE,FONT_SIZE)
			};
			HUD_TEXT_STATIC(0.75,0.9,FONT_SIZE,FONT_SIZE,right,"EL",EL_Text)
			class EL_Value
			{
				type		= "text";
				source		= "[y]turretworld";
				text		= "DAY";
				sourceIndex = 1;
				sourceScale	= 1;
				sourceLength= 1;
				scale 		= 1;
				align		= "left";

				TEXT_SIZEPOS(0.8,0.9,FONT_SIZE,FONT_SIZE)
			};
			#define RETICLE_MACRO\
			POINT(Cross,SCALE_RETICLE *	0.245,SCALE_RETICLE *	0.0),\
			POINT(Cross,SCALE_RETICLE *	0.052,SCALE_RETICLE *	0.0),{},\
			POINT(Cross,SCALE_RETICLE *	-0.245,SCALE_RETICLE *	0.0),\
			POINT(Cross,SCALE_RETICLE *	-0.052,SCALE_RETICLE *	0.0),{},\
			POINT(Cross,SCALE_RETICLE *	0.052,SCALE_RETICLE *	0.050),\
			POINT(Cross,SCALE_RETICLE *	0.052,SCALE_RETICLE *	-0.050),\
			POINT(Cross,SCALE_RETICLE *	-0.052,SCALE_RETICLE *	-0.050),\
			POINT(Cross,SCALE_RETICLE *	-0.052,SCALE_RETICLE *	0.050),\
			POINT(Cross,SCALE_RETICLE *	0.052,SCALE_RETICLE *	0.050),{},\
			POINT(Cross,SCALE_RETICLE * 0.05*	0.052,SCALE_RETICLE 	* 0.05 *	0.050),\
			POINT(Cross,SCALE_RETICLE * 0.05*	0.052,SCALE_RETICLE 	* 0.05 *	-0.050),\
			POINT(Cross,SCALE_RETICLE * 0.05*	-0.052,SCALE_RETICLE 	* 0.05 *	-0.050),\
			POINT(Cross,SCALE_RETICLE * 0.05*	-0.052,SCALE_RETICLE 	* 0.05 *	0.050),\
			POINT(Cross,SCALE_RETICLE * 0.05*	0.052,SCALE_RETICLE 	* 0.05 *	0.050),{},\
			POINT(Cross,SCALE_RETICLE *	-0.0,SCALE_RETICLE *	0.050),\
			POINT(Cross,SCALE_RETICLE *	-0.0,SCALE_RETICLE *	0.100),{},\
			POINT(Cross,SCALE_RETICLE *	-0.0,SCALE_RETICLE *	-0.050),\
			POINT(Cross,SCALE_RETICLE *	-0.0,SCALE_RETICLE *	-0.100),{},\
			POINT(Cross,SCALE_RETICLE *	-0.245,SCALE_RETICLE *	0.100),\
			POINT(Cross,SCALE_RETICLE *	-0.490,SCALE_RETICLE *	0.100),{},\
			POINT(Cross,SCALE_RETICLE *	0.245,SCALE_RETICLE *	0.100),\
			POINT(Cross,SCALE_RETICLE *	0.490,SCALE_RETICLE *	0.100),{},\
			POINT(Cross,SCALE_RETICLE *	-0.245,SCALE_RETICLE *	-0.100),\
			POINT(Cross,SCALE_RETICLE *	-0.490,SCALE_RETICLE *	-0.100),{},\
			POINT(Cross,SCALE_RETICLE *	0.245,SCALE_RETICLE *	-0.100),\
			POINT(Cross,SCALE_RETICLE *	0.490,SCALE_RETICLE *	-0.100),{},\
			POINT(Cross,SCALE_RETICLE *	0.736,SCALE_RETICLE *	-0.0),\
			POINT(Cross,SCALE_RETICLE *	0.980,SCALE_RETICLE *	-0.0),{},\
			POINT(Cross,SCALE_RETICLE *	-0.736,SCALE_RETICLE *	-0.0),\
			POINT(Cross,SCALE_RETICLE *	-0.980,SCALE_RETICLE *	-0.0),{},\
			POINT(Cross,SCALE_RETICLE *	-0.0,SCALE_RETICLE *	0.2),\
			POINT(Cross,SCALE_RETICLE *	-0.0,SCALE_RETICLE *	0.29),{},\
			POINT(Cross,SCALE_RETICLE *	-0.0,SCALE_RETICLE *	-0.2),\
			POINT(Cross,SCALE_RETICLE *	-0.0,SCALE_RETICLE *	-0.29),{},

			class ZoomLevel_4
			{
				condition = "(user1 >= 4) * (user1 <= 4)";
				class StaticDraw
				{
					type			= line;
					width			= 1.0;
					points[]		=
					{
						#define SCALE_RETICLE 0.2
						RETICLE_MACRO
					};
				};
			};
			class ZoomLevel_8
			{
				condition = "(user1 >= 8) * (user1 <= 8)";
				class StaticDraw
				{
					type			= line;
					width			= 1.0;
					points[]		=
					{
						#define SCALE_RETICLE 0.23
						RETICLE_MACRO
					};
				};
			};
			class ZoomLevel_12
			{
				condition = "(user1 >= 12) * (user1 <= 12)";
				class StaticDraw
				{
					type			= line;
					width			= 1.0;
					points[]		=
					{
						#define SCALE_RETICLE 0.26
						RETICLE_MACRO
					};
				};
			};
			class ZoomLevel_24
			{
				condition = "(user1 >= 24) * (user1 <= 24)";
				class StaticDraw
				{
					type			= line;
					width			= 1.0;
					points[]		=
					{
						#define SCALE_RETICLE 0.35
						RETICLE_MACRO
					};
				};
			};
			class ZoomLevel_48
			{
				condition = "(user1 >= 48) * (user1 <= 48)";
				class StaticDraw
				{
					type			= line;
					width			= 1.0;
					points[]		=
					{
						#define SCALE_RETICLE 0.75
						RETICLE_MACRO
					};
				};
			};
		};
	};
};