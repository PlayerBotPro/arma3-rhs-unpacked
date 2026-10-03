
	class RHS_RscWeaponBMP2_TKN3_FCS: RscUnitInfo
	{
		idd=300;
		onLoad="['onLoad',_this,'RscUnitInfo','IGUI'] call (uinamespace getvariable 'BIS_fnc_initDisplay');_this call RHS_fnc_sight_BMP2_TKN3";
		controls[]=
		{
			"CA_IGUI_elements_group"
		};
		class CA_IGUI_elements_group: RscControlsGroup
		{
			idc=170;
			class VScrollbar: VScrollbar
			{
				width=0;
			};
			class HScrollbar: HScrollbar
			{
				height=0;
			};
			x="0 * 		(0.01875 * SafezoneH) + 		(SafezoneX + ((SafezoneW - SafezoneH) / 2))";
			y="0 * 		(0.025 * SafezoneH) + 		(SafezoneY)";
			w="53.5 * 		(0.01875 * SafezoneH)";
			h="40 * 		(0.025 * SafezoneH)";
			class controls
			{
				class Sight: RscPicture
				{
					idc			= 1;
					style		= "0x30 + 0x800";
					sizeEx		= "0.038*SafezoneH";
					colorText[]	= {0.7,0.07,0.0196,1};
					shadow		= 0;
					font		= "EtelkaMonospacePro";
					text		= "rhsafrf\addons\rhs_optics\vehicles\data\rhs_1pz3_1x_ca.paa";
					x			= 11.0 *   (0.01875 * Safezoneh);
					y			= 4.7 *   (0.025 * SafezoneH);
					w			= "31.5 *   (0.01875 * SafezoneH)";
					h			= "31.5 *   (0.025 * SafezoneH)";
				};
				class SightBar: RscPicture
				{
					idc			= 2;
					style		= "0x30 + 0x800";
					sizeEx		= "0.038*SafezoneH";
					colorText[]	= {0.70599997,0.074500002,0.0196,1};
					shadow		= 0;
					font		= "EtelkaMonospacePro";
					text		= "rhsafrf\addons\rhs_optics\vehicles\data\rhs_1pz3_horizontal.paa";
					x			= 8.3 *   (0.01875 * SafezoneH);
					y			= 2.1 *   (0.025 * SafezoneH);
					w			= "35.5 *   (0.01875 * SafezoneH)";
					h			= "35.5 *   (0.025 * SafezoneH)";
				};
				class CA_OpticsZoom: RscText
				{
					idc			= 154;
					style		= 1;
					colorText[]	= {0.70599997,0.074500002,0.0196,1};
					sizeEx		= "0.038*SafezoneH";
					shadow		= 0;
					font		= "EtelkaMonospacePro";
					w			= "0";
					h			= "0";
					//w="4.5 * 		(0.01875 * SafezoneH)";
					//h="1.1 * 		(0.025 * SafezoneH)";
				};
				class RHS_ControlNumber: CA_OpticsZoom
				{
					idc = 1000;
					text="RHS_TKN3";
				};
			};
		};
	};