#include "defs.hpp"
params ["_tochka","_state"];

//Deploy Tochka
if(_state)then{
	//stables
	_tochka engineOn true;
	_tochka animatedoor ["StablePos",1,true];
	vehset(stable_down,true);

	//missile bay
	if !isNil{(magazines _tochka) select 0} then {
		_tochka animate ["RHS_SS21_missile_hide",0,true];
	};
	_tochka animatedoor ["MissileBayL",1,true];
	_tochka animatedoor ["MissileBayR",1,true];
	vehset(bay_open,true);

	//missile pylon
	_engine_EH = _tochka addEventHandler ["Engine", {if !(_this select 1) then {_this select 0 engineOn true;};}];
	vehset(engine_EH,_engine_EH);
	_tochka setVariable ["bgr_RISEstatus", 0.91, false];
	_tochka animateDoor ["MissileEnviro", 1,true];
	_tochka animateDoor ["MissileRise", 1,true];
	[_tochka,1] remoteExec ["rhs_fnc_ss21_effects",0];

	_tochka removeWeapon (getArray(configFile >> "cfgVehicles" >> (typeOf _tochka) >> "Turrets" >> "MainTurret" >> "weaponsOnUnDeploy") select 0);
	_tochka addWeapon (getArray(configFile >> "cfgVehicles" >> (typeOf _tochka) >> "Turrets" >> "MainTurret" >> "weaponsOnDeploy") select 0);
	vehset(pylon_up,true);
}else{
//Undeploy Tochka
	//missile pylon
	_tochka removeEventHandler ["Engine", _tochka getVariable ["engine_EH",-1]];
	_tochka animateDoor ["MissileRise", 0,true];
	_tochka animateDoor ["MissileEnviro", 0,true];
	_tochka removeWeapon (getArray(configFile >> "cfgVehicles" >> (typeOf _tochka) >> "Turrets" >> "MainTurret" >> "weaponsOnDeploy") select 0);
	_tochka addWeapon (getArray(configFile >> "cfgVehicles" >> (typeOf _tochka) >> "Turrets" >> "MainTurret" >> "weaponsOnUnDeploy") select 0);
	vehset(pylon_up,false);

	//missile bay
	_tochka animatedoor ["MissileBayL",0,true];
	_tochka animatedoor ["MissileBayR",0,true];
	vehset(bay_open,false);

	//stables
	_tochka engineOn true;
	_tochka animatedoor ["StablePos",0,true];
	vehset(stable_down,false);
};
