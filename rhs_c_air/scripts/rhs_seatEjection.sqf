/*
K36D seat ejection script

input:
_v - vehicle that eh is attached to
_u - unit that is ejecting
_ct - ejected canopy type
a: reyhard
*/

params["_v","_u","_ct"];

if(!local _v)exitWith{};

if(speed _v < 1)exitWith{};

//initiate ejection sequence anim
_v animateDoor ["eject",1];
_v lock true;

private _seat = "rhs_k36d5_seat" createVehicle [0,0,110];
_seat attachTo [_v,[0,.0,0],"seat_ejection_attach"];
_u moveInCargo _seat;
_seat disableCollisionWith _v;

private _pfh = "rhs_pfh_eject_" + str _seat;

[_pfh, "onEachFrame", {

	params["_phase","_delay","_timeOut","_damage","_v","_u","_ct","_seat","_pfh"];

	private _doorPhase = _v doorPhase "eject";

	if((isNull _v) OR !(alive _u) or (time > _timeOut))exitWith
	{
		_seat animate ["hide_booster",0,true];
		[_pfh, "onEachFrame"] call BIS_fnc_removeStackedEventHandler;
	};
	switch(_phase)do
	{
		// create canopy
		case 0:
		{
			if(!(_u in _seat))then{_u moveInCargo _seat;_this set [2,time+10]};
			if(_doorPhase > 0.7)then
			{
				private _cp_point = _v modelToWorldVisual (_v selectionPosition "access_cp");
				private _dir = (_v selectionPosition "eject_start") vectorFromTo (_v selectionPosition "eject_end") vectorAdd [0,0,200];

				private _canopy = _ct createVehicle [0,0,0];
				_canopy setpos _cp_point;
				_canopy setdir (getdir _v - 180);
				_canopy setVelocity ((velocity _v) vectorAdd (_dir vectorMultiply 10));
				_canopy addTorque (_canopy vectorModelToWorld [-1000,0,0]);
				_canopy disableCollisionWith _v;
				// change to phase 1
				_this set [0,1];
				_this set [2,time+60];
			};
		};
		// unhide booster & play sound
		case 1:
		{
			if(_doorPhase > 0.79)then
			{
				_seat animate ["hide_booster",1,true];
				_seat say3d "rhs_eject_sound";
				// change to phase 2
				_this set [0,2];
			};
		};
		// hide seat in plane, detach new seat & add it some velocity
		case 2:
		{
			if(_doorPhase > 0.99)then
			{
				_v  animate ["eject_seat_hide",1,true];

				detach _seat;
				_seat setPosASL AGLToASL((_v modelToWorldVisual (_v selectionPosition "access_pos")vectorAdd [0,0,4]));
				_seat setVelocity [0,0,40];
				private _planeVelocityModelSpace = velocityModelSpace _v;
				_seat setVelocityModelSpace ((_planeVelocityModelSpace apply {_x/10}) vectorAdd [0.5,0.5,60]);
				_u addBackpack "rhs_d6_Parachute_backpack";
				// change to phase 3
				_this set [0,3];
				_this set [1,time + 0.49];
			};
		};
		// hide rocket boosters
		case 3:
		{
			if(time > _delay)then
			{
				_seat animate ["hide_booster",0,true];
				// change to phase 4
				_this set [0,4];
				_this set [1,time + 0.5];
			};
		};
		// move out player from ejection seat
		case 4:
		{
			if(time > _delay)then
			{
				_velocity = velocity _seat;
				_seat setVelocity (_velocity apply {_x/10});
				_u disableCollisionWith _seat;
				if(_u call rhs_fnc_isPlayer)then{_u action ["eject",_seat];}else{moveOut _u};
				_u allowDamage false;
				_this set [0,5];
			};
		};
		// open parachute
		case 5:
		{
			if(not(_u in _seat))then
			{
				_u allowDamage _damage;
				_u action ["OpenParachute", _u];
				[_pfh, "onEachFrame"] call BIS_fnc_removeStackedEventHandler;
			};
		};
		default {};
	};
}, [0,0,time + 60,isDamageAllowed _u,_v,_u,_ct,_seat,_pfh]] call BIS_fnc_addStackedEventHandler;

