/*
missionconfigfile >> "RHS_MarkV_LoadBoat_UI
*/
class RHS_MarkV_LoadBoat_UI
{
	enableSimulation = true;
	idd = 101;
	movingenable = false;
	class Controls
	{
		class MarkV_LoadButton: RscButton
		{
			idc = 1600;
			text = "Load boat";
			x = 0.389823 * safezoneW + safezoneX;
			y = 0.791522 * safezoneH + safezoneY;
			w = 0.189505 * safezoneW;
			h = 0.0470196 * safezoneH;
			action="[4] call rhsusf_fnc_markvsoc_loadAction";
		};
		class MarkV_LoadButton_Switch: MarkV_LoadButton
		{
			idc = 1601;
			text = "Switch to unload mode";
			x = 0.389823 * safezoneW + safezoneX;
			y = 0.735098 * safezoneH + safezoneY;
			w = 0.189505 * safezoneW;
			h = 0.0470196 * safezoneH;
			action="[3] call rhsusf_fnc_markvsoc_loadAction";
		};
		class MarkV_button1: RscButton
		{
			idc = 2400;
			text = "";
			x = 0.367787 * safezoneW + safezoneX;
			y = 0.349537 * safezoneH + safezoneY;
			w = 0.185098 * safezoneW;
			h = 0.21629 * safezoneH;
			colorBackground[] = {-1,-1,-1,0};
			colorBackgroundActive[] = {-1,-1,-1,0};
			colorBackgroundDisabled[] = {-1,-1,-1,0};
			colorActive[] = {-1,-1,-1,0};
			colorFocused[] = {-1,-1,-1,0};
			colorShadow[] = {-1,-1,-1,0};
			colorBorder[] = {-1,-1,-1,0};
			colorDisabled[] = {-1,-1,-1,0};
			action="[1] call rhsusf_fnc_markvsoc_loadAction";
		};
		class MarkV_button2: MarkV_button1
		{
			idc = 2401;
			text = "";
			x = 0.200318 * safezoneW + safezoneX;
			y = 0.349537 * safezoneH + safezoneY;
			w = 0.154248 * safezoneW;
			h = 0.21629 * safezoneH;
			action="[2] call rhsusf_fnc_markvsoc_loadAction";
		};

	};
};


/*  #Xavoxa
$[
	1.063,
	["rr1",[[0,0,1,1],0.025,0.04,"GUI_GRID"],0,0,0],
	[1600,"",[1,"#1",["0.367787 * safezoneW + safezoneX","0.349537 * safezoneH + safezoneY","0.185098 * safezoneW","0.21629 * safezoneH"],[-1,-1,-1,-1],[-1,-1,-1,-1],[-1,-1,-1,-1],"","-1"],[]],
	[1601,"",[1,"#2",["0.200318 * safezoneW + safezoneX","0.349537 * safezoneH + safezoneY","0.154248 * safezoneW","0.21629 * safezoneH"],[-1,-1,-1,-1],[-1,-1,-1,-1],[-1,-1,-1,-1],"","-1"],[]],
	[1602,"",[1,"Load boat",["0.389823 * safezoneW + safezoneX","0.791522 * safezoneH + safezoneY","0.189505 * safezoneW","0.0470196 * safezoneH"],[-1,-1,-1,-1],[-1,-1,-1,-1],[-1,-1,-1,-1],"","-1"],[]],
	[1603,"",[1,"Switch to unload mode",["0.389823 * safezoneW + safezoneX","0.735098 * safezoneH + safezoneY","0.189505 * safezoneW","0.0470196 * safezoneH"],[-1,-1,-1,-1],[-1,-1,-1,-1],[-1,-1,-1,-1],"","-1"],[]]
]
*/
