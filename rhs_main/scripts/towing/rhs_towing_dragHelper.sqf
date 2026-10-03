/*
	rhs_fnc_towing_dragHelper
*/
params["_id","_time","_scale","_vehicle","_towing","_COM","_towingPoint","_active"];

private _player = call rhs_fnc_findPlayer;
// Exit if vehicle is deleted or destroyed
if( !alive _vehicle || !alive _player)exitWith
{
	// Remove drag action from player & delete fake carrier
	_player removeAction (_player getVariable ["rhs_towing_dragAction",0]);
	deleteVehicle (_player getVariable ["rhs_towing_fakeCarrier",objNull]);
	// Deinit variables
	_player setVariable ["rhs_towing_dragAction",nil];
	_player setVariable ["rhs_towing_fakeCarrier",nil];
	// Remove on eachFrame event
	[_id, "onEachFrame"] call BIS_fnc_removeStackedEventHandler;
};

if(time > _time)then
{
	_this set [1,time + 0.01];

	private _speed		= speed _vehicle;
	private _speed2		= speed _towing;
	private _pos1 = _vehicle modelToWorldVisual _COM;
	private _pos2 = _towing modelToWorldVisual _towingPoint;
	private _dDistance = _pos1 vectorDistance _pos2;

	//if(_pos1 getDir _pos2 < 200)then{_dDistance = -_dDistance};

	// Add small boost to towed vehicle
	if(
		inputAction "MoveBack" > 0
	)then
	{
		// Fix for stucked wheels when moving from stand stil position
		// Adds little initial boost similar to tankX moving from standstill
		if(_active)then
		{
			_this set [7,false];
			_vehicle setVelocityModelSpace [0,3,0];
		};
		//hintSilent format["tow helper on %1 %2\ndistance: %3m\relative dir: %4",time,_scale,_dDistance,_pos2 getDir _pos1];

		_this set [2,(_scale + linearConversion [0,1,_dDistance,0.0001,0.5]) min 1 ];

		private _velocity		= (velocity _vehicle);
		private _velocityNew	= _velocity vectorMultiply (linearConversion [0,1,_scale,1,0.6,true]);
		// Increase speed, if speed is above defined max boost speed then thrust is gradualy reduced till it reaches maxSpeed + 10%
		_vehicle addForce [( _velocityNew) vectorMultiply 10*(linearConversion[40,80*1.1,_speed,1,0.001,true]),_COM];
		//hintSilent format["%1",_velocityNew];
	}else{
		_vehicle setVelocity [0,0,0];
		_this set [7,true];
	};
};