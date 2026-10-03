/*
	handling of mi-8 door closing/opening. script checks if back seat are unoccupied and then let animate doors

	input:
	_v - vehicle
	_n1 - seat to lock nr 1
	_n2 - seat to lock nr 2 (could be merged into array in the future)
	_instant - default false, check if animation should be played instantly

	a: reyhard
*/
params["_v","_n1","_n2",["_instant",false]];

//check if vehicle is local, if it's not, then send remote message to perform that action on local vehicle
if(local _v)then
{

	private _end=false;

	{
		if((_v getCargoIndex _x isEqualTo _n1) or (_v getCargoIndex _x isEqualTo _n2))exitWith{_end=true;};
	}foreach (crew _v);

	if(_end)exitWith{hint "Impossible to perform action - back seats are occupied!";};

	if(_v doorPhase "RearDoors"<0.5)then
	{
		_v animateDoor ["RearDoors",1,_instant];
		_v lockCargo [_n1, true];
		_v lockCargo [_n2, true];
	}else{
		_v animateDoor ["RearDoors",0,_instant];
		_v lockCargo [_n1, false];
		_v lockCargo [_n2, false];
	};
}else{
	[_v,_n1,_n2] remoteExecCall ["rhs_fnc_mi8_checkDoor",_v];
};