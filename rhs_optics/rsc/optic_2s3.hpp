
	class rhs_gui_optic_2s3_computer: RscUnitInfo
	{
		idd = 300;

		onLoad="['onLoad',_this,'RscUnitInfo','IGUI'] call (uinamespace getvariable 'BIS_fnc_initDisplay'); _this call RHS_fnc_fcs_2s3";

		controls[] = {"CA_IGUI_elements_group"};
		class CA_IGUI_elements_group: RscControlsGroup
		{
			idc = 170;
			class VScrollbar: VScrollbar
			{
				width = 0;
			};
			class HScrollbar: HScrollbar
			{
				height = 0;
			};
//  (uiNamespace getVariable "RHS_2s3_Ctrl" displayCtrl 170) ctrlSetPosition [8 * (0.01875 * SafezoneH) + (safezoneX),0 *   (0.025 * SafezoneH) +   (SafezoneY),73.5 *   (0.01875 * SafezoneH),40 *   (0.025 * SafezoneH)];(uiNamespace    getVariable "RHS_2s3_Ctrl" displayCtrl    170) ctrlCommit 0

//(uiNamespace getVariable "RHS_2s3_Ctrl" displayCtrl 170) ctrlSetPosition [0,0,16 * (((safezoneW / safezoneH) min 1.2) / 40),16 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)];(uiNamespace    getVariable "RHS_2s3_Ctrl" displayCtrl    170) ctrlCommit 0


//(uiNamespace getVariable "RHS_2s3_Ctrl" displayCtrl 1) ctrlSetPosition [0.0,0,13 *   (0.01875 * SafezoneH),13 *   (0.025 * SafezoneH)];(uiNamespace    getVariable "RHS_2s3_Ctrl" displayCtrl    1) ctrlCommit 0;

//?uhu, dzia?a w ko?cu!
//(uiNamespace getVariable "RHS_2s3_Ctrl" displayCtrl 1) ctrlSetPosition [0.0,0,13 *   (0.01875 * SafezoneH),13 *   (0.025 *    SafezoneH)];(uiNamespace    getVariable "RHS_2s3_Ctrl" displayCtrl    1) ctrlCommit 0;

//(uiNamespace getVariable "RHS_2s3_Ctrl" displayCtrl 170) ctrlSetPosition [((safezoneX + safezoneW) - (16.4 * (((safezoneW / safezoneH) min 1.2) / 40)) - 0.5 * (((safezoneW /safezoneH) min 1.2) / 40)),0 *   (0.025 * SafezoneH) +   (SafezoneY),17 * (((safezoneW / safezoneH) min 1.2) / 40),17 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)];(uiNamespace    getVariable    "RHS_2s3_Ctrl" displayCtrl    170) ctrlCommit 0

//(uiNamespace getVariable "RHS_2s3_Ctrl" displayCtrl 2) ctrlSetPosition [-6 *   (0.01875 * SafezoneH),0.25 *   (0.025 * SafezoneH),13 *   (0.01875 * SafezoneH),13 *   (0.025 *    SafezoneH)];(uiNamespace    getVariable "RHS_2s3_Ctrl" displayCtrl    2) ctrlCommit 0

			x = "((safezoneX + safezoneW) - (16.4 * (((safezoneW / safezoneH) min 1.2) / 40)) - 0.5 * (((safezoneW /safezoneH) min 1.2) / 40))";
			y = "0 *   (0.025 * SafezoneH) +   (SafezoneY)";
			w = "17 * (((safezoneW / safezoneH) min 1.2) / 40)";
			h = "17 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			class controls
			{
				class RHS_ComputerBG: RscPicture
				{
					idc=1;
					style="0x30 + 0x800";
					sizeEx="0.038*SafezoneH";
					colorText[]={1,1,1,1};
					shadow=0;
					font="EtelkaMonospacePro";
					text="rhsafrf\addons\rhs_optics\vehicles\data\rhs_komputer2s3.paa";
					x =0;
					y =0;
					w="13 *   (0.01875 * SafezoneH)";
					h="13 *   (0.025 * SafezoneH)";
				};
				class CA_Distance: RscText
				{
					idc = 173;
					style = 1;
					sizeEx = "0.068*SafezoneH";
					colorText[] = {0.706,0.0745,0.0196,1};
					shadow = 0;
					font="rhs_digital_font";
					text="$$$$$";
					x = "-6 * 		(0.01875 * SafezoneH)";
					y = "0.25 * 		(0.025 * SafezoneH)";
					w = "0 * 		(0.01875 * SafezoneH)";
					h = "0 * 		(0.025 * SafezoneH)";
				};
				class RHS_Distance: CA_Distance
				{
					idc = 2;
					text="$$$$";
					w = "13 * 		(0.01875 * SafezoneH)";
					h = "13 * 		(0.025 * SafezoneH)";
				};
				class CA_Elev: RscText
				{
					idc = 175;
					style = 1;
					sizeEx = "0.032*SafezoneH";
					colorText[] = {0.706,0.0745,0.0196,1};
					shadow = 0;
					font="rhs_digital_font";
					text = "-80.5";
					x = "-2 * 		(0.01875 * SafezoneH)";
					y = "-0.4 * 		(0.025 * SafezoneH)";
					w = "13 * 		(0.01875 * SafezoneH)";
					h = "13 * 		(0.025 * SafezoneH)";
				};
				class CA_Elev_Need: RscText
				{
					idc = 176;
					style = 1;
					sizeEx = "0.032*SafezoneH";
					colorText[] = {0.706,0.0745,0.0196,1};
					shadow = 0;
					font="rhs_digital_font";
					text = "-35.4";
					x = "-2 * 		(0.01875 * SafezoneH)";
					y = "0.95 * 		(0.025 * SafezoneH)";
					w = "0 * 		(0.01875 * SafezoneH)";
					h = "0 * 		(0.025 * SafezoneH)";
				};
				class RHS_Elev_Need: CA_Elev_Need
				{
					idc = 3;
					text="$$$$$";
					w = "13 * 		(0.01875 * SafezoneH)";
					h = "13 * 		(0.025 * SafezoneH)";
				};
			};
		};
	};