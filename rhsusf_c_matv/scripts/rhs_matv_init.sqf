/*
	rhs_fnc_matv_init
*/
params["_vehicle"];

private _sections = getArray (configFile >> "CfgVehicles" >> typeOf _vehicle >> "hiddenSelections");
_vehicle setObjectTexture [_sections find "BFT_screen", getText (configFile >> "CfgWorlds" >> worldName >> "pictureMap")];

if(!local _vehicle)exitWith{};
// Set & synchronize initial vehicle range
[_vehicle,[1,random[1000,15000,550000]]] remoteExecCall ["setUserMFDValue",0];
_vehicle setVariable ["rhs_vehicle_lastPos",getpos _vehicle,true];