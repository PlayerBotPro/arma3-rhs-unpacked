
	class RHS_RscOptics_Su25_KlenPS: RscUnitInfo
	{
		idd=300;
		onLoad="['onLoad',_this,'RscUnitInfo','IGUI'] call (uinamespace getvariable 'BIS_fnc_initDisplay'); _this spawn rhs_fnc_su25_klenps;";
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
				class CA_OpticsMode: RscText
				{
					idc = 158;
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