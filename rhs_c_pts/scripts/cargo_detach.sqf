private ["_v","_cargo","_oMass","_oCenter"];

// The vehicle (PTS)
_v = _this select 0;

// Exit if vehicle is not local
if !(local _v) exitWith {};

// Get the vehicle's cargo
_cargo = _v getVariable ["RHS_PTS_CARGO", []];

// If the vehicle has cargo
if (count _cargo > 0) then {
	// Unload all cargo
	{ detach _x } forEach _cargo;
	// Revert the vehicle's cargo, mass and center of mass to standard values
	_v setVariable ["RHS_PTS_CARGO", [], true];
	_v setMass (_v getVariable ["RHS_PTS_MASS", getMass _v]);
	_v setCenterOfMass (_v getVariable ["RHS_PTS_CENTER", getCenterOfMass _v]);
};

