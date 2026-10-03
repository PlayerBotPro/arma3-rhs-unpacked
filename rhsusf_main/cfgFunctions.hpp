#define SCRIPT_PATH(name) file = rhsusf\addons\rhsusf_main\scripts\##name##.sqf;
class CfgFunctions
{
	class RHSUSF
	{
		tag = "RHSUSF";
		class functions
		{
			class findPlayer
			{
				SCRIPT_PATH(rhs_findPlayer)
				description = "Find player controled unit";
			};
		};
	};
	class RHS
	{
		tag = "RHS";
		class functions
		{
			class findPlayer
			{
				SCRIPT_PATH(rhs_findPlayer)
				description = "Find player controled unit";
			};
			class isPlayer
			{
				SCRIPT_PATH(rhs_isPlayer)
				description = "Find player controled unit";
			};
			class menuOptions
			{
				SCRIPT_PATH(rhs_menuOptions)
				description = "Handling of options menu";
			};
			class dynamicObjectDrawing
			{
				SCRIPT_PATH(rhs_dynamicOD)
				description = "Dynamic Object Drawing";
			};
			class dynamicObjectDrawing_loop
			{
				SCRIPT_PATH(rhs_dynamicOD_loop)
				description = "Dynamic Object Drawing - main loop";
			};
			class UI_Options
			{
				SCRIPT_PATH(rhs_UI_Options)
			};
			class setTurretLock 		{SCRIPT_PATH(rhs_setTurretLock)};
			class reapplyTextures 		{SCRIPT_PATH(rhs_reapplyTextures)};
		};
		#define SCRIPT_PATH_TOWING(name) file = rhsusf\addons\rhsusf_main\scripts\towing\##name##.sqf;
		class TowingSystem
		{
			class towing_attach 		{SCRIPT_PATH_TOWING(rhs_towing_attach)};
			class towing_detach 		{SCRIPT_PATH_TOWING(rhs_towing_detach)};
			class towing_selectVehicle 	{SCRIPT_PATH_TOWING(rhs_towing_selectVehicle)};
			class towing_drag 			{SCRIPT_PATH_TOWING(rhs_towing_drag)};
			class towing_dragAI			{SCRIPT_PATH_TOWING(rhs_towing_dragAI)};
			class towing_destroyed 		{SCRIPT_PATH_TOWING(rhs_towing_destroyed)};
			class towing_dragHelper 	{SCRIPT_PATH_TOWING(rhs_towing_dragHelper)};
			class towing_dragHelperAI 	{SCRIPT_PATH_TOWING(rhs_towing_dragHelperAI)};
			class towing_pushHelper 	{SCRIPT_PATH_TOWING(rhs_towing_pushHelper)};
			class towing_changeOwner 	{SCRIPT_PATH_TOWING(rhs_towing_changeOwner)};
		};
		#define SCRIPT_PATH_VEHICLE_EFFECTS(name) file = rhsusf\addons\rhsusf_main\scripts\VehicleEffects\##name##.sqf;
		class VehicleEffects
		{
			class engineCheckDamage 	{SCRIPT_PATH_VEHICLE_EFFECTS(rhs_engineCheckDamage)};
		};
	};
};
