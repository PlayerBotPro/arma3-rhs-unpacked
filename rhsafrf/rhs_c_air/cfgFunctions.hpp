
class CfgFunctions
{
	class RHS
	{
		tag = "RHS";
		class Afterburner
		{
			class Afterburner
			{
				file = "\rhsafrf\addons\rhs_c_air\scripts\rhs_afterburner.sqf";
			};
		};
		class PAKFA
		{
			class PAKFA_Init
			{
				file = "\rhsafrf\addons\rhs_c_air\scripts\rhs_pakfa_init.sqf";
			};
			class PAKFA_Glonass
			{
				file = "\rhsafrf\addons\rhs_c_air\scripts\Glonass_map.sqf";
			};
			class PAKFA_Navigation
			{
				file = "\rhsafrf\addons\rhs_c_air\scripts\Navigation.sqf";
			};
			class PAKFA_MapData
			{
				file = "\rhsafrf\addons\rhs_c_air\scripts\MAP_data.sqf";
			};
		};
		class Tu95
		{

			class tu95_dialog_control
			{
				file = "\rhsafrf\addons\rhs_c_air\scripts\tu95\dialog_control.sqf";
				description = "";
			};
			class tu95_AI_launch
			{
				file = "\rhsafrf\addons\rhs_c_air\scripts\tu95\AI_launch.sqf";
				description = "";
			};
			class tu95_AI_prepare
			{
				file = "\rhsafrf\addons\rhs_c_air\scripts\tu95\AI_prepare.sqf";
				description = "Prepare tochka for launch";
			};
			class tu95_AI_waitForTarget
			{
				file = "\rhsafrf\addons\rhs_c_air\scripts\tu95\AI_waitForTarget.sqf";
				description = "";
			};
			class tu95_missile_control
			{
				file = "\rhsafrf\addons\rhs_c_air\scripts\tu95\missile_control.sqf";
				description = "";
			};
			class tu95_anim
			{
				file = "\rhsafrf\addons\rhs_c_air\scripts\tu95\anim_tu95.sqf";
				description = "";
			};
			class tu95_deploy
			{
				file = "\rhsafrf\addons\rhs_c_air\scripts\tu95\deploy.sqf";
				description = "";
			};
		};
		class Air
		{
			class K36D_seatEjection
			{
				file = "\rhsafrf\addons\rhs_c_air\scripts\rhs_seatEjection.sqf";
			};
			class AI_Eject
			{
				file = "\rhsafrf\addons\rhs_c_air\scripts\rhs_ejectAI.sqf";
			};
			class seatPreload
			{
				file = "\rhsafrf\addons\rhs_c_air\scripts\rhs_seatPreload.sqf";
			};
			class infantryParadrop
			{
				file = "\rhsafrf\addons\rhs_c_air\scripts\infParadrop.sqf";
			};
		};
	};
};


#include "scripts\tu95\dialog.hpp"

class CfgSounds
{
	class rhs_eject_sound
	{
		name="Seat ejection sound";
		sound[] = {"\rhsafrf\addons\rhs_air\sounds\ejection_sound.wss", 2.12202, 1, 300, 1, 0, 0, 0};
		titles[]={};
	};
};