
	class rhs_gui_optic_mortar: RscUnitInfo
	{
		idd = 300;

		onLoad="['onLoad',_this,'RscUnitInfo','IGUI'] call (uinamespace getvariable 'BIS_fnc_initDisplay');";

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

			x = "((safezoneX + safezoneW) - (16.4 * (((safezoneW / safezoneH) min 1.2) / 40)) - 0.5 * (((safezoneW /safezoneH) min 1.2) / 40))";
			y = "0 *   (0.025 * SafezoneH) +   (SafezoneY)";
			w = "17 * (((safezoneW / safezoneH) min 1.2) / 40)";
			h = "17 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			class controls
			{/*
				class CA_Heading: RscText
				{
					idc = 156;
					style = 0;
					colorText[] = {0.706,0.0745,0.0196,1};
					sizeEx = "0.032*SafezoneH";
					shadow = 0;
					font="PuristaBold";
					//font = "EtelkaMonospacePro";
					text = "015";
					x = "-2 * 		(0.01875 * SafezoneH)";
					y = "-2.4 * 		(0.025 * SafezoneH)";
					w = "13 * 		(0.01875 * SafezoneH)";
					h = "13 * 		(0.025 * SafezoneH)";
				};*/
				class CA_Elev: RscText
				{
					idc = 175;
					style = 1;
					sizeEx = "0.032*SafezoneH";
					colorText[] = {0.706,0.0745,0.0196,1};
					shadow = 0;
					font="PuristaBold";
					text = "-80.5";
					x = "-2 * 		(0.01875 * SafezoneH)";
					y = "-0.4 * 		(0.025 * SafezoneH)";
					w = "13 * 		(0.01875 * SafezoneH)";
					h = "13 * 		(0.025 * SafezoneH)";
				};
			};
		};
	};