#include "defs.hpp"
_part = _this select 0;
_mode = _this select 1;
_tochka = _this select 2;
_weapon = "RHS_9M79_1Launcher";

if (isNil{_part}||isNil{_mode}) exitWith {diag_log "RHS_ss21 error in file anim_ss21.sqf - no input parameters"};
//if (({alive _x} count (crew _tochka))==0) exitWith {};

switch _part do {
	case 0: {//stables
		switch _mode do {
			case 0: {//up
				_tochka engineOn true;
				_tochka say "RHS_SS21prepS";
				_tochka animatedoor ["StablePos",0];
				sleep 5;
				vehset(stable_down,false);
				};
			case 1: {//down
				_tochka engineOn true;
				_tochka say "RHS_SS21prepS";
				_tochka animatedoor ["StablePos",1];
				sleep 5;
				vehset(stable_down,true);
				};
			default {diag_log format ["RHS_ss21 error in file anim_ss21.sqf - wrong input parameter - %1",_this]};
		};
	};
	case 1: {//bay
		switch _mode do {
			case 0: {//close
				_tochka say "RHS_SS21prepS";
				_tochka animatedoor ["MissileBayL",0];
				_tochka animatedoor ["MissileBayR",0];
				sleep 6;
				_tochka say "RHS_SS21prepS";
				sleep 3;
				vehset(bay_open,false);
				};
			case 1: {//open
				if !isNil{(magazines _tochka) select 0} then {
					_tochka animate ["RHS_SS21_missile_hide",0];
				};
				_tochka say "RHS_SS21prepS";
				_tochka animatedoor ["MissileBayL",1];
				_tochka animatedoor ["MissileBayR",1];
				sleep 9;
				vehset(bay_open,true);
				};
			default {diag_log format ["RHS_ss21 error in file anim_ss21.sqf - wrong input parameter - %1",_this]};
		};
	};
	case 2: {//pylon
		switch _mode do {
			case 0: {//down
				_tochka say "RHS_SS21prepS";
				_tochka animateDoor ["MissileRise", 0];
				sleep 15;
				_tochka animateDoor ["MissileEnviro", 0];
				_tochka removeWeapon (getArray(configFile >> "cfgVehicles" >> (typeOf _tochka) >> "Turrets" >> "MainTurret" >> "weaponsOnDeploy") select 0);
				_tochka addWeapon (getArray(configFile >> "cfgVehicles" >> (typeOf _tochka) >> "Turrets" >> "MainTurret" >> "weaponsOnUnDeploy") select 0);
				sleep 3;
				_tochka removeEventHandler ["Engine", vehget(engine_EH)];
				vehset(pylon_up,false);
				};
			case 1: {//up
				_engine_EH = _tochka addEventHandler ["Engine", {if !(_this select 1) then {_this select 0 engineOn true;};}];
				vehset(engine_EH,_engine_EH);
				_tochka engineOn true;
				_tochka setVariable ["bgr_RISEstatus", 0.91, false];
				_tochka say "RHS_SS21prepS";
				_tochka animateDoor ["MissileEnviro", 1];
				sleep 3;
				_tochka animateDoor ["MissileRise", 1];
				[_tochka,1] remoteExec ["rhs_fnc_ss21_effects",0];

				_tochka removeWeapon (getArray(configFile >> "cfgVehicles" >> (typeOf _tochka) >> "Turrets" >> "MainTurret" >> "weaponsOnUnDeploy") select 0);
				_tochka addWeapon (getArray(configFile >> "cfgVehicles" >> (typeOf _tochka) >> "Turrets" >> "MainTurret" >> "weaponsOnDeploy") select 0);
				sleep 15;
				vehset(pylon_up,true);
				};
			default {diag_log format ["RHS_ss21 error in file anim_ss21.sqf - wrong input parameter - %1",_this]};
		};
	};
	case 3: {//��������
		switch _mode do {
			case 0: {//off
					vehset(wiper_on,false);
				};
			case 1: {//on
					vehset(wiper_on,true);
					while {vehget(wiper_on)&&((damage _tochka) < 0.9)} do {
						_tochka animate ["RHS_SS21WindshieldWiper",1];
						_tochka animate ["RHS_SS21WindshieldWiper2",1];
						_tochka animate ["RHS_SS21WindshieldWiper3",1];
						_tochka say "RHS_SS21wipers";
						sleep 1;
						_tochka animate ["RHS_SS21WindshieldWiper",0];
						_tochka animate ["RHS_SS21WindshieldWiper2",0];
						_tochka animate ["RHS_SS21WindshieldWiper3",0];
						sleep 1;
					};
				};
			default {diag_log format ["RHS_ss21 error in file anim_ss21.sqf - wrong input parameter - %1",_this]};
		};
	};
	default {diag_log format ["RHS_ss21 error in file anim_ss21.sqf - wrong input parameter - %1",_this]};
};