/*
missionconfigfile >> "RHS_C130J_UI"
createDialog "RHS_C130J_UI"
create
*/
class RHS_C130J_UI
{
	enableSimulation = true;
	idd = 101;
	movingenable = false;
	//onLoad = "{ctrlShow [_x, false]}foreach [1203,1206,1207,1208]";
	class Controls
	{

		class RscButtonMenu_2600: RscButton
		{
			idc=2600;
			text = "Open ramp";
			x = 0.420672 * safezoneW + safezoneX;
			y = 0.358941 * safezoneH + safezoneY;
			w = 0.092549 * safezoneW;
			h = 0.0188079 * safezoneH;

			soundClick[] =
			{
				"rhsusf\addons\rhsusf_optics\scripts\us_komp\sounds\button.wav",
				0.89,
				1
			};
			action="[5651,'ramp',1] call rhs_fnc_c130j_setOption";
		};
		class RscButtonMenu_2601: RscButtonMenu_2600
		{
			idc=2601;
			text = "Level ramp";
			x = 0.420672 * safezoneW + safezoneX;
			y = 0.387153 * safezoneH + safezoneY;
			w = 0.092549 * safezoneW;
			h = 0.0188079 * safezoneH;
			action="[5651,'ramp',2] call rhs_fnc_c130j_setOption";
		};
		class RscButtonMenu_2602: RscButtonMenu_2600
		{
			idc=2602;

			text = "Toggle left door";
			x = 0.420672 * safezoneW + safezoneX;
			y = 0.415365 * safezoneH + safezoneY;
			w = 0.092549 * safezoneW;
			h = 0.0188079 * safezoneH;
			action="[5652,'door_2_1',3] call rhs_fnc_c130j_setOption";
		};
		class RscButtonMenu_2600_2603: RscButtonMenu_2600
		{
			idc=2603;

			text = "Toggle right door";
			x = 0.420672 * safezoneW + safezoneX;
			y = 0.443576 * safezoneH + safezoneY;
			w = 0.092549 * safezoneW;
			h = 0.0188079 * safezoneH;
			action="[5653,'door_2_2',4] call rhs_fnc_c130j_setOption";
		};
		class RscButtonMenu_2600_2604: RscButtonMenu_2600
		{
			idc=2606;

			text = "Toggle crew door";
			x = 0.420672 * safezoneW + safezoneX;
			y = 0.471788 * safezoneH + safezoneY;
			w = 0.092549 * safezoneW;
			h = 0.0188079 * safezoneH;
			action="[5654,'door_1',5] call rhs_fnc_c130j_setOption";
		};
		class RscButtonMenu_2600_2605: RscButtonMenu_2600
		{
			idc=2605;

			text = "Toggle jump light";
			x = 0.420672 * safezoneW + safezoneX;
			y = 0.5 * safezoneH + safezoneY;
			w = 0.092549 * safezoneW;
			h = 0.0188079 * safezoneH;
			action="[5655,'jumplight',6] call rhs_fnc_c130j_setOption";
		};
		class RscButtonMenu_2600_2606: RscButtonMenu_2600
		{
			idc=2606;

			text = "Toggle interior light";
			x = 0.420672 * safezoneW + safezoneX;
			y = 0.528212 * safezoneH + safezoneY;
			w = 0.092549 * safezoneW;
			h = 0.0188079 * safezoneH;
			action="[5656,'cargolights_hide',7] call rhs_fnc_c130j_setOption";
		};
		/*class RscButtonMenu_2600_2607: RscButtonMenu_2600
		{
			idc=2607;

			text = "Toggle cabin light";
			x = 0.420672 * safezoneW + safezoneX;
			y = 0.556424 * safezoneH + safezoneY;
			w = 0.092549 * safezoneW;
			h = 0.0188079 * safezoneH;
			action="[5657,'cabinlights_hide',8] call rhs_fnc_c130j_setOption";
		};*/

		class Background: IGUIBack
		{
			idc = 2200;
			x = 0.411858 * safezoneW + safezoneX;
			y = 0.330729 * safezoneH + safezoneY;
			w = 0.171877 * safezoneW;
			h = 0.24331 * safezoneH;
		};

		class Status_1: RscButton
		{
			idc=5651;
			text = "Leveled";
			x = 0.522035 * safezoneW + safezoneX;
			y = 0.358941 * safezoneH + safezoneY;
			w = 0.0528851 * safezoneW;
			h = 0.0470196 * safezoneH;
			color[] = {0.99,0.6,0.04,1};
			color2[] = {0.99,0.6,0.04,1};
			colorBackground[] = {0,0,0,1};
			colorBackground2[] = {0,0,0,1};
			colorBackgroundFocused[] = {0,0,0,1};
			colorBackgroundActive[] = {0,0,0,1};
			colorBackgroundDisabled[] = {0,0,0,1};
			colorFocused[] = {0,0,0,1};
			//colorText[] = {0.99,0.6,0.04,1};
			colorText[] = {0.76,0.05,0,1};
			colorDisabled[] = {1,1,1,1};
			soundEnter[] = {"\A3\ui_f\data\sound\RscButtonMenu\soundEnter",0.,1};
			soundPush[] = {"\A3\ui_f\data\sound\RscButtonMenu\soundPush",0.,1};
			soundClick[] = {"\A3\ui_f\data\sound\RscButtonMenu\soundClick",0.,1};
			soundEscape[] = {"\A3\ui_f\data\sound\RscButtonMenu\soundEscape",0.,1};
		};
		class Status_2: Status_1
		{
			idc=5652;
			text = "Closed";
			x = 0.522035 * safezoneW + safezoneX;
			y = 0.415365 * safezoneH + safezoneY;
			w = 0.0528851 * safezoneW;
			h = 0.0188079 * safezoneH;
			color[] = {0.76,0.05,0,1};
		};
		class Status_3: Status_1
		{
			idc=5653;

			text = "Closed";
			x = 0.522035 * safezoneW + safezoneX;
			y = 0.443576 * safezoneH + safezoneY;
			w = 0.0528851 * safezoneW;
			h = 0.0188079 * safezoneH;
			colorText[] = {0.76,0.05,0,1};
		};
		class Status_4: Status_1
		{
			idc=5654;

			text = "Closed";
			x = 0.522035 * safezoneW + safezoneX;
			y = 0.471788 * safezoneH + safezoneY;
			w = 0.0528851 * safezoneW;
			h = 0.0188079 * safezoneH;
			colorText[] = {0.76,0.05,0,1};
		};
		class Status_5: Status_1
		{
			idc=5655;

			text = "Red";
			x = 0.522035 * safezoneW + safezoneX;
			y = 0.5 * safezoneH + safezoneY;
			w = 0.0528851 * safezoneW;
			h = 0.0188079 * safezoneH;
			colorText[] = {0.76,0.05,0,1};
		};
		class Status_6: Status_1
		{
			idc=5656;

			text = "Off";
			x = 0.522035 * safezoneW + safezoneX;
			y = 0.528212 * safezoneH + safezoneY;
			w = 0.0528851 * safezoneW;
			h = 0.0188079 * safezoneH;
			colorText[] = {0.76,0.05,0,1};
		};
		/*class Status_7: Status_1
		{
			idc=5657;

			text = "Off";
			x = 0.522035 * safezoneW + safezoneX;
			y = 0.556424 * safezoneH + safezoneY;
			w = 0.0528851 * safezoneW;
			h = 0.0188079 * safezoneH;
			colorText[] = {0.76,0.05,0,1};
		};*/

	};
};