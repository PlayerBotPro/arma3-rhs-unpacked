
	class rhs_gui_optic_TKN4S_rangefinder: RscUnitInfo
	{
		idd = 300;

		onLoad="['onLoad',_this,'RscUnitInfo','IGUI'] call (uinamespace getvariable 'BIS_fnc_initDisplay'); _this call RHS_fnc_sight_TKN4s";

		controls[] = {"CA_IGUI_elements_group","CA_Zeroing"};
		class CA_Zeroing: RscText
		{
			idc=168;
			colorText[]=
			{
				"(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])",
				"(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])",
				"(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])",
				"(profilenamespace getvariable ['IGUI_TEXT_RGB_A',0.8])"
			};
			x="3.8 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(profilenamespace getvariable [""IGUI_GRID_WEAPON_X"",		((safezoneX + safezoneW) - 		(10 * 			(			((safezoneW / safezoneH) min 1.2) / 40)) - 4.3 * 			(			((safezoneW / safezoneH) min 1.2) / 40))])";
			y="2.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(profilenamespace getvariable [""IGUI_GRID_WEAPON_Y"",		(safezoneY + 0.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))])";
			w="3 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			h="1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			sizeEx="0.8 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
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
				class CA_Distance: RscOpticsValue
				{
					idc = 151;
					style = 1;
					shadow = 0;
					colorText[] = {1,0,0,1.0};
					font="rhs_digital_font";
					sizeEx = "0.039*SafezoneH";
					x =18.05 *   (0.01875 * Safezoneh);
					y =29.6 *   (0.025 * SafezoneH);
					//w="12.9 *   (0.01875 * SafezoneH)";
					//h="12.9 *   (0.025 * SafezoneH)";
					w="0";
					h="0";
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
					w="0";
					h="0";
					//w="4.5 * 		(0.01875 * SafezoneH)";
					//h="1.1 * 		(0.025 * SafezoneH)";
				};
				class CA_OpticsMode: CA_OpticsZoom
				{
					idc = 154;
				};
				class RHS_Sight: RscPicture
				{
					idc=1;
					//type=99;
					style="0x30 + 0x800";
					sizeEx="0.038*SafezoneH";
					colorText[]={0.70599997,0.074500002,0.0196,1};
					shadow=0;
					font="rhs_digital_font";
					text="rhsafrf\addons\rhs_optics\vehicles\data\rhs_tkn4s_moving.paa";
					x =11.16 *   (0.01875 * Safezoneh);
					y =2.95 *   (0.025 * SafezoneH);
					w="31 *   (0.01875 * SafezoneH)";
					h="31 *   (0.025 * SafezoneH)";
				};
				class RHS_ReadyLight: RscPicture
				{
					idc=2;
					style="0x30 + 0x800";
					sizeEx="0.038*SafezoneH";
					colorText[]={1,1,1,1};
					shadow=0;
					font="EtelkaMonospacePro";
					text="rhsafrf\addons\rhs_optics\vehicles\data\rhs_1g46_readylight_ca.paa";
					x =20.85 *   (0.01875 * SafezoneH);
					y =35.20 *   (0.025 * SafezoneH);
					w="1.55 *   (0.01875 * SafezoneH)";
					h="1.55 *   (0.025 * SafezoneH)";
				};

				class RHS_Ammo: CA_Distance
				{
					idc = 3;
					//style = 0;
					//shadow = 0;
					text="$";
					x =23.55 *   (0.01875 * Safezoneh);
					y =35.3 *   (0.025 * SafezoneH);
					w="1.5 *   (0.01875 * SafezoneH)";
					h="1.5 *   (0.025 * SafezoneH)";
				};
				class RHS_Distance: CA_Distance
				{
					idc = 4;
					text="$$$$";
					w="12.9 *   (0.01875 * SafezoneH)";
					h="12.9 *   (0.025 * SafezoneH)";
				};
				class RHS_NightSight: RHS_Sight
				{
					idc=5;
					colorText[]={0.5,1,1,0};
					text="rhsafrf\addons\rhs_optics\vehicles\data\rhs_1g42n_b_static.paa";
					x =12.08 *   (0.01875 * Safezoneh);
					y =5.55 *   (0.025 * SafezoneH);
					w="29 *   (0.01875 * SafezoneH)";
					h="29 *   (0.025 * SafezoneH)";
				};
				class RHS_NightSight_Moving: RHS_NightSight
				{
					idc=6;
					text="rhsafrf\addons\rhs_optics\vehicles\data\rhs_1g42n_moving.paa";
				};

			};
		};
	};


