["Initialize"] call BIS_fnc_dynamicGroups; // Initializes the Dynamic Groups framework

//--- Respawn inventory settings

//--- Leader
[east,"rhs_msv_sergeant"] call bis_fnc_addrespawninventory;
[west,"rhsusf_army_ucp_squadleader"] call bis_fnc_addrespawninventory;

//--- Engineer
[east,"rhs_msv_engineer"] call bis_fnc_addrespawninventory;
[west,"rhsusf_army_ucp_engineer"] call bis_fnc_addrespawninventory;

//--- Medic
[east,"rhs_msv_medic"] call bis_fnc_addrespawninventory;
[west,"rhsusf_army_ucp_medic"] call bis_fnc_addrespawninventory;

//--- Rifleman
[west,"rhsusf_army_ucp_rifleman"] call bis_fnc_addrespawninventory;
[east,"rhs_msv_rifleman"] call bis_fnc_addrespawninventory;
[resistance,"i_soldier_f"] call bis_fnc_addrespawninventory;

//--- Autorifleman
[west,"rhsusf_army_ucp_autorifleman"] call bis_fnc_addrespawninventory;
[east,"rhs_msv_machinegunner"] call bis_fnc_addrespawninventory;
[resistance,"i_soldier_ar_f"] call bis_fnc_addrespawninventory;

//--- Grenadier
[west,"rhsusf_army_ucp_grenadier"] call bis_fnc_addrespawninventory;
[east,"rhs_msv_grenadier"] call bis_fnc_addrespawninventory;
[resistance,"i_soldier_gl_f"] call bis_fnc_addrespawninventory;

//--- Marksman
[west,"rhsusf_army_ucp_marksman"] call bis_fnc_addrespawninventory;
[east,"rhs_msv_marksman"] call bis_fnc_addrespawninventory;
[resistance,"i_soldier_m_f"] call bis_fnc_addrespawninventory;

//--- Light AT soldier
[west,"rhsusf_army_ucp_riflemanat"] call bis_fnc_addrespawninventory;
[east,"rhs_msv_LAT"] call bis_fnc_addrespawninventory;
[resistance,"i_soldier_lat_f"] call bis_fnc_addrespawninventory;

//--- Curator settings
_curator = allcurators select 0;
_curators = allcurators;

//--- Unlock everything

if (("CuratorGodMode" call bis_fnc_getParamValue) > 0) exitwith {
	{
		_x setcuratorcoef ["place",0];
		_x setcuratorcoef ["delete",0];
	} foreach _curators;
};