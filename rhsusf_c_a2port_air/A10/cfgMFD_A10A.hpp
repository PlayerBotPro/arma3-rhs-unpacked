
class MFD_1
{
	topLeft					= MFD_Ammo_TL;
	topRight				= MFD_Ammo_TR;
	bottomLeft				= MFD_Ammo_BL;
	/// adjust position inside of memory points LOD
	borderLeft				= 0;
	borderRight				= 0;
	borderTop				= 0;
	borderBottom			= 0.2;
	color[]					= {0.15, 1.0, 0.15, 1.0};
	enableParallax			= false;
	font					= "rhsusf_digital_font_var";

	class Bones {};
	class Draw
	{
		alpha				= 0.5;
		color[]				= {0,1,0.5};

		HUD_TEXT_SOURCE_INDEX(0.78,0.42,0.31,0.55,left,ammo,1,ammoCounter)
	};
};
class MFD_2
{
	topLeft					= MFD_WP_TL;
	topRight				= MFD_WP_TR;
	bottomLeft				= MFD_WP_BL;
	/// adjust position inside of memory points LOD
	borderLeft				= 0;
	borderRight				= 0;
	borderTop				= 0;
	borderBottom			= 0.2;
	color[]					= {0.15, 1.0, 0.15, 1.0};
	enableParallax			= false;
	font					= "LucidaConsoleB";

	class Bones {};
	class Draw
	{
		alpha				= 0.5;
		color[]				= {1,1,1};

		HUD_TEXT_SOURCE(0.98,0.22,0.0,0.0,left,head,heading)
		class HeadingText
		{
			type			= text;
			source			= heading;
			sourceScale 	= 1;
			sourceLength	= 3;
			refreshRate 	= 0.1;

			align			= left;
			scale			= 1;
			TEXT_SIZEPOS(0.922,0.185,0.055,0.06)
		};
		class AltitudeBox
		{
			class Number
			{
				type = text;
				source = wpdist;
				sourceScale = 0.00005399568;
				sourceLength = 3;
				sourceOffset = 0;

				align = left;
				scale = 3;
				TEXT_SIZEPOS(0.142,0.195,0.045,0.05)
			};
			class ClipScale
			{
				clipTLParallax[] = { 0.15, 0.14 };
				clipBRParallax[] = { 0.17, 0.28 };

				class Scale
				{
					type = scale;
					horizontal = false;
					source = wpdist;
					sourceScale = 0.0005399568;
					sourceLength = 5;
					width = 4.0;

					top = 0.4;
					center = 0.2;
					bottom = 0.0;

					lineXleft = -1.0;
					lineYright = -1.0;
					lineXleftMajor = -1.0;
					lineYrightMajor = -1.0;
					majorLineEach = 1;
					numberEach = 1;
					step = 10;
					stepSize = 0.055;

					align = left;
					scale = 1;
					pos[] 	= { __EVAL(0.72-0.555), __EVAL(0.5-0.1 )};
					right[] = { __EVAL(0.76-0.555), __EVAL(0.5-0.1 )};
					down[] 	= { __EVAL(0.72-0.555), __EVAL(0.54-0.1) };
				};
			};
			/*class static
			{
				type = line;
				width = 2.0;

				points[] =
				{
					{ { 0.65, 0.3 }, 1 },
					{ { 0.65, 0.38 }, 1 },
					{ { 0.70, 0.38 }, 1 },
					{ { 0.70, 0.43 }, 1 },
					{ { 0.75, 0.43 }, 1 },
					{ { 0.75, 0.25 }, 1 },
					{ { 0.70, 0.25 }, 1 },
					{ { 0.70, 0.3 }, 1 },
					{ { 0.65, 0.3 }, 1 }
				};
			};*/
		};
	};
};
class MFD_3
{
	topLeft					= MFD_Fuel_TL;
	topRight				= MFD_Fuel_TR;
	bottomLeft				= MFD_Fuel_BL;
	/// adjust position inside of memory points LOD
	borderLeft				= 0;
	borderRight				= 0;
	borderTop				= 0;
	borderBottom			= 0.2;
	color[]					= {0.15, 1.0, 0.15, 1.0};
	enableParallax			= false;
	font					= "LucidaConsoleB";

	class Bones {};
	class Draw
	{
		alpha				= 0.5;
		color[]				= {1,1,1};

		class FuelNumber
		{
			type			= text;
			source			= fuel;
			sourceScale 	= 12000;
			sourceLength	= 5;

			align			= left;
			scale			= 1;
			TEXT_SIZEPOS(0.8,0.1,0.25,0.95)
		};
	};
};
class MFD_4
{
	topLeft					= MFD_WB_TL;
	topRight				= MFD_WB_TR;
	bottomLeft				= MFD_WB_BL;
	/// adjust position inside of memory points LOD
	borderLeft				= 0;
	borderRight				= 0;
	borderTop				= 0;
	borderBottom			= 0;
	color[]					= {0.15, 1.0, 0.15, 1.0};
	enableParallax			= false;
	font					= "LucidaConsoleB";

	class Bones {};
	class Draw
	{
		alpha				= 0.5;
		color[]				= {1,1,1};
		condition			= "1";

		class Pylon1
		{
			type	= "pylonicon";
			pos[]	= {{__EVAL(0.03+0.00), 0.83}, 1};
			pylon	= 1;
			name	= "rhs_a10a_box";
		};
		class Pylon2: Pylon1 {	pylon	= 2;pos[]	= {{__EVAL(0.030+0.129*1), 0.83}, 1};};
		class Pylon3: Pylon1 {	pylon	= 3;pos[]	= {{__EVAL(0.030+0.129*2), 0.83}, 1};};
		class Pylon4: Pylon1 {	pylon	= 4;pos[]	= {{__EVAL(0.035+0.129*3), 0.83}, 1};};

		class Pylon5: Pylon1 {	pylon	= 5;pos[]	= {{__EVAL(0.218+0.129*1), 0.06}, 1};};
		class Pylon6: Pylon1 {	pylon	= 6;pos[]	= {{__EVAL(0.228+0.129*2), 0.06}, 1};};
		class Pylon7: Pylon1 {	pylon	= 7;pos[]	= {{__EVAL(0.238+0.129*3), 0.06}, 1};};

		class Pylon8: Pylon1 {	pylon	= 8;pos[]	= {{__EVAL(0.030+0.129*4), 0.83}, 1};};
		class Pylon9: Pylon1 {	pylon	= 9;pos[]	= {{__EVAL(0.033+0.129*5), 0.83}, 1};};
		class Pylon10: Pylon1 {	pylon	= 10;pos[]	= {{__EVAL(0.035+0.129*6), 0.83}, 1};};
		class Pylon11: Pylon1 {	pylon	= 11;pos[]	= {{__EVAL(0.039+0.129*7), 0.83}, 1};};

		#define EMPTY_PYLON(xx,offX,offY) \
		class PylonEmpty##xx\
		{\
			condition = pylonEmpty##xx##;\
			color[]	= {0.87,0,0};\
			class Shape\
			{\
				type			= polygon;\
				width			= 4.0;\
				points[]		=\
				{\
					{\
						{{__EVAL(##offX##-0.015+0.035),__EVAL(##offY##-0.04+0.095)},1},\
						{{__EVAL(##offX##+0.015+0.035),__EVAL(##offY##-0.04+0.095)},1},\
						{{__EVAL(##offX##+0.015+0.035),__EVAL(##offY##+0.04+0.095)},1},\
						{{__EVAL(##offX##-0.015+0.035),__EVAL(##offY##+0.04+0.095)},1}\
					}\
				};\
			};\
		};

		EMPTY_PYLON(1,0.030+0.129*0,0.83)
		EMPTY_PYLON(2,0.030+0.129*1,0.83)
		EMPTY_PYLON(3,0.030+0.129*2,0.83)
		EMPTY_PYLON(4,0.035+0.129*3,0.83)

		EMPTY_PYLON(5,0.218+0.129*1,0.06)
		EMPTY_PYLON(6,0.228+0.129*2,0.06)
		EMPTY_PYLON(7,0.238+0.129*3,0.06)

		EMPTY_PYLON(8,0.030+0.129*4,0.83)
		EMPTY_PYLON(9,0.033+0.129*5,0.83)
		EMPTY_PYLON(10,0.035+0.129*6,0.83)
		EMPTY_PYLON(11,0.039+0.129*7,0.83)
	};
};
class MFD_5
{
	topLeft					= MFD_WN_TL;
	topRight				= MFD_WN_TR;
	bottomLeft				= MFD_WN_BL;
	/// adjust position inside of memory points LOD
	borderLeft				= 0;
	borderRight				= 0;
	borderTop				= 0;
	borderBottom			= 0;
	color[]					= {0.15, 1.0, 0.15, 1.0};
	enableParallax			= false;
	font					= "LucidaConsoleB";

	class Bones {};
	class Draw
	{
		alpha				= 0.5;
		color[]				= {1,1,1};
		condition			= "1";

		class Pylon1
		{
			type	= "pylonicon";
			pos[]	= {{__EVAL(0.07+0.00), 0.88}, 1};
			pylon	= 1;
			name	= "rhs_a10a_ammoname";
		};
		class Pylon2: Pylon1 {	pylon	= 2;pos[]	= {{__EVAL(0.060+0.129*1), 0.88}, 1};};
		class Pylon3: Pylon1 {	pylon	= 3;pos[]	= {{__EVAL(0.050+0.129*2), 0.88}, 1};};
		class Pylon4: Pylon1 {	pylon	= 4;pos[]	= {{__EVAL(0.045+0.129*3), 0.88}, 1};};

		class Pylon5: Pylon1 {	pylon	= 5;pos[]	= {{__EVAL(0.248+0.129*1), 0.05}, 1};};
		class Pylon6: Pylon1 {	pylon	= 6;pos[]	= {{__EVAL(0.228+0.129*2), 0.05}, 1};};
		class Pylon7: Pylon1 {	pylon	= 7;pos[]	= {{__EVAL(0.238+0.129*3), 0.05}, 1};};

		class Pylon8: Pylon1 {	pylon	= 8;pos[]	= {{__EVAL(0.040+0.129*4), 0.88}, 1};};
		class Pylon9: Pylon1 {	pylon	= 9;pos[]	= {{__EVAL(0.023+0.129*5), 0.88}, 1};};
		class Pylon10: Pylon1 {	pylon	= 10;pos[]	= {{__EVAL(0.025+0.129*6), 0.88}, 1};};
		class Pylon11: Pylon1 {	pylon	= 11;pos[]	= {{__EVAL(0.009+0.129*7), 0.88}, 1};};
	};
};
class MFD_6
{
	topLeft					= MFD_ALT_TL;
	topRight				= MFD_ALT_TR;
	bottomLeft				= MFD_ALT_BL;
	/// adjust position inside of memory points LOD
	borderLeft				= 0;
	borderRight				= 0;
	borderTop				= 0;
	borderBottom			= 0;
	color[]					= {0.15, 1.0, 0.15, 1.0};
	enableParallax			= false;
	font					= "LucidaConsoleB";

	class Bones {};
	class Draw
	{
		alpha				= 0.7;
		color[]				= {0.0,0.0,0.0};
		condition 			= "altitudeASL>=1000";

		class AltGrp
		{
			color[]				= {1.0,1.0,1.0};
			class AltText
			{
				type			= text;
				source			= altitudeASL;
				sourceScale 	= 0.001;
				sourceLength	= 1;
				sourceOffset 	= -0.5;

				align			= left;
				scale			= 1;
				TEXT_SIZEPOS(0.343,0.422,0.135,0.155)
			};

		};
		/*class Shape
		{
			type			= polygon;
			width			= 4.0;
			points[]		=
			{
				{
					{{__EVAL(-0.047+0.300),__EVAL(-0.066+0.489)},1},
					{{__EVAL(+0.047+0.300),__EVAL(-0.066+0.489)},1},
					{{__EVAL(+0.047+0.300),__EVAL(+0.066+0.489)},1},
					{{__EVAL(-0.047+0.300),__EVAL(+0.066+0.489)},1}
				}
			};
		};
		class Alt_10000
		{
			condition = "altitudeASL>=10000";
			class Shape
			{
				type			= polygon;
				width			= 4.0;
				points[]		=
				{
					{
						{{__EVAL(-0.047+0.220),__EVAL(-0.066+0.489)},1},
						{{__EVAL(+0.047+0.220),__EVAL(-0.066+0.489)},1},
						{{__EVAL(+0.047+0.220),__EVAL(+0.066+0.489)},1},
						{{__EVAL(-0.047+0.220),__EVAL(+0.066+0.489)},1}
					}
				};
			};
		};*/
	};
};
class MFD_RWR
{
	topLeft					= MFD_RWR_TL;
	topRight				= MFD_RWR_TR;
	bottomLeft				= MFD_RWR_BL;
	/// adjust position inside of memory points LOD
	borderLeft				= 0;
	borderRight				= 0;
	borderTop				= 0;
	borderBottom			= 0;
	color[]					= {0.15, 1.0, 0.15, 1.0};
	enableParallax			= false;
	font					= "LucidaConsoleB";

	class Bones {};
	class Draw
	{
		alpha				= 0.3;
		color[]				= {0.7,0.7,0.7};
		class RWR
		{
			type	= sensor;
			pos[]	= {{0.07, 0.07}, 1};
			down[]	= {{0.93, 0.93}, 1};

			showTargetTypes = 2 + 8 + 64 + 128 + 256;
			width			= 4;

			sensorLineType	= 3;
			sensorLineWidth	= 0;
			range = 16000;

			class MissileThreat
			{
				class TargetLines
				{
					type=line;
					width = 4;
					points[]=
					{
						CIRCLE_BIG_NB(0.05)
					};
				};
				class TextM
				{
					type	= text;
					source	= static;
					text	= "M";
					align	= center;
					scale	= 1;
					TEXT_SIZEPOS(0.0,-0.04,0.08,0.08)
				};
			};
			class lockingThreat
			{
				class TargetLines
				{
					type = line;
					points[]=
					{
						CIRCLE_BIG_NB(0.05),
						POINT2(+0.06,-0.0),
						POINT2(-0.0,+0.05),
						POINT2(-0.06,+0.0),
						POINT2(+0.0,-0.05),
						POINT2(+0.06,-0.0)
					};
				};
				class TextL
				{
					type	= text;
					source	= static;
					text	= "L";
					align	= center;
					scale	= 1;
					TEXT_SIZEPOS(0.0,-0.04,0.08,0.08)
				};
			};
			class rwr
			{
				class TargetLines
				{
					type = line;
					points[]=
					{
						POINT2(+0.06,-0.0),
						POINT2(-0.0,+0.05),
						POINT2(-0.06,+0.0),
						POINT2(+0.0,-0.05),
						POINT2(+0.06,-0.0)
					};
				};
				class TextA
				{
					type	= text;
					source	= static;
					text	= "A";
					align	= center;
					scale	= 1;
					TEXT_SIZEPOS(0.0,-0.04,0.08,0.08)
				};
			};
		};
	};
};