/*
i:
	_v - vehicle
	_pos - cargo/com,etc
	_t - turret path
	_e - turret which should trigger anim
	_e2 - turret which should be also unlocked

a: reyhard
*/
params["_v","_pos","","_t","_e","_e2"];


if(_t isEqualTo _e)then{
	[_v,[1], false] call rhs_fnc_setTurretLock;

	if(!(_v getVariable  ["rhs_topPositionsLocked",false]) )then{
		[_v,_e2, false] call rhs_fnc_setTurretLock;
	};
	_v animateDoor ["cHatch",0];
};

if(_pos == "cargo")then
{
	if(_v doorPhase "r_door" !=0)then
	{
		[_v,"r_door",3.5] spawn rhs_fnc_rus_doorHandler;
	};
	if(_v doorPhase "l_door" !=0)then
	{
		[_v,"l_door",3.5] spawn rhs_fnc_rus_doorHandler;
	};
};