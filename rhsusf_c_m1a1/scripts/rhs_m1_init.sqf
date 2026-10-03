params["_tank"];

if (!local _tank) exitWith {}; // Function should only run on local machine

if (isNil "cRHSM1FuncLoaded") then
{
	cRHSM1FuncLoaded = true; //here and above this name should correspond to the addon. Indicates that this script should not be run more than once

	cM1NumberPlaces = [8,9,10];              // Places for numbers. Indecies from the hiddenSelections definition in the config. Can be up to 4 I think.
	cM1PlnSymPlaces = [11];                  // Places for platoon symbol
	cM1BarrelSymPlaces = [12];		// Places for barrel Art
};

private _class = typeOf _tank; // always the same
private _cfgParams= getArray (configFile >> "CfgVehicles" >> _class >> "rhs_decalParameters" );

if(count _cfgParams > 0)then{
	{
		_cfgParams set [_forEachIndex, call compile _x];
	}foreach _cfgParams;

	[
		_tank,
		_cfgParams
	] call rhsusf_fnc_decalsInit;
	//diag_log format ["Params: %1", _cfgParams];
};

_tank lockTurret [[0,2],true];
if(_tank isKindOf "rhsusf_m1a2tank_base")then
{
	_tank lockTurret [[0,3],true];
};