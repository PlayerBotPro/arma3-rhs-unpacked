class RHS_Rsc_ISU: RscUnitInfo
{
	idd = 300;
	onLoad="['onLoad',_this,'RscUnitInfo','IGUI'] call (uinamespace getvariable 'BIS_fnc_initDisplay'); _this spawn RHSUSF_fnc_ISU_handler";
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
			class CA_Distance: RscOpticsText
			{
				idc = 6;
				style = 2;
				sizeEx = "0.075*SafezoneH";
				colorText[] = {1, 0.15, 0.15, 0.65};
				shadow = 0;
				font = "rhsusf_digital_font";
				text = "00";
				x = "25 *   		(0.01875 * SafezoneH)";
				y = "35 *   		(0.025 * SafezoneH)";
				w = "3.5 * 		(0.01875 * SafezoneH)";
				h = "2 * 		(0.025 * SafezoneH)";
			};
			class CA_OpticsMode: RscText
			{
				idc = 154;
				w = "0 * 		(0.01875 * SafezoneH)";
				h = "0 * 		(0.025 * SafezoneH)";
			};
			
			//Weapon/Ammo indicators
			class Indicator_HE: RscPicture {
				idc = 1;
				style = "0x30 + 0x800";
				sizeEx = "0.028*SafezoneH";
				colorText[] = {1, 0.15, 0.15, 0.65};
				shadow = 0;
				font = "EtelkaMonospacePro";
				text = "\rhsusf\addons\rhsusf_optics\data\tex\ISU\HE_co.paa";
				x = "19.25 * 			(0.01875 * SafezoneH)";
				y = "35 * 		(0.025 * SafezoneH)";
				w = "2 * 		(0.01875 * SafezoneH)";
				h = "2 * 		(0.025 * SafezoneH)";
			};
			class Indicator_TOW: RscPicture {
				idc = 2;
				style = "0x30 + 0x800";
				sizeEx = "0.028*SafezoneH";
				colorText[] = {0.2941,0.2941,0.2941,0.65};
				shadow = 0;
				font = "EtelkaMonospacePro";
				text = "\rhsusf\addons\rhsusf_optics\data\tex\ISU\TOW_co.paa";
				x = "21.25 * 			(0.01875 * SafezoneH)";
				y = "35 * 		(0.025 * SafezoneH)";
				w = "2 * 		(0.01875 * SafezoneH)";
				h = "2 * 		(0.025 * SafezoneH)";
			};
			class Indecator_762: RscPicture {
				idc = 3;
				style = "0x30 + 0x800";
				sizeEx = "0.028*SafezoneH";
				colorText[] = {0.2941,0.2941,0.2941,0.65};
				shadow = 0;
				font = "EtelkaMonospacePro";
				text = "\rhsusf\addons\rhsusf_optics\data\tex\ISU\762_co.paa";
				x = "30.25 * 		(0.01875 * SafezoneH)";
				y = "35 * 		(0.025 * SafezoneH)";
				w = "2 * 		(0.01875 * SafezoneH)";
				h = "2 * 		(0.025 * SafezoneH)";
			};
			class Indicator_AP: RscPicture {
				idc = 4;
				style = "0x30 + 0x800";
				sizeEx = "0.028*SafezoneH";
				colorText[] = {0.2941,0.2941,0.2941,0.65};
				shadow = 0;
				font = "EtelkaMonospacePro";
				text = "\rhsusf\addons\rhsusf_optics\data\tex\ISU\AP_co.paa";
				x = "32.25 * 		(0.01875 * SafezoneH)";
				y = "35 * 		(0.025 * SafezoneH)";
				w = "2 * 		(0.01875 * SafezoneH)";
				h = "2 * 		(0.025 * SafezoneH)";
			};
			
			//Gun reticle
			class Reticle: RscPicture {
				idc = 5;
				style = "0x30 + 0x800";
				sizeEx = "0.028*SafezoneH";
				colorText[] = {1, 0.15, 0.15, 0.65};
				shadow = 0;
				font = "EtelkaMonospacePro";
				text = "a3\weapons_f\reticle\data\optics_gunner_mtb_01_ca.paa";
				x = "14.65 * 		(0.01875 * SafezoneH)";
				y = "8 * 		(0.025 * SafezoneH)";
				w = "24 * 		(0.01875 * SafezoneH)";
				h = "24 * 		(0.025 * SafezoneH)";
			};
		};
	};
};