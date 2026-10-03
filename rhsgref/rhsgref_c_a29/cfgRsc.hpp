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

#include "resincl.hpp"

class RscControlsGroup;
#define ADD_IDD_TO_TOGGLEBACKGROUND\
		class CA_VehicleTogglesBackground: CA_VehicleTogglesBackground\
		{\
			idc = 1243;\
		};

class RscInGameUI
{
	class RscUnitInfo;
	class RscUnitInfoTank;
	class RscUnitInfoAirNoWeapon: RscUnitInfo
	{
		class CA_VehicleTogglesBackground;
	};
	class RscUnitInfoAir: RscUnitInfoAirNoWeapon
	{
		class WeaponInfoControlsGroupRight;
	};
	class RscUnitInfoAirPlaneNoWeapon: RscUnitInfoAirNoWeapon
	{
	};
	class RscUnitInfoAirPlane: RscUnitInfoAirPlaneNoWeapon
	{
	};
	class RHSGREF_RscUnitInfoPlane_A29: RscUnitInfoAirPlane
	{
		controls[] = {
			"CA_BackgroundVehicle","CA_BackgroundVehicleTitle","CA_BackgroundVehicleTitleDark","CA_BackgroundFuel","CA_Vehicle","CA_VehicleRole","CA_HitZones","CA_VehicleTogglesBackground","CA_VehicleToggles","CA_SpeedBackground","CA_SpeedUnits","CA_Speed","CA_ValueFuel","CA_AltBackground","CA_AltUnits","CA_Alt","WeaponInfoControlsGroupRight","CA_Throttle",
			"CA_Mode","RHS_UI_Handler"
		};
		onLoad="['onLoad',_this,'RscUnitInfo','IGUI'] call (uinamespace getvariable 'BIS_fnc_initDisplay');['jet',17] spawn RHSUSF_fnc_randomRadio;_this call rhsusf_fnc_announcer;_this spawn rhs_fnc_dynamicObjectDrawing_loop;_this call rhs_fnc_a29_mainLoop;[] call RHS_fnc_UI_Options";
		class RHS_UI_Handler: RscPicture 	{idc=8551;};
		ADD_IDD_TO_TOGGLEBACKGROUND
	};
	#include "cfgRsc_A29_Camera.hpp"
};