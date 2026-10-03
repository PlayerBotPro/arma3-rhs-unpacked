/*
	rhs_fnc_towing_dragHelperAI
*/
params["_id","_time","_scale","_vehicle","_towing","_COM","_towingPoint","_active","",["_unit",objNull],["_fakeAI",objNull],["_lastMove",0]];

if(_unit isEqualTo objNull)then
{
	// set _unit
	_realVehicle = _vehicle getVariable ["rhs_towing_towedVehicle",objNull];
	_unit = _realVehicle getVariable ["rhs_towing_ai_unit",objNull];
	_this set [9,_unit];
	// set _fakeAI
	_fakeAI = _realVehicle getVariable ["rhs_towing_ai_fake",objNull];
	_this set [10,_fakeAI];
};

// Exit if vehicle is deleted or destroyed
if( !alive _vehicle || !alive _unit || !alive _fakeAI)exitWith
{
	detach _unit;
	_unit switchMove "amovpknlmstpsraswrfldnon";
	deleteVehicle _fakeAI;
	//deleteVehicle _vehicle;
	deleteVehicle (_unit getVariable ["rhs_towing_fakeCarrier",objNull]);

	_realVehicle = _vehicle getVariable ["rhs_towing_towedVehicle",objNull];
	_realVehicle setVariable ["rhs_towing_ai_unit",nil];
	_realVehicle setVariable ["rhs_towing_ai_fake",nil];
	[_realVehicle] call rhs_fnc_towing_detach;
	_unit setVariable ["rhs_towing_fakeCarrier",nil];
	// Remove on eachFrame event
	[_id, "onEachFrame"] call BIS_fnc_removeStackedEventHandler;
};

if(time > _time)then
{
	_this set [1,time + 0.01];

	private _speed		= speed _vehicle;
	private _speed2		= abs(speed _fakeAI);
	private _pos1		= _vehicle modelToWorldVisual _COM;
	private _pos2		= _towing modelToWorldVisual _towingPoint;
	private _dDistance	= _pos1 vectorDistance _pos2;


	//if(_pos1 getDir _pos2 < 200)then{_dDistance = -_dDistance};

	//hintSilent format["tow helper on %1 %2\ndistance: %3m\relative dir: %4",time,_speed2,_dDistance,_pos2 getDir _pos1];

	// Add small boost to towed vehicle
	if(
		_speed2 > 0.1
	)then
	{
		if((time > _lastMove) || ((animationState _unit) == "AcinPknlMwlkSrasWrflDb"))then
		{
			_unit playMove "AcinPknlMwlkSrasWrflDb";
			_this set [11,time+4.5];
		};

		// Fix for stucked wheels when moving from stand stil position
		// Adds little initial boost similar to tankX moving from standstill
		if(_active && (_speed > 1))then
		{
			_this set [7,false];
			_vehicle setVelocityModelSpace [0,3,0];
		};

		_this set [2,(_scale + linearConversion [0,1,_dDistance,0.0001,0.5]) min 1 ];

		private _velocity		= (velocity _vehicle);
		private _velocityNew	= _velocity vectorMultiply (linearConversion [0,1,_scale,1,0.6,true]);
		// Increase speed, if speed is above defined max boost speed then thrust is gradualy reduced till it reaches maxSpeed + 10%
		_vehicle addForce [( _velocityNew) vectorMultiply 10*(linearConversion[40,80*1.1,_speed,1,0.001,true]),_COM];
		//hintSilent format["%1",_velocityNew];
	}else{
		_vehicle setVelocity [0,0,0];
		_this set [7,true];
		if((animationState _unit) == "AcinPknlMwlkSrasWrflDb")then{
			_unit playMove "AcinPknlMstpSrasWrflDnon";
		};
	};
};