
class CfgFunctions
{
	class RHS
	{
		tag = "RHS";
		class Afterburner
		{
			class Afterburner
			{
				file = "\rhsusf\addons\rhsusf_c_a2port_air\scripts\rhs_afterburner.sqf";
			};
		};
		class functions
		{
			class addParachutes
			{
				file = "\rhsusf\addons\rhsusf_c_a2port_air\scripts\rhs_addParachutes.sqf";
			};
			class cargoAttach
			{
				file = "\rhsusf\addons\rhsusf_c_a2port_air\scripts\cargo_attach.sqf";
				description = "Attach cargo to i.e. airplane cargo bay";
			};
			class moveInside
			{
				file = "\rhsusf\addons\rhsusf_c_a2port_air\scripts\moveInside.sqf";
				description = "adds ability to move around c130 cargo bay";
			};
			class vehPara
			{
				file = "\rhsusf\addons\rhsusf_c_a2port_air\scripts\vehPara.sqf";
				description = "Paradrop from c130 attached objects";
			};
			class foldHeli
			{
				file = "\rhsusf\addons\rhsusf_c_a2port_air\scripts\heli_fold.sqf";
				description = "Folding/unfolding helicopter rotors";
			};
			class doorHandler
			{
				file = "\rhsusf\addons\rhsusf_c_a2port_air\scripts\doorHandler.sqf";
				description = "Generic door delay handler";
			};
			class uh60_doors
			{
				file = "\rhsusf\addons\rhsusf_c_a2port_air\scripts\uh60_doors.sqf";
				description = "UH60 doors open/closed state handling";
			};
			class c130_doors
			{
				file = "\rhsusf\addons\rhsusf_c_a2port_air\scripts\c130_doors.sqf";
				description = "C130 doors open/closed state handling";
			};
			class uh1_toggleCam
			{
				file = "\rhsusf\addons\rhsusf_c_a2port_air\scripts\uh1_toggleCam.sqf";
				description = "UH1Y monitor toggle";
			};
			class cruiseMissile_launch
			{
				file = "\rhsusf\addons\rhsusf_c_a2port_air\scripts\missile\launch.sqf";
				description = "Cruise missile launch";
			};
			class ACESII_seatEjection
			{
				file = "\rhsusf\addons\rhsusf_c_a2port_air\scripts\rhs_seatEjection.sqf";
				description = "Aces II seat ejection script";
			};
			class AI_Eject
			{

				file = "\rhsusf\addons\rhsusf_c_a2port_air\scripts\rhs_ejectAI.sqf";
				description = "AI ejection workaround script";
			};
			class c130j_openMenu
			{
				file = "\rhsusf\addons\rhsusf_c_a2port_air\scripts\c130ui\rhs_menuInit.sqf";
				description = "c130j menu init";
			};
			class c130j_setOption
			{
				file = "\rhsusf\addons\rhsusf_c_a2port_air\scripts\c130ui\rhs_setOption.sqf";
				description = "c130j clicks handling";
			};
			class toggleIntLight
			{
				file = "\rhsusf\addons\rhsusf_c_a2port_air\scripts\rhs_toggleIntLight.sqf";
				description = "Toggle interior light";
			};
			class heli_wheelBrakes
			{
				file = "\rhsusf\addons\rhsusf_c_a2port_air\scripts\rhs_heli_wheelBrakes.sqf";
			};
		};
		class MFD_Functions
		{
			class MFD_checkFireMode
			{
				file = "rhsusf\addons\rhsusf_c_a2port_air\scripts\MFD\rhs_MFD_checkFireMode.sqf";

			};
		};
		class WP_Managment
		{
			class wp_manager
			{
				file = "rhsusf\addons\rhsusf_c_a2port_air\scripts\rhs_wp_manager.sqf";
				description = "Waypoint management - mapclick";
			};
			class wp_find
			{
				file = "rhsusf\addons\rhsusf_c_a2port_air\scripts\rhs_wp_find.sqf";
				description = "Waypoint management - find nearby waypoints";
			};
		};
		class AH64_Functions
		{
			class ah64_init
			{
				file = "rhsusf\addons\rhsusf_c_a2port_air\scripts\AH64\rhs_AH64_init.sqf";
			};
			class ah64_ihadss_toggle
			{
				file = "rhsusf\addons\rhsusf_c_a2port_air\scripts\AH64\rhs_AH64_ihadss_toggle.sqf";
			};
			class ah64_mfd_switch
			{
				file = "\rhsusf\addons\rhsusf_c_a2port_air\scripts\rhs_ah64_MFD_switch.sqf";
			};
			class ah64_mainLoop
			{
				file = "\rhsusf\addons\rhsusf_c_a2port_air\scripts\rhs_ah64_mainLoop.sqf";
				description = "Handle AH64 gunner UI";
			};
			class ah64_gunnerUI
			{
				file = "\rhsusf\addons\rhsusf_c_a2port_air\scripts\rhs_ah64_gunnerUI.sqf";
				description = "Handle AH64 gunner UI";
			};
			class AH64_AI_fire
			{
				file = "\rhsusf\addons\rhsusf_c_a2port_air\scripts\AH64\rhs_AH64_AI_laserTarget.sqf";
				description = "Handle AH64 gunner UI";
			};
		};
	};
};


class CfgSounds
{
	class CruiseMissileLaunch
	{
		name="Tank beep";
		sound[] = {"\rhsusf\addons\rhsusf_a2port_air2\sounds\cruisemissile_launch.wss", 2.12202, 1, 300, 1, 0, 0, 0};
		titles[]={};
	};
	class rhs_eject_sound
	{
		name="Seat ejection sound";
		sound[] = {"\rhsusf\addons\rhsusf_a2port_air\data\sounds\ejection_sound.wss", 2.12202, 1, 300, 1, 0, 0, 0};
		titles[]={};
	};
};