#define COLOR_DIV(numb) __EVAL(numb/255)
#define COLOR(r,g,b) color[] = {COLOR_DIV(r),COLOR_DIV(g),COLOR_DIV(b)}
class MFD_GPS
{
	topLeft					= "MFD_GPS_TL";
	topRight				= "MFD_GPS_TR";
	bottomLeft				= "MFD_GPS_BL";
	borderLeft				= 0.01;
	borderRight				= 0.01;
	borderTop				= 0;
	borderBottom			= 0;
	color[]					= {0.84,0.86,0.84};
	alpha					= 1;
	enableParallax			= 0;
	font					= rhsusf_digital_font_usa;
	class material
	{
		ambient[] = {16, 16, 16, 1};
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
		class PolygonDraw
		{
		    COLOR(18,22,6);
		    alpha = 1;
		    class Polygon2
		    {
		        type    = "polygon";
		        points[] =
		        {
		        };
		    };
		    class Polygon
		    {
		        type    = "polygon";
		        texture = "\rhsusf\addons\rhsusf_matv\data\rhs_dagr_background_ca.paa";
		        points[] =
		        {
		            {
		                {{0,-0.23},1},
		                {{1,-0.23},1},
		                {{1,1.12},1},
		                {{0,1.12},1}
		            }
		        };
		    };
		};
		HUD_TEXT_STATIC(0.03,0.85,0.1,0.12,right,"GOTO WP",GoToWP_Text)
		HUD_TEXT_STATIC(0.38,0.85,0.1,0.12,right,"WP List",WPList_Text)
		HUD_TEXT_STATIC(0.74,0.85,0.1,0.12,right,"Back",Back_Text)
		HUD_TEXT_STATIC(0.04,0.65,0.07,0.09,right,"TRACK",Track_Text)
		HUD_TEXT_STATIC(0.29,0.65,0.07,0.09,right,"MAG",Mag_Text)
		HUD_TEXT_STATIC(0.31,0.69,0.07,0.09,right,"o",o_Text)
		class Track_Value
		{
			type		= "text";
			source		= "heading";
			sourceIndex = 2;
			sourceScale	= 1;
			sourceLength= 1;
			sourcePrecision = 1;
			scale 		= 1;
			align		= "left";
			refreshRate = 0.3;

			TEXT_SIZEPOS(0.3,0.69,0.13,0.17)
		};
		class Time_Value
		{
			type		= "text";
			source		= "time";
			text 		= "%X";
			sourceScale	= 1;
			sourceLength= 1;
			sourcePrecision = 1;
			scale 		= 1;
			align		= "left";
			refreshRate = 0.08;

			TEXT_SIZEPOS(0.7,0.65,0.1,0.13)
		};
		HUD_TEXT_STATIC(0.71,0.65,0.1,0.13,right,"Z",TimeText)
		class Date_Day_Value
		{
			type		= "text";
			source		= "time";
			text 		= "%d";
			sourceScale	= 1;
			sourceLength= 1;
			sourcePrecision = 1;
			scale 		= 1;
			align		= "left";
			refreshRate = 0.08;

			TEXT_SIZEPOS(0.5,0.73,0.1,0.13)
		};
		class Date_Month_Value
		{
			type		= "text";
			source		= "time";
			text 		= "%b";
			sourceScale	= 1;
			sourceLength= 1;
			sourcePrecision = 1;
			scale 		= 1;
			align		= "left";
			refreshRate = 0.08;

			TEXT_SIZEPOS(0.65,0.73,0.1,0.13)
		};
		class Date_Year_Value
		{
			type		= "text";
			source		= "time";
			text 		= "%y";
			sourceScale	= 1;
			sourceLength= 1;
			sourcePrecision = 1;
			scale 		= 1;
			align		= "left";
			refreshRate = 0.08;

			TEXT_SIZEPOS(0.77,0.73,0.1,0.13)
		};
		HUD_TEXT_STATIC(0.51,0.73,0.1,0.13,right,"-",Date1_Text)
		HUD_TEXT_STATIC(0.66,0.73,0.1,0.13,right,"-",Date2_Text)

		HUD_TEXT_STATIC(0.4,0.43,0.07,0.09,right,"ELEVATION",Elevation_Text)
		HUD_TEXT_STATIC(0.71,0.43,0.07,0.09,right,"MSL",Elevation2_Text)
		class Elevation_Value
		{
			type		= "text";
			source		= "altitudeASL";
			sourceScale	= 1;
			sourceLength= 5;
			scale 		= 1;
			align		= "left";
			refreshRate = 0.8;

			TEXT_SIZEPOS(0.73,0.48,0.125,0.18)
		};
		HUD_TEXT_STATIC(0.42,0.48,0.125,0.18,right,"+",Elevation3_Text)
		HUD_TEXT_STATIC(0.74,0.5,0.1,0.15,right,"m",Elevation4_Text)
		HUD_TEXT_STATIC(0.04,0.43,0.07,0.09,right,"SPEED",Speed_Text)
		class Speed_Value
		{
			type		= "text";
			source		= "speed";
			sourceScale	= 3.6;
			sourceLength= 1;
			scale 		= 1;
			align		= "left";
			refreshRate = 0.3;

			TEXT_SIZEPOS(0.2,0.48,0.125,0.18)
		};
		HUD_TEXT_STATIC(0.21,0.5,0.1,0.15,right,"kph",Speed2_Text)
		HUD_TEXT_STATIC(0.04,0.08,0.09,0.12,right,"MGRS-Arma",MGRS_Text)
		class CordX
		{
			type			= text;
			source			= coordinateX;
			sourceScale		= 0.01;
			sourceLength	= 3;
			sourceOffset	= -0.5;

			align			= right;
			scale			= 1;
			TEXT_SIZEPOS(0.09,0.15,0.125,0.18)
		};
		class CordY: CordX
		{
			source			= coordinateY;
			TEXT_SIZEPOS(0.26,0.15,0.125,0.18)
		};
		HUD_TEXT_STATIC(0.71,0.08,0.09,0.12,right,"WP",wp_Text)
		class WP
		{
			condition		= "wpvalid";
			class WPIndex
			{
				type			= text;
				source			= wpIndex;
				sourceScale		= 1;
				sourceLength	= 2;

				align			= left;
				scale			= 1;
				TEXT_SIZEPOS(0.76,0.15,0.125,0.18)
			};
			class WPdist
			{
				type			= text;
				source			= wpdist;
				sourceScale		= 0.001;
				sourcePrecision = 1;

				align			= left;
				scale			= 1;
				TEXT_SIZEPOS(0.76,0.27,0.125,0.18)
			};
		};
		HUD_TEXT_STATIC(0.05,0.0,0.07,0.09,right,"PRESENT POSITION",PresentPos_Text)
		HUD_TEXT_STATIC(0.95,0.005,0.07,0.08,left,"STBY",STBY_Text)
		HUD_TEXT_STATIC(0.89,0.09,0.05,0.07,left,"ON",On_Text)
		HUD_TEXT_STATIC(0.96,0.235,0.06,0.09,left,">99dsf",Static1_Text)
		HUD_TEXT_STATIC(0.96,0.54,0.07,0.09,left,"32534",Static2_Text)
	};
};