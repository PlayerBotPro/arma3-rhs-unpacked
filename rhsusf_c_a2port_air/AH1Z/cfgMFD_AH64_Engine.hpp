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
	class Torque
	{
		type			= linear;
		source			= rpm;
		sourceScale		= 10;
		min				= 35;
		max				= 160;
		minPos[]		= {0.0,0.0};
		maxPos[]		= {0.0,__EVAL(0.55-0.185)};
	};
	class TurbineSpeed
	{
		type			= linear;
		source			= rpm;
		sourceScale		= 1;
		min				= 0;
		max				= 13;
		minPos[]		= {0.0,0.0};
		maxPos[]		= {0.0,__EVAL(0.55-0.165)};
	};
	class RotorSpeed
	{
		type			= linear;
		source			= rpm;
		sourceScale		= 1;
		min				= 0;
		max				= 9.4;
		minPos[]		= {0.0,0.06};
		maxPos[]		= {0.0,__EVAL(0.55-0.29)};
	};
	class RotorSpeed2: RotorSpeed
	{
		min				= 9.4;
		max				= 10;
		minPos[]		= {0.0,-0.06};
		maxPos[]		= {0.0,0.0};
	};
	class TGT_Temp
	{
		type			= linear;
		source			= rpm;
		sourceScale		= 65;
		min				= 0;
		max				= 810;
		minPos[]		= {0.0,0.0};
		maxPos[]		= {0.0,__EVAL(0.55-0.29)};
	};
	// RTD sources
	class RTD_Torque_1
	{
		type			= linear;
		source			= rtdRpm1;
		sourceIndex		= 10;
		sourceScale		= 216;
		refreshRate 	= 0.1;
		min				= 0;
		max				= 130;
		minPos[]		= {0.0,0.0};
		maxPos[]		= {0.0,__EVAL(0.43-0.155)};
	};
	class RTD_Torque_2: RTD_Torque_1
	{
		source			= rtdRpm2;
		sourceIndex		= 11;
	};
	class RTD_Torque_Level_1_1: RTD_Torque_1
	{
		max				= 30;
		maxPos[]		= {0.0,__EVAL(0.55-0.485)};
	};
	class RTD_Torque_Level_1_2: RTD_Torque_2
	{
		max				= 30;
		maxPos[]		= {0.0,__EVAL(0.55-0.485)};
	};
	class RTD_Torque_Level_1_Yellow_1: RTD_Torque_1
	{
		min				= 30;
		max				= 130;
		maxPos[]		= {0.0,__EVAL(0.43-0.155)};
	};
	class RTD_Torque_Level_1_Yellow_2: RTD_Torque_2
	{
		min				= 30;
		max				= 130;
		maxPos[]		= {0.0,__EVAL(0.43-0.155)};
	};
	class RTD_Torque_Level_2_1: RTD_Torque_1
	{
		max				= 70;
		maxPos[]		= {0.0,__EVAL(0.55-0.375)};
	};
	class RTD_Torque_Level_2_2: RTD_Torque_2
	{
		max				= 70;
		maxPos[]		= {0.0,__EVAL(0.55-0.375)};
	};
	class RTD_Torque_Level_2_Yellow_1: RTD_Torque_1
	{
		min				= 70;
		max				= 130;
		maxPos[]		= {0.0,__EVAL(0.33-0.155)};
	};
	class RTD_Torque_Level_2_Yellow_2: RTD_Torque_2
	{
		min				= 70;
		max				= 130;
		maxPos[]		= {0.0,__EVAL(0.33-0.155)};
	};
	class RTD_Torque_Level_3_1: RTD_Torque_1
	{
		max				= 100;
		maxPos[]		= {0.0,__EVAL(0.55-0.315)};
	};
	class RTD_Torque_Level_3_2: RTD_Torque_2
	{
		max				= 100;
		maxPos[]		= {0.0,__EVAL(0.55-0.315)};
	};
	class RTD_Torque_Level_3_Yellow_1: RTD_Torque_1
	{
		min				= 101;
		max				= 115;
		maxPos[]		= {0.0,__EVAL(0.27-0.21)};
	};
	class RTD_Torque_Level_3_Yellow_2: RTD_Torque_2
	{
		min				= 101;
		max				= 115;
		maxPos[]		= {0.0,__EVAL(0.27-0.21)};
	};
	class RTD_Torque_Level_3_Red_1: RTD_Torque_1
	{
		min				= 115;
		max				= 130;
		maxPos[]		= {0.0,__EVAL(0.21-0.155)};
	};
	class RTD_Torque_Level_3_Red_2: RTD_Torque_2
	{
		min				= 115;
		max				= 130;
		maxPos[]		= {0.0,__EVAL(0.21-0.155)};
	};
	// Turbine power actually
	class RTD_TurbineSpeed_1
	{
		type			= linear;
		source			= user;
		sourceIndex 	= 13;
		sourceScale		= 1;
		min				= 0;
		max				= 105;
		minPos[]		= {0.0,0.0};
		maxPos[]		= {0.0,__EVAL(0.55-0.23)};
	};
	class RTD_TurbineSpeed_2: RTD_TurbineSpeed_1
	{
		sourceIndex 	= 14;
	};
	class RTD_TurbineSpeed_Yellow_1: RTD_TurbineSpeed_1
	{
		min				= 105;
		max				= 120;
		minPos[]		= {0.0,0.0};
		maxPos[]		= {0.0,__EVAL(0.23-0.155)};
	};
	class RTD_TurbineSpeed_Yellow_2: RTD_TurbineSpeed_2
	{
		min				= 105;
		max				= 120;
		minPos[]		= {0.0,0.0};
		maxPos[]		= {0.0,__EVAL(0.23-0.155)};
	};
	class RTD_RotorSpeed
	{
		type			= linear;
		source			= user;
		sourceIndex		= 12;
		min				= 0;
		max				= 94;
		minPos[]		= {0.0,0.06};
		maxPos[]		= {0.0,__EVAL(0.55-0.29)};
	};
	class RTD_RotorSpeed2: RTD_RotorSpeed
	{
		min				= 94;
		max				= 100;
		minPos[]		= {0.0,-0.06};
		maxPos[]		= {0.0,0.0};
	};
};
class Draw
{
	alpha				= 1.0;
	color[]				= {0,0.12,0};
	MFD_CONDITION(MFD_CONDITION_NUMBER,3)
	class Static
	{
		type			= line;
		width			= 4.0;
		points[]		=
		{
			// Box Engine
			DRAW_BOX(0.105,0.93,0.09,0.05),{},
			// Line Util
			{{0.8, __EVAL(0.014)}, 1},
			{{0.87, __EVAL(0.014)}, 1},{},
			// Line Perf
			{{0.51, __EVAL(0.014)}, 1},
			{{0.61, __EVAL(0.014)}, 1},{},
			// Line Perf
			{{0.38, __EVAL(0.014)}, 1},
			{{0.46, __EVAL(0.014)}, 1},{},
			// Line Flight
			{{0.265, __EVAL(0.014)}, 1},
			{{0.33, __EVAL(0.014)}, 1},{},
		};
	};
	class Polygons
	{
		type			= polygon;
		width			= 4.0;

		#define POLYGON_BOX_BONE(bone,sizeX,sizeY,posX,posY)\
		{bone,{__EVAL(posX			), __EVAL(posY)}, 1},\
		{bone,{__EVAL(posX + sizeX 	), __EVAL(posY)}, 1},\
		{bone,{__EVAL(posX + sizeX 	), __EVAL(posY + sizeY)}, 1},\
		{bone,{__EVAL(posX			), __EVAL(posY + sizeY)}, 1}

		points[]		=
		{
			// Util arrow
			{
				{ {__EVAL(0.85+0.02), __EVAL(0.6*0.488	-0.286)}, 1},
				{ {__EVAL(0.87+0.02), __EVAL(0.6*0.50	-0.286)}, 1},
				{ {__EVAL(0.85+0.02), __EVAL(0.6*0.512	-0.286)}, 1},
			},
			// Perf arrow
			{
				{ {__EVAL(0.85-0.26), __EVAL(0.6*0.488	-0.286)}, 1},
				{ {__EVAL(0.87-0.26), __EVAL(0.6*0.50	-0.286)}, 1},
				{ {__EVAL(0.85-0.26), __EVAL(0.6*0.512	-0.286)}, 1},
			},
			// Fuel arrow
			{
				{ {__EVAL(0.85-0.39), __EVAL(0.6*0.488	-0.286)}, 1},
				{ {__EVAL(0.87-0.39), __EVAL(0.6*0.50	-0.286)}, 1},
				{ {__EVAL(0.85-0.39), __EVAL(0.6*0.512	-0.286)}, 1},
			},
			// Flight arrow
			{
				{ {__EVAL(0.85-0.53), __EVAL(0.6*0.488	-0.286)}, 1},
				{ {__EVAL(0.87-0.53), __EVAL(0.6*0.50	-0.286)}, 1},
				{ {__EVAL(0.85-0.53), __EVAL(0.6*0.512	-0.286)}, 1},
			}
		};
	};
	class GroundMode
	{
		condition = "(altitudeAGL<=6)";
		class Static
		{
			type			= line;
			width			= 4.0;
			points[]		=
			{
				{{__EVAL(0.92	*0.36 	- 0.145 -0.04), 		__EVAL(2.7*0.86		- 1.68)}, 1},
				{{__EVAL(0.92	*0.355 	- 0.145 -0.04), 		__EVAL(2.7*0.865	- 1.68)}, 1},
				{{__EVAL(0.92	*0.35 	- 0.145 -0.04), 		__EVAL(2.7*0.87		- 1.68)}, 1},
				{{__EVAL(0.92	*0.35 	- 0.145 -0.04), 		__EVAL(2.7*0.93		- 1.68)}, 1},
				{{__EVAL(0.92	*0.355 	- 0.145 -0.04), 		__EVAL(2.7*0.935	- 1.68)}, 1},
				{{__EVAL(0.92	*0.36 	- 0.145 -0.04), 		__EVAL(2.7*0.94		- 1.68)}, 1},
				{{__EVAL(0.92	*0.62 	- 0.145 -0.04), 		__EVAL(2.7*0.94		- 1.68)}, 1},
				{{__EVAL(0.92	*0.625 	- 0.145 -0.04), 		__EVAL(2.7*0.935	- 1.68)}, 1},
				{{__EVAL(0.92	*0.63 	- 0.145 -0.04), 		__EVAL(2.7*0.93		- 1.68)}, 1},
				{{__EVAL(0.92	*0.63 	- 0.145 -0.04), 		__EVAL(2.7*0.87		- 1.68)}, 1},
				{{__EVAL(0.92	*0.625 	- 0.145 -0.04), 		__EVAL(2.7*0.865	- 1.68)}, 1},
				{{__EVAL(0.92	*0.62 	- 0.145 -0.04), 		__EVAL(2.7*0.86		- 1.68)}, 1},
				{{__EVAL(0.92	*0.36 	- 0.145 -0.04), 		__EVAL(2.7*0.86		- 1.68)}, 1},{},
				{{__EVAL(0.92	*0.36 	+ 0.145 -0.04), 		__EVAL(2.7*0.86		- 1.68)}, 1},
				{{__EVAL(0.92	*0.355 	+ 0.145 -0.04), 		__EVAL(2.7*0.865	- 1.68)}, 1},
				{{__EVAL(0.92	*0.35 	+ 0.145 -0.04), 		__EVAL(2.7*0.87		- 1.68)}, 1},
				{{__EVAL(0.92	*0.35 	+ 0.145 -0.04), 		__EVAL(2.7*0.93		- 1.68)}, 1},
				{{__EVAL(0.92	*0.355 	+ 0.145 -0.04), 		__EVAL(2.7*0.935	- 1.68)}, 1},
				{{__EVAL(0.92	*0.36 	+ 0.145 -0.04), 		__EVAL(2.7*0.94		- 1.68)}, 1},
				{{__EVAL(0.92	*0.62 	+ 0.145 -0.04), 		__EVAL(2.7*0.94		- 1.68)}, 1},
				{{__EVAL(0.92	*0.625 	+ 0.145 -0.04), 		__EVAL(2.7*0.935	- 1.68)}, 1},
				{{__EVAL(0.92	*0.63 	+ 0.145 -0.04), 		__EVAL(2.7*0.93		- 1.68)}, 1},
				{{__EVAL(0.92	*0.63 	+ 0.145 -0.04), 		__EVAL(2.7*0.87		- 1.68)}, 1},
				{{__EVAL(0.92	*0.625 	+ 0.145 -0.04), 		__EVAL(2.7*0.865	- 1.68)}, 1},
				{{__EVAL(0.92	*0.62 	+ 0.145 -0.04), 		__EVAL(2.7*0.86		- 1.68)}, 1},
				{{__EVAL(0.92	*0.36 	+ 0.145 -0.04), 		__EVAL(2.7*0.86		- 1.68)}, 1},{},
			};
		};

		HUD_TEXT_STATIC(0.3	-0.08,		0.65	,0.025,0.025,center,"ENGINE",Engine)
		HUD_TEXT_STATIC(0.33-0.08,		0.69	,0.025,0.025,center,"OIL PSI",EngineOilPsi)
		HUD_TEXT_STATIC(0.3	-0.08,		0.82	,0.025,0.025,center,"1",EngineOilPsi1)
		HUD_TEXT_STATIC(0.4	-0.08,		0.82	,0.025,0.025,center,"2",EngineOilPsi2)
		HUD_TEXT_STATIC(0.57	-0.06,		0.65	,0.025,0.025,center,"HYD PSI",HydPressure)
		HUD_TEXT_STATIC(0.52	-0.06,		0.705	,0.025,0.025,right,"PRI",HydPressurePrimary)
		HUD_TEXT_STATIC(0.52	-0.06,		0.76	,0.025,0.025,right,"UTIL",HydPressureUtility)
		HUD_TEXT_STATIC(0.52	-0.06,		0.815	,0.025,0.025,right,"ACC",HydPressureAccumulator)
		HUD_TEXT_STATIC(0.62	-0.06,		0.76	,0.025,0.025,right,"3000",HydPressureUtilityVal)
		HUD_TEXT_STATIC(0.62	-0.06,		0.815	,0.025,0.025,right,"3000",HydPressureAccumulatorVal)
		class Green
		{
			condition = "rpm>=2.5";
			class EngineOilPsiValue1
			{
				type			= text;
				source			= rpm;
				sourceScale		= 8.8;
				sourceLength	= 1;
				refreshRate 	= 0.13;

				align			= center;
				scale			= 1;
				TEXT_SIZEPOS(0.3	-0.08,		0.775	,0.025,0.025)
			};
			class EngineOilPsiValue2: EngineOilPsiValue1
			{
				TEXT_SIZEPOS(0.4	-0.08,		0.775	,0.025,0.025)
				sourceScale	= 9.0;
				refreshRate	= 0.1;
			};
		};
		class Red: Green
		{
			condition = "rpm<=2.5";
			color[] = {1,0,0};
			alpha = 0.3;
			class EngineOilPsiValue1: EngineOilPsiValue1 {};
			class EngineOilPsiValue2: EngineOilPsiValue2 {};
		};
		class Hydraulics_OK
		{
			condition = "user15>=1300";
			HUD_TEXT_SOURCE_INDEX(0.62	-0.06,		0.705	,0.025,0.025,right,user,15,HydPressurePrimaryVal)
		};
		class Hydraulics_Low
		{
			condition = "user15<=1300";
			color[] = {1,0,0};
			HUD_TEXT_SOURCE_INDEX(0.62	-0.06,		0.705	,0.025,0.025,right,user,15,HydPressurePrimaryVal)
		};
	};
	class AirMode
	{
		condition = "(altitudeAGL>=6)";
		class Static
		{
			type			= line;
			width			= 4.0;
			points[]		=
			{
				{{__EVAL(3.4	*0.36 	- 0.145 -1.04), 		__EVAL(3.4*0.86		- 2.32)}, 1},
				{{__EVAL(3.4	*0.355 	- 0.145 -1.04), 		__EVAL(3.4*0.865	- 2.32)}, 1},
				{{__EVAL(3.4	*0.35 	- 0.145 -1.04), 		__EVAL(3.4*0.87		- 2.32)}, 1},
				{{__EVAL(3.4	*0.35 	- 0.145 -1.04), 		__EVAL(3.4*0.93		- 2.32)}, 1},
				{{__EVAL(3.4	*0.355 	- 0.145 -1.04), 		__EVAL(3.4*0.935	- 2.32)}, 1},
				{{__EVAL(3.4	*0.36 	- 0.145 -1.04), 		__EVAL(3.4*0.94		- 2.32)}, 1},
				{{__EVAL(3.4	*0.62 	- 0.145 -1.04), 		__EVAL(3.4*0.94		- 2.32)}, 1},
				{{__EVAL(3.4	*0.625 	- 0.145 -1.04), 		__EVAL(3.4*0.935	- 2.32)}, 1},
				{{__EVAL(3.4	*0.63 	- 0.145 -1.04), 		__EVAL(3.4*0.93		- 2.32)}, 1},
				{{__EVAL(3.4	*0.63 	- 0.145 -1.04), 		__EVAL(3.4*0.87		- 2.32)}, 1},
				{{__EVAL(3.4	*0.625 	- 0.145 -1.04), 		__EVAL(3.4*0.865	- 2.32)}, 1},
				{{__EVAL(3.4	*0.62 	- 0.145 -1.04), 		__EVAL(3.4*0.86		- 2.32)}, 1},
				{{__EVAL(3.4	*0.36 	- 0.145 -1.04), 		__EVAL(3.4*0.86		- 2.32)}, 1},{},
				{{__EVAL(0.92	*0.36 	+ 0.445 -0.04), 		__EVAL(2.7*0.86		- 2.2)}, 1},
				{{__EVAL(0.92	*0.355 	+ 0.445 -0.04), 		__EVAL(2.7*0.865	- 2.2)}, 1},
				{{__EVAL(0.92	*0.35 	+ 0.445 -0.04), 		__EVAL(2.7*0.87		- 2.2)}, 1},
				{{__EVAL(0.92	*0.35 	+ 0.445 -0.04), 		__EVAL(2.7*0.93		- 2.2)}, 1},
				{{__EVAL(0.92	*0.355 	+ 0.445 -0.04), 		__EVAL(2.7*0.935	- 2.2)}, 1},
				{{__EVAL(0.92	*0.36 	+ 0.445 -0.04), 		__EVAL(2.7*0.94		- 2.2)}, 1},
				{{__EVAL(0.92	*0.62 	+ 0.445 -0.04), 		__EVAL(2.7*0.94		- 2.2)}, 1},
				{{__EVAL(0.92	*0.625 	+ 0.445 -0.04), 		__EVAL(2.7*0.935	- 2.2)}, 1},
				{{__EVAL(0.92	*0.63 	+ 0.445 -0.04), 		__EVAL(2.7*0.93		- 2.2)}, 1},
				{{__EVAL(0.92	*0.63 	+ 0.445 -0.04), 		__EVAL(2.7*0.87		- 2.2)}, 1},
				{{__EVAL(0.92	*0.625 	+ 0.445 -0.04), 		__EVAL(2.7*0.865	- 2.2)}, 1},
				{{__EVAL(0.92	*0.62 	+ 0.445 -0.04), 		__EVAL(2.7*0.86		- 2.2)}, 1},
				{{__EVAL(0.92	*0.36 	+ 0.445 -0.04), 		__EVAL(2.7*0.86		- 2.2)}, 1},{},
				{{__EVAL(0.505), 		__EVAL(0.62)}, 1},
				{{__EVAL(0.505), 		__EVAL(0.86)}, 1},{},
				{{__EVAL(0.495), 		__EVAL(0.62)}, 1},
				{{__EVAL(0.495), 		__EVAL(0.86)}, 1},{},
			};
		};
		HUD_TEXT_STATIC(0.57	-0.06+0.3,		-0.52+0.65	,0.025,0.025,center,"HYD PSI",HydPressure)
		HUD_TEXT_STATIC(0.52	-0.06+0.3,		-0.52+0.705	,0.025,0.025,right,"PRI",HydPressurePrimary)
		HUD_TEXT_STATIC(0.52	-0.06+0.3,		-0.52+0.76	,0.025,0.025,right,"UTIL",HydPressureUtility)
		HUD_TEXT_STATIC(0.52	-0.06+0.3,		-0.52+0.815	,0.025,0.025,right,"ACC",HydPressureAccumulator)
		HUD_TEXT_STATIC(0.62	-0.06+0.3,		-0.52+0.76	,0.025,0.025,right,"3000",HydPressureUtilityVal)
		HUD_TEXT_STATIC(0.62	-0.06+0.3,		-0.52+0.815	,0.025,0.025,right,"3000",HydPressureAccumulatorVal)
		class Hydraulics_OK
		{
			condition = "user15>=1300";
			HUD_TEXT_SOURCE_INDEX(0.62	-0.06+0.3,		-0.52+0.705	,0.025,0.025,right,user,15,HydPressurePrimaryVal)
		};
		class Hydraulics_Low
		{
			condition = "user15<=1300";
			color[] = {1,0,0};
			HUD_TEXT_SOURCE_INDEX(0.62	-0.06+0.3,		-0.52+0.705	,0.025,0.025,right,user,15,HydPressurePrimaryVal)
		};
	};
	HUD_TEXT_STATIC(0.34,	0.03	,0.03,0.03,left,"FLT",Flight)
	HUD_TEXT_STATIC(0.48,	0.03	,0.03,0.03,left,"FUEL",Fuel)
	HUD_TEXT_STATIC(0.61,	0.03	,0.03,0.03,left,"PERF",Performance)
	HUD_TEXT_STATIC(0.89,	0.03	,0.03,0.03,left,"UTIL",Utilities)

	HUD_TEXT_STATIC(0.015,	0.11	,0.025,0.025,right,"TORQUE %",Torque)
	HUD_TEXT_STATIC(0.23+0.03,	0.11	,0.025,0.025,right,"TGT   C",TGT)
	HUD_TEXT_STATIC(0.305+0.03,	0.105	,0.017,0.017,right,"o",TGT_o)
	HUD_TEXT_STATIC(0.43,	0.11	,0.025,0.025,right,"N   %",EngPowerTurbineSpeed_1)
	HUD_TEXT_STATIC(0.43+0.025,	0.11+0.005	,0.025,0.025,right,"P",EngPowerTurbineSpeed_1P)
	HUD_TEXT_STATIC(0.535,	0.11	,0.025,0.025,right,"N   %",RotorSpeed)
	HUD_TEXT_STATIC(0.535+0.025,	0.11+0.005	,0.025,0.025,right,"R",RotorSpeedR)
	HUD_TEXT_STATIC(0.64,	0.11	,0.025,0.025,right,"N   %",EngPowerTurbineSpeed_2)
	HUD_TEXT_STATIC(0.64+0.025,	0.11+0.005	,0.025,0.025,right,"P",EngPowerTurbineSpeed_2P)

	HUD_TEXT_STATIC(0.83,		0.36	,0.025,0.025,right,"N   %",EngPowerTurbineSpeed_Percent_2)
	HUD_TEXT_STATIC(0.83+0.025,	0.36+0.005	,0.025,0.025,right,"P",EngPowerTurbineSpeed_Percent_2P)

	HUD_TEXT_STATIC(0.83,		0.46	,0.025,0.025,right,"N   %",EngGasGeneratorSpeed_Percent_2)
	HUD_TEXT_STATIC(0.83+0.025,	0.46+0.005	,0.025,0.025,right,"G",EngGasGeneratorSpeed_Percent_2P)
	class StarterGroup
	{
		condition = "(rpm<=4.6)* (6-altitudeAGL)";
		class White
		{
			color[] = {1,1,1};
			HUD_TEXT_STATIC(0.14+0.79,		0.6	,0.025,0.025,center,"ON",StarterOn)
		};
		HUD_TEXT_STATIC(0.86,		0.65	,0.025,0.025,center,"START",Starter)
		class Static
		{
			type			= line;
			width			= 4.0;
			points[]		=
			{
				{{__EVAL(0.92	*0.36 	+ 0.405), 		__EVAL(3.0*0.86		- 2.13)}, 1},
				{{__EVAL(0.92	*0.355 	+ 0.405), 		__EVAL(3.0*0.865	- 2.13)}, 1},
				{{__EVAL(0.92	*0.35 	+ 0.405), 		__EVAL(3.0*0.87		- 2.13)}, 1},
				{{__EVAL(0.92	*0.35 	+ 0.405), 		__EVAL(3.0*0.93		- 2.13)}, 1},
				{{__EVAL(0.92	*0.355 	+ 0.405), 		__EVAL(3.0*0.935	- 2.13)}, 1},
				{{__EVAL(0.92	*0.36 	+ 0.405), 		__EVAL(3.0*0.94		- 2.13)}, 1},
				{{__EVAL(0.92	*0.62 	+ 0.405), 		__EVAL(3.0*0.94		- 2.13)}, 1},
				{{__EVAL(0.92	*0.625 	+ 0.405), 		__EVAL(3.0*0.935	- 2.13)}, 1},
				{{__EVAL(0.92	*0.63 	+ 0.405), 		__EVAL(3.0*0.93		- 2.13)}, 1},
				{{__EVAL(0.92	*0.63 	+ 0.405), 		__EVAL(3.0*0.87		- 2.13)}, 1},
				{{__EVAL(0.92	*0.625 	+ 0.405), 		__EVAL(3.0*0.865	- 2.13)}, 1},
				{{__EVAL(0.92	*0.62 	+ 0.405), 		__EVAL(3.0*0.86		- 2.13)}, 1},
				{{__EVAL(0.92	*0.36 	+ 0.405), 		__EVAL(3.0*0.86		- 2.13)}, 1},{}
			};
		};
	};
	class StandardFlightModel
	{
		condition = simulArma;
		class TorqueLevel_0
		{
			condition = "rpm<=3.5";
			HUD_TEXT_STATIC(0.04,		0.465	,0.025,0.025,center,"0",TorqueEng1)
			HUD_TEXT_STATIC(0.14,		0.465	,0.025,0.025,center,"0",TorqueEng2)
			class Red
			{
				color[] = {1,0,0};
				alpha = 1;
				class DrawLines
				{
					type			= line;
					width			= 6.0;
					points[]		=
					{
						// Torque line
						{{__EVAL(0.02-0.015),	 __EVAL(0.18+0.25)}, 1},
						{{__EVAL(0.2-0.015),	 __EVAL(0.18+0.25)}, 1},{},
					};
				};
				class DrawPolygons
				{
					type			= polygon;
					points[]		=
					{
						// Torque romb
						{
							{{__EVAL(0.1	-0.015), 	__EVAL(0.18+0.25)}, 1},
							{{__EVAL(0.11	-0.015), 	__EVAL(0.19+0.25)}, 1},
							{{__EVAL(0.12	-0.015), 	__EVAL(0.18+0.25)}, 1},
							{{__EVAL(0.11	-0.015), 	__EVAL(0.17+0.25)}, 1}
						},
					};
				};
			};
		};
		class TorqueLevel_1: TorqueLevel_0
		{
			condition = "(rpm<=5)*(rpm>=3.5)";
			class Torque_Eng1
			{
				type			= text;
				source			= rpm;
				sourceScale		= 12.1;
				sourceOffset 	= -35;
				sourceLength	= 1;
				refreshRate 	= 0.13;

				align			= center;
				scale			= 1;
				TEXT_SIZEPOS(0.04,		0.465	,0.025,0.025)
			};
			class Torque_Eng2: Torque_Eng1
			{
				TEXT_SIZEPOS(0.14,		0.465	,0.025,0.025)
				source			= rpm;
				sourceScale		= 12.4;
				refreshRate 	= 0.1;
			};
			class Red: Red
			{
				class DrawLines: DrawLines
				{
				};
				class DrawPolygons: DrawPolygons
				{
				};
			};
		};
		class TorqueLevel_2: TorqueLevel_1
		{
			condition = "(rpm>=5)*(rpm<=9)";
			class Torque_Eng1: Torque_Eng1
			{
				TEXT_SIZEPOS(0.04,		0.315	,0.025,0.025)
			};
			class Torque_Eng2: Torque_Eng2
			{
				TEXT_SIZEPOS(0.14,		0.315	,0.025,0.025)
			};
			class Red: Red
			{
				class DrawLines: DrawLines
				{
					points[]		=
					{
						// Torque line
						{{__EVAL(0.02-0.015),	 __EVAL(0.18+0.1)}, 1},
						{{__EVAL(0.2-0.015),	 __EVAL(0.18+0.1)}, 1},{},
					};
				};
				class DrawPolygons: DrawPolygons
				{
					points[]		=
					{
						// Torque romb
						{
							{{__EVAL(0.1	-0.015), 	__EVAL(0.18+0.1)}, 1},
							{{__EVAL(0.11	-0.015), 	__EVAL(0.19+0.1)}, 1},
							{{__EVAL(0.12	-0.015), 	__EVAL(0.18+0.1)}, 1},
							{{__EVAL(0.11	-0.015), 	__EVAL(0.17+0.1)}, 1}
						},
					};
				};
			};
		};
		class TorqueLevel_3: TorqueLevel_1
		{
			condition = "rpm>=9";
			class Torque_Eng1: Torque_Eng1
			{
				TEXT_SIZEPOS(0.04,		0.25	,0.025,0.025)
			};
			class Torque_Eng2: Torque_Eng2
			{
				TEXT_SIZEPOS(0.14,		0.25	,0.025,0.025)
			};
			class Red: Red
			{
				class DrawLines: DrawLines
				{
					points[]		=
					{
						// Torque line
						{{__EVAL(0.02-0.015),	 __EVAL(0.18+0.02)}, 1},
						{{__EVAL(0.2-0.015),	 __EVAL(0.18+0.02)}, 1},{},
					};
				};
				class DrawPolygons: DrawPolygons
				{
					points[]		=
					{
						// Torque romb
						{
							{{__EVAL(0.1	-0.015), 	__EVAL(0.18+0.02)}, 1},
							{{__EVAL(0.11	-0.015), 	__EVAL(0.19+0.02)}, 1},
							{{__EVAL(0.12	-0.015), 	__EVAL(0.18+0.02)}, 1},
							{{__EVAL(0.11	-0.015), 	__EVAL(0.17+0.02)}, 1}
						},
					};
				};
			};
		};
		class RPM_Eng1
		{
			type			= text;
			source			= rpm;
			sourceScale		= 10.1;
			sourceLength	= 1;
			refreshRate 	= 0.13;

			align			= center;
			scale			= 1;
			TEXT_SIZEPOS(0.04+0.76,		0.405	,0.025,0.025)
		};
		class RPM_Eng2: RPM_Eng1
		{
			TEXT_SIZEPOS(0.14+0.78,		0.405	,0.025,0.025)
			source			= rpm;
			sourceScale		= 10.4;
			refreshRate 	= 0.1;
		};
		class TGT_Eng1
		{
			type			= text;
			source			= rpm;
			sourceScale		= 71.9;
			refreshRate 	= 0.13;

			align			= center;
			scale			= 1;
			TEXT_SIZEPOS(0.04+0.23,	0.255	,0.025,0.025)
		};
		class TGT_Eng2: TGT_Eng1
		{
			TEXT_SIZEPOS(0.14+0.23,	0.255	,0.025,0.025)
			sourceScale		= 71.8;
			refreshRate 	= 0.1;
		};
		class GasGen_Ok
		{
			condition = "rpm>=6.3";
			class GasGen_Eng1
			{
				type			= text;
				source			= rpm;
				sourceScale		= 9.9;
				sourceLength	= 1;
				sourcePrecision = 1;
				refreshRate 	= 0.13;

				align			= center;
				scale			= 1;
				TEXT_SIZEPOS(0.04+0.76,		0.505	,0.025,0.025)
			};
			class GasGen_Eng2: GasGen_Eng1
			{
				TEXT_SIZEPOS(0.14+0.78,		0.505	,0.025,0.025)
				sourceScale		= 9.8;
				refreshRate 	= 0.1;
			};
		};
		class Red
		{
			color[] = {1,0,0};
			alpha = 0.1;
			class GasGen_Low
			{
				condition = "rpm<=6.3";
				class GasGen_Eng1
				{
					type			= text;
					source			= rpm;
					sourceScale		= 9.9;
					sourceLength	= 1;
					sourcePrecision = 1;
					refreshRate 	= 0.13;

					align			= center;
					scale			= 1;
					TEXT_SIZEPOS(0.04+0.76,		0.505	,0.025,0.025)
				};
				class GasGen_Eng2: GasGen_Eng1
				{
					TEXT_SIZEPOS(0.14+0.78,		0.505	,0.025,0.025)
					sourceScale		= 9.8;
					refreshRate 	= 0.1;
				};
			};
		};
		class DrawTGT_Green
		{
			alpha = 0.6;
			class DrawPolygon
			{
				type = polygon;
				points[] =
				{
					// Torque Eng 1
					{
						{{__EVAL(0.10-0.07), 	__EVAL(0.55)}, 1},
						{{__EVAL(0.12-0.07), 	__EVAL(0.55)}, 1},
						{Torque,1,{__EVAL(0.12-0.07), 	__EVAL(0.185)}, 1},
						{Torque,1,{__EVAL(0.10-0.07), 	__EVAL(0.185)}, 1}
					},
					// Torque Eng 2
					{
						{{__EVAL(0.10+0.03), 	__EVAL(0.55)}, 1},
						{{__EVAL(0.12+0.03), 	__EVAL(0.55)}, 1},
						{Torque,1,{__EVAL(0.12+0.03), 	__EVAL(0.185)}, 1},
						{Torque,1,{__EVAL(0.10+0.03), 	__EVAL(0.185)}, 1}
					},
					// TGT Eng 1
					{
						{{__EVAL(0.10+0.16), 				__EVAL(0.55)}, 1},
						{{__EVAL(0.12+0.16), 				__EVAL(0.55)}, 1},
						{TGT_Temp,1,{__EVAL(0.12+0.16), 	__EVAL(0.29)}, 1},
						{TGT_Temp,1,{__EVAL(0.10+0.16), 	__EVAL(0.29)}, 1}
					},
					// TGT Eng 2
					{
						{{__EVAL(0.10+0.26), 	__EVAL(0.55)}, 1},
						{{__EVAL(0.12+0.26), 	__EVAL(0.55)}, 1},
						{TGT_Temp,1,{__EVAL(0.12+0.26), 	__EVAL(0.29)}, 1},
						{TGT_Temp,1,{__EVAL(0.10+0.26), 	__EVAL(0.29)}, 1}
					},
					// Turbine Speed Eng 1
					{
						{{__EVAL(0.10+0.35), 	__EVAL(0.55)}, 1},
						{{__EVAL(0.12+0.35), 	__EVAL(0.55)}, 1},
						{TurbineSpeed,1,{__EVAL(0.12+0.35), 	__EVAL(0.165)}, 1},
						{TurbineSpeed,1,{__EVAL(0.10+0.35), 	__EVAL(0.165)}, 1}
					},
					// Turbine Speed Eng 2
					{
						{{__EVAL(0.10+0.56), 	__EVAL(0.55)}, 1},
						{{__EVAL(0.12+0.56), 	__EVAL(0.55)}, 1},
						{TurbineSpeed,1,{__EVAL(0.12+0.56), 	__EVAL(0.175)}, 1},
						{TurbineSpeed,1,{__EVAL(0.10+0.56), 	__EVAL(0.175)}, 1}
					}
				};
			};
		};
		class DrawRotor_Green
		{
			condition = "rpm>=9.4";
			alpha = 0.6;
			class DrawPolygon
			{
				type = polygon;
				points[] =
				{
					// Rotor Speed
					{
						{{__EVAL(0.10 +0.425), 	__EVAL(0.55)}, 1},
						{{__EVAL(0.19 +0.425), 	__EVAL(0.55)}, 1},
						{RotorSpeed2,1,RotorSpeed,1,{__EVAL(0.19 +0.425), 	__EVAL(0.29)}, 1},
						{RotorSpeed2,1,RotorSpeed,1,{__EVAL(0.10 +0.425), 	__EVAL(0.29)}, 1}
					},
				};
			};
			class RotorSpeed
			{
				type			= text;
				source			= rpm;
				sourceScale		= 9.9;
				sourceLength	= 1;
				sourcePrecision = 0;
				refreshRate 	= 0.13;

				align			= center;
				scale			= 1;
				TEXT_SIZEPOS(0.57,	0.255	,0.025,0.025)
			};
		};
		class DrawRotor_Red: DrawRotor_Green
		{
			condition = "rpm<=9.4";
			color[] = {1,0,0};
			alpha = 0.3;
			class DrawPolygon
			{
				type = polygon;
				points[] =
				{
					// Rotor Speed
					{
						{{__EVAL(0.10 +0.425), 	__EVAL(0.55)}, 1},
						{{__EVAL(0.19 +0.425), 	__EVAL(0.55)}, 1},
						{RotorSpeed2,1,RotorSpeed,1,{__EVAL(0.19 +0.425), 	__EVAL(0.29)}, 1},
						{RotorSpeed2,1,RotorSpeed,1,{__EVAL(0.10 +0.425), 	__EVAL(0.29)}, 1}
					},
				};
			};
			class RotorSpeed: RotorSpeed {};
		};
		class DrawTGT_Yellow
		{
			color[] = {1,0.3,0};
			class DrawPolygon
			{
				type = polygon;
				points[] =
				{
					/*// TGT Eng 1
					{
						{{__EVAL(0.09+0.16), 	__EVAL(0.245)}, 1},
						{{__EVAL(0.13+0.16), 	__EVAL(0.245)}, 1},
						{{__EVAL(0.13+0.16), 	__EVAL(0.185)}, 1},
						{{__EVAL(0.09+0.16), 	__EVAL(0.185)}, 1}
					},
					// TGT Eng 2
					{
						{{__EVAL(0.09+0.26), 	__EVAL(0.245)}, 1},
						{{__EVAL(0.13+0.26), 	__EVAL(0.245)}, 1},
						{{__EVAL(0.13+0.26), 	__EVAL(0.185)}, 1},
						{{__EVAL(0.09+0.26), 	__EVAL(0.185)}, 1}
					},
					// Rotor Speed
					{
						{{__EVAL(0.10 +0.425), 	__EVAL(0.245)}, 1},
						{{__EVAL(0.19 +0.425), 	__EVAL(0.245)}, 1},
						{{__EVAL(0.19 +0.425), 	__EVAL(0.175)}, 1},
						{{__EVAL(0.10 +0.425), 	__EVAL(0.175)}, 1}
					},*/
				};
			};
		};
	};
	class AdvancedFlightModel: StandardFlightModel
	{
		condition = simulRTD;
		class TorqueLevel_1
		{
			condition = "(user12<=50)";
			class Red
			{
				color[] = {1,0,0};
				class DrawLines
				{
					type 			= line;
					width			= 4;
					points[]		=
					{
						// Torque line
						{{__EVAL(0.02-0.015),	 __EVAL(0.18+0.25)}, 1},
						{{__EVAL(0.2-0.015),	 __EVAL(0.18+0.25)}, 1},{},
					};
				};
				class DrawPolygons
				{
					type			= polygon;
					points[]		=
					{
						// Torque romb
						{
							{{__EVAL(0.1	-0.015), 	__EVAL(0.18+0.25)}, 1},
							{{__EVAL(0.11	-0.015), 	__EVAL(0.19+0.25)}, 1},
							{{__EVAL(0.12	-0.015), 	__EVAL(0.18+0.25)}, 1},
							{{__EVAL(0.11	-0.015), 	__EVAL(0.17+0.25)}, 1}
						},
					};
				};
			};
			class Nominal_L
			{
				condition = "(rtdRpm1*216)<=30";
				class Torque_Eng1
				{
					type			= text;
					source			= rtdRpm1;
					sourceScale 	= 216;
					sourceIndex 	= 10;
					sourceLength	= 1;
					refreshRate 	= 0.13;

					align			= center;
					scale			= 1;
					TEXT_SIZEPOS(0.04,		0.445	,0.025,0.025)
				};
				class DrawPolygons
				{
					type			= polygon;
					points[]		=
					{
						// Torque Eng 1
						{
							{{__EVAL(0.10-0.07), 	__EVAL(0.55)}, 1},
							{{__EVAL(0.12-0.07), 	__EVAL(0.55)}, 1},
							{RTD_Torque_Level_1_1,1,{__EVAL(0.12-0.07), 	__EVAL(0.485)}, 1},
							{RTD_Torque_Level_1_1,1,{__EVAL(0.10-0.07), 	__EVAL(0.485)}, 1}
						},
					};
				};
			};
			class Nominal_R: Nominal_L
			{
				condition = "(rtdRpm2*216)<=30";
				class Torque_Eng2: Torque_Eng1
				{
					TEXT_SIZEPOS(0.14,		0.445	,0.025,0.025)
					source			= rtdRpm2;
					sourceScale 	= 216;
					sourceIndex 	= 11;
					refreshRate 	= 0.1;
				};
				class DrawPolygons: DrawPolygons
				{
					points[]		=
					{
						// Torque Eng 2
						{
							{{__EVAL(0.10+0.03), 	__EVAL(0.55)}, 1},
							{{__EVAL(0.12+0.03), 	__EVAL(0.55)}, 1},
							{RTD_Torque_Level_1_2,1,{__EVAL(0.12+0.03), 	__EVAL(0.485)}, 1},
							{RTD_Torque_Level_1_2,1,{__EVAL(0.10+0.03), 	__EVAL(0.485)}, 1}
						},
					};
				};
			};
			class Overtorque_L: Nominal_L
			{
				condition = "(rtdRpm1*216)>=30";
				color[] = {1,0,0};
				class Torque_Eng1: Torque_Eng1 {};
				class DrawPolygons: DrawPolygons
				{
					points[]		=
					{
						// Torque Eng 1
						{
							{{__EVAL(0.10-0.07), 	__EVAL(0.55)}, 1},
							{{__EVAL(0.12-0.07), 	__EVAL(0.55)}, 1},
							{RTD_Torque_Level_1_1,1,{__EVAL(0.12-0.07), 	__EVAL(0.485)}, 1},
							{RTD_Torque_Level_1_1,1,{__EVAL(0.10-0.07), 	__EVAL(0.485)}, 1}
						},
						// Torque Eng 1
						{
							{{__EVAL(0.09-0.07), 	__EVAL(0.43)}, 1},
							{{__EVAL(0.13-0.07), 	__EVAL(0.43)}, 1},
							{RTD_Torque_Level_1_Yellow_1,1,{__EVAL(0.13-0.07), 	__EVAL(0.155)}, 1},
							{RTD_Torque_Level_1_Yellow_1,1,{__EVAL(0.09-0.07), 	__EVAL(0.155)}, 1}
						},
					};
				};
			};
			class Overtorque_R: Nominal_R
			{
				condition = "(rtdRpm2*216)>=30";
				color[] = {1,0,0};
				class Torque_Eng2: Torque_Eng2 {};
				class DrawPolygons: DrawPolygons
				{
					points[]		=
					{
						// Torque Eng 2
						{
							{{__EVAL(0.10+0.03), 	__EVAL(0.55)}, 1},
							{{__EVAL(0.12+0.03), 	__EVAL(0.55)}, 1},
							{RTD_Torque_Level_1_2,1,{__EVAL(0.12+0.03), 	__EVAL(0.485)}, 1},
							{RTD_Torque_Level_1_2,1,{__EVAL(0.10+0.03), 	__EVAL(0.485)}, 1}
						},
						// Torque Eng 2
						{
							{{__EVAL(0.09+0.03), 	__EVAL(0.43)}, 1},
							{{__EVAL(0.13+0.03), 	__EVAL(0.43)}, 1},
							{RTD_Torque_Level_1_Yellow_2,1,{__EVAL(0.13+0.03), 	__EVAL(0.155)}, 1},
							{RTD_Torque_Level_1_Yellow_2,1,{__EVAL(0.09+0.03), 	__EVAL(0.155)}, 1}
						},
					};
				};
			};
		};
		class TorqueLevel_2: TorqueLevel_1
		{
			condition = "(user12>=50)*(user12<=90)";
			class Red: Red
			{
				class DrawLines: DrawLines
				{
					points[]		=
					{
						// Torque line
						{{__EVAL(0.02-0.015),	 __EVAL(0.18+0.15)}, 1},
						{{__EVAL(0.2-0.015),	 __EVAL(0.18+0.15)}, 1},{},
					};
				};
				class DrawPolygons: DrawPolygons
				{
					points[]		=
					{
						// Torque romb
						{
							{{__EVAL(0.1	-0.015), 	__EVAL(0.18+0.15)}, 1},
							{{__EVAL(0.11	-0.015), 	__EVAL(0.19+0.15)}, 1},
							{{__EVAL(0.12	-0.015), 	__EVAL(0.18+0.15)}, 1},
							{{__EVAL(0.11	-0.015), 	__EVAL(0.17+0.15)}, 1}
						},
					};
				};
			};
			class Nominal_L: Nominal_L
			{
				condition = "(rtdRpm1*216)<=70";
				class Torque_Eng1: Torque_Eng1
				{
					TEXT_SIZEPOS(0.04,		0.34	,0.025,0.025)
				};
				class DrawPolygons: DrawPolygons
				{
					points[]		=
					{
						// Torque Eng 1
						{
							{{__EVAL(0.10-0.07), 	__EVAL(0.55)}, 1},
							{{__EVAL(0.12-0.07), 	__EVAL(0.55)}, 1},
							{RTD_Torque_Level_2_1,1,{__EVAL(0.12-0.07), 	__EVAL(0.375)}, 1},
							{RTD_Torque_Level_2_1,1,{__EVAL(0.10-0.07), 	__EVAL(0.375)}, 1}
						},
					};
				};
			};
			class Nominal_R: Nominal_R
			{
				condition = "(rtdRpm2*216)<=70";
				class Torque_Eng2: Torque_Eng2
				{
					TEXT_SIZEPOS(0.14,		0.34	,0.025,0.025)
				};
				class DrawPolygons: DrawPolygons
				{
					points[]		=
					{
						// Torque Eng 2
						{
							{{__EVAL(0.10+0.03), 	__EVAL(0.55)}, 1},
							{{__EVAL(0.12+0.03), 	__EVAL(0.55)}, 1},
							{RTD_Torque_Level_2_2,1,{__EVAL(0.12+0.03), 	__EVAL(0.375)}, 1},
							{RTD_Torque_Level_2_2,1,{__EVAL(0.10+0.03), 	__EVAL(0.375)}, 1}
						},
					};
				};
			};
			class Overtorque_L: Nominal_L
			{
				condition = "(rtdRpm1*216)>=70";
				color[] = {1,0,0};
				class Torque_Eng1: Torque_Eng1 {};
				class DrawPolygons: DrawPolygons
				{
					points[]		=
					{
						// Torque Eng 1
						{
							{{__EVAL(0.10-0.07), 	__EVAL(0.55)}, 1},
							{{__EVAL(0.12-0.07), 	__EVAL(0.55)}, 1},
							{RTD_Torque_Level_2_1,1,{__EVAL(0.12-0.07), 	__EVAL(0.375)}, 1},
							{RTD_Torque_Level_2_1,1,{__EVAL(0.10-0.07), 	__EVAL(0.375)}, 1}
						},
						// Torque Eng 1
						{
							{{__EVAL(0.09-0.07), 	__EVAL(0.33)}, 1},
							{{__EVAL(0.13-0.07), 	__EVAL(0.33)}, 1},
							{RTD_Torque_Level_2_Yellow_1,1,{__EVAL(0.13-0.07), 	__EVAL(0.155)}, 1},
							{RTD_Torque_Level_2_Yellow_1,1,{__EVAL(0.09-0.07), 	__EVAL(0.155)}, 1}
						},
					};
				};
			};
			class Overtorque_R: Nominal_R
			{
				condition = "(rtdRpm2*216)>=70";
				color[] = {1,0,0};
				class Torque_Eng2: Torque_Eng2 {};
				class DrawPolygons: DrawPolygons
				{
					points[]		=
					{
						// Torque Eng 2
						{
							{{__EVAL(0.10+0.03), 	__EVAL(0.55)}, 1},
							{{__EVAL(0.12+0.03), 	__EVAL(0.55)}, 1},
							{RTD_Torque_Level_2_2,1,{__EVAL(0.12+0.03), 	__EVAL(0.375)}, 1},
							{RTD_Torque_Level_2_2,1,{__EVAL(0.10+0.03), 	__EVAL(0.375)}, 1}
						},
						// Torque Eng 2
						{
							{{__EVAL(0.09+0.03), 	__EVAL(0.33)}, 1},
							{{__EVAL(0.13+0.03), 	__EVAL(0.33)}, 1},
							{RTD_Torque_Level_2_Yellow_2,1,{__EVAL(0.13+0.03), 	__EVAL(0.155)}, 1},
							{RTD_Torque_Level_2_Yellow_2,1,{__EVAL(0.09+0.03), 	__EVAL(0.155)}, 1}
						},
					};
				};
			};
		};
		class TorqueLevel_3: TorqueLevel_1
		{
			condition = "(user12>=90)";
			class Red: Red
			{
				class DrawLines: DrawLines
				{
					points[]		=
					{
						// Torque line
						{{__EVAL(0.02-0.015),	 __EVAL(0.18+0.03)}, 1},
						{{__EVAL(0.2-0.015),	 __EVAL(0.18+0.03)}, 1},{},
					};
				};
				class DrawPolygons: DrawPolygons
				{
					points[]		=
					{
						// Torque romb
						{
							{{__EVAL(0.1	-0.015), 	__EVAL(0.18+0.03)}, 1},
							{{__EVAL(0.11	-0.015), 	__EVAL(0.19+0.03)}, 1},
							{{__EVAL(0.12	-0.015), 	__EVAL(0.18+0.03)}, 1},
							{{__EVAL(0.11	-0.015), 	__EVAL(0.17+0.03)}, 1}
						},
					};
				};
			};
			class Nominal_L: Nominal_L
			{
				condition = "(rtdRpm1*216)<=100";
				class Torque_Eng1: Torque_Eng1
				{
					TEXT_SIZEPOS(0.04,		0.28	,0.025,0.025)
				};
				class DrawPolygons: DrawPolygons
				{
					points[]		=
					{
						// Torque Eng 1
						{
							{{__EVAL(0.10-0.07), 	__EVAL(0.55)}, 1},
							{{__EVAL(0.12-0.07), 	__EVAL(0.55)}, 1},
							{RTD_Torque_Level_3_1,1,{__EVAL(0.12-0.07), 	__EVAL(0.315)}, 1},
							{RTD_Torque_Level_3_1,1,{__EVAL(0.10-0.07), 	__EVAL(0.315)}, 1}
						},
					};
				};
			};
			class Nominal_R: Nominal_R
			{
				condition = "(rtdRpm2*216)<=100";
				class Torque_Eng2: Torque_Eng2
				{
					TEXT_SIZEPOS(0.14,		0.28	,0.025,0.025)
				};
				class DrawPolygons: DrawPolygons
				{
					points[]		=
					{
						// Torque Eng 2
						{
							{{__EVAL(0.10+0.03), 	__EVAL(0.55)}, 1},
							{{__EVAL(0.12+0.03), 	__EVAL(0.55)}, 1},
							{RTD_Torque_Level_3_2,1,{__EVAL(0.12+0.03), 	__EVAL(0.315)}, 1},
							{RTD_Torque_Level_3_2,1,{__EVAL(0.10+0.03), 	__EVAL(0.315)}, 1}
						},
					};
				};
			};
			class Overtorque_L: Nominal_L
			{
				condition = "((rtdRpm1*216)>=100)*((rtdRpm1*216)<=115)";
				color[] = {1,0.3,0};
				class Torque_Eng1: Torque_Eng1 {};
				class DrawPolygons: DrawPolygons
				{
					points[]		=
					{
						// Torque Eng 1
						{
							{{__EVAL(0.10-0.07), 	__EVAL(0.55)}, 1},
							{{__EVAL(0.12-0.07), 	__EVAL(0.55)}, 1},
							{RTD_Torque_Level_3_1,1,{__EVAL(0.12-0.07), 	__EVAL(0.315)}, 1},
							{RTD_Torque_Level_3_1,1,{__EVAL(0.10-0.07), 	__EVAL(0.315)}, 1}
						},
						// Torque Eng 1
						{
							{{__EVAL(0.09-0.07), 	__EVAL(0.27)}, 1},
							{{__EVAL(0.13-0.07), 	__EVAL(0.27)}, 1},
							{RTD_Torque_Level_3_Yellow_1,1,{__EVAL(0.13-0.07), 	__EVAL(0.21)}, 1},
							{RTD_Torque_Level_3_Yellow_1,1,{__EVAL(0.09-0.07), 	__EVAL(0.21)}, 1}
						},
					};
				};
			};
			class Overtorque_R: Nominal_R
			{
				condition = "((rtdRpm2*216)>=100)*((rtdRpm2*216)<=115)";
				color[] = {1,0.3,0};
				class Torque_Eng2: Torque_Eng2 {};
				class DrawPolygons: DrawPolygons
				{
					points[]		=
					{
						// Torque Eng 2
						{
							{{__EVAL(0.10+0.03), 	__EVAL(0.55)}, 1},
							{{__EVAL(0.12+0.03), 	__EVAL(0.55)}, 1},
							{RTD_Torque_Level_3_2,1,{__EVAL(0.12+0.03), 	__EVAL(0.315)}, 1},
							{RTD_Torque_Level_3_2,1,{__EVAL(0.10+0.03), 	__EVAL(0.315)}, 1}
						},
						// Torque Eng 2
						{
							{{__EVAL(0.09+0.03), 	__EVAL(0.27)}, 1},
							{{__EVAL(0.13+0.03), 	__EVAL(0.27)}, 1},
							{RTD_Torque_Level_3_Yellow_2,1,{__EVAL(0.13+0.03), 	__EVAL(0.21)}, 1},
							{RTD_Torque_Level_3_Yellow_2,1,{__EVAL(0.09+0.03), 	__EVAL(0.21)}, 1}
						},
					};
				};
			};
			class DoNotExceed_L: Nominal_L
			{
				condition = "((rtdRpm1*216)>=115)";
				color[] = {1,0,0};
				class Torque_Eng1: Torque_Eng1 {};
				class DrawPolygons: DrawPolygons
				{
					points[]		=
					{
						// Torque Eng 1
						{
							{{__EVAL(0.10-0.07), 	__EVAL(0.55)}, 1},
							{{__EVAL(0.12-0.07), 	__EVAL(0.55)}, 1},
							{RTD_Torque_Level_3_1,1,{__EVAL(0.12-0.07), 	__EVAL(0.315)}, 1},
							{RTD_Torque_Level_3_1,1,{__EVAL(0.10-0.07), 	__EVAL(0.315)}, 1}
						},
						// Torque Eng 1
						{
							{{__EVAL(0.09-0.07), 	__EVAL(0.27)}, 1},
							{{__EVAL(0.13-0.07), 	__EVAL(0.27)}, 1},
							{RTD_Torque_Level_3_Yellow_1,1,{__EVAL(0.13-0.07), 	__EVAL(0.21)}, 1},
							{RTD_Torque_Level_3_Yellow_1,1,{__EVAL(0.09-0.07), 	__EVAL(0.21)}, 1}
						},
						// DNE Eng 1
						{
							{{__EVAL(0.08-0.07), 	__EVAL(0.21)}, 1},
							{{__EVAL(0.14-0.07), 	__EVAL(0.21)}, 1},
							{RTD_Torque_Level_3_Red_1,1,{__EVAL(0.14-0.07), 	__EVAL(0.155)}, 1},
							{RTD_Torque_Level_3_Red_1,1,{__EVAL(0.08-0.07), 	__EVAL(0.155)}, 1}
						},
					};
				};
			};
			class DoNotExceed_R: Nominal_R
			{
				condition = "((rtdRpm2*216)>=115)";
				color[] = {1,0,0};
				class Torque_Eng2: Torque_Eng2 {};
				class DrawPolygons: DrawPolygons
				{
					points[]		=
					{
						// Torque Eng 2
						{
							{{__EVAL(0.10+0.03), 	__EVAL(0.55)}, 1},
							{{__EVAL(0.12+0.03), 	__EVAL(0.55)}, 1},
							{RTD_Torque_Level_3_2,1,{__EVAL(0.12+0.03), 	__EVAL(0.315)}, 1},
							{RTD_Torque_Level_3_2,1,{__EVAL(0.10+0.03), 	__EVAL(0.315)}, 1}
						},
						// Torque Eng 2
						{
							{{__EVAL(0.09+0.03), 	__EVAL(0.27)}, 1},
							{{__EVAL(0.13+0.03), 	__EVAL(0.27)}, 1},
							{RTD_Torque_Level_3_Yellow_2,1,{__EVAL(0.13+0.03), 	__EVAL(0.21)}, 1},
							{RTD_Torque_Level_3_Yellow_2,1,{__EVAL(0.09+0.03), 	__EVAL(0.21)}, 1}
						},
						// DNE Eng 2
						{
							{{__EVAL(0.08+0.03), 	__EVAL(0.21)}, 1},
							{{__EVAL(0.14+0.03), 	__EVAL(0.21)}, 1},
							{RTD_Torque_Level_3_Red_2,1,{__EVAL(0.14+0.03), 	__EVAL(0.155)}, 1},
							{RTD_Torque_Level_3_Red_2,1,{__EVAL(0.08+0.03), 	__EVAL(0.155)}, 1}
						},
					};
				};
			};
		};
		// Actually engine power
		class RPM_Eng1: RPM_Eng1
		{
			source			= user;
			sourceIndex 	= 13;
			sourceScale		= 1;
		};
		class RPM_Eng2: RPM_Eng2
		{
			source			= user;
			sourceIndex 	= 14;
			sourceScale		= 1;
		};
		class TGT_Eng1: TGT_Eng1 {};
		class TGT_Eng2: TGT_Eng2 {};
		class GasGen_Ok: GasGen_Ok
		{
			condition = "rpm>=6.3";
			class GasGen_Eng1: GasGen_Eng1
			{
				type			= text;
				source			= rpm;
				sourceScale		= 9.9;
				sourceLength	= 1;
				sourcePrecision = 1;
				refreshRate 	= 0.13;
			};
			class GasGen_Eng2: GasGen_Eng1
			{
				TEXT_SIZEPOS(0.14+0.78,		0.505	,0.025,0.025)
				sourceScale		= 9.8;
				refreshRate 	= 0.1;
			};
		};
		class Red: Red
		{
			class GasGen_Low: GasGen_Low
			{
				condition = "rpm<=6.3";
				class GasGen_Eng1: GasGen_Eng1
				{
					source			= rpm;
					sourceScale		= 9.9;
					sourceLength	= 1;
					sourcePrecision = 1;
					refreshRate 	= 0.13;
				};
				class GasGen_Eng2: GasGen_Eng1
				{
					TEXT_SIZEPOS(0.14+0.78,		0.505	,0.025,0.025)
					sourceScale		= 9.8;
					refreshRate 	= 0.1;
				};
			};
		};
		class DrawTGT_Green
		{
			alpha = 0.6;
			class DrawPolygon
			{
				type = polygon;
				points[] =
				{
					// TGT Eng 1
					{
						{{__EVAL(0.10+0.16), 				__EVAL(0.55)}, 1},
						{{__EVAL(0.12+0.16), 				__EVAL(0.55)}, 1},
						{TGT_Temp,1,{__EVAL(0.12+0.16), 	__EVAL(0.29)}, 1},
						{TGT_Temp,1,{__EVAL(0.10+0.16), 	__EVAL(0.29)}, 1}
					},
					// TGT Eng 2
					{
						{{__EVAL(0.10+0.26), 	__EVAL(0.55)}, 1},
						{{__EVAL(0.12+0.26), 	__EVAL(0.55)}, 1},
						{TGT_Temp,1,{__EVAL(0.12+0.26), 	__EVAL(0.29)}, 1},
						{TGT_Temp,1,{__EVAL(0.10+0.26), 	__EVAL(0.29)}, 1}
					},
				};
			};
		};
		class DrawEngineP_1_Green
		{
			condition = "user13<=105";
			class DrawPolygon
			{
				type = polygon;
				points[] =
				{
					// Turbine Speed Eng 1
					{
						{{__EVAL(0.10+0.35), 	__EVAL(0.55)}, 1},
						{{__EVAL(0.12+0.35), 	__EVAL(0.55)}, 1},
						{RTD_TurbineSpeed_1,1,{__EVAL(0.12+0.35), 	__EVAL(0.23)}, 1},
						{RTD_TurbineSpeed_1,1,{__EVAL(0.10+0.35), 	__EVAL(0.23)}, 1}
					}
				};
			};
		};
		class DrawEngineP_2_Green
		{
			condition = "user14<=105";
			class DrawPolygon
			{
				type = polygon;
				points[] =
				{
					// Turbine Speed Eng 2
					{
						{{__EVAL(0.10+0.56), 	__EVAL(0.55)}, 1},
						{{__EVAL(0.12+0.56), 	__EVAL(0.55)}, 1},
						{RTD_TurbineSpeed_2,1,{__EVAL(0.12+0.56), 	__EVAL(0.23)}, 1},
						{RTD_TurbineSpeed_2,1,{__EVAL(0.10+0.56), 	__EVAL(0.23)}, 1}
					}
				};
			};
		};
		class DrawEngineP_1_Yellow: DrawEngineP_1_Green
		{
			condition = "user13>=105";
			color[] = {1,0.3,0};
			class DrawPolygon: DrawPolygon
			{
				points[] =
				{
					// Turbine Speed Eng 1
					{
						{{__EVAL(0.10+0.35), 	__EVAL(0.55)}, 1},
						{{__EVAL(0.12+0.35), 	__EVAL(0.55)}, 1},
						{RTD_TurbineSpeed_1,1,{__EVAL(0.12+0.35), 	__EVAL(0.23)}, 1},
						{RTD_TurbineSpeed_1,1,{__EVAL(0.10+0.35), 	__EVAL(0.23)}, 1}
					},
					// Turbine Speed Eng 1 - Yellow
					{
						{{__EVAL(0.09+0.35), 	__EVAL(0.23)}, 1},
						{{__EVAL(0.13+0.35), 	__EVAL(0.23)}, 1},
						{RTD_TurbineSpeed_Yellow_1,1,{__EVAL(0.13+0.35), 	__EVAL(0.155)}, 1},
						{RTD_TurbineSpeed_Yellow_1,1,{__EVAL(0.09+0.35), 	__EVAL(0.155)}, 1}
					},
				};
			};
		};
		class DrawEngineP_2_Yellow: DrawEngineP_2_Green
		{
			condition = "user14>=105";
			color[] = {1,0.3,0};
			class DrawPolygon: DrawPolygon
			{
				points[] =
				{
					// Turbine Speed Eng 2
					{
						{{__EVAL(0.10+0.56), 	__EVAL(0.55)}, 1},
						{{__EVAL(0.12+0.56), 	__EVAL(0.55)}, 1},
						{RTD_TurbineSpeed_2,1,{__EVAL(0.12+0.56), 	__EVAL(0.23)}, 1},
						{RTD_TurbineSpeed_2,1,{__EVAL(0.10+0.56), 	__EVAL(0.23)}, 1}
					},
					// Turbine Speed Eng 2 - Yellow
					{
						{{__EVAL(0.09+0.56), 	__EVAL(0.23)}, 1},
						{{__EVAL(0.13+0.56), 	__EVAL(0.23)}, 1},
						{RTD_TurbineSpeed_Yellow_2,1,{__EVAL(0.13+0.56), 	__EVAL(0.155)}, 1},
						{RTD_TurbineSpeed_Yellow_2,1,{__EVAL(0.09+0.56), 	__EVAL(0.155)}, 1}
					},
				};
			};
		};
		class DrawRotor_Green
		{
			condition = "user12>=94";
			alpha = 0.6;
			class DrawPolygon
			{
				type = polygon;
				points[] =
				{
					// Rotor Speed
					{
						{{__EVAL(0.10 +0.425), 	__EVAL(0.55)}, 1},
						{{__EVAL(0.19 +0.425), 	__EVAL(0.55)}, 1},
						{RTD_RotorSpeed2,1,RTD_RotorSpeed,1,{__EVAL(0.19 +0.425), 	__EVAL(0.29)}, 1},
						{RTD_RotorSpeed2,1,RTD_RotorSpeed,1,{__EVAL(0.10 +0.425), 	__EVAL(0.29)}, 1}
					},
				};
			};
			class RotorSpeed
			{
				type			= text;
				source			= user;
				sourceIndex		= 12;
				sourceScale		= 1;
				sourceLength	= 1;
				sourcePrecision = 0;
				refreshRate 	= 0.13;

				align			= center;
				scale			= 1;
				TEXT_SIZEPOS(0.57,	0.255	,0.025,0.025)
			};
		};
		class DrawRotor_Red: DrawRotor_Green
		{
			condition = "user12<=94";
			color[] = {1,0,0};
			alpha = 0.3;
			class DrawPolygon
			{
				type = polygon;
				points[] =
				{
					// Rotor Speed
					{
						{{__EVAL(0.10 +0.425), 	__EVAL(0.55)}, 1},
						{{__EVAL(0.19 +0.425), 	__EVAL(0.55)}, 1},
						{RTD_RotorSpeed2,1,RTD_RotorSpeed,1,{__EVAL(0.19 +0.425), 	__EVAL(0.29)}, 1},
						{RTD_RotorSpeed2,1,RTD_RotorSpeed,1,{__EVAL(0.10 +0.425), 	__EVAL(0.29)}, 1}
					},
				};
			};
			class RotorSpeed: RotorSpeed {};
		};
	};
	class DrawBlackBackground
	{
		color[] = {0.0,0.0,0.0};
		alpha = 1;
		class DrawPolygon
		{
			type = polygon;
			points[] =
			{
				// Rotor Speed
				{
					{{__EVAL(0.10 +0.425), 		__EVAL(0.52)}, 1},
					{{__EVAL(0.10 +0.425), 		__EVAL(0.55)}, 1},
					{{__EVAL(0.145 +0.425), 	__EVAL(0.55)}, 1},
				},
				{
					{{__EVAL(0.19 +0.425), 		__EVAL(0.52)}, 1},
					{{__EVAL(0.19 +0.425), 		__EVAL(0.55)}, 1},
					{{__EVAL(0.145 +0.425), 	__EVAL(0.55)}, 1},
				},
				{
					{{__EVAL(0.10 	+0.425), 		__EVAL(0.29)}, 1},
					{{__EVAL(0.145 	+0.425-0.02), 	__EVAL(0.29)}, 1},
					{{__EVAL(0.145 	+0.425-0.02)), 	__EVAL(0.55-0.2)}, 1},
					{{__EVAL(0.10 	+0.425), 		__EVAL(0.53-0.2)}, 1},
				},
				{
					{{__EVAL(0.19 	+0.425), 		__EVAL(0.29)}, 1},
					{{__EVAL(0.145 	+0.425+0.02), 	__EVAL(0.29)}, 1},
					{{__EVAL(0.145 	+0.425+0.02)), 	__EVAL(0.55-0.2)}, 1},
					{{__EVAL(0.19 	+0.425), 		__EVAL(0.53-0.2)}, 1},
				},
				// Turbine Speed Eng 1
				{
					{{__EVAL(0.10 	+0.35), 		__EVAL(0.22)}, 1},
					{{__EVAL(0.10 	+0.35), 		__EVAL(0.23)}, 1},
					{{__EVAL(0.09 	+0.35), 		__EVAL(0.23)}, 1},
				},
				{
					{{__EVAL(0.12 	+0.35), 		__EVAL(0.22)}, 1},
					{{__EVAL(0.12 	+0.35), 		__EVAL(0.23)}, 1},
					{{__EVAL(0.13 	+0.35), 		__EVAL(0.23)}, 1},
				},
				{
					{{__EVAL(0.11 	+0.35), 		__EVAL(0.155)}, 1},
					{{__EVAL(0.09 	+0.35), 		__EVAL(0.155)}, 1},
					{{__EVAL(0.09 	+0.35), 		__EVAL(0.17)}, 1},
				},
				{
					{{__EVAL(0.11 	+0.35), 		__EVAL(0.155)}, 1},
					{{__EVAL(0.13 	+0.35), 		__EVAL(0.155)}, 1},
					{{__EVAL(0.13 	+0.35), 		__EVAL(0.17)}, 1},
				},
				// Turbine Speed Eng 2
				{
					{{__EVAL(0.10 	+0.56), 		__EVAL(0.22)}, 1},
					{{__EVAL(0.10 	+0.56), 		__EVAL(0.23)}, 1},
					{{__EVAL(0.09 	+0.56), 		__EVAL(0.23)}, 1},
				},
				{
					{{__EVAL(0.12 	+0.56), 		__EVAL(0.22)}, 1},
					{{__EVAL(0.12 	+0.56), 		__EVAL(0.23)}, 1},
					{{__EVAL(0.13 	+0.56), 		__EVAL(0.23)}, 1},
				},
				{
					{{__EVAL(0.11 	+0.56), 		__EVAL(0.155)}, 1},
					{{__EVAL(0.09 	+0.56), 		__EVAL(0.155)}, 1},
					{{__EVAL(0.09 	+0.56), 		__EVAL(0.17)}, 1},
				},
				{
					{{__EVAL(0.11 	+0.56), 		__EVAL(0.155)}, 1},
					{{__EVAL(0.13 	+0.56), 		__EVAL(0.155)}, 1},
					{{__EVAL(0.13 	+0.56), 		__EVAL(0.17)}, 1},
				},
			};
		};
	};
	class Yellow
	{
		color[] = {1,0.3,0};
		alpha = 1;
		class DrawLines
		{
			type			= line;
			width			= 6.0;
			points[]		=
			{
				// TGT line
				{{__EVAL(0.02	+0.21), 	__EVAL(0.195 	- 0.02)}, 1},
				{{__EVAL(0.1	+0.21), 	__EVAL(0.195 	- 0.02)}, 1},{},
				{{__EVAL(0.02	+0.21), 	__EVAL(0.21 	- 0.02)}, 1},
				{{__EVAL(0.1	+0.21), 	__EVAL(0.21 	- 0.02)}, 1},{},
				{{__EVAL(0.02	+0.21), 	__EVAL(0.225 	- 0.02)}, 1},
				{{__EVAL(0.1	+0.21), 	__EVAL(0.225 	- 0.02)}, 1},{},

				{{__EVAL(0.12	+0.21), 	__EVAL(0.195	- 0.02)}, 1},
				{{__EVAL(0.2	+0.21), 	__EVAL(0.195	- 0.02)}, 1},{},
				{{__EVAL(0.12	+0.21), 	__EVAL(0.21		- 0.02)}, 1},
				{{__EVAL(0.2	+0.21), 	__EVAL(0.21		- 0.02)}, 1},{},
				{{__EVAL(0.12	+0.21), 	__EVAL(0.225	- 0.02)}, 1},
				{{__EVAL(0.2	+0.21), 	__EVAL(0.225	- 0.02)}, 1},{},
			};
		};
	};
	class Red
	{
		color[] = {1,0,0};
		alpha = 1;
		class DrawLines
		{
			type			= line;
			width			= 6.0;
			points[]		=
			{
				// TGT line
				{{__EVAL(0.02	+0.21), 	__EVAL(0.16)}, 1},
				{{__EVAL(0.2	+0.21), 	__EVAL(0.16)}, 1},{},
				// NR line
				{{__EVAL(0.9*0.1	+0.435),	__EVAL(0.22)}, 1},
				{{__EVAL(0.9*0.15	+0.435), 	__EVAL(0.19)}, 1},
				{{__EVAL(0.9*0.2	+0.435), 	__EVAL(0.22)}, 1},
			};
		};
		class DrawPolygons
		{
			type			= polygon;
			points[]		=
			{
				// TGT romb
				{
					{{__EVAL(0.1 	+ 0.21), 	__EVAL(0.18-0.02)}, 1},
					{{__EVAL(0.11 	+ 0.21), 	__EVAL(0.19-0.02)}, 1},
					{{__EVAL(0.12 	+ 0.21), 	__EVAL(0.18-0.02)}, 1},
					{{__EVAL(0.11 	+ 0.21), 	__EVAL(0.17-0.02)}, 1}
				},
				// NR1 romb
				{
					{{__EVAL(0.1 	+ 0.41), 	__EVAL(0.18+0.01)}, 1},
					{{__EVAL(0.11 	+ 0.41), 	__EVAL(0.19+0.01)}, 1},
					{{__EVAL(0.12 	+ 0.41), 	__EVAL(0.18+0.01)}, 1},
					{{__EVAL(0.11 	+ 0.41), 	__EVAL(0.17+0.01)}, 1}
				},
				// NR1 romb
				{
					{{__EVAL(0.1 	+ 0.41 + 0.1), 	__EVAL(0.18+0.01)}, 1},
					{{__EVAL(0.11 	+ 0.41 + 0.1), 	__EVAL(0.19+0.01)}, 1},
					{{__EVAL(0.12 	+ 0.41 + 0.1), 	__EVAL(0.18+0.01)}, 1},
					{{__EVAL(0.11 	+ 0.41 + 0.1), 	__EVAL(0.17+0.01)}, 1}
				},
			};
		};
	};

	HUD_TEXT_STATIC(0.04,		0.56	,0.025,0.025,center,"1",TorqueEng1)
	HUD_TEXT_STATIC(0.14,		0.56	,0.025,0.025,center,"2",TorqueEng2)
	HUD_TEXT_STATIC(0.04+0.23,	0.56	,0.025,0.025,center,"1",TGTEng1)
	HUD_TEXT_STATIC(0.14+0.23,	0.56	,0.025,0.025,center,"2",TGTEng2)
	HUD_TEXT_STATIC(0.04+0.42,	0.56	,0.025,0.025,center,"1",TurbineSpeed1)
	HUD_TEXT_STATIC(0.14+0.53,	0.56	,0.025,0.025,center,"2",TurbineSpeed2)
	HUD_TEXT_STATIC(0.04+0.76,	0.56	,0.025,0.025,center,"1",TurbineSpeed1_Percent)
	HUD_TEXT_STATIC(0.14+0.78,	0.56	,0.025,0.025,center,"2",TurbineSpeed2_Percent)

	HUD_TEXT_STATIC(0.19,	0.94	,0.03,0.03,left,"ENG",Engine)
	HUD_TEXT_STATIC(0.33,	0.94	,0.03,0.03,left,"SYS",System)
	HUD_TEXT_STATIC(0.47,	0.94	,0.03,0.03,left,"ETF",ETF)
	HUD_TEXT_STATIC(0.89,	0.94	,0.03,0.03,left,"WCA",WCA)
};
