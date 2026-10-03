
	class rhs_gui_optic_2p130: RscUnitInfo
	{
		idd = 300;

		onLoad="['onLoad',_this,'RscUnitInfo','IGUI'] call (uinamespace getvariable 'BIS_fnc_initDisplay');_this call rhs_fnc_sight_prp3_mortar";

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
			w="53.5 * 		(0.01875 * SafezoneH)";
			h="40 * 		(0.025 * SafezoneH)";
			class controls
			{
				class CA_Heading: RscText
				{
					idc = 1;
					style = 0;
					colorText[] = {0.706,0.0745,0.0196,1};
					sizeEx = "0.032*SafezoneH";
					shadow = 0;
					font="PuristaBold";
					//font = "EtelkaMonospacePro";
					text = "015";
					x = "48.35 * 		(0.01875 * SafezoneH)";
					y = "5 * 		(0.025 * SafezoneH)";
					w = "4 * 		(0.01875 * SafezoneH)";
					h = "4 * 		(0.025 * SafezoneH)";
				};
				class CA_Elev: RscText
				{
					idc = 175;
					style = 1;
					sizeEx = "0.032*SafezoneH";
					colorText[] = {0.706,0.0745,0.0196,1};
					shadow = 0;
					font="PuristaBold";
					text = "-48.15";
					x = "48.15 * 		(0.01875 * SafezoneH)";
					y = "3.4 * 		(0.025 * SafezoneH)";
					w = "4 * 		(0.01875 * SafezoneH)";
					h = "4 * 		(0.025 * SafezoneH)";
				};
			};
		};
	};