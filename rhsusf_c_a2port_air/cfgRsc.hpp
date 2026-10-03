
class RscOpticsText;
class RscOpticsValue;
class RscButton;
class RscText;
class RscPicture;
class RscControlsGroup
{
	class VScrollbar;
	class HScrollbar;
};
class RscButtonMenu; 
class RscTextCheckBox;

class HScrollbar;
class VScrollbar;
class RscShortcutButton;
class IGUIBack;

#include "scripts\c130ui\c130j_ui.hpp"

class RscInGameUI
{
	class RscUnitInfo;
	class RHS_RscOptics_Heli_Attack_01_gunner: RscUnitInfo
	{
		idd = 300;
		onLoad="['onLoad',_this,'RscUnitInfo','IGUI'] call (uinamespace getvariable 'BIS_fnc_initDisplay'); _this spawn RHS_fnc_ah64_gunnerUI";
		controls[] = {"CA_Zeroing","CA_IGUI_elements_group"};
		class CA_IGUI_elements_group: RscControlsGroup
		{
			idc = 170;
			class VScrollbar: VScrollbar
			{
				width = 0;
			};
			class HScrollbar: HScrollbar
			{
				height = 0;
			};
			x = "0 * 		(0.01875 * SafezoneH) + 		(SafezoneX + ((SafezoneW - SafezoneH) / 2))";
			y = "0 * 		(0.025 * SafezoneH) + 		(SafezoneY)";
			w = "53.5 * 		(0.01875 * SafezoneH)";
			h = "40 * 		(0.025 * SafezoneH)";
			class controls
			{

				class CA_OpticsZoom: RscText
				{
					idc=180;
					style=1;
					colorText[]={0.48,0.77,0.46,1};
					sizeEx="0.038*SafezoneH";
					shadow=0;
					font="rhsusf_digital_font_var";
					text="4.5";
					x="43.85 * 		(0.01875 * SafezoneH)";
					y="19.6 * 		(0.025 * SafezoneH)";
					w="0* 		(0.01875 * SafezoneH)";
					h="0 * 		(0.025 * SafezoneH)";
					//w="4.5 * 		(0.01875 * SafezoneH)";
					//h="1.1 * 		(0.025 * SafezoneH)";
				};
				class CA_OpticsMode: CA_OpticsZoom
				{
					idc = 154;
				};
				class CA_Distance: RscText
				{
					idc = 198;
					style = 2;
					sizeEx = "0.0295*SafezoneH";
					shadow = 0;
					font = "EtelkaMonospacePro";
					text = "2456";
					x = "24.78 * 		(0.01875 * SafezoneH)";
					y = "30.88 * 		(0.025 * SafezoneH)";
					w = "4 * 		(0.01875 * SafezoneH)";
					h = "1.2 * 		(0.025 * SafezoneH)";
				};
				class CA_VisionMode: RscText
				{
					idc = 179;
					style = 0;
					sizeEx = "0.0295*SafezoneH";
					shadow = 0;
					font = "EtelkaMonospacePro";
					text = "VIS";
					x = "9.3 * 		(0.01875 * SafezoneH)";
					y = "15.34 * 		(0.025 * SafezoneH)";
					w = "4 * 		(0.01875 * SafezoneH)";
					h = "1.2 * 		(0.025 * SafezoneH)";
				};
				class CA_FlirMode: RscText
				{
					idc = 153;
					style = 0;
					sizeEx = "0.0295*SafezoneH";
					shadow = 0;
					font = "EtelkaMonospacePro";
					text = "BHOT";
					x = "11.15 * 		(0.01875 * SafezoneH)";
					y = "15.34 * 		(0.025 * SafezoneH)";
					w = "4.5 * 		(0.01875 * SafezoneH)";
					h = "1.2 * 		(0.025 * SafezoneH)";
				};
				class CA_Laser: RscText
				{
					idc = 158;
					style = "0x30 + 0x800";
					sizeEx = "0.038*SafezoneH";
					colorText[] = {0.706,0.0745,0.0196,1};
					shadow = 0;
					font = "EtelkaMonospacePro";
					text = "\A3\ui_f\data\igui\rscingameui\rscoptics\laser_designator_iconLaserOn.paa";
					x = "31.1 * 		(0.01875 * SafezoneH)";
					y = "12.85 * 		(0.025 * SafezoneH)";
					w = "3.5 * 		(0.01875 * SafezoneH)";
					h = "1.5 * 		(0.025 * SafezoneH)";
				};
			};
		};
	};
};

class RHS_WP_Control_Checbkox: RscTextCheckBox
{
	idc		= -1;
	style	= 2;

	colorSelectedBg[] = {0.07,0.1,0};

	strings[]			= {"Waypoint Management - Off"};
	checked_strings[]	= {"Waypoint Management - On"};
	// 
	onCheckBoxesSelChanged = "(vehicle (call rhs_fnc_findPlayer)) setVariable ['RHS_WP_Manage',(_this select 2) isEqualTo 1];";

	tooltip = "When this checkbox is ticked on it's possible to add, remove & change currently selected waypoint.";

	x	= 0.45 * safezoneW + safezoneX;
	y	= 0.0003998 * safezoneH + safezoneY;
	w	= 0.088478 * safezoneW;
	h	= 0.0282118 * safezoneH;
};

class RHS_WP_Control_Group: RscControlsGroup
{
	idc = 170;
	class VScrollbar: VScrollbar
	{
		width = 0;
	};
	class HScrollbar: HScrollbar
	{
		height = 0;
	};
	x = "0 * 		(0.01875 * SafezoneH) + 		(SafezoneX + ((SafezoneW - SafezoneH) / 2))";
	y = "0 * 		(0.025 * SafezoneH) + 		(SafezoneY)";
	w = "53.5 * 	(0.01875 * SafezoneH)";
	h = "40 * 		(0.025 * SafezoneH)";
	class controls
	{
		class Button_1: RscButtonMenu
		{
			text = "Mark as next WP"; //--- ToDo: Localize;
			x = 0.33 * safezoneW + safezoneX;
			y = 0.28 * safezoneH + safezoneY;
			w = 0.0837348 * safezoneW;
			h = 0.0282118 * safezoneH;
			action = "(group player) setCurrentWaypoint (call RHS_fnc_wp_find);[] spawn {sleep 0.1;ctrlDelete ((findDisplay 12) displayCtrl 20001)}";
		};
		class Button_2: RscButtonMenu
		{
			text = "Delete WP"; //--- ToDo: Localize;
			x = 0.33 * safezoneW + safezoneX;
			y = 0.31 * safezoneH + safezoneY;
			w = 0.0837348 * safezoneW;
			h = 0.0282118 * safezoneH;
			action = "deleteWaypoint (call RHS_fnc_wp_find);[] spawn {sleep 0.1;ctrlDelete ((findDisplay 12) displayCtrl 20001)}";
		};
		class Button_3: RscButtonMenu
		{
			action = "[] spawn {sleep 0.1;ctrlDelete ((findDisplay 12) displayCtrl 20001)}";
			text = "Close"; //--- ToDo: Localize;
			x = 0.33 * safezoneW + safezoneX;
			y = 0.34 * safezoneH + safezoneY;
			w = 0.0837348 * safezoneW;
			h = 0.0282118 * safezoneH;
		};
	};
};