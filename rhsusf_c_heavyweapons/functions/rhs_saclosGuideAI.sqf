/*
	rhs_fnc_saclosGuideAI
	SACLOS guidiance

	a: reyhard
*/
params["_u","_w","_m","","_a","","_p","_g"];

// exit if unit is local to headless client or dedicated server
if(!hasInterface)exitWith{};

if((commander vehicle _u) call rhs_fnc_isPlayer)then
{
	//_succes = _p setMissileTarget (cursorTarget _g);
	//systemChat format["sc %1",_succes];
};

private _pfh = "rhs_pfh_atgm_ai_" + str _p;

[_pfh, "onEachFrame", {
	params["_p","_pfh"];

	_mTarget = missileTargetPos _p;
	//hintSilent format["%1",_mTarget];
	helper2 setposASL _mTarget;

	if(!alive _p)exitWith{
		[_pfh, "onEachFrame"] call BIS_fnc_removeStackedEventHandler;
	};
}, [_p,_pfh]] call BIS_fnc_addStackedEventHandler;