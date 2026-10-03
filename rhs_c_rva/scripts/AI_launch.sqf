#include "defs.hpp"
params["_tochka","_target"];

_weapon = "RHS_9M79_1Launcher";

vehset(target,_target);

if (isPlayer (gunner _tochka)) exitWith {};
_tochka disableAI "MOVE";
while {(alive gunner _tochka)&&(!vehget(pylon_up))} do {
	_stable_down = vehget(stable_down);
	_bay_open = vehget(bay_open);
	_pylon_up = vehget(pylon_up);
	switch true do {
		case (!_stable_down) : {
				[0,1,_tochka] call rhs_fnc_ss21_anim;
			};
		case (_stable_down&&!(_bay_open)) : {
				[1,1,_tochka] call rhs_fnc_ss21_anim;
			};
		case (_bay_open&&(!_pylon_up)) : {
				[2,1,_tochka] call rhs_fnc_ss21_anim;
			};
		default {};
	};
};

if (vehget(pylon_up)&&(!isPlayer(gunner _tochka)&&(alive gunner _tochka))) then {
	if (_tochka ammo _weapon > 0) then {
		_fired_EH = _tochka addEventHandler ["fired",{_this call rhs_fnc_ss21_missile_control}];
		vehset(fired_EH,_fired_EH);
		if (local _tochka) then {
			_tochka selectWeapon _weapon;
			sleep 0.1;
			_tochka fire _weapon;
		};
		sleep 1;
		_t = time +15;
		waitUntil {not(someAmmo _tochka) OR (time > _t)};
		_tochka removeEventHandler ["fired",_fired_EH];
	};
	sleep 4;
};
while {(alive gunner _tochka)&&(vehget(stable_down))} do {
	_stable_down = vehget(stable_down);
	_bay_open = vehget(bay_open);
	_pylon_up = vehget(pylon_up);
	switch true do {
		case (_pylon_up) : {
				[2,0,_tochka] call rhs_fnc_ss21_anim;
			};
		case (_bay_open&&!(_pylon_up)) : {
				[1,0,_tochka] call rhs_fnc_ss21_anim;
			};
		case (_stable_down&&(!_bay_open)) : {
				[0,0,_tochka] call rhs_fnc_ss21_anim;
			};
		default {};
	};
};
_tochka enableAI "MOVE";