
	class RHS_RscWeaponMi28_FCS: RscUnitInfo
	{
		idd=300;
		onLoad="['onLoad',_this,'RscUnitInfo','IGUI'] call (uinamespace getvariable 'BIS_fnc_initDisplay'); _this call RHS_fnc_sight_Mi28_fcs";
		controls[]=
		{
			"CA_IGUI_elements_group",
			"CA_Distance",
			"CA_Mode",
			"CA_OpticsZoom"
		};
		class CA_OpticsZoom: RscText
		{
			idc=180;
			style=1;
			colorText[]={0.70599997,0.074500002,0.0196,1};
			sizeEx="0.038*SafezoneH";
			shadow=0;
			font="EtelkaMonospacePro";
			text="4.5";
			x="43.85 * 		(0.01875 * SafezoneH)";
			y="19.6 * 		(0.025 * SafezoneH)";
			w="0* 		(0.01875 * SafezoneH)";
			h="0 * 		(0.025 * SafezoneH)";
			//w="4.5 * 		(0.01875 * SafezoneH)";
			//h="1.1 * 		(0.025 * SafezoneH)";
		};
		class CA_Mode: CA_OpticsZoom
		{
			idc=154;
		};
		class CA_Distance: RscOpticsValue
		{
			idc=151;
			style=2;
			colorText[]={0,0.36,0.12,1};
			shadow=0;
			font="rhs_digital_font_var";
			x = "34.41 * 		(0.01875 * SafezoneH)";
			y = "35.6 * 		(0.025 * SafezoneH)";
			w="0* 		(0.01875 * SafezoneH)";
			h="0 * 		(0.025 * SafezoneH)";
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
				class rhs_Distance: CA_Distance
				{
					idc = 1;
					text = "";
					sizeEx="0.054*SafezoneH";
					x = "17.2 * 		(0.01875 * SafezoneH)";
					y = "24.02 * 		(0.025 * SafezoneH)";
					w = "20 * 		(0.01875 * SafezoneH)";
					h = "20 * 		(0.025 * SafezoneH)";
				};
				class rhs_timeToTarget: CA_Distance
				{
					idc = 601;
					text = "";
					sizeEx="0.012*SafezoneH";
					font="rhs_digital_font_var";
					x = "17.2 * 		(0.01875 * SafezoneH)";
					y = "22.52 * 		(0.025 * SafezoneH)";
					w = "20 * 		(0.01875 * SafezoneH)";
					h = "20 * 		(0.025 * SafezoneH)";
				};
				class rhs_height: CA_Distance
				{
					idc = 189;
					style = 0x01;
					text = "----";
					sizeEx="0.094*SafezoneH";
					x = "18.9 * 		(0.01875 * SafezoneH)";
					y = "0.422 * 		(0.025 * SafezoneH)";
					w = "20 * 		(0.01875 * SafezoneH)";
					h = "20 * 		(0.025 * SafezoneH)";
				};
				//(uiNamespace getVariable "RHS_mi28_fcs_Ctrl" displayCtrl 189) ctrlSetPosition [14.2 *   (0.01875 * Safezoneh),-3.52 *   (0.025 * SafezoneH),20 *   (0.01875 * SafezoneH),20 *   (0.025 * SafezoneH)];(uiNamespace getVariable "RHS_mi28_fcs_Ctrl"    displayCtrl 189) ctrlCommit 1;
				class rhs_speed: RscText
				{
					idc = 188;
					style = 0x01;
					text = "228";
					colorText[]={0,0.36,0.12,1};
					colorBackground[] = {0,0,0,0};
					sizeEx="0.094*SafezoneH";
					shadow=0;
					font = "rhs_digital_font_var";
					x = "-1.7 * 		(0.01875 * SafezoneH)";
					y = "0.422 * 		(0.025 * SafezoneH)";
					w = "20 * 		(0.01875 * SafezoneH)";
					h = "20 * 		(0.025 * SafezoneH)";
				};
				//(uiNamespace getVariable "RHS_mi28_fcs_Ctrl" displayCtrl 188) ctrlSetPosition [-1.7 *   (0.01875 * Safezoneh),0.422 *   (0.025 * SafezoneH),20 *   (0.01875 * SafezoneH),20 *   (0.025 * SafezoneH)];(uiNamespace getVariable "RHS_mi28_fcs_Ctrl"    displayCtrl 188) ctrlCommit 1;
				class rhs_arr_turret: RscPicture
				{
					idc = 3;
					text = "rhsafrf\addons\rhs_optics\vehicles\data\rhs_mi28_turret.paa";
					x =6.14 *   (0.01875 * Safezoneh);
					y =25.79 * (0.025 * SafezoneH);
					w="10 *   (0.01875 * SafezoneH)";
					h="10 *   (0.025 * SafezoneH)";
				};
				//(uiNamespace getVariable "RHS_mi28_fcs_Ctrl" displayCtrl 3) ctrlSetPosition [6.14 *   (0.01875 * Safezoneh),25.79 *   (0.025 * SafezoneH),10 *   (0.01875 * SafezoneH),10 *   (0.025 * SafezoneH)];(uiNamespace getVariable "RHS_mi28_fcs_Ctrl"    displayCtrl 3) ctrlCommit 1;

				class rhs_arr_horizont: RscPicture
				{
					idc = 4;
					text = "rhsafrf\addons\rhs_optics\vehicles\data\rhs_mi28_arr_horiz.paa";
					x =26.15 *   (0.01875 * Safezoneh);
					y =6.71 * (0.025 * SafezoneH);
					w="1.5 *   (0.01875 * SafezoneH)";
					h="1.5 *   (0.025 * SafezoneH)";
				};
				// -90 = 13.295
				// -110 = 10.295
				//(uiNamespace getVariable "RHS_mi28_fcs_Ctrl" displayCtrl 4) ctrlSetPosition [26.15 *   (0.01875 * Safezoneh),6.71 *   (0.025 * SafezoneH),1.5 *   (0.01875 * SafezoneH),1.5 *   (0.025 * SafezoneH)];(uiNamespace getVariable "RHS_mi28_fcs_Ctrl"    displayCtrl 4) ctrlCommit 1;

				class rhs_arr_elevation: rhs_arr_horizont
				{
					idc = 5;
					text = "rhsafrf\addons\rhs_optics\vehicles\data\rhs_mi28_arr_vert.paa";
					x =42.58 *   (0.01875 * Safezoneh);
					y =19.11 * (0.025 * SafezoneH);
					w="1.5 *   (0.01875 * SafezoneH)";
					h="1.5 *   (0.025 * SafezoneH)";
				};
				// -45 = 26.11
				// (uiNamespace getVariable "RHS_mi28_fcs_Ctrl" displayCtrl 5) ctrlSetPosition [42.58 *   (0.01875 * Safezoneh),19.11 *   (0.025 * SafezoneH),1.5 *   (0.01875 * SafezoneH),1.5 *   (0.025 * SafezoneH)];(uiNamespace getVariable "RHS_mi28_fcs_Ctrl"    displayCtrl 5) ctrlCommit 1;
				class rhs_ind_as: rhs_arr_horizont
				{
					idc = 6;
					text = "rhsafrf\addons\rhs_optics\vehicles\data\rhs_mi28_autotrack.paa";
					x =34.88 *   (0.01875 * Safezoneh);
					y =37.21 * (0.025 * SafezoneH);
					w="5.3 *   (0.01875 * SafezoneH)";
					h="2.6 *   (0.025 * SafezoneH)";
				};
				// (uiNamespace getVariable "RHS_mi28_fcs_Ctrl" displayCtrl 6) ctrlSetPosition [34.88 *   (0.01875 * Safezoneh),37.21 *   (0.025 * SafezoneH),5.3 *   (0.01875 * SafezoneH),2.6 *   (0.025 * SafezoneH)];(uiNamespace getVariable "RHS_mi28_fcs_Ctrl"    displayCtrl 6) ctrlCommit 1;

				class rhs_ind_ps: rhs_ind_as
				{
					idc = 7;
					text = "rhsafrf\addons\rhs_optics\vehicles\data\rhs_mi28_groundlock.paa";
					x =40.188 *   (0.01875 * Safezoneh);
				};
				// (uiNamespace getVariable "RHS_mi28_fcs_Ctrl" displayCtrl 7) ctrlSetPosition [40.188 *   (0.01875 * Safezoneh),37.21 *   (0.025 * SafezoneH),5.3 *   (0.01875 * SafezoneH),2.6 *   (0.025 * SafezoneH)];(uiNamespace getVariable "RHS_mi28_fcs_Ctrl"    displayCtrl 7) ctrlCommit 1;

				class rhs_ind_tvk: rhs_ind_as
				{
					idc = 8;
					text = "rhsafrf\addons\rhs_optics\vehicles\data\rhs_mi28_tvk.paa";
					x =1.688 *   (0.01875 * Safezoneh);
					y =6.01 * (0.025 * SafezoneH);
					w="2.8 *   (0.01875 * SafezoneH)";
					h="5.5 *   (0.025 * SafezoneH)";
				};
				// (uiNamespace getVariable "RHS_mi28_fcs_Ctrl" displayCtrl 8) ctrlSetPosition [1.688 *   (0.01875 * Safezoneh),6.01 *   (0.025 * SafezoneH),2.8 *   (0.01875 * SafezoneH),5.5 *   (0.025 * SafezoneH)];(uiNamespace getVariable "RHS_mi28_fcs_Ctrl"    displayCtrl 8) ctrlCommit 1;

				class rhs_ind_tpk: rhs_ind_tvk
				{
					idc = 9;
					text = "rhsafrf\addons\rhs_optics\vehicles\data\rhs_mi28_tpk.paa";
					y =11.51 * (0.025 * SafezoneH);
				};
				//  (uiNamespace getVariable "RHS_mi28_fcs_Ctrl" displayCtrl 9) ctrlSetPosition [1.688 *   (0.01875 * Safezoneh),11.51 *   (0.025 * SafezoneH),2.8 *   (0.01875 * SafezoneH),5.5 *   (0.025 * SafezoneH)];(uiNamespace getVariable "RHS_mi28_fcs_Ctrl"    displayCtrl 9) ctrlCommit 1;

				class rhs_ind_tsl: rhs_ind_tvk
				{
					idc = 10;
					text = "rhsafrf\addons\rhs_optics\vehicles\data\rhs_mi28_tsl.paa";
					y =17.01 * (0.025 * SafezoneH);
				};
				// (uiNamespace getVariable "RHS_mi28_fcs_Ctrl" displayCtrl 10) ctrlSetPosition [1.688 *   (0.01875 * Safezoneh),17.01 *   (0.025 * SafezoneH),2.8 *   (0.01875 * SafezoneH),5.5 *   (0.025 * SafezoneH)];(uiNamespace getVariable "RHS_mi28_fcs_Ctrl"    displayCtrl 10) ctrlCommit 1;

				class rhs_cross: rhs_arr_elevation
				{
					idc = 11;
					text = "rhsafrf\addons\rhs_optics\vehicles\data\rhs_mi28_cross.paa";
					x =23.09 *   (0.01875 * Safezoneh);
					y =16.39 * (0.025 * SafezoneH);
					w="7.18 *   (0.01875 * SafezoneH)";
					h="7.18 *   (0.025 * SafezoneH)";
				};
				// (uiNamespace getVariable "RHS_mi28_fcs_Ctrl" displayCtrl 1) ctrlSetPosition [8.89 *   (0.01875 * Safezoneh),2.39 *   (0.025 * SafezoneH),35.18 *   (0.01875 * SafezoneH),35.18 *   (0.025 * SafezoneH)];(uiNamespace getVariable "RHS_mi28_fcs_Ctrl"    displayCtrl 1) ctrlCommit 1;
				// (uiNamespace getVariable "RHS_mi28_fcs_Ctrl" displayCtrl 1) ctrlSetAngle [60,0.5,0.5]   ;(uiNamespace getVariable "RHS_mi28_fcs_Ctrl"    displayCtrl 1) ctrlCommit 1;
			};
		};
	};
	class RHS_RscWeaponMi28_Pilot_FCS: RHS_RscWeaponMi28_FCS
	{
		onLoad="['onLoad',_this,'RscUnitInfo','IGUI'] call (uinamespace getvariable 'BIS_fnc_initDisplay'); _this call RHS_fnc_sight_Mi28_fcs_pilot";
	};