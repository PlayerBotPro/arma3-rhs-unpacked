
	class RHS_RscWeapon1k13_FCS: RscUnitInfo
	{
		idd=300;
		onLoad="['onLoad',_this,'RscUnitInfo','IGUI'] call (uinamespace getvariable 'BIS_fnc_initDisplay'); _this call RHS_fnc_sight_1k13_3s_sprut";
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
					x =16.98 *   (0.01875 * Safezoneh);
					y =-3.75 *   (0.025 * SafezoneH);
					//w="12.9 *   (0.01875 * SafezoneH)";
					//h="12.9 *   (0.025 * SafezoneH)";
					w="0";
					h="0";
				};
 // (uiNamespace getVariable "RHS_essa_Ctrl" displayCtrl 3) ctrlSetPosition [26.08 *   (0.01875 * Safezoneh),3.45*   (0.025 *       SafezoneH),1.9 *   (0.01875 * SafezoneH),1.9 *   (0.025 * SafezoneH)];(uiNamespace getVariable "RHS_essa_Ctrl"    displayCtrl 3)    ctrlCommit 0;
				class RHS_Ammo: CA_Distance
				{
					idc = 3;
					//style = 0;
					//shadow = 0;
					text="$";
					type = 13;
					size = "0.039*SafezoneH";
					shadow = 1;
					x =25.16 *   (0.01875 * Safezoneh);
					y =3.45 *   (0.025 * SafezoneH);
					w="2.9 *   (0.01875 * SafezoneH)";
					h="1.9 *   (0.025 * SafezoneH)";
					class Attributes
					{
						font = "rhs_digital_font";
						color = "#ff0000";
						align = "center";
						shadow = "false";
					};
				};
				class RHS_Distance: CA_Distance
				{
					idc = 4;
					text="$$$$";
					w="12.9 *   (0.01875 * SafezoneH)";
					h="12.9 *   (0.025 * SafezoneH)";
				};
				class CA_OpticsMode: CA_OpticsZoom
				{
					idc = 154;
				};
			};
		};
	};
	class RHS_RscWeapon1k13_bmp3_FCS: RHS_RscWeapon1k13_FCS
	{
		onLoad="['onLoad',_this,'RscUnitInfo','IGUI'] call (uinamespace getvariable 'BIS_fnc_initDisplay'); _this call RHS_fnc_sight_1k13_3s_bmp3";
	};