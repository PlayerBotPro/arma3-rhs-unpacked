
class RscControlsGroup
{
	class VScrollbar;
	class HScrollbar;
};
class RscButtonMenu; 
class RscTextCheckBox;

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