class RscOpticsText;
class RscOpticsValue;
class RscText;
class RscPicture;
class RscControlsGroup;
class HScrollbar;
class VScrollbar;

/*

#define ADD_IDD_TO_TOGGLEBACKGROUND\
class CA_VehicleTogglesBackground: CA_VehicleTogglesBackground\
{\
	idc = 1243;\
};

*/

class RscInGameUI
{
	class RscUnitInfoArtillery;
	class RHSUSF_RscUnitInfoAirRTDFullDigital_NoRadar;
	class RscUnitInfoAirPlane;

	class RHSGREF_RscUnitInfoAir_UH1H: RscUnitInfoArtillery
	{
		onLoad="['onLoad',_this,'RscUnitInfo','IGUI'] call (uinamespace getvariable 'BIS_fnc_initDisplay'); _this spawn rhs_fnc_dynamicObjectDrawing_loop;[] call RHS_fnc_UI_Options";
		controls[] =
		{
			"CA_BackgroundVehicle","CA_BackgroundVehicleTitle","CA_BackgroundVehicleTitleDark","CA_BackgroundFuel","CA_Vehicle","CA_VehicleRole","CA_HitZones","CA_VehicleTogglesBackground","CA_VehicleToggles","CA_SpeedBackground","CA_SpeedUnits","CA_Speed","CA_ValueFuel","CA_AltBackground","CA_AltUnits","CA_Alt","WeaponInfoControlsGroupRight","CA_Zeroing","CA_Mode"
		};
	};
	class RHSGREF_RscUnitInfoAirRTDFullDigital_UH1H: RHSUSF_RscUnitInfoAirRTDFullDigital_NoRadar
	{
		onLoad="['onLoad',_this,'RscUnitInfo','IGUI'] call (uinamespace getvariable 'BIS_fnc_initDisplay');_this spawn rhs_fnc_dynamicObjectDrawing_loop;[] call RHS_fnc_UI_Options";
	};
	class RHSGREF_RscUnitInfoJet: RscUnitInfoAirPlane
	{
		controls[] = {
	    	"CA_BackgroundVehicle","CA_BackgroundVehicleTitle","CA_BackgroundVehicleTitleDark","CA_BackgroundFuel","CA_Vehicle","CA_VehicleRole","CA_HitZones","CA_VehicleTogglesBackground","CA_VehicleToggles","CA_SpeedBackground","CA_SpeedUnits","CA_Speed","CA_ValueFuel","CA_AltBackground","CA_AltUnits","CA_Alt","WeaponInfoControlsGroupRight","CA_Throttle",
	      	"CA_Mode"
	    };
	    onLoad="['onLoad',_this,'RscUnitInfo','IGUI'] call (uinamespace getvariable 'BIS_fnc_initDisplay');_this call rhsusf_fnc_announcer;_this spawn rhs_fnc_dynamicObjectDrawing_loop";
	    //ADD_IDD_TO_TOGGLEBACKGROUND
	};
};