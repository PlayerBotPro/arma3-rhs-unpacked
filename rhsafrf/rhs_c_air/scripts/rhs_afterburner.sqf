/*
	rhs_fnc_afterburner
	Universal Afterburner script

	a: reyhard
*/


//if(not( isNull (uiNameSpace getVariable ["rhs_afterburner_ctrl",displayNull]))) exitWith{};

uiNameSpace setVariable ["rhs_afterburner_ctrl",_this select 0];

#define REFRESH_RATE 0.01

private _vehicle	= vehicle (call rhs_fnc_findPlayer);
private _COM 		= getCenterOfMass _vehicle;
private _cfg		= configFile >> "cfgVehicles" >> typeOf _vehicle;
// Customizable parameters
private _boost			= [_cfg,"RHS_AfterBurner_Boost",0.2] call BIS_fnc_returnConfigEntry;
private _fueldrag		= [_cfg,"RHS_AfterBurner_FuelDrag",0.15] call BIS_fnc_returnConfigEntry;
private _maxSpeed		= [_cfg,"RHS_AfterBurner_MaxSpeed",1450] call BIS_fnc_returnConfigEntry;

// Scale fuel drag
_fueldrag = (_fueldrag / 60) * REFRESH_RATE;
// Scale boost factor
_boost = 1 + (_boost/100);

// Afterburner control toggle
// Default - press shift to turn on after burner
// Alternative - afterburner is activated automatically after reaching 100% throttle
private _condition = { (inputAction "vehicleTurbo" > 0) };
if(profileNamespace getVariable ["rhs_afterburner_mode",0] isEqualTo 1)then
{
	_condition = { true };
};

// loop handling different optics mode, weapon changing & transition fade effect
["rhs_afterburner_handler", "onEachFrame", {
	params["_time","_scale","_vehicle","_boost","_fueldrag","_maxSpeed","_condition","_COM"];

	// Exit if UI no longer available
	if( (isNull ( (uiNamespace getVariable "rhs_afterburner_ctrl") displayCtrl 8656)) )exitWith
	{
		// Restore to default state
		_vehicle animateSource ["afterburner_source",0];
		uiNameSpace setVariable ["rhs_afterburner_ctrl",displayNull];
		// Remove on eachFrame event
		["rhs_afterburner_handler", "onEachFrame"] call BIS_fnc_removeStackedEventHandler;
	};
	//hintSilent format["condition %1",call _condition];

	if(time > _time)then
	{
		_this set [0,time + REFRESH_RATE];

		private _speed		= speed _vehicle;
		private _fuel		= fuel _vehicle;
		private _altitdude	= (getPosVisual _vehicle) select 2;

		if(
			call _condition &&
			{airplaneThrottle _vehicle isEqualTo 1} &&
			{_fuel > 0.05}
		)then
		{
			//hintSilent format["afterburner on %1 %2",time,_boost*_scale];

			_this set [1,(_scale + linearConversion [0,30,_altitdude,0.001,0.01]) min 1 ];

			private _velocity		= velocity _vehicle;
			private _velocityNew	= _velocity vectorMultiply (linearConversion [0,1,_scale,1,_boost,true]);
			// Increase speed, if speed is above defined max afterburner speed then thrust is gradualy reduced till it reaches maxSpeed + 10%
			_vehicle addForce [( _velocityNew) vectorMultiply 10*(linearConversion[_maxSpeed,_maxSpeed*1.1,_speed,1,0.001,true]),_COM];
			// Reduce fuel
			_vehicle setFuel (_fuel - _fueldrag);
			// Animate afterburner
			_vehicle animateSource ["afterburner_source",1];
		}else{
			// Turn off afterburner anim & revert scale back to default value
			if(_vehicle animationSourcePhase "afterburner_source" isEqualTo 1)then
			{
				_vehicle animateSource ["afterburner_source",0];
				_this set [1,0];
			};
		};
	};
},[time,0,_vehicle,_boost,_fueldrag,_maxSpeed,_condition,_COM]] call BIS_fnc_addStackedEventHandler;