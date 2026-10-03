#include "defs.hpp"
params["_vehicle","_target"];

private _weapon = "rhs_weap_kh55sm_Launcher";
vehset(target,_target);
vehset(target_designated_valid,true);
if(!alive gunner _vehicle)exitWith{};

if (isPlayer (gunner _vehicle)) exitWith {};

// open missile bay if it's closed
while { (!vehget(bay_open)) } do {
	[0,1,_vehicle] call rhs_fnc_tu95_anim;
};

if(!alive gunner _vehicle)exitWith{};

// launch missile
if (vehget(bay_open) && (!isPlayer(gunner _vehicle))) then {
	if (_vehicle ammo _weapon > 0) then {
		if (local _vehicle) then {
			_vehicle selectWeapon _weapon;
			sleep 0.1;
			_vehicle fire _weapon;
		};
	};
	sleep 4;
};

if(!alive gunner _vehicle)exitWith{};

// close bay after firing missile
if (vehget(bay_open)) then {
	[0,0,_vehicle] call rhs_fnc_tu95_anim;
};