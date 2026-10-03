params["_vehicle","","_muzzle","","","","_projectile"];

if(!(local _vehicle))exitWith{};

private _pos = modelToWorldVisualWorld (_vehicle modelToWorld (_vehicle selectionPosition format["pos_%1",_vehicle ammo _muzzle]));
_projectile setPosASL _pos;