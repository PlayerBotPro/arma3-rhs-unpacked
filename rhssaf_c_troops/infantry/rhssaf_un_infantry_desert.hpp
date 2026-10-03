
// UN DESERT CLASSES
class rhssaf_soldier_un_desert_base : rhssaf_soldier_m10_base
{
  DLC_AUTHOR;
  SCOPE_PRIVATE;
  faction = "rhssaf_faction_un";
  vehicleClass = "rhssaf_vehclass_un_infantry_desert";
  editorSubcategory = "rhssaf_EdSubcat_un_infantry_desert";
  displayName = $STR_RHSSAF_SOLDIER_UN_DESERT_BASE_DISPLAYNAME;
  hiddenSelections[] = {"Camo"};
  hiddenSelectionsTextures[] = {"\rhssaf\addons\rhssaf_t_uniform_m10\data\rhssaf_uniform_m10_digital_desert_co.paa"};
  uniformClass = "rhssaf_uniform_m10_digital_desert";
  LOADOUT_UN_RIFLEMAN_M70;
};

class rhssaf_un_m10_digital_desert_rifleman_m21 : rhssaf_soldier_un_desert_base
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
  displayName = $STR_RHSSAF_UN_M10_DIGITAL_DESERT_RIFLEMAN_M21_DISPLAYNAME;
  cost = 100000;
  LOADOUT_UN_RIFLEMAN_M21;
  EDPREV(rhssaf_un_m10_digital_desert_rifleman_m21)
};

class rhssaf_un_m10_digital_desert_rifleman_m70 : rhssaf_un_m10_digital_desert_rifleman_m21
{
  DLC_AUTHOR;
  SCOPE_PUBLIC;
  displayName = $STR_RHSSAF_UN_M10_DIGITAL_DESERT_RIFLEMAN_M70_DISPLAYNAME;
  cost = 100000;
  LOADOUT_UN_RIFLEMAN_M70;
  EDPREV(rhssaf_un_m10_digital_desert_rifleman_m70)
};

class rhssaf_un_m10_digital_desert_rifleman_ammo : rhssaf_un_m10_digital_desert_rifleman_m21
{
  DLC_AUTHOR;
  SCOPE_PUBLIC;
  displayName = $STR_RHSSAF_UN_M10_DIGITAL_DESERT_RIFLEMAN_AMMO_DISPLAYNAME;
  cost = 110000;
  camouflage = 1.5;
  LOADOUT_UN_RIFLEMAN_AMMO;
  EDPREV(rhssaf_un_m10_digital_desert_rifleman_ammo)
};

class rhssaf_un_m10_digital_desert_gl : rhssaf_soldier_un_desert_base
{
  DLC_AUTHOR;
  SCOPE_PUBLIC;
  displayName = $STR_RHSSAF_UN_M10_DIGITAL_DESERT_GL_DISPLAYNAME;
  cost = 130000;
  threat[] = {1, 0.3, 0.1};
  LOADOUT_UN_GND_M21_PBG;
  EDPREV(rhssaf_un_m10_digital_desert_gl)
};

class rhssaf_un_m10_digital_desert_mgun_m84 : rhssaf_soldier_un_desert_base
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
  displayName = $STR_RHSSAF_UN_M10_DIGITAL_DESERT_MGUN_M84_DISPLAYNAME;
  cost = 110000;
  threat[] = {1, 0.1, 0.3};
  icon = "iconManMG";
  LOADOUT_UN_MGUN_M84;
  EDPREV(rhssaf_un_m10_digital_desert_mgun_m84)
};

class rhssaf_un_m10_digital_desert_asst_mgun : rhssaf_un_m10_digital_desert_rifleman_m21
{
  DLC_AUTHOR;
  SCOPE_PUBLIC;
  displayName = $STR_RHSSAF_UN_M10_DIGITAL_DESERT_ASST_MGUN_DISPLAYNAME;
  cost = 110000;
  camouflage = 1.5;
  LOADOUT_UN_ASST_MGUN_M84;
  EDPREV(rhssaf_un_m10_digital_desert_asst_mgun)
};

class rhssaf_un_m10_digital_desert_sq_lead : rhssaf_soldier_un_desert_base
{
  DLC_AUTHOR;
  SCOPE_PUBLIC;
  displayName = $STR_RHSSAF_UN_M10_DIGITAL_DESERT_SQ_LEAD_DISPLAYNAME;
  cost = 500000;
  camouflage = 1.4;
  icon = "iconManLeader";
  LOADOUT_UN_NCO;
  EDPREV(rhssaf_un_m10_digital_desert_sq_lead)
};

class rhssaf_un_m10_digital_desert_ft_lead : rhssaf_un_m10_digital_desert_sq_lead
{
  DLC_AUTHOR;
  SCOPE_PUBLIC;
  displayName = $STR_RHSSAF_UN_M10_DIGITAL_DESERT_FT_LEAD_DISPLAYNAME;
  cost = 450000;
  LOADOUT_UN_NCO;
  EDPREV(rhssaf_un_m10_digital_desert_ft_lead)
};

class rhssaf_un_m10_digital_desert_sniper_m76 : rhssaf_soldier_un_desert_base
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
  displayName = $STR_RHSSAF_UN_M10_DIGITAL_DESERT_SNIPER_M76_DISPLAYNAME;
  cost = 150000;
  LOADOUT_UN_SNIPER_M76;
  EDPREV(rhssaf_un_m10_digital_desert_sniper_m76)
};

class rhssaf_un_m10_digital_desert_spotter : rhssaf_un_m10_digital_desert_rifleman_m21
{
  DLC_AUTHOR;
  SCOPE_PUBLIC;
  displayName = $STR_RHSSAF_UN_M10_DIGITAL_DESERT_SPOTTER_DISPLAYNAME;
  cost = 110000;
  camouflage = 1.5;
  LOADOUT_UN_SPOTTER;
  EDPREV(rhssaf_un_m10_digital_desert_spotter)
};

class rhssaf_un_m10_digital_desert_rifleman_at : rhssaf_soldier_un_desert_base
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
  displayName = $STR_RHSSAF_UN_M10_DIGITAL_DESERT_RIFLEMAN_AT_DISPLAYNAME;
  cost = 180000;
  threat[] = {1, 0.5, 0.3};
  icon = "iconManAT";
  role = "MissileSpecialist";
  secondaryAmmoCoef = 0.5;
  LOADOUT_UN_RIFLEMAN_AT;
  EDPREV(rhssaf_un_m10_digital_desert_rifleman_at)
};

class rhssaf_un_m10_digital_desert_spec_at : rhssaf_un_m10_digital_desert_rifleman_at
{
  DLC_AUTHOR;
  SCOPE_PUBLIC;
  displayName = $STR_RHSSAF_UN_M10_DIGITAL_DESERT_SPEC_AT_DISPLAYNAME;
  cost = 190000;
  threat[] = {1, 0.7, 0.3};
  LOADOUT_UN_SPEC_AT;
  EDPREV(rhssaf_un_m10_digital_desert_spec_at)
  class EventHandlers : EventHandlers
  {
    class RHSSAF_EventHandlers
    {
      init = "_this call rhs_fnc_smaw_init;";
      respawn = "_this call rhs_fnc_smaw_init;";
    };
  };
};

class rhssaf_un_m10_digital_desert_spec_aa : rhssaf_un_m10_digital_desert_rifleman_at
{
  DLC_AUTHOR;
  SCOPE_PUBLIC;
  displayName = $STR_RHSSAF_UN_M10_DIGITAL_DESERT_SPEC_AA_DISPLAYNAME;
  cost = 200000;
  threat[] = {1, 0.1, 0.7};
  LOADOUT_UN_SPEC_AA;
  EDPREV(rhssaf_un_m10_digital_desert_spec_aa)
};

class rhssaf_un_m10_digital_desert_asst_spec_at : rhssaf_un_m10_digital_desert_rifleman_m21
{
  DLC_AUTHOR;
  SCOPE_PUBLIC;
  displayName = $STR_RHSSAF_UN_M10_DIGITAL_DESERT_ASST_SPEC_AT_DISPLAYNAME;
  cost = 110000;
  camouflage = 1.5;
  LOADOUT_UN_ASST_SPEC_AT;
  EDPREV(rhssaf_un_m10_digital_desert_asst_spec_at)
};

class rhssaf_un_m10_digital_desert_asst_spec_aa : rhssaf_un_m10_digital_desert_rifleman_m21
{
  DLC_AUTHOR;
  SCOPE_PUBLIC;
  displayName = $STR_RHSSAF_UN_M10_DIGITAL_DESERT_ASST_SPEC_AA_DISPLAYNAME;
  cost = 110000;
  camouflage = 1.5;
  LOADOUT_UN_ASST_SPEC_AA;
  EDPREV(rhssaf_un_m10_digital_desert_asst_spec_aa)
};

class rhssaf_un_m10_digital_desert_medic : rhssaf_soldier_un_desert_base
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
  displayName = $STR_RHSSAF_UN_M10_DIGITAL_DESERT_MEDIC_DISPLAYNAME;
  attendant = 1;
  cost = 300000;
  camouflage = 1.6;
  icon = "iconManMedic";
  role = "CombatLifeSaver";
  picture = "pictureHeal";
  LOADOUT_UN_MEDIC;
  EDPREV(rhssaf_un_m10_digital_desert_medic)
};

class rhssaf_un_m10_digital_desert_repair : rhssaf_soldier_un_desert_base
{
  DLC_AUTHOR;
  SCOPE_PUBLIC;
  displayName = $STR_RHSSAF_UN_M10_DIGITAL_DESERT_REPAIR_DISPLAYNAME;
  engineer = 1;
  detectSkill = 40;
  cost = 220000;
  camouflage = 1.6;
  icon = "iconManEngineer";
  role = "Sapper";
  picture = "pictureRepair";
  LOADOUT_UN_MECHANIC;
  EDPREV(rhssaf_un_m10_digital_desert_repair)
};

class rhssaf_un_m10_digital_desert_exp : rhssaf_soldier_un_desert_base
{
  DLC_AUTHOR;
  SCOPE_PUBLIC;
  displayName = $STR_RHSSAF_UN_M10_DIGITAL_DESERT_EXP_DISPLAYNAME;
  cost = 115000;
  camouflage = 1.6;
  canDeactivateMines = 1;
  detectSkill = 80;
  threat[] = {1, 0.5, 0.1};
  icon = "iconManExplosive";
  role = "Sapper";
  picture = "pictureExplosive";
  LOADOUT_UN_EXP_SPEC;
  EDPREV(rhssaf_un_m10_digital_desert_exp)
};

class rhssaf_un_m10_digital_desert_engineer : rhssaf_soldier_un_desert_base
{
  DLC_AUTHOR;
  SCOPE_PUBLIC;
  displayName = $STR_RHSSAF_UN_M10_DIGITAL_DESERT_ENGINEER_DISPLAYNAME;
  engineer = 1;
  cost = 220000;
  camouflage = 1.6;
  canDeactivateMines = 1;
  detectSkill = 60;
  threat[] = {1, 0.5, 0.1};
  icon = "iconManEngineer";
  role = "Sapper";
  picture = "pictureRepair";
  LOADOUT_UN_ENGINEER;
  EDPREV(rhssaf_un_m10_digital_desert_engineer)
};

class rhssaf_un_m10_digital_desert_crew : rhssaf_soldier_un_desert_base
{
  DLC_AUTHOR;
  SCOPE_PUBLIC;
  displayName = $STR_RHSSAF_UN_M10_DIGITAL_DESERT_CREW_DISPLAYNAME;
  camouflage = 1.6;
  cost = 90000;
  role = "Crewman";
  LOADOUT_UN_CREW;
  EDPREV(rhssaf_un_m10_digital_desert_crew)
};

class rhssaf_un_m10_digital_desert_officer : rhssaf_soldier_un_desert_base
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
  displayName = $STR_RHSSAF_UN_M10_DIGITAL_DESERT_OFFICER_DISPLAYNAME;
  cost = 600000;
  camouflage = 1.6;
  icon = "iconManOfficer";
  role = "Rifleman";
  LOADOUT_UN_CO;
  EDPREV(rhssaf_un_m10_digital_desert_officer)
};
