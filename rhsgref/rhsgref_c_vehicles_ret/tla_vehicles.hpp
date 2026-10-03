#define CREW_TLA 	crew=rhsgref_tla_crew;\
			AUTHOR_MACRO\
			side=0;\
			dlc = "RHS_GREF";\
			faction="rhsgref_faction_tla";
			
#define CREW_TLA_INF	crew=rhsgref_tla_rifleman;\
			AUTHOR_MACRO\
			side=0;\
			dlc = "RHS_GREF";\
			faction="rhsgref_faction_tla";

			
class rhsgref_tla_btr60 : rhs_btr60_vmf
{
	EdPrev(rhsgref_tla_btr60)
	CREW_TLA

	rhs_decalParameters[] = {};
	
	class EventHandlers: EventHandlers
	{
		init="if (local (_this select 0)) then {[(_this select 0), """", [], false] call bis_fnc_initVehicle;};";
	};
	
	class TransportMagazines
	{
		mag_xx(rhs_30Rnd_762x39mm_89,10);
		mag_xx(rhs_100Rnd_762x54mmR,5);
		mag_xx(rhs_mag_f1,10);
		mag_xx(rhs_rpg7_PG7V_mag,2);
		mag_xx(rhs_rpg7_type69_airburst_mag,2);
	};
	class TransportWeapons
	{
		weap_xx(rhs_weap_akm,2);
	};
	
	hiddenSelectionsTextures[] = 
	{
			"rhsgref\addons\rhsgref_vehicles_ret\data\tla\btr60_body_TLA1_co.paa",
			"rhsgref\addons\rhsgref_vehicles_ret\data\tla\btr60_details_TLA1_co.paa",
			"",
			"rhsafrf\addons\rhs_btr70\habar\data\sa_gear_02_co.paa",
			"rhsafrf\addons\rhs_btr70\habar\data\sa_gear_02_co.paa"
	};
	
	class textureSources
	{
		class tlastandard
		{
			displayName="TLA Standard";
			textures[]=
			{
				"rhsgref\addons\rhsgref_vehicles_ret\data\tla\btr60_body_TLA1_co.paa",
				"rhsgref\addons\rhsgref_vehicles_ret\data\tla\btr60_details_TLA1_co.paa"
			};
			factions[]=// This source should be available only for these factions
			{
				rhsgref_faction_tla
			};
		};
		class tlacamo01 : tlastandard
		{
			displayName="TLA Camo";
			textures[]=
			{
				"rhsgref\addons\rhsgref_vehicles_ret\data\tla\btr60_body_TLA2_co.paa",
				"rhsgref\addons\rhsgref_vehicles_ret\data\tla\btr60_details_TLA2_co.paa"
			};
			factions[]=// This source should be available only for these factions
			{
				rhsgref_faction_tla
			};
		};
	};
	
	textureList[]=
	{
		"tlastandard", 0.5,
		"tlacamo01", 0.5
	};
};

//Technicals
class rhsgref_tla_offroad: I_G_Offroad_01_F
{
	//EdPrev(rhsgref_tla_offroad)
	CREW_TLA_INF
	
	typicalCargo[]=
	{
		"rhsgref_tla_rifleman"
	};
	
	scope = 2;
	scopeCurator = 2;
	
	textureList[]=
	{
		"Guerilla_01",
		2,
		"Guerilla_02",
		0.5,
		"Guerilla_04",
		0.5,
		"Guerilla_05",
		1,
		"Guerilla_07",
		0.5,
		"Guerilla_08",
		0.5,
		"Guerilla_09",
		0.5
	};
	animationList[]=
	{
		"HideDoor1",
		0.33333299,
		"HideDoor2",
		0.33333299,
		"HideDoor3",
		0.33333299,
		"HideBumper1",
		0.5,
		"HideBumper2",
		0.5
	};
	class EventHandlers: EventHandlers
	{
		class RHS_EventHandlers
		{
			postInit = "_this call rhs_fnc_reapplyTextures";
		};
	};
};
class rhsgref_tla_offroad_armed: I_G_Offroad_01_armed_F
{
	//EdPrev(rhsgref_tla_offroad_armed)
	CREW_TLA_INF
	
	typicalCargo[]=
	{
		"rhsgref_tla_rifleman"
	};
	
	scope = 2;
	scopeCurator = 2;
	
	textureList[]=
	{
		"Guerilla_01",
		2,
		"Guerilla_02",
		0.5,
		"Guerilla_04",
		0.5,
		"Guerilla_05",
		1,
		"Guerilla_07",
		0.5,
		"Guerilla_08",
		0.5,
		"Guerilla_09",
		0.5
	};
	animationList[]=
	{
		"HideDoor1",
		0.33333299,
		"HideDoor2",
		0.33333299,
		"HideDoor3",
		0.33333299,
		"HideBumper1",
		0.5,
		"HideBumper2",
		0.5,
		"Hide_Shield",
		0.1
	};
	
	class AnimationSources: AnimationSources
	{
		class ReloadAnim
		{
			source = "reload";
			weapon = "RHS_M2_offroad";
		};
		class ReloadMagazine
		{
			source = "reloadmagazine";
			weapon = "RHS_M2_offroad";
		};
		class Revolving
		{
			source = "revolving";
			weapon = "RHS_M2_offroad";
		};
		class muzzle_rot_MG
		{
			source = "ammorandom";
			weapon = "RHS_M2_offroad";
		};
		class muzzle_hide_MG
		{
			source = "reload";
			weapon = "RHS_M2_offroad";
		};
	};
	
	class Turrets: Turrets
	{
		class M2_Turret: M2_Turret
		{
			weapons[] = 
			{
				"RHS_M2_offroad"
			};
			magazines[] =
			{
				"rhs_mag_100rnd_127x99_mag_Tracer_Red",
				"rhs_mag_100rnd_127x99_mag_Tracer_Red",
				"rhs_mag_100rnd_127x99_mag_Tracer_Red",
				"rhs_mag_100rnd_127x99_mag_Tracer_Red",
				"rhs_mag_100rnd_127x99_mag_Tracer_Red",
				"rhs_mag_100rnd_127x99_mag_Tracer_Red"
			};
		};
	};
	class EventHandlers: EventHandlers
	{
		class RHS_EventHandlers
		{
			postInit = "_this call rhs_fnc_reapplyTextures";
		};
	};
};
class rhsgref_tla_offroad_at: I_G_Offroad_01_AT_F
{
	//EdPrev(rhsgref_tla_offroad_at)
	CREW_TLA_INF
	
	typicalCargo[]=
	{
		"rhsgref_tla_rifleman"
	};
	
	scope = 2;
	scopeCurator = 2;
	
	textureList[]=
	{
		"Guerilla_01",
		2,
		"Guerilla_02",
		0.5,
		"Guerilla_04",
		0.5,
		"Guerilla_05",
		1,
		"Guerilla_07",
		0.5,
		"Guerilla_08",
		0.5,
		"Guerilla_09",
		0.5
	};
	animationList[]=
	{
		"HideDoor1",
		0.33333299,
		"HideDoor2",
		0.33333299,
		"HideDoor3",
		0.33333299,
		"HideBumper1",
		0.5,
		"HideBumper2",
		0.5
	};
	
	class AnimationSources: AnimationSources
	{
		class SPG9_reloadmagazine
		{
			source = "reloadmagazine";
			weapon = "rhs_weap_SPG9";
		};
		class SPG9_reload
		{
			source = "reload";
			weapon = "rhs_weap_SPG9";
		};
	};
	
	class Turrets: Turrets
	{
		class AT_Turret: AT_Turret
		{
			weapons[] =
			{
				"rhs_weap_SPG9"
			};
			magazines[]=
			{
				"rhs_mag_OG9V",
				"rhs_mag_OG9V",
				"rhs_mag_OG9V",
				"rhs_mag_OG9V",
				"rhs_mag_OG9V",
				"rhs_mag_OG9V",
				"rhs_mag_OG9V",
				"rhs_mag_PG9V",
				"rhs_mag_PG9V",
				"rhs_mag_PG9V",
				"rhs_mag_PG9V",
				"rhs_mag_PG9V",
				"rhs_mag_PG9V"
			};
		};
	};
	class EventHandlers: EventHandlers
	{
		class RHS_EventHandlers
		{
			postInit = "_this call rhs_fnc_reapplyTextures";
		};
	};
};

class rhsgref_tla_kraz255b1_cargo_open: rhs_kraz255b1_cargo_open_base
{
	EdPrev(rhsgref_tla_kraz255b1_cargo_open)
	scope			= 2;
	scopeCurator	= 2;
	CREW_TLA_INF
};

//Static Weapons
class rhsgref_tla_2b14 : rhs_2b14_82mm_base
{
	EdPrev(rhsgref_ins_2b14)
	//EdPrev(rhsgref_tla_2b14)
	scope = 2;
	CREW_TLA_INF
};

class rhsgref_tla_DSHKM_Mini_TriPod: rhs_DSHkM_Mini_TriPod_base
{
	EdPrev(rhsgref_ins_DSHKM_Mini_TriPod)
	//EdPrev(rhsgref_tla_DSHKM_Mini_TriPod)
	scope = 2;
	CREW_TLA_INF
};
class rhsgref_tla_DSHKM: rhs_DSHKM_base
{
	EdPrev(rhsgref_ins_DSHKM)
	//EdPrev(rhsgref_tla_DSHKM)
	scope = 2;
	CREW_TLA_INF
};

class rhsgref_tla_SPG9: rhs_SPG9_base
{
	EdPrev(rhsgref_ins_SPG9)
	//EdPrev(rhsgref_tla_SPG9)
	scope = 2;
	CREW_TLA_INF
};

class rhsgref_tla_ZU23: RHS_ZU23_base
{
	EdPrev(rhsgref_ins_ZU23)
	//EdPrev(rhsgref_tla_ZU23)
	scope = 2;
	CREW_TLA_INF
};

#define TLA_INDEP_MACRO \
	faction = rhsgref_faction_tla_g; \
	side = 2; \
	author=$STR_RHS_AUTHOR_FULL;\
	scope = 2;\
	scopeCurator = 2; \
	crew= rhsgref_tla_g_crew;

#define TLA_INDEP_MACRO_INF \
	faction = rhsgref_faction_tla_g; \
	side = 2; \
	author=$STR_RHS_AUTHOR_FULL;\
	scope = 2;\
	scopeCurator = 2; \
	crew= rhsgref_tla_g_rifleman_akms;

class rhsgref_tla_g_btr60: rhsgref_tla_btr60 {TLA_INDEP_MACRO};
class rhsgref_tla_g_offroad: rhsgref_tla_offroad {TLA_INDEP_MACRO_INF};
class rhsgref_tla_g_offroad_armed: rhsgref_tla_offroad_armed {TLA_INDEP_MACRO_INF};
class rhsgref_tla_g_offroad_at: rhsgref_tla_offroad_at {TLA_INDEP_MACRO_INF};
class rhsgref_tla_g_kraz255b1_cargo_open: rhsgref_tla_kraz255b1_cargo_open {TLA_INDEP_MACRO_INF};
class rhsgref_tla_g_2b14: rhsgref_tla_2b14 {TLA_INDEP_MACRO_INF};
class rhsgref_tla_g_DSHKM_Mini_TriPod: rhsgref_tla_DSHKM_Mini_TriPod {TLA_INDEP_MACRO_INF};
class rhsgref_tla_g_DSHKM: rhsgref_tla_DSHKM {TLA_INDEP_MACRO_INF};
class rhsgref_tla_g_SPG9: rhsgref_tla_SPG9 {TLA_INDEP_MACRO_INF};
class rhsgref_tla_g_ZU23: rhsgref_tla_ZU23 {TLA_INDEP_MACRO_INF};