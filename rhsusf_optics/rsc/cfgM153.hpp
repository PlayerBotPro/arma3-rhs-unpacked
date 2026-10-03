	class RHS_RscM153_CROWS: RscUnitInfo
	{
		idd = 300;
		onLoad="['onLoad',_this,'RscUnitInfo','IGUI'] call (uinamespace getvariable 'BIS_fnc_initDisplay'); _this call rhsusf_fnc_crows_m153_loader";
		controls[] = {"CA_Zeroing", "CA_IGUI_elements_group"};
		class CA_IGUI_elements_group: RscControlsGroup //inherits 13 parameters from bin\config.bin/RscControlsGroup, sources - ["A3_Ui_F"]
		{
			idc = 170;
			class VScrollbar: VScrollbar //inherits 3 parameters from bin\config.bin/RscControlsGroup/VScrollbar, sources - ["A3_Ui_F"]
			{
				width = 0;
			};
			class HScrollbar: HScrollbar //inherits 2 parameters from bin\config.bin/RscControlsGroup/HScrollbar, sources - ["A3_Ui_F"]
			{
				height = 0;
			};
			x = "0 * 		(0.01875 * SafezoneH) + 		(SafezoneX + ((SafezoneW - SafezoneH) / 2))";
			y = "0 * 		(0.025 * SafezoneH) + 		(SafezoneY)";
			w = "53.5 * 		(0.01875 * SafezoneH)";
			h = "40 * 		(0.025 * SafezoneH)";
			class controls //sources - ["A3_Ui_F"]
			{
				// Just to trigger draw handler
				class DrawMap: RscMapControl
				{
					idc = 6001;
					type = 101;
					x = 0; y = 0; w = 0; h = 0;
				};
				class CA_TurretIndicator : RscPicture {
					IDC = 206;
					type = 105;
					textSize = "0.02*SafezoneH";
					style = 0;
					color[] = {0.706, 0.0745, 0.0196, 1};
					x = "4.45 * 		(0.01875 * SafezoneH)";
					y = "31.36 * 		(0.025 * SafezoneH)";
					w = "6 * 		(0.01875 * SafezoneH)";
					h = "6 * 		(0.025 * SafezoneH)";
					imageHull = "#(argb,8,8,3)color(0,0,0,0.0)";
					imageTurret = "rhsusf\addons\rhsusf_optics\data\tex\turretIndicatorCROWS.paa";
					imageObsTurret = "#(argb,8,8,3)color(0,0,0,0.0)";
					imageGun = "#(rgb,8,8,3)color(0,0,0,0)";
				};
				class CA_Distance: RscText //inherits 22 parameters from bin\config.bin/RscText, sources - ["A3_Ui_F"]
				{
					idc = 198;
					style = 0;
					sizeEx = "0.04*SafezoneH";
					colorText[] = {0.706, 0.0745, 0.0196, 1};
					shadow = 0;
					font = "EtelkaMonospacePro";
					text = "2456";
					x = "7.5 * 		(0.01875 * SafezoneH)";
					y = "21.1 * 		(0.025 * SafezoneH)";
					w = "4.5 * 		(0.01875 * SafezoneH)";
					h = "1.1 * 		(0.025 * SafezoneH)";
				};
				class TextOpticsDistance: RscText //inherits 22 parameters from bin\config.bin/RscText, sources - ["A3_Ui_F"]
				{
					style = 0;
					sizeEx = "0.04*SafezoneH";
					colorText[] = {0.706, 0.0745, 0.0196, 1};
					shadow = 0;
					font = "EtelkaMonospacePro";
					idc = 1003;
					text = "LRF";
					x = "4 * 		(0.01875 * SafezoneH)";
					y = "21.1 * 		(0.025 * SafezoneH)";
					w = "5.5 * 		(0.01875 * SafezoneH)";
					h = "1.1 * 		(0.025 * SafezoneH)";
				};
				class CA_Zeroing: RscText
				{
					idc = 1000;
					style = 0;
					colorText[] = {0.706, 0.0745, 0.0196, 1};
					sizeEx = "0.04*SafezoneH";
					shadow = 0;
					font = "EtelkaMonospacePro";
					text = "4.5";
					x = "12 * 		(0.01875 * SafezoneH)";
					y = "27.9 * 		(0.025 * SafezoneH)";
					w = "8 * 		(0.01875 * SafezoneH)";
					h = "1.1 * 		(0.025 * SafezoneH)";
				};
				class TextOpticsZero: RscText //inherits 22 parameters from bin\config.bin/RscText, sources - ["A3_Ui_F"]
				{
					style = 0;
					sizeEx = "0.04*SafezoneH";
					colorText[] = {0.706, 0.0745, 0.0196, 1};
					shadow = 0;
					font = "EtelkaMonospacePro";
					idc = 1008;
					text = "Ballistic";
					x = "4 * 		(0.01875 * SafezoneH)";
					y = "27.9 * 		(0.025 * SafezoneH)";
					w = "8 * 		(0.01875 * SafezoneH)";
					h = "1.1 * 		(0.025 * SafezoneH)";
				};
				class CA_OpticsZoom: RscText //inherits 22 parameters from bin\config.bin/RscText, sources - ["A3_Ui_F"]
				{
					idc = 154;
					style = 0;
					colorText[] = {0.706, 0.0745, 0.0196, 1};
					sizeEx = "0.04*SafezoneH";
					shadow = 0;
					font = "EtelkaMonospacePro";
					text = "4.5";
					x = "7.5 * 		(0.01875 * SafezoneH)";
					y = "29 * 		(0.025 * SafezoneH)";
					w = "5 * 		(0.01875 * SafezoneH)";
					h = "1.1 * 		(0.025 * SafezoneH)";
				};
				class TextOpticsZoom: RscText //inherits 22 parameters from bin\config.bin/RscText, sources - ["A3_Ui_F"]
				{
					style = 0;
					sizeEx = "0.04*SafezoneH";
					colorText[] = {0.706, 0.0745, 0.0196, 1};
					shadow = 0;
					font = "EtelkaMonospacePro";
					idc = 1008;
					text = "FOV";
					x = "4 * 		(0.01875 * SafezoneH)";
					y = "29 * 		(0.025 * SafezoneH)";
					w = "5.5 * 		(0.01875 * SafezoneH)";
					h = "1.1 * 		(0.025 * SafezoneH)";
				};
				class CA_OpticsPitch: RscText //inherits 22 parameters from bin\config.bin/RscText, sources - ["A3_Ui_F"]
				{
					idc = 182;
					style = 0;
					sizeEx = "0.04*SafezoneH";
					colorText[] = {0.706, 0.0745, 0.0196, 1};
					shadow = 0;
					font = "EtelkaMonospacePro";
					text = "36";
					x = "7.5 * 		(0.01875 * SafezoneH)";
					y = "30.1 * 		(0.025 * SafezoneH)";
					w = "5.2 * 		(0.01875 * SafezoneH)";
					h = "1.1 * 		(0.025 * SafezoneH)";
				};
				class TextOpticsPitch: RscText //inherits 22 parameters from bin\config.bin/RscText, sources - ["A3_Ui_F"]
				{
					style = 0;
					sizeEx = "0.04*SafezoneH";
					colorText[] = {0.706, 0.0745, 0.0196, 1};
					shadow = 0;
					font = "EtelkaMonospacePro";
					idc = 1008;
					text = "Elev";
					x = "4 * 		(0.01875 * SafezoneH)";
					y = "30.1 * 		(0.025 * SafezoneH)";
					w = "5.5 * 		(0.01875 * SafezoneH)";
					h = "1.1 * 		(0.025 * SafezoneH)";
				};
			};
		};
	};
	class RHS_RscM153_CROWS_Abrams: RHS_RscM153_CROWS
	{
		class CA_IGUI_elements_group: CA_IGUI_elements_group
		{
			class controls: controls
			{
				class DrawMap: DrawMap{};
				class CA_TurretIndicator : RscPicture
				{
					IDC = 206;
					type = 105;
					textSize = "0.02*SafezoneH";
					style = 0;
					color[] = {0.706, 0.0745, 0.0196, 1};
					x = "4.45 * 		(0.01875 * SafezoneH)";
					y = "31.36 * 		(0.025 * SafezoneH)";
					w = "6 * 		(0.01875 * SafezoneH)";
					h = "6 * 		(0.025 * SafezoneH)";
					imageHull = "#(argb,8,8,3)color(0,0,0,0.0)";
					imageObsTurret = "rhsusf\addons\rhsusf_optics\data\tex\turretIndicatorCROWS.paa";
					imageTurret = "#(argb,8,8,3)color(0,0,0,0.0)";
					imageGun = "#(rgb,8,8,3)color(0,0,0,0)";
				};
				class CA_Distance: CA_Distance{};
				class TextOpticsDistance: TextOpticsDistance{};
				class CA_Zeroing: CA_Zeroing{};
				class TextOpticsZero: TextOpticsZero{};
				class CA_OpticsZoom: CA_OpticsZoom{};
				class TextOpticsZoom: TextOpticsZoom{};
				class CA_OpticsPitch: CA_OpticsPitch{};
				class TextOpticsPitch: TextOpticsPitch{};
			};
		};
	};