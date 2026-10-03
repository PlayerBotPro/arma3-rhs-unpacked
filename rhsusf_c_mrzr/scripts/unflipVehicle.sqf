/*
	rhs_fnc_unflipVehicle
	push vehicle a little bit in order to unflip it. Allows also to perform some dumb tricks if players wish to do so

	a: reyhard
*/
params["_vehicle"];

private _player			= call rhs_fnc_findPlayer;
private _intersection	= lineIntersectsSurfaces [ eyePos _player,AGLtoASL positionCameraToWorld [0,0,10],_player];

if(_intersection isEqualTo [])exitWith{};

_intersection = _intersection # 0;

if(_vehicle != (_intersection # 2))exitWith{};

private _vector	= (getpos _player) vectorFromTo (getpos _vehicle);
private _offset	= _vehicle worldToModelVisual (_intersection # 0);

_vehicle addForce [_vector vectorMultiply (getMass _vehicle),_offset];