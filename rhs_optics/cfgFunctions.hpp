
class CfgFunctions
{
	class RHS
	{
		//don't forget to disable it before release for MP security reasons
		tag = "RHS";
		class functions
		{

			class sight_bmp2
			{
				file = "\rhsafrf\addons\rhs_optics\scripts\RHS_sight_bmp2.sqf";
				description = "FCS for BMP-2";
			};
			class sight_btr80a
			{
				file = "\rhsafrf\addons\rhs_optics\scripts\RHS_sight_btr80a.sqf";
				description = "FCS for BTR-80A";
			};
			class sight_1pz32
			{
				file = "\rhsafrf\addons\rhs_optics\scripts\RHS_sight_1pz32.sqf";
				description = "FCS for BTR-80 (1PZ-3-2)";
			};
			class sight_1pz3
			{
				file = "\rhsafrf\addons\rhs_optics\scripts\RHS_sight_1pz3.sqf";
				description = "FCS for TKN-3B & 1PZ-3";
			};
			class rF_t72
			{
				file = "\rhsafrf\addons\rhs_optics\scripts\RHS_rF_t72.sqf";
				description = "FCS for T72";
			};
			class rF_t72_Animate
			{
				file = "\rhsafrf\addons\rhs_optics\scripts\RHS_rF_T72_anim.sqf";
				description = "FCS for T72 - Gun Animation Part";
			};
			class sight_1g42
			{
				file = "\rhsafrf\addons\rhs_optics\scripts\RHS_sight_1g42.sqf";
				description = "FCS for 1G42 Sights (T80 series)";
			};
			class sight_1g46
			{
				file = "\rhsafrf\addons\rhs_optics\scripts\RHS_sight_1g46.sqf";
				description = "FCS for 1G46 Sights (T80U/T90 series)";
			};
			class sight_lead
			{
				file = "\rhsafrf\addons\rhs_optics\scripts\RHS_lead.sqf";
				description = "Calculating lead for tanks";
			};
			class sight_1g42_setElev
			{
				file = "\rhsafrf\addons\rhs_optics\scripts\RHS_sight_1g42_elev.sqf";
				description = "Calculating elevation for 1g42";
			};
			class sight_bmp2_tkn3
			{
				file = "\rhsafrf\addons\rhs_optics\scripts\RHS_sight_bmp2_tkn3.sqf";
				description = "FCS for TKN3-B Sights (BMP2)";
			};
			class sight_tkn3
			{
				file = "\rhsafrf\addons\rhs_optics\scripts\RHS_sight_tkn3.sqf";
				description = "FCS for TKN3-B Sights (T72B/BMP series)";
			};
			class sight_tkn4s
			{
				file = "\rhsafrf\addons\rhs_optics\scripts\RHS_sight_tkn4s.sqf";
				description = "FCS for TKN4-S Sights (T80U/T90 series)";
			};
			class sight_tkn4s_setElev
			{
				file = "\rhsafrf\addons\rhs_optics\scripts\RHS_sight_tkn4s_elev.sqf";
				description = "Calculating elevation for TKN4-S";
			};
			class sight_sprutsd
			{
				file = "\rhsafrf\addons\rhs_optics\scripts\RHS_sight_sprutsd.sqf";
				description = "FCS for Sprut-SD";
			};
			class sight_1k13_3s_sprut
			{
				file = "\rhsafrf\addons\rhs_optics\scripts\RHS_sight_1k13_3s_sprut.sqf";
				description = "FCS for TKN4-S Sights (T80A/U/T90 series)";
			};
			class sight_1k13_3s_bmp3
			{
				file = "\rhsafrf\addons\rhs_optics\scripts\RHS_sight_1k13_3s_bmp3.sqf";
				description = "FCS for TKN4-S Sights (T80A/U/T90 series)";
			};
			class sight_essa
			{
				file = "\rhsafrf\addons\rhs_optics\scripts\RHS_sight_essa.sqf";
				description = "FCS Catherine for BMD4 & BMP3M";
			};
			class sight_sosnau
			{
				file = "\rhsafrf\addons\rhs_optics\scripts\RHS_sight_sosnau.sqf";
				description = "FCS Sosna-U for T-72B3";
			};
			class sight_essa_commander
			{
				file = "\rhsafrf\addons\rhs_optics\scripts\RHS_sight_essa_commander.sqf";
				description = "FCS Catherine for BMD4 & BMP3M";
			};
			class sight_essa_elev
			{
				file = "\rhsafrf\addons\rhs_optics\scripts\RHS_sight_essa_elev.sqf";
				description = "FCS Catherine for BMD4 & BMP3M";
			};
			class sight_agava2
			{
				file = "\rhsafrf\addons\rhs_optics\scripts\RHS_sight_agava2.sqf";
				description = "FCS AGAVA-2 for T-80UM";
			};
			class sight_plissa
			{
				file = "\rhsafrf\addons\rhs_optics\scripts\RHS_sight_plissa.sqf";
				description = "FCS PLISSA for T-80UE-1";
			};
			class sight_prp3_mortar
			{
				file = "\rhsafrf\addons\rhs_optics\scripts\RHS_sight_prp3_mortar.sqf";
				description = "FCS for PRP3 mortar";
			};
			class sight_9s475
			{
				file = "\rhsafrf\addons\rhs_optics\scripts\RHS_sight_9s475.sqf";
				description = "FCS for Mi-24 missle launcher";
			};
			class sight_1pn22m
			{
				file = "\rhsafrf\addons\rhs_optics\scripts\RHS_sight_1pn22m.sqf";
				description = "FCS for 1PN22M sight used on BMP & BMD 1";
			};
			class sight_zu23_t3
			{
				file = "\rhsafrf\addons\rhs_optics\scripts\RHS_sight_zu23_t3.sqf";
			};

			class ammoSwitch
			{
				file = "\rhsafrf\addons\rhs_optics\scripts\RHS_ammoSwitch.sqf";
				description = "Handling of automatic shell loading for tanks with autoloaders";
			};
			class ammoIndexing
			{
				file = "\rhsafrf\addons\rhs_optics\scripts\RHS_ammoIndexing.sqf";
				description = "Indexing rounds in carousel";
			};
			class openBallisticMenu
			{
				file = "\rhsafrf\addons\rhs_optics\scripts\RHS_openBallisticMenu.sqf";
				description = "Handling of automatic shell loading for tanks with autoloaders";
			};
			class autoloader
			{
				file = "\rhsafrf\addons\rhs_optics\scripts\RHS_autoloader.sqf";
				description = "Handling of automatic shell loading for tanks with autoloaders";
			};
			class autoloader_ui_eh
			{
				file = "\rhsafrf\addons\rhs_optics\scripts\RHS_autoloader_ui_eh.sqf";
				description = "Handling of inGameUISetEventHandler for autoloaders";
			};
			class autoloaderSwitch
			{
				file = "\rhsafrf\addons\rhs_optics\scripts\RHS_autoloaderSwitch.sqf";
				description = "Sequential Mode autoloader switch handler";
			};
			class fireOnMove
			{
				file = "\rhsafrf\addons\rhs_optics\scripts\rhs_fireOnMove.sqf";
				description = "Fire on move script";
			};
			class findAngle
			{
				file = "\rhsafrf\addons\rhs_optics\scripts\RHS_findAngle.sqf";
				description = "FCS PLISSA for T-80UE-1";
			};
			class findAngle2
			{
				file = "\rhsafrf\addons\rhs_optics\scripts\RHS_findAngle2.sqf";
				description = "FCS PLISSA for T-80UE-1";
			};
			class calcBalistic
			{
				file = "\rhsafrf\addons\rhs_optics\scripts\RHS_calcBalistic.sqf";
				description = "FCS PLISSA for T-80UE-1";
			};
			class calcBalistic2
			{
				file = "\rhsafrf\addons\rhs_optics\scripts\RHS_calcBalistic2.sqf";
				description = "FCS PLISSA for T-80UE-1";
			};
			class gunOffset
			{
				file = "\rhsafrf\addons\rhs_optics\scripts\RHS_gunOffset.sqf";
				description = "Gun & view mem point offset fixer";
			};
			class autoTrack
			{
				file = "\rhsafrf\addons\rhs_optics\scripts\RHS_autoTrack.sqf";
				description = "Auto track target script";
			};



			class compass_sprutsd
			{
				file = "\rhsafrf\addons\rhs_optics\scripts\RHS_compass_sprutsd.sqf";
				description = "Compass for Sprut-SD";
			};

			class compass_t72
			{
				file = "\rhsafrf\addons\rhs_optics\scripts\RHS_compass_t72.sqf";
				description = "Compass for T72";
			};
			class compass_t80
			{
				file = "\rhsafrf\addons\rhs_optics\scripts\RHS_compass_t80.sqf";
				description = "Compass for T80 Tanks";
			};
			class pipHandler_bmp3
			{
				file = "\rhsafrf\addons\rhs_optics\scripts\RHS_pipHandler_bmp3.sqf";
				description = "PiP windows handler for BMP3";
			};
			class pipHandler_bmp3m
			{
				file = "\rhsafrf\addons\rhs_optics\scripts\RHS_pipHandler_bmp3m.sqf";
				description = "PiP windows handler for BMP3M";
			};
			class ui_staticWeapon
			{
				file = "\rhsafrf\addons\rhs_optics\scripts\RHS_ui_staticWeapon.sqf";
				description = "UI handler for rotation of static weapons";
			};


			class fcs_2s3
			{
				file = "\rhsafrf\addons\rhs_optics\scripts\RHS_fcs_2s3.sqf";
				description = "Simple fcs function for 2s3";
			};
			class fcs_2s1
			{
				file = "\rhsafrf\addons\rhs_optics\scripts\RHS_fcs_2s1.sqf";
			};
			class fcs_d30
			{
				file = "\rhsafrf\addons\rhs_optics\scripts\RHS_fcs_d30.sqf";
			};
			class 1v528_setRange
			{
				file = "\rhsafrf\addons\rhs_optics\scripts\1v528\setRange.sqf";
				description = "Calculating elevation for 1g42";
			};
			class randomRadio
			{
				file = "\rhsafrf\addons\rhs_optics\scripts\rhs_randomRadio.sqf";
				description = "Random Radio script";
			};
			class laserTarget
			{
				file = "\rhsafrf\addons\rhs_optics\scripts\rhs_laserTarget.sqf";
				description = "Check laser target";
			};
			class su25_klenps
			{
				file = "\rhsafrf\addons\rhs_optics\scripts\RHS_su25_klenps.sqf";
				description = "Klen-PS simulation for Su-25";
			};
		};
		class SPO15_functions
		{

			class rwr_spo15
			{
				file = "\rhsafrf\addons\rhs_optics\scripts\rhs_rwr_spo15.sqf";
				description = "SPO-15 Beryeza main handler";
			};
			class rwr_spo15_eh
			{
				file = "\rhsafrf\addons\rhs_optics\scripts\rhs_rwr_spo15_eh.sqf";
				description = "SPO-15 Incoming Missile EH";
			};
		};
		class Ka52_functions
		{

			class ka52_handler
			{
				file = "\rhsafrf\addons\rhs_optics\scripts\RHS_sight_ka52.sqf";
				description = "Ka-52 sync handler";
			};
			class sight_Samshin
			{
				file = "\rhsafrf\addons\rhs_optics\scripts\RHS_sight_samshin.sqf";
				description = "Ka-52 Samshin-1 simulation handler";
			};
			class sight_Samshin_elev
			{
				file = "\rhsafrf\addons\rhs_optics\scripts\RHS_sight_samshin_elev.sqf";
				description = "Ka-52 Samshin-1 simulation handler";
			};
		};
		class Mi28_functions
		{

			class Mi28_handler
			{
				file = "\rhsafrf\addons\rhs_optics\scripts\RHS_sight_mi28.sqf";
				description = "Mi-28sync handler";
			};
			class sight_mi28_fcs
			{
				file = "\rhsafrf\addons\rhs_optics\scripts\RHS_sight_mi28_fcs.sqf";
				description = "Mi-28 OPS-28 'TOR' simulation handler";
			};
			class sight_mi28_fcs_pilot
			{
				file = "\rhsafrf\addons\rhs_optics\scripts\RHS_sight_mi28_fcs_pilot.sqf";
				description = "Mi-28 TOES-521 camera simulation handler";
			};
		};
	};
};


class CfgSounds
{
	class RHS_SwitchClick
	{
		name="Tank switch click";
		sound[]=
		{
			"rhsafrf\addons\rhs_optics\scripts\1v528\sounds\switch_click.ogg",
			1,
			1
		};
		titles[]={};
	};
	class RHS_SwitchToggle
	{
		name="Tank toggle click";
		sound[]=
		{
			"rhsafrf\addons\rhs_optics\scripts\1v528\sounds\switch_pyk.ogg",
			1,
			1
		};
		titles[]={};
	};
	class RHS_ButtonPress
	{
		name = "Tank button press";
		sound[] =
		{
			"rhsafrf\addons\rhs_optics\scripts\1v528\sounds\button_press.ogg",
			db - 10,
			1
		};
		titles[] = {};
	};
	class rhs_rwr_beep_single
	{
		name = "beep";
		sound[] = {"rhsafrf\addons\rhs_optics\sounds\single_beep.wav", db+4, 1,1};
		titles[] = {0, ""};
	};
	class rhs_rwr_beep_short: rhs_rwr_beep_single {
		sound[] = {"rhsafrf\addons\rhs_optics\sounds\short_beep.wav", db+4, 1,1};
	};
	class rhs_rwr_beep_long: rhs_rwr_beep_single {
		sound[] = {"rhsafrf\addons\rhs_optics\sounds\long_beep.wav", db+4, 1,1};
	};
};