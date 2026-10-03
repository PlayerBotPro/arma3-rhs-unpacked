class RHS_RscCWSS: RscUnitInfo
{
	idd = 300;
	onLoad="['onLoad',_this,'RscUnitInfo','IGUI'] call (uinamespace getvariable 'BIS_fnc_initDisplay'); _this spawn RHSUSF_fnc_CWSS_handler";
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
		w = "53.5 * 		(0.01875 * SafezoneH)";
		h = "40 * 		(0.025 * SafezoneH)";
		class controls
		{
			class CA_OpticsMode: RscText
			{
				idc = 154;
				w = "0 * 		(0.01875 * SafezoneH)";
				h = "0 * 		(0.025 * SafezoneH)";
			};
			
			//Gun reticle
			class Reticle: RscPicture {
				idc = 1;
				style = "0x30 + 0x800";
				sizeEx = "0.028*SafezoneH";
				colorText[] = {1,1,1,0.65};
				shadow = 0;
				font = "EtelkaMonospacePro";
				text = "rhsusf\addons\rhsusf_optics\data\tex\CWSS\comoptics_m1a1_ca.paa";
				x = "14.65 * 		(0.01875 * SafezoneH)";
				y = "8 * 		(0.025 * SafezoneH)";
				w = "24 * 		(0.01875 * SafezoneH)";
				h = "24 * 		(0.025 * SafezoneH)";
			};
			//Pos
			class TextPos: RscText
			{
				idc = 3;
				style = 0;
				sizeEx = "0.02*SafezoneH";
				colorText[] = {0,0,0,0};
				shadow = 0;
				font = "rhsusf_digital_font_var";
				text = "POS";
				x = "10* 		(0.01875 * SafezoneH)";
				y = "28 * 		(0.025 * SafezoneH)";
				w = "2.5 * 		(0.01875 * SafezoneH)";
				h = "1 * 		(0.025 * SafezoneH)";
			};
			//Grid coord
			class TextGrid: RscText
			{
				idc = 4;
				style = 0;
				sizeEx = "0.02*SafezoneH";
				colorText[] = {0,0,0,0};
				shadow = 0;
				font = "rhsusf_digital_font_var";
				text = "-	-	-		-	-	-";
				x = "10* 		(0.01875 * SafezoneH)";
				y = "29 * 		(0.025 * SafezoneH)";
				w = "10 * 		(0.01875 * SafezoneH)";
				h = "1 * 		(0.025 * SafezoneH)";
			};
			//date
			class TextDate: RscText
			{
				idc = 5;
				style = 0;
				sizeEx = "0.02*SafezoneH";
				colorText[] = {0,0,0,0};
				shadow = 0;
				font = "rhsusf_digital_font_var";
				text = "04-07-76";
				x = "10* 		(0.01875 * SafezoneH)";
				y = "30 * 		(0.025 * SafezoneH)";
				w = "8 * 		(0.01875 * SafezoneH)";
				h = "1 * 		(0.025 * SafezoneH)";
			};
			//Cam mode
			class TextSightMode: RscText
			{
				idc = 2;
				style = 0;
				sizeEx = "0.02*SafezoneH";
				colorText[] = {0,0,0,0};
				shadow = 0;
				font = "rhsusf_digital_font_var";
				text = "DAY";
				x = "40* 		(0.01875 * SafezoneH)";
				y = "13 * 		(0.025 * SafezoneH)";
				w = "3 * 		(0.01875 * SafezoneH)";
				h = "1 * 		(0.025 * SafezoneH)";
			};
		};
	};
};