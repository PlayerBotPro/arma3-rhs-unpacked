params ["_unit","_weapon","_weaponLimit","_limit"];

// exit if it's not our desired weapon
if(_weapon != _weaponLimit)exitWith{};

// exit if script is already running
if(_unit getVariable ["rhs_weaponLimiter",false])exitWith{};

// set flag, so script is only executed once
_unit setVariable ["rhs_weaponLimiter",true];

// per frame handler checking "fire" input
["rhs_weaponLimiter_EF", "onEachFrame", {
	params["_unit","_weapon","_t"];

	if(inputAction "DefaultAction" isEqualTo 1)then
	{
		if(time>_t)then
		{
			_unit selectWeapon "rhs_burst_safe";
		};
	}else{
		_unit setVariable ["rhs_weaponLimiter",false];
		["rhs_weaponLimiter_EF", "onEachFrame"] call BIS_fnc_removeStackedEventHandler;
		_unit selectWeapon _weapon;
	};
}, [_unit,_weapon,time+1]] call BIS_fnc_addStackedEventHandler;	