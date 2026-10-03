#define PosX0Center 0.50 // 502
#define PosY0Center 0.50 // 49
#define SizeX10deg 0.186
#define SizeY10deg 0.141

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
MFD_MATERIAL


class Bones
{
};
class Draw
{
	alpha				= 1.0;
	color[]				= {0,0.12,0};
	MFD_CONDITION(MFD_CONDITION_NUMBER,2)

	HUD_TEXT_STATIC(0.21,	0.96	,0.03,0.025,right,"IND",BtnIND)
	HUD_TEXT_STATIC(0.46,	0.96	,0.03,0.025,right,"SWAP",BtnSWAP)
	HUD_TEXT_STATIC(0.34,	0.96	,0.03,0.025,right,"HSD",BtnHSD)
	HUD_TEXT_STATIC(0.72,	0.96	,0.03,0.025,right,"DCLT",BtnDCLT)

	HUD_TEXT_STATIC(0.21,	0.03	,0.03,0.025,right,"GUN",BtnGun)
	HUD_TEXT_STATIC(0.46,	0.03	,0.03,0.025,right,"TGP",BtnTGP)
	HUD_TEXT_STATIC(0.72,	0.03	,0.03,0.025,right,"CODE",BtnCode)
	HUD_TEXT_STATIC(0.5, 0.88+0.29-0.41,0.045,	0.04,center,"SELECTED",PylonText1)
	HUD_TEXT_SOURCE(0.5, 0.88+0.35-0.41,0.045,	0.04,center,weapon,WeaponText)
	HUD_TEXT_SOURCE(0.5, 0.88+0.42-0.41,0.045,	0.04,center,ammo,AmmoText)
	class Static
	{
		type		= line;
		width		= 12.0;
		points[]	=
		{
			{{0.205,		0.15},1},
			{{0.35,		0.15},1},
			{{0.5,		0.35},1},
			{},
			{{0.205,		0.25},1},
			{{0.30,		0.25},1},
			{{0.4,		0.35},1},
			{},
			{{0.205,		0.55},1},
			{{0.22,		0.55},1},
			{{0.28,		0.35},1},
			{},
			{{__EVAL(1-0.20),		0.55},1},
			{{__EVAL(1-0.22),		0.55},1},
			{{__EVAL(1-0.28),		0.35},1},
			{},
			{{__EVAL(1- 0.20),		0.25},1},
			{{__EVAL(1- 0.30),		0.25},1},
			{{__EVAL(1- 0.4),		0.35},1},
			{},
			#define SCALE_IMG 512
			#define OFFSET_IMG_X -0.01
			#define OFFSET_IMG_Y 0.05
			// Plane shape
			{{__EVAL(264/SCALE_IMG + OFFSET_IMG_X)					,__EVAL(328/SCALE_IMG + OFFSET_IMG_Y)},1},
			{{__EVAL(269/SCALE_IMG + OFFSET_IMG_X)					,__EVAL(318/SCALE_IMG + OFFSET_IMG_Y)},1},
			{{__EVAL(328/SCALE_IMG + OFFSET_IMG_X)					,__EVAL(313/SCALE_IMG + OFFSET_IMG_Y)},1},
			{{__EVAL(328/SCALE_IMG + OFFSET_IMG_X)					,__EVAL(294/SCALE_IMG + OFFSET_IMG_Y)},1},
			{{__EVAL(275/SCALE_IMG + OFFSET_IMG_X)					,__EVAL(283/SCALE_IMG + OFFSET_IMG_Y)},1},
			{{__EVAL(272/SCALE_IMG + OFFSET_IMG_X)					,__EVAL(269/SCALE_IMG + OFFSET_IMG_Y)},1},
			{{__EVAL(277/SCALE_IMG + OFFSET_IMG_X)					,__EVAL(186/SCALE_IMG + OFFSET_IMG_Y)},1},
			{{__EVAL(412/SCALE_IMG + OFFSET_IMG_X)					,__EVAL(160/SCALE_IMG + OFFSET_IMG_Y)},1},
			{{__EVAL(412/SCALE_IMG + OFFSET_IMG_X)					,__EVAL(132/SCALE_IMG + OFFSET_IMG_Y)},1},
			{{__EVAL(277/SCALE_IMG + OFFSET_IMG_X)					,__EVAL(125/SCALE_IMG + OFFSET_IMG_Y)},1},
			{{__EVAL(274/SCALE_IMG + OFFSET_IMG_X)					,__EVAL(71/SCALE_IMG + OFFSET_IMG_Y)},1},
			{{__EVAL(272/SCALE_IMG + OFFSET_IMG_X)					,__EVAL(51/SCALE_IMG + OFFSET_IMG_Y)},1},
			{{__EVAL(269/SCALE_IMG + OFFSET_IMG_X)					,__EVAL(43/SCALE_IMG + OFFSET_IMG_Y)},1},
			{{__EVAL(264/SCALE_IMG + OFFSET_IMG_X)					,__EVAL(38/SCALE_IMG + OFFSET_IMG_Y)},1},
			{{__EVAL(259/SCALE_IMG + OFFSET_IMG_X)					,__EVAL(43/SCALE_IMG + OFFSET_IMG_Y)},1},
			{{__EVAL(256/SCALE_IMG + OFFSET_IMG_X)					,__EVAL(51/SCALE_IMG + OFFSET_IMG_Y)},1},
			{{__EVAL(253/SCALE_IMG + OFFSET_IMG_X)					,__EVAL(71/SCALE_IMG + OFFSET_IMG_Y)},1},
			{{__EVAL(250/SCALE_IMG + OFFSET_IMG_X)					,__EVAL(125/SCALE_IMG + OFFSET_IMG_Y)},1},
			{{__EVAL(116/SCALE_IMG + OFFSET_IMG_X)					,__EVAL(132/SCALE_IMG + OFFSET_IMG_Y)},1},
			{{__EVAL(116/SCALE_IMG + OFFSET_IMG_X)					,__EVAL(160/SCALE_IMG + OFFSET_IMG_Y)},1},
			{{__EVAL(251/SCALE_IMG + OFFSET_IMG_X)					,__EVAL(186/SCALE_IMG + OFFSET_IMG_Y)},1},
			{{__EVAL(256/SCALE_IMG + OFFSET_IMG_X)					,__EVAL(269/SCALE_IMG + OFFSET_IMG_Y)},1},
			{{__EVAL(253/SCALE_IMG + OFFSET_IMG_X)					,__EVAL(283/SCALE_IMG + OFFSET_IMG_Y)},1},
			{{__EVAL(200/SCALE_IMG + OFFSET_IMG_X)					,__EVAL(294/SCALE_IMG + OFFSET_IMG_Y)},1},
			{{__EVAL(200/SCALE_IMG + OFFSET_IMG_X)					,__EVAL(313/SCALE_IMG + OFFSET_IMG_Y)},1},
			{{__EVAL(259/SCALE_IMG + OFFSET_IMG_X)					,__EVAL(318/SCALE_IMG + OFFSET_IMG_Y)},1},
			{{__EVAL(264/SCALE_IMG + OFFSET_IMG_X)					,__EVAL(328/SCALE_IMG + OFFSET_IMG_Y)},1},

		};
	};
	class Static_3
	{
		type		= line;
		width		= 3.0;
		points[]	=
		{
			DRAW_BOX(0.02,0.11,0.185,0.08),{},
			DRAW_BOX(0.02,0.21,0.185,0.08),{},
			DRAW_BOX(0.02,0.51,0.185,0.08),{},
			DRAW_BOX(0.8,0.51,0.185,0.08),{},
			DRAW_BOX(0.8,0.21,0.185,0.08),{},
			DRAW_BOX(0.68,0.11,0.31,0.08),{},
			{{0,0.715},1},
			{{1,0.715},1},{},
			{{0,0.725},1},
			{{1,0.725},1},{},
		};
	};
	class White
	{
		color[] = {1,1,1};
		alpha = 0.5;
		class Static_3
		{
			type		= line;
			width		= 6.0;
			points[]	=
			{
			};
		};
	};
	class GreenPolygon
	{
		type = polygon;
		points[] =
		{
			// HSD
			{
				POLYGON_BOX(0.125,0.05,0.575,0.95)
			},
		};
	};
	class BlackText
	{
		color[] = {0,0,0};
		alpha = 1;
		HUD_TEXT_STATIC(0.6,	0.96	,0.03,0.025,right,"SMS",BtnSMS1)
		HUD_TEXT_STATIC(0.6,	0.96	,0.03,0.025,right,"SMS",BtnSMS2)
		HUD_TEXT_STATIC(0.6,	0.96	,0.03,0.025,right,"SMS",BtnSMS3)
	};
	class Pylon1
	{
		type	= "pylonicon";
		pos[]	= {{__EVAL(0.50-0.23), 0.35}, 1};
		pylon	= 1;
		name	= "RHS_A29_Weap_MFD";
	};
	class Pylon2: Pylon1
	{
		pos[]	= {{__EVAL(0.50-0.1), 0.35}, 1};
		pylon	= 2;
	};
	class Pylon3: Pylon1
	{
		pos[]	= {{__EVAL(0.50), 0.35}, 1};
		pylon	= 3;
	};
	class Pylon4: Pylon1
	{
		pos[]	= {{__EVAL(0.50+0.1), 0.35}, 1};
		pylon	= 4;
	};
	class Pylon5: Pylon1
	{
		pos[]	= {{__EVAL(0.50+0.23), 0.35}, 1};
		pylon	= 5;
	};
	class Pylon1_Text
	{
		type	= "pylonicon";
		pos[]	= {{0.03,0.5}, 1};
		pylon	= 1;
		name	= "RHS_A29_Weap_MFD_Inventory";
	};
	class Pylon2_Text: Pylon1_Text
	{
		pos[]	= {{0.03,0.2}, 1};
		pylon	= 2;
	};
	class Pylon3_Text: Pylon1_Text
	{
		pos[]	= {{0.03,0.1}, 1};
		pylon	= 3;
	};
	class Pylon4_Text: Pylon1_Text
	{
		pos[]	= {{0.81,0.2}, 1};
		pylon	= 4;
	};
	class Pylon5_Text: Pylon1_Text
	{
		pos[]	= {{0.81,0.5}, 1};
		pylon	= 5;
	};
};