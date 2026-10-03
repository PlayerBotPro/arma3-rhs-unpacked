
class RscPicture;
class RscMapControl;

class RscInGameUI
{
	class RscUnitInfoTank;
	class RHS_RscUnitInfoBRDM2_9P148: RscUnitInfoTank
	{	
		onLoad="['onLoad',_this,'RscUnitInfo','IGUI'] call (uinamespace getvariable 'BIS_fnc_initDisplay');_this call RHS_fnc_brdm2_atgmInfo";
		controls[] = {
			"WeaponInfoControlsGroupRight","CA_Zeroing","CA_BackgroundVehicle","CA_BackgroundVehicleTitle","CA_BackgroundVehicleTitleDark","CA_BackgroundFuel","CA_Vehicle","CA_VehicleRole","CA_HitZones","CA_VehicleTogglesBackground","CA_VehicleToggles","CA_SpeedBackground","CA_SpeedUnits","CA_Speed","CA_ValueFuel",
			"DrawMap",
			"RHS_TurretLock"
		};
		// Just to trigger draw handler
		class DrawMap: RscMapControl
		{
			idc = 7001;
			type = 101;
			x = 0; y = 0; w = 0; h = 0;
		};
		class RHS_TurretLock: RscPicture
		{
			idc			= 10101;
			text		=  "\rhsusf\addons\rhsusf_optics\data\tex\rhs_turretLock_ca.paa";
			colorText[]	=
			{
				"(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])",
				"(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])",
				"(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])",
				"(profilenamespace getvariable ['IGUI_TEXT_RGB_A',0.8])"
			};
			x			= "1.9 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(profilenamespace getvariable ['GUI_GRID_VEHICLE_X',		(safezoneX + 0.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40))])";
			y			= "2.25 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(profilenamespace getvariable ['GUI_GRID_VEHICLE_Y',		(safezoneY + 0.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))])";
			w			= "3.55 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			h			= "0.95 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
	};
};