
class rhssaf_un_ural : rhssaf_army_ural
{
  EDPREV(rhssaf_un_ural)
  scope=2;
  crewMacroUNSAFInf
  hiddenSelections[]=
  {
    "camo1",
    "camo2",
    "n1",                   // 2 - 4 number system
    "n2",
    "n3",
    "n4",
    "i1",                   // 6 - right army
    "i2",                   // 7 - left army
    "i3",                   // 8 - right platoon
    "i4",
    "numplate","numplate2"
  };
  hiddenSelectionsTextures[] =
  {
    "rhsafrf\addons\rhs_a2port_car\ural\data\ural_kabina_un_co.paa",
    "rhsafrf\addons\rhs_a2port_car\ural\data\ural_plachta_un_co.paa"
  };
};

class rhssaf_un_uaz : rhs_uaz_base
{
  EDPREV(rhssaf_un_uaz)
  scope=2;
  crewMacroUNSAFInf
  accuracy = 0.5;
  rhs_decalParameters[]={};
  hiddenSelections[]=
  {
    "camo1",
    "camo2g",
    "n1",				// 2 - 4 number system
    "n2",
    "n3",
    "n4",
    "i1",				// 6 - right army
    "i2",				// 7 - left army
    "i3",				// 8 - right platoon
    "i4",				// 9 - left platoon
    "numplate","numplate2"
  };
  hiddenSelectionsTextures[] =
  {
    "rhsafrf\addons\rhs_a2port_car\uaz\data\uaz_main_un_co.paa"
  };
};

class rhssaf_un_uaz_open : rhs_uaz_open_base
{
  EDPREV(rhssaf_un_uaz_open)
  scope=2;
  crewMacroUNSAFInf
  accuracy = 0.5;
  rhs_decalParameters[]={};
  hiddenSelections[]=
  {
    "camo1",
    "camo2g",
    "n1",				// 2 - 4 number system
    "n2",
    "n3",
    "n4",
    "i1",				// 6 - right army
    "i2",				// 7 - left army
    "i3",				// 8 - right platoon
    "i4",				// 9 - left platoon
    "numplate","numplate2"
  };
  hiddenSelectionsTextures[] =
  {
    "rhsafrf\addons\rhs_a2port_car\uaz\data\uaz_main_un_co.paa"
  };
};
