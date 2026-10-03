
// ARMY DIGITAL CLASSES
class rhssaf_soldier_army_digital_base : rhssaf_soldier_m10_base
{
  DLC_AUTHOR;
  SCOPE_PRIVATE;
  displayName = $STR_RHSSAF_SOLDIER_ARMY_DIGITAL_BASE_DISPLAYNAME;
  uniformClass = "rhssaf_uniform_m10_digital";
  LOADOUT_ARMY_M10_BASE;
};

class rhssaf_army_m10_digital_rifleman_m21 : rhssaf_soldier_army_digital_base
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
  displayName = $STR_RHSSAF_ARMY_M10_DIGITAL_RIFLEMAN_M21_DISPLAYNAME;
  cost = 100000;
  LOADOUT_ARMY_M10_RIFLEMAN_M21;
  EDPREV(rhssaf_army_m10_digital_rifleman_m21)
};

class rhssaf_army_m10_digital_rifleman_m70 : rhssaf_army_m10_digital_rifleman_m21
{
  DLC_AUTHOR;
  SCOPE_PUBLIC;
  displayName = $STR_RHSSAF_ARMY_M10_DIGITAL_RIFLEMAN_M70_DISPLAYNAME;
  LOADOUT_ARMY_M10_RIFLEMAN_M70;
  EDPREV(rhssaf_army_m10_digital_rifleman_m70)
};

class rhssaf_army_m10_digital_rifleman_ammo : rhssaf_army_m10_digital_rifleman_m21
{
  DLC_AUTHOR;
  SCOPE_PUBLIC;
  displayName = $STR_RHSSAF_ARMY_M10_DIGITAL_RIFLEMAN_AMMO_DISPLAYNAME;
  cost = 110000;
  camouflage = 1.5;
  LOADOUT_ARMY_M10_RIFLEMAN_AMMO;
  EDPREV(rhssaf_army_m10_digital_rifleman_ammo)
};

class rhssaf_army_m10_digital_gl : rhssaf_soldier_army_digital_base
{
  DLC_AUTHOR;
  SCOPE_PUBLIC;
  displayName = $STR_RHSSAF_ARMY_M10_DIGITAL_GL_DISPLAYNAME;
  cost = 130000;
  threat[] = {1, 0.3, 0.1};
  LOADOUT_ARMY_M10_GND_M21_PBG;
  EDPREV(rhssaf_army_m10_digital_gl)
};

class rhssaf_army_m10_digital_mgun_m84 : rhssaf_soldier_army_digital_base
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
  displayName = $STR_RHSSAF_ARMY_M10_DIGITAL_MGUN_M84_DISPLAYNAME;
  cost = 110000;
  threat[] = {1, 0.1, 0.3};
  icon = "iconManMG";
  LOADOUT_ARMY_M10_MGUN_M84;
  EDPREV(rhssaf_army_m10_digital_mgun_m84)
};

class rhssaf_army_m10_digital_asst_mgun : rhssaf_army_m10_digital_rifleman_m21
{
  DLC_AUTHOR;
  SCOPE_PUBLIC;
  displayName = $STR_RHSSAF_ARMY_M10_DIGITAL_ASST_MGUN_DISPLAYNAME;
  cost = 110000;
  camouflage = 1.5;
  LOADOUT_ARMY_M10_ASST_MGUN_M84;
  EDPREV(rhssaf_army_m10_digital_asst_mgun)
};

class rhssaf_army_m10_digital_sq_lead : rhssaf_soldier_army_digital_base
{
  DLC_AUTHOR;
  SCOPE_PUBLIC;
  displayName = $STR_RHSSAF_ARMY_M10_DIGITAL_SQ_LEAD_DISPLAYNAME;
  cost = 500000;
  camouflage = 1.4;
  icon = "iconManLeader";
  LOADOUT_ARMY_M10_NCO;
  EDPREV(rhssaf_army_m10_digital_sq_lead)
};

class rhssaf_army_m10_digital_ft_lead : rhssaf_army_m10_digital_sq_lead
{
  DLC_AUTHOR;
  SCOPE_PUBLIC;
  displayName = $STR_RHSSAF_ARMY_M10_DIGITAL_FT_LEAD_DISPLAYNAME;
  cost = 450000;
  LOADOUT_ARMY_M10_NCO;
  EDPREV(rhssaf_army_m10_digital_ft_lead)
};

class rhssaf_army_m10_digital_sniper_m76 : rhssaf_soldier_army_digital_base
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
  displayName = $STR_RHSSAF_ARMY_M10_DIGITAL_SNIPER_M76_DISPLAYNAME;
  cost = 150000;
  LOADOUT_ARMY_M10_SNIPER_M76;
  EDPREV(rhssaf_army_m10_digital_sniper_m76)
};

class rhssaf_army_m10_digital_spotter : rhssaf_army_m10_digital_rifleman_m21
{
  DLC_AUTHOR;
  SCOPE_PUBLIC;
  displayName = $STR_RHSSAF_ARMY_M10_DIGITAL_SPOTTER_DISPLAYNAME;
  cost = 110000;
  camouflage = 1.5;
  LOADOUT_ARMY_M10_SPOTTER;
  EDPREV(rhssaf_army_m10_digital_spotter)
};

class rhssaf_army_m10_digital_rifleman_at : rhssaf_soldier_army_digital_base
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
  displayName = $STR_RHSSAF_ARMY_M10_DIGITAL_RIFLEMAN_AT_DISPLAYNAME;
  cost = 180000;
  threat[] = {1, 0.5, 0.3};
  icon = "iconManAT";
  role = "MissileSpecialist";
  secondaryAmmoCoef = 0.5;
  LOADOUT_ARMY_M10_RIFLEMAN_AT;
  EDPREV(rhssaf_army_m10_digital_rifleman_at)
};

class rhssaf_army_m10_digital_spec_at : rhssaf_army_m10_digital_rifleman_at
{
  DLC_AUTHOR;
  SCOPE_PUBLIC;
  displayName = $STR_RHSSAF_ARMY_M10_DIGITAL_SPEC_AT_DISPLAYNAME;
  cost = 190000;
  threat[] = {1, 0.7, 0.3};
  LOADOUT_ARMY_M10_SPEC_AT;
  EDPREV(rhssaf_army_m10_digital_spec_at)
  class EventHandlers : EventHandlers
  {
    class RHSSAF_EventHandlers
    {
      init = "_this call rhs_fnc_smaw_init;";
      respawn = "_this call rhs_fnc_smaw_init;";
    };
  };
};

class rhssaf_army_m10_digital_spec_aa : rhssaf_army_m10_digital_rifleman_at
{
  DLC_AUTHOR;
  SCOPE_PUBLIC;
  displayName = $STR_RHSSAF_ARMY_M10_DIGITAL_SPEC_AA_DISPLAYNAME;
  cost = 200000;
  threat[] = {1, 0.1, 0.7};
  LOADOUT_ARMY_M10_SPEC_AA;
  EDPREV(rhssaf_army_m10_digital_spec_aa)
};

class rhssaf_army_m10_digital_asst_spec_at : rhssaf_army_m10_digital_rifleman_m21
{
  DLC_AUTHOR;
  SCOPE_PUBLIC;
  displayName = $STR_RHSSAF_ARMY_M10_DIGITAL_ASST_SPEC_AT_DISPLAYNAME;
  cost = 110000;
  camouflage = 1.5;
  LOADOUT_ARMY_M10_ASST_SPEC_AT;
  EDPREV(rhssaf_army_m10_digital_asst_spec_at)
};

class rhssaf_army_m10_digital_asst_spec_aa : rhssaf_army_m10_digital_rifleman_m21
{
  DLC_AUTHOR;
  SCOPE_PUBLIC;
  displayName = $STR_RHSSAF_ARMY_M10_DIGITAL_ASST_SPEC_AA_DISPLAYNAME;
  cost = 110000;
  camouflage = 1.5;
  LOADOUT_ARMY_M10_ASST_SPEC_AA;
  EDPREV(rhssaf_army_m10_digital_asst_spec_aa)
};

class rhssaf_army_m10_digital_medic : rhssaf_soldier_army_digital_base
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
  displayName = $STR_RHSSAF_ARMY_M10_DIGITAL_MEDIC_DISPLAYNAME;
  attendant = 1;
  cost = 300000;
  camouflage = 1.6;
  icon = "iconManMedic";
  role = "CombatLifeSaver";
  picture = "pictureHeal";
  LOADOUT_ARMY_M10_MEDIC;
  EDPREV(rhssaf_army_m10_digital_medic)
};

class rhssaf_army_m10_digital_repair : rhssaf_soldier_army_digital_base
{
  DLC_AUTHOR;
  SCOPE_PUBLIC;
  displayName = $STR_RHSSAF_ARMY_M10_DIGITAL_REPAIR_DISPLAYNAME;
  engineer = 1;
  detectSkill = 40;
  cost = 220000;
  camouflage = 1.6;
  icon = "iconManEngineer";
  role = "Sapper";
  picture = "pictureRepair";
  LOADOUT_ARMY_M10_MECHANIC;
  EDPREV(rhssaf_army_m10_digital_repair)
};

class rhssaf_army_m10_digital_exp : rhssaf_soldier_army_digital_base
{
  DLC_AUTHOR;
  SCOPE_PUBLIC;
  displayName = $STR_RHSSAF_ARMY_M10_DIGITAL_EXP_DISPLAYNAME;
  cost = 115000;
  camouflage = 1.6;
  canDeactivateMines = 1;
  detectSkill = 80;
  threat[] = {1, 0.5, 0.1};
  icon = "iconManExplosive";
  role = "Sapper";
  picture = "pictureExplosive";
  LOADOUT_ARMY_M10_EXP_SPEC;
  EDPREV(rhssaf_army_m10_digital_exp)
};

class rhssaf_army_m10_digital_engineer : rhssaf_soldier_army_digital_base
{
  DLC_AUTHOR;
  SCOPE_PUBLIC;
  displayName = $STR_RHSSAF_ARMY_M10_DIGITAL_ENGINEER_DISPLAYNAME;
  engineer = 1;
  cost = 220000;
  camouflage = 1.6;
  canDeactivateMines = 1;
  detectSkill = 60;
  threat[] = {1, 0.5, 0.1};
  icon = "iconManEngineer";
  role = "Sapper";
  picture = "pictureRepair";
  LOADOUT_ARMY_M10_ENGINEER;
  EDPREV(rhssaf_army_m10_digital_engineer)
};

class rhssaf_army_m10_digital_crew : rhssaf_soldier_army_digital_base
{
  DLC_AUTHOR;
  SCOPE_PUBLIC;
  displayName = $STR_RHSSAF_ARMY_M10_DIGITAL_CREW_DISPLAYNAME;
  camouflage = 1.6;
  cost = 90000;
  role = "Crewman";
  LOADOUT_ARMY_M10_CREW;
  EDPREV(rhssaf_army_m10_digital_crew)
};

class rhssaf_army_m10_digital_crew_armored : rhssaf_soldier_army_digital_base
{
  DLC_AUTHOR;
  SCOPE_PUBLIC;
  displayName = $STR_RHSSAF_ARMY_M10_DIGITAL_CREW_ARMORED_DISPLAYNAME;
  camouflage = 1.6;
  cost = 90000;
  role = "Crewman";
  LOADOUT_ARMY_M10_CREW_ARMORED;
  EDPREV(rhssaf_army_m10_digital_crew_armored)
};

class rhssaf_army_m10_digital_crew_armored_nco : rhssaf_soldier_army_digital_base
{
  DLC_AUTHOR;
  SCOPE_PUBLIC;
  displayName = $STR_RHSSAF_ARMY_M10_DIGITAL_CREW_ARMORED_NCO_DISPLAYNAME;
  camouflage = 1.6;
  cost = 90000;
  role = "Crewman";
  LOADOUT_ARMY_M10_CREW_ARMORED_NCO;
  EDPREV(rhssaf_army_m10_digital_crew_armored_nco)
};

class rhssaf_army_m10_digital_officer : rhssaf_soldier_army_digital_base
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
  displayName = $STR_RHSSAF_ARMY_M10_DIGITAL_OFFICER_DISPLAYNAME;
  cost = 600000;
  camouflage = 1.6;
  icon = "iconManOfficer";
  role = "Rifleman";
  LOADOUT_ARMY_M10_CO;
  EDPREV(rhssaf_army_m10_digital_officer)
};
