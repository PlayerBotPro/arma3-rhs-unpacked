/*
	rhs_fnc_setTurretLock
*/
params["_vehicle","_turret","_state"];

#define MAX_ATTEMPTS 30
_id = name _vehicle + str(random(9999));
[_id, "onEachFrame", 
{
	params["_id","_time","_attempts","_vehicle","_turret","_state"];

	if(time > _time)then
	{
		if(
			!(alive _vehicle) || 
			(_attempts >= MAX_ATTEMPTS) || 
			((_vehicle lockedTurret _turret) isEqualTo _state)
		)exitWith{
			//systemChat "removal";
			// Remove on eachFrame event
			[_id, "onEachFrame"] call BIS_fnc_removeStackedEventHandler;
		};

		[_vehicle,[_turret,_state]] remoteExecCall ['lockTurret',_vehicle turretOwner _turret];

		_this set [1,time + 0.5];
		_this set [2,_attempts + 1];
		//systemChat format["Attempt no %1",_attempts];
	};

}, [_id,time,0,_vehicle,_turret,_state] ] call BIS_fnc_addStackedEventHandler;
