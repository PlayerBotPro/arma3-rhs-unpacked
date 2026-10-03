/*
	rhs_fnc_t15_init
*/
params["_vehicle"];

private _aps_vehicles = missionNamespace getVariable ["rhs_aps_vehicles",[]];
missionNamespace setVariable ["rhs_aps_vehicles",_aps_vehicles + [_vehicle]];
//systemChat "T15 Track: Init";

if(local _vehicle)then{

	if (isNil "cRHST15FuncLoaded") then
	{
		cRHST15FuncLoaded = true;
		cRHST15AddonName  = "rhsafrf\addons\rhs_c_t15";

		cRHST15NumberPlaces = [3,4,5];			// Places for number
	};

	private _class = typeOf _vehicle;

	//diag_log format ["Init running. Class: %1", _class];

	private _cfgParams= getArray (configFile >> "CfgVehicles" >> _class >> "rhs_decalParameters" );
	if(count _cfgParams > 0)then{
		{
			_cfgParams set [_forEachIndex, call compile _x];
		}foreach _cfgParams;

		[
			_vehicle,
			_cfgParams
		] call rhs_fnc_decalsInit;
		//diag_log format ["Params: %1", _cfgParams];
	};
};