
class MFD_1
{
	topLeft					= MFD_1_TL;
	topRight				= MFD_1_TR;
	bottomLeft				= MFD_1_BL;
	borderLeft				= 0;
	borderRight				= 0;
	borderTop				= 0;
	borderBottom			= 0.03;
	color[]					= {0.15, 1.0, 0.15, 1.0};
	enableParallax			= false;
	font					= "rhsusf_digital_font_var";
	class material
	{
		ambient[] = {3, 3, 3, 1};
		diffuse[] = {10, 10, 10, 1};
		emissive[] = {400, 200, 200, 1};
	};

	class Bones {};
	class Draw
	{
		condition = on;
		HUD_TEXT_STATIC(0.04,0.13,0.07,0.07,right,"UHF-1",UHF1_Text)
		HUD_TEXT_STATIC(0.04,0.22,0.07,0.07,right,":",UHF1_Text2)
		class UHF1_Value
		{
			type 			= text;
			source			= userText;
			sourceScale 	= 1;
			sourceIndex 	= 0;
			align			= right;
			scale			= 1;
			TEXT_SIZEPOS(0.1,0.22,0.07,0.07)
		};
		HUD_TEXT_STATIC(0.96,0.13,0.07,0.07,left,"VHF-1",VHF1_Text)
		HUD_TEXT_STATIC(0.96,0.22,0.07,0.07,left,":",VHF1_Text2)
		class VHF1_Value
		{
			type 			= text;
			source			= userText;
			sourceScale 	= 1;
			sourceIndex 	= 1;
			align			= left;
			scale			= 1;
			TEXT_SIZEPOS(0.9,0.22,0.07,0.07)
		};
		HUD_TEXT_STATIC(0.04,0.13+0.09*4,0.07,0.07,right,"TCN 004X T/R",TCN_Text)
		class ILS
		{
			condition = "1-ils";
			HUD_TEXT_STATIC(0.04,0.13+0.09*5,0.07,0.07,right,"ILS OFF",ILS_Text)
		};
		class ILS_Off
		{
			condition = "ils";
			HUD_TEXT_STATIC(0.04,0.13+0.09*5,0.07,0.07,right,"ILS ON",ILS_Text)
		};
		HUD_TEXT_STATIC(0.04,0.13+0.09*6,0.07,0.07,right,"STPT 01/A",STPT_Text)
		HUD_TEXT_STATIC(0.04,0.13+0.09*7,0.07,0.07,right,"IFF M3/A",IFF_Text)
		HUD_TEXT_STATIC(0.04,0.13+0.09*8,0.07,0.07,left," :",IFF_Text2)
		HUD_TEXT_STATIC(0.96,0.13+0.09*4,0.07,0.07,left,"DK 04",IDK_Text)
		HUD_TEXT_STATIC(0.96,0.13+0.09*5,0.07,0.07,left,"STR",STR_Text)
		HUD_TEXT_STATIC(0.96,0.13+0.09*6,0.07,0.07,left,"A/P ON",AP_Text)
		class CurrentTime
		{
			type 			= text;
			source			= time;
			text   			= "%X";
			align			= left;
			scale			= 1;
			TEXT_SIZEPOS(0.96,0.13+0.09*7,0.07,0.07)
		};
		HUD_TEXT_STATIC(0.96,0.15+0.09*8,0.07,0.07,left,"INS NAV",ING_Text)
		HUD_TEXT_STATIC(0.25,0.94,0.07,0.07,center,"UHF",UHF_Text)
		HUD_TEXT_STATIC(0.51,0.94,0.07,0.07,center,"VHF",VHF_Text)
		HUD_TEXT_STATIC(0.75,0.94,0.07,0.07,center,"TIME",TIME_Text)
	};
};
#define PosX0Center 0.498
#define PosY0Center 0.585
#define SizeX10deg (0.58+0.1) //0.94+0.03
#define SizeY10deg (0.79+0.1) //1.3-0.2

#define PosYCenterHorizont 0.47
#define PosY0CenterAdjust 0.23
#define SizeX10degHorizon 0.68
#define SizeY10degHorizon 0.89
class MFD_2
{
	topLeft					= MFD_2_TL;
	topRight				= MFD_2_TR;
	bottomLeft				= MFD_2_BL;
	borderLeft				= 0;
	borderRight				= 0;
	borderTop				= 0;
	borderBottom			= 0;
	color[]					= {1.0, 1.0, 1.0, 1.0};
	enableParallax			= false;
	font					= "rhsusf_digital_font_var";
	class material
	{
		ambient[] = {3, 3, 3, 1};
		diffuse[] = {10, 10, 10, 1};
		emissive[] = {400, 200, 200, 1};
	};

	class Bones
	{
		class Center
		{
			type			= fixed;
			pos[]			= {0.35, 0.475};
		};
		class Level0
		{
			pos0[]	= {PosX0Center-0.15, PosYCenterHorizont};
			pos10[]	= {__EVAL(PosX0Center + SizeX10degHorizon* 0.5), __EVAL(PosYCenterHorizont + SizeY10degHorizon* 0.5)};
			type	= horizon;
			angle	= 0;
		};
		class Level0_Background: Level0
		{
			pos0[]	= {0, 0};
			pos10[]	= {__EVAL( SizeX10degHorizon), __EVAL( SizeY10degHorizon)};
		};
		class LevelP5 : Level0 { angle 	= 5;};
		class LevelM5 : Level0 {angle 	= -5;};
		class LevelP10 : Level0 {angle 	= 10;};
		class LevelM10 : Level0 {angle 	= -10;};
		class LevelP15 : Level0 {angle 	= 15;};
		class LevelM15 : Level0 {angle 	= -15;};
		class LevelP20 : Level0 {angle 	= 20;};
		class LevelM20 : Level0 {angle 	= -20;};
		class LevelP25 : Level0 {angle 	= 25;};
		class LevelM25 : Level0 {angle 	= -25;};
		class LevelP30 : Level0 {angle 	= 30;};
		class LevelM30 : Level0 {angle 	= -30;};
		class LevelP35 : Level0 {angle 	= 35;};
		class LevelM35 : Level0 {angle 	= -35;};
		class LevelP40 : Level0 {angle 	= 40;};
		class LevelM40 : Level0 {angle 	= -40;};
		class LevelP45 : Level0 {angle 	= 45;};
		class LevelM45 : Level0 {angle 	= -45;};
		class LevelP50 : Level0 {angle 	= 50;};
		class LevelM50 : Level0 {angle 	= -50;};
		class LevelP60 : Level0 {angle 	= 60;};
		class LevelM60 : Level0 {angle 	= -60;};
		class LevelP70 : Level0 {angle 	= 70;};
		class LevelM70 : Level0 {angle 	= -70;};
		class LevelP80 : Level0 {angle 	= 80;};
		class LevelM80 : Level0 {angle 	= -80;};
		class LevelP90 : Level0 {angle 	= 90;};
		class LevelM90 : Level0 {angle 	= -90;};
	};
	class Draw
	{
		condition = on;
		#define POLYGON_BOX(sizeX,sizeY,posX,posY)\
		{{__EVAL(posX			), __EVAL(posY)}, 1},\
		{{__EVAL(posX + sizeX 	), __EVAL(posY)}, 1},\
		{{__EVAL(posX + sizeX 	), __EVAL(posY + sizeY)}, 1},\
		{{__EVAL(posX			), __EVAL(posY + sizeY)}, 1}

		class HorizontBackground
		{
			color[]		= {0.1, 0.3, 0.7};
			alpha 		= 0.8;
			clipTL[]	= {0.018, 0.085};
			clipBR[]	= {0.69, 0.88};
			class Static
			{
				type			= polygon;
				points[]		=
				{
					{
						{Level0	,{__EVAL(-10		), __EVAL(-19.99+0)}, 1},
						{Level0	,{__EVAL(-10 + 20 	), __EVAL(-19.99+0)}, 1},
						{Level0	,{__EVAL(-10 + 20 	), __EVAL(-19.99+0 + 20)}, 1},
						{Level0	,{__EVAL(-10		), __EVAL(-19.99+0 + 20)}, 1}
					}
				};
			};
			class StaticBlack
			{
				color[]		= {0.0, 0.0, 0.0};
				alpha 		= 1;

				class Static
				{
					type			= polygon;
					points[]		=
					{
						{
							{Level0	,{__EVAL(-10			), __EVAL(0.01)}, 1},
							{Level0	,{__EVAL(-10 + 20 		), __EVAL(0.01)}, 1},
							{Level0	,{__EVAL(-10 + 20 		), __EVAL(0.01 + 20)}, 1},
							{Level0	,{__EVAL(-10			), __EVAL(0.01 + 20)}, 1}
						}
					};
				};
			};
			class HorizontWhite
			{
				color[]		= {0.0, 0.0, 0.0};
				alpha 		= 0.9;
				class Dimmed
				{
					class Level0
					{
						type			= line;
						width			= 7.0;
						points[]		=
						{
							{Level0, {0.25, 0.0}, 1},
							{Level0, {0.065, 0.0}, 1},
							{},
							{Level0, {-0.065, 0.0}, 1},
							{Level0, {-0.25, 0.0}, 1}
						};
					};
				};
				class Level0
				{
					type			= line;
					width			= 16.0;
					points[]		= {};
				};
				DEF_HORIZONT_SPACING_Plus(5);
				DEF_HORIZONT_SPACING_Plus(10);
				DEF_HORIZONT_SPACING_Plus(15);
				DEF_HORIZONT_SPACING_Plus(20);
				DEF_HORIZONT_SPACING_Plus(25);
				DEF_HORIZONT_SPACING_Plus(30);
				DEF_HORIZONT_SPACING_Plus(35);
				DEF_HORIZONT_SPACING_Plus(40);
				DEF_HORIZONT_SPACING_Plus(45);
				DEF_HORIZONT_SPACING_Plus(50);
				DEF_HORIZONT_SPACING_Plus(60);
				DEF_HORIZONT_SPACING_Plus(70);
				DEF_HORIZONT_SPACING_Plus(80);
				DEF_HORIZONT_SPACING_Plus(90);
			};
			class HorizontBlack
			{
				color[]		= {1.0, 1.0, 1.0};
				alpha 		= 0.9;
				class Level0
				{
					type			= line;
					width			= 7.0;
					points[]		= {};
				};
				DEF_HORIZONT_SPACING_Minus(5);
				DEF_HORIZONT_SPACING_Minus(10);
				DEF_HORIZONT_SPACING_Minus(15);
				DEF_HORIZONT_SPACING_Minus(20);
				DEF_HORIZONT_SPACING_Minus(25);
				DEF_HORIZONT_SPACING_Minus(30);
				DEF_HORIZONT_SPACING_Minus(35);
				DEF_HORIZONT_SPACING_Minus(40);
				DEF_HORIZONT_SPACING_Minus(45);
				DEF_HORIZONT_SPACING_Minus(50);
				DEF_HORIZONT_SPACING_Minus(60);
				DEF_HORIZONT_SPACING_Minus(70);
				DEF_HORIZONT_SPACING_Minus(80);
				DEF_HORIZONT_SPACING_Minus(90);
			};
		};
		class BlackBackground
		{
			color[]	= {0.0, 0.0, 0.0};
			class Static
			{
				type			= polygon;
				points[]		=
				{
					{
						POLYGON_BOX(0.17,0.17,0.01,0.08)
					},
					{
						POLYGON_BOX(0.14,0.09,0.27,0.08)
					},
					{
						POLYGON_BOX(0.18,0.17,0.51,0.08)
					},
					{
						POLYGON_BOX(0.13,0.11,0.01,0.42)
					},
					{
						POLYGON_BOX(0.18,0.11,0.51,0.42)
					},
					{
						POLYGON_BOX(0.17,0.09,0.52,0.79)
					},
				};
			};
		};
		class HeadingText
		{
			type			= text;
			source			= heading;
			sourceScale		= 1;
			sourceLength	= 3;
			refreshRate		= 0.1;
			align			= right;
			scale			= 1;
			TEXT_SIZEPOS(0.29,0.09,0.07,0.07)
		};
		class Green
		{
			color[]	= {0.15, 1.0, 0.15, 1.0};

			class Throttle1
			{
				type			= text;
				source			= throttle;
				sourceScale		= 100;
				sourceLength	= 1;
				refreshRate		= 0.07;
				align			= left;
				scale			= 1;
				TEXT_SIZEPOS(0.12,0.09,0.05,0.07)
			};
			HUD_TEXT_STATIC(0.14,0.09,0.05,0.07,right,"%",Throttle1Static_Text)
			class Throttle2
			{
				type			= text;
				source			= throttle;
				sourceScale		= 100;
				sourceLength	= 1;
				refreshRate		= 0.07;
				align			= left;
				scale			= 1;
				TEXT_SIZEPOS(0.62,0.09,0.05,0.07)
			};
			HUD_TEXT_STATIC(0.64,0.09,0.05,0.07,right,"%",Throttle2Static_Text)
			class temp1
			{
				type			= text;
				source			= rpm;
				sourceScale		= 645;
				sourceLength	= 1;
				refreshRate		= 0.07;
				align			= left;
				scale			= 1;
				TEXT_SIZEPOS(0.12,0.17,0.05,0.07)
			};
			HUD_TEXT_STATIC(0.14,0.15,0.05,0.07,right,"o",temp1Static_Text)
			class temp2
			{
				type			= text;
				source			= rpm;
				sourceScale		= 673;
				sourceLength	= 1;
				refreshRate		= 0.07;
				align			= left;
				scale			= 1;
				TEXT_SIZEPOS(0.62,0.17,0.05,0.07)
			};
			HUD_TEXT_STATIC(0.64,0.15,0.05,0.07,right,"o",temp2Static_Text)

			HUD_TEXT_STATIC(0.06,0.89,0.06,0.07,right,"BARO",BaroStatic_Text)
			class BaroSource_Text
			{
				type			= text;
				source			= altitudeAGL;
				sourceScale		= 1;
				sourcePrecision = 1;
				sourceOffset 	= -2.5;
				sourceLength	= 5;
				refreshRate		= 0.07;
				align			= right;
				scale			= 1;
				TEXT_SIZEPOS(0.2,0.89,0.05,0.07)
			};
			HUD_TEXT_STATIC(0.4,0.89,0.05,0.07,right,"POS:",Cord_Text)
			class CordX
			{
				type			= text;
				source			= coordinateX;
				sourceScale		= 0.01;
				sourceLength	= 3;
				sourceOffset	= -0.5;

				align			= right;
				scale			= 1;
				TEXT_SIZEPOS(0.5,0.89,0.05,0.07)
			};
			class CordY: CordX
			{
				source			= coordinateY;
				TEXT_SIZEPOS(0.5+0.07,0.89,0.05,0.07)
			};
			HUD_TEXT_STATIC(0.73,0.09,0.06,0.08,right,"I:",FuelRemaining_Text)
			class FuelRemaining_Source
			{
				type			= text;
				source			= fuel;
				sourceScale		= 20;
				sourcePrecision = 1;
				align			= right;
				scale			= 1;
				TEXT_SIZEPOS(0.79,0.09,0.06,0.08)
			};
			HUD_TEXT_STATIC(0.73,0.17,0.06,0.08,right,"T:",TimeRemaining_Text)
			class TimeRemaining_Source
			{
				type			= text;
				source			= fuel;
				sourceScale		= 2.4;
				sourcePrecision = 2;
				align			= right;
				scale			= 1;
				TEXT_SIZEPOS(0.79,0.17,0.06,0.08)
			};
			HUD_TEXT_STATIC(0.92,0.27,0.06,0.06,left,"20",FuelSt20_Text)
			HUD_TEXT_STATIC(0.92,0.46,0.06,0.06,left,"10",FuelSt10_Text)
			HUD_TEXT_STATIC(0.92,0.55,0.06,0.06,left,"8",FuelSt8_Text)
			HUD_TEXT_STATIC(0.92,0.65,0.06,0.06,left,"6",FuelSt6_Text)
			HUD_TEXT_STATIC(0.92,0.75,0.06,0.06,left,"4",FuelSt4_Text)
			HUD_TEXT_STATIC(0.92,0.82,0.06,0.06,left,"2",FuelSt2_Text)
		};
		class SpeedSource
		{
			type			= text;
			source			= speed;
			sourceScale		= 3.6;
			sourceLength	= 3;
			refreshRate		= 0.1;
			align			= right;
			scale			= 1;
			TEXT_SIZEPOS(0.03,0.44,0.07,0.08)
		};
		class RadarHeightSource
		{
			type			= text;
			source			= speed;
			sourceScale		= 1;
			sourceLength	= 5;
			refreshRate		= 0.1;
			align			= left;
			scale			= 1;
			TEXT_SIZEPOS(0.68,0.44,0.07,0.08)
		};
		class ClimbSource
		{
			type			= text;
			source			= vspeed;
			sourceScale		= 1;
			sourceLength	= 3;
			refreshRate		= 0.1;
			align			= left;
			scale			= 1;
			TEXT_SIZEPOS(0.68,0.8,0.07,0.08)
		};
		class StaticDraw
		{
			type	= line;
			width	= 10;
			points[]=
			{
				CIRCLE_BIG(Center,0.03)
			};
		};
	};
};
class MFD_3
{
	topLeft					= MFD_3_TL;
	topRight				= MFD_3_TR;
	bottomLeft				= MFD_3_BL;
	borderLeft				= 0;
	borderRight				= 0;
	borderTop				= 0;
	borderBottom			= 0;
	color[]					= {0.15, 1.0, 0.15, 1.0};
	enableParallax			= false;
	font					= "LucidaConsoleB";
	class material
	{
		ambient[] = {3, 3, 3, 1};
		diffuse[] = {10, 10, 10, 1};
		emissive[] = {400, 200, 200, 1};
	};

	class Bones {};
	class Draw
	{
		condition = on;
		class Rpm1Source
		{
			type			= text;
			source			= rpm;
			sourceScale		= 100;
			align			= left;
			scale			= 1;
			TEXT_SIZEPOS(0.3,0.135,0.04,0.04)
		};
		class Rpm2Source: Rpm1Source
		{
			TEXT_SIZEPOS(0.64,0.135,0.04,0.04)
		};
		class EGT1Source
		{
			type			= text;
			source			= rpm;
			sourceScale		= 380;
			align			= left;
			scale			= 1;
			TEXT_SIZEPOS(0.3,0.29,0.04,0.04)
		};
		class EGT2Source: EGT1Source
		{
			TEXT_SIZEPOS(0.64,0.29,0.04,0.04)
		};
		class noz1Source
		{
			type			= text;
			source			= throttle;
			sourceScale		= 100;
			align			= center;
			scale			= 1;
			TEXT_SIZEPOS(0.33,0.475,0.03,0.03)
		};
		class noz2Source: noz1Source
		{
			TEXT_SIZEPOS(0.66,0.475,0.03,0.03)
		};
		class oil1Source
		{
			type			= text;
			source			= rpm;
			sourceScale		= 235;
			align			= left;
			scale			= 1;
			TEXT_SIZEPOS(0.31,0.58,0.04,0.04)
		};
		class oil2Source: oil1Source
		{
			TEXT_SIZEPOS(0.65,0.58,0.04,0.04)
		};
		class hyd1Source
		{
			type			= text;
			source			= rpm;
			sourceScale		= 210;
			align			= left;
			scale			= 1;
			TEXT_SIZEPOS(0.13,0.81,0.03,0.03)
		};
		class hyd2Source: hyd1Source
		{
			TEXT_SIZEPOS(0.38,0.81,0.03,0.03)
		};
		class FuelLeftSource
		{
			type			= text;
			source			= fuel;
			sourceScale		= 2000;
			align			= left;
			scale			= 1;
			TEXT_SIZEPOS(0.8,0.92,0.05,0.05)
		};
	};
};
#define PosX0Center 0.498
#define PosY0Center 0.585
#define SizeX10deg (0.668+0.1) //0.94+0.03
#define SizeY10deg (0.69+0.1) //1.3-0.2
class MFD_4
{
	topLeft					= MFD_4_TL;
	topRight				= MFD_4_TR;
	bottomLeft				= MFD_4_BL;
	borderLeft				= 0;
	borderRight				= 0;
	borderTop				= 0;
	borderBottom			= 0;
	color[]					= {0.15, 1.0, 0.15, 1.0};
	enableParallax			= false;
	font					= "LucidaConsoleB";
	class material
	{
		ambient[] = {3, 3, 3, 1};
		diffuse[] = {10, 10, 10, 1};
		emissive[] = {400, 200, 200, 1};
	};

	class Bones
	{
		class Sensor_Offset
		{
			type	= fixed;
			pos[]	= {0.0, 0.33};
		};
		class Static_Offset
		{
			type	= fixed;
			pos[]	= {0.5, 0.85};
		};
		class Static_Offset2: Static_Offset
		{
			pos[]	= {0.5, 0.83};
		};
		class Rotation_0
		{
			pos0[]		= {0.0,0.0};
			pos10[]		= {0.0,0.0};
			center[]	= {0.0,0.0};
			type		= rotational;
			source		= heading;
			min			= 0;
			max			= 360;
			minAngle	= 0;
			maxAngle	= -360;
			aspectRatio	= 1;
		};
		#define ROTATION_BONE(numb)\
		class Rotation_##numb##: Rotation_0\
		{\
			minAngle	= __EVAL(numb + 0);\
			maxAngle	= __EVAL(numb - 360);\
		};
		ROTATION_BONE(10)
		ROTATION_BONE(20)
		ROTATION_BONE(30)
		ROTATION_BONE(40)
		ROTATION_BONE(50)
		ROTATION_BONE(60)
		ROTATION_BONE(70)
		ROTATION_BONE(80)
		ROTATION_BONE(90)
		ROTATION_BONE(100)
		ROTATION_BONE(110)
		ROTATION_BONE(120)
		ROTATION_BONE(130)
		ROTATION_BONE(140)
		ROTATION_BONE(150)
		ROTATION_BONE(160)
		ROTATION_BONE(170)
		ROTATION_BONE(180)
		ROTATION_BONE(190)
		ROTATION_BONE(200)
		ROTATION_BONE(210)
		ROTATION_BONE(220)
		ROTATION_BONE(230)
		ROTATION_BONE(240)
		ROTATION_BONE(250)
		ROTATION_BONE(260)
		ROTATION_BONE(270)
		ROTATION_BONE(280)
		ROTATION_BONE(290)
		ROTATION_BONE(300)
		ROTATION_BONE(310)
		ROTATION_BONE(320)
		ROTATION_BONE(330)
		ROTATION_BONE(340)
		ROTATION_BONE(350)
		class Rotation_Inv_0: Rotation_0
		{
			min			= 0;
			max			= 360;
			minAngle	= 180;
			maxAngle	= -180;
		};
		#define ROTATION_INV_BONE(numb)\
		class Rotation_Inv_##numb##: Rotation_Inv_0\
		{\
			minAngle	= __EVAL(numb + 180);\
			maxAngle	= __EVAL(numb - 180);\
		};
		ROTATION_INV_BONE(30)
		ROTATION_INV_BONE(60)
		ROTATION_INV_BONE(90)
		ROTATION_INV_BONE(120)
		ROTATION_INV_BONE(150)
		ROTATION_INV_BONE(180)
		ROTATION_INV_BONE(210)
		ROTATION_INV_BONE(240)
		ROTATION_INV_BONE(270)
		ROTATION_INV_BONE(300)
		ROTATION_INV_BONE(330)

		// Waypoint related

		class MovementY
		{
			type			= linear;
			source			= user;
			sourceIndex 	= 5;
			refreshRate		= 0.1;
			min				= 0;
			max				= 1;
			sourceScale		= 1;
			maxPos[]		= {0,10};
			minPos[]		= {0,-10};
		};
		class MovementX: MovementY
		{
			sourceIndex 	= 4;
			maxPos[]		= {-10,0};
			minPos[]		= {10,0};
		};
		class PlaneDirection
		{
			type		= rotational;
			source		= heading;
			sourceScale	= 1.0;
			center[]	= {0.0, 0.0};
			min			= 0;
			max			= 360;
			minAngle	= 0;
			maxAngle	= 360;
			aspectRatio	= __EVAL(1 / XtoYscale);

		};
		#define WP_MACRO(num,index)						\
		class WP##num##_PosX: MovementX 				\
		{												\
			sourceIndex 	= ##index##;				\
		};												\
		class WP##num##_PosY: MovementY					\
		{												\
			sourceIndex 	= __EVAL(##index## + 1);	\
		};
		WP_MACRO(1,6)
		WP_MACRO(2,8)
		WP_MACRO(3,10)
		WP_MACRO(4,12)
		WP_MACRO(5,14)
		WP_MACRO(6,16)
		WP_MACRO(7,18)
		WP_MACRO(8,20)
		WP_MACRO(9,22)
		WP_MACRO(10,24)
	};
	class Draw
	{
		condition = on;
		alpha				= 0.3;
		color[]				= {0,0.03,0.17};
		class Draw_Static
		{
			type			= line;
			width			= 10.0;
			points[]		=
			{
				CIRCLE_BIG(Static_Offset,0.68),{},
				CIRCLE_BIG(Static_Offset,0.34),{},
				{Static_Offset,{0,-0.70},1},
				{Static_Offset,{0,-0.76},1},
				{Static_Offset,{0.07,-0.76},1},
				{Static_Offset,{0.07,-0.83},1},
				{Static_Offset,{-0.07,-0.83},1},
				{Static_Offset,{-0.07,-0.76},1},
				{Static_Offset,{0,-0.76},1},{},
				#define LINE_ROT(size,numb)\
				{Static_Offset,1,{Rotation_##numb##, 0.0,__EVAL(0.695)},1},\
				{Static_Offset,1,{Rotation_##numb##, 0.0,__EVAL(0.695 - size)},1},{}
				#define SIZE_LINE_SMALL 0.025
				#define SIZE_LINE_BIG 0.04
				LINE_ROT(SIZE_LINE_BIG,0),
				LINE_ROT(SIZE_LINE_SMALL,10),
				LINE_ROT(SIZE_LINE_SMALL,20),
				LINE_ROT(SIZE_LINE_BIG,30),
				LINE_ROT(SIZE_LINE_SMALL,40),
				LINE_ROT(SIZE_LINE_SMALL,50),
				LINE_ROT(SIZE_LINE_BIG,60),
				LINE_ROT(SIZE_LINE_SMALL,70),
				LINE_ROT(SIZE_LINE_SMALL,80),
				LINE_ROT(SIZE_LINE_BIG,90),
				LINE_ROT(SIZE_LINE_SMALL,100),
				LINE_ROT(SIZE_LINE_SMALL,110),
				LINE_ROT(SIZE_LINE_BIG,120),
				LINE_ROT(SIZE_LINE_SMALL,130),
				LINE_ROT(SIZE_LINE_SMALL,140),
				LINE_ROT(SIZE_LINE_BIG,150),
				LINE_ROT(SIZE_LINE_SMALL,160),
				LINE_ROT(SIZE_LINE_SMALL,170),
				LINE_ROT(SIZE_LINE_BIG,180),
				LINE_ROT(SIZE_LINE_SMALL,190),
				LINE_ROT(SIZE_LINE_SMALL,200),
				LINE_ROT(SIZE_LINE_BIG,210),
				LINE_ROT(SIZE_LINE_SMALL,220),
				LINE_ROT(SIZE_LINE_SMALL,230),
				LINE_ROT(SIZE_LINE_BIG,240),
				LINE_ROT(SIZE_LINE_SMALL,250),
				LINE_ROT(SIZE_LINE_SMALL,260),
				LINE_ROT(SIZE_LINE_BIG,270),
				LINE_ROT(SIZE_LINE_SMALL,280),
				LINE_ROT(SIZE_LINE_SMALL,290),
				LINE_ROT(SIZE_LINE_BIG,300),
				LINE_ROT(SIZE_LINE_SMALL,310),
				LINE_ROT(SIZE_LINE_SMALL,320),
				LINE_ROT(SIZE_LINE_BIG,330),
				LINE_ROT(SIZE_LINE_SMALL,340),
				LINE_ROT(SIZE_LINE_SMALL,350),
				{},
			};
		};
		HUD_TEXT_2BONES(Static_Offset,Rotation_Inv_0,0.0,-0.65,0.04,0.05,center,"N",Rotation_0_Text)
		HUD_TEXT_2BONES(Static_Offset,Rotation_Inv_30,0.0,-0.65,0.04,0.05,center,"03",Rotation_30_Text)
		HUD_TEXT_2BONES(Static_Offset,Rotation_Inv_60,0.0,-0.65,0.04,0.05,center,"06",Rotation_60_Text)
		HUD_TEXT_2BONES(Static_Offset,Rotation_Inv_90,0.0,-0.65,0.04,0.05,center,"E",Rotation_90_Text)
		HUD_TEXT_2BONES(Static_Offset,Rotation_Inv_120,0.0,-0.65,0.04,0.05,center,"12",Rotation_120_Text)
		HUD_TEXT_2BONES(Static_Offset,Rotation_Inv_150,0.0,-0.65,0.04,0.05,center,"15",Rotation_150_Text)
		HUD_TEXT_2BONES(Static_Offset,Rotation_Inv_180,0.0,-0.65,0.04,0.05,center,"S",Rotation_180_Text)
		HUD_TEXT_2BONES(Static_Offset,Rotation_Inv_210,0.0,-0.65,0.04,0.05,center,"21",Rotation_210_Text)
		HUD_TEXT_2BONES(Static_Offset,Rotation_Inv_240,0.0,-0.65,0.04,0.05,center,"24",Rotation_240_Text)
		HUD_TEXT_2BONES(Static_Offset,Rotation_Inv_270,0.0,-0.65,0.04,0.05,center,"W",Rotation_270_Text)
		HUD_TEXT_2BONES(Static_Offset,Rotation_Inv_300,0.0,-0.65,0.04,0.05,center,"30",Rotation_300_Text)
		HUD_TEXT_2BONES(Static_Offset,Rotation_Inv_330,0.0,-0.65,0.04,0.05,center,"33",Rotation_330_Text)
		class BackgroundBlack
		{
			color[]		= {0.0, 0.0, 0.0};
			alpha 		= 1;

			class Static
			{
				type			= polygon;
				points[]		=
				{
					{
						POLYGON_BOX(0.07,0.05,0.68,0.55)
					},
					{
						POLYGON_BOX(0.09,0.1,0.83,0.2)
					}
				};
			};
		};
		class Draw_White
		{
			color[] = {1,1,1};

			class HeadingText
			{
				type			= text;
				source			= heading;
				sourceScale		= 1;
				sourceLength	= 3;
				refreshRate		= 0.1;
				align			= center;
				scale			= 1;
				TEXT_SIZEPOS(0.5,0.03,0.06,0.06)
			};
			HUD_TEXT_STATIC(0.92,0.23,0.07,0.07,left,"36",Range_Text)
			HUD_TEXT_STATIC(0.86,0.03,0.05,0.05,right,"LPE4",MFlare_Text)
			HUD_TEXT_STATIC(0.01,0.07,0.04,0.04,right,"346/97",RangesData1_Text)
			HUD_TEXT_STATIC(0.79,0.84,0.04,0.04,right,"GRID",Pos_Text)
			class CordX
			{
				type			= text;
				source			= coordinateX;
				sourceScale		= 0.01;
				sourceLength	= 3;
				sourceOffset	= -0.5;

				align			= right;
				scale			= 1;
				TEXT_SIZEPOS(0.79,0.88,0.04,0.04)
			};
			class CordY: CordX
			{
				source			= coordinateY;
				TEXT_SIZEPOS(0.79+0.07,0.88,0.04,0.04)
			};
			class WP
			{
				condition		= "wpvalid";
				class WPdist
				{
					type			= text;
					source			= wpdist;
					sourceScale		= 0.001;
					sourcePrecision = 1;

					align			= left;
					scale			= 1;
					TEXT_SIZEPOS(0.79+0.15 ,0.915,0.04,0.04)
				};
				class WPIndex
				{
					type			= text;
					source			= wpIndex;
					sourceScale		= 1;
					sourceLength	= 2;

					align			= right;
					scale			= 1;
					TEXT_SIZEPOS(0.83 ,0.915,0.04,0.04)
				};
				HUD_TEXT_STATIC(0.790,			0.915		,0.04,0.04,right,"W",WPstatic)
				HUD_TEXT_STATIC(0.790 +0.035,	0.915+0.035	,0.04,0.04,right,"A",WPAuto)
				HUD_TEXT_STATIC(0.790 +0.16,	0.915		,0.04,0.04,right,"KM",WPKM)
				HUD_TEXT_STATIC(0.790 +0.11,	0.915+0.035	,0.04,0.04,right,"-:--",WPTime)
				class WP1
				{
					condition = "user6>=0";
					class CurrentWaypoint
					{
						color[]				= {0.9, 0.0, 0.0};
						condition = "1-WPIndex";
						class WaypointShape
						{
							width		= 22;
							type		= line;
							points[]	=
							{
								CIRCLE_BIG_2B_ROT(PlaneDirection,WP2_PosX,WP2_PosY, 0.02),{},
							};
						};
					};
					class WaypointShape
					{
						width		= 6;
						type		= line;
						points[]	=
						{
							CIRCLE_BIG_2B_ROT(PlaneDirection,WP1_PosX,WP1_PosY, 0.02),{},
						};
					};
				};
				class WP2
				{
					condition = "user8>=0";
					class CurrentWaypoint
					{
						color[]				= {0.9, 0.0, 0.0};
						condition = "(WPIndex>=1)*(WPIndex<=1)";
						class WaypointShape
						{
							width		= 22;
							type		= line;
							points[]	=
							{
								CIRCLE_BIG_2B_ROT(PlaneDirection,WP2_PosX,WP2_PosY, 0.02),{},
							};
						};
					};
					class WaypointShape
					{
						width		= 6;
						type		= line;
						points[]	=
						{
							CIRCLE_BIG_2B_ROT(PlaneDirection,WP2_PosX,WP2_PosY, 0.02),{},
							{WP1_PosX,1,WP1_PosY,1,{PlaneDirection,0,0},1},
							{WP2_PosX,1,WP2_PosY,1,{PlaneDirection,0,0},1}
						};
					};
				};
				class WP3
				{
					condition = "user10>=0";
					class CurrentWaypoint
					{
						color[]				= {0.9, 0.0, 0.0};
						condition = "(WPIndex>=2)*(WPIndex<=2)";
						class WaypointShape
						{
							width		= 22;
							type		= line;
							points[]	=
							{
								CIRCLE_BIG_2B_ROT(PlaneDirection,WP3_PosX,WP3_PosY, 0.02),{},
							};
						};
					};
					class WaypointShape
					{
						width		= 6;
						type		= line;
						points[]	=
						{
							CIRCLE_BIG_2B_ROT(PlaneDirection,WP3_PosX,WP3_PosY, 0.02),{},
							{WP2_PosX,1,WP2_PosY,1,{PlaneDirection,0,0},1},
							{WP3_PosX,1,WP3_PosY,1,{PlaneDirection,0,0},1}
						};
					};
				};
				class WP4
				{
					condition = "user12>=0";
					class CurrentWaypoint
					{
						color[]				= {0.9, 0.0, 0.0};
						condition = "(WPIndex>=3)*(WPIndex<=3)";
						class WaypointShape
						{
							width		= 22;
							type		= line;
							points[]	=
							{
								CIRCLE_BIG_2B_ROT(PlaneDirection,WP4_PosX,WP4_PosY, 0.02),{},
							};
						};
					};
					class WaypointShape
					{
						width		= 6;
						type		= line;
						points[]	=
						{
							CIRCLE_BIG_2B_ROT(PlaneDirection,WP4_PosX,WP4_PosY, 0.02),{},
							{WP3_PosX,1,WP3_PosY,1,{PlaneDirection,0,0},1},
							{WP4_PosX,1,WP4_PosY,1,{PlaneDirection,0,0},1}
						};
					};
				};
				class WP5
				{
					condition = "user14>=0";
					class CurrentWaypoint
					{
						color[]				= {0.9, 0.0, 0.0};
						condition = "(WPIndex>=4)*(WPIndex<=4)";
						class WaypointShape
						{
							width		= 22;
							type		= line;
							points[]	=
							{
								CIRCLE_BIG_2B_ROT(PlaneDirection,WP5_PosX,WP5_PosY, 0.02),{},
							};
						};
					};
					class WaypointShape
					{
						width		= 6;
						type		= line;
						points[]	=
						{
							CIRCLE_BIG_2B_ROT(PlaneDirection,WP5_PosX,WP5_PosY, 0.02),{},
							{WP4_PosX,1,WP4_PosY,1,{PlaneDirection,0,0},1},
							{WP5_PosX,1,WP5_PosY,1,{PlaneDirection,0,0},1}
						};
					};
				};
				class WP6
				{
					condition = "user16>=0";
					class CurrentWaypoint
					{
						color[]				= {0.9, 0.0, 0.0};
						condition = "(WPIndex>=5)*(WPIndex<=5)";
						class WaypointShape
						{
							width		= 22;
							type		= line;
							points[]	=
							{
								CIRCLE_BIG_2B_ROT(PlaneDirection,WP5_PosX,WP5_PosY, 0.02),{},
							};
						};
					};
					class WaypointShape
					{
						width		= 6;
						type		= line;
						points[]	=
						{
							CIRCLE_BIG_2B_ROT(PlaneDirection,WP6_PosX,WP6_PosY, 0.02),{},
							{WP5_PosX,1,WP5_PosY,1,{PlaneDirection,0,0},1},
							{WP6_PosX,1,WP6_PosY,1,{PlaneDirection,0,0},1}
						};
					};
				};
				class WP7
				{
					condition = "user18>=0";
					class CurrentWaypoint
					{
						color[]				= {0.9, 0.0, 0.0};
						condition = "(WPIndex>=6)*(WPIndex<=6)";
						class WaypointShape
						{
							width		= 22;
							type		= line;
							points[]	=
							{
								CIRCLE_BIG_2B_ROT(PlaneDirection,WP7_PosX,WP7_PosY, 0.02),{},
							};
						};
					};
					class WaypointShape
					{
						width		= 6;
						type		= line;
						points[]	=
						{
							CIRCLE_BIG_2B_ROT(PlaneDirection,WP7_PosX,WP7_PosY, 0.02),{},
							{WP6_PosX,1,WP6_PosY,1,{PlaneDirection,0,0},1},
							{WP7_PosX,1,WP7_PosY,1,{PlaneDirection,0,0},1}
						};
					};
				};
				class WP8
				{
					condition = "user20>=0";
					class CurrentWaypoint
					{
						color[]				= {0.9, 0.0, 0.0};
						condition = "(WPIndex>=7)*(WPIndex<=7)";
						class WaypointShape
						{
							width		= 22;
							type		= line;
							points[]	=
							{
								CIRCLE_BIG_2B_ROT(PlaneDirection,WP8_PosX,WP8_PosY, 0.02),{},
							};
						};
					};
					class WaypointShape
					{
						width		= 6;
						type		= line;
						points[]	=
						{
							CIRCLE_BIG_2B_ROT(PlaneDirection,WP8_PosX,WP8_PosY, 0.02),{},
							{WP7_PosX,1,WP7_PosY,1,{PlaneDirection,0,0},1},
							{WP8_PosX,1,WP8_PosY,1,{PlaneDirection,0,0},1}
						};
					};
				};
				class WP9
				{
					condition = "user22>=0";
					class CurrentWaypoint
					{
						color[]				= {0.9, 0.0, 0.0};
						condition = "(WPIndex>=8)*(WPIndex<=8)";
						class WaypointShape
						{
							width		= 22;
							type		= line;
							points[]	=
							{
								CIRCLE_BIG_2B_ROT(PlaneDirection,WP9_PosX,WP9_PosY, 0.02),{},
							};
						};
					};
					class WaypointShape
					{
						width		= 6;
						type		= line;
						points[]	=
						{
							CIRCLE_BIG_2B_ROT(PlaneDirection,WP9_PosX,WP9_PosY, 0.02),{},
							{WP8_PosX,1,WP8_PosY,1,{PlaneDirection,0,0},1},
							{WP9_PosX,1,WP9_PosY,1,{PlaneDirection,0,0},1}
						};
					};
				};
				class WP10
				{
					condition = "user24>=0";
					class CurrentWaypoint
					{
						color[]				= {0.9, 0.0, 0.0};
						condition = "(WPIndex>=9)*(WPIndex<=9)";
						class WaypointShape
						{
							width		= 22;
							type		= line;
							points[]	=
							{
								CIRCLE_BIG_2B_ROT(PlaneDirection,WP10_PosX,WP10_PosY, 0.02),{},
							};
						};
					};
					class WaypointShape
					{
						width		= 6;
						type		= line;
						points[]	=
						{
							CIRCLE_BIG_2B_ROT(PlaneDirection,WP10_PosX,WP10_PosY, 0.02),{},
							{WP9_PosX,1,WP9_PosY,1,{PlaneDirection,0,0},1},
							{WP10_PosX,1,WP10_PosY,1,{PlaneDirection,0,0},1}
						};
					};
				};
			};
		};
		class Draw_Purple
		{
			color[] = {0.67,0.06,0.32};
			HUD_TEXT_STATIC(0.01,0.03,0.04,0.04,right,"348/111 BE1",RangesData1_Text)
		};
		class Draw_Yellow
		{
			color[] = {0.99,0.86,0.14};
			class NoTarget
			{
				condition = "targetDist<=0";
				HUD_TEXT_STATIC(0.18,0.85,0.04,0.04,center,"NO TARGET",Target_Text)
			};
			class TargetInfo
			{
				condition = "targetDist>=1";
				HUD_TEXT_STATIC(0.02 ,0.85,0.04,0.04,right,"DIST:",Dist_Text)
				class CordX
				{
					type			= text;
					source			= targetDist;
					sourceScale		= 0.001;
					sourcePrecision	= 1;
					sourceLength	= 1;

					align			= right;
					scale			= 1;
					TEXT_SIZEPOS(0.15 ,0.85,0.04,0.04)
				};
				HUD_TEXT_STATIC(0.02 ,0.89,0.04,0.04,right,"SPD:",SPD_Text)
				class SpeedSource
				{
					type			= text;
					source			= LarTargetSpeed;
					sourceScale		= 1;
					sourcePrecision	= 0;
					sourceLength	= 1;

					align			= right;
					scale			= 1;
					TEXT_SIZEPOS(0.15 ,0.89,0.04,0.04)
				};
				HUD_TEXT_STATIC(0.02 ,0.93,0.04,0.04,right,"ATL:",ATL_Text)
				class HeightSource
				{
					type			= text;
					source			= targetHeight;
					sourceScale		= 1;
					sourcePrecision	= 0;
					sourceLength	= 1;

					align			= right;
					scale			= 1;
					TEXT_SIZEPOS(0.15 ,0.93,0.04,0.04)
				};
			};
		};
		HUD_TEXT_STATIC(0.74,0.55,0.05,0.05,left,"18",Range_Text)
		class RadarOn
		{
			condition = activeSensorsOn;
			color[]				= {1,1,1};
			class Draw_Static
			{
				type			= line;
				width			= 6.0;
				points[]		=
				{
					// Wide radar - 10km range
					CIRCLE_MARK_CENTER(0.5, 0.83, 0.0, 0.21, 60),
					POINT_MARK(Static_Offset2,0.21,55),
					POINT_MARK(Static_Offset2,0.21,50),
					POINT_MARK(Static_Offset2,0.21,45),
					POINT_MARK(Static_Offset2,0.21,40),
					POINT_MARK(Static_Offset2,0.21,35),
					// Narrow radar - 36km range
					CIRCLE_MARK_CENTER(0.5, 0.83, 0.21, 0.63, 30),
					POINT_MARK(Static_Offset2,0.63,25),
					POINT_MARK(Static_Offset2,0.63,20),
					POINT_MARK(Static_Offset2,0.63,15),
					POINT_MARK(Static_Offset2,0.63,10),
					POINT_MARK(Static_Offset2,0.63,5),
					POINT_MARK(Static_Offset2,0.63,0),
					POINT_MARK(Static_Offset2,0.63,-5),
					POINT_MARK(Static_Offset2,0.63,-10),
					POINT_MARK(Static_Offset2,0.63,-15),
					POINT_MARK(Static_Offset2,0.63,-20),
					POINT_MARK(Static_Offset2,0.63,-25),
					POINT_MARK(Static_Offset2,0.63,-30),
					CIRCLE_MARK_CENTER(0.5, 0.83, 0.21, 0.63, -30),{},
					POINT_MARK(Static_Offset2,0.21,-30),
					POINT_MARK(Static_Offset2,0.21,-35),
					POINT_MARK(Static_Offset2,0.21,-40),
					POINT_MARK(Static_Offset2,0.21,-45),
					POINT_MARK(Static_Offset2,0.21,-50),
					POINT_MARK(Static_Offset2,0.21,-55),
					POINT_MARK(Static_Offset2,0.21,-60),{},
					CIRCLE_MARK_CENTER(0.5, 0.83, 0.0, 0.21, -60),
					{}
				};
			};
		};
		class SensorGroup
		{
			color[]				= {1,1,1};
			alpha = 1;
			class Sensor
			{
				type	= sensor;
				#define SENSOR_SIZE(numb)\
				pos[]	= {Sensor_Offset,{0+numb, 0+numb}, 1};\
				down[]	= {Sensor_Offset,{1-numb, 1-numb}, 1};
				SENSOR_SIZE(-0.17)

				showTargetTypes = 2+4+8+16+32+64+128+256+512+1024;
				width			= 4;

				sensorLineType		= 0;
				sensorLineWidth		= 3;
				targetLineWidth		= __EVAL(-2.4*0.0008);
				targetLineLength	= 0.02;
				range				= 36000;

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
						text	= "U";
						align	= center;
						scale	= 1;
						TEXT_SIZEPOS(0.0,-0.009,0.02,0.02)
					};
				};
				class targetFriendly: target
				{
					color[]	= {0,1,0};
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
				class targetEnemy: target
				{
					color[]	= {1,0,0};
					class TargetLines: TargetLines {};
					class TextA: TextA {};
				};
				class targetGroup: target
				{
					color[]	= {1,0,0};
					class TargetLines: TargetLines {};
					class TextA: TextA {};
				};
				class targetDestroyed {};
				class targetGround: target
				{
					class TargetLines: TargetLines {};
					class TextA: TextA {};
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
				class targetGroundGroup: targetGround
				{
					color[]	= {1,0,0};
					class TargetLines: TargetLines {};
					class TextA: TextA {};
				};
				class targetGroundDestroyed {};
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
				class targetGroundRemoteGroup: targetGroundRemote
				{
					color[]	= {1,0,0};
					class TargetLines: TargetLines {};
					class TextA: TextA {};
				};
				class targetGroundRemoteDestroyed {};
				class targetLaser: target
				{
					class TargetLines: TargetLines {};
					class TextA: TextA {};
				};
				class targetLaserFriendly: targetLaser
				{
					color[]	= {0,1,0};
					class TargetLines: TargetLines {};
					class TextA: TextA {};
				};
				class targetLaserEnemy: targetLaser
				{
					color[]	= {1,0,0};
					class TargetLines: TargetLines {};
					class TextA: TextA {};
				};
				class targetLaserGroup: targetLaser
				{
					color[]	= {1,0,0};
					class TargetLines: TargetLines {};
					class TextA: TextA {};
				};
				class targetNVG: target
				{
					class TargetLines: TargetLines {};
					class TextA: TextA {};
				};
				class targetNVGFriendly: targetNVG
				{
					color[]	= {0,1,0};
					class TargetLines: TargetLines {};
					class TextA: TextA {};
				};
				class targetNVGEnemy: targetNVG
				{
					color[]	= {1,0,0};
					class TargetLines: TargetLines {};
					class TextA: TextA {};
				};
				class targetNVGGroup: targetNVG
				{
					color[]	= {1,0,0};
					class TargetLines: TargetLines {};
					class TextA: TextA {};
				};
				class targetMan: target
				{
					class TargetLines: TargetLines {};
					class TextA: TextA {};
				};
				class targetManFriendly: targetMan
				{
					color[]	= {0,1,0};
					class TargetLines: TargetLines {};
					class TextA: TextA {};
				};
				class targetManEnemy: targetMan
				{
					color[]	= {1,0,0};
					class TargetLines: TargetLines {};
					class TextA: TextA {};
				};
				class targetManGroup: targetMan
				{
					color[]	= {1,0,0};
					class TargetLines: TargetLines {};
					class TextA: TextA {};
				};
				class targetManRemote: target
				{
					class TargetLines: TargetLines {};
					class TextA: TextA {};
				};
				class targetManRemoteFriendly: targetManRemote
				{
					color[]	= {0,1,0};
					class TargetLines: TargetLines {};
					class TextA: TextA {};
				};
				class targetManRemoteEnemy: targetManRemote
				{
					color[]	= {1,0,0};
					class TargetLines: TargetLines {};
					class TextA: TextA {};
				};
				class targetManRemoteGroup: targetManRemote
				{
					color[]	= {1,0,0};
					class TargetLines: TargetLines {};
					class TextA: TextA {};
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
				class targetAirGroup: targetAir
				{
					color[]	= {1,0,0};
					class TargetLines: TargetLines {};
					class TextA: TextA {};
				};

				class targetAirDestroyed {};
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
				class targetAirRemoteGroup: targetAirRemote
				{
					color[]	= {1,0,0};
					class TargetLines: TargetLines {};
					class TextA: TextA {};
				};
				class targetAirRemoteDestroyed {};
			};
		};
		//class Orange
		//{
		//	color[]	= {1,0.3,0};
		//};
	};
};
#define PosX0Center 0.498
#define PosY0Center 0.485
#define PosYCenterHorizont 0.48
#define PosY0CenterAdjust 0.13
#define SizeX10deg (0.540)
#define SizeY10deg (0.584)
#define SizeX10degHorizon 0.684
#define SizeY10degHorizon 0.680
class MFD_5
{
	topLeft					= MFD_5_TL;
	topRight				= MFD_5_TR;
	bottomLeft				= MFD_5_BL;
	borderLeft				= 0;
	borderRight				= 0;
	borderTop				= 0;
	borderBottom			= 0;
	color[]					= {0.15, 1.0, 0.15, 1.0};
	enableParallax			= false;
	font					= "LucidaConsoleB";
	class material
	{
		ambient[] = {3, 3, 3, 1};
		diffuse[] = {10, 10, 10, 1};
		emissive[] = {400, 200, 200, 1};
	};

	class Bones
	{
		class Sensor_Offset
		{
			type	= fixed;
			pos[]	= {0.0, 0.03};
		};
		class Static_Offset
		{
			type	= fixed;
			pos[]	= {0.5, 0.53};
		};
		class Rotation_0
		{
			pos0[]		= {0.0,0.0};
			pos10[]		= {0.0,0.0};
			center[]	= {0.0,0.0};
			type		= rotational;
			source		= heading;
			min			= 0;
			max			= 360;
			minAngle	= 0;
			maxAngle	= -360;
			aspectRatio	= __EVAL(146/135);
		};
		ROTATION_BONE(30)
		ROTATION_BONE(60)
		ROTATION_BONE(90)
		ROTATION_BONE(120)
		ROTATION_BONE(150)
		ROTATION_BONE(180)
		ROTATION_BONE(210)
		ROTATION_BONE(240)
		ROTATION_BONE(270)
		ROTATION_BONE(300)
		ROTATION_BONE(330)
		class Rotation_Inv_0: Rotation_0
		{
			min			= 0;
			max			= 360;
			minAngle	= 180;
			maxAngle	= -180;
		};
		ROTATION_INV_BONE(90)
		ROTATION_INV_BONE(180)
		ROTATION_INV_BONE(270)
	};
	class Draw
	{
		condition	= on;
		alpha		= 0.5;
		color[]		= {1,1,1};
		class Draw_Blue
		{
			color[]				= {0,0.03,0.17};
			class Draw_Static
			{
				type			= line;
				width			= 10.0;
				points[]		=
				{
					CIRCLE_BIG(Static_Offset,0.38),{},
					CIRCLE_BIG(Static_Offset,0.16),{},
					{Static_Offset,{0,		__EVAL(-0.73+0.32)},1},
					{Static_Offset,{0,		__EVAL(-0.76+0.32)},1},
					{Static_Offset,{0.07,	__EVAL(-0.76+0.32)},1},
					{Static_Offset,{0.07,	__EVAL(-0.83+0.32)},1},
					{Static_Offset,{-0.07,	__EVAL(-0.83+0.32)},1},
					{Static_Offset,{-0.07,	__EVAL(-0.76+0.32)},1},
					{Static_Offset,{0,		__EVAL(-0.76+0.32)},1},{},
					#define LINE_ROT(size,numb)\
					{Static_Offset,1,{Rotation_##numb##, 0.0,__EVAL(0.355/XtoYscale)},1},\
					{Static_Offset,1,{Rotation_##numb##, 0.0,__EVAL((0.355 - size)/XtoYscale)},1},{}
					#define SIZE_LINE_SMALL 0.025
					#define SIZE_LINE_BIG 0.04
					LINE_ROT(SIZE_LINE_BIG,0),
					LINE_ROT(SIZE_LINE_BIG,30),
					LINE_ROT(SIZE_LINE_BIG,60),
					LINE_ROT(SIZE_LINE_BIG,90),
					LINE_ROT(SIZE_LINE_BIG,120),
					LINE_ROT(SIZE_LINE_BIG,150),
					LINE_ROT(SIZE_LINE_BIG,180),
					LINE_ROT(SIZE_LINE_BIG,210),
					LINE_ROT(SIZE_LINE_BIG,240),
					LINE_ROT(SIZE_LINE_BIG,270),
					LINE_ROT(SIZE_LINE_BIG,300),
					LINE_ROT(SIZE_LINE_BIG,330),
					{}
				};
			};
			HUD_TEXT_2BONES(Static_Offset,Rotation_Inv_0,0.0,	-0.345,0.04,0.05,center,"N",Rotation_0_Text)
			HUD_TEXT_2BONES(Static_Offset,Rotation_Inv_90,0.0,	-0.345,0.04,0.05,center,"E",Rotation_90_Text)
			HUD_TEXT_2BONES(Static_Offset,Rotation_Inv_180,0.0,	-0.345,0.04,0.05,center,"S",Rotation_180_Text)
			HUD_TEXT_2BONES(Static_Offset,Rotation_Inv_270,0.0,	-0.345,0.04,0.05,center,"W",Rotation_270_Text)
		};
		class BackgroundBlack
		{
			color[]		= {0.0, 0.0, 0.0};
			alpha 		= 1;

			class Static
			{
				type			= polygon;
				points[]		=
				{
					{
						POLYGON_BOX(0.07,0.05,0.6,0.4)
					},
					{
						POLYGON_BOX(0.13,0.08,0.68,0.21)
					}
				};
			};
		};

		class HeadingText
		{
			type			= text;
			source			= heading;
			sourceScale		= 1;
			sourceLength	= 3;
			refreshRate		= 0.1;
			align			= center;
			scale			= 1;
			TEXT_SIZEPOS(0.5,0.03,0.06,0.06)
		};
		HUD_TEXT_STATIC(0.81,0.22,0.07,0.07,left,"18A",Range_Text)
		HUD_TEXT_STATIC(0.86,0.03,0.05,0.05,right,"LPE4",MFD1_Text)
		class Draw_Blue2
		{
			color[]				= {0,0.03,0.17};
			HUD_TEXT_STATIC(0.64,0.4,0.05,0.05,left,"9",Range_Text)
		};
		class RWR
		{
			type	= sensor;
			//SENSOR_SIZE(0.08)
			SENSOR_SIZE(-0.32)

			showTargetTypes = 2 + 4 + 8 + 32 + 64 + 128 + 256;
			width			= 4;

			sensorLineType		= 1;
			sensorLineWidth		= 3;
			targetLineWidth		= __EVAL(-2.0*0.0008);
			targetLineLength	= 0.02;
			range				= 36000;

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
		HUD_TEXT_STATIC(0.77,0.85,0.03,0.04,right,"M CHAFF",MChaff_Text)
		HUD_TEXT_STATIC(0.77,0.89,0.03,0.04,right,"M FLARE",MFlare_Text)
		HUD_TEXT_STATIC(0.77,0.93,0.03,0.04,right,"1 PROG",Prog_Text)
		class ChaffSource
		{
			type			= text;
			source			= cmammo;
			sourceScale 	= 1;
			align			= right;
			scale			= 1;
			TEXT_SIZEPOS(0.93,0.85,0.03,0.04)
		};
		class FlareSource: ChaffSource
		{
			TEXT_SIZEPOS(0.93,0.89,0.03,0.04)
		};
		HUD_TEXT_STATIC(0.93,0.93,0.03,0.04,right,"10",ProgS_Text)
	};
};
class MFD_6
{
	topLeft					= MFD_6_TL;
	topRight				= MFD_6_TR;
	bottomLeft				= MFD_6_BL;
	borderLeft				= 0;
	borderRight				= 0;
	borderTop				= 0;
	borderBottom			= 0;
	color[]					= {0.15, 1.0, 0.15, 1.0};
	enableParallax			= false;
	font					= "LucidaConsoleB";
	class material
	{
		ambient[] = {3, 3, 3, 1};
		diffuse[] = {10, 10, 10, 1};
		emissive[] = {400, 200, 200, 1};
	};

	class Bones {};
	class Draw
	{
		condition	= on;
		color[]		= {0.15, 1.0, 0.15};
		class CurrentWeapon
		{
			type			= text;
			source			= ammoFormat;
			sourceScale		= 1;

			align			= center;
			scale			= 1;
			TEXT_SIZEPOS(0.51,0.24,0.06,0.06)
		};
		class MGAmmo
		{
			type			= text;
			source			= ammo;
			sourceIndex 	= 1;
			sourceScale		= 1;

			align			= right;
			scale			= 1;
			TEXT_SIZEPOS(0.51,0.415,0.03,0.04)
		};
		HUD_TEXT_STATIC(0.43,0.415,0.03,0.04,right,"GUN-",MGAmmo_Text)
		class thrust1Source
		{
			type			= text;
			source			= throttle;
			sourceScale		= 100;
			align			= center;
			scale			= 1;
			TEXT_SIZEPOS(0.3,0.08,0.04,0.04)
		};
		class thrust2Source: thrust1Source
		{
			TEXT_SIZEPOS(0.61,0.08,0.04,0.04)
		};
		class White
		{
			color[]				= {1, 1.0, 15};
			class ChaffSource
			{
				type			= text;
				source			= cmammo;
				sourceScale 	= 1;
				align			= right;
				scale			= 1;
				TEXT_SIZEPOS(0.26,0.78,0.03,0.04)
			};
			class FlareSource: ChaffSource
			{
				TEXT_SIZEPOS(0.68,0.78,0.03,0.04)
			};
		};
		class Pylon1
		{
			type	= "pylonicon";
			pos[]	= {{__EVAL(0.50-0.15), 0.48}, 1};
			pylon	= 1;
			name	= "rhs_f22_pylon";
		};
		class Pylon2: Pylon1
		{
			pos[]	= {{__EVAL(0.50-0.13), 0.58}, 1};
			pylon	= 2;
		};
		class Pylon3: Pylon1
		{
			pos[]	= {{__EVAL(0.50-0.055), 0.58}, 1};
			pylon	= 3;
		};
		class Pylon4: Pylon1
		{
			pos[]	= {{__EVAL(0.50+0.055), 0.58}, 1};
			pylon	= 4;
		};
		class Pylon5: Pylon1
		{
			pos[]	= {{__EVAL(0.50+0.13), 0.58}, 1};
			pylon	= 5;
		};
		class Pylon6: Pylon1
		{
			pos[]	= {{__EVAL(0.50+0.15), 0.48}, 1};
			pylon	= 6;
		};
	};
};
class MFD_7
{
	topLeft					= MFD_7_TL;
	topRight				= MFD_7_TR;
	bottomLeft				= MFD_7_BL;
	borderLeft				= 0;
	borderRight				= 0;
	borderTop				= 0;
	borderBottom			= 0.03;
	color[]					= {0.15, 1.0, 0.15, 1.0};
	enableParallax			= false;
	font					= "rhsusf_digital_font_var";
	class material
	{
		ambient[] = {3, 3, 3, 1};
		diffuse[] = {10, 10, 10, 1};
		emissive[] = {400, 200, 200, 1};
	};

	class Bones {};
	class Draw
	{
		condition	= on;
		color[]		= {0.15, 1.0, 0.15};
		alpha		= 0.5;
		HUD_TEXT_STATIC(0.06,0.24,0.06,0.07,right,"C1: ",C1_Text)
		class C1_Value
		{
			type 			= text;
			source			= userText;
			sourceScale 	= 1;
			sourceIndex 	= 0;
			align			= right;
			scale			= 1;
			TEXT_SIZEPOS(0.16,0.24,0.06,0.07)
		};
		HUD_TEXT_STATIC(0.51,0.26,0.06,0.07,right,"COM1",COM1_Text1)
		HUD_TEXT_STATIC(0.81,0.26,0.06,0.07,left,"1/1",COM1_Text2)
		HUD_TEXT_STATIC(0.51,0.26+0.145*1,0.06,0.07,right,"C1 VOL 100%",Vol_Text)
		HUD_TEXT_STATIC(0.51,0.26+0.145*2,0.06,0.07,right,"> VOL ADJ",VolAdj_Text)
		HUD_TEXT_STATIC(0.51,0.27+0.145*3,0.06,0.07,right,"  - - - -",Em_Text)
		HUD_TEXT_STATIC(0.51,0.3+0.145*4,0.06,0.07,right,"> FREQ ADJ",FreqAdj_Text)
	};
};