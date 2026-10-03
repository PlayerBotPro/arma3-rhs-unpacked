/*
	rhs_fnc_towing_pushHelper
*/
params["_id","_time","_scale","_vehicle","_towing","_COM","_towingPoint","_active","_boostCoef"];

// Exit if vehicle is deleted or destroyed
if( !alive _vehicle || !alive _towing)exitWith
{
	// Remove on eachFrame event
	[_id, "onEachFrame"] call BIS_fnc_removeStackedEventHandler;
};

// Exit if vehicle changes locality
if(!local _towing)then
{
	//systemChat format["changing locality %1 %2 %3",_vehicle getVariable ["rhs_towing_towedVehicle",objNull], _towing,_vehicle];
	// Add on each frame handler to new owner of the vehicle
	[_this] remoteExecCall ["rhs_fnc_towing_changeOwner",2];
	// Remove on eachFrame event from this machine
	[_id, "onEachFrame"] call BIS_fnc_removeStackedEventHandler;
};

//hintSilent format["running %1",_this];

if(time > _time)then
{
	_this set [1,time + 0.01];

	private _speed		= speed _vehicle;
	private _speed2		= speed _towing;
	private _pos1 = _vehicle modelToWorldVisual _COM;
	private _pos2 = _towing modelToWorldVisual _towingPoint;
	private _dDistance = _pos1 vectorDistance _pos2;

	// Fix for stucked wheels when moving from stand stil position
	// Adds little initial boost similar to tankX moving from standstill
	if(_speed > 3 || _dDistance > 4)then
	{
		if(_active)then
		{
			_this set [7,false];
			//_vehicle setdir (getdir _vehicle);
			_vehicle setVelocityModelSpace [0,6,1];
		};
	}else{_this set [7,true];};


	//if(_pos1 getDir _pos2 < 200)then{_dDistance = -_dDistance};

	// Add small boost to towed vehicle
	if(
		_dDistance > 0.2 && _speed > 1
	)then
	{
		//hintSilent format["tow helper on %1 %2\ndistance: %3m\relative dir: %4 %5",time,_scale,_dDistance,_pos2 getDir _pos1,local _towing];

		_this set [2,(_scale + linearConversion [0.1,6,_dDistance,0.0001,0.5]) min 1 ];

		private _velocity		= (velocity _vehicle);
		private _velocityNew	= _velocity vectorMultiply (linearConversion [0,1,_scale,1,_boostCoef,true]);
		// Increase speed, if speed is above defined max boost speed then thrust is gradualy reduced till it reaches maxSpeed + 10%
		_vehicle addForce [( _velocityNew) vectorMultiply 10*(linearConversion[50,80*1.1,_speed,1,0.001,true]),_COM];
		//hintSilent format["%1",_velocityNew];
	};

	// Max speed limiter (around 60km/h) for towing vehicle
	if(_speed2 > 55)then
	{
		private _velocity		= (velocity _towing);
		_towing addForce [( _velocity) vectorMultiply -100*(linearConversion[55,70,_speed2,0.01,1,true]),getCenterOfMass _towing];
	};
};