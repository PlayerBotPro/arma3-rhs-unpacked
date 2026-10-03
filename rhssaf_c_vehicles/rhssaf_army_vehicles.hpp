#include "rhssaf_M1079.hpp"
#include "rhssaf_M1025.hpp"
#include "rhssaf_M11XX.hpp"

class rhssaf_army_ural : RHS_Ural_Civ_Base
{
	EDPREV(rhssaf_army_ural)
	scope=2;
	displayName = $STR_RHSSAF_ARMY_URAL_DISPLAYNAME;
	crewMacroSAFInf
	class AnimationSources: AnimationSources
	{
			class people_tag_hide: people_tag_hide
			{
				initPhase = 1;
			};
	};
	rhs_decalParameters[]={};
	hiddenSelections[]=
	{
		"camo1",
		"camo2",
		"n1",				// 2 - 4 number system
		"n2",
		"n3",
		"n4",
		"i1",				// 6 - right army
		"i2",				// 7 - left army
		"i3",				// 8 - right platoon
		"i4",
		"numplate","numplate2"
	};
	hiddenSelectionsTextures[] =
	{
		"rhsafrf\addons\rhs_a2port_car\ural\data\ural_kabina_khk_co.paa",
		"rhsafrf\addons\rhs_a2port_car\ural\data\ural_plachta_co.paa"
	};
};

class rhssaf_army_ural_open : RHS_Ural_Open_MSV_01
{
	EDPREV(rhssaf_army_ural_open)
	scope=2;
	displayName = $STR_RHSSAF_ARMY_URAL_OPEN_DISPLAYNAME;
	crewMacroSAFInf
	rhs_decalParameters[]={};
	hiddenSelections[]=
	{
		"camo1",
		"camo2",
		"n1",				// 2 - 4 number system
		"n2",
		"n3",
		"n4",
		"i1",				// 6 - right army
		"i2",				// 7 - left army
		"i3",				// 8 - right platoon
		"i4",
		"numplate","numplate2"
	};
	hiddenSelectionsTextures[] =
	{
		"rhsafrf\addons\rhs_a2port_car\ural\data\ural_kabina_khk_co.paa",
		"rhsafrf\addons\rhs_a2port_car\ural\data\ural_open_co.paa"
	};
};

class rhssaf_army_ural_fuel : RHS_Ural_Fuel_MSV_01
{
	EDPREV(rhssaf_army_ural_fuel)
	scope=2;
	displayName = $STR_RHSSAF_ARMY_URAL_FUEL_DISPLAYNAME;
	crewMacroSAFInf
	rhs_decalParameters[]={};
	hiddenSelections[]=
	{
		"camo1",
		"camo2",
		"n1",				// 2 - 4 number system
		"n2",
		"n3",
		"n4",
		"i1",				// 6 - right army
		"i2",				// 7 - left army
		"i3",				// 8 - right platoon
		"i4",
		"camo3",
		"numplate","numplate2"
	};
	hiddenSelectionsTextures[] =
	{
		"rhsafrf\addons\rhs_a2port_car\ural\data\ural_kabina_khk_co.paa",
		"rhsafrf\addons\rhs_a2port_car\ural\data\ural_open_co.paa",
		"rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa",
		"rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa",
		"rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa",
		"rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa",
		"rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa",
		"rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa",
		"rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa",
		"rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa",
		"rhsafrf\addons\rhs_a2port_car\ural\data\ural_fuel_khk_co.paa"
	};
};

class rhssaf_army_kraz255b1_flatbed : rhs_kraz255b1_flatbed_base
{
	EDPREV(rhssaf_army_kraz255b1_flatbed)
	scope=2;
	crewMacroSAFInf
	rhs_decalParameters[]={};
	hiddenSelections[] =
	{
			"camo1",
			"camo2",
			"camo3"
	};
	hiddenSelectionsTextures[] =
	{
		"rhsafrf\addons\rhs_kraz255\data\kraz255b1_co.paa",
		"rhsafrf\addons\rhs_kraz255\data\kol255_co.paa",
		"rhsafrf\addons\rhs_kraz255\data\kuzov_255_co.paa"
	};
};

class rhssaf_army_kraz255b1_pmp : rhs_kraz255b1_pmp_base
{
	EDPREV(rhssaf_army_kraz255b1_pmp)
	scope=2;
	crewMacroSAFInf
	rhs_decalParameters[]={};
	hiddenSelections[] =
	{
			"camo1",
			"camo2",
			"camo3"
	};
	hiddenSelectionsTextures[] =
	{
		"rhsafrf\addons\rhs_kraz255\data\kraz255b1_co.paa",
		"rhsafrf\addons\rhs_kraz255\data\kol255_co.paa",
		"rhsafrf\addons\rhs_kraz255\data\pmp_tr_co.paa"
	};
};

class rhssaf_army_t72s: rhs_t72bd_tv
{
  EDPREV(rhssaf_army_t72s)
  rhs_decalParameters[]={};
  crewMacroSAFArmored
  scope = 2;
  displayName = $STR_RHSSAF_ARMY_T72S_DISPLAYNAME;
  picture = "\rhsafrf\addons\rhs_t72\icons\t72b3_ca.paa";
	hiddenSelectionsTextures[] =
	{
		"rhsafrf\addons\rhs_t72\data\rhs_t72b3_01_co.paa",
		"rhsafrf\addons\rhs_t72\data\rhs_t72b3_02_co.paa",
		"rhsafrf\addons\rhs_t72\data\rhs_t72b_03_co.paa",
		"rhsafrf\addons\rhs_t72\data\rhs_t72b_04_co.paa",
		"rhsafrf\addons\rhs_t72\data\rhs_t72b_05_co.paa",
		"rhsafrf\addons\rhs_t72\data\rhs_t72b3_turret_co.paa",
		"rhsafrf\addons\rhs_decals\Data\Labels\Misc\no_ca.paa"
	};
	class AnimationSources: AnimationSources
	{
		class hide_com_shield: hide_com_shield
		{
			initPhase=1;
		};
	};
  class Turrets: Turrets
	{
		class MainTurret: MainTurret
		{
			magazines[] =
			{
				"rhs_mag_3bm46_8",
				"rhs_mag_3bk31_3",
				"rhs_mag_3of26_7",
				"rhs_mag_9m119_4",
				"rhs_mag_762x54mm_250",
				"rhs_mag_762x54mm_250",
				"rhs_mag_762x54mm_250",
				"rhs_mag_762x54mm_250",
				"rhs_mag_762x54mm_250",
				"rhs_mag_762x54mm_250",
				"rhs_mag_762x54mm_250",
				"rhs_mag_762x54mm_250",
				"rhs_mag_3d17",
				"rhs_laserfcsmag","rhs_laserfcsmag"
			};
			class Turrets: Turrets
			{
				class CommanderOptics: CommanderOptics
				{
					gunnerType="rhssaf_army_m10_digital_crew_armored_nco";
				};
				class CommanderMG: CommanderMG {};
			};
		};
	};
};

class rhssaf_army_2s1: rhs_2s1tank_base
{
	EDPREV(rhssaf_army_2s1)
	displayName = "$STR_2S1_Name";
	crewMacroSAFArmored
	scope		= 2;
	textureList[]	=
	{
		"RHS_SAF_Camo", 1,
		"light", 0.3
	};

	rhs_decalParameters[]=
	{
		"['Number', cRHS2S1SerbianNumberPlaces,'CDF']"
	};

	class Turrets: Turrets
	{
		class MainTurret: MainTurret
		{
			class Turrets: Turrets
			{
				class CommanderOptics: CommanderOptics
				{
					gunnerType="rhssaf_army_m10_digital_crew_armored_nco";
				};
				class LoaderOptics: LoaderOptics
				{
					gunnerType="rhssaf_army_m10_digital_crew_armored";
				};
			};
		};
	};
};

class rhssaf_army_pts: rhs_pts_vmf
{
	//EdPrev(rhs_pts_vmf)
	displayName = $STR_RHSSAF_ARMY_PTS_DISPLAYNAME;
	crewMacroSAFInf
	scope = 2;
  	rhs_decalParameters[]=
  	{
  		"['Number',cRHSPTSNumberPlaces,'Default']"
  	};
};
