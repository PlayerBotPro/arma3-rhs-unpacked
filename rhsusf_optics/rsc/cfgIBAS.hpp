class RHS_RscIBAS: RscUnitInfo
{
	idd = 300;
	onLoad="['onLoad',_this,'RscUnitInfo','IGUI'] call (uinamespace getvariable 'BIS_fnc_initDisplay'); _this spawn RHSUSF_fnc_IBAS_handler";
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
			class CA_Distance: RscText
			{
				idc = 198;
				style = 0;
				sizeEx = "0.02*SafezoneH";
				colorText[] = {1,1,1,1};
				shadow = 0;
				font = "rhsusf_digital_font_var";
				text = "2456";
				x = "27* 		(0.01875 * SafezoneH)";
				y = "33.5 * 		(0.025 * SafezoneH)";
				w = "2.5 * 		(0.01875 * SafezoneH)";
				h = "1 * 		(0.025 * SafezoneH)";
			};
			
			class FireSolutionValid: RscPicture
			{
				idc = 200;
				text = "rhsusf\addons\rhsusf_optics\data\tex\rhs_ibas_lase_bar.paa";
				textSize = "0.02*SafezoneH";
				x = "27.15 * 		(0.01875 * SafezoneH)";
				y = "32.8 * 		(0.025 * SafezoneH)";
				w = "1.5 * 		(0.01875 * SafezoneH)";
				h = "1.5 * 		(0.025 * SafezoneH)";	
			};
			
			class CA_TurretIndicator : RscPicture {
				IDC = 206;
				type = 105;
				textSize = "0.02*SafezoneH";
				style = 0;
				color[] = {1,1,1,1};
				x = "33.1 * 		(0.01875 * SafezoneH)";
				y = "29 * 		(0.025 * SafezoneH)";
				w = "6 * 		(0.01875 * SafezoneH)";
				h = "6 * 		(0.025 * SafezoneH)";
				imageHull = "rhsusf\addons\rhsusf_optics\data\tex\turretindicatorhull_bradley.paa";
				imageTurret = "A3\Ui_f\data\IGUI\RscIngameUI\RscOptics\turretIndicatorTurret_RWS.paa";
				imageObsTurret = "A3\Ui_f\data\IGUI\RscIngameUI\RscOptics\turretIndicatorObsTurret_RWS.paa";
				imageGun = "#(rgb,8,8,3)color(0,0,0,0)";
			};
			class TextSightType: RscText
			{
				idc = 1008;
				style = 0;
				sizeEx = "0.02*SafezoneH";
				colorText[] = {1,1,1,1};
				shadow = 0;
				font = "rhsusf_digital_font_var";
				text = "IBAS";
				x = "7* 		(0.01875 * SafezoneH)";
				y = "36.5 * 		(0.025 * SafezoneH)";
				w = "2.5 * 		(0.01875 * SafezoneH)";
				h = "1 * 		(0.025 * SafezoneH)";
			};
			class TextRefreshRate: RscText
			{
				idc = 154;
				style = 0;
				sizeEx = "0.02*SafezoneH";
				colorText[] = {1,1,1,1};
				shadow = 0;
				font = "rhsusf_digital_font_var";
				text = "60HZ";
				x = "47* 		(0.01875 * SafezoneH)";
				y = "2.5 * 		(0.025 * SafezoneH)";
				w = "3 * 		(0.01875 * SafezoneH)";
				h = "1 * 		(0.025 * SafezoneH)";
			};
			class TextSightMode: RscText
			{
				idc = 3;
				style = 0;
				sizeEx = "0.02*SafezoneH";
				colorText[] = {1,1,1,1};
				shadow = 0;
				font = "rhsusf_digital_font_var";
				text = "TV";
				x = "8.75* 		(0.01875 * SafezoneH)";
				y = "36.5 * 		(0.025 * SafezoneH)";
				w = "1.25 * 		(0.01875 * SafezoneH)";
				h = "1 * 		(0.025 * SafezoneH)";
			};
			class TextWeapon: RscText
			{
				idc = 4;
				style = 160;
				sizeEx = "0.02*SafezoneH";
				colorText[] = {1,1,1,1};
				shadow = 0;
				font = "rhsusf_digital_font_var";
				text = "HE";
				x = "23* 		(0.01875 * SafezoneH)";
				y = "33.5 * 		(0.025 * SafezoneH)";
				w = "2 * 		(0.01875 * SafezoneH)";
				h = "1 * 		(0.025 * SafezoneH)";
			};
			class TextLowAmmo: RscText
			{
				idc = 5;
				style = 0;
				sizeEx = "0.02*SafezoneH";
				colorText[] = {1,1,1,1};
				shadow = 0;
				font = "rhsusf_digital_font_var";
				text = "";
				x = "30* 		(0.01875 * SafezoneH)";
				y = "36.5 * 		(0.025 * SafezoneH)";
				w = "4 * 		(0.01875 * SafezoneH)";
				h = "1 * 		(0.025 * SafezoneH)";
			};
		};
	};
};

class RHS_RscCIV: RscUnitInfo
{
	idd = 300;
	onLoad="['onLoad',_this,'RscUnitInfo','IGUI'] call (uinamespace getvariable 'BIS_fnc_initDisplay'); _this spawn RHSUSF_fnc_IBAS_CIV_handler";
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
			class CA_Distance: RscText
			{
				idc = 198;
				style = 0;
				sizeEx = "0.02*SafezoneH";
				colorText[] = {1,1,1,1};
				shadow = 0;
				font = "rhsusf_digital_font_var";
				text = "2456";
				x = "26.5* 		(0.01875 * SafezoneH)";
				y = "35.5 * 		(0.025 * SafezoneH)";
				w = "2.5 * 		(0.01875 * SafezoneH)";
				h = "1 * 		(0.025 * SafezoneH)";
			};
			
			class CA_TurretIndicator : RscPicture {
				IDC = 206;
				type = 105;
				textSize = "0.02*SafezoneH";
				style = 0;
				color[] = {1,1,1,1};
				x = "33.1 * 		(0.01875 * SafezoneH)";
				y = "31 * 		(0.025 * SafezoneH)";
				w = "6 * 		(0.01875 * SafezoneH)";
				h = "6 * 		(0.025 * SafezoneH)";
				imageHull = "rhsusf\addons\rhsusf_optics\data\tex\turretindicatorhull_bradley.paa";
				imageTurret = "A3\Ui_f\data\IGUI\RscIngameUI\RscOptics\turretIndicatorTurret_RWS.paa";
				imageObsTurret = "A3\Ui_f\data\IGUI\RscIngameUI\RscOptics\turretIndicatorObsTurret_RWS.paa";
				imageGun = "#(rgb,8,8,3)color(0,0,0,0)";
			};
			
			class TextSightType: RscText
			{
				idc = 1008;
				style = 0;
				sizeEx = "0.02*SafezoneH";
				colorText[] = {1,1,1,1};
				shadow = 0;
				font = "rhsusf_digital_font_var";
				text = "CIV";
				x = "7* 		(0.01875 * SafezoneH)";
				y = "36.5 * 		(0.025 * SafezoneH)";
				w = "2.5 * 		(0.01875 * SafezoneH)";
				h = "1 * 		(0.025 * SafezoneH)";
			};
			class TextSightType2: RscText
			{
				idc = 1008;
				style = 0;
				sizeEx = "0.02*SafezoneH";
				colorText[] = {1,1,1,1};
				shadow = 0;
				font = "rhsusf_digital_font_var";
				text = "CIV";
				x = "26* 		(0.01875 * SafezoneH)";
				y = "33 * 		(0.025 * SafezoneH)";
				w = "2 * 		(0.01875 * SafezoneH)";
				h = "1 * 		(0.025 * SafezoneH)";
			};
			class TextRefreshRate: RscText
			{
				idc = 154;
				style = 0;
				sizeEx = "0.02*SafezoneH";
				colorText[] = {1,1,1,1};
				shadow = 0;
				font = "rhsusf_digital_font_var";
				text = "60HZ";
				x = "47* 		(0.01875 * SafezoneH)";
				y = "2.5 * 		(0.025 * SafezoneH)";
				w = "3 * 		(0.01875 * SafezoneH)";
				h = "1 * 		(0.025 * SafezoneH)";
			};
			class TextSightMode: RscText
			{
				idc = 3;
				style = 0;
				sizeEx = "0.02*SafezoneH";
				colorText[] = {1,1,1,1};
				shadow = 0;
				font = "rhsusf_digital_font_var";
				text = "TV";
				x = "8.75* 		(0.01875 * SafezoneH)";
				y = "36.5 * 		(0.025 * SafezoneH)";
				w = "1.25 * 		(0.01875 * SafezoneH)";
				h = "1 * 		(0.025 * SafezoneH)";
			};
			class TextWeapon: RscText
			{
				idc = 4;
				style = 160;
				sizeEx = "0.02*SafezoneH";
				colorText[] = {1,1,1,1};
				shadow = 0;
				font = "rhsusf_digital_font_var";
				text = "HE";
				x = "23.75* 		(0.01875 * SafezoneH)";
				y = "35.5 * 		(0.025 * SafezoneH)";
				w = "2 * 		(0.01875 * SafezoneH)";
				h = "1 * 		(0.025 * SafezoneH)";
			};
			class TextLowAmmo: RscText
			{
				idc = 5;
				style = 0;
				sizeEx = "0.02*SafezoneH";
				colorText[] = {1,1,1,1};
				shadow = 0;
				font = "rhsusf_digital_font_var";
				text = "";
				x = "30* 		(0.01875 * SafezoneH)";
				y = "36.5 * 		(0.025 * SafezoneH)";
				w = "4 * 		(0.01875 * SafezoneH)";
				h = "1 * 		(0.025 * SafezoneH)";
			};
		};
	};
};