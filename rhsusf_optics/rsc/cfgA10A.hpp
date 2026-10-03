
	class RHSUSF_RscOptics_A10A_TVM: RscUnitInfo
	{
		idd=300;
		onLoad="['onLoad',_this,'RscUnitInfo','IGUI'] call (uinamespace getvariable 'BIS_fnc_initDisplay'); _this spawn rhsusf_fnc_a10a_tvm_screen;";
		controls[]=
		{
			"CA_IGUI_elements_group"
		};
		class CA_IGUI_elements_group: RscControlsGroup
		{
			idc=170;
			class VScrollbar: VScrollbar
			{
				width=0;
			};
			class HScrollbar: HScrollbar
			{
				height=0;
			};
			x = "0 * 		(0.01875 * SafezoneH) + 		(SafezoneX + ((SafezoneW - SafezoneH) / 2))";
			y = "0 * 		(0.025 * SafezoneH) + 		(SafezoneY)";
			w = "53.5 * 		(0.01875 * SafezoneH)";
			h = "40 * 		(0.025 * SafezoneH)";
			class controls 
			{
				class rhs_cross: RscPicture
				{
					idc = 1;
					text = "\rhsusf\addons\rhsusf_a2port_air\A10\data\rhs_tvm_cross_ca.paa";
					x = "25.9 * 		(0.01875 * SafezoneH)";
					y = "18.8 * 		(0.025 * SafezoneH)";
					w = "1.8 * 		(0.01875 * SafezoneH)";
					h = "1.8 * 		(0.025 * SafezoneH)";
				};
				// (uiNamespace getVariable "RHS_A10A_Ctrl" displayCtrl 1) ctrlSetPosition [25.9 *   (0.01875 * Safezoneh),18.8 *   (0.025 * SafezoneH),1.8 *   (0.01875 * SafezoneH),1.8 *   (0.025 * SafezoneH)];(uiNamespace getVariable "RHS_A10A_Ctrl"    displayCtrl 1) ctrlCommit 1;
				class rhs_bgr: RscPicture
				{
					idc = 2;
					text = "\rhsusf\addons\rhsusf_a2port_air\A10\data\rhs_tvm_bg_off_co.paa";
					x = "3.05 	*   (0.01875 * SafezoneH)";
					y = "-4.6 	* 	(0.025 * SafezoneH)";
					w = "46.65	* 	(0.01875 * SafezoneH)";
					h = "46.8 	* 	(0.025 * SafezoneH)";
				};
				class CA_OpticsMode: RscText
				{
					idc = 180;
					w = "0";
					h = "0";
				};
				class TextTrackArea: CA_OpticsMode
				{
					idc = 194;
					style = 2;
					text = "AREA";
				};
				class TextTrackPoint: TextTrackArea
				{
					idc = 195;
					text = "POINT";
				};
			};
		};
	};