class RscEdit;
class RscOpticsValue;
class RscOpticsText;
class RscIGUIText;
class RscIGUIValue;
class RscText;
class RscPicture;
class HScrollbar;
class VScrollbar;
class RscMapControl;


class RscControlsGroup;
#define ADD_IDD_TO_TOGGLEBACKGROUND\
		class CA_VehicleTogglesBackground: CA_VehicleTogglesBackground\
		{\
			idc = 1243;\
		};

class RscInGameUI
{
	class RscUnitInfo;	
	class RHS_RscMATV_Codriver: RscUnitInfo
	{
		idd = 300;
		onLoad="['onLoad',_this,'RscUnitInfo','IGUI'] call (uinamespace getvariable 'BIS_fnc_initDisplay'); _this call rhs_fnc_matv_codriver_loader";
		controls[] = {"CA_Zeroing", "CA_IGUI_elements_group"};
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
			x = "0 * 		(0.01875 * SafezoneH) + 		(SafezoneX + ((SafezoneW - SafezoneH) / 2))";
			y = "0 * 		(0.025 * SafezoneH) + 		(SafezoneY)";
			w = "53.5 * 		(0.01875 * SafezoneH)";
			h = "40 * 		(0.025 * SafezoneH)";
			class controls
			{
				class RHS_UI_Handler: RscPicture 	{idc=8551;};
			};
		};
	};
};