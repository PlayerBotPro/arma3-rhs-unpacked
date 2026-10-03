/* #Tyxiwo
$[
	1.063,
	["test",[["0","0","1","1"],"(0.01875 * SafezoneH)","(0.025 * SafezoneH)","GUI_GRID"],2,0,0],
	[2200,"",[2,"",["-0.5 * GUI_GRID_W + GUI_GRID_X","3 * GUI_GRID_H + GUI_GRID_Y","26.5 * GUI_GRID_W","11 * GUI_GRID_H"],[-1,-1,-1,-1],[-1,-1,-1,-1],[-1,-1,-1,-1],"","-1"],[]],
	[1600,"Button_TimeInterval",[2,"Activate Time Interval",["0 * GUI_GRID_W + GUI_GRID_X","8 * GUI_GRID_H + GUI_GRID_Y","6 * GUI_GRID_W","2 * GUI_GRID_H"],[-1,-1,-1,-1],[-1,-1,-1,-1],[-1,-1,-1,-1],"","-1"],[]],
	[1601,"Button_DistanceInterval",[2,"Activate Distance Interval",["0 * GUI_GRID_W + GUI_GRID_X","11 * GUI_GRID_H + GUI_GRID_Y","6 * GUI_GRID_W","2 * GUI_GRID_H"],[-1,-1,-1,-1],[-1,-1,-1,-1],[-1,-1,-1,-1],"","-1"],[]],
	[1602,"Button_25m",[2,"25m",["6.5 * GUI_GRID_W + GUI_GRID_X","11 * GUI_GRID_H + GUI_GRID_Y","3.5 * GUI_GRID_W","2 * GUI_GRID_H"],[-1,-1,-1,-1],[-1,-1,-1,-1],[-1,-1,-1,-1],"","-1"],[]],
	[1603,"Button_50m",[2,"50m",["10.5 * GUI_GRID_W + GUI_GRID_X","11 * GUI_GRID_H + GUI_GRID_Y","3.5 * GUI_GRID_W","2 * GUI_GRID_H"],[-1,-1,-1,-1],[-1,-1,-1,-1],[-1,-1,-1,-1],"","-1"],[]],
	[1605,"Button_250m",[2,"250m",["18.5 * GUI_GRID_W + GUI_GRID_X","11 * GUI_GRID_H + GUI_GRID_Y","3.5 * GUI_GRID_W","2 * GUI_GRID_H"],[-1,-1,-1,-1],[-1,-1,-1,-1],[-1,-1,-1,-1],"","-1"],[]],
	[1606,"Button_400m",[2,"400m",["22.5 * GUI_GRID_W + GUI_GRID_X","11 * GUI_GRID_H + GUI_GRID_Y","3 * GUI_GRID_W","2 * GUI_GRID_H"],[-1,-1,-1,-1],[-1,-1,-1,-1],[-1,-1,-1,-1],"","-1"],[]],
	[1607,"Button_5s",[2,"5s",["6.5 * GUI_GRID_W + GUI_GRID_X","8 * GUI_GRID_H + GUI_GRID_Y","3.5 * GUI_GRID_W","2 * GUI_GRID_H"],[-1,-1,-1,-1],[-1,-1,-1,-1],[-1,-1,-1,-1],"","-1"],[]],
	[1608,"Button_10s",[2,"10s",["10.5 * GUI_GRID_W + GUI_GRID_X","8 * GUI_GRID_H + GUI_GRID_Y","3.5 * GUI_GRID_W","2 * GUI_GRID_H"],[-1,-1,-1,-1],[-1,-1,-1,-1],[-1,-1,-1,-1],"","-1"],[]],
	[1609,"Button_15s",[2,"15s",["14.5 * GUI_GRID_W + GUI_GRID_X","8 * GUI_GRID_H + GUI_GRID_Y","3.5 * GUI_GRID_W","2 * GUI_GRID_H"],[-1,-1,-1,-1],[-1,-1,-1,-1],[-1,-1,-1,-1],"","-1"],[]],
	[1610,"Button_25s",[2,"25s",["18.5 * GUI_GRID_W + GUI_GRID_X","8 * GUI_GRID_H + GUI_GRID_Y","3.5 * GUI_GRID_W","2 * GUI_GRID_H"],[-1,-1,-1,-1],[-1,-1,-1,-1],[-1,-1,-1,-1],"","-1"],[]],
	[1611,"Button_40s",[2,"40s",["22.5 * GUI_GRID_W + GUI_GRID_X","8 * GUI_GRID_H + GUI_GRID_Y","3 * GUI_GRID_W","2 * GUI_GRID_H"],[-1,-1,-1,-1],[-1,-1,-1,-1],[-1,-1,-1,-1],"","-1"],[]],
	[1000,"TitleText",[2,"Lane Marking System controls",["6 * GUI_GRID_W + GUI_GRID_X","4 * GUI_GRID_H + GUI_GRID_Y","11.5 * GUI_GRID_W","2.5 * GUI_GRID_H"],[-1,-1,-1,-1],[-1,-1,-1,-1],[-1,-1,-1,-1],"","-1"],[]],
	[1604,"Button_100m",[2,"100m",["14.5 * GUI_GRID_W + GUI_GRID_X","11 * GUI_GRID_H + GUI_GRID_Y","3.5 * GUI_GRID_W","2 * GUI_GRID_H"],[-1,-1,-1,-1],[-1,-1,-1,-1],[-1,-1,-1,-1],"","-1"],[]]
]
*/

		////////////////////////////////////////////////////////
		// GUI EDITOR OUTPUT START (by reyhard, v1.063, #Qozusy)
		////////////////////////////////////////////////////////

#define GUI_GRID_X	(0)
#define GUI_GRID_Y	(0)
#define GUI_GRID_W	((0.01875 * SafezoneH))
#define GUI_GRID_H	((0.025 * SafezoneH))
#define GUI_GRID_WAbs	(1)
#define GUI_GRID_HAbs	(1)

class RHS_LaneMarkingSystem_Controls
{
	enableSimulation = true;
	idd = 201;
	movingenable = false;
	//onLoad = "sliderSetRange [1900,0.01,1];sliderSetPosition [1900,cameraon animationSourcePhase 'BFT_Map_Scale']";
	class Controls
	{
		class IGUIBack_2200: IGUIBack
		{
			idc = 2200;
			x = -0.5 * GUI_GRID_W + GUI_GRID_X;
			y = 3 * GUI_GRID_H + GUI_GRID_Y;
			w = 26.5 * GUI_GRID_W;
			h = 11 * GUI_GRID_H;
		};
		class Button_TimeInterval: RscButton
		{
			idc = 1600;
			text = "Activate Time Interval"; //--- ToDo: Localize;
			x = 0 * GUI_GRID_W + GUI_GRID_X;
			y = 8 * GUI_GRID_H + GUI_GRID_Y;
			w = 6 * GUI_GRID_W;
			h = 2 * GUI_GRID_H;
		};
		class Button_DistanceInterval: RscButton
		{
			idc = 1601;
			text = "Activate Distance Interval"; //--- ToDo: Localize;
			x = 0 * GUI_GRID_W + GUI_GRID_X;
			y = 11 * GUI_GRID_H + GUI_GRID_Y;
			w = 6 * GUI_GRID_W;
			h = 2 * GUI_GRID_H;
		};
		class Button_Distance_1: RscButton
		{
			idc = 1602;
			text = "15m"; //--- ToDo: Localize;
			x = 6.5 * GUI_GRID_W + GUI_GRID_X;
			y = 11 * GUI_GRID_H + GUI_GRID_Y;
			w = 3.5 * GUI_GRID_W;
			h = 2 * GUI_GRID_H;
		};
		class Button_Distance_2: RscButton
		{
			idc = 1603;
			text = "25m"; //--- ToDo: Localize;
			x = 10.5 * GUI_GRID_W + GUI_GRID_X;
			y = 11 * GUI_GRID_H + GUI_GRID_Y;
			w = 3.5 * GUI_GRID_W;
			h = 2 * GUI_GRID_H;
		};
		class Button_Distance_3: RscButton
		{
			idc = 1604;
			text = "50m"; //--- ToDo: Localize;
			x = 14.5 * GUI_GRID_W + GUI_GRID_X;
			y = 11 * GUI_GRID_H + GUI_GRID_Y;
			w = 3.5 * GUI_GRID_W;
			h = 2 * GUI_GRID_H;
		};
		class Button_Distance_4: RscButton
		{
			idc = 1605;
			text = "100m"; //--- ToDo: Localize;
			x = 18.5 * GUI_GRID_W + GUI_GRID_X;
			y = 11 * GUI_GRID_H + GUI_GRID_Y;
			w = 3.5 * GUI_GRID_W;
			h = 2 * GUI_GRID_H;
		};
		class Button_Distance_5: RscButton
		{
			idc = 1606;
			text = "250m"; //--- ToDo: Localize;
			x = 22.5 * GUI_GRID_W + GUI_GRID_X;
			y = 11 * GUI_GRID_H + GUI_GRID_Y;
			w = 3 * GUI_GRID_W;
			h = 2 * GUI_GRID_H;
		};
		class Button_Time_1: RscButton
		{
			idc = 1607;
			text = "5s"; //--- ToDo: Localize;
			x = 6.5 * GUI_GRID_W + GUI_GRID_X;
			y = 8 * GUI_GRID_H + GUI_GRID_Y;
			w = 3.5 * GUI_GRID_W;
			h = 2 * GUI_GRID_H;
		};
		class Button_Time_2: RscButton
		{
			idc = 1608;
			text = "10s"; //--- ToDo: Localize;
			x = 10.5 * GUI_GRID_W + GUI_GRID_X;
			y = 8 * GUI_GRID_H + GUI_GRID_Y;
			w = 3.5 * GUI_GRID_W;
			h = 2 * GUI_GRID_H;
		};
		class Button_Time_3: RscButton
		{
			idc = 1609;
			text = "15s"; //--- ToDo: Localize;
			x = 14.5 * GUI_GRID_W + GUI_GRID_X;
			y = 8 * GUI_GRID_H + GUI_GRID_Y;
			w = 3.5 * GUI_GRID_W;
			h = 2 * GUI_GRID_H;
		};
		class Button_Time_4: RscButton
		{
			idc = 1610;
			text = "25s"; //--- ToDo: Localize;
			x = 18.5 * GUI_GRID_W + GUI_GRID_X;
			y = 8 * GUI_GRID_H + GUI_GRID_Y;
			w = 3.5 * GUI_GRID_W;
			h = 2 * GUI_GRID_H;
		};
		class Button_Time_5: RscButton
		{
			idc = 1611;
			text = "40s"; //--- ToDo: Localize;
			x = 22.5 * GUI_GRID_W + GUI_GRID_X;
			y = 8 * GUI_GRID_H + GUI_GRID_Y;
			w = 3 * GUI_GRID_W;
			h = 2 * GUI_GRID_H;
		};
		class TitleText: RscText
		{
			idc = 1000;
			text = "Lane Marking System controls"; //--- ToDo: Localize;
			style = 0x02;
			x = 7 * GUI_GRID_W + GUI_GRID_X;
			y = 4 * GUI_GRID_H + GUI_GRID_Y;
			w = 11.5 * GUI_GRID_W;
			h = 2.5 * GUI_GRID_H;
		};
	};
};
		////////////////////////////////////////////////////////
		// GUI EDITOR OUTPUT END
		////////////////////////////////////////////////////////

