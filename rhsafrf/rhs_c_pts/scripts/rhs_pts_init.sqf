private ["_tank","_class","_decal","_cfgParams","_h","_habartype"];

_tank = _this select 0;
_tank setVariable ["unload",0];

if(local _tank)then{

	// Set the vehicle's mass and center of mass over network
	_tank setVariable ["RHS_PTS_MASS", getMass _tank, true];
	_tank setVariable ["RHS_PTS_CENTER", getCenterOfMass _tank, true];

	if (isNil "cRHSPTSFuncLoaded") then
	{
		cRHSPTSFuncLoaded = true;
		cRHSPTSAddonName  = "rhsafrf\addons\rhs_c_pts";

		cRHSPTSNumberPlaces = [0,1,2];			// Places for number
		cRHSPTSPlnSymPlaces = [3];				// Places for platoon symbol

		if (isNil "rhs_armor_hint") then{
			call rhs_fnc_hintArmor;
			rhs_armor_hint=true;
		};
	};

	_class = typeOf _tank;

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