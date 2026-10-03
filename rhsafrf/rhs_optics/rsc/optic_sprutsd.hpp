/*
(uiNamespace getVariable "RHS_sprut_Ctrl" displayCtrl 3) ctrlSetPosition [26.18 *   (0.01875 * Safezoneh),3.45*   (0.025 *       SafezoneH),1.9 *   (0.01875 * SafezoneH),1.9 *   (0.025 * SafezoneH)];(uiNamespace getVariable "RHS_sprut_Ctrl"    displayCtrl 3)    ctrlCommit 0;

(uiNamespace getVariable "RHS_sprut_Ctrl" displayCtrl 158) ctrlSetPosition [25.85 *   (0.01875 * Safezoneh),19.27*   (0.025 *       SafezoneH),1.5 *   (0.01875 * SafezoneH),1.5 *   (0.025 * SafezoneH)];(uiNamespace getVariable "RHS_sprut_Ctrl"    displayCtrl 158)    ctrlCommit 0;
*/



	class RHS_RscWeaponSprutSD_FCS: RscUnitInfo
	{
		idd=300;
		onLoad="['onLoad',_this,'RscUnitInfo','IGUI'] call (uinamespace getvariable 'BIS_fnc_initDisplay'); _this call RHS_fnc_sight_sprutsd";
		controls[]=
		{	"CA_OpticsZoom",
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
				class CA_Laser: RscText
				{
					idc=158;
					style="0x30 + 0x800";
					sizeEx="0.038*SafezoneH";
					colorText[]={0.70599997,0.074500002,0.0196,1};
					shadow=0;
					font="EtelkaMonospacePro";
					text="\a3\weapons_f\acc\data\collimdot_red_ca.paa";
					x =25.85 *   (0.01875 * Safezoneh);
					y =19.27 *   (0.025 * SafezoneH);
					w="1.5 * 		(0.01875 * SafezoneH)";
					h="1.5 * 		(0.025 * SafezoneH)";
				};
				class CA_Distance: RscOpticsValue
				{
					idc = 151;
					style = 1;
					shadow = 0;
					colorText[] = {1,0,0,1.0};
					font="rhs_digital_font";
					sizeEx = "0.039*SafezoneH";
					x =16.98 *   (0.01875 * Safezoneh);
					y =-3.75 *   (0.025 * SafezoneH);
					//w="12.9 *   (0.01875 * SafezoneH)";
					//h="12.9 *   (0.025 * SafezoneH)";
					w="0";
					h="0";
				};
				class CA_OpticsMode: CA_OpticsZoom
				{
					idc = 154;
				};
				class RHS_Ammo: CA_Distance
				{
					idc = 3;
					//style = 0;
					//shadow = 0;
					text="$";
					x =26.18 *   (0.01875 * Safezoneh);
					y =3.45 *   (0.025 * SafezoneH);
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
				class RHS_NightSight: RscPicture
				{
					idc=5;
					style="0x30 + 0x800";
					sizeEx="0.038*SafezoneH";
					shadow=0;
					font="rhs_digital_font";
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
				model = "rhsafrf\addons\rhs_optics\vehicles\kompas\switch_bg.p3d";
			  	 xBack = .5; yBack = .5;
			  	 zBack = 0;
			  	 inBack =0;
			  	 enableZoom = 0; zoomDuration = 4.001;
			};
		  	class AmmoSelector: AmmoSelector_bgr
		  	{
				idc = 312;
				model = "rhsafrf\addons\rhs_optics\vehicles\kompas\switch.p3d";
		  	};
		  	class AutoloaderSelector: AmmoSelector_bgr
		  	{
				idc = 313;
			  	 x = 0.335152-safezoneX;
				model = "rhsafrf\addons\rhs_optics\vehicles\kompas\switch_autoloader_on.p3d";
		  	};
		};
	};