
class CfgFontFamilies
{
	class rhs_font_rus
	{
		fonts[] = {"\rhsafrf\addons\rhs_optics\scripts\font_rus\rus_font_b-bold46"};
	};
	class rhs_digital_font
	{
		fonts[] = {"\rhsafrf\addons\rhs_optics\scripts\digitalfont\digital46"};
	};
	class rhs_digital_font_var
	{
		fonts[] = {"\rhsafrf\addons\rhs_optics\scripts\digitalfont_var\digital_var46"};
	};
	class rhs_digital_font_rus
	{
		fonts[] = {"\rhsafrf\addons\rhs_optics\scripts\digitalfont_rus\digital_var46"};
	};
};

class RscMapControl;
class RscEdit;
class RscOpticsValue;
class RscOpticsText;
class RscIGUIText;
class RscIGUIValue;
class RscText;
class RscPicture;
class HScrollbar;
class VScrollbar;

class RscControlsGroup;
class RscControlsGroupNoScrollbars;

class rhs_1v528_Button
{
	access = 0;
	type = 1;
	text = "";
	colorText[] = {1,1,1,1};
	colorDisabled[] = {1, 1, 1, 0};
	colorBackground[] = { 0, 0, 0, 0.0 };
	colorBackgroundDisabled[] = { 0, 0, 0, 0.0 };
	colorBackgroundActive[] = { 0, 0, 0, 0 };
	colorFocused[] =
	{ 0, 0, 0, 0 };
	colorShadow[] = { 0, 0, 0, 0 };
	colorBorder[] = { 0, 0, 0, 	0 };
	soundEnter[] = { "\A3\ui_f\data\sound\RscButton\soundEnter", 0.09, 1 };
	soundPush[] = { "\A3\ui_f\data\sound\RscButton\soundPush", 0.09, 1 };
	soundClick[] = { "\A3\ui_f\data\sound\RscButton\soundClick", 0.00,	1};
	soundEscape[] = { "\A3\ui_f\data\sound\RscButton\soundEscape", 0.09, 1 };
	style = 2;
	x = 0;
	y = 0;
	w = "<null>";
	h = "<null>";
	shadow = 2;
	font = "PuristaMedium";
	sizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
	borderSize = 0;
	offsetX = 0;
	offsetY = 0;
	offsetPressedX = 0;
	offsetPressedY = 0;
	period = 1.2;
	periodFocus = 1.2;
	periodOver = 1.2;
};

#include "scripts\1v528\comp_1v528.hpp"

class RHS_Empty_Control
{
	enableSimulation = true;
	idd = 8101;
	movingenable = false;
	class Controls {};
};

class RscCompass;

// UI Locking Disabler
class CfgInGameUI
{
	class Cursor
	{
		class Targeting
		{
			class MarkedTarget
			{
				color[] =
				{
					"(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])",
					"(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])",
					"(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])",
					"(profilenamespace getvariable ['IGUI_TEXT_RGB_A',0.8])+(profilenamespace getvariable ['RHS_UI_Targeting',0])"
				};
				colorLockable[] =
				{
					"(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])",
					"(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])",
					"(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])",
					"(profilenamespace getvariable ['IGUI_TEXT_RGB_A',0.8])+(profilenamespace getvariable ['RHS_UI_Targeting',0])"
				};
				colorFriendly[] =
				{
					"(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])",
					"(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])",
					"(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])",
					"(profilenamespace getvariable ['IGUI_TEXT_RGB_A',0.8])+(profilenamespace getvariable ['RHS_UI_Targeting',0])"
				};
			};
			class MarkedTargetNoLos: MarkedTarget
			{
				color[] =
				{
					"(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])",
					"(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])",
					"(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])",
					"0.6+(profilenamespace getvariable ['RHS_UI_Targeting',0])"
				};
				colorLockable[] =
				{
					"(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])",
					"(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])",
					"(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])",
					"(profilenamespace getvariable ['IGUI_TEXT_RGB_A',0.8])+(profilenamespace getvariable ['RHS_UI_Targeting',0])"
				};
				colorFriendly[] =
				{
					"(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])",
					"(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])",
					"(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])",
					"(profilenamespace getvariable ['IGUI_TEXT_RGB_A',0.8])+(profilenamespace getvariable ['RHS_UI_Targeting',0])"
				};
			};
			class Seeker
			{
				color[] =
				{
					"(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])",
					"(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])",
					"(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])",
					"(profilenamespace getvariable ['IGUI_TEXT_RGB_A',0.8])+(profilenamespace getvariable ['RHS_UI_Targeting',0])"
				};
			};
			class SeekerLocked: Seeker
			{
				color[] =
				{
					"(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])",
					"(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])",
					"(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])",
					"(profilenamespace getvariable ['IGUI_TEXT_RGB_A',0.8])+(profilenamespace getvariable ['RHS_UI_Targeting',0])"
				};
			};
			class SeekerNoLOS: Seeker
			{
				color[] =
				{
					"(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])",
					"(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])",
					"(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])",
					"0.6+(profilenamespace getvariable ['RHS_UI_Targeting',0])"
				};
			};
			class ImpactPoint: Seeker
			{
				color[] =
				{
					"(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])",
					"(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])",
					"(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])",
					"(profilenamespace getvariable ['IGUI_TEXT_RGB_A',0.8])+(profilenamespace getvariable ['RHS_UI_Targeting',0])"
				};
			};
			class ImpactPointNoLOS: ImpactPoint
			{
				color[] =
				{
					"(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])",
					"(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])",
					"(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])",
					"(profilenamespace getvariable ['IGUI_TEXT_RGB_A',0.8])+(profilenamespace getvariable ['RHS_UI_Targeting',0])"
				};
			};
			class HitPrediction: Seeker
			{
				color[] =
				{
					"(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])",
					"(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])",
					"(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])",
					"(profilenamespace getvariable ['IGUI_TEXT_RGB_A',0.8])+(profilenamespace getvariable ['RHS_UI_Targeting',0])"
				};
			};
			class HitConfirm: Seeker
			{
			};
			class KnownTarget: Seeker
			{
				color[] =
				{
					"(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])",
					"(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])",
					"(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])",
					"(profilenamespace getvariable ['IGUI_TEXT_RGB_A',0.8])+(profilenamespace getvariable ['RHS_UI_Targeting',0])"
				};
			};
			class LaserTarget: KnownTarget
			{
				color[] =
				{
					"(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])",
					"(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])",
					"(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])",
					"(profilenamespace getvariable ['IGUI_TEXT_RGB_A',0.8])+(profilenamespace getvariable ['RHS_UI_Targeting',0])"
				};
			};
			class MarkedTargetNoLosRemote: MarkedTarget
			{
				color[] =
				{
					"(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])",
					"(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])",
					"(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])",
					"(profilenamespace getvariable ['IGUI_TEXT_RGB_A',0.8])+(profilenamespace getvariable ['RHS_UI_Targeting',0])"
				};
				colorLockable[] =
				{
					"(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])",
					"(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])",
					"(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])",
					"(profilenamespace getvariable ['IGUI_TEXT_RGB_A',0.8])+(profilenamespace getvariable ['RHS_UI_Targeting',0])"
				};
				colorFriendly[] =
				{
					"(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])",
					"(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])",
					"(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])",
					"(profilenamespace getvariable ['IGUI_TEXT_RGB_A',0.8])+(profilenamespace getvariable ['RHS_UI_Targeting',0])"
				};
			};
			class SeekerRemote
			{
				color[] =
				{
					"(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])",
					"(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])",
					"(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])",
					"(profilenamespace getvariable ['IGUI_TEXT_RGB_A',0.8])+(profilenamespace getvariable ['RHS_UI_Targeting',0])"
				};
			};
			class SeekerLockedRemote: Seeker
			{
				color[] =
				{
					"(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])",
					"(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])",
					"(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])",
					"(profilenamespace getvariable ['IGUI_TEXT_RGB_A',0.8])+(profilenamespace getvariable ['RHS_UI_Targeting',0])"
				};
			};
			class SeekerNoLosRemote: Seeker
			{
				color[] =
				{
					"(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])",
					"(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])",
					"(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])",
					"(profilenamespace getvariable ['IGUI_TEXT_RGB_A',0.8])+(profilenamespace getvariable ['RHS_UI_Targeting',0])"
				};
			};
		};
	};
};

#define ADD_IDD_TO_TOGGLEBACKGROUND\
		class CA_VehicleTogglesBackground: CA_VehicleTogglesBackground\
		{\
			idc = 1243;\
		};
class RscInGameUI
{
	class RscUnitInfo;
	class RscUnitInfoSoldier;
	class RscUnitInfoTank;
	class RscUnitInfoAirNoWeapon: RscUnitInfo
	{
		class CA_VehicleTogglesBackground;
	};
	class RscUnitInfoAir: RscUnitInfoAirNoWeapon {};
	class RscUnitInfoAirPlaneNoWeapon: RscUnitInfoAirNoWeapon {};
	class RscUnitInfoAirPlane: RscUnitInfoAirPlaneNoWeapon {};
	class RscUnitInfoAirRTDBasic: RscUnitInfoAir {};
	class RscUnitInfoAirRTDFullDigitalNoWeapon: RscUnitInfoAir {};
	class RscUnitInfoAirRTDFullDigital: RscUnitInfoAirRTDFullDigitalNoWeapon {};
	class RscWeaponZeroing: RscUnitInfo
	{
		class WeaponInfoControlsGroupLeft;
	};
	class RHS_RscWeaponZeroing : RscUnitInfo
	{
		idd = 300;
		controls[] = {"CA_Zeroing"};
	};
	class RHS_RscUnitInfoBTR : RscUnitInfo
	{
		onLoad = "[""onLoad"",_this,""RscUnitInfo"",'IGUI'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay'); _this call RHS_fnc_cmLoad";
		onUnload = "[""onUnload"",_this,""RscUnitInfo"",'IGUI'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay; ')";
		controls[] = { "WeaponInfoControlsGroupRight", "CA_BackgroundVehicle", "CA_BackgroundVehicleTitle", "CA_BackgroundVehicleTitleDark", "CA_BackgroundFuel", "CA_Vehicle", "CA_VehicleRole", "CA_HitZones", "CA_VehicleTogglesBackground", "CA_VehicleToggles", "CA_SpeedBackground", "CA_SpeedUnits", "CA_Speed", "CA_ValueFuel" };
	};
	class RHS_RscUnitInfoEastTank: RscUnitInfoTank
	{
		onLoad = "['onLoad',_this,'RscUnitInfo','IGUI'] call (uinamespace getvariable 'BIS_fnc_initDisplay');; ['onLoad',_this,'RscUnitInfo','IGUI'] call a3_ui_initDisplay; "; //; _this spawn RHS_fnc_randomRadio
		controls[] ={"WeaponInfoControlsGroupRight","CA_Zeroing","CA_BackgroundVehicle","CA_BackgroundVehicleTitle","CA_BackgroundVehicleTitleDark","CA_BackgroundFuel","CA_Vehicle","CA_VehicleRole","CA_HitZones","CA_SpeedBackground","CA_SpeedUnits","CA_Speed","CA_ValueFuel","CA_Mode"};
		class CA_Mode: RscText
		{
			idc = 149;
			colorText[] = {"(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])","(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])","(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])","(profilenamespace getvariable ['IGUI_TEXT_RGB_A',0.8])"};
			y = -1;
			x = "-5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			w = "4.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			sizeEx = "0.8 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
	};
	#define DEFAULT_AIR_CTRL 		"CA_BackgroundVehicle","CA_BackgroundVehicleTitle","CA_BackgroundVehicleTitleDark","CA_BackgroundFuel","CA_Vehicle","CA_VehicleRole","CA_HitZones","CA_VehicleTogglesBackground","CA_VehicleToggles","CA_SpeedBackground","CA_SpeedUnits","CA_Speed","CA_ValueFuel","CA_AltBackground","CA_AltUnits","CA_Alt","WeaponInfoControlsGroupRight","CA_Throttle"
	#define DEFAULT_HELI_CTRL 		"CA_BackgroundVehicle","CA_BackgroundVehicleTitle","CA_BackgroundVehicleTitleDark","CA_BackgroundFuel","CA_Vehicle","CA_VehicleRole","CA_HitZones","CA_VehicleTogglesBackground","CA_VehicleToggles","CA_SpeedBackground","CA_SpeedUnits","CA_Speed","CA_ValueFuel","CA_AltBackground","CA_AltUnits","CA_Alt","WeaponInfoControlsGroupRight"

	class RHS_RscUnitInfoAir_NoRadar: RscUnitInfoAir
	{
		controls[] = {"WeaponInfoControlsGroupRight","CA_BackgroundVehicle","CA_BackgroundVehicleTitle","CA_BackgroundVehicleTitleDark","CA_BackgroundFuel","CA_Vehicle","CA_VehicleRole","CA_HitZones","CA_VehicleTogglesBackground","CA_VehicleToggles","CA_SpeedBackground","CA_SpeedUnits","CA_Speed","CA_ValueFuel","CA_AltBackground","CA_AltUnits","CA_Alt"};
		onLoad="['onLoad',_this,'RscUnitInfo','IGUI'] call (uinamespace getvariable 'BIS_fnc_initDisplay'); _this spawn RHS_fnc_randomRadio";
		ADD_IDD_TO_TOGGLEBACKGROUND
	};
	class RHS_RscUnitInfoAir: RscUnitInfoAir
	{
		onLoad="['onLoad',_this,'RscUnitInfo','IGUI'] call (uinamespace getvariable 'BIS_fnc_initDisplay'); _this spawn RHS_fnc_randomRadio";
		ADD_IDD_TO_TOGGLEBACKGROUND
	};
	class RHS_RscUnitInfoAirPlane: RscUnitInfoAirPlane
	{
		onLoad="['onLoad',_this,'RscUnitInfo','IGUI'] call (uinamespace getvariable 'BIS_fnc_initDisplay'); _this spawn RHS_fnc_randomRadio";
		ADD_IDD_TO_TOGGLEBACKGROUND
	};
	class RHS_RscUnitInfoAir_Mi8: RscUnitInfoAir
	{
		onLoad="['onLoad',_this,'RscUnitInfo','IGUI'] call (uinamespace getvariable 'BIS_fnc_initDisplay'); ['jet',17] spawn RHSUSF_fnc_randomRadio;_this spawn rhs_fnc_dynamicObjectDrawing_loop;[] call RHS_fnc_UI_Options";
		controls[] =
		{
			"CA_BackgroundVehicle","CA_BackgroundVehicleTitle","CA_BackgroundVehicleTitleDark","CA_BackgroundFuel","CA_Vehicle","CA_VehicleRole","CA_HitZones","CA_VehicleTogglesBackground","CA_VehicleToggles","CA_SpeedBackground","CA_SpeedUnits","CA_Speed","CA_ValueFuel","CA_AltBackground","CA_AltUnits","CA_Alt","WeaponInfoControlsGroupRight",
			"RHS_WheelBrakes_SFM"
		};
		class RHS_WheelBrakes_SFM: RscPicture
		{
			idc			= 10101;
			text		=  "\A3\Ui_f\data\IGUI\Cfg\VehicleToggles\WheelBreakIconOn_ca.paa";
			colorText[]	=
			{
				"(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])",
				"(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])",
				"(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])",
				"(profilenamespace getvariable ['IGUI_TEXT_RGB_A',0.8])"
			};
			x			= "4.7 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(profilenamespace getvariable ['GUI_GRID_VEHICLE_X',		(safezoneX + 0.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40))])";
			y			= "3.4 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(profilenamespace getvariable ['GUI_GRID_VEHICLE_Y',		(safezoneY + 0.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))])";
			w			= "0.8 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			h			= "0.8 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		ADD_IDD_TO_TOGGLEBACKGROUND
	};
	class RHS_RscUnitInfoAir_RTD_Mi8: RscUnitInfoAirRTDFullDigital
	{
		onLoad="['onLoad',_this,'RscUnitInfo','IGUI'] call (uinamespace getvariable 'BIS_fnc_initDisplay'); _this spawn RHS_fnc_randomRadio;_this spawn rhs_fnc_dynamicObjectDrawing_loop;[] call RHS_fnc_UI_Options";

		ADD_IDD_TO_TOGGLEBACKGROUND
	};
	class RHS_RscUnitInfoAir_RTD_Basic_Mi8: RscUnitInfoAirRTDBasic
	{
		onLoad="uinamespace setvariable ['RscUnitInfoAir',_this select 0]; _this spawn RHS_fnc_randomRadio;_this spawn rhs_fnc_dynamicObjectDrawing_loop;[] call RHS_fnc_UI_Options";
		ADD_IDD_TO_TOGGLEBACKGROUND
	};
	class RHS_RscUnitInfoAir_Mi24: RHS_RscUnitInfoAir_NoRadar
	{
		onLoad="['onLoad',_this,'RscUnitInfo','IGUI'] call (uinamespace getvariable 'BIS_fnc_initDisplay'); _this spawn RHS_fnc_randomRadio;_this spawn rhs_fnc_rwr_spo15;_this spawn rhs_fnc_mi24_map;_this spawn rhs_fnc_dynamicObjectDrawing_loop;[] call RHS_fnc_UI_Options";
		controls[] = {"RHS_SPO15_handler", DEFAULT_HELI_CTRL};
		class RHS_SPO15_handler: RscPicture {idc=8655;};
		ADD_IDD_TO_TOGGLEBACKGROUND
	};
	class RHS_RscUnitInfoAir_RTD_Mi24: RscUnitInfoAirRTDFullDigital
	{
		onLoad="['onLoad',_this,'RscUnitInfo','IGUI'] call (uinamespace getvariable 'BIS_fnc_initDisplay'); _this spawn RHS_fnc_randomRadio;_this spawn rhs_fnc_rwr_spo15;_this spawn rhs_fnc_dynamicObjectDrawing_loop;_this spawn rhs_fnc_mi24_map;[] call RHS_fnc_UI_Options";
		controls[] = {"RHS_SPO15_handler","CA_BackgroundVehicle","CA_BackgroundVehicleTitle","CA_BackgroundVehicleTitleDark","CA_BackgroundFuel","CA_Vehicle","CA_VehicleRole","CA_HitZones","CA_VehicleTogglesBackground","CA_VehicleToggles","CA_SpeedBackground","CA_SpeedUnits","CA_Speed","CA_ValueFuel","CA_AltBackground","CA_AltUnits","CA_Alt","CA_Horizon_Lite","CA_Speed_Analogue","CA_Altitude_Analogue","CA_Horizon_Analogue","CA_Stability_Analogue","CA_Compass_Analogue","WeaponInfoControlsGroupRight"};
		class RHS_SPO15_handler: RscPicture {idc=8655;};
		ADD_IDD_TO_TOGGLEBACKGROUND
	};
	class RHS_RscUnitInfoAir_RTD_Basic_Mi24: RscUnitInfoAirRTDBasic
	{
		onLoad="uinamespace setvariable ['RscUnitInfoAir',_this select 0]; _this spawn RHS_fnc_randomRadio;_this spawn rhs_fnc_rwr_spo15;_this spawn rhs_fnc_mi24_map;_this spawn rhs_fnc_dynamicObjectDrawing_loop;[] call RHS_fnc_UI_Options";
		controls[] = {"RHS_SPO15_handler"};
		class RHS_SPO15_handler: RscPicture {idc=8655;};
		ADD_IDD_TO_TOGGLEBACKGROUND
	};
	class RHS_RscUnitInfoAir_Su25: RscUnitInfoAirPlane
	{
		onLoad="['onLoad',_this,'RscUnitInfo','IGUI'] call (uinamespace getvariable 'BIS_fnc_initDisplay'); _this spawn RHS_fnc_randomRadio;_this spawn rhs_fnc_rwr_spo15;_this spawn rhs_fnc_dynamicObjectDrawing_loop;[] call RHS_fnc_UI_Options";
		controls[] = {"RHS_SPO15_handler", DEFAULT_AIR_CTRL};

		class RHS_SPO15_handler: RscPicture {idc=8655;};
		ADD_IDD_TO_TOGGLEBACKGROUND
	};
	class RHS_RscUnitInfoAir_MiG29S: RscUnitInfoAirPlane
	{
		onLoad="['onLoad',_this,'RscUnitInfo','IGUI'] call (uinamespace getvariable 'BIS_fnc_initDisplay'); _this spawn RHS_fnc_randomRadio;_this spawn rhs_fnc_rwr_spo15;_this spawn rhs_fnc_dynamicObjectDrawing_loop;_this spawn rhs_fnc_mig29_map;_this call rhs_fnc_afterburner;[] call RHS_fnc_UI_Options";
		controls[] = {"RHS_SPO15_handler","RHS_Afterburner_handler", DEFAULT_AIR_CTRL};

		class RHS_SPO15_handler: RscPicture 		{idc=8655;};
		class RHS_Afterburner_handler: RscPicture 	{idc=8656;};
		ADD_IDD_TO_TOGGLEBACKGROUND
	};
	class RHS_RscUnitInfoAir_MiG29SM: RscUnitInfoAirPlane
	{
		onLoad="['onLoad',_this,'RscUnitInfo','IGUI'] call (uinamespace getvariable 'BIS_fnc_initDisplay'); _this spawn RHS_fnc_randomRadio;_this spawn rhs_fnc_rwr_spo15;_this spawn rhs_fnc_dynamicObjectDrawing_loop;_this spawn rhs_fnc_mig29sm_cockpit;_this call rhs_fnc_afterburner;[] call RHS_fnc_UI_Options";
		controls[] = {"RHS_SPO15_handler","RHS_Afterburner_handler", DEFAULT_AIR_CTRL};

		class RHS_SPO15_handler: RscPicture 		{idc=8655;};
		class RHS_Afterburner_handler: RscPicture 	{idc=8656;};
		ADD_IDD_TO_TOGGLEBACKGROUND
	};
	class RHS_RscUnitInfoAir_Ka52: RscUnitInfoAir
	{
		onLoad="['onLoad',_this,'RscUnitInfo','IGUI'] call (uinamespace getvariable 'BIS_fnc_initDisplay'); _this spawn RHS_fnc_randomRadio;_this call rhs_fnc_Ka52_handler;_this spawn rhs_fnc_dynamicObjectDrawing_loop;[] call RHS_fnc_UI_Options";
		ADD_IDD_TO_TOGGLEBACKGROUND
	};
	class RHS_RscUnitInfoAir_Mi28: RscUnitInfoAir
	{
		onLoad="['onLoad',_this,'RscUnitInfo','IGUI'] call (uinamespace getvariable 'BIS_fnc_initDisplay'); _this spawn RHS_fnc_randomRadio;_this call rhs_fnc_Mi28_handler;_this spawn rhs_fnc_dynamicObjectDrawing_loop;[] call RHS_fnc_UI_Options";
		controls[] =
		{
			"CA_BackgroundVehicle","CA_BackgroundVehicleTitle","CA_BackgroundVehicleTitleDark","CA_BackgroundFuel","CA_Vehicle","CA_VehicleRole","CA_HitZones","CA_VehicleTogglesBackground","CA_VehicleToggles","CA_SpeedBackground","CA_SpeedUnits","CA_Speed","CA_ValueFuel","CA_AltBackground","CA_AltUnits","CA_Alt","WeaponInfoControlsGroupRight",
			"RHS_WheelBrakes_SFM"
		};
		class RHS_WheelBrakes_SFM: RscPicture
		{
			idc			= 10101;
			text		=  "\A3\Ui_f\data\IGUI\Cfg\VehicleToggles\WheelBreakIconOn_ca.paa";
			colorText[]	=
			{
				"(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])",
				"(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])",
				"(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])",
				"(profilenamespace getvariable ['IGUI_TEXT_RGB_A',0.8])"
			};
			x			= "4.7 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(profilenamespace getvariable ['GUI_GRID_VEHICLE_X',		(safezoneX + 0.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40))])";
			y			= "3.4 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(profilenamespace getvariable ['GUI_GRID_VEHICLE_Y',		(safezoneY + 0.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))])";
			w			= "0.8 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			h			= "0.8 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		ADD_IDD_TO_TOGGLEBACKGROUND
	};
	class RHS_RscUnitInfoAir_PAKFA: RscUnitInfoAirPlane
	{
		onLoad="['onLoad',_this,'RscUnitInfo','IGUI'] call (uinamespace getvariable 'BIS_fnc_initDisplay'); _this spawn RHS_fnc_randomRadio;_this call rhs_fnc_pakfa_init;_this spawn rhs_fnc_dynamicObjectDrawing_loop;_this call rhs_fnc_afterburner;[] call RHS_fnc_UI_Options";
		controls[] = {"RHS_Afterburner_handler", DEFAULT_AIR_CTRL};
		class RHS_Afterburner_handler: RscPicture 	{idc=8656;};
		ADD_IDD_TO_TOGGLEBACKGROUND
	};

	class RHS_RscUnitInfoEastTankCompass: RHS_RscUnitInfoEastTank
	{
		onLoad = "['onLoad',_this,'RscUnitInfo','IGUI'] call (uinamespace getvariable 'BIS_fnc_initDisplay'); _this call RHS_fnc_sight_1G42; ";

		class Objects
		{
		  	class Bgr
		  	{
			  	 idc = 411;
			  	 type = 82;
			  	 model = "rhsafrf\addons\rhs_optics\vehicles\kompas\bg.p3d";
			  	 scale = 0.29;
			  	 direction[] = {0, 0, 1};
			  	 up[] = {0, 1, 0};
				 x = 0.1716+safezoneX;
				 y = 0.3751+safezoneY;
			  	 z = 0.103;
			  	 xBack = .5; yBack = .5;
			  	 zBack = 0;
			  	 inBack =0;
			  	 enableZoom = 0; zoomDuration = 4.001;
			};
		  	class Com: Bgr
		  	{
			  	 idc = 412;
			  	 model = "rhsafrf\addons\rhs_optics\vehicles\kompas\com.p3d";
			  	 z = 0.102;
		  	};
		  	class Gun: Bgr
		  	{
			  	 idc = 413;
			  	 model = "rhsafrf\addons\rhs_optics\vehicles\kompas\gun.p3d";
			  	 z = 0.101;
		  	};
		  	class Compass: Bgr
		  	{
				idc = 211;
			  	 x = 0.143757 + safezoneX;
			  	 y = 0.706185+safezoneY;
				 z = 0.1025;
				direction[] = {0.406737, 0, -0.913545};
				up[] = {0, 1, 0};
				model = "rhsafrf\addons\rhs_optics\vehicles\kompas\gpk59_compass.p3d";
			};
		  	class Compass_wheel: Compass
		  	{
				idc = 212;
				z = 0.1021;
				model = "rhsafrf\addons\rhs_optics\vehicles\kompas\gpk59_wheel.p3d";
		  	};
		};
	};
	class RHS_RscInfoSprut: RHS_RscUnitInfoEastTank
	{
		onLoad = "['onLoad',_this,'RscUnitInfo','IGUI'] call (uinamespace getvariable 'BIS_fnc_initDisplay'); _this call RHS_fnc_compass_sprutsd;"; //; _this spawn RHS_fnc_randomRadio

		class Objects
		{
		  	class Bgr
		  	{
			  	 idc = 411;
			  	 type = 82;
			  	 model = "rhsafrf\addons\rhs_optics\vehicles\kompas\sprut\bg.p3d";
			  	 scale = 0.29;
			  	 direction[] = {0, 0, 1};
			  	 up[] = {0, 1, 0};
				 x = 0.1716+safezoneX;
				 y = 0.3751+safezoneY;
			  	 z = 0.103;
			  	 xBack = .5; yBack = .5;
			  	 zBack = 0;
			  	 inBack =0;
			  	 enableZoom = 0; zoomDuration = 4.001;
			};
		  	class Com: Bgr
		  	{
			  	 idc = 412;
			  	 model = "rhsafrf\addons\rhs_optics\vehicles\kompas\sprut\com.p3d";
			  	 z = 0.102;
		  	};
		  	class Gun: Bgr
		  	{
			  	 idc = 413;
			  	 model = "rhsafrf\addons\rhs_optics\vehicles\kompas\sprut\gun.p3d";
			  	 z = 0.101;
		  	};
		  	class Compass: Bgr
		  	{
				idc = 211;
			  	 x = 0.143757 + safezoneX;
			  	 y = 0.706185+safezoneY;
				 z = 0.1025;
				direction[] = {0.406737, 0, -0.913545};
				up[] = {0, 1, 0};
			  	 scale = 0.3;
				model = "rhsafrf\addons\rhs_optics\vehicles\kompas\gpk59_compass.p3d";
			};
		  	class Compass_wheel: Compass
		  	{
				idc = 212;
				z = 0.1021;
				model = "rhsafrf\addons\rhs_optics\vehicles\kompas\gpk59_wheel.p3d";
		  	};
		};
	};
	class RHS_RscInfoBMP3: RHS_RscInfoSprut
	{
		onLoad = "['onLoad',_this,'RscUnitInfo','IGUI'] call (uinamespace getvariable 'BIS_fnc_initDisplay'); _this call RHS_fnc_compass_sprutsd;_this call RHS_fnc_pipHandler_BMP3;";
	};
	class RHS_RscInfoBMP3M: RHS_RscInfoSprut
	{
		onLoad = "['onLoad',_this,'RscUnitInfo','IGUI'] call (uinamespace getvariable 'BIS_fnc_initDisplay'); _this call RHS_fnc_compass_sprutsd;_this call RHS_fnc_pipHandler_BMP3M;";
	};

	class RHS_RscInfoT72: RHS_RscUnitInfoEastTank
	{
		onLoad = "['onLoad',_this,'RscUnitInfo','IGUI'] call (uinamespace getvariable 'BIS_fnc_initDisplay'); _this call RHS_fnc_compass_t72;"; //; _this spawn RHS_fnc_randomRadio

		class Objects
		{
		  	class Bgr
		  	{
			  	 idc = 411;
			  	 type = 82;
			  	 model = "rhsafrf\addons\rhs_optics\vehicles\kompas\bg.p3d";
			  	 scale = 0.29;
			  	 direction[] = {0, 0, 1};
			  	 up[] = {0, 1, 0};
				 x = 0.1716+safezoneX;
				 y = 0.3751+safezoneY;
			  	 z = 0.103;
			  	 xBack = .5; yBack = .5;
			  	 zBack = 0;
			  	 inBack =0;
			  	 enableZoom = 0; zoomDuration = 4.001;
			};
		  	class Com: Bgr
		  	{
			  	 idc = 412;
			  	 model = "rhsafrf\addons\rhs_optics\vehicles\kompas\com.p3d";
			  	 z = 0.102;
		  	};
		  	class Gun: Bgr
		  	{
			  	 idc = 413;
			  	 model = "rhsafrf\addons\rhs_optics\vehicles\kompas\gun.p3d";
			  	 z = 0.101;
		  	};
		  	class Compass: Bgr
		  	{
				idc = 211;
			  	 x = 0.143757 + safezoneX;
			  	 y = 0.706185+safezoneY;
				 z = 0.1025;
				direction[] = {0.406737, 0, -0.913545};
				up[] = {0, 1, 0};
			  	 scale = 0.3;
				model = "rhsafrf\addons\rhs_optics\vehicles\kompas\gpk59_compass.p3d";
			};
		  	class Compass_wheel: Compass
		  	{
				idc = 212;
				z = 0.1021;
				model = "rhsafrf\addons\rhs_optics\vehicles\kompas\gpk59_wheel.p3d";
		  	};
		};
	};

	class RHS_RscInfoBMP2: RHS_RscInfoT72
	{
		onLoad = "['onLoad',_this,'RscUnitInfo','IGUI'] call (uinamespace getvariable 'BIS_fnc_initDisplay'); _this call RHS_fnc_compass_sprutsd; _this call rhs_fnc_cmLoad"; //; _this spawn RHS_fnc_randomRadio
	};
	class RHS_RscInfoT80: RHS_RscInfoT72
	{
		onLoad = "['onLoad',_this,'RscUnitInfo','IGUI'] call (uinamespace getvariable 'BIS_fnc_initDisplay'); _this call RHS_fnc_compass_t80; _this call RHS_fnc_cmLoad"; //; _this spawn RHS_fnc_randomRadio
	};
	class RHS_RscInfoT90: RHS_RscInfoT72
	{
		onLoad = "['onLoad',_this,'RscUnitInfo','IGUI'] call (uinamespace getvariable 'BIS_fnc_initDisplay'); _this call RHS_fnc_compass_sprutsd; _this call rhs_fnc_cmLoad"; //; _this spawn RHS_fnc_randomRadio
	};

	#include "rsc\optic_sprutsd.hpp"
	#include "rsc\optic_1k13_3s.hpp"

	#include "rsc\optic_tpdk1.hpp"
	#include "rsc\optic_1g42.hpp"
	#include "rsc\optic_1g46.hpp"
	#include "rsc\optic_bmp2_tkn3.hpp"
	#include "rsc\optic_tkn3.hpp"
	#include "rsc\optic_tkn4s.hpp"
	#include "rsc\optic_1d13.hpp"
	#include "rsc\optic_2s3.hpp"
	#include "rsc\optic_2s3_op5.hpp"
	#include "rsc\optic_2s1_op5.hpp"
	#include "rsc\optic_d30_op4.hpp"
	#include "rsc\optic_1pn22m.hpp"
	#include "rsc\optic_bpk42.hpp"
	#include "rsc\optic_1pz3.hpp"
	#include "rsc\optic_1pz32.hpp"
	#include "rsc\optic_thermal.hpp"
	#include "rsc\optic_essa.hpp"
	#include "rsc\optic_tpd1k_sosnau.hpp"
	#include "rsc\optic_sosnau.hpp"
	#include "rsc\optic_agava.hpp"
	#include "rsc\optic_plissa.hpp"
	#include "rsc\optic_2p130.hpp"
	#include "rsc\optic_2b14.hpp"
	#include "rsc\optic_mi24.hpp"
	#include "rsc\optic_mi28.hpp"
	#include "rsc\optic_ka52.hpp"
	#include "rsc\optic_staticWeapon.hpp"
	#include "rsc\optic_su25.hpp"
	#include "rsc\optic_zu23_t3.hpp"
};

#include "rsc\optic_p37.hpp"