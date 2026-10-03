
class CfgFunctions
{
	class RHS
	{

		tag = "RHS";
		class functions
		{

			class tigr_init
			{
				file = "\rhsafrf\addons\rhs_c_cars\scripts\rhs_decal_init.sqf";
				description = "Tigr decal init";
			};
			class tigr_hatch_handler
			{
				file = "\rhsafrf\addons\rhs_c_cars\scripts\rhs_hatchHandler.sqf";
				description = "Tigr hatch handler";
			};
			class tigr_sts_turret
			{
				file = "\rhsafrf\addons\rhs_c_cars\scripts\rhs_tigr_sts_turret.sqf";
				description = "Tigr STS weapon handler";
			};
			class tigr_sts_turret_seat_eh
			{
				file = "\rhsafrf\addons\rhs_c_cars\scripts\rhs_tigr_sts_turret_seat_eh.sqf";
				description = "Tigr STS weapon event handler";
			};
			class tigr_sts_turret_getin_eh
			{
				file = "\rhsafrf\addons\rhs_c_cars\scripts\rhs_tigr_sts_turret_getin_eh.sqf";
				description = "Tigr STS weapon event handler";
			};
			class tigr_sts_turret_getout_eh
			{
				file = "\rhsafrf\addons\rhs_c_cars\scripts\rhs_tigr_sts_turret_getout_eh.sqf";
				description = "Tigr STS weapon event handler";
			};
			class tigr_sts_turret_ui
			{
				file = "\rhsafrf\addons\rhs_c_cars\scripts\rhs_tigr_sts_turret_ui.sqf";
				description = "Tigr STS weapon handler";
			};
			class tigr_sts_reloaded_eh
			{
				file = "\rhsafrf\addons\rhs_c_cars\scripts\rhs_tigr_sts_reloaded_eh.sqf";
				description = "Tigr STS reloaded event handler";
			};
			class tigr_sts_inventory_eh
			{
				file = "\rhsafrf\addons\rhs_c_cars\scripts\rhs_tigr_sts_inventory_eh.sqf";
				description = "Tigr STS inventory event handler for RPG-26 animations";
			};
			class tigrm_gunner
			{
				file = "\rhsafrf\addons\rhs_c_cars\scripts\rhs_tigrm_gunner.sqf";
				description = "Tigr STS weapon event handler";
			};
			class tigrm_turret_seat_eh
			{
				file = "\rhsafrf\addons\rhs_c_cars\scripts\rhs_tigrm_turret_seat_eh.sqf";
				description = "Tigr STS weapon event handler";
			};
			class tigrm_turret_getin_eh
			{
				file = "\rhsafrf\addons\rhs_c_cars\scripts\rhs_tigrm_turret_getin_eh.sqf";
				description = "Tigr STS weapon event handler";
			};
		};
	};
};


class CfgSounds
{
	class RHS_Gear
	{
		name="Changing gear sound";
		sound[]=
		{
			"\rhsafrf\addons\rhs_a2port_car\sounds\Gear_Change.wss",
			db+64,
			1,
			2.4
		};
		titles[]={};
	};
	class rhs_rain
	{
		name = "Rain droplets sound inside car";
		sound[] = {"rhsafrf\addons\rhs_a2port_car\sounds\rain.wss", db+74, 1,2.8};
		titles[] = {0, ""};
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
	class rhs_tigr_sts_turret : RscUnitInfo
	{
		idd = 300;
		controls[] = {"CA_Zeroing","RHS_tigr_handler"};
		class RHS_tigr_handler: RscPicture {idc=69999;};
		onLoad="['onLoad',_this,'RscUnitInfo','IGUI'] call (uinamespace getvariable 'BIS_fnc_initDisplay'); _this call rhs_fnc_tigr_sts_turret_ui";
	};
	class rhs_tigrm_gunner: RscWeaponZeroing
	{
		onLoad="['onLoad',_this,'RscUnitInfo','IGUI'] call (uinamespace getvariable 'BIS_fnc_initDisplay'); [_this select 0,'tigrm'] call RHS_fnc_tigrm_gunner";
	};
};