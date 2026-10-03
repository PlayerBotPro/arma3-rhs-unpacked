
	class rhs_gui_optic_1d13
	{
		idd = 300;
		//onLoad="['onLoad',_this,'RscUnitInfo','IGUI'] call (uinamespace getvariable 'BIS_fnc_initDisplay'); uiNameSpace setVariable [""RHS_sight_Ctrl"",_this select 0];";
		controls[] = {"CA_IGUI_elements_group","CA_Zeroing"};
		class CA_IGUI_elements_group: RscControlsGroup
		{
			x="0 * 		(0.01875 * SafezoneH) + 		(SafezoneX + ((SafezoneW - SafezoneH) / 2))";
			y="0 * 		(0.025 * SafezoneH) + 		(SafezoneY)";
			w="53.5 * 		(0.01875 * SafezoneH)";
			h="40 * 		(0.025 * SafezoneH)";
			idc = 170;
			class VScrollbar
			{
				autoScrollSpeed = -1;
				autoScrollDelay = 5;
				autoScrollRewind = 0;
				color[] = {1,0,0,0};
				width = 0.001;
			};
			class HScrollbar
			{
				color[] = {1,0,0,0};
				height = 0.001;
			};
			class Controls
			{
//  (uiNamespace getVariable "RHS_sight_Ctrl" displayCtrl 151) ctrlSetPosition [-0.89 *   (0.01875 *    Safezoneh),16.0*   (0.025 *    SafezoneH),14.9 *   (0.01875 * SafezoneH),5.9 *   (0.025 * SafezoneH)];(uiNamespace    getVariable "RHS_sight_Ctrl" displayCtrl    151) ctrlCommit 0
				class CA_Distance: RscOpticsValue
				{
					idc = 151;
					style = 1;
					shadow = 0;
					font="rhs_digital_font";
					colorText[] = {1,0,0,1};
					sizeEx="0.038*SafezoneH";
					x = "-0.89*   (0.01875 * Safezoneh)";
					y = "16*   (0.025 * SafezoneH)";
					w = "14.9 *   (0.01875 * SafezoneH)";
					h = "5.9*   (0.025 * SafezoneH)";
				};

			};
		};
		class CA_Zeroing: RscText
		{
			colorText[] = {"(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])","(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])","(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])","(profilenamespace getvariable ['IGUI_TEXT_RGB_A',0.8])"};
			idc = 168;
			style = 1;
			x = "(SafeZoneW + SafeZoneX) - (1 - 0.761)";
			y = "0.095 + SafeZoneY";
			w = 0.214;
			h = 0.039;
		};

	};