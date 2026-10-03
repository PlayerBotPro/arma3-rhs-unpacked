#include "defs.hpp"
params ["_vehicle","_state"];

private _cfgPath = configFile >> "cfgVehicles" >> (typeOf _vehicle) >> "Turrets" >> "MainTurret5";

//Deploy
if(_state)then{
	_vehicle animatedoor ["missilebay",0];
	vehset(bay_open,true);

	_vehicle removeWeapon (getArray(_cfgPath >> "weaponsOnUnDeploy") select 0);
	_vehicle addWeapon (getArray(_cfgPath >> "weaponsOnDeploy") select 0);
}else{
//Undeploy
	_vehicle removeWeapon (getArray(_cfgPath >> "weaponsOnDeploy") select 0);
	_vehicle addWeapon (getArray(_cfgPath >> "weaponsOnUnDeploy") select 0);

	//missile bay
	_vehicle animatedoor ["missilebay",0];
	vehset(bay_open,false);

};
