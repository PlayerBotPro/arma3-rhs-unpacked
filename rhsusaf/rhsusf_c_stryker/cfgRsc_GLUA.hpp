#define GUI_GRID_X	(0)
#define GUI_GRID_Y	(0)
#define GUI_GRID_W	((0.01875 * SafezoneH))
#define GUI_GRID_H	((0.025 * SafezoneH))
#define GUI_GRID_WAbs	(1)
#define GUI_GRID_HAbs	(1)

class RHS_GrenadeLauncherUnitAssembly_Options
{
	enableSimulation = true;
	idd = 201;
	movingenable = false;
	//onLoad = "sliderSetRange [1900,0.01,1];sliderSetPosition [1900,cameraon animationSourcePhase 'BFT_Map_Scale']";
	class Objects
	{
		class Model
		{
			idc			= 901;
			type		= 82;
			model		= "\rhsusf\addons\rhsusf_c_stryker\data\rhsusf_GLUA.p3d";
			direction[]	= {0, 0, -1};
			up[]		= {0, 1, 0};

			x			= "20.0 * (((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y			= "14.1 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + (safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
			z			= 0.06;
			scale		= 0.15 * (SafeZoneW Min SafeZoneH);
			xBack		= 0; yBack = 0;zBack		= 0;inBack		= 0;enableZoom	= 0; zoomDuration = 0;

			useGlobalLight = 0;
			minGlobalLightIntensity = -11111111110.1;

			class AnimationSources
			{
				class rhsusf_weap_M6_active 		{source = "user";	initPhase = 1; animPeriod = 0.25;};
				class rhsusf_weap_M6_reload 		{source = "user";	initPhase = 0; animPeriod = 0.25;};
				class rhsusf_weap_M6_L1_active 		{source = "user";	initPhase = 1; animPeriod = 0.25;};
				class rhsusf_weap_M6_L2_active 		{source = "user";	initPhase = 1; animPeriod = 0.25;};
				class rhsusf_weap_M6_L3_active 		{source = "user";	initPhase = 1; animPeriod = 0.25;};
				class rhsusf_weap_M6_R1_active 		{source = "user";	initPhase = 1; animPeriod = 0.25;};
				class rhsusf_weap_M6_R2_active 		{source = "user";	initPhase = 1; animPeriod = 0.25;};
				class rhsusf_weap_M6_R3_active 		{source = "user";	initPhase = 1; animPeriod = 0.25;};
				class ind_smoke_override 			{source = "user";	initPhase = 0; animPeriod = 0.25;};
			};
		};
	};
	class Controls
	{
		class Button_Smoke_L1: RscButton
		{
			idc		= 1600;
			x		= 5.5 * GUI_GRID_W + GUI_GRID_X;
			y		= 2 * GUI_GRID_H + GUI_GRID_Y;
			w		= 3.0 * GUI_GRID_W;
			h		= 4.0 * GUI_GRID_H;
			tooltip = "Switch smoke launcher";

			colorDisabled[]				= {1,1,1,0.25};
			colorBackground[]			= {0,0,0,0.0};
			colorBackgroundDisabled[]	= {0,0,0,0.0};
			colorBackgroundActive[]		= {0,0,0,0};
			colorFocused[]				= {0,0,0,0};
			soundClick[] = { "", 0.0, 1 };
		};
		class Button_Smoke_L2: Button_Smoke_L1
		{
			idc		= 1601;
			x		= 5.5 * GUI_GRID_W + GUI_GRID_X;
			y		= 9.5 * GUI_GRID_H + GUI_GRID_Y;
			w		= 3.0 * GUI_GRID_W;
			h		= 4.0 * GUI_GRID_H;
		};
		class Button_Smoke_L3: Button_Smoke_L1
		{
			idc		= 1602;
			x		= 5.5 * GUI_GRID_W + GUI_GRID_X;
			y		= 16.5 * GUI_GRID_H + GUI_GRID_Y;
			w		= 3.0 * GUI_GRID_W;
			h		= 4.0 * GUI_GRID_H;
		};
		class Button_Smoke_R1: Button_Smoke_L1
		{
			idc		= 1603;
			x		= 17.0 * GUI_GRID_W + GUI_GRID_X;
			y		= 2 * GUI_GRID_H + GUI_GRID_Y;
			w		= 3.0 * GUI_GRID_W;
			h		= 4.0 * GUI_GRID_H;
		};
		class Button_Smoke_R2: Button_Smoke_L1
		{
			idc		= 1604;
			x		= 17.0 * GUI_GRID_W + GUI_GRID_X;
			y		= 9.5 * GUI_GRID_H + GUI_GRID_Y;
			w		= 3.0 * GUI_GRID_W;
			h		= 4.0 * GUI_GRID_H;
		};
		class Button_Smoke_R3: Button_Smoke_L1
		{
			idc		= 1605;
			x		= 17.0 * GUI_GRID_W + GUI_GRID_X;
			y		= 16.5 * GUI_GRID_H + GUI_GRID_Y;
			w		= 3.0 * GUI_GRID_W;
			h		= 4.0 * GUI_GRID_H;
		};
		class Button_Smoke_Fire: Button_Smoke_L1
		{
			tooltip = "Fire smoke grenades";
			idc		= 1606;
			x		= 22.5 * GUI_GRID_W + GUI_GRID_X;
			y		= 14.0 * GUI_GRID_H + GUI_GRID_Y;
			w		= 3.0 * GUI_GRID_W;
			h		= 4.0 * GUI_GRID_H;
		};
	};
};

