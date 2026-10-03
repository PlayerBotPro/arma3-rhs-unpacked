params["_v"];

// Exit if vehicle is not local
if !(local _v) exitWith {};

// Maximum cargo mass of vehicle
private _maxMass = getNumber (configFile >> "cfgVehicles" >> typeOf _v >> "rhs_maxCargoMass");

// Get and set vehicle's current mass and center of mass
private _vMass = getMass _v;
private _vCenter = getCenterOfMass _v;

// Vehicle position
private _vPos = getPosASL _v;

// Get the vehicle's cargo
private _cargo = _v getVariable ["RHS_PTS_CARGO", []];

// Load potential cargo
{
	private ["_xPos","_xMass","_xCenter","_vec","_dis"];
	// If object is not PTS and not loaded
	if(_x != _v) then 
	{
		if !(_x in _cargo) then 
		{
			// Get objects positions
			_xPos = getPosASL _x;
			systemChat format["%1 %2",_xPos,_vPos];
			// Load the object if it is higher than the vehicle (ie on top of it)
			if ((_xPos select 2) > (_vPos select 2)) then 
			{
				// Add the object to the vehicle's cargo array
				_cargo pushBack _x;
				// Get the object's mass and center of mass
				_xMass = getMass _x;
				_xCenter = getCenterOfMass _x;
				// Attach the object
				_x attachTo [_v, _v worldToModel (_xPos vectorDiff [0,0, (_x worldToModel _xPos) select 2])];
				// Get the new center of mass
				_vec = (_v modelToWorld _vCenter) vectorFromTo (_x modelToWorld _xCenter);
				_dis = ((_v modelToWorld _vCenter) vectorDistance (_x modelToWorld _xCenter)) * (_xMass / _vMass);
				_vCenter = _vCenter vectorAdd (_vec vectorMultiply _dis);
				// Get the new vehicle mass
				_vMass = _vMass + _xMass;
			};
		};
	};
} forEach (nearestObjects [_v modelToWorld (_v selectionPosition "CargoAttach"), ["Car","Tank"], 3]);

// Get mass delta
private _detla = _vMass - (_v getVariable ["RHS_PTS_MASS", getMass _v]);

// Do update if mass changed
if (_detla > 0) then 
{
	// Set new mass
	_v setMass _vMass;
	// Set new center of mass
	_v setCenterOfMass _vCenter;
	// Update vehicle's cargo over network
	_v setVariable ["RHS_PTS_CARGO", _cargo, true];
};