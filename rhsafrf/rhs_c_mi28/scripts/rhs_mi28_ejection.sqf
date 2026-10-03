/*
	rhs_fnc_mi28_ejection
	Mi-28 Ejection Script
	hooked to get out event handler

	_v - vehicle
	_type - position, "driver","gunner",etc.
	_u - unit which ejected
*/
params["_v", "_type","_u","_turret"];
//systemchat format["start %1 %2 %3",_u,_v,_turret];

// Exit if
if(_type == "CARGO")exitWith{};

if( (getpos _u select 2) < 7)exitWith{};

// do operations only to local unit
if(not(local _u))exitWith{};

// Exit if helicopter was deleted
if(_v isEqualTo objNull)exitWith{};

// enable damage for Mi-28 (if it's disabled) & make immortal our unit since disableCollisionWith seems to be bugged a little bit with vehicles which have "helicopterRTD" simulation
_v allowDamage true;
_u allowdamage false;

private _v_dir = vectorDir _v;
private _v_up = vectorUp _v;
private _rpm = _v animationSourcePhase "rpm";
private _vel = velocity _v;
private _v_posASL = getPosASLVisual _v;

private _comparePositions =
{
	params["_parent","_target","_selection"];
	(_parent selectionPosition _selection) vectorDiff (_target selectionPosition _selection),
};


if(_turret isEqualTo [])then{
	_u attachTo [_v,[0,0,0],"mem_pilot"];
	_u switchMove "rhs_mi28_pilot";
	// Eject 2nd units only if its still alive
	_gunner = gunner _v;
	if(alive _gunner)then{moveout _gunner};
}else{
	_u attachTo [_v,[0,0,0],"mem_gunner"];
	_u switchMove "rhs_mi28_gunner";
	// Eject 2nd units only if its still alive
	_driver = driver _v;
	if(alive _driver)then{moveout _driver};
};

// Damage effects - should be played only once
if(_v animationSourcePhase "eject" isEqualTo 0)then
{
	_v animateSource ["eject",1];
	[_v,["HitWings",1]] remoteExecCall ["setHitPointDamage",_v];

	private _door_pilot		= "rhs_mi28_door_pilot" createVehicle [0,0,0];
	private _door_gunner	= "rhs_mi28_door_gunner" createVehicle [0,0,0];
	private _wing_left		= "rhs_mi28_wing_left" createVehicle [0,0,0];
	private _wing_right		= "rhs_mi28_wing_right" createVehicle [0,0,0];
	private _vehiclePos		= getPosWorld _v;
	private _positionList =
	[
		[_v,_door_pilot,"pos_door_pilot"] call _comparePositions,
		[_v,_door_gunner,"pos_door_gunner"] call _comparePositions,
		[_v,_wing_left,"pos_wing_left"] call _comparePositions,
		[_v,_wing_right,"pos_wing_right"] call _comparePositions
	];
	private _textures = getObjectTextures _v;
	{
		_x setObjectTextureGlobal [0,_textures # 0];
		_x setObjectTextureGlobal [1,_textures # 1];
		_x setObjectTextureGlobal [2,_textures # 2];

		_x setPosWorld (_v modelToWorldVisualWorld (_positionList # _foreachIndex));
		_x setVectorDirAndUp [_v_dir,_v_up];
		_x disableCollisionWith _v;
	}foreach [_door_pilot,_door_gunner,_wing_left,_wing_right];

	private _ejectPos	= _v modelToWorldVisual (_v selectionPosition "eject_pos");
	private _ejectLeft	= _v modelToWorldVisual (_v selectionPosition "eject_left_dir");
	private _ejectRight	= _v modelToWorldVisual (_v selectionPosition "eject_right_dir");
	private _vector = _vel vectorAdd (((_ejectPos vectorFromTo _ejectLeft) vectorMultiply 0.8*_rpm) vectorAdd [0,0,2]);
	{_x setVelocity _vector}forEach [_door_gunner,_wing_left];
	private _vector = _vel vectorAdd (((_ejectPos vectorFromTo _ejectRight) vectorMultiply 0.8*_rpm) vectorAdd [0,0,2]);
	{_x setVelocity _vector}forEach [_door_pilot,_wing_right];

	// deploy balonetes
	private _balonetes = "rhs_mi28_balonetes" createVehicle [0,0,0];
	_balonetes attachTo [_v,[_v,_balonetes,"pos_balonetes"] call _comparePositions];
	sleep 0.5;
	_balonetes animateSource ["fold",1];
};


_u addBackpack "rhs_d6_Parachute_backpack";
_vector=[0,0,0];
if(_turret isEqualTo [])then
{
	_u switchMove "pilot_Heli_Light_02_Exit";
	sleep 3.2;
	detach _u;
	_u setpos (_v modelToWorldVisual (_v selectionPosition "pilot_eject_pos"));
	_vector =_vel vectorAdd ((((_v modelToWorldVisual (_v selectionPosition "eject_pos")) vectorFromTo (_v modelToWorldVisual (_v selectionPosition "eject_right_dir"))) vectorMultiply 12.1) vectorAdd [0,0,-2]);
	_u setVelocity _vector;
}else{
	_u switchMove "Heli_Attack_01_Pilot_getout";
	sleep 3.2;
	detach _u;
	_u setpos (_v modelToWorldVisual (_v selectionPosition "gunner_eject_pos"));
	_vector =_vel vectorAdd ((((_v modelToWorldVisual (_v selectionPosition "eject_pos")) vectorFromTo (_v modelToWorldVisual (_v selectionPosition "eject_left_dir"))) vectorMultiply 12.1) vectorAdd [0,0,-2]);
	_u setVelocity _vector;
};

_v addEventHandler ["killed",{{if(typeOf _x == "rhs_mi28_balonetes")then{deleteVehicle _x}}foreach (attachedObjects (_this select 0))}];

sleep 0.1;
_u action ["OpenParachute", _u];
_u allowdamage true;
(vehicle _u) setVelocity _vector;
//systemChat format["%1",_vector];