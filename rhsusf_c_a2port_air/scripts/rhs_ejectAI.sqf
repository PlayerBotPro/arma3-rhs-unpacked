/*
	rhs_fnc_AI_Eject
	AI ejection workaround. Script is attached to hit event handler

	_v - vehicle

	a: reyhard
*/

params["_v"];

// run for only local units
if(!local _v)exitWith{};

private _pilot = driver _v;

// run only for local player
if(!(_pilot call rhs_fnc_isPlayer))then
{
	//systemChat format["%1 %2",damage _v,_v];
	// if damage is greater than 0.3-0.8 (randomized) then eject
	if(
		((damage _v) > random[0.25,0.4,0.6]) OR
		(
			(_v getHitPointDamage "hitengine" isEqualTo 1) OR
			(_v getHitPointDamage "hitengine2" isEqualTo 1)
		)
	)then
	{
		[_v,_pilot] spawn
		{
			params["_v","_pilot"];
			//systemChat format["eject %1!",_v];
			sleep random(2);
			if((_pilot in _v) && (alive _v))then
			{
				moveOut _pilot;
			};
		};
	};
};