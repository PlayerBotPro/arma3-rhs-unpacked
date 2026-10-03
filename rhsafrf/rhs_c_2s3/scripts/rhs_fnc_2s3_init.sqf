private ["_tank","_class","_cfgParams"];

_tank = _this select 0;

if(local _tank)then{

	if (isNil "cRHS2S3FuncLoaded") then
	{
		cRHS2S3FuncLoaded = true;
		cRHS2S3AddonName  = "rhsafrf\addons\rhs_c_2s3";

		cRHS2S3NumberPlaces = [3,4,5];			// Places for number
	};

	_class = typeOf _tank;

	//diag_log format ["Init running. Class: %1", _class];

	_cfgParams= getArray (configFile >> "CfgVehicles" >> _class >> "rhs_decalParameters" );
	if(count _cfgParams > 0)then{
		{
			_cfgParams set [_forEachIndex, call compile _x];
		}foreach _cfgParams;

		[
			_tank,
			_cfgParams
		] call rhs_fnc_decalsInit;
		//diag_log format ["Params: %1", _cfgParams];
	};
};