
	class RHS_RscOptics_MiG29SM_TV: RscUnitInfo
	{
		idd=300;
		//onLoad="['onLoad',_this,'RscUnitInfo','IGUI'] call (uinamespace getvariable 'BIS_fnc_initDisplay'); _this spawn rhs_fnc_mig29sm_cockpit;";
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
				class rhs_arr_rangeToTarget: RscPicture
				{
					idc = 2;
					text = "\rhsafrf\addons\rhs_optics\vehicles\data\rhs_mig29sm_arrow_vert_ca.paa";
					x =8.89 *   (0.01875 * Safezoneh);
					y =2.39 * (0.025 * SafezoneH);
					w="35.18 *   (0.01875 * SafezoneH)";
					h="35.18 *   (0.025 * SafezoneH)";
				};
				class rhs_arr_vert: rhs_arr_rangeToTarget
				{
					idc = 3;
					text = "\rhsafrf\addons\rhs_optics\vehicles\data\rhs_mig29sm_arrow_vert_ca.paa";
					x =8.89 *   (0.01875 * Safezoneh);
					y =2.39 * (0.025 * SafezoneH);
				};
				class rhs_arr_horiz: rhs_arr_rangeToTarget
				{
					idc = 4;
					text = "\rhsafrf\addons\rhs_optics\vehicles\data\rhs_mig29sm_arrow_hor_ca.paa";
					x =8.89 *   (0.01875 * Safezoneh);
					y =2.39 * (0.025 * SafezoneH);
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