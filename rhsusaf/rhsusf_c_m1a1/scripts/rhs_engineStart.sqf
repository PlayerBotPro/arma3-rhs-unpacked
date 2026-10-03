/*
	Engine start delay script
	RHS_fnc_engineStartupDelay

	i:	EH "Engine" + _delay var
		_v - vehicle
		_s - engine state [true/false - on/off]
		_delay - engine startup time

	a: reyhard
*/
params["_v","_s","_delay"];

#define	STRING_START	"STR_RHS_ENGINE_STARTING"
#define	STRING_READY	"STR_RHS_ENGINE_READY"

// check if engine startup is disabled
if (!(isNil "RHS_ENGINE_STARTUP_OFF")) exitWith {};

// perform action only for local vehicles
if( !(local _v) )exitWith{};

// disabled startup for vehicles in water which can't swim due to strange bug, causing vehicles joining ESA trials for unconventional space shuttles
if( (surfaceIsWater (getpos _v)) && ((getNumber (configFile >> "cfgVehicles" >> typeof _v >> "canFloat")) isEqualTo 0) )exitWith{};

// Turned off engine after completed shutdown
if(!_s)then
{
	_lastSuccess = _v getVariable ["rhs_engine_completed",0];
	if(time < _lastSuccess + _delay*2)then
	{
		_v setVariable ["rhs_engine_last",time,true];
	};
};

// if it's engine startup then check, if vehicle is not already moving & during startup sequence
if ( (abs (speed _v) < 1) && _s && isNull attachedTo _v) then
{

	private _keyEHid=-1;

	// block movement keys for player, ai handles this correct
	if((driver _v) isEqualTo (call rhs_fnc_findPlayer))then{
		_keyEHid = (findDisplay 46) displayAddEventHandler ["KeyDown", {

			private _handled = false;
			// block forward/reverse keys
			if((_this select 1) in [((actionKeys "carForward") select 0),((actionKeys "carBack") select 0)]  )then{
				private _p = call rhs_fnc_findPlayer;
				if(_p isEqualTo (driver objectParent _p))then{
					_handled = true;
				};
			};
			_handled;
		}];
	};
	_v vehicleChat localize STRING_START;

	// create dummy object [with simulation=thing or thingX] & then attach vehicle to this thing
	private _h = "rhs_collider_simple" createVehicle (getpos _v);
	_h setPosWorld (getPosWorld _v);
	_h setVectorDirAndUp [vectorDir _v,vectorUp _v];
	_v attachTo [_h,[0,0,0]];
	_v disableCollisionWith _h;

	private _c = objNull;
	if(_delay > 5)then{
		_c = "rhs_vehcollider" createVehicle (getpos _v);
		_c setPos (getPos _v);
		_c setVectorDirAndUp [vectorDir _v,vectorUp _v];
	};

	// Get time when startup was last used
	private _lastUse = _v getVariable ["rhs_engine_last",0];

	// Normalize delay - if engine was shut down one second ago then startup shouldn't be as long as cold start
	_delay = linearConversion [_lastUse,_lastUse+_delay*2,time,0.01,_delay,true];

	private _pfhEngine = "rhs_pfh_engineStart_" + str _v;

	[_pfhEngine, "onEachFrame", {
		params["_v","_startPos","_delay","_isPlane","_h","_c","_keyEHid","_pfhEngine"];

		if(_isPlane)then{_v setAirplaneThrottle 0};
		// remove EH, detach vehicle & delete dummy object
		if(
			(time > _delay) OR
			{((getPosASLVisual _v) distance _startPos) > 5} OR
			{!(alive _v)} 
		)then{
			if(_keyEHid >= 0)then{(findDisplay 46) displayRemoveEventHandler ["KeyDown", _keyEHid]};

			deleteVehicle _c;
			deleteVehicle _h;

			_v setVariable ["rhs_engine_completed",time,true];
			_v vehicleChat localize STRING_READY;
			[_pfhEngine, "onEachFrame"] call BIS_fnc_removeStackedEventHandler;
		};

	},[_v,getPosASLVisual _v,time + _delay,(typeof _v) isKindOf "plane",_h,_c,_keyEHid,_pfhEngine] ] call BIS_fnc_addStackedEventHandler;
};