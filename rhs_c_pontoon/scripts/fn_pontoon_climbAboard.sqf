/*
rhs_fnc_pontoon_climbAboard

a: reyhard
*/


private _player	= call rhs_fnc_findPlayer;
private _pos	= getPosASL _player;

_player switchmove "GetInHeli_Transport_02Cargo";
_player setposasl (_pos vectorAdd [0,0,1]);

sleep 1.15;

private _dir = getdir _player;
_player setposasl (_pos vectorAdd [sin(_dir)*1.5,cos(_dir)*1.5,2]);