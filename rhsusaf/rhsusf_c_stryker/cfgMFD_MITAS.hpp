
class MFD_MITAS
{
	topLeft					= "MFD_MITAS_TL";
	topRight				= "MFD_MITAS_TR";
	bottomLeft				= "MFD_MITAS_BL";
	borderLeft				= 0;
	borderRight				= 0;
	borderTop				= 0;
	borderBottom			= 0;
	color[]					= {0.84,0.86,0.84};
	alpha					= 1;
	enableParallax			= 0;
	font					= rhsusf_digital_font_var;
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
		class Reticle_1
		{
			condition = "(user1 >= 1) * (user1 <= 1)";
			class StaticDrawBold
			{
				type			= line;
				width			= 5.0;
				points[]		=
				{
					POINT(Cross,0.35,0.5),
					POINT(Cross,0.48,0.5),{},
					POINT(Cross,0.52,0.5),
					POINT(Cross,0.65,0.5),{},
					POINT(Cross,0.5,0.35),
					POINT(Cross,0.5,0.48),{},
					POINT(Cross,0.5,0.52),
					POINT(Cross,0.5,0.65),{},
				};
			};
		};
		class Reticle_2
		{
			condition = "(user1 >= 2) * (user1 <= 2)";
			class StaticDraw
			{
				type			= line;
				width			= 0.5;
				points[]		=
				{
					POINT(Cross,0.45,0.5),
					POINT(Cross,0.55,0.5),{},
					POINT(Cross,0.5,0.45),
					POINT(Cross,0.5,0.55),{},
				};
			};
			class StaticDrawBold
			{
				type			= line;
				width			= 5.0;
				points[]		=
				{
					POINT(Cross,0.0,0.5),
					POINT(Cross,0.45,0.5),{},
					POINT(Cross,0.55,0.5),
					POINT(Cross,1,0.5),{},
					POINT(Cross,0.5,0.0),
					POINT(Cross,0.5,0.45),{},
					POINT(Cross,0.5,0.55),
					POINT(Cross,0.5,0.87),{},
				};
			};
		};
		class Reticle_3
		{
			condition = "(user1 >= 3) * (user1 <= 4)";
			color[] = {0,1,0};
			alpha = 0.2;
			class StaticDraw
			{
				type			= line;
				width			= 0.5;
				points[]		=
				{
					POINT(Cross,0.48,0.5),
					POINT(Cross,0.52,0.5),{},
					POINT(Cross,0.5,0.48),
					POINT(Cross,0.5,0.52),{},
				};
			};
			class StaticDrawBold
			{
				type			= line;
				width			= 5.0;
				points[]		=
				{
					POINT(Cross,0.35,0.5),
					POINT(Cross,0.48,0.5),{},
					POINT(Cross,0.52,0.5),
					POINT(Cross,0.65,0.5),{},
					POINT(Cross,0.5,0.35),
					POINT(Cross,0.5,0.48),{},
					POINT(Cross,0.5,0.52),
					POINT(Cross,0.5,0.65),{},
				};
			};
		};
		class Reticle_4
		{
			condition = "(user1 >= 5) * (user1 <= 6)";
			color[] = {0,1,0};
			alpha = 0.2;
			class StaticDraw
			{
				type			= line;
				width			= 0.5;
				points[]		=
				{
					POINT(Cross,0.45,0.5),
					POINT(Cross,0.55,0.5),{},
					POINT(Cross,0.5,0.45),
					POINT(Cross,0.5,0.55),{},
				};
			};
			class StaticDrawBold
			{
				type			= line;
				width			= 5.0;
				points[]		=
				{
					POINT(Cross,0.0,0.5),
					POINT(Cross,0.45,0.5),{},
					POINT(Cross,0.55,0.5),
					POINT(Cross,1,0.5),{},
					POINT(Cross,0.5,0.0),
					POINT(Cross,0.5,0.45),{},
					POINT(Cross,0.5,0.55),
					POINT(Cross,0.5,0.87),{},
				};
			};
		};
		#define FONT_SIZE 0.03
		class Green
		{
			color[] = {0,1,0};
			alpha = 0.1;
			HUD_TEXT_STATIC(0.2,0.010,FONT_SIZE,FONT_SIZE,right,"MANUAL",ManualEngage_1)
			HUD_TEXT_STATIC(0.2,0.040,FONT_SIZE,FONT_SIZE,right,"ENGAGE",ManualEngage_2)
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
				refreshRate = 0.08;

				TEXT_SIZEPOS(0.8,0.010,FONT_SIZE,FONT_SIZE)
			};
			class FOV_Value
			{
				type		= "text";
				source		= "userText";
				text		= "WFOV";
				sourceIndex = 2;
				sourceScale	= 1;
				sourceLength= 3;
				scale 		= 1;
				align		= "right";
				refreshRate = 0.08;

				TEXT_SIZEPOS(0.8,0.040,FONT_SIZE,FONT_SIZE)
			};
			HUD_TEXT_STATIC(0.8,0.070,FONT_SIZE,FONT_SIZE,right,"FIRST",LASER_Text)
			class Range_Value
			{
				type		= "text";
				source		= "laserDist";
				sourceScale	= 1;
				sourceLength= 3;
				scale 		= 1;
				align		= "right";
				refreshRate = 0.08;

				TEXT_SIZEPOS(0.51,0.8,FONT_SIZE,FONT_SIZE)
			};
			class TOW_Type_Value
			{
				type		= "text";
				source		= "userText";
				text		= "TOW2A";
				sourceIndex = 3;
				sourceScale	= 1;
				sourceLength= 3;
				scale 		= 1;
				align		= "right";
				refreshRate = 0.08;

				TEXT_SIZEPOS(0.2,0.90,FONT_SIZE,FONT_SIZE)
			};
			class StaticDraw
			{
				type			= line;
				width			= 3.0;
				points[]		=
				{
					{{0.195,0.005},1},
					{{0.195,0.11},1},
					{{0.29,	0.11},1},
					{{0.29,	0.005},1},
					{{0.195,0.005},1},{},

					{{__EVAL(0.195	+ 0.6),	__EVAL(0.005 	)},1},
					{{__EVAL(0.195	+ 0.6),	__EVAL(0.15 	)},1},
					{{__EVAL(0.29	+ 0.6),	__EVAL(0.15 	)},1},
					{{__EVAL(0.29	+ 0.6),	__EVAL(0.005 	)},1},
					{{__EVAL(0.195	+ 0.6),	__EVAL(0.005 	)},1}, {},


					{{0.18,0.88},1},
					{{0.18,0.94},1},
					{{0.3,0.94},1},
					{{__EVAL(0.31 + 1*0.005),0.93},1},
					{{__EVAL(0.31 + 2*0.005),0.92},1},
					{{__EVAL(0.31 + 3*0.004),0.915},1},
					{{__EVAL(0.31 + 3*0.004),0.905},1},
					{{__EVAL(0.31 + 2*0.005),0.90},1},
					{{__EVAL(0.31 + 1*0.005),0.89},1},
					{{0.3,0.88},1},
					{{0.18,0.88},1},{},

					{{__EVAL(0.208-0.02),0.88},1},
					{{__EVAL(0.208-0.02),0.86},1},
					{{__EVAL(0.22-0.02),0.86},1},
					{{__EVAL(0.22-0.02),0.88},1},
					{{__EVAL(0.208-0.02),0.88},1},{},

					{{__EVAL(0.208-0.02),	0.94},1},
					{{__EVAL(0.208-0.02),	0.96},1},
					{{__EVAL(0.22-0.02),	0.96},1},
					{{__EVAL(0.22-0.02),	0.94},1},
					{{__EVAL(0.208-0.02),	0.94},1},
				};
			};
		};
	};
};