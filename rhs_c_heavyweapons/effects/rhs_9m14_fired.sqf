params["_vehicle","_muzzle"];

//diag_log text "Eject Started";
if (_muzzle != "rhs_weap_9k11") exitWith {};
//hint format ["Maljutka fired. RT: %1, MRT: %2",_reloadTime,_magReloadTime];
_vehicle animate ["maljutka_hide",1,true];
