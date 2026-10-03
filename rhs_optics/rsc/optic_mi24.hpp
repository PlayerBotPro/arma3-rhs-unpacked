
	class RHS_RscWeaponMi24_FCS: RscUnitInfo
	{
		idd=300;
		onLoad="['onLoad',_this,'RscUnitInfo','IGUI'] call (uinamespace getvariable 'BIS_fnc_initDisplay'); _this call RHS_fnc_sight_9S475";
		controls[]=
		{
			"CA_IGUI_elements_group",
			"CA_OpticsZoom"
		};
		class CA_OpticsZoom: RscText
		{
			//idc=180;
			idc = 154;
			style=1;
			colorText[]={0.70599997,0.074500002,0.0196,1};
			sizeEx="0.038*SafezoneH";
			shadow=0;
			font="EtelkaMonospacePro";
			text="";
			x="43.85 * 		(0.01875 * SafezoneH)";
			y="19.6 * 		(0.025 * SafezoneH)";
			w="0* 		(0.01875 * SafezoneH)";
			h="0 * 		(0.025 * SafezoneH)";
			//w="4.5 * 		(0.01875 * SafezoneH)";
			//h="1.1 * 		(0.025 * SafezoneH)";
		};
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
				class rhs_arr_vert: RscPicture
				{
					idc			= 1;
					text		= "rhsafrf\addons\rhs_a2port_air\Mi35\Data\rhs_mi24_missile_line_ca.paa";
					colorText[]	= {1,1,1,0};
					x			= 8.89 *   (0.01875 * Safezoneh);
					y			= 2.39 * (0.025 * SafezoneH);
					w			= 35.18 *   (0.01875 * SafezoneH);
					h			= 35.18 *   (0.025 * SafezoneH);
				};
				/*
				// Just to trigger draw handler
				class DrawMap: RscMapControl
				{
					idc = 6001;
					type = 101;
					x = 0; y = 0; w = 0; h = 0;
				};*/
				// (uiNamespace getVariable "RHS_9s475_Ctrl" displayCtrl 1) ctrlSetPosition [8.89 *   (0.01875 * Safezoneh),2.39 *   (0.025 * SafezoneH),35.18 *   (0.01875 * SafezoneH),35.18 *   (0.025 * SafezoneH)];(uiNamespace getVariable "RHS_9s475_Ctrl"    displayCtrl 1) ctrlCommit 1;
				// (uiNamespace getVariable "RHS_9s475_Ctrl" displayCtrl 1) ctrlSetAngle [60,0.5,0.5]   ;(uiNamespace getVariable "RHS_9s475_Ctrl"    displayCtrl 1) ctrlCommit 1;
			};
		};
	};