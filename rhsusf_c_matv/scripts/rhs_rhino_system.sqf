/*
	rhs_fnc_rhino_system


*/
params["_vehicle","_state"];

// Run locally
if(!local _vehicle)exitWith{};

// Animate rhino
_vehicle animateDoor ["rhino",_state];

if(_state isEqualTo 0)then{
	// Remove hit event handler
	_vehicle removeEventHandler ["dammaged",_vehicle getVariable ["rhs_rhino_eh",-1]];
	deleteVehicle (_vehicle getVariable ["rhs_rhino_trigger",objNull]);
}else{
	// Create fake vehicle which will trigger all mines with its fire geometry
	_rhino_trigger = "rhs_rhino_trigger" createVehicle [0,0,100];
	_rhino_trigger attachTo [_vehicle,[0,0,-1],"rhino_snap"];

	_vehicle setVariable ["rhs_rhino_trigger",_rhino_trigger,true];

	// Add Event Handlers
	_rhino_trigger addEventHandler ["killed",
	{
		params["_vehicle"];
		private _parent = attachedTo _vehicle;
		_parent setHitPointDamage ["Hit_Rhino",1];
		deleteVehicle _vehicle;
	}];
	private _hit_EH = _vehicle addEventHandler ["dammaged",{
		params ["_vehicle", "_selection", "_damage", "_hitIndex", "_hitPoint", "_shooter", "_projectile"];
		if(!local _vehicle)exitWith{};
		if(_hitPoint == "Hit_Rhino" && _damage isEqualTo 1)then
		{
			deleteVehicle (_vehicle getVariable ["rhs_rhino_trigger",objNull]);
		};

	}];
	_vehicle setVariable ["rhs_rhino_eh",_hit_EH];
};