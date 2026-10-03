#include "defs.hpp"
#include "defs_ui.hpp"
params["_tochka"];

if isNil{cSS21FuncLoaded} then {
	//preload functions
	cSS21FuncLoaded = true;
	SS21NumberPlaces = [3,4,5]; // Places for number
	rhs_TypeTirePressure=1;
};

if (local _tochka) then {
	_target = [0,0,0];
	vehset(target,_target);
	_tochka spawn rhs_fnc_ss21_AI_waitForTarget;

	private _class = typeOf _tochka;
	private _cfgParams= getArray (configFile >> "CfgVehicles" >> _class >> "rhs_decalParameters" );
	if(count _cfgParams > 0)then{
		{
			_cfgParams set [_forEachIndex, call compile _x];
		}foreach _cfgParams;

		[
			_tochka,
			_cfgParams
		] call rhs_fnc_decalsInit;
		//diag_log format ["Params: %1", _cfgParams];
	};
};


