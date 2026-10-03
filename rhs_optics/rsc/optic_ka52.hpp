
	class RHS_RscWeaponKa52_FCS: RscUnitInfo
	{
		idd=300;
		onLoad="['onLoad',_this,'RscUnitInfo','IGUI'] call (uinamespace getvariable 'BIS_fnc_initDisplay'); _this call RHS_fnc_sight_Samshin";
		controls[]=
		{
			"CA_IGUI_elements_group",
			"CA_Distance",
			"CA_OpticsZoom"
		};
		class CA_OpticsZoom: RscText
		{
			idc = 154;
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
		class CA_Distance: RscOpticsValue
		{
			idc=198;
			style=2;
			colorText[]={0.48,0.77,0.46,1};
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
					sizeEx="0.044*SafezoneH";
					x = "14.2 * 		(0.01875 * SafezoneH)";
					y = "-3.52 * 		(0.025 * SafezoneH)";
					w = "20 * 		(0.01875 * SafezoneH)";
					h = "20 * 		(0.025 * SafezoneH)";
				};
				class rhs_speed: RscText
				{
					idc = 188;
					style = 0x01;
					text = "228";
					colorText[]={0.48,0.77,0.46,1};
					colorBackground[] = {0,0,0,0};
					sizeEx="0.044*SafezoneH";
					font = "rhs_digital_font_var";
					x = "11.8 * 		(0.01875 * SafezoneH)";
					y = "4.44 * 		(0.025 * SafezoneH)";
					w = "10 * 		(0.01875 * SafezoneH)";
					h = "4 * 		(0.025 * SafezoneH)";
				};
				class rhs_arr_turret: RscPicture
				{
					idc = 2;
					text = "rhsafrf\addons\rhs_optics\vehicles\data\rhs_ka52_samshin_turret.paa";
					x =2.74 *   (0.01875 * Safezoneh);
					y =26.79 * (0.025 * SafezoneH);
					w="10 *   (0.01875 * SafezoneH)";
					h="10 *   (0.025 * SafezoneH)";
				};
				class rhs_arr_horizont: RscPicture
				{
					idc = 3;
					text = "rhsafrf\addons\rhs_optics\vehicles\data\rhs_green.paa";
					x =27.1 *   (0.01875 * Safezoneh);
					y =3.24 * (0.025 * SafezoneH);
					w="12.18 *   (0.01875 * SafezoneH)";
					h="0.6 *   (0.025 * SafezoneH)";
				};
				class rhs_tex_horizont : RscText
				{
					idc = 4;
					text = "110";
					style = "0x02";
					font = "rhs_digital_font_var";
					colorText[]={0.48,0.77,0.46,1};
					colorBackground[] = {0,0,0,0};
					sizeEx="0.044*SafezoneH";
					x =21.94 *   (0.01875 * Safezoneh);
					y =1.19 * (0.025 * SafezoneH);
					w="10 *   (0.01875 * SafezoneH)";
					h="10 *   (0.025 * SafezoneH)";
				};
				class rhs_arr_elevation: rhs_arr_horizont
				{
					idc = 5;
					x =50.7 *   (0.01875 * Safezoneh);
					y =16.04 * (0.025 * SafezoneH);
					w="0.6 *   (0.01875 * SafezoneH)";
					h="2 *   (0.025 * SafezoneH)";
				};
				class rhs_tex_elevation: rhs_tex_horizont
				{
					idc = 10;
					//idc = 182;
					text = "-27";
					style = 0;
					//style = "0x02";
					sizeEx="0.024*SafezoneH";
					font = "rhs_digital_font_var";
					x =47.18 *   (0.01875 * Safezoneh);
					y =11.19 * (0.025 * SafezoneH);
					w="10 *   (0.01875 * SafezoneH)";
					h="10 *   (0.025 * SafezoneH)";
				};
				class rhs_ind_tg: rhs_arr_horizont
				{
					idc = 6;
					text = "rhsafrf\addons\rhs_optics\vehicles\data\rhs_ka52_samshin_text_tg.paa";
					x =16.84 *   (0.01875 * Safezoneh);
					y =14.79 * (0.025 * SafezoneH);
					w="3 *   (0.01875 * SafezoneH)";
					h="3 *   (0.025 * SafezoneH)";
				};
				class rhs_ind_ta: rhs_ind_tg
				{
					idc = 7;
					text = "rhsafrf\addons\rhs_optics\vehicles\data\rhs_ka52_samshin_text_ta.paa";
					x =33.34 *   (0.01875 * Safezoneh);
				};
				class rhs_cross: rhs_arr_elevation
				{
					idc = 8;
					text = "rhsafrf\addons\rhs_a2port_air\Ka52\Data\rhs_ka52_samshin_cross.paa";
					x =23.09 *   (0.01875 * Safezoneh);
					y =16.39 * (0.025 * SafezoneH);
					w="7.18 *   (0.01875 * SafezoneH)";
					h="7.18 *   (0.025 * SafezoneH)";
				};
				// (uiNamespace getVariable "RHS_Samshin_Ctrl" displayCtrl 1) ctrlSetPosition [8.89 *   (0.01875 * Safezoneh),2.39 *   (0.025 * SafezoneH),35.18 *   (0.01875 * SafezoneH),35.18 *   (0.025 * SafezoneH)];(uiNamespace getVariable "RHS_Samshin_Ctrl"    displayCtrl 1) ctrlCommit 1;
				// (uiNamespace getVariable "RHS_Samshin_Ctrl" displayCtrl 1) ctrlSetAngle [60,0.5,0.5]   ;(uiNamespace getVariable "RHS_Samshin_Ctrl"    displayCtrl 1) ctrlCommit 1;
			};
		};
	};