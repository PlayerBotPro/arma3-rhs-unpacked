#include "defs.hpp"
params["_part","_mode","_vehicle"];

if (isNil{_part}||isNil{_mode}) exitWith {diag_log "RHS_tu95 error in file anim_tu95.sqf - no input parameters"};
//if (({alive _x} count (crew _vehicle))==0) exitWith {};

private _cfgPath = configFile >> "cfgVehicles" >> (typeOf _vehicle) >> "Turrets" >> "MainTurret5";

switch _part do {
	case 0: {//stables
		switch _mode do {
			case 0: {//close
				_vehicle say "RHS_ss21prepS";
				_vehicle animatedoor ["missilebay",0];
				sleep 5;
				_vehicle say "RHS_ss21prepS";

				_vehicle removeWeapon (getArray(_cfgPath >> "weaponsOnDeploy") select 0);
				_vehicle addWeapon (getArray(_cfgPath >> "weaponsOnUnDeploy") select 0);

				vehset(bay_open,false);
				};
			case 1: {//open
				_vehicle say "RHS_ss21prepS";
				_vehicle animatedoor ["missilebay",1];
				sleep 5;

				// Workaround for pylon settings being dumb
				{
					if(_vehicle ammoOnPylon (_foreachIndex + 1) > 0)then
					{
						_vehicle setPylonLoadOut [_foreachIndex+1,"",true,[0]];
						_vehicle setPylonLoadOut [_foreachIndex+1,_x,true,[4]];
					};
				}foreach (getPylonMagazines _vehicle);

				_vehicle removeWeapon (getArray(_cfgPath >>  "weaponsOnUnDeploy") select 0);
				_vehicle addWeapon (getArray(_cfgPath >> "weaponsOnDeploy") select 0);
				sleep 6;
				vehset(bay_open,true);
			};
			default {diag_log format ["RHS_tu95 error in file anim_tu95.sqf - wrong input parameter - %1",_this]};
		};
	};
	default {diag_log format ["RHS_tu95 error in file anim_tu95.sqf - wrong input parameter - %1",_this]};
};