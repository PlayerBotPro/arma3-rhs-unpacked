class CfgFontFamilies
{
	class rhsusf_digital_font
	{
		fonts[] = {"\rhsusf\addons\rhsusf_optics\scripts\digitalfont\digital46"};
	};
	class rhsusf_digital_font_var
	{
		fonts[] = {"\rhsusf\addons\rhsusf_optics\scripts\digitalfont_var\digital_var46"};
	};
	class rhsusf_digital_font_usa
	{
		fonts[] = {"\rhsusf\addons\rhsusf_optics\scripts\digitalfont_usa\digitalfont_usa46"};
	};
	class rhsusf_font_stencil
	{
		fonts[] = {"\rhsusf\addons\rhsusf_optics\scripts\font_stencil\font_stencil46"};
	};
	class rhsusf_txled
	{
		fonts[] = {"\rhsusf\addons\rhsusf_optics\scripts\font_led\txled6", "\rhsusf\addons\rhsusf_optics\scripts\font_led\txled7", "\rhsusf\addons\rhsusf_optics\scripts\font_led\txled", "\rhsusf\addons\rhsusf_optics\scripts\font_led\txled9", "\rhsusf\addons\rhsusf_optics\scripts\font_led\txled10", "\rhsusf\addons\rhsusf_optics\scripts\font_led\txled11", "\rhsusf\addons\rhsusf_optics\scripts\font_led\txled12", "\rhsusf\addons\rhsusf_optics\scripts\font_led\txled13", "\rhsusf\addons\rhsusf_optics\scripts\font_led\txled14", "\rhsusf\addons\rhsusf_optics\scripts\font_led\txled15", "\rhsusf\addons\rhsusf_optics\scripts\font_led\txled16", "\rhsusf\addons\rhsusf_optics\scripts\font_led\txled17", "\rhsusf\addons\rhsusf_optics\scripts\font_led\txled18", "\rhsusf\addons\rhsusf_optics\scripts\font_led\txled19", "\rhsusf\addons\rhsusf_optics\scripts\font_led\txled20", "\rhsusf\addons\rhsusf_optics\scripts\font_led\txled21", "\rhsusf\addons\rhsusf_optics\scripts\font_led\txled22", "\rhsusf\addons\rhsusf_optics\scripts\font_led\txled23", "\rhsusf\addons\rhsusf_optics\scripts\font_led\txled24", "\rhsusf\addons\rhsusf_optics\scripts\font_led\txled25", "\rhsusf\addons\rhsusf_optics\scripts\font_led\txled26", "\rhsusf\addons\rhsusf_optics\scripts\font_led\txled27", "\rhsusf\addons\rhsusf_optics\scripts\font_led\txled28", "\rhsusf\addons\rhsusf_optics\scripts\font_led\txled29", "\rhsusf\addons\rhsusf_optics\scripts\font_led\txled30", "\rhsusf\addons\rhsusf_optics\scripts\font_led\txled31", "\rhsusf\addons\rhsusf_optics\scripts\font_led\txled34", "\rhsusf\addons\rhsusf_optics\scripts\font_led\txled37", "\rhsusf\addons\rhsusf_optics\scripts\font_led\txled46" };
		spaceWidth = 0.3;
		spacing = 0.2;
	};
};

class RscEdit;
class RscOpticsValue;
class RscOpticsText;
class RscIGUIText;
class RscIGUIValue;
class RscText;
class RscPicture;
class HScrollbar;
class VScrollbar;
class RscMapControl;

class RscControlsGroup;


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

#include "scripts\us_komp\ccp_computer.hpp"

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
#define DEFAULT_AIR_CTRL 		"CA_BackgroundVehicle","CA_BackgroundVehicleTitle","CA_BackgroundVehicleTitleDark","CA_BackgroundFuel","CA_Vehicle","CA_VehicleRole","CA_HitZones","CA_VehicleTogglesBackground","CA_VehicleToggles","CA_SpeedBackground","CA_SpeedUnits","CA_Speed","CA_ValueFuel","CA_AltBackground","CA_AltUnits","CA_Alt","WeaponInfoControlsGroupRight","CA_Throttle"
#define DEFAULT_HELI_CTRL 		"CA_BackgroundVehicle","CA_BackgroundVehicleTitle","CA_BackgroundVehicleTitleDark","CA_BackgroundFuel","CA_Vehicle","CA_VehicleRole","CA_HitZones","CA_VehicleTogglesBackground","CA_VehicleToggles","CA_SpeedBackground","CA_SpeedUnits","CA_Speed","CA_ValueFuel","CA_AltBackground","CA_AltUnits","CA_Alt","WeaponInfoControlsGroupRight"

#define ADD_IDD_TO_TOGGLEBACKGROUND\
		class CA_VehicleTogglesBackground: CA_VehicleTogglesBackground\
		{\
			idc = 1243;\
		};
class RscInGameUI
{
	class RscUnitInfo;
	class RHS_RscWeaponZeroing : RscUnitInfo
	{
		idd = 300;
		controls[] = {"CA_Zeroing"};
	};
	class RHS_RscWeaponZeroing_TurretAdjust : RHS_RscWeaponZeroing
	{
		onLoad="['onLoad',_this,'RscUnitInfo','IGUI'] call (uinamespace getvariable 'BIS_fnc_initDisplay'); _this call rhsusf_fnc_turret_gunnerAdjust";
		class RHS_Turret_GunnerAdjust_handler: RscPicture 	{idc=9601;};
		controls[] = {"CA_Zeroing","RHS_Turret_GunnerAdjust_handler"};
	};
	class RscUnitInfoTank;
	class RscUnitInfoAirNoWeapon: RscUnitInfo
	{
		class CA_VehicleTogglesBackground;
	};
	class RscUnitInfoAir: RscUnitInfoAirNoWeapon
	{
		class WeaponInfoControlsGroupRight;
		/*class WeaponInfoControlsGroupRight: RscControlsGroup
		{
			class controls;
		};*/
	};
	class RscUnitInfoAirPlaneNoWeapon: RscUnitInfoAirNoWeapon
	{

	};
	class RscUnitInfoAirPlane: RscUnitInfoAirPlaneNoWeapon
	{

	};
	class RscUnitInfoArtillery: RscUnitInfo
	{
		class CA_VehicleTogglesBackground;
	};
	class RHSUSF_RscOptics_Empty_TGP : RscUnitInfo {
		idd = 300;
		controls[] = {};
	};
	class RHSUSF_RscUnitInfoWestTank: RscUnitInfoTank
	{
		//onLoad="if (isNil 'a3_ui_initDisplay') then {a3_ui_initDisplay = compile preprocessfilelinenumbers 'A3\ui_f\scripts\initDisplay.sqf'}; ['onLoad',_this,'RscUnitInfo','IGUI'] call a3_ui_initDisplay"; // ; ['land',29] spawn RHSUSF_fnc_randomRadio
	};
	class RHS_RscUnitInfoM113: RHSUSF_RscUnitInfoWestTank
	{
		onLoad="['onLoad',_this,'RscUnitInfo','IGUI'] call (uinamespace getvariable 'BIS_fnc_initDisplay'); _this call rhsusf_fnc_pipHandler_m113";
	};
	class RHS_RscUnitInfoM1117: RHSUSF_RscUnitInfoWestTank
	{
		onLoad="['onLoad',_this,'RscUnitInfo','IGUI'] call (uinamespace getvariable 'BIS_fnc_initDisplay'); _this spawn rhsusf_fnc_pipHandler_m1117";
	};
	class RHS_RscUnitInfoStryker: RHSUSF_RscUnitInfoWestTank
	{
		onLoad="['onLoad',_this,'RscUnitInfo','IGUI'] call (uinamespace getvariable 'BIS_fnc_initDisplay'); _this call rhsusf_fnc_stryker_unitInfo";
		controls[] = {"WeaponInfoControlsGroupRight","CA_Zeroing","CA_BackgroundVehicle","CA_BackgroundVehicleTitle","CA_BackgroundVehicleTitleDark","CA_BackgroundFuel","CA_Vehicle","CA_VehicleRole","CA_HitZones","CA_VehicleTogglesBackground","CA_VehicleToggles","CA_SpeedBackground","CA_SpeedUnits","CA_Speed","CA_ValueFuel","DrawMap"};
		// Just to trigger draw handler
		class DrawMap: RscMapControl
		{
			idc = 7001;
			type = 101;
			x = 0; y = 0; w = 0; h = 0;
		};
	};
	class RHS_RscUnitInfoStryker_M1134: RHS_RscUnitInfoStryker
	{		
		onLoad="['onLoad',_this,'RscUnitInfo','IGUI'] call (uinamespace getvariable 'BIS_fnc_initDisplay'); _this call rhsusf_fnc_stryker_unitInfo;_this call rhsusf_fnc_stryker_unitInfo_m1134";

		controls[] = {
			"WeaponInfoControlsGroupRight","CA_Zeroing","CA_BackgroundVehicle","CA_BackgroundVehicleTitle","CA_BackgroundVehicleTitleDark","CA_BackgroundFuel","CA_Vehicle","CA_VehicleRole","CA_HitZones","CA_VehicleTogglesBackground","CA_VehicleToggles","CA_SpeedBackground","CA_SpeedUnits","CA_Speed","CA_ValueFuel","DrawMap",
			"RHS_TurretLock"
		};
		// Just to trigger draw handler

		class RHS_TurretLock: RscPicture
		{
			idc			= 10101;
			text		=  "\rhsusf\addons\rhsusf_optics\data\tex\rhs_turretLock_ca.paa";
			colorText[]	=
			{
				"(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])",
				"(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])",
				"(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])",
				"(profilenamespace getvariable ['IGUI_TEXT_RGB_A',0.8])"
			};
			x			= "1.9 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(profilenamespace getvariable ['GUI_GRID_VEHICLE_X',		(safezoneX + 0.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40))])";
			y			= "2.25 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(profilenamespace getvariable ['GUI_GRID_VEHICLE_Y',		(safezoneY + 0.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))])";
			w			= "3.55 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			h			= "0.95 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
	};
	class RHS_RscUnitInfoMATV: RHS_RscUnitInfoStryker
	{
		onLoad="['onLoad',_this,'RscUnitInfo','IGUI'] call (uinamespace getvariable 'BIS_fnc_initDisplay'); _this spawn rhsusf_fnc_matv_unitInfo";
	};
	class RHSUSF_RscUnitInfoAir_NoRadar: RscUnitInfoAir
	{
		controls[] = {"WeaponInfoControlsGroupRight","CA_BackgroundVehicle","CA_BackgroundVehicleTitle","CA_BackgroundVehicleTitleDark","CA_BackgroundFuel","CA_Vehicle","CA_VehicleRole","CA_HitZones","CA_VehicleTogglesBackground","CA_VehicleToggles","CA_SpeedBackground","CA_SpeedUnits","CA_Speed","CA_ValueFuel","CA_AltBackground","CA_AltUnits","CA_Alt"};

		onLoad="['onLoad',_this,'RscUnitInfo','IGUI'] call (uinamespace getvariable 'BIS_fnc_initDisplay'); ['jet',17] spawn RHSUSF_fnc_randomRadio;_this call rhsusf_fnc_announcer;_this spawn rhs_fnc_dynamicObjectDrawing_loop";
		ADD_IDD_TO_TOGGLEBACKGROUND
	};
	class RHSUSF_RscUnitInfoAir: RscUnitInfoAir
	{
		onLoad="['onLoad',_this,'RscUnitInfo','IGUI'] call (uinamespace getvariable 'BIS_fnc_initDisplay'); ['jet',17] spawn RHSUSF_fnc_randomRadio;_this call rhsusf_fnc_announcer;_this spawn rhs_fnc_dynamicObjectDrawing_loop";
	};
	class RHSUSF_RscUnitInfoAirPlane: RscUnitInfoAirPlane
	{
		onLoad="['onLoad',_this,'RscUnitInfo','IGUI'] call (uinamespace getvariable 'BIS_fnc_initDisplay'); ['jet',17] spawn RHSUSF_fnc_randomRadio;_this call rhsusf_fnc_announcer;_this spawn rhs_fnc_dynamicObjectDrawing_loop";
		ADD_IDD_TO_TOGGLEBACKGROUND
	};
	class RHSUSF_RscUnitInfoJet: RscUnitInfoAirPlane
	{
		controls[] = {
			"CA_BackgroundVehicle","CA_BackgroundVehicleTitle","CA_BackgroundVehicleTitleDark","CA_BackgroundFuel","CA_Vehicle","CA_VehicleRole","CA_HitZones","CA_VehicleTogglesBackground","CA_VehicleToggles","CA_SpeedBackground","CA_SpeedUnits","CA_Speed","CA_ValueFuel","CA_AltBackground","CA_AltUnits","CA_Alt","WeaponInfoControlsGroupRight","CA_Throttle",
			"CA_Mode"
		};
		onLoad="['onLoad',_this,'RscUnitInfo','IGUI'] call (uinamespace getvariable 'BIS_fnc_initDisplay');['jet',17] spawn RHSUSF_fnc_randomRadio;_this call rhsusf_fnc_announcer;_this spawn rhs_fnc_dynamicObjectDrawing_loop";
		ADD_IDD_TO_TOGGLEBACKGROUND
	};
	class RHSUSF_RscUnitInfoJet_F22: RscUnitInfoAirPlane
	{
		onLoad="['onLoad',_this,'RscUnitInfo','IGUI'] call (uinamespace getvariable 'BIS_fnc_initDisplay');['jet',17] spawn RHSUSF_fnc_randomRadio;_this call rhsusf_fnc_announcer;_this spawn rhs_fnc_dynamicObjectDrawing_loop;_this call rhs_fnc_afterburner;[] call RHS_fnc_UI_Options";
		ADD_IDD_TO_TOGGLEBACKGROUND
		controls[] = {"RHS_Afterburner_handler", DEFAULT_AIR_CTRL};
		class RHS_Afterburner_handler: RscPicture 	{idc=8656;};
	};
	class RHSUSF_RscUnitInfoAir_UH60: RscUnitInfoArtillery
	{
		onLoad="['onLoad',_this,'RscUnitInfo','IGUI'] call (uinamespace getvariable 'BIS_fnc_initDisplay'); ['jet',17] spawn RHSUSF_fnc_randomRadio;_this call rhsusf_fnc_announcer;_this spawn rhs_fnc_dynamicObjectDrawing_loop;[] call RHS_fnc_UI_Options";
		controls[] =
		{
			"CA_BackgroundVehicle","CA_BackgroundVehicleTitle","CA_BackgroundVehicleTitleDark","CA_BackgroundFuel","CA_Vehicle","CA_VehicleRole","CA_HitZones","CA_VehicleTogglesBackground","CA_VehicleToggles","CA_SpeedBackground","CA_SpeedUnits","CA_Speed","CA_ValueFuel","CA_AltBackground","CA_AltUnits","CA_Alt","WeaponInfoControlsGroupRight","CA_Zeroing","CA_Mode",
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
	};
	class RHSUSF_RscUnitInfoAir_CH47: RHSUSF_RscUnitInfoAir_UH60
	{
	};
	class RHSUSF_RscUnitInfoAir_UH1Y: RHSUSF_RscUnitInfoAir_UH60
	{
		onLoad="['onLoad',_this,'RscUnitInfo','IGUI'] call (uinamespace getvariable 'BIS_fnc_initDisplay');['jet',17] spawn RHSUSF_fnc_randomRadio;_this call rhsusf_fnc_uh1_handler;_this call rhsusf_fnc_announcer;_this spawn rhs_fnc_dynamicObjectDrawing_loop;[] call RHS_fnc_UI_Options";
	};
	class RHSUSF_RscUnitInfoAir_AH64: RscUnitInfoArtillery
	{
		controls[] =
		{
			"CA_BackgroundVehicle","CA_BackgroundVehicleTitle","CA_BackgroundVehicleTitleDark","CA_BackgroundFuel","CA_Vehicle","CA_VehicleRole","CA_HitZones","CA_VehicleTogglesBackground","CA_VehicleToggles","CA_SpeedBackground","CA_SpeedUnits","CA_Speed","CA_ValueFuel","CA_AltBackground","CA_AltUnits","CA_Alt","WeaponInfoControlsGroupRight","CA_Zeroing","CA_Mode",
			"RHS_UI_Handler","RHS_WheelBrakes_SFM"
		};
		onLoad="['onLoad',_this,'RscUnitInfo','IGUI'] call (uinamespace getvariable 'BIS_fnc_initDisplay'); ['jet',17] spawn RHSUSF_fnc_randomRadio;_this call rhsusf_fnc_announcer;_this spawn rhs_fnc_dynamicObjectDrawing_loop;_this call rhs_fnc_ah64_mainLoop;[] call RHS_fnc_UI_Options";
		class RHS_UI_Handler: RscPicture 	{idc=8550;};
		ADD_IDD_TO_TOGGLEBACKGROUND
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
			x			= "3.8 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(profilenamespace getvariable ['GUI_GRID_VEHICLE_X',		(safezoneX + 0.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40))])";
			y			= "3.4 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(profilenamespace getvariable ['GUI_GRID_VEHICLE_Y',		(safezoneY + 0.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))])";
			w			= "0.8 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			h			= "0.8 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class Objects
		{
			class Scope
			{
				idc			= 411;
				type		= 82;
				model		= "\rhsusf\addons\rhsusf_optics\data\rhsusf_IHADSS_scope.p3d";
				scale		= 0.05 * (SafeZoneW Min SafeZoneH);
				direction[]	= {0, 0, 1};
				up[]		= {0, 1, 0};
				x			= "20 * (((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
				y			= "13.5 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + (safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
				z			= 0.103;
				xBack		= 0.5; yBack = 0.5;
				zBack		= 0;
				inBack		= 0;
				enableZoom	= 0; zoomDuration = 4.001;
			};
		};
	};
	class RscUnitInfoAirRTDFullDigitalNoWeapon: RscUnitInfoAir
	{
		class WeaponInfoControlsGroupRight;
	};
	class RscUnitInfoAirRTDFullDigital: RscUnitInfoAirRTDFullDigitalNoWeapon
	{
		class WeaponInfoControlsGroupRight: WeaponInfoControlsGroupRight
		{
			class controls;
		};
	};
	class RHSUSF_RscUnitInfoAirRTDFullDigital_Base: RscUnitInfoAirRTDFullDigital
	{
		class WeaponInfoControlsGroupRight: WeaponInfoControlsGroupRight
		{
			class controls: controls
			{
				class CA_BackgroundWeapon;
				class CA_BackgroundWeaponTitle;
				class CA_BackgroundWeaponTitleDark;
				class CA_BackgroundWeaponMode;
				class CA_Weapon;
				class CA_ModeTexture;
				class CA_Mode;
				class CA_ValueReload;
				class CA_AmmoCount;
				class CA_MagCount;
				class CA_AmmoType;
				class CA_GrenadeType;
				class CA_GrenadeCount;
				class CA_GunnerWeapon;
			};
		};
	};
	class RHSUSF_RscUnitInfoAirRTDFullDigital: RHSUSF_RscUnitInfoAirRTDFullDigital_Base
	{
		controls[] =
		{
			"CA_BackgroundVehicle", "CA_BackgroundVehicleTitle", "CA_BackgroundVehicleTitleDark", "CA_BackgroundFuel", "CA_Vehicle", "CA_VehicleRole", "CA_HitZones", "CA_VehicleTogglesBackground", "CA_VehicleToggles", "CA_SpeedBackground", "CA_SpeedUnits", "CA_Speed", "CA_ValueFuel", "CA_AltBackground", "CA_AltUnits", "CA_Alt",  "CA_Horizon_Lite", "CA_Speed_Analogue", "CA_Altitude_Analogue", "CA_Horizon_Analogue", "CA_Stability_Analogue", "CA_Compass_Analogue", "WeaponInfoControlsGroupRight",
			"CA_Mode"
		};
		onLoad="['onLoad',_this,'RscUnitInfo','IGUI'] call (uinamespace getvariable 'BIS_fnc_initDisplay'); ['jet',17] spawn RHSUSF_fnc_randomRadio;_this call rhsusf_fnc_announcer;_this spawn rhs_fnc_dynamicObjectDrawing_loop;[] call RHS_fnc_UI_Options";
		class CA_VehicleTogglesBackground;
		class WeaponInfoControlsGroupRight: WeaponInfoControlsGroupRight
		{
			class controls: controls
			{
				class CA_BackgroundWeapon: CA_BackgroundWeapon {};
				class CA_BackgroundWeaponTitle: CA_BackgroundWeaponTitle {};
				class CA_BackgroundWeaponTitleDark: CA_BackgroundWeaponTitleDark {};
				class CA_BackgroundWeaponMode: CA_BackgroundWeaponMode {};
				class CA_Weapon: CA_Weapon {};
				class CA_ModeTexture: CA_ModeTexture {};
				class CA_ValueReload: CA_ValueReload {};
				class CA_AmmoCount: CA_AmmoCount {};
				class CA_MagCount: CA_MagCount {};
				class CA_AmmoType: CA_AmmoType {
					y="1.80 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class CA_GrenadeType: CA_GrenadeType {};
				class CA_GrenadeCount: CA_GrenadeCount {};
				class CA_GunnerWeapon: CA_GunnerWeapon {};
				class CA_Mode: RscText
				{
					idc = -1;
				};
			};
		};
		class CA_Mode: RscText
		{
			idc=149;
			colorText[]=
			{
				"(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])",
				"(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])",
				"(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])",
				"(profilenamespace getvariable ['IGUI_TEXT_RGB_A',0.8])"
			};
			x="3.8 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(profilenamespace getvariable [""IGUI_GRID_WEAPON_X"",		((safezoneX + safezoneW) - 		(10 * 			(			((safezoneW / safezoneH) min 1.2) / 40)) - 4.3 * 			(			((safezoneW / safezoneH) min 1.2) / 40))])";
			y="1.1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(profilenamespace getvariable [""IGUI_GRID_WEAPON_Y"",		(safezoneY + 0.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))])";
			w="4.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			h="1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			sizeEx="0.8 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
	};
	class RHSUSF_RscUnitInfoAirRTDFullDigital_NoRadar: RHSUSF_RscUnitInfoAirRTDFullDigital
	{
		controls[] =
		{
			"CA_BackgroundVehicle", "CA_BackgroundVehicleTitle", "CA_BackgroundVehicleTitleDark", "CA_BackgroundFuel", "CA_Vehicle", "CA_VehicleRole", "CA_HitZones", "CA_VehicleTogglesBackground", "CA_VehicleToggles", "CA_SpeedBackground", "CA_SpeedUnits", "CA_Speed", "CA_ValueFuel", "CA_AltBackground", "CA_AltUnits", "CA_Alt",  "CA_Horizon_Lite", "CA_Speed_Analogue", "CA_Altitude_Analogue", "CA_Horizon_Analogue", "CA_Stability_Analogue", "CA_Compass_Analogue", "WeaponInfoControlsGroupRight",
			"CA_Mode"
		};
		ADD_IDD_TO_TOGGLEBACKGROUND
	};
	class RHSUSF_RscUnitInfoAirRTDFullDigital_UH1Y: RHSUSF_RscUnitInfoAirRTDFullDigital_NoRadar
	{
		onLoad="['onLoad',_this,'RscUnitInfo','IGUI'] call (uinamespace getvariable 'BIS_fnc_initDisplay');['jet',17] spawn RHSUSF_fnc_randomRadio;_this call rhsusf_fnc_uh1_handler;_this call rhsusf_fnc_announcer;_this spawn rhs_fnc_dynamicObjectDrawing_loop;[] call RHS_fnc_UI_Options";
	};
	class RHSUSF_RscUnitInfoAirRTDFullDigital_AH64: RHSUSF_RscUnitInfoAirRTDFullDigital_NoRadar
	{
		controls[] =
		{
			"CA_BackgroundVehicle", "CA_BackgroundVehicleTitle", "CA_BackgroundVehicleTitleDark", "CA_BackgroundFuel", "CA_Vehicle", "CA_VehicleRole", "CA_HitZones", "CA_VehicleTogglesBackground", "CA_VehicleToggles", "CA_SpeedBackground", "CA_SpeedUnits", "CA_Speed", "CA_ValueFuel", "CA_AltBackground", "CA_AltUnits", "CA_Alt",  "CA_Horizon_Lite", "CA_Speed_Analogue", "CA_Altitude_Analogue", "CA_Horizon_Analogue", "CA_Stability_Analogue", "CA_Compass_Analogue", "WeaponInfoControlsGroupRight",
			"RHS_UI_Handler", "CA_Mode"
		};

		onLoad="['onLoad',_this,'RscUnitInfo','IGUI'] call (uinamespace getvariable 'BIS_fnc_initDisplay'); ['jet',17] spawn RHSUSF_fnc_randomRadio;_this call rhsusf_fnc_announcer;_this spawn rhs_fnc_dynamicObjectDrawing_loop;_this call rhs_fnc_ah64_mainLoop;[] call RHS_fnc_UI_Options";
		class RHS_UI_Handler: RscPicture 	{idc=8550;};
		class Objects
		{
			class Scope
			{
				idc			= 411;
				type		= 82;
				model		= "\rhsusf\addons\rhsusf_optics\data\rhsusf_IHADSS_scope.p3d";
				scale		= 0.05 * (SafeZoneW Min SafeZoneH);
				direction[]	= {0, 0, 1};
				up[]		= {0, 1, 0};
				x			= "20 * (((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
				y			= "13.5 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + (safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
				z			= 0.103;
				xBack		= 0.5; yBack = 0.5;
				zBack		= 0;
				inBack		= 0;
				enableZoom	= 0; zoomDuration = 4.001;
			};
		};
	};
	class RHSUSF_RscUnitInfoAirRTDFullDigital_MELB: RHSUSF_RscUnitInfoAirRTDFullDigital
	{
		onLoad="['onLoad',_this,'RscUnitInfo','IGUI'] call (uinamespace getvariable 'BIS_fnc_initDisplay');_this call RHS_MELB_fnc_handler";
	};

	#include "rsc\cfgArtillery.hpp"
	#include "rsc\cfgM1.hpp"
	#include "rsc\cfgUH1.hpp"
	#include "rsc\cfgM1117.hpp"
	#include "rsc\cfgM153.hpp"
	#include "rsc\cfgStryker_M151.hpp"
	#include "rsc\cfgIBAS.hpp"
	#include "rsc\cfgISU.hpp"
	#include "rsc\cfgODS_ISU.hpp"
	#include "rsc\cfgA10A.hpp"
	#include "rsc\cfgCWSS.hpp"
	#include "rsc\cfgLRAS3.hpp"
	#include "rsc\cfgITAS.hpp"
	#include "rsc\cfgMITAS.hpp"
};