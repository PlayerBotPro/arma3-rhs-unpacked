
// ARMY OAKLEAF CLASSES
class rhssaf_soldier_army_oakleaf_base : rhssaf_soldier_m93_base
{
  DLC_AUTHOR;
  SCOPE_PRIVATE;
  vehicleClass = "rhssaf_vehclass_army_infantry_oakleaf";
  editorSubcategory = "rhssaf_EdSubcat_army_infantry_oakleaf";
  displayName = $STR_RHSSAF_SOLDIER_ARMY_OAKLEAF_BASE_DISPLAYNAME;
  model = "\rhssaf\addons\rhssaf_m_uniform_m93\rhssaf_uniform_m93";
  hiddenSelections[] = {"Camo"};
  hiddenSelectionsTextures[] = {"\rhssaf\addons\rhssaf_t_uniform_m93\data\rhssaf_uniform_m93_oakleaf_co.paa"};
  uniformClass = "rhssaf_uniform_m93_oakleaf";
  LOADOUT_ARMY_M93_BASE;
};

class rhssaf_soldier_army_oakleaf_summer_base : rhssaf_soldier_m93_base
{
  DLC_AUTHOR;
  SCOPE_PRIVATE;
  editorSubcategory = "rhssaf_EdSubcat_army_infantry_oakleaf";
  vehicleClass = "rhssaf_vehclass_army_infantry_oakleaf";
  displayName = $STR_RHSSAF_SOLDIER_ARMY_OAKLEAF_SUMMER_BASE_DISPLAYNAME;
  model = "\rhssaf\addons\rhssaf_m_uniform_m93\rhssaf_uniform_m93";
  hiddenSelections[] = {"Camo"};
  hiddenSelectionsTextures[] = {"\rhssaf\addons\rhssaf_t_uniform_m93\data\rhssaf_uniform_m93_oakleaf_summer_co.paa"};
  uniformClass = "rhssaf_uniform_m93_oakleaf_summer";
  LOADOUT_ARMY_M93_BASE;
};

class rhssaf_army_m93_oakleaf_summer_rifleman_m21 : rhssaf_soldier_army_oakleaf_summer_base
{
  DLC_AUTHOR;
  SCOPE_PUBLIC;
  class SpeechVariants
  {
    class Default
    {
      speechSingular[] = {"veh_infantry_s"};
      speechPlural[] = {"veh_infantry_p"};
    };
  };
  textSingular = "infantry";
  textPlural = "infantry";
  nameSound = "veh_infantry_s";
  displayName = $STR_RHSSAF_ARMY_M93_OAKLEAF_SUMMER_RIFLEMAN_M21_DISPLAYNAME;
  cost = 100000;
  LOADOUT_ARMY_M93_RIFLEMAN_M21;
  EDPREV(rhssaf_army_m93_oakleaf_summer_rifleman_m21)
};

class rhssaf_army_m93_oakleaf_summer_rifleman_m70 : rhssaf_army_m93_oakleaf_summer_rifleman_m21
{
  DLC_AUTHOR;
  SCOPE_PUBLIC;
  displayName = $STR_RHSSAF_ARMY_M93_OAKLEAF_SUMMER_RIFLEMAN_M70_DISPLAYNAME;
  LOADOUT_ARMY_M93_RIFLEMAN_M70;
  EDPREV(rhssaf_army_m93_oakleaf_summer_rifleman_m70)
};

class rhssaf_army_m93_oakleaf_summer_rifleman_ammo : rhssaf_army_m93_oakleaf_summer_rifleman_m21
{
  DLC_AUTHOR;
  SCOPE_PUBLIC;
  displayName = $STR_RHSSAF_ARMY_M93_OAKLEAF_SUMMER_RIFLEMAN_AMMO_DISPLAYNAME;
  cost = 110000;
  camouflage = 1.5;
  LOADOUT_ARMY_M93_RIFLEMAN_AMMO;
  EDPREV(rhssaf_army_m93_oakleaf_summer_rifleman_ammo)
};

class rhssaf_army_m93_oakleaf_summer_gl : rhssaf_soldier_army_oakleaf_summer_base
{
  DLC_AUTHOR;
  SCOPE_PUBLIC;
  displayName = $STR_RHSSAF_ARMY_M93_OAKLEAF_SUMMER_GL_DISPLAYNAME;
  cost = 130000;
  threat[] = {1, 0.3, 0.1};
  LOADOUT_ARMY_M93_GND_M70_PBG;
  EDPREV(rhssaf_army_m93_oakleaf_summer_gl)
};

class rhssaf_army_m93_oakleaf_summer_mgun_m84 : rhssaf_soldier_army_oakleaf_summer_base
{
  DLC_AUTHOR;
  SCOPE_PUBLIC;
  class SpeechVariants
  {
    class Default
    {
      speechSingular[] = {"veh_infantry_MG_s"};
      speechPlural[] = {"veh_infantry_MG_p"};
    };
  };
  textSingular = "machinegunner";
  textPlural = "machinegunners";
  nameSound = "veh_infantry_MG_s";
  displayName = $STR_RHSSAF_ARMY_M93_OAKLEAF_SUMMER_MGUN_M84_DISPLAYNAME;
  cost = 110000;
  threat[] = {1, 0.1, 0.3};
  icon = "iconManMG";
  LOADOUT_ARMY_M93_MGUN_M84;
  EDPREV(rhssaf_army_m93_oakleaf_summer_mgun_m84)
};

class rhssaf_army_m93_oakleaf_summer_asst_mgun : rhssaf_army_m93_oakleaf_summer_rifleman_m21
{
  DLC_AUTHOR;
  SCOPE_PUBLIC;
  displayName = $STR_RHSSAF_ARMY_M93_OAKLEAF_SUMMER_ASST_MGUN_DISPLAYNAME;
  cost = 110000;
  camouflage = 1.5;
  LOADOUT_ARMY_M93_ASST_MGUN_M84;
  EDPREV(rhssaf_army_m93_oakleaf_summer_asst_mgun)
};

class rhssaf_army_m93_oakleaf_summer_sq_lead : rhssaf_soldier_army_oakleaf_summer_base
{
  DLC_AUTHOR;
  SCOPE_PUBLIC;
  displayName = $STR_RHSSAF_ARMY_M93_OAKLEAF_SUMMER_SQ_LEAD_DISPLAYNAME;
  cost = 500000;
  camouflage = 1.4;
  icon = "iconManLeader";
  LOADOUT_ARMY_M93_NCO;
  EDPREV(rhssaf_army_m93_oakleaf_summer_sq_lead)
};

class rhssaf_army_m93_oakleaf_summer_ft_lead : rhssaf_army_m93_oakleaf_summer_sq_lead
{
  DLC_AUTHOR;
  SCOPE_PUBLIC;
  displayName = $STR_RHSSAF_ARMY_M93_OAKLEAF_SUMMER_FT_LEAD_DISPLAYNAME;
  cost = 450000;
  LOADOUT_ARMY_M93_NCO;
  EDPREV(rhssaf_army_m93_oakleaf_summer_ft_lead)
};

class rhssaf_army_m93_oakleaf_summer_sniper_m76 : rhssaf_soldier_army_oakleaf_summer_base
{
  DLC_AUTHOR;
  SCOPE_PUBLIC;
  class SpeechVariants
  {
    class Default
    {
      speechSingular[] = {"veh_infantry_sniper_s"};
      speechPlural[] = {"veh_infantry_sniper_p"};
    };
  };
  textSingular = "sniper";
  textPlural = "snipers";
  nameSound = "veh_infantry_sniper_s";
  displayName = $STR_RHSSAF_ARMY_M93_OAKLEAF_SUMMER_SNIPER_M76_DISPLAYNAME;
  cost = 150000;
  LOADOUT_ARMY_M93_SNIPER_M76;
  EDPREV(rhssaf_army_m93_oakleaf_summer_sniper_m76)
};

class rhssaf_army_m93_oakleaf_summer_spotter : rhssaf_army_m93_oakleaf_summer_rifleman_m21
{
  DLC_AUTHOR;
  SCOPE_PUBLIC;
  displayName = $STR_RHSSAF_ARMY_M93_OAKLEAF_SUMMER_SPOTTER_DISPLAYNAME;
  cost = 110000;
  camouflage = 1.5;
  LOADOUT_ARMY_M93_SPOTTER;
  EDPREV(rhssaf_army_m93_oakleaf_summer_spotter)
};

class rhssaf_army_m93_oakleaf_summer_rifleman_at : rhssaf_soldier_army_oakleaf_summer_base
{
  DLC_AUTHOR;
  SCOPE_PUBLIC;
  class SpeechVariants
  {
    class Default
    {
      speechSingular[] = {"veh_infantry_AT_s"};
      speechPlural[] = {"veh_infantry_AT_p"};
    };
  };
  textSingular = "AT soldier";
  textPlural = "AT soldiers";
  nameSound = "veh_infantry_AT_s";
  displayName = $STR_RHSSAF_ARMY_M93_OAKLEAF_SUMMER_RIFLEMAN_AT_DISPLAYNAME;
  cost = 180000;
  threat[] = {1, 0.5, 0.3};
  icon = "iconManAT";
  role = "MissileSpecialist";
  secondaryAmmoCoef = 0.5;
  LOADOUT_ARMY_M93_RIFLEMAN_AT;
  EDPREV(rhssaf_army_m93_oakleaf_summer_rifleman_at)
};

class rhssaf_army_m93_oakleaf_summer_spec_at : rhssaf_army_m93_oakleaf_summer_rifleman_at
{
  DLC_AUTHOR;
  SCOPE_PUBLIC;
  displayName = $STR_RHSSAF_ARMY_M93_OAKLEAF_SUMMER_SPEC_AT_DISPLAYNAME;
  cost = 190000;
  threat[] = {1, 0.7, 0.3};
  LOADOUT_ARMY_M93_SPEC_AT;
  EDPREV(rhssaf_army_m93_oakleaf_summer_spec_at)
  class EventHandlers : EventHandlers
  {
    class RHSSAF_EventHandlers
    {
      init = "_this call rhs_fnc_smaw_init;";
      respawn = "_this call rhs_fnc_smaw_init;";
    };
  };
};

class rhssaf_army_m93_oakleaf_summer_spec_aa : rhssaf_army_m93_oakleaf_summer_rifleman_at
{
  DLC_AUTHOR;
  SCOPE_PUBLIC;
  displayName = $STR_RHSSAF_ARMY_M93_OAKLEAF_SUMMER_SPEC_AA_DISPLAYNAME;
  cost = 200000;
  threat[] = {1, 0.1, 0.7};
  LOADOUT_ARMY_M93_SPEC_AA;
  EDPREV(rhssaf_army_m93_oakleaf_summer_spec_aa)
};

class rhssaf_army_m93_oakleaf_summer_asst_spec_at : rhssaf_army_m93_oakleaf_summer_rifleman_m21
{
  DLC_AUTHOR;
  SCOPE_PUBLIC;
  displayName = $STR_RHSSAF_ARMY_M93_OAKLEAF_SUMMER_ASST_SPEC_AT_DISPLAYNAME;
  cost = 110000;
  camouflage = 1.5;
  LOADOUT_ARMY_M93_ASST_SPEC_AT;
  EDPREV(rhssaf_army_m93_oakleaf_summer_asst_spec_at)
};

class rhssaf_army_m93_oakleaf_summer_asst_spec_aa : rhssaf_army_m93_oakleaf_summer_rifleman_m21
{
  DLC_AUTHOR;
  SCOPE_PUBLIC;
  displayName = $STR_RHSSAF_ARMY_M93_OAKLEAF_SUMMER_ASST_SPEC_AA_DISPLAYNAME;
  cost = 110000;
  camouflage = 1.5;
  LOADOUT_ARMY_M93_ASST_SPEC_AA;
  EDPREV(rhssaf_army_m93_oakleaf_summer_asst_spec_aa)
};

class rhssaf_army_m93_oakleaf_summer_medic : rhssaf_soldier_army_oakleaf_summer_base
{
  DLC_AUTHOR;
  SCOPE_PUBLIC;
  class SpeechVariants
  {
    class Default
    {
      speechSingular[] = {"veh_infantry_medic_s"};
      speechPlural[] = {"veh_infantry_medic_p"};
    };
  };
  textSingular = "medic";
  textPlural = "medics";
  nameSound = "veh_infantry_medic_s";
  displayName = $STR_RHSSAF_ARMY_M93_OAKLEAF_SUMMER_MEDIC_DISPLAYNAME;
  attendant = 1;
  cost = 300000;
  camouflage = 1.6;
  icon = "iconManMedic";
  role = "CombatLifeSaver";
  picture = "pictureHeal";
  LOADOUT_ARMY_M93_MEDIC;
  EDPREV(rhssaf_army_m93_oakleaf_summer_medic)
};

class rhssaf_army_m93_oakleaf_summer_repair : rhssaf_soldier_army_oakleaf_summer_base
{
  DLC_AUTHOR;
  SCOPE_PUBLIC;
  displayName = $STR_RHSSAF_ARMY_M93_OAKLEAF_SUMMER_REPAIR_DISPLAYNAME;
  engineer = 1;
  detectSkill = 40;
  cost = 220000;
  camouflage = 1.6;
  icon = "iconManEngineer";
  role = "Sapper";
  picture = "pictureRepair";
  LOADOUT_ARMY_M93_MECHANIC;
  EDPREV(rhssaf_army_m93_oakleaf_summer_repair)
};

class rhssaf_army_m93_oakleaf_summer_exp : rhssaf_soldier_army_oakleaf_summer_base
{
  DLC_AUTHOR;
  SCOPE_PUBLIC;
  displayName = $STR_RHSSAF_ARMY_M93_OAKLEAF_SUMMER_EXP_DISPLAYNAME;
  cost = 115000;
  camouflage = 1.6;
  canDeactivateMines = 1;
  detectSkill = 80;
  threat[] = {1, 0.5, 0.1};
  icon = "iconManExplosive";
  role = "Sapper";
  picture = "pictureExplosive";
  LOADOUT_ARMY_M93_EXP_SPEC;
  EDPREV(rhssaf_army_m93_oakleaf_summer_exp)
};

class rhssaf_army_m93_oakleaf_summer_engineer : rhssaf_soldier_army_oakleaf_summer_base
{
  DLC_AUTHOR;
  SCOPE_PUBLIC;
  displayName = $STR_RHSSAF_ARMY_M93_OAKLEAF_SUMMER_ENGINEER_DISPLAYNAME;
  engineer = 1;
  cost = 220000;
  camouflage = 1.6;
  canDeactivateMines = 1;
  detectSkill = 60;
  threat[] = {1, 0.5, 0.1};
  icon = "iconManEngineer";
  role = "Sapper";
  picture = "pictureRepair";
  LOADOUT_ARMY_M93_ENGINEER;
  EDPREV(rhssaf_army_m93_oakleaf_summer_engineer)
};

class rhssaf_army_m93_oakleaf_summer_crew : rhssaf_soldier_army_oakleaf_summer_base
{
  DLC_AUTHOR;
  SCOPE_PUBLIC;
  displayName = $STR_RHSSAF_ARMY_M93_OAKLEAF_SUMMER_CREW_DISPLAYNAME;
  camouflage = 1.6;
  cost = 90000;
  role = "Crewman";
  LOADOUT_ARMY_M93_CREW;
  EDPREV(rhssaf_army_m93_oakleaf_summer_crew)
};

class rhssaf_army_m93_oakleaf_summer_officer : rhssaf_soldier_army_oakleaf_summer_base
{
  DLC_AUTHOR;
  SCOPE_PUBLIC;
  class SpeechVariants
  {
    class Default
    {
      speechSingular[] = {"veh_infantry_officer_s"};
      speechPlural[] = {"veh_infantry_officer_p"};
    };
  };
  textSingular = "officer";
  textPlural = "officers";
  nameSound = "veh_infantry_officer_s";
  displayName = $STR_RHSSAF_ARMY_M93_OAKLEAF_SUMMER_OFFICER_DISPLAYNAME;
  cost = 600000;
  camouflage = 1.6;
  icon = "iconManOfficer";
  role = "Rifleman";
  LOADOUT_ARMY_M93_CO;
  EDPREV(rhssaf_army_m93_oakleaf_summer_officer)
};
