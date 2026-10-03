/*
Mk10 seat ejection script rhs_fnc_a29_seatEjection

input:
_v - vehicle that eh is attached to
_u - unit that is ejecting
_ct - ejected canopy type
_initPhase - on which phase it should start
a: reyhard
*/
params[
	"_v","_role","_u","_ct",
	["_initPhase",0]
];

//systemChat format["%1",_this];
if(!local _u)exitWith{};

if(speed _v < 1)exitWith{};

//initiate ejection sequence anim
_v animateSource ["Canopy_Hide",1];

_v spawn
{
	sleep 10;
	_this lock true;
};

// "AFT" mode assumed, initiate 2nd ejection 1 second after first one
private _driver = driver _v;
private _gunner = gunner _v;
private _ejectionSeat = "Seat_Pilot_Attach";
private _ejectionAnim = "Pilot_Ejection";
if(_role == "driver")then
{
	if(!(_gunner isEqualTo objNull))then
	{
		_gunner spawn
		{
			sleep 0.5;
			if(_this call rhs_fnc_isPlayer)then{_this action ["eject",vehicle _this]}else{moveOut _this};
		};
	};
}else
{
	_ejectionSeat = "Seat_WSO_Attach";
	_ejectionAnim = "WSO_Ejection";
	if(!(_driver isEqualTo objNull))then
	{
		_driver spawn
		{
			sleep 0.5;
			if(_this call rhs_fnc_isPlayer)then{_this action ["eject",vehicle _this]}else{moveOut _this};
		};
	};
};

_v animateSource [_ejectionAnim,1];

private _seat = "RHS_JST_A29_Ejection_Seat" createVehicle [0,0,110];
_seat attachTo [_v,[0,-0.0,0],_ejectionSeat];
_u moveInCargo _seat;
_seat disableCollisionWith _v;

private _pfh = "rhs_pfh_eject_" + str _seat;

[_pfh, "onEachFrame", {

	params["_phase","_delay","_timeOut","_damage","_v","_u","_ct","_seat","_ejectionSeat","_ejectionAnim","_pfh"];

	private _doorPhase = _v animationSourcePhase _ejectionAnim;
	private _canopyPhase = _v animationSourcePhase "Canopy_Hide";

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
			if(_canopyPhase > 0.7)then
			{
				if(_canopyPhase != 1)then
				{
					private _cp_point = (_v modelToWorldVisual (_v selectionPosition "pos_eject_canopy")) vectorAdd [0,0,1];
					private _dir = ((_v selectionPosition "pos_eject") vectorFromTo (_v selectionPosition "pos_eject_dir")) vectorAdd [0,0,200];

					private _canopy = _ct createVehicle [0,0,0];
					_canopy setpos _cp_point;
					_canopy setdir (getdir _v - 180);
					_canopy addForce [((velocity _v) vectorAdd (_dir vectorMultiply 10)),[1,0,0]];
					_canopy addTorque (_canopy vectorModelToWorld [-15000,0,5000]);
					_canopy disableCollisionWith _v;
				};
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
				detach _seat;
				_seat setPosASL AGLToASL((_v modelToWorldVisual (_v selectionPosition _ejectionSeat)vectorAdd [0,-0.57,0]));
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
}, [_initPhase,0,time + 60,isDamageAllowed _u,_v,_u,_ct,_seat,_ejectionSeat,_ejectionAnim,_pfh]] call BIS_fnc_addStackedEventHandler;

