
class CfgFunctions
{
	class RHS
	{
		tag = "RHS";
		class functions
		{
			class carLightToggle
			{
				file = "\rhsafrf\addons\rhs_c_kamaz\scripts\rhs_lightToggle.sqf";
				description = "Decal init";
			};
			class adjustSearchlight
			{
				file = "\rhsafrf\addons\rhs_c_kamaz\scripts\rhs_adjustSearchlight.sqf";
				description = "Adjust searchlight position";
			};
			class hatch_control
			{
				file = "\rhsafrf\addons\rhs_c_kamaz\scripts\rhs_hatch_control.sqf";
				description = "Hatch control";
			};
			class hatch_control_ui_eh
			{
				file = "\rhsafrf\addons\rhs_c_kamaz\scripts\rhs_hatch_control_ui_eh.sqf";
				description = "Hatch control";
			};
			class turretAction
			{
				file = "\rhsafrf\addons\rhs_c_kamaz\scripts\rhs_turretAction.sqf";
				description = "Hatch control";
			};
		};
	};
};
class RscPicture;
class RscInGameUI
{
	class RscUnitInfo;

	class RscWeaponZeroing: RscUnitInfo
	{
		class WeaponInfoControlsGroupLeft;
	};
	class rhs_kamaz_hatch: RscWeaponZeroing
	{
		idd = 300;
		controls[] = {"CA_Zeroing","RHS_tigr_handler"};
		class RHS_tigr_handler: RscPicture {idc=59999;};
		onLoad="['onLoad',_this,'RscUnitInfo','IGUI'] call (uinamespace getvariable 'BIS_fnc_initDisplay'); [_this select 0] call RHS_fnc_hatch_control";
	};
};

