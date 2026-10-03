
	class RHS_RscWeaponT72_FCS: RscUnitInfo
	{
		idd=300;
		onLoad="['onLoad',_this,'RscUnitInfo','IGUI'] call (uinamespace getvariable 'BIS_fnc_initDisplay'); _this call RHS_fnc_rF_t72";
		controls[]=
		{
			"CA_Distance",
			"CA_IGUI_elements_group",
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
					idc=258;
					style="0x30 + 0x800";
					sizeEx="0.038*SafezoneH";
					colorText[]={0.70599997,0.074500002,0.0196,1};
					shadow=0;
					font="EtelkaMonospacePro";
					text="\rhsafrf\addons\rhs_t72\data\RF\TPD_K1_lasermark_6x.paa";
					x =26.4 *   (0.01875 * Safezoneh);
					y =19.85 *   (0.025 * SafezoneH);
					w="0.5 * 		(0.01875 * SafezoneH)";
					h="0.5 * 		(0.025 * SafezoneH)";
//(uiNamespace getVariable "RHS_t72_Ctrl" displayCtrl 258) ctrlSetPosition [9.15 *   (0.01875 *    Safezoneh),4.5*   (0.025 *    SafezoneH),0.5 *   (0.01875 * SafezoneH),0.5 *   (0.025 * SafezoneH)];(uiNamespace getVariable "RHS_t72_Ctrl"    displayCtrl 258) ctrlCommit 1;
				};
				class CA_OpticsMode: CA_OpticsZoom
				{
					idc = 154;
				};
			};
		};
		class CA_Distance: RscOpticsValue
		{
			idc=151;
			style=2;
			colorText[]={1,0.15000001,0.15000001,0.64999998};
			shadow=0;
			font="EtelkaMonospacePro";
			x=0;
			y="(SafezoneY+SafezoneH) - 0.195";
			w=0;
			h=0;
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
		};

	};
	class RHS_RscWeaponT72_Comm: RscUnitInfo
	{
		idd=300;
		onLoad="[] call RHS_fnc_comm_t72";
		controls[]=
		{
			"CA_Zeroing"
		};
	};
