
// ARMY PARA DIGITAL CLASSES
class rhssaf_soldier_army_para_digital_base : rhssaf_soldier_m10_base
{
  DLC_AUTHOR;
  SCOPE_PRIVATE;
  vehicleClass = "rhssaf_vehclass_army_infantry_para";
  editorSubcategory = "rhssaf_EdSubcat_army_infantry_para";
  displayName = $STR_RHSSAF_SOLDIER_ARMY_PARA_DIGITAL_BASE_DISPLAYNAME;
  model = "\rhssaf\addons\rhssaf_m_uniform_m10\rhssaf_uniform_m10_summer";
  hiddenSelections[] = {"Camo"};
  hiddenSelectionsTextures[] = {"\rhssaf\addons\rhssaf_t_uniform_m10\data\rhssaf_uniform_m10_digital_summer_co.paa"};
  uniformClass = "rhssaf_uniform_m10_digital_summer";
  movesFatigue = "rhssaf_fatigue_spec";
  LOADOUT_PARA_BASE;
};

class rhssaf_army_m10_para_rifleman_m21 : rhssaf_soldier_army_para_digital_base
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
  displayName = $STR_RHSSAF_ARMY_M10_PARA_RIFLEMAN_M21_DISPLAYNAME;
  cost = 100000;
  LOADOUT_PARA_RIFLEMAN_M21;
  EDPREV(rhssaf_army_m10_para_rifleman_m21)
};

class rhssaf_army_m10_para_rifleman_g36 : rhssaf_army_m10_para_rifleman_m21
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
  displayName = $STR_RHSSAF_ARMY_M10_PARA_RIFLEMAN_G36_DISPLAYNAME;
  cost = 100000;
  LOADOUT_PARA_RIFLEMAN_G36;
  EDPREV(rhssaf_army_m10_para_rifleman_g36)
};

class rhssaf_army_m10_para_rifleman_hk416 : rhssaf_army_m10_para_rifleman_m21
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
  displayName = $STR_RHSSAF_ARMY_M10_PARA_RIFLEMAN_HK416_DISPLAYNAME;
  cost = 100000;
  LOADOUT_PARA_RIFLEMAN_HK416;
  EDPREV(rhssaf_army_m10_para_rifleman_hk416)
};

class rhssaf_army_m10_para_rifleman_ammo : rhssaf_army_m10_para_rifleman_m21
{
  DLC_AUTHOR;
  SCOPE_PUBLIC;
  displayName = $STR_RHSSAF_ARMY_M10_PARA_RIFLEMAN_AMMO_DISPLAYNAME;
  cost = 110000;
  camouflage = 1.5;
  LOADOUT_PARA_RIFLEMAN_AMMO;
  EDPREV(rhssaf_army_m10_para_rifleman_ammo)
};

class rhssaf_army_m10_para_gl_ag36 : rhssaf_soldier_army_para_digital_base
{
  DLC_AUTHOR;
  SCOPE_PUBLIC;
  displayName = $STR_RHSSAF_ARMY_M10_PARA_GL_AG36_DISPLAYNAME;
  cost = 130000;
  threat[] = {1, 0.3, 0.1};
  LOADOUT_PARA_GND_AG36;
  EDPREV(rhssaf_army_m10_para_gl_ag36)
};

class rhssaf_army_m10_para_gl_m320 : rhssaf_soldier_army_para_digital_base
{
  DLC_AUTHOR;
  SCOPE_PUBLIC;
  displayName = $STR_RHSSAF_ARMY_M10_PARA_GL_M320_DISPLAYNAME;
  cost = 130000;
  threat[] = {1, 0.3, 0.1};
  LOADOUT_PARA_GND_M320;
  EDPREV(rhssaf_army_m10_para_gl_m320)
};

class rhssaf_army_m10_para_mgun_m84 : rhssaf_soldier_army_para_digital_base
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
  displayName = $STR_RHSSAF_ARMY_M10_PARA_MGUN_M84_DISPLAYNAME;
  cost = 110000;
  threat[] = {1, 0.1, 0.3};
  icon = "iconManMG";
  LOADOUT_PARA_MGUN_M84;
  EDPREV(rhssaf_army_m10_para_mgun_m84)
};

class rhssaf_army_m10_para_mgun_minimi : rhssaf_soldier_army_para_digital_base
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
  displayName = $STR_RHSSAF_ARMY_M10_PARA_MGUN_MINIMI_DISPLAYNAME;
  cost = 110000;
  threat[] = {1, 0.1, 0.3};
  icon = "iconManMG";
  LOADOUT_PARA_MGUN_MINIMI;
  EDPREV(rhssaf_army_m10_para_mgun_minimi)
};

class rhssaf_army_m10_para_asst_mgun_m84 : rhssaf_army_m10_para_rifleman_m21
{
  DLC_AUTHOR;
  SCOPE_PUBLIC;
  displayName = $STR_RHSSAF_ARMY_M10_PARA_ASST_MGUN_M84_DISPLAYNAME;
  cost = 110000;
  camouflage = 1.5;
  LOADOUT_PARA_ASST_MGUN_M84;
  EDPREV(rhssaf_army_m10_para_asst_mgun_m84)
};

class rhssaf_army_m10_para_asst_mgun_minimi : rhssaf_army_m10_para_rifleman_m21
{
  DLC_AUTHOR;
  SCOPE_PUBLIC;
  displayName = $STR_RHSSAF_ARMY_M10_PARA_ASST_MGUN_MINIMI_DISPLAYNAME;
  cost = 110000;
  camouflage = 1.5;
  LOADOUT_PARA_ASST_MGUN_MINIMI;
  EDPREV(rhssaf_army_m10_para_asst_mgun_minimi)
};

class rhssaf_army_m10_para_sq_lead : rhssaf_soldier_army_para_digital_base
{
  DLC_AUTHOR;
  SCOPE_PUBLIC;
  displayName = $STR_RHSSAF_ARMY_M10_PARA_SQ_LEAD_DISPLAYNAME;
  cost = 500000;
  camouflage = 1.4;
  icon = "iconManLeader";
  LOADOUT_PARA_NCO;
  EDPREV(rhssaf_army_m10_para_sq_lead)
};

class rhssaf_army_m10_para_ft_lead : rhssaf_army_m10_para_sq_lead
{
  DLC_AUTHOR;
  SCOPE_PUBLIC;
  displayName = $STR_RHSSAF_ARMY_M10_PARA_FT_LEAD_DISPLAYNAME;
  cost = 450000;
  LOADOUT_PARA_NCO;
  EDPREV(rhssaf_army_m10_para_ft_lead)
};

class rhssaf_army_m10_para_sniper_m76 : rhssaf_soldier_army_para_digital_base
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
  displayName = $STR_RHSSAF_ARMY_M10_PARA_SNIPER_M76_DISPLAYNAME;
  cost = 150000;
  LOADOUT_PARA_SNIPER_M76;
  EDPREV(rhssaf_army_m10_para_sniper_m76)
};

class rhssaf_army_m10_para_sniper_scarH : rhssaf_soldier_army_para_digital_base
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
  displayName = $STR_RHSSAF_ARMY_M10_PARA_SNIPER_SCARH_DISPLAYNAME;
  cost = 150000;
  LOADOUT_PARA_SNIPER_SCARH;
  EDPREV(rhssaf_army_m10_para_sniper_scarh)
};

class rhssaf_army_m10_para_sniper_m82a1 : rhssaf_army_m10_para_sniper_m76
{
  DLC_AUTHOR;
  SCOPE_PUBLIC;
  displayName = $STR_RHSSAF_ARMY_M10_PARA_SNIPER_M82A1_DISPLAYNAME;
  LOADOUT_PARA_SNIPER_M82A1;
};

class rhssaf_army_m10_para_spotter : rhssaf_army_m10_para_rifleman_m21
{
  DLC_AUTHOR;
  SCOPE_PUBLIC;
  displayName = $STR_RHSSAF_ARMY_M10_PARA_SPOTTER_DISPLAYNAME;
  cost = 110000;
  camouflage = 1.5;
  LOADOUT_PARA_SPOTTER;
  EDPREV(rhssaf_army_m10_para_spotter)
};

class rhssaf_army_m10_para_rifleman_at : rhssaf_soldier_army_para_digital_base
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
  displayName = $STR_RHSSAF_ARMY_M10_PARA_RIFLEMAN_AT_DISPLAYNAME;
  cost = 180000;
  threat[] = {1, 0.5, 0.3};
  icon = "iconManAT";
  role = "MissileSpecialist";
  secondaryAmmoCoef = 0.5;
  LOADOUT_PARA_RIFLEMAN_AT;
  EDPREV(rhssaf_army_m10_para_rifleman_at)
};

class rhssaf_army_m10_para_spec_at : rhssaf_army_m10_para_rifleman_at
{
  DLC_AUTHOR;
  SCOPE_PUBLIC;
  displayName = $STR_RHSSAF_ARMY_M10_PARA_SPEC_AT_DISPLAYNAME;
  cost = 190000;
  threat[] = {1, 0.7, 0.3};
  LOADOUT_PARA_SPEC_AT;
  EDPREV(rhssaf_army_m10_para_spec_at)
  class EventHandlers : EventHandlers
  {
    class RHSSAF_EventHandlers
    {
      init = "_this call rhs_fnc_smaw_init;";
      respawn = "_this call rhs_fnc_smaw_init;";
    };
  };
};

class rhssaf_army_m10_para_spec_aa : rhssaf_army_m10_para_rifleman_at
{
  DLC_AUTHOR;
  SCOPE_PUBLIC;
  displayName = $STR_RHSSAF_ARMY_M10_PARA_SPEC_AA_DISPLAYNAME;
  cost = 200000;
  threat[] = {1, 0.1, 0.7};
  LOADOUT_PARA_SPEC_AA;
  EDPREV(rhssaf_army_m10_para_spec_aa)
};

class rhssaf_army_m10_para_asst_spec_at : rhssaf_army_m10_para_rifleman_m21
{
  DLC_AUTHOR;
  SCOPE_PUBLIC;
  displayName = $STR_RHSSAF_ARMY_M10_PARA_ASST_SPEC_AT_DISPLAYNAME;
  cost = 110000;
  camouflage = 1.5;
  LOADOUT_PARA_ASST_SPEC_AT;
  EDPREV(rhssaf_army_m10_para_asst_spec_at)
};

class rhssaf_army_m10_para_asst_spec_aa : rhssaf_army_m10_para_rifleman_m21
{
  DLC_AUTHOR;
  SCOPE_PUBLIC;
  displayName = $STR_RHSSAF_ARMY_M10_PARA_ASST_SPEC_AA_DISPLAYNAME;
  cost = 110000;
  camouflage = 1.5;
  LOADOUT_PARA_ASST_SPEC_AA;
  EDPREV(rhssaf_army_m10_para_asst_spec_aa)
};

class rhssaf_army_m10_para_medic : rhssaf_soldier_army_para_digital_base
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
  displayName = $STR_RHSSAF_ARMY_M10_PARA_MEDIC_DISPLAYNAME;
  attendant = 1;
  cost = 300000;
  camouflage = 1.6;
  icon = "iconManMedic";
  role = "CombatLifeSaver";
  picture = "pictureHeal";
  LOADOUT_PARA_MEDIC;
  EDPREV(rhssaf_army_m10_para_medic)
};

class rhssaf_army_m10_para_repair : rhssaf_soldier_army_para_digital_base
{
  DLC_AUTHOR;
  SCOPE_PUBLIC;
  displayName = $STR_RHSSAF_ARMY_M10_PARA_REPAIR_DISPLAYNAME;
  engineer = 1;
  detectSkill = 40;
  cost = 220000;
  camouflage = 1.6;
  icon = "iconManEngineer";
  role = "Sapper";
  picture = "pictureRepair";
  LOADOUT_PARA_MECHANIC;
  EDPREV(rhssaf_army_m10_para_repair)
};

class rhssaf_army_m10_para_exp : rhssaf_soldier_army_para_digital_base
{
  DLC_AUTHOR;
  SCOPE_PUBLIC;
  displayName = $STR_RHSSAF_ARMY_M10_PARA_EXP_DISPLAYNAME;
  cost = 115000;
  camouflage = 1.6;
  canDeactivateMines = 1;
  detectSkill = 80;
  threat[] = {1, 0.5, 0.1};
  icon = "iconManExplosive";
  role = "Sapper";
  picture = "pictureExplosive";
  LOADOUT_PARA_EXP_SPEC;
  EDPREV(rhssaf_army_m10_para_exp)
};

class rhssaf_army_m10_para_engineer : rhssaf_soldier_army_para_digital_base
{
  DLC_AUTHOR;
  SCOPE_PUBLIC;
  displayName = $STR_RHSSAF_ARMY_M10_PARA_ENGINEER_DISPLAYNAME;
  engineer = 1;
  cost = 220000;
  camouflage = 1.6;
  canDeactivateMines = 1;
  detectSkill = 60;
  threat[] = {1, 0.5, 0.1};
  icon = "iconManEngineer";
  role = "Sapper";
  picture = "pictureRepair";
  LOADOUT_PARA_ENGINEER;
  EDPREV(rhssaf_army_m10_para_engineer)
};

class rhssaf_army_m10_para_crew : rhssaf_soldier_army_para_digital_base
{
  DLC_AUTHOR;
  SCOPE_PUBLIC;
  displayName = $STR_RHSSAF_ARMY_M10_PARA_CREW_DISPLAYNAME;
  camouflage = 1.6;
  cost = 90000;
  role = "Crewman";
  LOADOUT_PARA_CREW;
  EDPREV(rhssaf_army_m10_para_crew)
};

class rhssaf_army_m10_para_officer : rhssaf_soldier_army_para_digital_base
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
  displayName = $STR_RHSSAF_ARMY_M10_PARA_OFFICER_DISPLAYNAME;
  cost = 600000;
  camouflage = 1.6;
  icon = "iconManOfficer";
  role = "Rifleman";
  LOADOUT_PARA_CO;
  EDPREV(rhssaf_army_m10_para_officer)
};
