
class RHS_P37_Radar
{
	idd = 314;
	scriptName = "RscCustomInfoSensors";
	scriptPath = "IGUI";
	onLoad = "['onLoad',_this,'RscCustomInfoSensors','IGUI'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
	onUnload = "['onUnload',_this,'RscCustomInfoSensors','IGUI'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
	class controlsBackground
	{
		class Background: RscPicture
		{
			IDC = 15110;
			text = "A3\Ui_f\data\IGUI\RscCustomInfo\background_ca.paa";
			x = 0;
			y = "1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			w = "(40 * 			(			((safezoneW / safezoneH) min 1.2) / 40)))";
			h = "(40 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))]) - (1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))";
			colorText[] = {"(profilenamespace getvariable ['IGUI_BCG_RGB_R',0])","(profilenamespace getvariable ['IGUI_BCG_RGB_G',1])","(profilenamespace getvariable ['IGUI_BCG_RGB_B',1])","(profilenamespace getvariable ['IGUI_BCG_RGB_A',0.8)"};
		};
		class BackgroundGroup: RscControlsGroupNoScrollbars
		{
			IDC = 15111;
			x = "0.125 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			y = "1.125 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			w = "(profilenamespace getvariable ['IGUI_GRID_CUSTOMINFORIGHT_W',		(10 * 			(			((safezoneW / safezoneH) min 1.2) / 40))]) - 0.25 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			h = "(profilenamespace getvariable ['IGUI_GRID_CUSTOMINFORIGHT_H',		(10 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))]) - 1.25 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			class controls
			{
				class Viewport: RscControlsGroupNoScrollbars
				{
					IDC = 101;
					x = 0;
					y = 0;
					w = "(profilenamespace getvariable ['IGUI_GRID_CUSTOMINFORIGHT_W',		(10 * 			(			((safezoneW / safezoneH) min 1.2) / 40))]) - 0.25 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					h = "(profilenamespace getvariable ['IGUI_GRID_CUSTOMINFORIGHT_H',		(10 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))]) - 1.25 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class Circles: RscPicture
				{
					IDC = 102;
					text = "A3\Ui_f\data\IGUI\RscCustomInfo\Sensors\SENSCircles_ca.paa";
					x = "0 - 0.7875 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "0.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					w = "(profilenamespace getvariable ['IGUI_GRID_CUSTOMINFORIGHT_W',		(10 * 			(			((safezoneW / safezoneH) min 1.2) / 40))]) + 1.325 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					h = "(profilenamespace getvariable ['IGUI_GRID_CUSTOMINFORIGHT_H',		(10 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))]) + 1.325 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					colorText[] = {"(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])","(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])","(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])","(profilenamespace getvariable ['IGUI_TEXT_RGB_A',0.8])"};
				};
				class OwnerVehicle: RscPicture
				{
					IDC = 103;
					text = "";
					x = "0.5 * (		(profilenamespace getvariable ['IGUI_GRID_CUSTOMINFORIGHT_W',		(10 * 			(			((safezoneW / safezoneH) min 1.2) / 40))]) + 1.325 * 			(			((safezoneW / safezoneH) min 1.2) / 40)) - 1.2875 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					y = "0.5 * (		(profilenamespace getvariable ['IGUI_GRID_CUSTOMINFORIGHT_H',		(10 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))]) + 1.325 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))";
					w = "1 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
					h = "1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					colorText[] = {"(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])","(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])","(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])","(profilenamespace getvariable ['IGUI_TEXT_RGB_A',0.8])"};
				};
			};
		};
	};
	class controls
	{
		class RadarOff: RscIGUIText
		{
			text = "RDR OFF";
			style = 2;
			idc = 106;
			x = "0.2 * 		(profilenamespace getvariable ['IGUI_GRID_CUSTOMINFORIGHT_W',		(10 * 			(			((safezoneW / safezoneH) min 1.2) / 40))])";
			y = 0;
			h = "1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			w = "0.3 * 		(profilenamespace getvariable ['IGUI_GRID_CUSTOMINFORIGHT_W',		(10 * 			(			((safezoneW / safezoneH) min 1.2) / 40))])";
			sizeEx = "0.8 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class Title: RscIGUIText
		{
			colorBackground[] = {"(profilenamespace getvariable ['IGUI_BCG_RGB_R',0])","(profilenamespace getvariable ['IGUI_BCG_RGB_G',1])","(profilenamespace getvariable ['IGUI_BCG_RGB_B',1])","(profilenamespace getvariable ['IGUI_BCG_RGB_A',0.8])"};
			idc = 15112;
			text = "SENS";
			x = 0;
			y = 0;
			w = "(profilenamespace getvariable ['IGUI_GRID_CUSTOMINFORIGHT_W',		(10 * 			(			((safezoneW / safezoneH) min 1.2) / 40))])";
			h = "1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			sizeEx = "0.8 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class RadarOn: RadarOff
		{
			text = "RDR ON";
			idc = 105;
			colorText[] = {0,1,1,1};
		};
		class Heading: RscIGUIText
		{
			style = 2;
			text = "HDG";
			idc = 111;
			x = "0.55 * 		(profilenamespace getvariable ['IGUI_GRID_CUSTOMINFORIGHT_W',		(10 * 			(			((safezoneW / safezoneH) min 1.2) / 40))])";
			y = 0;
			h = "1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			w = "0.15 * 		(profilenamespace getvariable ['IGUI_GRID_CUSTOMINFORIGHT_W',		(10 * 			(			((safezoneW / safezoneH) min 1.2) / 40))])";
			sizeEx = "0.8 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class Range: RscIGUIValue
		{
			IDC = 104;
			text = "disprange";
			style = 1;
			x = "0.5 * 		(profilenamespace getvariable ['IGUI_GRID_CUSTOMINFORIGHT_W',		(10 * 			(			((safezoneW / safezoneH) min 1.2) / 40))])";
			y = 0;
			w = "0.5 * 		(profilenamespace getvariable ['IGUI_GRID_CUSTOMINFORIGHT_W',		(10 * 			(			((safezoneW / safezoneH) min 1.2) / 40))])";
			h = "1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class Target: RscIGUIText
		{
			IDC = 107;
			text = "tgttype";
			x = 0;
			y = "1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			w = "(profilenamespace getvariable ['IGUI_GRID_CUSTOMINFORIGHT_W',		(10 * 			(			((safezoneW / safezoneH) min 1.2) / 40))])";
			h = "1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class TargetRange: RscIGUIText
		{
			IDC = 108;
			text = "tgtrange";
			x = 0;
			y = "1.75 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			w = "0.5 * 		(profilenamespace getvariable ['IGUI_GRID_CUSTOMINFORIGHT_W',		(10 * 			(			((safezoneW / safezoneH) min 1.2) / 40))])";
			h = "1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class TargetAlt: RscIGUIText
		{
			IDC = 110;
			text = "tgtalt";
			style = 1;
			x = "0.5 * 		(profilenamespace getvariable ['IGUI_GRID_CUSTOMINFORIGHT_W',		(10 * 			(			((safezoneW / safezoneH) min 1.2) / 40))])";
			y = "1.75 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			w = "0.5 * 		(profilenamespace getvariable ['IGUI_GRID_CUSTOMINFORIGHT_W',		(10 * 			(			((safezoneW / safezoneH) min 1.2) / 40))])";
			h = "1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class TargetSpeed: RscIGUIText
		{
			IDC = 109;
			text = "tgtspeed";
			style = 1;
			x = "0.5 * 		(profilenamespace getvariable ['IGUI_GRID_CUSTOMINFORIGHT_W',		(10 * 			(			((safezoneW / safezoneH) min 1.2) / 40))])";
			y = "1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			w = "0.5 * 		(profilenamespace getvariable ['IGUI_GRID_CUSTOMINFORIGHT_W',		(10 * 			(			((safezoneW / safezoneH) min 1.2) / 40))])";
			h = "1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
	};
	class sectors
	{
		icon15 = "A3\Ui_f\data\IGUI\RscCustomInfo\Sensors\Sectors\sector15_ca.paa";
		icon30 = "A3\Ui_f\data\IGUI\RscCustomInfo\Sensors\Sectors\sector30_ca.paa";
		icon45 = "A3\Ui_f\data\IGUI\RscCustomInfo\Sensors\Sectors\sector45_ca.paa";
		icon60 = "A3\Ui_f\data\IGUI\RscCustomInfo\Sensors\Sectors\sector60_ca.paa";
		icon75 = "A3\Ui_f\data\IGUI\RscCustomInfo\Sensors\Sectors\sector75_ca.paa";
		icon90 = "A3\Ui_f\data\IGUI\RscCustomInfo\Sensors\Sectors\sector90_ca.paa";
		icon105 = "A3\Ui_f\data\IGUI\RscCustomInfo\Sensors\Sectors\sector105_ca.paa";
		icon120 = "A3\Ui_f\data\IGUI\RscCustomInfo\Sensors\Sectors\sector120_ca.paa";
		icon135 = "A3\Ui_f\data\IGUI\RscCustomInfo\Sensors\Sectors\sector135_ca.paa";
		icon150 = "A3\Ui_f\data\IGUI\RscCustomInfo\Sensors\Sectors\sector150_ca.paa";
		icon165 = "A3\Ui_f\data\IGUI\RscCustomInfo\Sensors\Sectors\sector165_ca.paa";
		icon180 = "A3\Ui_f\data\IGUI\RscCustomInfo\Sensors\Sectors\sector180_ca.paa";
		icon195 = "A3\Ui_f\data\IGUI\RscCustomInfo\Sensors\Sectors\sector195_ca.paa";
		icon210 = "A3\Ui_f\data\IGUI\RscCustomInfo\Sensors\Sectors\sector210_ca.paa";
		icon225 = "A3\Ui_f\data\IGUI\RscCustomInfo\Sensors\Sectors\sector225_ca.paa";
		icon240 = "A3\Ui_f\data\IGUI\RscCustomInfo\Sensors\Sectors\sector240_ca.paa";
		icon255 = "A3\Ui_f\data\IGUI\RscCustomInfo\Sensors\Sectors\sector255_ca.paa";
		icon270 = "A3\Ui_f\data\IGUI\RscCustomInfo\Sensors\Sectors\sector270_ca.paa";
		icon285 = "A3\Ui_f\data\IGUI\RscCustomInfo\Sensors\Sectors\sector285_ca.paa";
		icon300 = "A3\Ui_f\data\IGUI\RscCustomInfo\Sensors\Sectors\sector300_ca.paa";
		icon315 = "A3\Ui_f\data\IGUI\RscCustomInfo\Sensors\Sectors\sector315_ca.paa";
		icon330 = "A3\Ui_f\data\IGUI\RscCustomInfo\Sensors\Sectors\sector330_ca.paa";
		icon345 = "A3\Ui_f\data\IGUI\RscCustomInfo\Sensors\Sectors\sector345_ca.paa";
		icon360 = "A3\Ui_f\data\IGUI\RscCustomInfo\Sensors\Sectors\sector360_ca.paa";
	};
	class targets
	{
		colorGroup[] = {0.7,1,0.4,1};
		colorAssigned[] = {1,0,0,1};
		colorMarked[] = {1,1,1,1};
		iconLaserTarget = "A3\Ui_f\data\IGUI\RscCustomInfo\Sensors\Targets\LaserTarget_ca.paa";
		iconNVTarget = "A3\Ui_f\data\IGUI\RscCustomInfo\Sensors\Targets\NVTarget_ca.paa";
		iconActiveSensor = "A3\Ui_f\data\IGUI\RscCustomInfo\Sensors\Targets\ActiveSensor_ca.paa";
		iconMarkedTarget = "A3\Ui_f\data\IGUI\RscCustomInfo\Sensors\Targets\MarkedTarget_ca.paa";
		iconAssignedTarget = "A3\Ui_f\data\IGUI\RscCustomInfo\Sensors\Targets\AssignedTarget_ca.paa";
		colorUnknown[] = {1,1,1,1};
		iconUnknownAir = "A3\Ui_f\data\IGUI\RscCustomInfo\Sensors\Targets\Air_ca.paa";
		iconUnknownAirRemote = "A3\Ui_f\data\IGUI\RscCustomInfo\Sensors\Targets\AirRemote_ca.paa";
		iconUnknownGround = "A3\Ui_f\data\IGUI\RscCustomInfo\Sensors\Targets\Ground_ca.paa";
		iconUnknownGroundRemote = "A3\Ui_f\data\IGUI\RscCustomInfo\Sensors\Targets\GroundRemote_ca.paa";
		iconUnknownMan = "A3\Ui_f\data\IGUI\RscCustomInfo\Sensors\Targets\UnknownMan_ca.paa";
		iconUnknownManRemote = "A3\Ui_f\data\IGUI\RscCustomInfo\Sensors\Targets\UnknownManRemote_ca.paa";
		colorFriendly[] = {0,1,0,1};
		iconFriendlyAir = "A3\Ui_f\data\IGUI\RscCustomInfo\Sensors\Targets\Air_ca.paa";
		iconFriendlyAirRemote = "A3\Ui_f\data\IGUI\RscCustomInfo\Sensors\Targets\AirRemote_ca.paa";
		iconFriendlyGround = "A3\Ui_f\data\IGUI\RscCustomInfo\Sensors\Targets\Ground_ca.paa";
		iconFriendlyGroundRemote = "A3\Ui_f\data\IGUI\RscCustomInfo\Sensors\Targets\GroundRemote_ca.paa";
		iconFriendlyMan = "A3\Ui_f\data\IGUI\RscCustomInfo\Sensors\Targets\FriendlyMan_ca.paa";
		iconFriendlyManRemote = "A3\Ui_f\data\IGUI\RscCustomInfo\Sensors\Targets\FriendlyManRemote_ca.paa";
		colorEnemy[] = {1,0,0,1};
		iconEnemyAir = "A3\Ui_f\data\IGUI\RscCustomInfo\Sensors\Targets\Air_ca.paa";
		iconEnemyAirRemote = "A3\Ui_f\data\IGUI\RscCustomInfo\Sensors\Targets\AirRemote_ca.paa";
		iconEnemyGround = "A3\Ui_f\data\IGUI\RscCustomInfo\Sensors\Targets\Ground_ca.paa";
		iconEnemyGroundRemote = "A3\Ui_f\data\IGUI\RscCustomInfo\Sensors\Targets\GroundRemote_ca.paa";
		iconEnemyMan = "A3\Ui_f\data\IGUI\RscCustomInfo\Sensors\Targets\EnemyMan_ca.paa";
		iconEnemyManRemote = "A3\Ui_f\data\IGUI\RscCustomInfo\Sensors\Targets\EnemyManRemote_ca.paa";
	};
	class threats
	{
		colorMarking[] = {1,1,0,1};
		colorLocking[] = {1,0.5,0,1};
		colorMissile[] = {1,0,0,1};
		iconmissile = "A3\Ui_f\data\IGUI\RscCustomInfo\Sensors\Threats\missile_ca.paa";
		iconlocking = "A3\Ui_f\data\IGUI\RscCustomInfo\Sensors\Threats\locking_ca.paa";
		iconmarking = "A3\Ui_f\data\IGUI\RscCustomInfo\Sensors\Threats\marking_ca.paa";
		iconsector = "A3\Ui_f\data\IGUI\RscCustomInfo\Sensors\Threats\sector_ca.paa";
	};
};