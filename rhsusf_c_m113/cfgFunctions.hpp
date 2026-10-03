#define ADDON_PATH rhsusf\addons\rhsusf_c_m113\scripts

class CfgFunctions
{
	class RHSUSF
	{
		tag = "RHSUSF";
		class functions
		{
			class hatch_control
			{
				file = "\rhsusf\addons\rhsusf_c_m113\scripts\rhs_hatch_control.sqf";
				description = "Hatch control";
			};
			class hatch_control_ui_eh
			{
				file = "\rhsusf\addons\rhsusf_c_m113\scripts\rhs_hatch_control_ui_eh.sqf";
				description = "Hatch control";
			};
			class turretAction
			{
				file = "\rhsusf\addons\rhsusf_c_m113\scripts\rhs_turretAction.sqf";
				description = "Hatch control";
			};
		};
	};
	class RHS
	{
		tag = "RHS";
		class M113
		{			
			class m113_commander_turret 				{file = ADDON_PATH\rhs_m113_commander_turret.sqf;};
			class m113_commander_turret_turnout 		{file = ADDON_PATH\rhs_m113_commander_turret_turnout.sqf;};
			class m113_commander_turret_getout	 		{file = ADDON_PATH\rhs_m113_commander_turret_getout.sqf;};
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
	class rhs_m113_hatch: RscWeaponZeroing
	{
		idd = 300;
		controls[] = {"CA_Zeroing","RHS_tigr_handler"};
		class RHS_tigr_handler: RscPicture {idc=59999;};
		onLoad="['onLoad',_this,'RscUnitInfo','IGUI'] call (uinamespace getvariable 'BIS_fnc_initDisplay'); [_this select 0] call RHSusf_fnc_hatch_control";
	};
};

