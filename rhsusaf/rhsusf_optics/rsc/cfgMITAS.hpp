class RHS_RscMITAS: RscUnitInfo
{
	idd = 300;
	onLoad="['onLoad',_this,'RscUnitInfo','IGUI'] call (uinamespace getvariable 'BIS_fnc_initDisplay'); _this spawn RHSUSF_fnc_MITAS_handler";
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
			//--- Hidden controls ---//
			//To get BH or WH FLIR mode
			class CA_FOVMode: RscText
			{
				idc=154;
				style=2;
				colorText[]={1,1,1,0};
				shadow=0;
				font="EtelkaMonospacePro";
				x=0;
				y="(SafezoneY+SafezoneH) - 0.195";
				w=0;
				h=0;
			};
			//To get range
			class CA_Elev: RscText
			{
				idc=151;
				style=2;
				colorText[]={1,1,1,0};
				shadow=0;
				font="EtelkaMonospacePro";
				text="";
				x=0;
				y="(SafezoneY+SafezoneH) - 0.195";
				w=0;
				h=0;
			};
			
			//Needed to circumvent odd bug that breaks the rendering of the border of first defined multiline text box...
			class TempText: RscText
			{
				idc = -1;
				style = 16;
				sizeEx = "0.02*SafezoneH";
				colorText[] = {1,0,1,0};
				colorBackground[] = {0,0,1,0};
				shadow = 0;
				font = "rhsusf_digital_font_var";
				text = "";
				x=0;
				y="(SafezoneY+SafezoneH) - 0.195";
				w=0;
				h=0;
			};
			
			//--- Top left: Mode box ---//
			class ModeText: RscText
			{
				idc = 1000;
				style = 16;
				sizeEx = "0.02*SafezoneH";
				colorText[] = {0,1,0,0.65};
				colorBackground[] = {0,0,0,0};
				shadow = 0;
				font = "rhsusf_digital_font_var";
				text = "MANUAL\nENGAGE";
				x = "12 * 		(0.01875 * SafezoneH)";
				y = "3 * 		(0.025 * SafezoneH)";
				w = "3.5 * 		(0.01875 * SafezoneH)";
				h = "2.5 * 		(0.025 * SafezoneH)";
			};
			class ModeBox: RscText
			{
				idc = 1001;
				style = 160;
				sizeEx = "0.02*SafezoneH";
				colorText[] = {0,1,0,0.65};
				shadow = 0;
				font = "rhsusf_digital_font_var";
				text = "";
				x = "12 * 		(0.01875 * SafezoneH)";
				y = "3 * 		(0.025 * SafezoneH)";
				w = "3.5 * 		(0.01875 * SafezoneH)";
				h = "2.5 * 		(0.025 * SafezoneH)";
			};
			
			//--- Top right: State box ---//
			class StateText: RscText
			{
				idc = 1002;
				style = 16;
				sizeEx = "0.02*SafezoneH";
				colorText[] = {0,1,0,0.65};
				colorBackground[] = {0,0,0,0};
				shadow = 0;
				font = "rhsusf_digital_font_var";
				text = "DAY\nWFOV\nFIRST";
				x = "38 * 		(0.01875 * SafezoneH)";
				y = "3 * 		(0.025 * SafezoneH)";
				w = "3 * 		(0.01875 * SafezoneH)";
				h = "3.5 * 		(0.025 * SafezoneH)";
			};
			class StateBox: RscText
			{
				idc = 1003;
				style = 160;
				sizeEx = "0.02*SafezoneH";
				colorText[] = {0,1,0,0.65};
				shadow = 0;
				font = "rhsusf_digital_font_var";
				text = "";
				x = "38 * 		(0.01875 * SafezoneH)";
				y = "3 * 		(0.025 * SafezoneH)";
				w = "3 * 		(0.01875 * SafezoneH)";
				h = "3.5 * 		(0.025 * SafezoneH)";
			};
			class ZoomText: RscText
			{
				idc = 1004;
				style = 0;
				sizeEx = "0.02*SafezoneH";
				colorText[] = {0,1,0,0.65};
				colorBackground[] = {0,0,0,0};
				shadow = 0;
				font = "rhsusf_digital_font_var";
				text = "";
				x = "38 * 		(0.01875 * SafezoneH)";
				y = "6.5 * 		(0.025 * SafezoneH)";
				w = "1.2 * 		(0.01875 * SafezoneH)";
				h = "0.8 * 		(0.025 * SafezoneH)";
			};
			//--- Middle: Range ---//
			//Range
			class RangeText: RscText
			{
				idc = 1005;
				style = 0;
				sizeEx = "0.02*SafezoneH";
				colorText[] = {0,1,0,0.65};
				shadow = 0;
				font = "rhsusf_digital_font_var";
				text = "";
				x = "27 * 		(0.01875 * SafezoneH)";
				y = "30 * 		(0.025 * SafezoneH)";
				w = "2 * 		(0.01875 * SafezoneH)";
				h = "0.8 * 		(0.025 * SafezoneH)";
			};
			
			//--- Missile type icon ---///
			class MissileIcon: RscPicture
			{
				idc = 1006;
				style = "0x30 + 0x800";
				sizeEx = "0.028*SafezoneH";
				colorText[] = {0,1,0,0.65};
				shadow = 0;
				font = "rhsusf_digital_font_var";
				text = "";
				x = "12 * 		(0.01875 * SafezoneH)";
				y = "34 * 		(0.025 * SafezoneH)";
				w = "4 * 		(0.01875 * SafezoneH)";
				h = "4 * 		(0.025 * SafezoneH)";
			};
			class MissileText: RscText
			{
				idc = 1007;
				style = 0;
				sizeEx = "0.02*SafezoneH";
				colorText[] = {0,1,0,0.65};
				shadow = 0;
				font = "rhsusf_digital_font_var";
				text = "";
				x = "12.5 * 		(0.01875 * SafezoneH)";
				y = "35.7 * 		(0.025 * SafezoneH)";
				w = "2.6 * 		(0.01875 * SafezoneH)";
				h = "0.7 * 		(0.025 * SafezoneH)";
			};
		};
	};
};