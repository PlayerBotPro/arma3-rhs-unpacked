
class MFD_Speed
{
	topLeft					= "MFD_Speed_TL";
	topRight				= "MFD_Speed_TR";
	bottomLeft				= "MFD_Speed_BL";
	borderLeft				= 0;
	borderRight				= 0;
	borderTop				= 0;
	borderBottom			= 0;
	color[]					= {0.84,0.86,0.84};
	alpha					= 1;
	enableParallax			= 0;
	font					= rhsusf_digital_font_usa;
	class material
	{
		ambient[] = {30, 30, 30, 1};
		diffuse[] = {10, 10, 10, 1};
		emissive[] = {2000, 4000, 2000, 1};
	};
	class Bones
	{
	};
	class Draw
	{
		condition = on;
		color[] = {0,0.0,0.0,1};
		alpha = 0.8;
		#define FONT_SIZE 0.2
		#define FONT_SIZE_Y 0.5
		class Battery_Value
		{
			type		= "text";
			source		= "rpm";
			text 		= "26.4Volts";
			sourceIndex = 1;
			sourceOffset = 24.7;
			sourceScale	= 0.0005;
			sourceLength= 1;
			sourcePrecision= 1;
			scale 		= 1;
			align		= "right";
			refreshRate = 0.9;

			TEXT_SIZEPOS(0.05,-0.1,FONT_SIZE,FONT_SIZE_Y)
		};
		HUD_TEXT_STATIC(0.35,-0.1,FONT_SIZE,FONT_SIZE_Y,right,"Volts",Battery_Text)
		class Range_Value
		{
			type		= "text";
			source		= "user";
			sourceIndex = 1;
			sourceScale	= 1;
			sourceLength= 1;
			scale 		= 1;
			align		= "right";
			refreshRate = 0.08;

			TEXT_SIZEPOS(0.05,0.3,FONT_SIZE,FONT_SIZE_Y)
		};
	};
};