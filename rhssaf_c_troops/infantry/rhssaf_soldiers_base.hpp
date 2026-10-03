
class rhssaf_soldier_m10_base : SoldierGB
{
  DLC_AUTHOR;
  SCOPE_PROTECTED;
  identityTypes[] =
  {
    "LanguageGRE_F",
    "Head_Euro",
    "NoGlasses"
  };
  faceType = "Man_A3";
  side = 2;
  faction = "rhssaf_faction_army";
  displayName = $STR_RHSSAF_SOLDIER_BASE_DISPLAYNAME;
  genericNames = "SerbianMen";
  vehicleClass = "rhssaf_vehclass_army_infantry_digital";
  editorSubcategory = "rhssaf_EdSubcat_army_infantry_digital";
  portrait = "";
  picture = "";
  icon = "iconMan";
  accuracy = 1.6;
  sensitivity = 3;
  threat[] =	{1,0.1,0.1};
  camouflage = 1.4;
  minFireTime = 10;
  primaryAmmoCoef = 0.4;
  secondaryAmmoCoef = 0.2;
  handgunAmmoCoef = 0.1;
  cost = 100000;

  class Wounds
  {
    tex[] =
    {

    };
    mat[] =
    {
      "rhssaf\addons\rhssaf_t_uniform_m10\data\rhssaf_uniform_m10.rvmat",
      "rhssaf\addons\rhssaf_t_uniform_m10\data\rhssaf_uniform_m10_w1.rvmat",
      "rhssaf\addons\rhssaf_t_uniform_m10\data\rhssaf_uniform_m10_w1.rvmat",
      A3_INJURY
    };
  };

  class UniformInfo
  {
    class SlotsInfo
    {
      class NVG : UniformSlotInfo
      {
        slotType = 602;
      };
      class Scuba : UniformSlotInfo
      {
        slotType = 604;
      };
      class Googles : UniformSlotInfo
      {
        slotType = 603;
      };
      class Headgear : UniformSlotInfo
      {
        slotType = 605;
      };
    };
  };

  model = "\rhssaf\addons\rhssaf_m_uniform_m10\rhssaf_uniform_m10";
  modelSides[] =	{0,2,3};
  nakedUniform = "U_BasicBody";
  uniformClass = "rhssaf_uniform_m10_digital";

  canCarryBackPack = 1;
  hiddenSelections[] = {"Camo"};
  hiddenSelectionsTextures[] = {"\rhssaf\addons\rhssaf_t_uniform_m10\data\rhssaf_uniform_m10_digital_co.paa"};
  LOADOUT_ARMY_M93_BASE;

  class EventHandlers: EventHandlers {};
};

class rhssaf_soldier_m93_base : rhssaf_soldier_m10_base
{
  DLC_AUTHOR;
  SCOPE_PROTECTED;
  class Wounds
  {
    tex[] =
    {

    };
    mat[] =
    {
      "rhssaf\addons\rhssaf_t_uniform_m93\data\rhssaf_uniform_m93.rvmat",
      "rhssaf\addons\rhssaf_t_uniform_m93\data\rhssaf_uniform_m93_w1.rvmat",
      "rhssaf\addons\rhssaf_t_uniform_m93\data\rhssaf_uniform_m93_w1.rvmat",
      A3_INJURY
    };
  };
  class Eventhandlers: Eventhandlers {};
};

class rhssaf_soldier_atf_base : rhssaf_soldier_m10_base
{
  DLC_AUTHOR;
  SCOPE_PROTECTED;

  class Wounds
  {
    tex[] =
    {

    };
    mat[] =
    {
      "rhssaf\addons\rhssaf_t_uniform_mdt\data\rhssaf_uniform_mdt_01.rvmat",
      "rhssaf\addons\rhssaf_t_uniform_mdt\data\rhssaf_uniform_mdt_w01.rvmat",
      "rhssaf\addons\rhssaf_t_uniform_mdt\data\rhssaf_uniform_mdt_w01.rvmat",
      "rhssaf\addons\rhssaf_t_uniform_mdt\data\rhssaf_uniform_mdt_02.rvmat",
      "rhssaf\addons\rhssaf_t_uniform_mdt\data\rhssaf_uniform_mdt_w02.rvmat",
      "rhssaf\addons\rhssaf_t_uniform_mdt\data\rhssaf_uniform_mdt_w02.rvmat",
      A3_INJURY
    };
  };

  model = "\rhssaf\addons\rhssaf_m_uniform_mdt\rhssaf_uniform_mdt";
  uniformClass = "rhssaf_uniform_gendarmes_acu";

  hiddenSelections[] = {"camo1","camo2","camo3","insignia"};
  hiddenSelectionsTextures[] =
  {
    "\rhssaf\addons\rhssaf_t_uniform_mdt\data\rhssaf_uniform_mdt_01_digi_co.paa",
    "\rhssaf\addons\rhssaf_t_uniform_mdt\data\rhssaf_uniform_mdt_02_digi_co.paa",
    "\rhssaf\addons\rhssaf_t_uniform_mdt\data\rhssaf_uniform_mdt_03_digi_co.paa"
  };
  LOADOUT_ARMY_M93_BASE;
  class Eventhandlers: Eventhandlers {};
};

//Preload AFRF pilot base class
class rhs_infantry_msv_base : SoldierGB{};
class rhs_pilot_base : rhs_infantry_msv_base{};
class rhs_pilot_transport_heli : rhs_pilot_base{};

class rhssaf_airforce_pilot_transport_heli: rhs_pilot_transport_heli
{
  EDPREV(rhssaf_airforce_pilot_transport_heli)
  DLC_AUTHOR;
  SCOPE_PUBLIC;
  side = 2;
  identityTypes[]=
  {
    "LanguageGRE_F",
    "Head_Euro",
    "G_NATO_pilot"
  };
  model = "\rhssaf\addons\rhssaf_m_uniform_pilot\rhssaf_pilot";
  uniformClass = "rhssaf_uniform_heli_pilot";
  hiddenSelections[] = {"camo1"};
  hiddenSelectionsTextures[] =
  {
    "rhssaf\addons\rhssaf_t_uniform_pilot\data\rhssaf_pilot_co.paa"
  };
  class Wounds
  {
    tex[] =
    {

    };
    mat[] =
    {
      "rhssaf\addons\rhssaf_t_uniform_pilot\data\rhssaf_pilot.rvmat",
      "rhssaf\addons\rhssaf_t_uniform_pilot\data\rhssaf_pilot_w1.rvmat",
      "rhssaf\addons\rhssaf_t_uniform_pilot\data\rhssaf_pilot_w1.rvmat",
      A3_INJURY
    };
  };
  faction = "rhssaf_faction_airforce";
  genericNames = "SerbianMen";
  vehicleClass = "rhssaf_vehclass_airforce_infantry";
  editorSubcategory = "rhssaf_EdSubcat_airforce_infantry";
  displayName= $STR_RHSSAF_AIRFORCE_PILOT_TRANSPORT_HELI_DISPLAYNAME;
  LOADOUT_AIRFORCE_HELI_PILOT;
};

class rhssaf_airforce_pilot_mig29: rhssaf_airforce_pilot_transport_heli
{
  EDPREV(rhssaf_airforce_pilot_mig29)
  DLC_AUTHOR;
  SCOPE_PUBLIC;
  model = "\rhssaf\addons\rhssaf_m_uniform_pilot\rhssaf_pilot_mig29";
  uniformClass = "rhssaf_uniform_mig29_pilot";
  hiddenSelections[] = {"camo1"};
  hiddenSelectionsTextures[] =
  {
    "rhssaf\addons\rhssaf_t_uniform_pilot\data\rhssaf_pilot_co_mig29.paa"
  };
  class Wounds
  {
    tex[] =
    {

    };
    mat[] =
    {
      "rhssaf\addons\rhssaf_t_uniform_pilot\data\rhssaf_pilot_mig29.rvmat",
      "rhssaf\addons\rhssaf_t_uniform_pilot\data\rhssaf_pilot_mig29_w1.rvmat",
      "rhssaf\addons\rhssaf_t_uniform_pilot\data\rhssaf_pilot_mig29_w1.rvmat",
      A3_INJURY
    };
  };
  displayName= "Mig-29 Pilot";
  LOADOUT_AIRFORCE_MIG_PILOT;
};
