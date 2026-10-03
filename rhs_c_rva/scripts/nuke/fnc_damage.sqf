params["_pos","_yield","_radius"];

_fire = false;//true - every killed object will burn (useful for movies, etc. , but could cause lag)
//BIS_Effects_Burn = compile preprocessFile "\ca\Data\ParticleEffects\SCRIPTS\destruction\burn.sqf";
//diag_log format ["_pos %1 _yield %2 _radius %3",_pos,_yield,_radius];
_objects = nearestObjects [_pos,[],_radius];
{
	_damage = (1.5+random(1)-2*(_pos distance _x)/_radius) max 0;
	switch true do {
		case ((_x isKindOf "Ruins")
				||(_x isKindOf "Thing")
				||(_x isKindOf "Small_items")
				||(_x isKindOf "Logic")
				||(_x isKindOf "LaserTarget")
				||(_x isKindOf "FireSectorTarget")): {_damage = 0;};
		case (_x isKindOf "Man"): {_damage = _damage * 2;};
		case ((_x isKindOf "WheeledAPC")||(_x isKindOf "TrackedAPC")): {_damage = _damage * 0.7;};
		case (_x isKindOf "Car"): {_damage = _damage * 1.2;};
		case (_x isKindOf "Tank"): {_damage = _damage * 0.4;};
		case (_x isKindOf "Ship"): {_damage = _damage * 0.9;};
		case (_x isKindOf "Air"): {_damage = _damage * 1.3;};
		default {};
	};

	if ((_damage > 0)and(alive _x)) then {
		_new_damage = ((damage _x) + _damage);
		_x setDamage _new_damage;
		/*if ((_new_damage>1)&&((_x isKindOf "Building")||(_fire))&&(random(2)>1)) then {
			[_x,1+random(9),time,false,true] spawn BIS_Effects_Burn;
		};*/
	};
} forEach _objects;
