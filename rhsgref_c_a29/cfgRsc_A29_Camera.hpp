	class RHS_RscOptics_A29_FlirCamera: RscUnitInfo
	{
		idd = 300;
		onLoad="['onLoad',_this,'RscUnitInfo','IGUI'] call (uinamespace getvariable 'BIS_fnc_initDisplay'); _this call rhs_fnc_a29_flir_loader";
		controls[] = {"CA_Zeroing", "CA_IGUI_elements_group"};
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
			w = "53.5 * 	(0.01875 * SafezoneH)";
			h = "40 * 		(0.025 * SafezoneH)";
			#define COLOR_GREEN {0.0,0.77,0.0,1}
			#define COLOR_WHITE {1.0,1.0,1.0,1}
			#define COLOR_BLACK {0.0,0.0,0.0,1}
			#define COLOR_RED {0.48,0.77,0.46,1}

			class controls
			{
				// Just to trigger draw handler
				class DrawMap: RscMapControl
				{
					idc = 6001;
					type = 101;
					x = 0; y = 0; w = 0; h = 0;
				};
				class RHS_ControlNumber: RscText
				{
					idc = 1000;
					text="RHS_A29_FLIRCAM";
					x = 0; y = 0; w = 0; h = 0;
				};
				class CA_VisionMode: RscText
				{
					idc			= IDC_IGUI_WEAPON_VISION_MODE;
					style		= 1;
					colorText[]	= COLOR_BLACK;
					sizeEx		= "0.024*SafezoneH";
					shadow		= 0;
					font		= "rhsusf_txled";
					text		= "4.5";

					x	= "35.85 * 		(0.01875 * SafezoneH)";
					y	= "8.6 * 		(0.025 * SafezoneH)";
					w	= "5.5 * 		(0.01875 * SafezoneH)";
					h	= "1.1 * 		(0.025 * SafezoneH)";
				};
				class CA_OpticsZoom: RscText
				{
					idc			= 154;
					style		= 1;
					colorText[]	= COLOR_BLACK;
					sizeEx		= "0.024*SafezoneH";
					shadow		= 0;
					font		= "rhsusf_txled";
					text		= "4.5";

					x	= "35.85 * 		(0.01875 * SafezoneH)";
					y	= "9.9 * 		(0.025 * SafezoneH)";
					w	= "5.5 * 		(0.01875 * SafezoneH)";
					h	= "1.1 * 		(0.025 * SafezoneH)";
				};
				class CA_TurretIndicator : RscPicture {
					IDC				= 1;
					type			= 0;
					style			= 48;
					color[]			= COLOR_WHITE;
					x				= "29.3 * 		(0.01875 * SafezoneH)";
					y				= "32.42 * 		(0.025 * SafezoneH)";
					w				= "6 * 		(0.01875 * SafezoneH)";
					h				= "6 * 		(0.025 * SafezoneH)";
					text		= "rhsgref\addons\rhsgref_c_a29\data\rhs_a29_turretInd_ca.paa";
				};
				class CA_HorizontalCompass : RscPicture {
					IDC = 207;
					type = 105;
					font = "EtelkaMonospacePro";
					textSize = "0.02*SafezoneH";
					style = 1;
					color[] = COLOR_BLACK;
					x = "18.04 * 		(0.01875 * SafezoneH)";
					y = "8.0 * 		(0.025 * SafezoneH)";
					w = "17.18 * 		(0.01875 * SafezoneH)";
					h = "1 * 		(0.025 * SafezoneH)";
					imageHull = "A3\Ui_f\data\IGUI\RscIngameUI\RscOptics\horizontalCompassHull.paa";
					imageTurret = "#(argb,8,8,3)color(0,0,0,0.0)";
					imageObsTurret = "#(argb,8,8,3)color(0,0,0,0.0)";
					imageGun = "#(rgb,8,8,3)color(0,0,0,0)";
				};
				class CA_Distance: RscText //inherits 22 parameters from bin\config.bin/RscText, sources - ["A3_Ui_F"]
				{
					idc = 198;
					style = 0;
					sizeEx		= "0.024*SafezoneH";
					colorText[] = COLOR_GREEN;
					shadow = 0;
					font		= "rhsusf_txled";
					text = "2456";
					x = "19.5 * 		(0.01875 * SafezoneH)";
					y = "34.5 * 		(0.025 * SafezoneH)";
					w = "4.5 * 		(0.01875 * SafezoneH)";
					h = "1.1 * 		(0.025 * SafezoneH)";
				};
				class CA_Heading: RscText
				{
					idc = IDC_IGUI_WEAPON_HEADING;
					style		= 1;
					colorText[]	= COLOR_BLACK;
					sizeEx		= "0.018*SafezoneH";
					shadow		= 0;
					font		= "rhsusf_txled";
					text		= "4.5";

					x	= "23.99 * 		(0.01875 * SafezoneH)";
					y	= "9.0 * 		(0.025 * SafezoneH)";
					w	= "4.5 * 		(0.01875 * SafezoneH)";
					h	= "1.1 * 		(0.025 * SafezoneH)";
				};
				class Reticle: RscPicture
				{
					idc = 2;
					style = "0x30 + 0x800";
					sizeEx = "0.028*SafezoneH";
					colorText[] = COLOR_BLACK;
					shadow = 0;
					font = "EtelkaMonospacePro";
					text = "rhsgref\addons\rhsgref_c_a29\data\rhs_a29_cross.paa";
					x = "23.65 * 		(0.01875 * SafezoneH)";
					y = "17.1 * 		(0.025 * SafezoneH)";
					w = "6 * 		(0.01875 * SafezoneH)";
					h = "6 * 		(0.025 * SafezoneH)";
				};
				class CA_Laser: Reticle
				{
					idc = 158;
					text = "rhsgref\addons\rhsgref_c_a29\data\rhs_a29_laser.paa";
				};
				class CA_Heading_Static1: RscText
				{
					idc = -1;
					style		= 1;
					colorText[]	= COLOR_BLACK;
					sizeEx		= "0.018*SafezoneH";
					shadow		= 0;
					font		= "rhsusf_txled";
					text		= "LOS";

					x	= "21.99 * 		(0.01875 * SafezoneH)";
					y	= "9.0 * 		(0.025 * SafezoneH)";
					w	= "4.5 * 		(0.01875 * SafezoneH)";
					h	= "1.1 * 		(0.025 * SafezoneH)";
				};
				class CA_Heading_Static2: CA_Heading_Static1
				{
					text		= "T";
					x	= "24.8 * 		(0.01875 * SafezoneH)";
				};
				class rhs_arr_vert: RscPicture
				{
					idc = 5;
					text = "rhsusf\addons\rhsusf_optics\data\tex\arrow_vert.paa";
					x = "12.9 * 		(0.01875 * SafezoneH)";
					y = "14.65 * 		(0.025 * SafezoneH)";
					//29.6 - 120 stopni w dół
					w = "0.7 * 		(0.01875 * SafezoneH)";
					h = "1.1 * 		(0.025 * SafezoneH)";
				};
				class rhs_arr_horiz: rhs_arr_vert
				{
					idc = 6;
					text = "rhsusf\addons\rhsusf_optics\data\tex\arrow_hor.paa";
					//12.29 max left
					x = "26.1 * 		(0.01875 * SafezoneH)";
					y = "26.8 * 		(0.025 * SafezoneH)";
					w = "1.1 * 		(0.01875 * SafezoneH)";
					h = "0.7 * 		(0.025 * SafezoneH)";
				};
			};
		};
	};