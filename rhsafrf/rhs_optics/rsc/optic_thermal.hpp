

	class rhs_gui_optic_thermalscreen: RscUnitInfo
	{
		idd = 300;
		//onLoad="['onLoad',_this,'RscUnitInfo','IGUI'] call (uinamespace getvariable 'BIS_fnc_initDisplay'); uiNameSpace setVariable [""RHS_sight_Ctrl"",_this select 0];";

		controls[] = {"CA_IGUI_elements_group"};
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
				color[] = {1,1,1,0};
				width = 0.001;
			};
			class HScrollbar
			{
				color[] = {1,1,1,0};
				height = 0.001;
			};
			class Controls
			{
  //(uiNamespace getVariable "RHS_sight_Ctrl" displayCtrl 2) ctrlSetPosition [23.99 *   (0.01875 *    Safezoneh),31.0*   (0.025 *    SafezoneH),5.9 *   (0.01875 * SafezoneH),1.9 *   (0.025 * SafezoneH)];(uiNamespace    getVariable "RHS_sight_Ctrl" displayCtrl    2) ctrlCommit 0
				class CA_DistanceBackground: RscEdit
				{
					idc = -1;
					sizeEx = 0.034;
					colorBackground[] = {0,0,0,1};
					colorText[] = {1,1,1,1.0};
					colorSelection[] = {0,0,0,1};
					style = 2;
					shadow = 0;
					type = 0;
					x = "23.99 *   (0.01875 *    Safezoneh)";
					y = "31.0*   (0.025 *    SafezoneH)";
					w = "5.9 *   (0.01875 * SafezoneH)";
					h = "1.9 *   (0.025 * SafezoneH)";
				};
				class CA_Distance: RscOpticsValue
				{
					idc = 151;
					style = 1;
					shadow = 0;
					colorText[] = {1,1,1,1.0};
					sizeEx = "0.038*SafezoneH";
					x = "15.49 *   (0.01875 *    Safezoneh)";
					y = "29.0*   (0.025 *    SafezoneH)";
					w = "14.9 *   (0.01875 * SafezoneH)";
					h = "5.9 *   (0.025 * SafezoneH)";
				};

			};
		};

	};
