
	class RHS_RscWeaponAgava_FCS: RscUnitInfo
	{
		idd=300;
		onLoad="['onLoad',_this,'RscUnitInfo','IGUI'] call (uinamespace getvariable 'BIS_fnc_initDisplay'); _this call RHS_fnc_sight_agava2";
		controls[]=
		{
			"CA_OpticsZoom",
			"CA_IGUI_elements_group"
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
					x =17.65 *   (0.01875 * Safezoneh);
					y =30.45 *   (0.025 * SafezoneH);
					//w="12.9 *   (0.01875 * SafezoneH)";
					//h="12.9 *   (0.025 * SafezoneH)";
					w="0";
					h="0";
				};
				class CA_OpticsMode: CA_OpticsZoom
				{
					idc = 154;
				};

				//  (uiNamespace getVariable "RHS_1G42_Ctrl" displayCtrl 1) ctrlSetPosition [9.15 *   (0.01875 *    Safezoneh),4.5*   (0.025 *    SafezoneH),35 *   (0.01875 * SafezoneH),35.0 *   (0.025 * SafezoneH)];(uiNamespace    getVariable "RHS_1G42_Ctrl" displayCtrl   1) ctrlCommit 0 - wide
				//  (uiNamespace getVariable "RHS_1G42_Ctrl" displayCtrl 1) ctrlSetPosition [-8.35 *   (0.01875 *    Safezoneh),-11.1*   (0.025 *    SafezoneH),70 *   (0.01875 * SafezoneH),70.0 *   (0.025 * SafezoneH)];(uiNamespace    getVariable "RHS_1G42_Ctrl" displayCtrl   1) ctrlCommit 0 - narrow

				class RHS_Sight: RscPicture
				{
					idc=1;
					//type=99;
					style="0x30 + 0x800";
					sizeEx="0.038*SafezoneH";
					colorText[]={0.70599997,0.074500002,0.0196,1};
					shadow=0;
					font="rhs_digital_font";
					text="rhsafrf\addons\rhs_optics\vehicles\data\rhs_1g46_moving_ca.paa";
					x =10.32 *   (0.01875 * Safezoneh);
					y =-3.95 *   (0.025 * SafezoneH);
					w="29 *   (0.01875 * SafezoneH)";
					h="29 *   (0.025 * SafezoneH)";
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
					x =17.65 *   (0.01875 * SafezoneH);
					y =36.00 *   (0.025 * SafezoneH);
					w="1.7 *   (0.01875 * SafezoneH)";
					h="1.7 *   (0.025 * SafezoneH)";
				};

				class RHS_Ammo: CA_Distance
				{
					idc = 3;
					//style = 0;
					//shadow = 0;
					text="$";
					x =21.65 *   (0.01875 * Safezoneh);
					y =36 *   (0.025 * SafezoneH);
					w="1.9 *   (0.01875 * SafezoneH)";
					h="1.9 *   (0.025 * SafezoneH)";
				};
				class RHS_Distance: CA_Distance
				{
					idc = 4;
					text="$$$$";
					w="12.9 *   (0.01875 * SafezoneH)";
					h="12.9 *   (0.025 * SafezoneH)";
				};
//(uiNamespace getVariable "RHS_1G42_Ctrl" displayCtrl 5) ctrlSetPosition [16.14 *   (0.01875 *    Safezoneh),3.5*   (0.025 *    SafezoneH),20 *   (0.01875 * SafezoneH),20.0 *   (0.025 * SafezoneH)];(uiNamespace    getVariable "RHS_1G42_Ctrl" displayCtrl   5) ctrlCommit 0

				class RHS_agava_static: RscPicture
				{
					idc=5;
					//type=99;
					style="0x30 + 0x800";
					sizeEx="0.038*SafezoneH";
					colorText[] = {1,1,1,0.8};
					shadow=0;
					//font="rhs_digital_font_var";
					text="rhsafrf\addons\rhs_optics\vehicles\data\rhs_agava_static.paa";
					x =16.14 *   (0.01875 * Safezoneh);
					y =3.5 *   (0.025 * SafezoneH);
					w="20 *   (0.01875 * SafezoneH)";
					h="20 *   (0.025 * SafezoneH)";
				};
				//  (uiNamespace getVariable "RHS_1G42_Ctrl" displayCtrl 6) ctrlSetPosition [21.54 *   (0.01875 *    Safezoneh),12.44*   (0.025 *    SafezoneH),1 *   (0.01875 * SafezoneH),1*   (0.025 * SafezoneH)];(uiNamespace    getVariable "RHS_1G42_Ctrl" displayCtrl   6) ctrlCommit 0
				class RHS_Ammo_agava: CA_Distance
				{
					idc = 6;
					//style = 0;
					//shadow = 0;
					text="Б";
					font="rhs_digital_font_var";
					sizeEx="0.022*SafezoneH";
					colorText[] = {1,1,1,0.8};
					x =21.14 *   (0.01875 * Safezoneh);
					y =12.44 *   (0.025 * SafezoneH);
					w="1.2 *   (0.01875 * SafezoneH)";
					h="1.0 *   (0.025 * SafezoneH)";
				};
				// (uiNamespace getVariable "RHS_1G42_Ctrl" displayCtrl 7) ctrlSetPosition [17.24 *   (0.01875 *    Safezoneh),12.44*   (0.025 *    SafezoneH),4 *   (0.01875 * SafezoneH),1*   (0.025 * SafezoneH)];(uiNamespace    getVariable "RHS_1G42_Ctrl" displayCtrl   7) ctrlCommit 0           ;
				class RHS_Gun_ReadyText_agava: RHS_Ammo_agava
				{
					idc=7;
					x =17.24 *   (0.01875 * SafezoneH);
					w="4 *   (0.01875 * SafezoneH)";
					text="ГОТ";
				};
				//  (uiNamespace getVariable "RHS_1G42_Ctrl" displayCtrl 8) ctrlSetPosition [18.14 *   (0.01875 *    Safezoneh),13.54*   (0.025 *    SafezoneH),3.5 *   (0.01875 * SafezoneH),1.0 *   (0.025 * SafezoneH)];(uiNamespace    getVariable "RHS_1G42_Ctrl" displayCtrl   8) ctrlCommit 0      ;
				class RHS_Distance_agava: CA_Distance
				{
					idc = 8;
					text="----";
					x =18.14 *   (0.01875 * Safezoneh);
					y =13.54 *   (0.025 * SafezoneH);
					w="3.5 *   (0.01875 * SafezoneH)";
					h="1 *   (0.025 * SafezoneH)";
					sizeEx="0.028*SafezoneH";
					font="rhs_digital_font_var";
					colorText[] = {1,1,1,0.8};
				};
			};
		};
		class Objects
		{
		  	class AmmoSelector_bgr
		  	{
				idc = 311;
			  	 type = 82;
			  	 x = 0.535152-safezoneX;
			  	 y = 0.140276+safezoneY;
				 z = 0.10;
			  	 scale = 0.15;
				direction[] = {0, 0, -1};
				up[] = {0, 1, 0};
				model = "rhsafrf\addons\rhs_optics\vehicles\kompas\switch_bg_1g42.p3d";
			  	 xBack = .5; yBack = .5;
			  	 zBack = 0;
			  	 inBack =0;
			  	 enableZoom = 0; zoomDuration = 4.001;
			};
		  	class AmmoSelector: AmmoSelector_bgr
		  	{
				idc = 312;
				model = "rhsafrf\addons\rhs_optics\vehicles\kompas\switch_1g42.p3d";
		  	};
		  	class AutoloaderSelector: AmmoSelector_bgr
		  	{
				idc = 313;
			  	 x = 0.335152-safezoneX;
				model = "rhsafrf\addons\rhs_optics\vehicles\kompas\switch_autoloader_on.p3d";
		  	};
		};

	};