
class CfgFunctions
{
	class RHS
	{
		tag = "RHS";
		class functions
		{
			class m2_doors
			{
				file = "\rhsusf\addons\rhsusf_c_a2port_armor\scripts\m2_doors.sqf";
				description = "M2 doors open/closed state handling";
			};
			class hatch_control
			{
				file = "\rhsusf\addons\rhsusf_c_a2port_armor\scripts\rhs_hatch_control.sqf";
				description = "Hatch control";
			};
			class hatch_control_ui_eh
			{
				file = "\rhsusf\addons\rhsusf_c_a2port_armor\scripts\rhs_hatch_control_ui_eh.sqf";
				description = "Hatch control";
			};
			class turretAction
			{
				file = "\rhsusf\addons\rhsusf_c_a2port_armor\scripts\rhs_turretAction.sqf";
				description = "Hatch control";
			};
			class m2_handleWeaponVG
			{
				file = "\rhsusf\addons\rhsusf_c_a2port_armor\scripts\rhs_m2_handleWeaponVG.sqf";
			};
		};
	};
};


class CfgAnimationSourceSounds
{
	class ServoRampSound_2;
	class RHS_Ramp: ServoRampSound_2
	{
            class DoorMovement {
                loop = 0;
                terminate = 1;
                trigger = "(phase factor[0.01,0.02]) * (phase factor[0.99,0.98])";
                sound0[] = {"rhsusf\addons\rhsusf_a2port_armor\data\sounds\ServoRampSound_1", 1, 1, 60};
                sound1[] = {"rhsusf\addons\rhsusf_a2port_armor\data\sounds\ServoRampSound_2", 1, 1, 60};
                sound[] = {"sound0", 0.5, "sound1", 0.5};
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