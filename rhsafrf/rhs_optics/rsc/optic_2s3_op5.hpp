
	class rhs_gui_optic_2s3_op5_computer: RscUnitInfo
	{
		idd = 300;

		onLoad="['onLoad',_this,'RscUnitInfo','IGUI'] call (uinamespace getvariable 'BIS_fnc_initDisplay'); _this call RHS_fnc_fcs_2s3";

		controls[] = {"CA_IGUI_elements_group"};
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
			x="0 * 		(0.01875 * SafezoneH) + 		(SafezoneX + ((SafezoneW - SafezoneH) / 2))";
			y="0 * 		(0.025 * SafezoneH) + 		(SafezoneY)";
			w="73.5 * 		(0.01875 * SafezoneH)";
			h="40 * 		(0.025 * SafezoneH)";
			class controls
			{
				class RHS_ComputerBG: RscPicture
				{
					idc=1;
					style="0x30 + 0x800";
					sizeEx="0.038*SafezoneH";
					colorText[]={1,1,1,1};
					shadow=0;
					font="EtelkaMonospacePro";
					text="rhsafrf\addons\rhs_optics\vehicles\data\rhs_komputer2s3.paa";
					x = "(48) * 		(0.01875 * SafezoneH)";
					y =0;
					w="13 *   (0.01875 * SafezoneH)";
					h="13 *   (0.025 * SafezoneH)";
				};
				class CA_Distance: RscText
				{
					idc = 173;
					style = 1;
					sizeEx = "0.068*SafezoneH";
					colorText[] = {0.706,0.0745,0.0196,1};
					shadow = 0;
					font="rhs_digital_font";
					text="$$$$$";
					x = "(-6 + 48) * 		(0.01875 * SafezoneH)";
					y = "0.25 * 		(0.025 * SafezoneH)";
					w = "0 * 		(0.01875 * SafezoneH)";
					h = "0 * 		(0.025 * SafezoneH)";
				};
				class RHS_Distance: CA_Distance
				{
					idc = 2;
					text="$$$$";
					w = "13 * 		(0.01875 * SafezoneH)";
					h = "13 * 		(0.025 * SafezoneH)";
				};
				class CA_OpticsMode: CA_Distance
				{
					idc = 154;
				};
				class RHS_Horizontal: RscPicture
				{
					idc			= 4;
					style		= "0x30 + 0x800";
					sizeEx		= "0.038*SafezoneH";
					colorText[]	= {0.7,0.0,0.0,1};
					shadow		= 0;
					font		= "EtelkaMonospacePro";
					text		= "rhsafrf\addons\rhs_optics\vehicles\data\rhs_1pz3_horizontal.paa";
					x			= 3.75 *   (0.01875 * Safezoneh);
					y			= -10.15 *   (0.025 * SafezoneH);
					w			= "45.9 *   (0.01875 * SafezoneH)";
					h			= "45.9 *   (0.025 * SafezoneH)";
				};
				class RHS_Reticle: RHS_Horizontal
				{
					idc		= 5;
					text	= "rhsafrf\addons\rhs_optics\vehicles\data\rhs_op5_38_ca.paa";
					y			= -2.95 *   (0.025 * SafezoneH);
				};
				class CA_Elev: RscText
				{
					idc = 175;
					style = 1;
					sizeEx = "0.032*SafezoneH";
					colorText[] = {0.706,0.0745,0.0196,1};
					shadow = 0;
					font="rhs_digital_font";
					text = "-80.5";
					x = "(-2 + 48) * 		(0.01875 * SafezoneH)";
					y = "-0.4 * 		(0.025 * SafezoneH)";
					w = "13 * 		(0.01875 * SafezoneH)";
					h = "13 * 		(0.025 * SafezoneH)";
				};
				class CA_Elev_Need: RscText
				{
					idc = 176;
					style = 1;
					sizeEx = "0.032*SafezoneH";
					colorText[] = {0.706,0.0745,0.0196,1};
					shadow = 0;
					font="rhs_digital_font";
					text = "-35.4";
					x = "(-2 + 48) * 		(0.01875 * SafezoneH)";
					y = "0.95 * 		(0.025 * SafezoneH)";
					w = "0 * 		(0.01875 * SafezoneH)";
					h = "0 * 		(0.025 * SafezoneH)";
				};
				class RHS_Elev_Need: CA_Elev_Need
				{
					idc = 3;
					text="$$$$$";
					w = "13 * 		(0.01875 * SafezoneH)";
					h = "13 * 		(0.025 * SafezoneH)";
				};
			};
		};
	};