class RHS_RscLRAS3: RscUnitInfo
{
	idd = 300;
	onLoad="['onLoad',_this,'RscUnitInfo','IGUI'] call (uinamespace getvariable 'BIS_fnc_initDisplay'); _this spawn RHSUSF_fnc_LRAS3_handler";
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
				x = 0; y = 0; w = 0; h = 0;
			};
			//--- Hidden controls ---//
			//To get BH or WH FLIR mode
			class CA_FlirMode: RscText
			{
				idc=153;
				style=2;
				colorText[]={1,1,1,0};
				shadow=0;
				font="EtelkaMonospacePro";
				x=0;
				y="(SafezoneY+SafezoneH) - 0.195";
				w=0;
				h=0;
			};
			//To get integer format for elevation degrees
			class CA_OpticsPitch: RscText
			{
				idc=175;
				style=2;
				colorText[]={1,1,1,0};
				shadow=0;
				font="EtelkaMonospacePro";
				text="36";
				x=0;
				y="(SafezoneY+SafezoneH) - 0.195";
				w=0;
				h=0;
			};
			//To get self grid pos
			/* class CA_Grid: RscText
			{
				idc=171;
				style=2;
				colorText[]={1,1,1,0};
				shadow=0;
				font="EtelkaMonospacePro";
				text="";
				x=0;
				y="(SafezoneY+SafezoneH) - 0.195";
				w=0;
				h=0;
			}; */
			//To get target grid pos
			class CA_TargetGrid: RscText
			{
				idc=172;
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
			
			//--- Top right: Optics state indicators ---//
			//FLIR Mode
			class TextFlirMode: RscText
			{
				idc = 1000;
				style = 0;
				sizeEx = "0.02*SafezoneH";
				colorText[] = {0,1,0,0.65};
				shadow = 0;
				font = "rhsusf_digital_font_var";
				text = "FLIR - WH";
				x = "46* 		(0.01875 * SafezoneH)";
				y = "2.5 * 		(0.025 * SafezoneH)";
				w = "3.5 * 		(0.01875 * SafezoneH)";
				h = "1 * 		(0.025 * SafezoneH)";
			};
			//CLEAR ???
			class TextClear: RscText
			{
				idc = -1;
				style = 0;
				sizeEx = "0.02*SafezoneH";
				colorText[] = {0,1,0,0.65};
				shadow = 0;
				font = "rhsusf_digital_font_var";
				text = "CLEAR";
				x = "46* 		(0.01875 * SafezoneH)";
				y = "3.2 * 		(0.025 * SafezoneH)";
				w = "2.5 * 		(0.01875 * SafezoneH)";
				h = "1 * 		(0.025 * SafezoneH)";
			};
			//STARE ???
			class TextStare: RscText
			{
				idc = -1;
				style = 0;
				sizeEx = "0.02*SafezoneH";
				colorText[] = {0,1,0,0.65};
				shadow = 0;
				font = "rhsusf_digital_font_var";
				text = "STARE";
				x = "46* 		(0.01875 * SafezoneH)";
				y = "3.9 * 		(0.025 * SafezoneH)";
				w = "2.5 * 		(0.01875 * SafezoneH)";
				h = "1 * 		(0.025 * SafezoneH)";
			};
			//Laser Return Mode
			class TextLaserReturnMode: RscText
			{
				idc = -1;
				style = 0;
				sizeEx = "0.02*SafezoneH";
				colorText[] = {0,1,0,0.65};
				shadow = 0;
				font = "rhsusf_digital_font_var";
				text = "FIRST";
				x = "46* 		(0.01875 * SafezoneH)";
				y = "4.6 * 		(0.025 * SafezoneH)";
				w = "2.5 * 		(0.01875 * SafezoneH)";
				h = "1 * 		(0.025 * SafezoneH)";
			};
			
			//--- Bottom: Target and self position info ---//
			//Time
			class TextTime: RscText
			{
				idc = -1;
				style = 0;
				sizeEx = "0.02*SafezoneH";
				colorText[] = {0,1,0,0.65};
				shadow = 0;
				font = "rhsusf_digital_font_var";
				text = "TIME";
				x = "7* 		(0.01875 * SafezoneH)";
				y = "33.5 * 		(0.025 * SafezoneH)";
				w = "2.5 * 		(0.01875 * SafezoneH)";
				h = "1 * 		(0.025 * SafezoneH)";
			};
			class TextCurrentTime: RscText
			{
				idc = 1001;
				style = 0;
				sizeEx = "0.02*SafezoneH";
				colorText[] = {0,1,0,0.65};
				shadow = 0;
				font = "rhsusf_digital_font_var";
				text = "HH:MM";
				x = "9* 		(0.01875 * SafezoneH)";
				y = "33.5 * 		(0.025 * SafezoneH)";
				w = "3.5 * 		(0.01875 * SafezoneH)";
				h = "1 * 		(0.025 * SafezoneH)";
			};
			//Sight MGRS Pos
			class TextSight: RscText
			{
				idc = -1;
				style = 0;
				sizeEx = "0.02*SafezoneH";
				colorText[] = {0,1,0,0.65};
				shadow = 0;
				font = "rhsusf_digital_font_var";
				text = "SIGHT";
				x = "7* 		(0.01875 * SafezoneH)";
				y = "35 * 		(0.025 * SafezoneH)";
				w = "3.5 * 		(0.01875 * SafezoneH)";
				h = "1 * 		(0.025 * SafezoneH)";
			};
			class TextSightPos: RscText
			{
				idc = 1002;
				style = 0;
				sizeEx = "0.02*SafezoneH";
				colorText[] = {0,1,0,0.65};
				shadow = 0;
				font = "rhsusf_digital_font_var";
				text = "";
				x = "9.5* 		(0.01875 * SafezoneH)";
				y = "35 * 		(0.025 * SafezoneH)";
				w = "7 * 		(0.01875 * SafezoneH)";
				h = "1 * 		(0.025 * SafezoneH)";
			};
			//Range
			class TextRange: RscText
			{
				idc = -1;
				style = 0;
				sizeEx = "0.02*SafezoneH";
				colorText[] = {0,1,0,0.65};
				shadow = 0;
				font = "rhsusf_digital_font_var";
				text = "RANGE";
				x = "23* 		(0.01875 * SafezoneH)";
				y = "33.5 * 		(0.025 * SafezoneH)";
				w = "7 * 		(0.01875 * SafezoneH)";
				h = "1 * 		(0.025 * SafezoneH)";
			};
			class TextRangeVal: RscText
			{
				idc = 1003;
				style = 0;
				sizeEx = "0.02*SafezoneH";
				colorText[] = {0,1,0,0.65};
				shadow = 0;
				font = "rhsusf_digital_font_var";
				text = "";
				x = "27* 		(0.01875 * SafezoneH)";
				y = "33.5 * 		(0.025 * SafezoneH)";
				w = "7 * 		(0.01875 * SafezoneH)";
				h = "1 * 		(0.025 * SafezoneH)";
			};
			//Target MGRS Pos
			class TextTgt: RscText
			{
				idc = -1;
				style = 0;
				sizeEx = "0.02*SafezoneH";
				colorText[] = {0,1,0,0.65};
				shadow = 0;
				font = "rhsusf_digital_font_var";
				text = "TGT";
				x = "22* 		(0.01875 * SafezoneH)";
				y = "35 * 		(0.025 * SafezoneH)";
				w = "3.5 * 		(0.01875 * SafezoneH)";
				h = "1 * 		(0.025 * SafezoneH)";
			};
			class TextTgtPos: RscText
			{
				idc = 1004;
				style = 0;
				sizeEx = "0.02*SafezoneH";
				colorText[] = {0,1,0,0.65};
				shadow = 0;
				font = "rhsusf_digital_font_var";
				text = "";
				x = "24.5* 		(0.01875 * SafezoneH)";
				y = "35 * 		(0.025 * SafezoneH)";
				w = "7 * 		(0.01875 * SafezoneH)";
				h = "1 * 		(0.025 * SafezoneH)";
			};
			//Azimuth
			class TextAzimuth: RscText
			{
				idc = -1;
				style = 0;
				sizeEx = "0.02*SafezoneH";
				colorText[] = {0,1,0,0.65};
				shadow = 0;
				font = "rhsusf_digital_font_var";
				text = "AZ";
				x = "38* 		(0.01875 * SafezoneH)";
				y = "35 * 		(0.025 * SafezoneH)";
				w = "3.5 * 		(0.01875 * SafezoneH)";
				h = "1 * 		(0.025 * SafezoneH)";
			};
			class TextAzimuthVal: RscText
			{
				idc = 156;
				style = 0;
				sizeEx = "0.02*SafezoneH";
				colorText[] = {0,1,0,0.65};
				shadow = 0;
				font = "rhsusf_digital_font_var";
				text = "360";
				x = "39.5* 		(0.01875 * SafezoneH)";
				y = "35 * 		(0.025 * SafezoneH)";
				w = "7 * 		(0.01875 * SafezoneH)";
				h = "1 * 		(0.025 * SafezoneH)";
			};
			//Elevation
			class TextElevation: RscText
			{
				idc = -1;
				style = 0;
				sizeEx = "0.02*SafezoneH";
				colorText[] = {0,1,0,0.65};
				shadow = 0;
				font = "rhsusf_digital_font_var";
				text = "EL";
				x = "42.5* 		(0.01875 * SafezoneH)";
				y = "35 * 		(0.025 * SafezoneH)";
				w = "3.5 * 		(0.01875 * SafezoneH)";
				h = "1 * 		(0.025 * SafezoneH)";
			};
			class TextElevationVal: RscText
			{
				idc = 1006;
				style = 0;
				sizeEx = "0.02*SafezoneH";
				colorText[] = {0,1,0,0.65};
				shadow = 0;
				font = "rhsusf_digital_font_var";
				text = "69";
				x = "44.5* 		(0.01875 * SafezoneH)";
				y = "35 * 		(0.025 * SafezoneH)";
				w = "7 * 		(0.01875 * SafezoneH)";
				h = "1 * 		(0.025 * SafezoneH)";
			};
		};
	};
	class Objects
	{
	  	class MainSight
	  	{
			idc			= 901;
			type		= 82;
			model		= "\rhsusf\addons\rhsusf_optics\data\rhsusf_LRAS3_cross.p3d";
			direction[]	= {0, 0, -1};
			up[]		= {0, 1, 0};

			x			= "20.0 * (((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y			= "14.1 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + (safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
			z			= 0.01;
			scale		= 0.15 * (SafeZoneW Min SafeZoneH);

			xBack		= 0; yBack = 0;zBack		= 0;inBack		= 0;enableZoom	= 0; zoomDuration = 0;
			class AnimationSources
			{

				class LRAS3_Scale
				{
					source		= "user";
					animPeriod	= 0.000001;
					initPhase	= 10;
				};
			};
		};
	};
};