/*
Rocket airburst effect
Throws rocket ~2m above the ground after impact & triggers airburst explosion


	i: EH fired input
	o: ---

a: reyhard
*/
params["_u","","","","_a","","_p"];

//systemChat format["airburst on3 %1",_p];

private _pfh = "rhs_pfh_airburst_" + str _p;

[_pfh, "onEachFrame", {
	params["_time","_p","_pfh"];

	// delete collider & terminate function
	if(!(alive _p))exitWith{
		[_pfh, "onEachFrame"] call BIS_fnc_removeStackedEventHandler;
	};

	// create collidor which should trigger explosion
	if(time > _time)then{
		triggerAmmo _p;

		[_pfh, "onEachFrame"] call BIS_fnc_removeStackedEventHandler;
	};

	// activate jump mechanism if rocket is 30cm above the ground & trigger delayed explosion mechanism [0.2s = explosion at ~2m]
	if(((getPosVisual _p) select 2) < 0.3)exitWith{
		_p setVelocity (velocity _p vectorAdd [0,0,15]);
		//systemChat format["airburst activated %1",getpos _p];

		_this set [0,time+0.2];
	};

},[time+20,_p,_pfh]]  call BIS_fnc_addStackedEventHandler;
