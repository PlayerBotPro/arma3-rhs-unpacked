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
};
class Draw
{
	alpha				= 1.0;
	color[]				= {0,0.12,0};
	MFD_CONDITION(MFD_CONDITION_NUMBER,1)
	class Weapons
	{
		condition = "((mgun+rocket+missile+bomb)>=1)+(ammo<=0)";
		class Static
		{
			type			= line;
			width			= 5.0;
			points[]		=
			{
				#define SCALE_IMG 2010
				#define OFFSET_IMG_X -0.007
				#define OFFSET_IMG_Y -0.01

				//name:wpn ,points:

				{{__EVAL(444/SCALE_IMG + OFFSET_IMG_X), __EVAL(2023/SCALE_IMG + OFFSET_IMG_Y)},1},
				{{__EVAL(293/SCALE_IMG + OFFSET_IMG_X), __EVAL(2023/SCALE_IMG + OFFSET_IMG_Y)},1},
				{{__EVAL(293/SCALE_IMG + OFFSET_IMG_X), __EVAL(1942/SCALE_IMG + OFFSET_IMG_Y)},1},
				{{__EVAL(444/SCALE_IMG + OFFSET_IMG_X), __EVAL(1942/SCALE_IMG + OFFSET_IMG_Y)},1},
				{{__EVAL(444/SCALE_IMG + OFFSET_IMG_X), __EVAL(2023/SCALE_IMG + OFFSET_IMG_Y)},1},{},

				//name":"t32","points":

				{{__EVAL(2023/SCALE_IMG + OFFSET_IMG_X), __EVAL(1738/SCALE_IMG + OFFSET_IMG_Y)},1},
				{{__EVAL(1870/SCALE_IMG + OFFSET_IMG_X), __EVAL(1738/SCALE_IMG + OFFSET_IMG_Y)},1},
				{{__EVAL(1870/SCALE_IMG + OFFSET_IMG_X), __EVAL(1659/SCALE_IMG + OFFSET_IMG_Y)},1},
				{{__EVAL(2023/SCALE_IMG + OFFSET_IMG_X), __EVAL(1659/SCALE_IMG + OFFSET_IMG_Y)},1},
				{{__EVAL(2023/SCALE_IMG + OFFSET_IMG_X), __EVAL(1738/SCALE_IMG + OFFSET_IMG_Y)},1},{},

				//name":"first","points":

				{{__EVAL(2023/SCALE_IMG + OFFSET_IMG_X), __EVAL(1490/SCALE_IMG + OFFSET_IMG_Y)},1},
				{{__EVAL(1783/SCALE_IMG + OFFSET_IMG_X), __EVAL(1490/SCALE_IMG + OFFSET_IMG_Y)},1},
				{{__EVAL(1783/SCALE_IMG + OFFSET_IMG_X), __EVAL(1410/SCALE_IMG + OFFSET_IMG_Y)},1},
				{{__EVAL(2023/SCALE_IMG + OFFSET_IMG_X), __EVAL(1410/SCALE_IMG + OFFSET_IMG_Y)},1},
				{{__EVAL(2023/SCALE_IMG + OFFSET_IMG_X), __EVAL(1490/SCALE_IMG + OFFSET_IMG_Y)},1},{},

				//name":"chaff","points":

				{{__EVAL(893/SCALE_IMG + OFFSET_IMG_X), __EVAL(1268/SCALE_IMG + OFFSET_IMG_Y)},1},
				{{__EVAL(899/SCALE_IMG + OFFSET_IMG_X), __EVAL(1250/SCALE_IMG + OFFSET_IMG_Y)},1},
				{{__EVAL(910/SCALE_IMG + OFFSET_IMG_X), __EVAL(1238/SCALE_IMG + OFFSET_IMG_Y)},1},
				{{__EVAL(927/SCALE_IMG + OFFSET_IMG_X), __EVAL(1229/SCALE_IMG + OFFSET_IMG_Y)},1},
				{{__EVAL(1118/SCALE_IMG + OFFSET_IMG_X), __EVAL(1229/SCALE_IMG + OFFSET_IMG_Y)},1},
				{{__EVAL(1132/SCALE_IMG + OFFSET_IMG_X), __EVAL(1237/SCALE_IMG + OFFSET_IMG_Y)},1},
				{{__EVAL(1147/SCALE_IMG + OFFSET_IMG_X), __EVAL(1252/SCALE_IMG + OFFSET_IMG_Y)},1},
				{{__EVAL(1150/SCALE_IMG + OFFSET_IMG_X), __EVAL(1276/SCALE_IMG + OFFSET_IMG_Y)},1},
				{{__EVAL(1150/SCALE_IMG + OFFSET_IMG_X), __EVAL(1479/SCALE_IMG + OFFSET_IMG_Y)},1},
				{{__EVAL(1149/SCALE_IMG + OFFSET_IMG_X), __EVAL(1494/SCALE_IMG + OFFSET_IMG_Y)},1},
				{{__EVAL(1136/SCALE_IMG + OFFSET_IMG_X), __EVAL(1512/SCALE_IMG + OFFSET_IMG_Y)},1},
				{{__EVAL(1115/SCALE_IMG + OFFSET_IMG_X), __EVAL(1523/SCALE_IMG + OFFSET_IMG_Y)},1},
				{{__EVAL(923/SCALE_IMG + OFFSET_IMG_X), __EVAL(1523/SCALE_IMG + OFFSET_IMG_Y)},1},
				{{__EVAL(909/SCALE_IMG + OFFSET_IMG_X), __EVAL(1513/SCALE_IMG + OFFSET_IMG_Y)},1},
				{{__EVAL(896/SCALE_IMG + OFFSET_IMG_X), __EVAL(1497/SCALE_IMG + OFFSET_IMG_Y)},1},
				{{__EVAL(893/SCALE_IMG + OFFSET_IMG_X), __EVAL(1479/SCALE_IMG + OFFSET_IMG_Y)},1},
				{{__EVAL(893/SCALE_IMG + OFFSET_IMG_X), __EVAL(1268/SCALE_IMG + OFFSET_IMG_Y)},1},{},

				//name":"sight tads","points":

				{{__EVAL(531/SCALE_IMG + OFFSET_IMG_X), __EVAL(300/SCALE_IMG + OFFSET_IMG_Y)},1},
				{{__EVAL(536/SCALE_IMG + OFFSET_IMG_X), __EVAL(283/SCALE_IMG + OFFSET_IMG_Y)},1},
				{{__EVAL(548/SCALE_IMG + OFFSET_IMG_X), __EVAL(269/SCALE_IMG + OFFSET_IMG_Y)},1},
				{{__EVAL(570/SCALE_IMG + OFFSET_IMG_X), __EVAL(260/SCALE_IMG + OFFSET_IMG_Y)},1},
				{{__EVAL(749/SCALE_IMG + OFFSET_IMG_X), __EVAL(260/SCALE_IMG + OFFSET_IMG_Y)},1},
				{{__EVAL(775/SCALE_IMG + OFFSET_IMG_X), __EVAL(269/SCALE_IMG + OFFSET_IMG_Y)},1},
				{{__EVAL(786/SCALE_IMG + OFFSET_IMG_X), __EVAL(283/SCALE_IMG + OFFSET_IMG_Y)},1},
				{{__EVAL(791/SCALE_IMG + OFFSET_IMG_X), __EVAL(300/SCALE_IMG + OFFSET_IMG_Y)},1},
				{{__EVAL(791/SCALE_IMG + OFFSET_IMG_X), __EVAL(421/SCALE_IMG + OFFSET_IMG_Y)},1},
				{{__EVAL(786/SCALE_IMG + OFFSET_IMG_X), __EVAL(439/SCALE_IMG + OFFSET_IMG_Y)},1},
				{{__EVAL(775/SCALE_IMG + OFFSET_IMG_X), __EVAL(452/SCALE_IMG + OFFSET_IMG_Y)},1},
				{{__EVAL(749/SCALE_IMG + OFFSET_IMG_X), __EVAL(462/SCALE_IMG + OFFSET_IMG_Y)},1},
				{{__EVAL(570/SCALE_IMG + OFFSET_IMG_X), __EVAL(462/SCALE_IMG + OFFSET_IMG_Y)},1},
				{{__EVAL(548/SCALE_IMG + OFFSET_IMG_X), __EVAL(452/SCALE_IMG + OFFSET_IMG_Y)},1},
				{{__EVAL(536/SCALE_IMG + OFFSET_IMG_X), __EVAL(439/SCALE_IMG + OFFSET_IMG_Y)},1},
				{{__EVAL(531/SCALE_IMG + OFFSET_IMG_X), __EVAL(421/SCALE_IMG + OFFSET_IMG_Y)},1},
				{{__EVAL(531/SCALE_IMG + OFFSET_IMG_X), __EVAL(300/SCALE_IMG + OFFSET_IMG_Y)},1},{},

				//name":"acq","points":

				{{__EVAL(1257/SCALE_IMG + OFFSET_IMG_X), __EVAL(300/SCALE_IMG + OFFSET_IMG_Y)},1},
				{{__EVAL(1262/SCALE_IMG + OFFSET_IMG_X), __EVAL(283/SCALE_IMG + OFFSET_IMG_Y)},1},
				{{__EVAL(1274/SCALE_IMG + OFFSET_IMG_X), __EVAL(269/SCALE_IMG + OFFSET_IMG_Y)},1},
				{{__EVAL(1297/SCALE_IMG + OFFSET_IMG_X), __EVAL(260/SCALE_IMG + OFFSET_IMG_Y)},1},
				{{__EVAL(1475/SCALE_IMG + OFFSET_IMG_X), __EVAL(260/SCALE_IMG + OFFSET_IMG_Y)},1},
				{{__EVAL(1502/SCALE_IMG + OFFSET_IMG_X), __EVAL(269/SCALE_IMG + OFFSET_IMG_Y)},1},
				{{__EVAL(1512/SCALE_IMG + OFFSET_IMG_X), __EVAL(283/SCALE_IMG + OFFSET_IMG_Y)},1},
				{{__EVAL(1517/SCALE_IMG + OFFSET_IMG_X), __EVAL(300/SCALE_IMG + OFFSET_IMG_Y)},1},
				{{__EVAL(1517/SCALE_IMG + OFFSET_IMG_X), __EVAL(421/SCALE_IMG + OFFSET_IMG_Y)},1},
				{{__EVAL(1512/SCALE_IMG + OFFSET_IMG_X), __EVAL(439/SCALE_IMG + OFFSET_IMG_Y)},1},
				{{__EVAL(1502/SCALE_IMG + OFFSET_IMG_X), __EVAL(452/SCALE_IMG + OFFSET_IMG_Y)},1},
				{{__EVAL(1475/SCALE_IMG + OFFSET_IMG_X), __EVAL(462/SCALE_IMG + OFFSET_IMG_Y)},1},
				{{__EVAL(1297/SCALE_IMG + OFFSET_IMG_X), __EVAL(462/SCALE_IMG + OFFSET_IMG_Y)},1},
				{{__EVAL(1274/SCALE_IMG + OFFSET_IMG_X), __EVAL(452/SCALE_IMG + OFFSET_IMG_Y)},1},
				{{__EVAL(1262/SCALE_IMG + OFFSET_IMG_X), __EVAL(439/SCALE_IMG + OFFSET_IMG_Y)},1},
				{{__EVAL(1257/SCALE_IMG + OFFSET_IMG_X), __EVAL(421/SCALE_IMG + OFFSET_IMG_Y)},1},
				{{__EVAL(1257/SCALE_IMG + OFFSET_IMG_X), __EVAL(300/SCALE_IMG + OFFSET_IMG_Y)},1},{},

				//name":"lrfd","points":

				{{__EVAL(1305/SCALE_IMG + OFFSET_IMG_X), __EVAL(549/SCALE_IMG + OFFSET_IMG_Y)},1},
				{{__EVAL(1310/SCALE_IMG + OFFSET_IMG_X), __EVAL(534/SCALE_IMG + OFFSET_IMG_Y)},1},
				{{__EVAL(1319/SCALE_IMG + OFFSET_IMG_X), __EVAL(522/SCALE_IMG + OFFSET_IMG_Y)},1},
				{{__EVAL(1337/SCALE_IMG + OFFSET_IMG_X), __EVAL(514/SCALE_IMG + OFFSET_IMG_Y)},1},
				{{__EVAL(1482/SCALE_IMG + OFFSET_IMG_X), __EVAL(514/SCALE_IMG + OFFSET_IMG_Y)},1},
				{{__EVAL(1504/SCALE_IMG + OFFSET_IMG_X), __EVAL(522/SCALE_IMG + OFFSET_IMG_Y)},1},
				{{__EVAL(1512/SCALE_IMG + OFFSET_IMG_X), __EVAL(534/SCALE_IMG + OFFSET_IMG_Y)},1},
				{{__EVAL(1516/SCALE_IMG + OFFSET_IMG_X), __EVAL(549/SCALE_IMG + OFFSET_IMG_Y)},1},
				{{__EVAL(1516/SCALE_IMG + OFFSET_IMG_X), __EVAL(654/SCALE_IMG + OFFSET_IMG_Y)},1},
				{{__EVAL(1512/SCALE_IMG + OFFSET_IMG_X), __EVAL(669/SCALE_IMG + OFFSET_IMG_Y)},1},
				{{__EVAL(1504/SCALE_IMG + OFFSET_IMG_X), __EVAL(680/SCALE_IMG + OFFSET_IMG_Y)},1},
				{{__EVAL(1482/SCALE_IMG + OFFSET_IMG_X), __EVAL(689/SCALE_IMG + OFFSET_IMG_Y)},1},
				{{__EVAL(1337/SCALE_IMG + OFFSET_IMG_X), __EVAL(689/SCALE_IMG + OFFSET_IMG_Y)},1},
				{{__EVAL(1319/SCALE_IMG + OFFSET_IMG_X), __EVAL(680/SCALE_IMG + OFFSET_IMG_Y)},1},
				{{__EVAL(1310/SCALE_IMG + OFFSET_IMG_X), __EVAL(669/SCALE_IMG + OFFSET_IMG_Y)},1},
				{{__EVAL(1305/SCALE_IMG + OFFSET_IMG_X), __EVAL(654/SCALE_IMG + OFFSET_IMG_Y)},1},
				{{__EVAL(1305/SCALE_IMG + OFFSET_IMG_X), __EVAL(549/SCALE_IMG + OFFSET_IMG_Y)},1},{},

				//name":"lst g","points":

				{{__EVAL(531/SCALE_IMG + OFFSET_IMG_X), __EVAL(549/SCALE_IMG + OFFSET_IMG_Y)},1},
				{{__EVAL(535/SCALE_IMG + OFFSET_IMG_X), __EVAL(534/SCALE_IMG + OFFSET_IMG_Y)},1},
				{{__EVAL(544/SCALE_IMG + OFFSET_IMG_X), __EVAL(522/SCALE_IMG + OFFSET_IMG_Y)},1},
				{{__EVAL(563/SCALE_IMG + OFFSET_IMG_X), __EVAL(514/SCALE_IMG + OFFSET_IMG_Y)},1},
				{{__EVAL(708/SCALE_IMG + OFFSET_IMG_X), __EVAL(514/SCALE_IMG + OFFSET_IMG_Y)},1},
				{{__EVAL(729/SCALE_IMG + OFFSET_IMG_X), __EVAL(522/SCALE_IMG + OFFSET_IMG_Y)},1},
				{{__EVAL(738/SCALE_IMG + OFFSET_IMG_X), __EVAL(534/SCALE_IMG + OFFSET_IMG_Y)},1},
				{{__EVAL(742/SCALE_IMG + OFFSET_IMG_X), __EVAL(549/SCALE_IMG + OFFSET_IMG_Y)},1},
				{{__EVAL(742/SCALE_IMG + OFFSET_IMG_X), __EVAL(654/SCALE_IMG + OFFSET_IMG_Y)},1},
				{{__EVAL(738/SCALE_IMG + OFFSET_IMG_X), __EVAL(669/SCALE_IMG + OFFSET_IMG_Y)},1},
				{{__EVAL(729/SCALE_IMG + OFFSET_IMG_X), __EVAL(680/SCALE_IMG + OFFSET_IMG_Y)},1},
				{{__EVAL(708/SCALE_IMG + OFFSET_IMG_X), __EVAL(689/SCALE_IMG + OFFSET_IMG_Y)},1},
				{{__EVAL(563/SCALE_IMG + OFFSET_IMG_X), __EVAL(689/SCALE_IMG + OFFSET_IMG_Y)},1},
				{{__EVAL(544/SCALE_IMG + OFFSET_IMG_X), __EVAL(680/SCALE_IMG + OFFSET_IMG_Y)},1},
				{{__EVAL(535/SCALE_IMG + OFFSET_IMG_X), __EVAL(669/SCALE_IMG + OFFSET_IMG_Y)},1},
				{{__EVAL(531/SCALE_IMG + OFFSET_IMG_X), __EVAL(654/SCALE_IMG + OFFSET_IMG_Y)},1},
				{{__EVAL(531/SCALE_IMG + OFFSET_IMG_X), __EVAL(549/SCALE_IMG + OFFSET_IMG_Y)},1},{},

				//name":"PathItem","points":

				{{__EVAL(1010/SCALE_IMG + OFFSET_IMG_X), __EVAL(522/SCALE_IMG + OFFSET_IMG_Y)},1},
				{{__EVAL(1010/SCALE_IMG + OFFSET_IMG_X), __EVAL(483/SCALE_IMG + OFFSET_IMG_Y)},1},
				{{__EVAL(1037/SCALE_IMG + OFFSET_IMG_X), __EVAL(483/SCALE_IMG + OFFSET_IMG_Y)},1},
				{{__EVAL(1037/SCALE_IMG + OFFSET_IMG_X), __EVAL(522/SCALE_IMG + OFFSET_IMG_Y)},1},
				{{__EVAL(1010/SCALE_IMG + OFFSET_IMG_X), __EVAL(522/SCALE_IMG + OFFSET_IMG_Y)},1},{},

				//name":"PathItem","points":

				{{__EVAL(1013/SCALE_IMG + OFFSET_IMG_X), __EVAL(637/SCALE_IMG + OFFSET_IMG_Y)},1},
				{{__EVAL(1013/SCALE_IMG + OFFSET_IMG_X), __EVAL(522/SCALE_IMG + OFFSET_IMG_Y)},1},
				{{__EVAL(1034/SCALE_IMG + OFFSET_IMG_X), __EVAL(522/SCALE_IMG + OFFSET_IMG_Y)},1},
				{{__EVAL(1034/SCALE_IMG + OFFSET_IMG_X), __EVAL(637/SCALE_IMG + OFFSET_IMG_Y)},1},
				{{__EVAL(1013/SCALE_IMG + OFFSET_IMG_X), __EVAL(637/SCALE_IMG + OFFSET_IMG_Y)},1},{},

				//name":"PathItem","points":

				{{__EVAL(978/SCALE_IMG + OFFSET_IMG_X), __EVAL(766/SCALE_IMG + OFFSET_IMG_Y)},1},
				{{__EVAL(978/SCALE_IMG + OFFSET_IMG_X), __EVAL(655/SCALE_IMG + OFFSET_IMG_Y)},1},
				{{__EVAL(985/SCALE_IMG + OFFSET_IMG_X), __EVAL(643/SCALE_IMG + OFFSET_IMG_Y)},1},
				{{__EVAL(998/SCALE_IMG + OFFSET_IMG_X), __EVAL(637/SCALE_IMG + OFFSET_IMG_Y)},1},
				{{__EVAL(1051/SCALE_IMG + OFFSET_IMG_X), __EVAL(637/SCALE_IMG + OFFSET_IMG_Y)},1},
				{{__EVAL(1063/SCALE_IMG + OFFSET_IMG_X), __EVAL(644/SCALE_IMG + OFFSET_IMG_Y)},1},
				{{__EVAL(1070/SCALE_IMG + OFFSET_IMG_X), __EVAL(655/SCALE_IMG + OFFSET_IMG_Y)},1},
				{{__EVAL(1070/SCALE_IMG + OFFSET_IMG_X), __EVAL(766/SCALE_IMG + OFFSET_IMG_Y)},1},
				{{__EVAL(978/SCALE_IMG + OFFSET_IMG_X), __EVAL(766/SCALE_IMG + OFFSET_IMG_Y)},1},{},

				//name":"PathItem","points":

				{{__EVAL(898/SCALE_IMG + OFFSET_IMG_X), __EVAL(766/SCALE_IMG + OFFSET_IMG_Y)},1},
				{{__EVAL(1148/SCALE_IMG + OFFSET_IMG_X), __EVAL(766/SCALE_IMG + OFFSET_IMG_Y)},1},
				{{__EVAL(1148/SCALE_IMG + OFFSET_IMG_X), __EVAL(882/SCALE_IMG + OFFSET_IMG_Y)},1},
				{{__EVAL(898/SCALE_IMG + OFFSET_IMG_X), __EVAL(882/SCALE_IMG + OFFSET_IMG_Y)},1},
				{{__EVAL(898/SCALE_IMG + OFFSET_IMG_X), __EVAL(766/SCALE_IMG + OFFSET_IMG_Y)},1},{},

				//name":"heli shape","points":

				{{__EVAL(862/SCALE_IMG + OFFSET_IMG_X), __EVAL(1550/SCALE_IMG + OFFSET_IMG_Y)},1},
				{{__EVAL(859/SCALE_IMG + OFFSET_IMG_X), __EVAL(1178/SCALE_IMG + OFFSET_IMG_Y)},1},
				{{__EVAL(386/SCALE_IMG + OFFSET_IMG_X), __EVAL(1126/SCALE_IMG + OFFSET_IMG_Y)},1},
				{{__EVAL(386/SCALE_IMG + OFFSET_IMG_X), __EVAL(932/SCALE_IMG + OFFSET_IMG_Y)},1},
				{{__EVAL(858/SCALE_IMG + OFFSET_IMG_X), __EVAL(894/SCALE_IMG + OFFSET_IMG_Y)},1},
				{{__EVAL(858/SCALE_IMG + OFFSET_IMG_X), __EVAL(582/SCALE_IMG + OFFSET_IMG_Y)},1},
				{{__EVAL(869/SCALE_IMG + OFFSET_IMG_X), __EVAL(544/SCALE_IMG + OFFSET_IMG_Y)},1},
				{{__EVAL(879/SCALE_IMG + OFFSET_IMG_X), __EVAL(531/SCALE_IMG + OFFSET_IMG_Y)},1},
				{{__EVAL(897/SCALE_IMG + OFFSET_IMG_X), __EVAL(513/SCALE_IMG + OFFSET_IMG_Y)},1},
				{{__EVAL(925/SCALE_IMG + OFFSET_IMG_X), __EVAL(497/SCALE_IMG + OFFSET_IMG_Y)},1},
				{{__EVAL(944/SCALE_IMG + OFFSET_IMG_X), __EVAL(491/SCALE_IMG + OFFSET_IMG_Y)},1},
				{{__EVAL(960/SCALE_IMG + OFFSET_IMG_X), __EVAL(489/SCALE_IMG + OFFSET_IMG_Y)},1},
				{{__EVAL(961/SCALE_IMG + OFFSET_IMG_X), __EVAL(489/SCALE_IMG + OFFSET_IMG_Y)},1},
				{{__EVAL(961/SCALE_IMG + OFFSET_IMG_X), __EVAL(480/SCALE_IMG + OFFSET_IMG_Y)},1},
				{{__EVAL(965/SCALE_IMG + OFFSET_IMG_X), __EVAL(471/SCALE_IMG + OFFSET_IMG_Y)},1},
				{{__EVAL(969/SCALE_IMG + OFFSET_IMG_X), __EVAL(461/SCALE_IMG + OFFSET_IMG_Y)},1},
				{{__EVAL(976/SCALE_IMG + OFFSET_IMG_X), __EVAL(452/SCALE_IMG + OFFSET_IMG_Y)},1},
				{{__EVAL(987/SCALE_IMG + OFFSET_IMG_X), __EVAL(443/SCALE_IMG + OFFSET_IMG_Y)},1},
				{{__EVAL(999/SCALE_IMG + OFFSET_IMG_X), __EVAL(439/SCALE_IMG + OFFSET_IMG_Y)},1},
				{{__EVAL(1007/SCALE_IMG + OFFSET_IMG_X), __EVAL(437/SCALE_IMG + OFFSET_IMG_Y)},1},
				{{__EVAL(1040/SCALE_IMG + OFFSET_IMG_X), __EVAL(437/SCALE_IMG + OFFSET_IMG_Y)},1},
				{{__EVAL(1052/SCALE_IMG + OFFSET_IMG_X), __EVAL(440/SCALE_IMG + OFFSET_IMG_Y)},1},
				{{__EVAL(1064/SCALE_IMG + OFFSET_IMG_X), __EVAL(445/SCALE_IMG + OFFSET_IMG_Y)},1},
				{{__EVAL(1072/SCALE_IMG + OFFSET_IMG_X), __EVAL(451/SCALE_IMG + OFFSET_IMG_Y)},1},
				{{__EVAL(1079/SCALE_IMG + OFFSET_IMG_X), __EVAL(460/SCALE_IMG + OFFSET_IMG_Y)},1},
				{{__EVAL(1085/SCALE_IMG + OFFSET_IMG_X), __EVAL(470/SCALE_IMG + OFFSET_IMG_Y)},1},
				{{__EVAL(1088/SCALE_IMG + OFFSET_IMG_X), __EVAL(481/SCALE_IMG + OFFSET_IMG_Y)},1},
				{{__EVAL(1088/SCALE_IMG + OFFSET_IMG_X), __EVAL(490/SCALE_IMG + OFFSET_IMG_Y)},1},
				{{__EVAL(1103/SCALE_IMG + OFFSET_IMG_X), __EVAL(491/SCALE_IMG + OFFSET_IMG_Y)},1},
				{{__EVAL(1120/SCALE_IMG + OFFSET_IMG_X), __EVAL(495/SCALE_IMG + OFFSET_IMG_Y)},1},
				{{__EVAL(1138/SCALE_IMG + OFFSET_IMG_X), __EVAL(504/SCALE_IMG + OFFSET_IMG_Y)},1},
				{{__EVAL(1152/SCALE_IMG + OFFSET_IMG_X), __EVAL(513/SCALE_IMG + OFFSET_IMG_Y)},1},
				{{__EVAL(1166/SCALE_IMG + OFFSET_IMG_X), __EVAL(527/SCALE_IMG + OFFSET_IMG_Y)},1},
				{{__EVAL(1175/SCALE_IMG + OFFSET_IMG_X), __EVAL(542/SCALE_IMG + OFFSET_IMG_Y)},1},
				{{__EVAL(1181/SCALE_IMG + OFFSET_IMG_X), __EVAL(556/SCALE_IMG + OFFSET_IMG_Y)},1},
				{{__EVAL(1185/SCALE_IMG + OFFSET_IMG_X), __EVAL(569/SCALE_IMG + OFFSET_IMG_Y)},1},
				{{__EVAL(1187/SCALE_IMG + OFFSET_IMG_X), __EVAL(582/SCALE_IMG + OFFSET_IMG_Y)},1},
				{{__EVAL(1188/SCALE_IMG + OFFSET_IMG_X), __EVAL(895/SCALE_IMG + OFFSET_IMG_Y)},1},
				{{__EVAL(1661/SCALE_IMG + OFFSET_IMG_X), __EVAL(933/SCALE_IMG + OFFSET_IMG_Y)},1},
				{{__EVAL(1661/SCALE_IMG + OFFSET_IMG_X), __EVAL(1127/SCALE_IMG + OFFSET_IMG_Y)},1},
				{{__EVAL(1188/SCALE_IMG + OFFSET_IMG_X), __EVAL(1180/SCALE_IMG + OFFSET_IMG_Y)},1},
				{{__EVAL(1187/SCALE_IMG + OFFSET_IMG_X), __EVAL(1550/SCALE_IMG + OFFSET_IMG_Y)},1},
				{{__EVAL(862/SCALE_IMG + OFFSET_IMG_X), __EVAL(1550/SCALE_IMG + OFFSET_IMG_Y)},1},{},

				// Line Util
				{{0.8, __EVAL(0.014)}, 1},
				{{0.87, __EVAL(0.014)}, 1},{},
				// Line Coordinates
				{{0.68, __EVAL(0.014)}, 1},
				{{0.76, __EVAL(0.014)}, 1},{},
				// Line Code
				{{0.51, __EVAL(0.014)}, 1},
				{{0.61, __EVAL(0.014)}, 1},{},
				// Line ASE
				{{0.135, __EVAL(0.014)}, 1},
				{{0.2, __EVAL(0.014)}, 1},{},
				// Line channel
				{{0.265, __EVAL(0.014)}, 1},
				{{0.33, __EVAL(0.014)}, 1},{},

			};
		};
		class StaticBold
		{
			type			= line;
			width			= 10.0;
			points[]		=
			{
			};
		};
		class StaticThin
		{
			type			= line;
			width			= 2.0;
			points[]		=
			{
			};
		};
		class Polygons
		{
			type			= polygon;
			width			= 4.0;

			points[]		=
			{
				// Util arrow
				{
					{ {__EVAL(0.85+0.02), __EVAL(0.6*0.488	-0.286)}, 1},
					{ {__EVAL(0.87+0.02), __EVAL(0.6*0.50	-0.286)}, 1},
					{ {__EVAL(0.85+0.02), __EVAL(0.6*0.512	-0.286)}, 1},
				},
				// Coordinates arrow
				{
					{ {__EVAL(0.85-0.1), __EVAL(0.6*0.488	-0.286)}, 1},
					{ {__EVAL(0.87-0.1), __EVAL(0.6*0.50	-0.286)}, 1},
					{ {__EVAL(0.85-0.1), __EVAL(0.6*0.512	-0.286)}, 1},
				},
				// Code arrow
				{
					{ {__EVAL(0.85-0.26), __EVAL(0.6*0.488	-0.286)}, 1},
					{ {__EVAL(0.87-0.26), __EVAL(0.6*0.50	-0.286)}, 1},
					{ {__EVAL(0.85-0.26), __EVAL(0.6*0.512	-0.286)}, 1},
				},
				// ASE arrow
				{
					{ {__EVAL(0.85-0.53), __EVAL(0.6*0.488	-0.286)}, 1},
					{ {__EVAL(0.87-0.53), __EVAL(0.6*0.50	-0.286)}, 1},
					{ {__EVAL(0.85-0.53), __EVAL(0.6*0.512	-0.286)}, 1},
				},
				// Channel arrow
				{
					{ {__EVAL(0.85-0.66), __EVAL(0.6*0.488	-0.286)}, 1},
					{ {__EVAL(0.87-0.66), __EVAL(0.6*0.50	-0.286)}, 1},
					{ {__EVAL(0.85-0.66), __EVAL(0.6*0.512	-0.286)}, 1},
				},
			};
		};

		class Safemode
		{
			condition = "1-(bomb+mgun+atmissile+aamissile+rocket)";
			HUD_TEXT_STATIC(0.005,	0.683		,0.027,0.03,right,"BORESIGHT",Boresight)
			HUD_TEXT_STATIC(0.005,	0.8		,0.027,0.03,right,"GRAYSCALE",Grayscale)
			HUD_TEXT_STATIC(0.503,	0.11				,0.03,0.03,center,"SAFE",Safemode)
			class Static
			{
				type			= line;
				width			= 5.0;
				points[]		=
				{
					//name":"safe","points":

					{{__EVAL(877/SCALE_IMG + OFFSET_IMG_X), __EVAL(206/SCALE_IMG + OFFSET_IMG_Y)},1},
					{{__EVAL(884/SCALE_IMG + OFFSET_IMG_X), __EVAL(187/SCALE_IMG + OFFSET_IMG_Y)},1},
					{{__EVAL(896/SCALE_IMG + OFFSET_IMG_X), __EVAL(175/SCALE_IMG + OFFSET_IMG_Y)},1},
					{{__EVAL(915/SCALE_IMG + OFFSET_IMG_X), __EVAL(168/SCALE_IMG + OFFSET_IMG_Y)},1},
					{{__EVAL(1133/SCALE_IMG + OFFSET_IMG_X), __EVAL(168/SCALE_IMG + OFFSET_IMG_Y)},1},
					{{__EVAL(1155/SCALE_IMG + OFFSET_IMG_X), __EVAL(178/SCALE_IMG + OFFSET_IMG_Y)},1},
					{{__EVAL(1166/SCALE_IMG + OFFSET_IMG_X), __EVAL(191/SCALE_IMG + OFFSET_IMG_Y)},1},
					{{__EVAL(1170/SCALE_IMG + OFFSET_IMG_X), __EVAL(210/SCALE_IMG + OFFSET_IMG_Y)},1},
					{{__EVAL(1170/SCALE_IMG + OFFSET_IMG_X), __EVAL(336/SCALE_IMG + OFFSET_IMG_Y)},1},
					{{__EVAL(1166/SCALE_IMG + OFFSET_IMG_X), __EVAL(352/SCALE_IMG + OFFSET_IMG_Y)},1},
					{{__EVAL(1154/SCALE_IMG + OFFSET_IMG_X), __EVAL(365/SCALE_IMG + OFFSET_IMG_Y)},1},
					{{__EVAL(1130/SCALE_IMG + OFFSET_IMG_X), __EVAL(374/SCALE_IMG + OFFSET_IMG_Y)},1},
					{{__EVAL(910/SCALE_IMG + OFFSET_IMG_X), __EVAL(374/SCALE_IMG + OFFSET_IMG_Y)},1},
					{{__EVAL(893/SCALE_IMG + OFFSET_IMG_X), __EVAL(365/SCALE_IMG + OFFSET_IMG_Y)},1},
					{{__EVAL(881/SCALE_IMG + OFFSET_IMG_X), __EVAL(351/SCALE_IMG + OFFSET_IMG_Y)},1},
					{{__EVAL(877/SCALE_IMG + OFFSET_IMG_X), __EVAL(336/SCALE_IMG + OFFSET_IMG_Y)},1},
					{{__EVAL(877/SCALE_IMG + OFFSET_IMG_X), __EVAL(206/SCALE_IMG + OFFSET_IMG_Y)},1},{},

					//name":"boresight arrow","points":

					{{__EVAL(41/SCALE_IMG + OFFSET_IMG_X), __EVAL(1373/SCALE_IMG + OFFSET_IMG_Y)},1},
					{{__EVAL(434/SCALE_IMG + OFFSET_IMG_X), __EVAL(1373/SCALE_IMG + OFFSET_IMG_Y)},1},{},

				};
			};
			class Polygons
			{
				type			= polygon;
				width			= 4.0;

				points[]		=
				{
					// Boresight arrow
					{
						{ {__EVAL(0.85-0.655), __EVAL(0.6*0.488	+0.373)}, 1},
						{ {__EVAL(0.87-0.655), __EVAL(0.6*0.50	+0.373)}, 1},
						{ {__EVAL(0.85-0.655), __EVAL(0.6*0.512	+0.373)}, 1},
					},
				};
			};
		};
		class Armed
		{
			condition = "(bomb+mgun+missile+rocket)";
			color[] = {1,0.3,0};
			alpha = 0.3;
			class Static
			{
				type			= line;
				width			= 12.0;
				points[]		=
				{
					//name":"safe","points":

					{{__EVAL(877/SCALE_IMG + OFFSET_IMG_X), __EVAL(206/SCALE_IMG + OFFSET_IMG_Y)},1},
					{{__EVAL(884/SCALE_IMG + OFFSET_IMG_X), __EVAL(187/SCALE_IMG + OFFSET_IMG_Y)},1},
					{{__EVAL(896/SCALE_IMG + OFFSET_IMG_X), __EVAL(175/SCALE_IMG + OFFSET_IMG_Y)},1},
					{{__EVAL(915/SCALE_IMG + OFFSET_IMG_X), __EVAL(168/SCALE_IMG + OFFSET_IMG_Y)},1},
					{{__EVAL(1133/SCALE_IMG + OFFSET_IMG_X), __EVAL(168/SCALE_IMG + OFFSET_IMG_Y)},1},
					{{__EVAL(1155/SCALE_IMG + OFFSET_IMG_X), __EVAL(178/SCALE_IMG + OFFSET_IMG_Y)},1},
					{{__EVAL(1166/SCALE_IMG + OFFSET_IMG_X), __EVAL(191/SCALE_IMG + OFFSET_IMG_Y)},1},
					{{__EVAL(1170/SCALE_IMG + OFFSET_IMG_X), __EVAL(210/SCALE_IMG + OFFSET_IMG_Y)},1},
					{{__EVAL(1170/SCALE_IMG + OFFSET_IMG_X), __EVAL(336/SCALE_IMG + OFFSET_IMG_Y)},1},
					{{__EVAL(1166/SCALE_IMG + OFFSET_IMG_X), __EVAL(352/SCALE_IMG + OFFSET_IMG_Y)},1},
					{{__EVAL(1154/SCALE_IMG + OFFSET_IMG_X), __EVAL(365/SCALE_IMG + OFFSET_IMG_Y)},1},
					{{__EVAL(1130/SCALE_IMG + OFFSET_IMG_X), __EVAL(374/SCALE_IMG + OFFSET_IMG_Y)},1},
					{{__EVAL(910/SCALE_IMG + OFFSET_IMG_X), __EVAL(374/SCALE_IMG + OFFSET_IMG_Y)},1},
					{{__EVAL(893/SCALE_IMG + OFFSET_IMG_X), __EVAL(365/SCALE_IMG + OFFSET_IMG_Y)},1},
					{{__EVAL(881/SCALE_IMG + OFFSET_IMG_X), __EVAL(351/SCALE_IMG + OFFSET_IMG_Y)},1},
					{{__EVAL(877/SCALE_IMG + OFFSET_IMG_X), __EVAL(336/SCALE_IMG + OFFSET_IMG_Y)},1},
					{{__EVAL(877/SCALE_IMG + OFFSET_IMG_X), __EVAL(206/SCALE_IMG + OFFSET_IMG_Y)},1},{}
				};
			};
			class Polygons
			{
				type			= polygon;
				width			= 4.0;

				points[]		=
				{
					// Arm Box
					{
						POLYGON_BOX(0.14,0.1,0.43,0.075)
					},
				};
			};
			class BlackText
			{
				color[] = {0,0,0};
				alpha = 1;
				HUD_TEXT_STATIC(0.503,	0.11				,0.04,0.04,center,"ARM",Safemode)
				HUD_TEXT_STATIC(0.503,	0.11				,0.041,0.041,center,"ARM",Safemode1)
			};
		};
		class Rockets
		{
			condition = "rocket";

			class White
			{
				color[] = {1,1,1};
				HUD_TEXT_STATIC(0.503,	0.78				,0.026,0.028,center,"TOTAL ROCKETS",RocketCount)
				HUD_TEXT_SOURCE(0.503,	0.82				,0.026,0.028,center,ammo,RocketCountValue)
			};

			HUD_TEXT_STATIC(0.995,	0.17		,0.027,0.03,left,"QTY",Quantity)
			HUD_TEXT_SOURCE(0.995,	0.17+0.04	,0.027,0.03,left,weapon,QuantityValue)
			HUD_TEXT_STATIC(0.995,	0.29		,0.027,0.03,left,"PEN",FuzeSetting)
			HUD_TEXT_STATIC(0.995,	0.29+0.04	,0.027,0.03,left,"SPQ",SuperQuickFuzing)

			//INVENTORY
			HUD_TEXT_STATIC(0.115,0.309+0.03*0		,0.03,0.027,center,"I",INVENTORY1)
			HUD_TEXT_STATIC(0.115,0.309+0.03*1		,0.03,0.027,center,"N",INVENTORY2)
			HUD_TEXT_STATIC(0.115,0.309+0.03*2		,0.03,0.027,center,"V",INVENTORY3)
			HUD_TEXT_STATIC(0.115,0.309+0.03*3		,0.03,0.027,center,"E",INVENTORY4)
			HUD_TEXT_STATIC(0.115,0.309+0.03*4		,0.03,0.027,center,"N",INVENTORY5)
			HUD_TEXT_STATIC(0.115,0.309+0.03*5		,0.03,0.027,center,"T",INVENTORY6)
			HUD_TEXT_STATIC(0.115,0.309+0.03*6		,0.03,0.027,center,"O",INVENTORY7)
			HUD_TEXT_STATIC(0.115,0.309+0.03*7		,0.03,0.027,center,"R",INVENTORY8)
			HUD_TEXT_STATIC(0.115,0.309+0.03*8		,0.03,0.027,center,"Y",INVENTORY9)

			class  Pylon2
			{
				type	= "pylonicon";
				pos[]	= {{0.005, __EVAL(0.15+0.12*0)}, 1};
				pylon	= 2;
				name	= "RHS_AH64_Weap_MFD_Inventory";
			};
			class  Pylon3: Pylon2
			{
				pos[]	= {{0.005, __EVAL(0.15+0.12*1)}, 1};
				pylon	= 3;
			};
			class  Pylon4: Pylon2
			{
				pos[]	= {{0.005, __EVAL(0.15+0.12*2)}, 1};
				pylon	= 5;
			};
			class  Pylon5: Pylon2
			{
				pos[]	= {{0.005, __EVAL(0.15+0.12*3)}, 1};
				pylon	= 4;
			};


			class Static
			{
				type			= line;
				width			= 5.0;
				points[]		=
				{
					//name":"spq","points":

					{{__EVAL(2025/SCALE_IMG + OFFSET_IMG_X), __EVAL(753/SCALE_IMG + OFFSET_IMG_Y)},1},
					{{__EVAL(1871/SCALE_IMG + OFFSET_IMG_X), __EVAL(753/SCALE_IMG + OFFSET_IMG_Y)},1},
					{{__EVAL(1871/SCALE_IMG + OFFSET_IMG_X), __EVAL(673/SCALE_IMG + OFFSET_IMG_Y)},1},
					{{__EVAL(2025/SCALE_IMG + OFFSET_IMG_X), __EVAL(673/SCALE_IMG + OFFSET_IMG_Y)},1},
					{{__EVAL(2025/SCALE_IMG + OFFSET_IMG_X), __EVAL(753/SCALE_IMG + OFFSET_IMG_Y)},1},{},

					//name":"rkt","points":

					{{__EVAL(1495/SCALE_IMG + OFFSET_IMG_X), __EVAL(2025/SCALE_IMG + OFFSET_IMG_Y)},1},
					{{__EVAL(1342/SCALE_IMG + OFFSET_IMG_X), __EVAL(2025/SCALE_IMG + OFFSET_IMG_Y)},1},
					{{__EVAL(1342/SCALE_IMG + OFFSET_IMG_X), __EVAL(1943/SCALE_IMG + OFFSET_IMG_Y)},1},
					{{__EVAL(1495/SCALE_IMG + OFFSET_IMG_X), __EVAL(1943/SCALE_IMG + OFFSET_IMG_Y)},1},
					{{__EVAL(1495/SCALE_IMG + OFFSET_IMG_X), __EVAL(2025/SCALE_IMG + OFFSET_IMG_Y)},1},{},

					//name":"total rockets","points":

					{{__EVAL(724/SCALE_IMG + OFFSET_IMG_X), __EVAL(1594/SCALE_IMG + OFFSET_IMG_Y)},1},
					{{__EVAL(724/SCALE_IMG + OFFSET_IMG_X), __EVAL(1715/SCALE_IMG + OFFSET_IMG_Y)},1},
					{{__EVAL(729/SCALE_IMG + OFFSET_IMG_X), __EVAL(1724/SCALE_IMG + OFFSET_IMG_Y)},1},
					{{__EVAL(740/SCALE_IMG + OFFSET_IMG_X), __EVAL(1736/SCALE_IMG + OFFSET_IMG_Y)},1},
					{{__EVAL(749/SCALE_IMG + OFFSET_IMG_X), __EVAL(1739/SCALE_IMG + OFFSET_IMG_Y)},1},
					{{__EVAL(1304/SCALE_IMG + OFFSET_IMG_X), __EVAL(1739/SCALE_IMG + OFFSET_IMG_Y)},1},
					{{__EVAL(1314/SCALE_IMG + OFFSET_IMG_X), __EVAL(1736/SCALE_IMG + OFFSET_IMG_Y)},1},
					{{__EVAL(1324/SCALE_IMG + OFFSET_IMG_X), __EVAL(1731/SCALE_IMG + OFFSET_IMG_Y)},1},
					{{__EVAL(1332/SCALE_IMG + OFFSET_IMG_X), __EVAL(1715/SCALE_IMG + OFFSET_IMG_Y)},1},
					{{__EVAL(1332/SCALE_IMG + OFFSET_IMG_X), __EVAL(1594/SCALE_IMG + OFFSET_IMG_Y)},1},
					{{__EVAL(1325/SCALE_IMG + OFFSET_IMG_X), __EVAL(1582/SCALE_IMG + OFFSET_IMG_Y)},1},
					{{__EVAL(1314/SCALE_IMG + OFFSET_IMG_X), __EVAL(1572/SCALE_IMG + OFFSET_IMG_Y)},1},
					{{__EVAL(1306/SCALE_IMG + OFFSET_IMG_X), __EVAL(1568/SCALE_IMG + OFFSET_IMG_Y)},1},
					{{__EVAL(748/SCALE_IMG + OFFSET_IMG_X), __EVAL(1568/SCALE_IMG + OFFSET_IMG_Y)},1},
					{{__EVAL(739/SCALE_IMG + OFFSET_IMG_X), __EVAL(1572/SCALE_IMG + OFFSET_IMG_Y)},1},
					{{__EVAL(729/SCALE_IMG + OFFSET_IMG_X), __EVAL(1583/SCALE_IMG + OFFSET_IMG_Y)},1},
					{{__EVAL(724/SCALE_IMG + OFFSET_IMG_X), __EVAL(1594/SCALE_IMG + OFFSET_IMG_Y)},1},{},

					//name":"inventory bottom","points":

					{{__EVAL(33/SCALE_IMG + OFFSET_IMG_X), __EVAL(1531/SCALE_IMG + OFFSET_IMG_Y)},1},
					{{__EVAL(225/SCALE_IMG + OFFSET_IMG_X), __EVAL(1531/SCALE_IMG + OFFSET_IMG_Y)},1},
					{{__EVAL(225/SCALE_IMG + OFFSET_IMG_X), __EVAL(1194/SCALE_IMG + OFFSET_IMG_Y)},1},{},

					//name":"inventory top","points":

					{{__EVAL(33/SCALE_IMG + OFFSET_IMG_X), __EVAL(302/SCALE_IMG + OFFSET_IMG_Y)},1},
					{{__EVAL(225/SCALE_IMG + OFFSET_IMG_X), __EVAL(302/SCALE_IMG + OFFSET_IMG_Y)},1},
					{{__EVAL(225/SCALE_IMG + OFFSET_IMG_X), __EVAL(638/SCALE_IMG + OFFSET_IMG_Y)},1},{},
				};
			};
			class BoxQuantity_1
			{
				condition = "user10<=4";
				class Static
				{
					type			= line;
					width			= 5.0;
					points[]		=
					{
						//name:qty ,points:

						{{__EVAL(2025/SCALE_IMG + OFFSET_IMG_X), __EVAL(505/SCALE_IMG + OFFSET_IMG_Y)},1},
						{{__EVAL(1960/SCALE_IMG + OFFSET_IMG_X), __EVAL(505/SCALE_IMG + OFFSET_IMG_Y)},1},
						{{__EVAL(1960/SCALE_IMG + OFFSET_IMG_X), __EVAL(425/SCALE_IMG + OFFSET_IMG_Y)},1},
						{{__EVAL(2025/SCALE_IMG + OFFSET_IMG_X), __EVAL(425/SCALE_IMG + OFFSET_IMG_Y)},1},
						{{__EVAL(2025/SCALE_IMG + OFFSET_IMG_X), __EVAL(505/SCALE_IMG + OFFSET_IMG_Y)},1},{},
					};
				};
			};
			class BoxQuantity_2: BoxQuantity_1
			{
				condition = "(user10>=5)*(user10<=6)";
				class Static: Static
				{
					points[]		=
					{
						//name:qty ,points:

						{{__EVAL(2025/SCALE_IMG + OFFSET_IMG_X), __EVAL(505/SCALE_IMG + OFFSET_IMG_Y)},1},
						{{__EVAL(1910/SCALE_IMG + OFFSET_IMG_X), __EVAL(505/SCALE_IMG + OFFSET_IMG_Y)},1},
						{{__EVAL(1910/SCALE_IMG + OFFSET_IMG_X), __EVAL(425/SCALE_IMG + OFFSET_IMG_Y)},1},
						{{__EVAL(2025/SCALE_IMG + OFFSET_IMG_X), __EVAL(425/SCALE_IMG + OFFSET_IMG_Y)},1},
						{{__EVAL(2025/SCALE_IMG + OFFSET_IMG_X), __EVAL(505/SCALE_IMG + OFFSET_IMG_Y)},1},{},
					};
				};
			};
			class BoxQuantity_3: BoxQuantity_1
			{
				condition = "(user10>=7)";
				class Static: Static
				{
					points[]		=
					{
						//name:qty ,points:

						{{__EVAL(2025/SCALE_IMG + OFFSET_IMG_X), __EVAL(505/SCALE_IMG + OFFSET_IMG_Y)},1},
						{{__EVAL(1870/SCALE_IMG + OFFSET_IMG_X), __EVAL(505/SCALE_IMG + OFFSET_IMG_Y)},1},
						{{__EVAL(1870/SCALE_IMG + OFFSET_IMG_X), __EVAL(425/SCALE_IMG + OFFSET_IMG_Y)},1},
						{{__EVAL(2025/SCALE_IMG + OFFSET_IMG_X), __EVAL(425/SCALE_IMG + OFFSET_IMG_Y)},1},
						{{__EVAL(2025/SCALE_IMG + OFFSET_IMG_X), __EVAL(505/SCALE_IMG + OFFSET_IMG_Y)},1},{},
					};
				};
			};
		};
		class Mgun
		{
			condition = "mgun";

			HUD_TEXT_STATIC(0.995,	0.29		,0.027,0.03,left,"MODE",GunMode)
			HUD_TEXT_STATIC(0.995,	0.29+0.04	,0.027,0.03,left,"NORM",GunModeValue)

			HUD_TEXT_STATIC(0.503,	0.78				,0.026,0.028,center,"STORE",Store1)
			HUD_TEXT_STATIC(0.503,	0.82				,0.026,0.028,center,"ROUNDS IMPACT",Store2)

			HUD_TEXT_STATIC(0.009,	0.186	,0.027,0.029,right,"10",Mode_1)
			HUD_TEXT_STATIC(0.009,	0.31	,0.027,0.029,right,"20",Mode_2)
			HUD_TEXT_STATIC(0.009,	0.43	,0.027,0.029,right,"50",Mode_3)
			HUD_TEXT_STATIC(0.009,	0.553	,0.027,0.029,right,"100",Mode_4)
			HUD_TEXT_STATIC(0.009,	0.674	,0.027,0.029,right,"ALL",Mode_5)
			HUD_TEXT_STATIC(0.009,	0.8		,0.027,0.029,right,"HARMONIZE",Harmonize)

			class BoxMode_1
			{
				condition = "user10<=0";
				class Static
				{
					type			= line;
					width			= 5.0;
					points[]		=
					{
						{{__EVAL(130/SCALE_IMG + OFFSET_IMG_X), __EVAL(461/SCALE_IMG + OFFSET_IMG_Y)},1},
						{{__EVAL(23/SCALE_IMG + OFFSET_IMG_X), __EVAL(461/SCALE_IMG + OFFSET_IMG_Y)},1},
						{{__EVAL(23/SCALE_IMG + OFFSET_IMG_X), __EVAL(381/SCALE_IMG + OFFSET_IMG_Y)},1},
						{{__EVAL(130/SCALE_IMG + OFFSET_IMG_X), __EVAL(381/SCALE_IMG + OFFSET_IMG_Y)},1},
						{{__EVAL(130/SCALE_IMG + OFFSET_IMG_X), __EVAL(461/SCALE_IMG + OFFSET_IMG_Y)},1},{}
					};
				};
			};
			class BoxMode_2: BoxMode_1
			{
				condition = "(user10>=1)*(user10<=1)";
				class Static: Static
				{
					points[]		=
					{
						{{__EVAL(130/SCALE_IMG + OFFSET_IMG_X), __EVAL(713/SCALE_IMG + OFFSET_IMG_Y)},1},
						{{__EVAL(23/SCALE_IMG + OFFSET_IMG_X), __EVAL(713/SCALE_IMG + OFFSET_IMG_Y)},1},
						{{__EVAL(23/SCALE_IMG + OFFSET_IMG_X), __EVAL(634/SCALE_IMG + OFFSET_IMG_Y)},1},
						{{__EVAL(130/SCALE_IMG + OFFSET_IMG_X), __EVAL(634/SCALE_IMG + OFFSET_IMG_Y)},1},
						{{__EVAL(130/SCALE_IMG + OFFSET_IMG_X), __EVAL(713/SCALE_IMG + OFFSET_IMG_Y)},1},{},
					};
				};
			};
			class BoxMode_3: BoxMode_1
			{
				condition = "(user10>=2)*(user10<=2)";
				class Static: Static
				{
					points[]		=
					{
						{{__EVAL(130/SCALE_IMG + OFFSET_IMG_X), __EVAL(954/SCALE_IMG + OFFSET_IMG_Y)},1},
						{{__EVAL(23/SCALE_IMG + OFFSET_IMG_X), __EVAL(954/SCALE_IMG + OFFSET_IMG_Y)},1},
						{{__EVAL(23/SCALE_IMG + OFFSET_IMG_X), __EVAL(874/SCALE_IMG + OFFSET_IMG_Y)},1},
						{{__EVAL(130/SCALE_IMG + OFFSET_IMG_X), __EVAL(874/SCALE_IMG + OFFSET_IMG_Y)},1},
						{{__EVAL(130/SCALE_IMG + OFFSET_IMG_X), __EVAL(954/SCALE_IMG + OFFSET_IMG_Y)},1},{},
					};
				};
			};
			class BoxMode_4: BoxMode_1
			{
				condition = "(user10>=3)*(user10<=3)";
				class Static: Static
				{
					points[]		=
					{
						{{__EVAL(179/SCALE_IMG + OFFSET_IMG_X), __EVAL(1200/SCALE_IMG + OFFSET_IMG_Y)},1},
						{{__EVAL(23/SCALE_IMG + OFFSET_IMG_X), __EVAL(1200/SCALE_IMG + OFFSET_IMG_Y)},1},
						{{__EVAL(23/SCALE_IMG + OFFSET_IMG_X), __EVAL(1120/SCALE_IMG + OFFSET_IMG_Y)},1},
						{{__EVAL(179/SCALE_IMG + OFFSET_IMG_X), __EVAL(1120/SCALE_IMG + OFFSET_IMG_Y)},1},
						{{__EVAL(179/SCALE_IMG + OFFSET_IMG_X), __EVAL(1200/SCALE_IMG + OFFSET_IMG_Y)},1},{},
					};
				};
			};
			class BoxMode_5: BoxMode_1
			{
				condition = "(user10>=4)*(user10<=4)";
				class Static: Static
				{
					points[]		=
					{
						{{__EVAL(179/SCALE_IMG + OFFSET_IMG_X), __EVAL(1443/SCALE_IMG + OFFSET_IMG_Y)},1},
						{{__EVAL(23/SCALE_IMG + OFFSET_IMG_X), __EVAL(1443/SCALE_IMG + OFFSET_IMG_Y)},1},
						{{__EVAL(23/SCALE_IMG + OFFSET_IMG_X), __EVAL(1363/SCALE_IMG + OFFSET_IMG_Y)},1},
						{{__EVAL(179/SCALE_IMG + OFFSET_IMG_X), __EVAL(1363/SCALE_IMG + OFFSET_IMG_Y)},1},
						{{__EVAL(179/SCALE_IMG + OFFSET_IMG_X), __EVAL(1443/SCALE_IMG + OFFSET_IMG_Y)},1},{},
					};
				};
			};
			//INVENTORY
			HUD_TEXT_STATIC(0.115,0.282+0.03*0		,0.03,0.027,center,"B",BURSTLIMIT1)
			HUD_TEXT_STATIC(0.115,0.282+0.03*1		,0.03,0.027,center,"U",BURSTLIMIT2)
			HUD_TEXT_STATIC(0.115,0.282+0.03*2		,0.03,0.027,center,"R",BURSTLIMIT3)
			HUD_TEXT_STATIC(0.115,0.282+0.03*3		,0.03,0.027,center,"S",BURSTLIMIT4)
			HUD_TEXT_STATIC(0.115,0.282+0.03*4		,0.03,0.027,center,"T",BURSTLIMIT5)
			HUD_TEXT_STATIC(0.115,0.282+0.03*5		,0.03,0.027,center," ",BURSTLIMIT6)
			HUD_TEXT_STATIC(0.115,0.282+0.03*6		,0.03,0.027,center,"L",BURSTLIMIT7)
			HUD_TEXT_STATIC(0.115,0.282+0.03*7		,0.03,0.027,center,"I",BURSTLIMIT8)
			HUD_TEXT_STATIC(0.115,0.282+0.03*8		,0.03,0.027,center,"M",BURSTLIMIT9)
			HUD_TEXT_STATIC(0.115,0.282+0.03*9		,0.03,0.027,center,"I",BURSTLIMIT10)
			HUD_TEXT_STATIC(0.115,0.282+0.03*10		,0.03,0.027,center,"T",BURSTLIMIT11)
			class Static
			{
				type			= line;
				width			= 5.0;
				points[]		=
				{
					//name:mode ,points:

					{{__EVAL(2022/SCALE_IMG + OFFSET_IMG_X), __EVAL(753/SCALE_IMG + OFFSET_IMG_Y)},1},
					{{__EVAL(1823/SCALE_IMG + OFFSET_IMG_X), __EVAL(753/SCALE_IMG + OFFSET_IMG_Y)},1},
					{{__EVAL(1823/SCALE_IMG + OFFSET_IMG_X), __EVAL(673/SCALE_IMG + OFFSET_IMG_Y)},1},
					{{__EVAL(2022/SCALE_IMG + OFFSET_IMG_X), __EVAL(673/SCALE_IMG + OFFSET_IMG_Y)},1},
					{{__EVAL(2022/SCALE_IMG + OFFSET_IMG_X), __EVAL(753/SCALE_IMG + OFFSET_IMG_Y)},1},{},

					//name":"gun","points":

					{{__EVAL(704/SCALE_IMG + OFFSET_IMG_X), __EVAL(2025/SCALE_IMG + OFFSET_IMG_Y)},1},
					{{__EVAL(552/SCALE_IMG + OFFSET_IMG_X), __EVAL(2025/SCALE_IMG + OFFSET_IMG_Y)},1},
					{{__EVAL(552/SCALE_IMG + OFFSET_IMG_X), __EVAL(1943/SCALE_IMG + OFFSET_IMG_Y)},1},
					{{__EVAL(704/SCALE_IMG + OFFSET_IMG_X), __EVAL(1943/SCALE_IMG + OFFSET_IMG_Y)},1},
					{{__EVAL(704/SCALE_IMG + OFFSET_IMG_X), __EVAL(2025/SCALE_IMG + OFFSET_IMG_Y)},1},{},

					//name":"store rounds","points":

					{{__EVAL(724/SCALE_IMG + OFFSET_IMG_X), __EVAL(1594/SCALE_IMG + OFFSET_IMG_Y)},1},
					{{__EVAL(724/SCALE_IMG + OFFSET_IMG_X), __EVAL(1715/SCALE_IMG + OFFSET_IMG_Y)},1},
					{{__EVAL(729/SCALE_IMG + OFFSET_IMG_X), __EVAL(1724/SCALE_IMG + OFFSET_IMG_Y)},1},
					{{__EVAL(740/SCALE_IMG + OFFSET_IMG_X), __EVAL(1736/SCALE_IMG + OFFSET_IMG_Y)},1},
					{{__EVAL(749/SCALE_IMG + OFFSET_IMG_X), __EVAL(1739/SCALE_IMG + OFFSET_IMG_Y)},1},
					{{__EVAL(1304/SCALE_IMG + OFFSET_IMG_X), __EVAL(1739/SCALE_IMG + OFFSET_IMG_Y)},1},
					{{__EVAL(1314/SCALE_IMG + OFFSET_IMG_X), __EVAL(1736/SCALE_IMG + OFFSET_IMG_Y)},1},
					{{__EVAL(1324/SCALE_IMG + OFFSET_IMG_X), __EVAL(1731/SCALE_IMG + OFFSET_IMG_Y)},1},
					{{__EVAL(1332/SCALE_IMG + OFFSET_IMG_X), __EVAL(1715/SCALE_IMG + OFFSET_IMG_Y)},1},
					{{__EVAL(1332/SCALE_IMG + OFFSET_IMG_X), __EVAL(1594/SCALE_IMG + OFFSET_IMG_Y)},1},
					{{__EVAL(1325/SCALE_IMG + OFFSET_IMG_X), __EVAL(1582/SCALE_IMG + OFFSET_IMG_Y)},1},
					{{__EVAL(1314/SCALE_IMG + OFFSET_IMG_X), __EVAL(1572/SCALE_IMG + OFFSET_IMG_Y)},1},
					{{__EVAL(1306/SCALE_IMG + OFFSET_IMG_X), __EVAL(1568/SCALE_IMG + OFFSET_IMG_Y)},1},
					{{__EVAL(748/SCALE_IMG + OFFSET_IMG_X), __EVAL(1568/SCALE_IMG + OFFSET_IMG_Y)},1},
					{{__EVAL(739/SCALE_IMG + OFFSET_IMG_X), __EVAL(1572/SCALE_IMG + OFFSET_IMG_Y)},1},
					{{__EVAL(729/SCALE_IMG + OFFSET_IMG_X), __EVAL(1583/SCALE_IMG + OFFSET_IMG_Y)},1},
					{{__EVAL(724/SCALE_IMG + OFFSET_IMG_X), __EVAL(1594/SCALE_IMG + OFFSET_IMG_Y)},1},{},

					//name":"burst limit","points":

					{{__EVAL(33/SCALE_IMG + OFFSET_IMG_X), __EVAL(1534/SCALE_IMG + OFFSET_IMG_Y)},1},
					{{__EVAL(219/SCALE_IMG + OFFSET_IMG_X), __EVAL(1534/SCALE_IMG + OFFSET_IMG_Y)},1},
					{{__EVAL(219/SCALE_IMG + OFFSET_IMG_X), __EVAL(1251/SCALE_IMG + OFFSET_IMG_Y)},1},{},

					//name":"burst limit top","points":

					{{__EVAL(33/SCALE_IMG + OFFSET_IMG_X), __EVAL(297/SCALE_IMG + OFFSET_IMG_Y)},1},
					{{__EVAL(219/SCALE_IMG + OFFSET_IMG_X), __EVAL(297/SCALE_IMG + OFFSET_IMG_Y)},1},
					{{__EVAL(219/SCALE_IMG + OFFSET_IMG_X), __EVAL(575/SCALE_IMG + OFFSET_IMG_Y)},1},{},
				};
			};

			class Bold
			{
			};
		};
		class Missiles
		{
			condition = "missile";
			HUD_TEXT_STATIC(0.995,	0.17		,0.027,0.03,left,"TYPE",MissileType)
			HUD_TEXT_STATIC(0.995,	0.29		,0.027,0.03,left,"MODE",MissileMode)
			HUD_TEXT_STATIC(0.995,	0.29+0.04	,0.027,0.03,left,"NORM",MissileModeNorm)
			// Laser guided
			class SAL
			{
				condition = "aamissile";
				HUD_TEXT_STATIC(0.995,	0.17+0.04	,0.027,0.03,left,"SAL",MissileTypeSAL)
				HUD_TEXT_STATIC(0.995,	0.41		,0.027,0.03,left,"TRAJ",MissileTrajectory)
				class DIR
				{
					condition = "(user10<=2)";
					HUD_TEXT_STATIC(0.995,	0.41+0.04	,0.027,0.03,left,"DIR",MissileMode)
				};
				class LO
				{
					condition = "(user10>=3)*(user10<=3)";
					HUD_TEXT_STATIC(0.995,	0.41+0.04	,0.027,0.03,left,"LO",MissileMode)
				};
				class HI
				{
					condition = "(user10>=4)";
					HUD_TEXT_STATIC(0.995,	0.41+0.04	,0.027,0.03,left,"HI",MissileMode)
				};
				// Left Side

				HUD_TEXT_STATIC(0.005,	0.17		,0.027,0.03,right," PRI",PrimaryLaser)
				HUD_TEXT_STATIC(0.01,	0.17+0.04	,0.027,0.03,right,"B",PrimaryLaserValue)
				HUD_TEXT_STATIC(0.055,	0.17+0.04	,0.027,0.03,right,"PRF",PrimaryLaserValue1)
				HUD_TEXT_STATIC(0.005,	0.29		,0.027,0.03,right," ALT",AlternativeLaser)
				HUD_TEXT_STATIC(0.01,	0.29+0.04	,0.027,0.03,right,"G",AlternativeLaserValue)
				HUD_TEXT_STATIC(0.055,	0.29+0.04	,0.027,0.03,right,"PIM",AlternativeLaserValue1)
				HUD_TEXT_STATIC(0.005,	0.41		,0.027,0.03,right,"SAL SEL",SAL_Selected)
				//HUD_TEXT_STATIC(0.995,	0.41+0.04	,0.027,0.03,left,"DIR",MissileMode)

				HUD_TEXT_STATIC(0.005,	0.683	,0.027,0.03,right,"DEICE",Deice)
				HUD_TEXT_STATIC(0.005,	0.8		,0.027,0.03,right,"   MSL CCM",MissileCounterCounterMeasuers)

				// Channels
				HUD_TEXT_STATIC(0.503,	0.78				,0.026,0.028,center,"CHANNELS",Channels)
				HUD_TEXT_STATIC(0.33,	0.84				,0.026,0.028,center,"1",Channels_a1)
				HUD_TEXT_STATIC(0.33,	0.84+0.04			,0.026,0.028,center,"A",Channels_a2)
				HUD_TEXT_STATIC(0.445,	0.84				,0.026,0.028,center,"",Channels_b1)
				HUD_TEXT_STATIC(0.445,	0.84+0.04			,0.026,0.028,center,"",Channels_b2)
				HUD_TEXT_STATIC(0.555,	0.84				,0.026,0.028,center,"3",Channels_c1)
				HUD_TEXT_STATIC(0.555,	0.84+0.04			,0.026,0.028,center,"D",Channels_c2)
				HUD_TEXT_STATIC(0.67,	0.84				,0.026,0.028,center,"ALT",Channels_d1)
				HUD_TEXT_STATIC(0.67,	0.84+0.04			,0.026,0.028,center,"G",Channels_d2)
				class White
				{
					color[] = {1,1,1};
					HUD_TEXT_STATIC(0.445,	0.84				,0.026,0.028,center,"PRI",Channels_b1)
					HUD_TEXT_STATIC(0.445,	0.84+0.04			,0.026,0.028,center,"B",Channels_b2)
					class Static
					{
						type			= line;
						width			= 5.0;
						points[]		=
						{
							//name":"pri b","points":

							{{__EVAL(994/SCALE_IMG + OFFSET_IMG_X), __EVAL(1867/SCALE_IMG + OFFSET_IMG_Y)},1},
							{{__EVAL(826/SCALE_IMG + OFFSET_IMG_X), __EVAL(1867/SCALE_IMG + OFFSET_IMG_Y)},1},
							{{__EVAL(826/SCALE_IMG + OFFSET_IMG_X), __EVAL(1673/SCALE_IMG + OFFSET_IMG_Y)},1},
							{{__EVAL(994/SCALE_IMG + OFFSET_IMG_X), __EVAL(1673/SCALE_IMG + OFFSET_IMG_Y)},1},
							{{__EVAL(994/SCALE_IMG + OFFSET_IMG_X), __EVAL(1867/SCALE_IMG + OFFSET_IMG_Y)},1},{},
						};
					};
				};
				class Static
				{
					type			= line;
					width			= 5.0;
					points[]		=
					{
						//name:ALT ,points:

						{{__EVAL(89/SCALE_IMG + OFFSET_IMG_X), __EVAL(753/SCALE_IMG + OFFSET_IMG_Y)},1},
						{{__EVAL(25/SCALE_IMG + OFFSET_IMG_X), __EVAL(753/SCALE_IMG + OFFSET_IMG_Y)},1},
						{{__EVAL(25/SCALE_IMG + OFFSET_IMG_X), __EVAL(673/SCALE_IMG + OFFSET_IMG_Y)},1},
						{{__EVAL(89/SCALE_IMG + OFFSET_IMG_X), __EVAL(673/SCALE_IMG + OFFSET_IMG_Y)},1},
						{{__EVAL(89/SCALE_IMG + OFFSET_IMG_X), __EVAL(753/SCALE_IMG + OFFSET_IMG_Y)},1},{},

						//name":"PRI","points":

						{{__EVAL(89/SCALE_IMG + OFFSET_IMG_X), __EVAL(505/SCALE_IMG + OFFSET_IMG_Y)},1},
						{{__EVAL(25/SCALE_IMG + OFFSET_IMG_X), __EVAL(505/SCALE_IMG + OFFSET_IMG_Y)},1},
						{{__EVAL(25/SCALE_IMG + OFFSET_IMG_X), __EVAL(425/SCALE_IMG + OFFSET_IMG_Y)},1},
						{{__EVAL(89/SCALE_IMG + OFFSET_IMG_X), __EVAL(425/SCALE_IMG + OFFSET_IMG_Y)},1},
						{{__EVAL(89/SCALE_IMG + OFFSET_IMG_X), __EVAL(505/SCALE_IMG + OFFSET_IMG_Y)},1},{},

						//name":"PathItem","points":

						{{__EVAL(73/SCALE_IMG + OFFSET_IMG_X), __EVAL(1666/SCALE_IMG + OFFSET_IMG_Y)},1},
						{{__EVAL(58/SCALE_IMG + OFFSET_IMG_X), __EVAL(1677/SCALE_IMG + OFFSET_IMG_Y)},1},
						{{__EVAL(41/SCALE_IMG + OFFSET_IMG_X), __EVAL(1669/SCALE_IMG + OFFSET_IMG_Y)},1},
						{{__EVAL(40/SCALE_IMG + OFFSET_IMG_X), __EVAL(1650/SCALE_IMG + OFFSET_IMG_Y)},1},
						{{__EVAL(55/SCALE_IMG + OFFSET_IMG_X), __EVAL(1640/SCALE_IMG + OFFSET_IMG_Y)},1},
						{{__EVAL(72/SCALE_IMG + OFFSET_IMG_X), __EVAL(1648/SCALE_IMG + OFFSET_IMG_Y)},1},
						{{__EVAL(73/SCALE_IMG + OFFSET_IMG_X), __EVAL(1666/SCALE_IMG + OFFSET_IMG_Y)},1},{},

						//name":"DIR","points":

						{{__EVAL(2021/SCALE_IMG + OFFSET_IMG_X), __EVAL(997/SCALE_IMG + OFFSET_IMG_Y)},1},
						{{__EVAL(1869/SCALE_IMG + OFFSET_IMG_X), __EVAL(997/SCALE_IMG + OFFSET_IMG_Y)},1},
						{{__EVAL(1869/SCALE_IMG + OFFSET_IMG_X), __EVAL(918/SCALE_IMG + OFFSET_IMG_Y)},1},
						{{__EVAL(2021/SCALE_IMG + OFFSET_IMG_X), __EVAL(918/SCALE_IMG + OFFSET_IMG_Y)},1},
						{{__EVAL(2021/SCALE_IMG + OFFSET_IMG_X), __EVAL(997/SCALE_IMG + OFFSET_IMG_Y)},1},{},

						//name":"SAL","points":

						{{__EVAL(2021/SCALE_IMG + OFFSET_IMG_X), __EVAL(506/SCALE_IMG + OFFSET_IMG_Y)},1},
						{{__EVAL(1869/SCALE_IMG + OFFSET_IMG_X), __EVAL(506/SCALE_IMG + OFFSET_IMG_Y)},1},
						{{__EVAL(1869/SCALE_IMG + OFFSET_IMG_X), __EVAL(426/SCALE_IMG + OFFSET_IMG_Y)},1},
						{{__EVAL(2021/SCALE_IMG + OFFSET_IMG_X), __EVAL(426/SCALE_IMG + OFFSET_IMG_Y)},1},
						{{__EVAL(2021/SCALE_IMG + OFFSET_IMG_X), __EVAL(506/SCALE_IMG + OFFSET_IMG_Y)},1},{},

						//name":"channels","points":

						{{__EVAL(567/SCALE_IMG + OFFSET_IMG_X), __EVAL(1605/SCALE_IMG + OFFSET_IMG_Y)},1},
						{{__EVAL(570/SCALE_IMG + OFFSET_IMG_X), __EVAL(1589/SCALE_IMG + OFFSET_IMG_Y)},1},
						{{__EVAL(577/SCALE_IMG + OFFSET_IMG_X), __EVAL(1579/SCALE_IMG + OFFSET_IMG_Y)},1},
						{{__EVAL(589/SCALE_IMG + OFFSET_IMG_X), __EVAL(1567/SCALE_IMG + OFFSET_IMG_Y)},1},
						{{__EVAL(601/SCALE_IMG + OFFSET_IMG_X), __EVAL(1561/SCALE_IMG + OFFSET_IMG_Y)},1},
						{{__EVAL(611/SCALE_IMG + OFFSET_IMG_X), __EVAL(1558/SCALE_IMG + OFFSET_IMG_Y)},1},
						{{__EVAL(1431/SCALE_IMG + OFFSET_IMG_X), __EVAL(1559/SCALE_IMG + OFFSET_IMG_Y)},1},
						{{__EVAL(1440/SCALE_IMG + OFFSET_IMG_X), __EVAL(1562/SCALE_IMG + OFFSET_IMG_Y)},1},
						{{__EVAL(1449/SCALE_IMG + OFFSET_IMG_X), __EVAL(1565/SCALE_IMG + OFFSET_IMG_Y)},1},
						{{__EVAL(1458/SCALE_IMG + OFFSET_IMG_X), __EVAL(1570/SCALE_IMG + OFFSET_IMG_Y)},1},
						{{__EVAL(1466/SCALE_IMG + OFFSET_IMG_X), __EVAL(1578/SCALE_IMG + OFFSET_IMG_Y)},1},
						{{__EVAL(1471/SCALE_IMG + OFFSET_IMG_X), __EVAL(1585/SCALE_IMG + OFFSET_IMG_Y)},1},
						{{__EVAL(1474/SCALE_IMG + OFFSET_IMG_X), __EVAL(1592/SCALE_IMG + OFFSET_IMG_Y)},1},
						{{__EVAL(1477/SCALE_IMG + OFFSET_IMG_X), __EVAL(1602/SCALE_IMG + OFFSET_IMG_Y)},1},
						{{__EVAL(1477/SCALE_IMG + OFFSET_IMG_X), __EVAL(1605/SCALE_IMG + OFFSET_IMG_Y)},1},
						{{__EVAL(1477/SCALE_IMG + OFFSET_IMG_X), __EVAL(1849/SCALE_IMG + OFFSET_IMG_Y)},1},
						{{__EVAL(1475/SCALE_IMG + OFFSET_IMG_X), __EVAL(1856/SCALE_IMG + OFFSET_IMG_Y)},1},
						{{__EVAL(1472/SCALE_IMG + OFFSET_IMG_X), __EVAL(1862/SCALE_IMG + OFFSET_IMG_Y)},1},
						{{__EVAL(1468/SCALE_IMG + OFFSET_IMG_X), __EVAL(1868/SCALE_IMG + OFFSET_IMG_Y)},1},
						{{__EVAL(1464/SCALE_IMG + OFFSET_IMG_X), __EVAL(1873/SCALE_IMG + OFFSET_IMG_Y)},1},
						{{__EVAL(1457/SCALE_IMG + OFFSET_IMG_X), __EVAL(1881/SCALE_IMG + OFFSET_IMG_Y)},1},
						{{__EVAL(1451/SCALE_IMG + OFFSET_IMG_X), __EVAL(1885/SCALE_IMG + OFFSET_IMG_Y)},1},
						{{__EVAL(1447/SCALE_IMG + OFFSET_IMG_X), __EVAL(1886/SCALE_IMG + OFFSET_IMG_Y)},1},
						{{__EVAL(1441/SCALE_IMG + OFFSET_IMG_X), __EVAL(1889/SCALE_IMG + OFFSET_IMG_Y)},1},
						{{__EVAL(1430/SCALE_IMG + OFFSET_IMG_X), __EVAL(1890/SCALE_IMG + OFFSET_IMG_Y)},1},
						{{__EVAL(613/SCALE_IMG + OFFSET_IMG_X), __EVAL(1890/SCALE_IMG + OFFSET_IMG_Y)},1},
						{{__EVAL(606/SCALE_IMG + OFFSET_IMG_X), __EVAL(1889/SCALE_IMG + OFFSET_IMG_Y)},1},
						{{__EVAL(597/SCALE_IMG + OFFSET_IMG_X), __EVAL(1887/SCALE_IMG + OFFSET_IMG_Y)},1},
						{{__EVAL(586/SCALE_IMG + OFFSET_IMG_X), __EVAL(1879/SCALE_IMG + OFFSET_IMG_Y)},1},
						{{__EVAL(578/SCALE_IMG + OFFSET_IMG_X), __EVAL(1872/SCALE_IMG + OFFSET_IMG_Y)},1},
						{{__EVAL(572/SCALE_IMG + OFFSET_IMG_X), __EVAL(1864/SCALE_IMG + OFFSET_IMG_Y)},1},
						{{__EVAL(568/SCALE_IMG + OFFSET_IMG_X), __EVAL(1854/SCALE_IMG + OFFSET_IMG_Y)},1},
						{{__EVAL(567/SCALE_IMG + OFFSET_IMG_X), __EVAL(1848/SCALE_IMG + OFFSET_IMG_Y)},1},
						{{__EVAL(567/SCALE_IMG + OFFSET_IMG_X), __EVAL(1605/SCALE_IMG + OFFSET_IMG_Y)},1},{},

						//name":"alt g","points":

						{{__EVAL(1441/SCALE_IMG + OFFSET_IMG_X), __EVAL(1867/SCALE_IMG + OFFSET_IMG_Y)},1},
						{{__EVAL(1273/SCALE_IMG + OFFSET_IMG_X), __EVAL(1867/SCALE_IMG + OFFSET_IMG_Y)},1},
						{{__EVAL(1273/SCALE_IMG + OFFSET_IMG_X), __EVAL(1673/SCALE_IMG + OFFSET_IMG_Y)},1},
						{{__EVAL(1441/SCALE_IMG + OFFSET_IMG_X), __EVAL(1673/SCALE_IMG + OFFSET_IMG_Y)},1},
						{{__EVAL(1441/SCALE_IMG + OFFSET_IMG_X), __EVAL(1867/SCALE_IMG + OFFSET_IMG_Y)},1},{}

					};
				};
			};
			// Radar guided
			class RF
			{
				condition = "atmissile";
				HUD_TEXT_STATIC(0.995,	0.17+0.04	,0.027,0.03,left,"RF",MissileTypeSAL)
				HUD_TEXT_STATIC(0.005,	0.683	,0.027,0.03,right,"LOBL INHIBIT",LOBL_INHIBIT)
				HUD_TEXT_STATIC(0.005,	0.8		,0.027,0.03,right,"2ND TARGET INHIBIT",Target_Inhibit)
				// MSL PWR
				HUD_TEXT_STATIC(0.009,	0.19				,0.027,0.03,right,"ALL"	,Missile_Power_1)
				HUD_TEXT_STATIC(0.009,	0.19+0.123*1		,0.027,0.03,right,"AUTO"	,Missile_Power_2)
				HUD_TEXT_STATIC(0.009,	0.19+0.123*2		,0.027,0.03,right,"NONE"	,Missile_Power_3)
				HUD_TEXT_STATIC(0.135,0.222+0.03*0		,0.03,0.027,center,"M",Missile_Power_V1)
				HUD_TEXT_STATIC(0.135,0.222+0.03*1		,0.03,0.027,center,"S",Missile_Power_V2)
				HUD_TEXT_STATIC(0.135,0.222+0.03*2		,0.03,0.027,center,"L",Missile_Power_V3)
				HUD_TEXT_STATIC(0.135,0.222+0.03*3		,0.03,0.027,center," ",Missile_Power_V4)
				HUD_TEXT_STATIC(0.135,0.222+0.03*4		,0.03,0.027,center,"P",Missile_Power_V5)
				HUD_TEXT_STATIC(0.135,0.222+0.03*5		,0.03,0.027,center,"W",Missile_Power_V6)
				HUD_TEXT_STATIC(0.135,0.222+0.03*6		,0.03,0.027,center,"R",Missile_Power_V7)
				HUD_TEXT_STATIC(0.135,0.222+0.03*7		,0.03,0.027,center," ",Missile_Power_V8)
				class Static
				{
					type			= line;
					width			= 5.0;
					points[]		=
					{
						//name:PathItem ,points:

						{{__EVAL(2022/SCALE_IMG + OFFSET_IMG_X), __EVAL(506/SCALE_IMG + OFFSET_IMG_Y)},1},
						{{__EVAL(1915/SCALE_IMG + OFFSET_IMG_X), __EVAL(506/SCALE_IMG + OFFSET_IMG_Y)},1},
						{{__EVAL(1915/SCALE_IMG + OFFSET_IMG_X), __EVAL(426/SCALE_IMG + OFFSET_IMG_Y)},1},
						{{__EVAL(2022/SCALE_IMG + OFFSET_IMG_X), __EVAL(426/SCALE_IMG + OFFSET_IMG_Y)},1},
						{{__EVAL(2022/SCALE_IMG + OFFSET_IMG_X), __EVAL(506/SCALE_IMG + OFFSET_IMG_Y)},1},{},

						//name:PathItem ,points:

						{{__EVAL(222/SCALE_IMG + OFFSET_IMG_X), __EVAL(714/SCALE_IMG + OFFSET_IMG_Y)},1},
						{{__EVAL(27/SCALE_IMG + OFFSET_IMG_X), __EVAL(714/SCALE_IMG + OFFSET_IMG_Y)},1},
						{{__EVAL(27/SCALE_IMG + OFFSET_IMG_X), __EVAL(635/SCALE_IMG + OFFSET_IMG_Y)},1},
						{{__EVAL(222/SCALE_IMG + OFFSET_IMG_X), __EVAL(635/SCALE_IMG + OFFSET_IMG_Y)},1},
						{{__EVAL(222/SCALE_IMG + OFFSET_IMG_X), __EVAL(714/SCALE_IMG + OFFSET_IMG_Y)},1},{},

						//name":"PathItem","points":

						{{__EVAL(36/SCALE_IMG + OFFSET_IMG_X), __EVAL(1046/SCALE_IMG + OFFSET_IMG_Y)},1},
						{{__EVAL(269/SCALE_IMG + OFFSET_IMG_X), __EVAL(1046/SCALE_IMG + OFFSET_IMG_Y)},1},
						{{__EVAL(269/SCALE_IMG + OFFSET_IMG_X), __EVAL(893/SCALE_IMG + OFFSET_IMG_Y)},1},{},

						//name":"PathItem","points":

						{{__EVAL(36/SCALE_IMG + OFFSET_IMG_X), __EVAL(301/SCALE_IMG + OFFSET_IMG_Y)},1},
						{{__EVAL(269/SCALE_IMG + OFFSET_IMG_X), __EVAL(301/SCALE_IMG + OFFSET_IMG_Y)},1},
						{{__EVAL(269/SCALE_IMG + OFFSET_IMG_X), __EVAL(455/SCALE_IMG + OFFSET_IMG_Y)},1},{}
					};
				};
			};
			class Static
			{
				type			= line;
				width			= 5.0;
				points[]		=
				{
					//name":"NORM","points":

					{{__EVAL(2021/SCALE_IMG + OFFSET_IMG_X), __EVAL(754/SCALE_IMG + OFFSET_IMG_Y)},1},
					{{__EVAL(1816/SCALE_IMG + OFFSET_IMG_X), __EVAL(754/SCALE_IMG + OFFSET_IMG_Y)},1},
					{{__EVAL(1816/SCALE_IMG + OFFSET_IMG_X), __EVAL(673/SCALE_IMG + OFFSET_IMG_Y)},1},
					{{__EVAL(2021/SCALE_IMG + OFFSET_IMG_X), __EVAL(673/SCALE_IMG + OFFSET_IMG_Y)},1},
					{{__EVAL(2021/SCALE_IMG + OFFSET_IMG_X), __EVAL(754/SCALE_IMG + OFFSET_IMG_Y)},1},{},

					//name":"msl","points":

					{{__EVAL(970/SCALE_IMG + OFFSET_IMG_X), __EVAL(2022/SCALE_IMG + OFFSET_IMG_Y)},1},
					{{__EVAL(817/SCALE_IMG + OFFSET_IMG_X), __EVAL(2022/SCALE_IMG + OFFSET_IMG_Y)},1},
					{{__EVAL(817/SCALE_IMG + OFFSET_IMG_X), __EVAL(1941/SCALE_IMG + OFFSET_IMG_Y)},1},
					{{__EVAL(970/SCALE_IMG + OFFSET_IMG_X), __EVAL(1941/SCALE_IMG + OFFSET_IMG_Y)},1},
					{{__EVAL(970/SCALE_IMG + OFFSET_IMG_X), __EVAL(2022/SCALE_IMG + OFFSET_IMG_Y)},1},{}
				};
			};
		};
		// Pylons

		#define PYLON_POS_Y 0.45
		class  Pylon1
		{
			type	= "pylonicon";
			pos[]	= {{__EVAL(0.31-0.09*2), PYLON_POS_Y}, 1};
			pylon	= 1;
			name	= "RHS_AH64_Weap_MFD";
		};
		class  Pylon2: Pylon1
		{
			pos[]	= {{__EVAL(0.353-0.09*1), PYLON_POS_Y}, 1};
			pylon	= 2;
		};
		class  Pylon3: Pylon1
		{
			pos[]	= {{__EVAL(0.37-0.09*0), PYLON_POS_Y}, 1};
			pylon	= 3;
		};
		class  Pylon4: Pylon1
		{
			pos[]	= {{__EVAL(0.82-0.09*2), PYLON_POS_Y}, 1};
			pylon	= 4;
		};
		class  Pylon5: Pylon1
		{
			pos[]	= {{__EVAL(0.832-0.09), PYLON_POS_Y}, 1};
			pylon	= 5;
		};
		class  Pylon6: Pylon1
		{
			pos[]	= {{0.82, PYLON_POS_Y}, 1};
			pylon	= 6;
		};

		HUD_TEXT_STATIC(0.503,			0.61+0.034*0				,0.024,0.027,center,"CHAFF",ChaffText)
		HUD_TEXT_SOURCE_INDEX(0.503,	0.61+0.034*1				,0.024,0.027,center,cmammo,1,ChaffCount)
		HUD_TEXT_STATIC(0.503,			0.61+0.034*2				,0.024,0.027,center,"FLARE",FlareText)
		HUD_TEXT_SOURCE_INDEX(0.503,	0.61+0.034*3				,0.024,0.027,center,cmammo,1,FlareCount)

		HUD_TEXT_STATIC(0.995,	0.555		,0.027,0.03,left,"TRAIN",Train)
		HUD_TEXT_STATIC(0.995,	0.66		,0.027,0.03,left,"LRFD",LRFD_1)
		HUD_TEXT_STATIC(0.995,	0.7			,0.027,0.03,left,"FIRST",LRFD_2)
		HUD_TEXT_STATIC(0.995,	0.781			,0.027,0.03,left,"ACQ",ACQ_1)
		HUD_TEXT_STATIC(0.995,	0.781+0.04	,0.027,0.03,left,"T32",ACQ_2)


		HUD_TEXT_STATIC(0.685,	0.133				,0.027,0.03,center,"ACQ",Acquistion_1)
		HUD_TEXT_STATIC(0.685,	0.133+0.04			,0.027,0.03,center,"T32",Acquistion_2)

		HUD_TEXT_STATIC(0.695,	0.26				,0.027,0.03,center,"LRFD",LaserRangeFinderChannel_1)
		HUD_TEXT_STATIC(0.695,	0.26+0.035			,0.027,0.03,center,"B",LaserRangeFinderChannel_2)

		HUD_TEXT_STATIC(0.32,	0.133				,0.027,0.03,center,"SIGHT",Sight_1)
		class Sight
		{
			condition = "1-activeSensorsOn";
			HUD_TEXT_STATIC(0.32,	0.133+0.04			,0.027,0.03,center,"TADS",Sight_2)
		};
		class Radar
		{
			condition = "activeSensorsOn";
			HUD_TEXT_STATIC(0.32,	0.133+0.04			,0.027,0.03,center,"FCR",Sight_2)
		};

		HUD_TEXT_STATIC(0.31,	0.26				,0.027,0.03,center,"LST",LaserTrackerChannel_1)
		HUD_TEXT_STATIC(0.31,	0.26+0.035			,0.027,0.03,center,"G",LaserTrackerChannel_2)

		// Bottom
		HUD_TEXT_STATIC(0.21,	0.963		,0.025,0.03,left,"WPN",WeaponBottom)
		HUD_TEXT_STATIC(0.34,	0.963		,0.025,0.03,left,"GUN",GunBottom)
		HUD_TEXT_STATIC(0.47,	0.963		,0.025,0.03,left,"MSL",MslBottom)
		HUD_TEXT_STATIC(0.595,	0.963		,0.025,0.03,left,"ATA",AtaBottom)
		HUD_TEXT_STATIC(0.73,	0.963		,0.025,0.03,left,"RKT",RktBottom)

		// Top
		HUD_TEXT_STATIC(0.21,	0.03		,0.03,0.03,left,"CHAN",Channel)
		HUD_TEXT_STATIC(0.34,	0.03		,0.03,0.03,left,"ASE",ASE)
		HUD_TEXT_STATIC(0.61,	0.03		,0.03,0.03,left,"CODE",LaserCodes)
		HUD_TEXT_STATIC(0.77,	0.03		,0.03,0.03,left,"COORD",Coordinates)
		HUD_TEXT_STATIC(0.89,	0.03		,0.03,0.03,left,"UTIL",Utilities)
	};
	class Laser
	{
		condition = "((bomb+mgun+atmissile+aamissile+rocket)<=0)*(ammo>=1)";
		class Static
		{
			type			= line;
			width			= 5.0;
			points[]		=
			{
				//name:PathItem ,points:

				{{__EVAL(89/SCALE_IMG + OFFSET_IMG_X), __EVAL(425/SCALE_IMG + OFFSET_IMG_Y)},1},
				{{__EVAL(27/SCALE_IMG + OFFSET_IMG_X), __EVAL(425/SCALE_IMG + OFFSET_IMG_Y)},1},
				{{__EVAL(27/SCALE_IMG + OFFSET_IMG_X), __EVAL(346/SCALE_IMG + OFFSET_IMG_Y)},1},
				{{__EVAL(89/SCALE_IMG + OFFSET_IMG_X), __EVAL(346/SCALE_IMG + OFFSET_IMG_Y)},1},
				{{__EVAL(89/SCALE_IMG + OFFSET_IMG_X), __EVAL(425/SCALE_IMG + OFFSET_IMG_Y)},1},{},

				//name":"PathItem","points":

				{{__EVAL(466/SCALE_IMG + OFFSET_IMG_X), __EVAL(132/SCALE_IMG + OFFSET_IMG_Y)},1},
				{{__EVAL(271/SCALE_IMG + OFFSET_IMG_X), __EVAL(132/SCALE_IMG + OFFSET_IMG_Y)},1},
				{{__EVAL(271/SCALE_IMG + OFFSET_IMG_X), __EVAL(25/SCALE_IMG + OFFSET_IMG_Y)},1},
				{{__EVAL(466/SCALE_IMG + OFFSET_IMG_X), __EVAL(25/SCALE_IMG + OFFSET_IMG_Y)},1},
				{{__EVAL(466/SCALE_IMG + OFFSET_IMG_X), __EVAL(132/SCALE_IMG + OFFSET_IMG_Y)},1},{},

				//name":"PathItem","points":

				{{__EVAL(662/SCALE_IMG + OFFSET_IMG_X), __EVAL(146/SCALE_IMG + OFFSET_IMG_Y)},1},
				{{__EVAL(599/SCALE_IMG + OFFSET_IMG_X), __EVAL(146/SCALE_IMG + OFFSET_IMG_Y)},1},
				{{__EVAL(599/SCALE_IMG + OFFSET_IMG_X), __EVAL(65/SCALE_IMG + OFFSET_IMG_Y)},1},
				{{__EVAL(662/SCALE_IMG + OFFSET_IMG_X), __EVAL(65/SCALE_IMG + OFFSET_IMG_Y)},1},
				{{__EVAL(662/SCALE_IMG + OFFSET_IMG_X), __EVAL(146/SCALE_IMG + OFFSET_IMG_Y)},1},{},

				//name":"PathItem","points":

				{{__EVAL(927/SCALE_IMG + OFFSET_IMG_X), __EVAL(146/SCALE_IMG + OFFSET_IMG_Y)},1},
				{{__EVAL(864/SCALE_IMG + OFFSET_IMG_X), __EVAL(146/SCALE_IMG + OFFSET_IMG_Y)},1},
				{{__EVAL(864/SCALE_IMG + OFFSET_IMG_X), __EVAL(65/SCALE_IMG + OFFSET_IMG_Y)},1},
				{{__EVAL(927/SCALE_IMG + OFFSET_IMG_X), __EVAL(65/SCALE_IMG + OFFSET_IMG_Y)},1},
				{{__EVAL(927/SCALE_IMG + OFFSET_IMG_X), __EVAL(146/SCALE_IMG + OFFSET_IMG_Y)},1},{},

				//name":"PathItem","points":

				{{__EVAL(1452/SCALE_IMG + OFFSET_IMG_X), __EVAL(146/SCALE_IMG + OFFSET_IMG_Y)},1},
				{{__EVAL(1389/SCALE_IMG + OFFSET_IMG_X), __EVAL(146/SCALE_IMG + OFFSET_IMG_Y)},1},
				{{__EVAL(1389/SCALE_IMG + OFFSET_IMG_X), __EVAL(65/SCALE_IMG + OFFSET_IMG_Y)},1},
				{{__EVAL(1452/SCALE_IMG + OFFSET_IMG_X), __EVAL(65/SCALE_IMG + OFFSET_IMG_Y)},1},
				{{__EVAL(1452/SCALE_IMG + OFFSET_IMG_X), __EVAL(146/SCALE_IMG + OFFSET_IMG_Y)},1},{},

				//name":"PathItem","points":

				{{__EVAL(1189/SCALE_IMG + OFFSET_IMG_X), __EVAL(146/SCALE_IMG + OFFSET_IMG_Y)},1},
				{{__EVAL(1125/SCALE_IMG + OFFSET_IMG_X), __EVAL(146/SCALE_IMG + OFFSET_IMG_Y)},1},
				{{__EVAL(1125/SCALE_IMG + OFFSET_IMG_X), __EVAL(65/SCALE_IMG + OFFSET_IMG_Y)},1},
				{{__EVAL(1189/SCALE_IMG + OFFSET_IMG_X), __EVAL(65/SCALE_IMG + OFFSET_IMG_Y)},1},
				{{__EVAL(1189/SCALE_IMG + OFFSET_IMG_X), __EVAL(146/SCALE_IMG + OFFSET_IMG_Y)},1},{},

				//name":"chan name","points":

				{{__EVAL(899/SCALE_IMG + OFFSET_IMG_X), __EVAL(377/SCALE_IMG + OFFSET_IMG_Y)},1},
				{{__EVAL(1147/SCALE_IMG + OFFSET_IMG_X), __EVAL(377/SCALE_IMG + OFFSET_IMG_Y)},1},
				{{__EVAL(1157/SCALE_IMG + OFFSET_IMG_X), __EVAL(382/SCALE_IMG + OFFSET_IMG_Y)},1},
				{{__EVAL(1173/SCALE_IMG + OFFSET_IMG_X), __EVAL(395/SCALE_IMG + OFFSET_IMG_Y)},1},
				{{__EVAL(1175/SCALE_IMG + OFFSET_IMG_X), __EVAL(403/SCALE_IMG + OFFSET_IMG_Y)},1},
				{{__EVAL(1175/SCALE_IMG + OFFSET_IMG_X), __EVAL(448/SCALE_IMG + OFFSET_IMG_Y)},1},
				{{__EVAL(1173/SCALE_IMG + OFFSET_IMG_X), __EVAL(456/SCALE_IMG + OFFSET_IMG_Y)},1},
				{{__EVAL(1157/SCALE_IMG + OFFSET_IMG_X), __EVAL(469/SCALE_IMG + OFFSET_IMG_Y)},1},
				{{__EVAL(1148/SCALE_IMG + OFFSET_IMG_X), __EVAL(473/SCALE_IMG + OFFSET_IMG_Y)},1},
				{{__EVAL(899/SCALE_IMG + OFFSET_IMG_X), __EVAL(473/SCALE_IMG + OFFSET_IMG_Y)},1},
				{{__EVAL(891/SCALE_IMG + OFFSET_IMG_X), __EVAL(469/SCALE_IMG + OFFSET_IMG_Y)},1},
				{{__EVAL(876/SCALE_IMG + OFFSET_IMG_X), __EVAL(456/SCALE_IMG + OFFSET_IMG_Y)},1},
				{{__EVAL(874/SCALE_IMG + OFFSET_IMG_X), __EVAL(447/SCALE_IMG + OFFSET_IMG_Y)},1},
				{{__EVAL(874/SCALE_IMG + OFFSET_IMG_X), __EVAL(403/SCALE_IMG + OFFSET_IMG_Y)},1},
				{{__EVAL(876/SCALE_IMG + OFFSET_IMG_X), __EVAL(394/SCALE_IMG + OFFSET_IMG_Y)},1},
				{{__EVAL(883/SCALE_IMG + OFFSET_IMG_X), __EVAL(382/SCALE_IMG + OFFSET_IMG_Y)},1},
				{{__EVAL(899/SCALE_IMG + OFFSET_IMG_X), __EVAL(377/SCALE_IMG + OFFSET_IMG_Y)},1},{},

				//name":"code ranges","points":

				{{__EVAL(564/SCALE_IMG + OFFSET_IMG_X), __EVAL(529/SCALE_IMG + OFFSET_IMG_Y)},1},
				{{__EVAL(1520/SCALE_IMG + OFFSET_IMG_X), __EVAL(529/SCALE_IMG + OFFSET_IMG_Y)},1},
				{{__EVAL(1536/SCALE_IMG + OFFSET_IMG_X), __EVAL(535/SCALE_IMG + OFFSET_IMG_Y)},1},
				{{__EVAL(1545/SCALE_IMG + OFFSET_IMG_X), __EVAL(547/SCALE_IMG + OFFSET_IMG_Y)},1},
				{{__EVAL(1546/SCALE_IMG + OFFSET_IMG_X), __EVAL(555/SCALE_IMG + OFFSET_IMG_Y)},1},
				{{__EVAL(1546/SCALE_IMG + OFFSET_IMG_X), __EVAL(1369/SCALE_IMG + OFFSET_IMG_Y)},1},
				{{__EVAL(1540/SCALE_IMG + OFFSET_IMG_X), __EVAL(1384/SCALE_IMG + OFFSET_IMG_Y)},1},
				{{__EVAL(1529/SCALE_IMG + OFFSET_IMG_X), __EVAL(1393/SCALE_IMG + OFFSET_IMG_Y)},1},
				{{__EVAL(1521/SCALE_IMG + OFFSET_IMG_X), __EVAL(1395/SCALE_IMG + OFFSET_IMG_Y)},1},
				{{__EVAL(568/SCALE_IMG + OFFSET_IMG_X), __EVAL(1395/SCALE_IMG + OFFSET_IMG_Y)},1},
				{{__EVAL(559/SCALE_IMG + OFFSET_IMG_X), __EVAL(1393/SCALE_IMG + OFFSET_IMG_Y)},1},
				{{__EVAL(547/SCALE_IMG + OFFSET_IMG_X), __EVAL(1384/SCALE_IMG + OFFSET_IMG_Y)},1},
				{{__EVAL(542/SCALE_IMG + OFFSET_IMG_X), __EVAL(1368/SCALE_IMG + OFFSET_IMG_Y)},1},
				{{__EVAL(542/SCALE_IMG + OFFSET_IMG_X), __EVAL(548/SCALE_IMG + OFFSET_IMG_Y)},1},
				{{__EVAL(543/SCALE_IMG + OFFSET_IMG_X), __EVAL(539/SCALE_IMG + OFFSET_IMG_Y)},1},
				{{__EVAL(555/SCALE_IMG + OFFSET_IMG_X), __EVAL(532/SCALE_IMG + OFFSET_IMG_Y)},1},
				{{__EVAL(564/SCALE_IMG + OFFSET_IMG_X), __EVAL(529/SCALE_IMG + OFFSET_IMG_Y)},1},{},

				//name":"status","points":

				{{__EVAL(1131/SCALE_IMG + OFFSET_IMG_X), __EVAL(614/SCALE_IMG + OFFSET_IMG_Y)},1},
				{{__EVAL(1397/SCALE_IMG + OFFSET_IMG_X), __EVAL(614/SCALE_IMG + OFFSET_IMG_Y)},1},{},

				//name":"code text","points":

				{{__EVAL(561/SCALE_IMG + OFFSET_IMG_X), __EVAL(614/SCALE_IMG + OFFSET_IMG_Y)},1},
				{{__EVAL(1044/SCALE_IMG + OFFSET_IMG_X), __EVAL(614/SCALE_IMG + OFFSET_IMG_Y)},1},{},

				//name":"bottom","points":

				{{__EVAL(490/SCALE_IMG + OFFSET_IMG_X), __EVAL(2013/SCALE_IMG + OFFSET_IMG_Y)},1},
				{{__EVAL(490/SCALE_IMG + OFFSET_IMG_X), __EVAL(1822/SCALE_IMG + OFFSET_IMG_Y)},1},
				{{__EVAL(1563/SCALE_IMG + OFFSET_IMG_X), __EVAL(1822/SCALE_IMG + OFFSET_IMG_Y)},1},
				{{__EVAL(1563/SCALE_IMG + OFFSET_IMG_X), __EVAL(2013/SCALE_IMG + OFFSET_IMG_Y)},1},{},

				//name":"top right","points":

				{{__EVAL(1564/SCALE_IMG + OFFSET_IMG_X), __EVAL(36/SCALE_IMG + OFFSET_IMG_Y)},1},
				{{__EVAL(1564/SCALE_IMG + OFFSET_IMG_X), __EVAL(192/SCALE_IMG + OFFSET_IMG_Y)},1},
				{{__EVAL(1189/SCALE_IMG + OFFSET_IMG_X), __EVAL(192/SCALE_IMG + OFFSET_IMG_Y)},1},{},

				//name":"top left","points":

				{{__EVAL(489/SCALE_IMG + OFFSET_IMG_X), __EVAL(36/SCALE_IMG + OFFSET_IMG_Y)},1},
				{{__EVAL(489/SCALE_IMG + OFFSET_IMG_X), __EVAL(192/SCALE_IMG + OFFSET_IMG_Y)},1},
				{{__EVAL(864/SCALE_IMG + OFFSET_IMG_X), __EVAL(192/SCALE_IMG + OFFSET_IMG_Y)},1},{},

				//name":"right let","points":

				{{__EVAL(2012/SCALE_IMG + OFFSET_IMG_X), __EVAL(299/SCALE_IMG + OFFSET_IMG_Y)},1},
				{{__EVAL(1786/SCALE_IMG + OFFSET_IMG_X), __EVAL(299/SCALE_IMG + OFFSET_IMG_Y)},1},
				{{__EVAL(1786/SCALE_IMG + OFFSET_IMG_X), __EVAL(1786/SCALE_IMG + OFFSET_IMG_Y)},1},
				{{__EVAL(2012/SCALE_IMG + OFFSET_IMG_X), __EVAL(1786/SCALE_IMG + OFFSET_IMG_Y)},1},{},

				//name":"left let","points":

				{{__EVAL(35/SCALE_IMG + OFFSET_IMG_X), __EVAL(299/SCALE_IMG + OFFSET_IMG_Y)},1},
				{{__EVAL(261/SCALE_IMG + OFFSET_IMG_X), __EVAL(299/SCALE_IMG + OFFSET_IMG_Y)},1},
				{{__EVAL(261/SCALE_IMG + OFFSET_IMG_X), __EVAL(1786/SCALE_IMG + OFFSET_IMG_Y)},1},
				{{__EVAL(35/SCALE_IMG + OFFSET_IMG_X), __EVAL(1786/SCALE_IMG + OFFSET_IMG_Y)},1},{},

				// Line Util
				{{0.785, __EVAL(0.014)}, 1},
				{{0.87, __EVAL(0.014)}, 1},{},
				// Line channel
				{{0.135, __EVAL(0.014)}, 1},
				{{0.22, __EVAL(0.014)}, 1},{},
			};
		};
		class Polygons
		{
			type			= polygon;
			width			= 4.0;

			points[]		=
			{
				// Util arrow
				{
					{ {__EVAL(0.85+0.008), __EVAL(0.6*0.488	-0.286)}, 1},
					{ {__EVAL(0.87+0.008), __EVAL(0.6*0.50	-0.286)}, 1},
					{ {__EVAL(0.85+0.008), __EVAL(0.6*0.512	-0.286)}, 1},
				},
				// Channel arrow
				{
					{ {__EVAL(0.85-0.65), __EVAL(0.6*0.488	-0.286)}, 1},
					{ {__EVAL(0.87-0.65), __EVAL(0.6*0.50	-0.286)}, 1},
					{ {__EVAL(0.85-0.65), __EVAL(0.6*0.512	-0.286)}, 1},
				},
				{
					POLYGON_BOX(0.02,0.08,-0.013,0.41)
				},
				{
					POLYGON_BOX(0.02,0.08,-0.013,0.535)
				},
				{
					POLYGON_BOX(0.02,0.08,-0.013,0.78)
				},
			};
		};

		HUD_TEXT_STATIC(0.22,	0.025			,0.026,0.027,left,"CHAN",Channel)
		HUD_TEXT_STATIC(0.875,	0.025			,0.026,0.03,left,"UTIL",Utilities)
		HUD_TEXT_STATIC(0.315,	0.028			,0.026,0.028,left,"1",Chn1)
		HUD_TEXT_STATIC(0.45,	0.028			,0.026,0.028,left,"2",Chn2)
		HUD_TEXT_STATIC(0.58,	0.028			,0.026,0.028,left,"3",Chn3)
		HUD_TEXT_STATIC(0.712,	0.028			,0.026,0.028,left,"4",Chn4)


		HUD_TEXT_STATIC(0.009,	0.17				,0.027,0.03,right,"A"	,Chn_A)
		HUD_TEXT_STATIC(0.009,	0.17+0.04			,0.027,0.03,right,"1111",Chn_A_Value)
		HUD_TEXT_STATIC(0.009,	0.17+0.123*1		,0.027,0.03,right,"B"	,Chn_B)
		HUD_TEXT_STATIC(0.009,	0.17+0.123*1+0.04	,0.027,0.03,right,"2111",Chn_B_Value)
		HUD_TEXT_STATIC(0.009,	0.17+0.123*2		,0.027,0.03,right,"C"	,Chn_C)
		HUD_TEXT_STATIC(0.009,	0.17+0.123*2+0.04	,0.027,0.03,right,"4121",Chn_C_Value)
		HUD_TEXT_STATIC(0.009,	0.17+0.123*3		,0.027,0.03,right,"D"	,Chn_D)
		HUD_TEXT_STATIC(0.009,	0.17+0.123*3+0.04	,0.027,0.03,right,"4311",Chn_D_Value)
		HUD_TEXT_STATIC(0.009,	0.17+0.123*4		,0.027,0.03,right,"E"	,Chn_E)
		HUD_TEXT_STATIC(0.009,	0.17+0.123*4+0.04	,0.027,0.03,right,"4511",Chn_E_Value)
		HUD_TEXT_STATIC(0.009,	0.17+0.123*5		,0.027,0.03,right,"F"	,Chn_F)
		HUD_TEXT_STATIC(0.009,	0.17+0.123*5+0.04	,0.027,0.03,right,"4711",Chn_F_Value)

		HUD_TEXT_STATIC(0.311,	0.923			,0.026,0.028,center,"G",Chn_G)
		HUD_TEXT_STATIC(0.311,	0.923+0.042		,0.026,0.028,center,"5111",Chn_G_Value)
		HUD_TEXT_STATIC(0.44,	0.923			,0.026,0.028,center,"H",Chn_H)
		HUD_TEXT_STATIC(0.44,	0.923+0.042		,0.026,0.028,center,"5311",Chn_H_Value)
		HUD_TEXT_STATIC(0.57,	0.923			,0.026,0.028,center,"J",Chn_J)
		HUD_TEXT_STATIC(0.57,	0.923+0.042		,0.026,0.028,center,"5511",Chn_J_Value)
		HUD_TEXT_STATIC(0.702,	0.923			,0.026,0.028,center,"K",Chn_K)
		HUD_TEXT_STATIC(0.702,	0.923+0.042		,0.026,0.028,center,"5711",Chn_K_Value)

		HUD_TEXT_STATIC(0.995,	0.17				,0.027,0.03,left,"R"	,Chn_R)
		HUD_TEXT_STATIC(0.995,	0.17+0.04			,0.027,0.03,left,"1788",Chn_R_Value)
		HUD_TEXT_STATIC(0.995,	0.17+0.123*1		,0.027,0.03,left,"Q"	,Chn_Q)
		HUD_TEXT_STATIC(0.995,	0.17+0.123*1+0.04	,0.027,0.03,left,"1782",Chn_Q_Value)
		HUD_TEXT_STATIC(0.995,	0.17+0.123*2		,0.027,0.03,left,"P"	,Chn_P)
		HUD_TEXT_STATIC(0.995,	0.17+0.123*2+0.04	,0.027,0.03,left,"1777",Chn_P_Value)
		HUD_TEXT_STATIC(0.995,	0.17+0.123*3		,0.027,0.03,left,"N"	,Chn_N)
		HUD_TEXT_STATIC(0.995,	0.17+0.123*3+0.04	,0.027,0.03,left,"1732",Chn_N_Value)
		HUD_TEXT_STATIC(0.995,	0.17+0.123*4		,0.027,0.03,left,"M"	,Chn_M)
		HUD_TEXT_STATIC(0.995,	0.17+0.123*4+0.04	,0.027,0.03,left,"1666",Chn_M_Value)
		HUD_TEXT_STATIC(0.995,	0.17+0.123*5		,0.027,0.03,left,"L"	,Chn_L)
		HUD_TEXT_STATIC(0.995,	0.17+0.123*5+0.04	,0.027,0.03,left,"1621",Chn_L_Value)

		HUD_TEXT_STATIC(0.505,	0.085			,0.025,0.03,center,"CHANNEL",Channel_Middle)
		HUD_TEXT_STATIC(0.505,	0.188			,0.026,0.03,center,"CHAN  3",Channel_3)
		HUD_TEXT_STATIC(0.27,	0.263			,0.026,0.028,right,"CODE  RANGES",CodeRanges)
		HUD_TEXT_STATIC(0.555,	0.263			,0.026,0.028,right,"STATUS",Status)
		HUD_TEXT_STATIC(0.273,	0.307			,0.027,0.028,right,"1111",CodeRanges_1)
		HUD_TEXT_STATIC(0.273,	0.307+0.0379*1	,0.027,0.028,right,"2111",CodeRanges_2)
		HUD_TEXT_STATIC(0.273,	0.307+0.0379*2	,0.027,0.028,right,"4111",CodeRanges_3)
		HUD_TEXT_STATIC(0.273,	0.307+0.0379*3	,0.027,0.028,right,"4311",CodeRanges_4)
		HUD_TEXT_STATIC(0.273,	0.307+0.0379*4	,0.027,0.028,right,"4511",CodeRanges_5)
		HUD_TEXT_STATIC(0.273,	0.307+0.0379*5	,0.027,0.028,right,"4711",CodeRanges_6)
		HUD_TEXT_STATIC(0.273,	0.307+0.0379*6	,0.027,0.028,right,"5111",CodeRanges_7)
		HUD_TEXT_STATIC(0.273,	0.307+0.0379*7	,0.027,0.028,right,"5311",CodeRanges_8)
		HUD_TEXT_STATIC(0.273,	0.307+0.0379*8	,0.027,0.028,right,"5511",CodeRanges_9)
		HUD_TEXT_STATIC(0.273,	0.307+0.0379*9	,0.027,0.028,right,"5711",CodeRanges_10)
		HUD_TEXT_STATIC(0.383,	0.307			,0.027,0.028,right,"-",CodeRanges_Mid_1)
		HUD_TEXT_STATIC(0.383,	0.307+0.0379*1	,0.027,0.028,right,"-",CodeRanges_Mid_2)
		HUD_TEXT_STATIC(0.383,	0.307+0.0379*2	,0.027,0.028,right,"-",CodeRanges_Mid_3)
		HUD_TEXT_STATIC(0.383,	0.307+0.0379*3	,0.027,0.028,right,"-",CodeRanges_Mid_4)
		HUD_TEXT_STATIC(0.383,	0.307+0.0379*4	,0.027,0.028,right,"-",CodeRanges_Mid_5)
		HUD_TEXT_STATIC(0.383,	0.307+0.0379*5	,0.027,0.028,right,"-",CodeRanges_Mid_6)
		HUD_TEXT_STATIC(0.383,	0.307+0.0379*6	,0.027,0.028,right,"-",CodeRanges_Mid_7)
		HUD_TEXT_STATIC(0.383,	0.307+0.0379*7	,0.027,0.028,right,"-",CodeRanges_Mid_8)
		HUD_TEXT_STATIC(0.383,	0.307+0.0379*8	,0.027,0.028,right,"-",CodeRanges_Mid_9)
		HUD_TEXT_STATIC(0.383,	0.307+0.0379*9	,0.027,0.028,right,"-",CodeRanges_Mid_10)
		HUD_TEXT_STATIC(0.423,	0.307			,0.027,0.028,right,"1788",CodeRanges_Right_1)
		HUD_TEXT_STATIC(0.423,	0.307+0.0379*1	,0.027,0.028,right,"2888",CodeRanges_Right_2)
		HUD_TEXT_STATIC(0.423,	0.307+0.0379*2	,0.027,0.028,right,"4288",CodeRanges_Right_3)
		HUD_TEXT_STATIC(0.423,	0.307+0.0379*3	,0.027,0.028,right,"4488",CodeRanges_Right_4)
		HUD_TEXT_STATIC(0.423,	0.307+0.0379*4	,0.027,0.028,right,"4688",CodeRanges_Right_5)
		HUD_TEXT_STATIC(0.423,	0.307+0.0379*5	,0.027,0.028,right,"4888",CodeRanges_Right_6)
		HUD_TEXT_STATIC(0.423,	0.307+0.0379*6	,0.027,0.028,right,"5288",CodeRanges_Right_7)
		HUD_TEXT_STATIC(0.423,	0.307+0.0379*7	,0.027,0.028,right,"5488",CodeRanges_Right_8)
		HUD_TEXT_STATIC(0.423,	0.307+0.0379*8	,0.027,0.028,right,"5688",CodeRanges_Right_9)
		HUD_TEXT_STATIC(0.423,	0.307+0.0379*9	,0.027,0.028,right,"5888",CodeRanges_Right_10)

		// Bottom
		HUD_TEXT_STATIC(0.21,	0.963		,0.025,0.03,left,"WPN",WeaponBottom)
	};
};
