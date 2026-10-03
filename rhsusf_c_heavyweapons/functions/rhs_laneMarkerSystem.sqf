/*
	rhs_fnc_laneMarkerSystem

	a: reyhard
*/
params["_vehicle","_weap","_mag","_muzzle","_ammo","","_proj","_gunner"];

// exit if unit is local to headless client or dedicated server
if(!hasInterface)exitWith{};

// Exit if vehicle is not local
if(!local _vehicle)exitWith{};

private _ammoCount = (_gunner ammo _weap)+1;

// Animate vehicle animation source
_vehicle animateSource ["Dispenser_MarkerHide",_ammoCount-1];

private _mask = "Dispenser_Marker";
private _poles = [];
// Create lane markers
{

	if((_ammoCount+50*_x) < 10)then{_mask = "Dispenser_Marker0"}else{_mask = "Dispenser_Marker"};
	private _pole = "rhs_laneMarker" createVehicle [0,0,10];
	private _pole_pos = (AGLToASL (_vehicle modelToWorldVisual (_vehicle selectionPosition format["%1%2",_mask,_ammoCount+50*_x])));
	_pole_pos = _pole_pos vectorAdd [0,0,-1.3];
	_pole setPosASL _pole_pos;
	_pole setVelocity [0,0,-4];
	_pole addTorque [0,85,-4];
	_poles pushBack _pole;
}foreach [0,1];

{
	_x spawn {
		// Wait till physx stabilize
		sleep 2;
		private _pos	= getPosASLVisual _this;
		private _vector	= [vectorDir _this,vectorUp _this];
		// Set damage to 1 and wait a little bit - otherwise newly created object would colide with old object
		_this setDamage 1;
		sleep 0.1;
		deleteVehicle _this;
		private _newPole = "rhs_laneMarker_static" createVehicle [0,0,100];
		_newPole setPosASL _pos;
		_newPole setVectorDirAndUp _vector;
	};
}foreach _poles;