
class MFD_Gearbox
{
	topLeft					= "MFD_Gearbox_TL";
	topRight				= "MFD_Gearbox_TR";
	bottomLeft				= "MFD_Gearbox_BL";
	borderLeft				= 0;
	borderRight				= 0;
	borderTop				= 0;
	borderBottom			= 0;
	color[]					= {0.84,0.86,0.84};
	alpha					= 1;
	enableParallax			= 0;
	font					= LCD14;
	class material
	{
		ambient[] = {30, 30, 30, 1};
		diffuse[] = {10, 10, 10, 1};
		emissive[] = {200, 400, 200, 1};
	};
	class Bones
	{
	};
	class Draw
	{
		condition = on;
		color[] = {0,0.1,0.06,1};
		alpha = 0.1;
		#define FONT_SIZE 0.75
		#define FONT_SIZE_Y 1.4
		class ReverseGear
		{
			condition = "user2<=-1";
			HUD_TEXT_STATIC(0.1,-0.25,FONT_SIZE,FONT_SIZE_Y,right,"R",Gear_Text1)
			HUD_TEXT_STATIC(0.5,-0.25,FONT_SIZE,FONT_SIZE_Y,right,"R",Gear_Text2)
		};
		class NeutralGear
		{
			condition = "(user2>=0)*(user2<=0)";
			HUD_TEXT_STATIC(0.1,-0.25,FONT_SIZE,FONT_SIZE_Y,right,"N",Gear_Text1)
			HUD_TEXT_STATIC(0.5,-0.25,FONT_SIZE,FONT_SIZE_Y,right,"N",Gear_Text2)
		};
		class DriveGear
		{
			condition = "user2>=1";
			HUD_TEXT_STATIC(0.1,-0.25,FONT_SIZE,FONT_SIZE_Y,right,"6",Range_Text)
			class Range_Value
			{
				type		= "text";
				source		= "user";
				sourceIndex = 2;
				sourceScale	= 1;
				sourceLength= 1;
				scale 		= 1;
				align		= "right";
				refreshRate = 0.08;

				TEXT_SIZEPOS(0.5,-0.25,FONT_SIZE,FONT_SIZE_Y)
			};
		};
	};
};