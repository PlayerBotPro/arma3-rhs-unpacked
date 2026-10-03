disableSerialization;

uiNameSpace setVariable ["RHS_Announcer_Ctrl",_this select 0];


if ((profilenamespace getvariable ['rhs_voiceAnnouncer',1])==0) exitWith {

};

[] spawn
{
	disableSerialization;

	private _debug = false;
	private _p = call rhsusf_fnc_findPlayer;
	private _vehicle = vehicle _p;
	private _path = configFile >> "CfgVehicles" >> typeOf _vehicle;

    private _c = uiNamespace getVariable "RHS_Announcer_Ctrl";
    private _w = (_c displayCtrl 120);

	private _initheight = 2;
	private _wait = 0.5;
	private _hasRamp = false;
	private _hasGear = false;
	private _gearDown = false;
	private _maxspeed = getNumber (_path >> "maxSpeed");
	private _gearAnim = getText (_path >> "rhs_gearAnim");
	private _rampAnim = getText (_path >> "rhs_rampAnim");

	if(_gearAnim != "")then{
		_hasGear=true;
	};
	if(_rampAnim != "")then{
		_hasRamp=true;
	};

	//Initiate Warning Flags
	private _WarnFuel = false;
	private _CautRamp = false;
	private _CautFuel = false;

	//Initiate Variables
	private _fuel = 0;
	private _fuelLow = 0.5;
	private _fuelCrit = 0.1;
	private _resultfuel = 0;
	private _hydraulicsFailT=0;

	private _isHelicopter = _vehicle iskindof "Helicopter";
	private _EHMissile = _vehicle addEventHandler ["IncomingMissile", "_this call rhsusf_fnc_incomingMissile"];

    while{not(isNull _w)}do
    {
		_speed = speed _vehicle;
		_alt = (getPosASL _vehicle) select 2;
		_Ralt = (getPos _vehicle) select 2;
		_fuel = fuel _vehicle;

		sleep _wait;

		_resultfuel = _fuel - (fuel _vehicle);
		_resultalt = _alt - ((getPosASL _vehicle) select 2);
		_resultRalt = _Ralt - ((getPos _vehicle) select 2);

		if(_isHelicopter)then{_hydraulicsFailT = (_vehicle getHitPointDamage "HitHRotor") + (_vehicle getHitPointDamage "HitVRotor")};
		_engineFailT = _vehicle getHitPointDamage "hitEngine";
		//_rotorFailT = _vehicle getVariable ["RotorFailure",false];
		//_avionicsFailT = _vehicle getVariable ["AvionicsFailure",false];

		//turn off announcer after avionics destruction
		if(_vehicle getHitPointDamage "HitAvionics" < 0.8)then{

			// WARNING // LOOP // Aircraft is rapidly approaching nearby terrain
			if((_resultRalt > (6 * _wait)) && (_Ralt < 30) && !_gearDown) then {
				if(isNull _vehicle)exitWith{};
				playSound ["rhsusf_dws_critical_pullup",true];
				if (_debug) then {hint "DEBUG: Pull Up"};
				sleep (1.4 - _wait);
			};

			// CRITICAL // LOOP // Hydraulics Failure
			if(_hydraulicsFailT > 0.8) then {
				if(isNull _vehicle)exitWith{};
				playSound ["rhsusf_dws_critical_hydraulicsfailure",true];
				if (_debug) then {hint "DEBUG: Hydraulics Failure"};
				sleep (4 - _wait);
			};

			// CRITICAL // LOOP // Engine Failure
			if(_engineFailT > 0.8) then {
				if(isNull _vehicle)exitWith{};
				playSound ["rhsusf_dws_critical_enginefailure",true];
				if (_debug) then {hint "DEBUG: Engine Failure"};
				sleep (4 - _wait);
			};

			// WARNING // SINGLE // Damage Critical
			if(damage _vehicle > 0.9) then {
				if(isNull _vehicle)exitWith{};
				playSound ["rhsusf_dws_warning_damagecritical",true];
				if (_debug) then {hint "DEBUG: Damage Critical"};
				sleep (4 - _wait);
			};

			// WARNING // LOOP // Loosing Fuel
			if(_resultfuel > (0.015 * _wait)) then {
				if(isNull _vehicle)exitWith{};
				playSound ["rhsusf_dws_warning_fuelpressure",true];
				if (_debug) then {hint "DEBUG: Fuel Pressure"};
				sleep 5;
			};

			// WARNING // LOOP // Aircraft is sinking too quickly
			if(((_resultalt > (15 * _wait)) && (isEngineOn _vehicle)) && (_speed < _maxspeed/10) ) then {
				if(isNull _vehicle)exitWith{};
				playSound ["rhsusf_dws_warning_sinkrate",true];
				if (_debug) then {hint "DEBUG: Sinkrate"};
				sleep 5;
			};


			// CAUTION // LOOP // Aircraft is going too fast
			if(_speed > _maxspeed) then {
				if(isNull _vehicle)exitWith{};
				playSound ["rhsusf_dws_caution_overspeed",true];
				if (_debug) then {hint "DEBUG: Maximum Speed"};
				sleep 5;
			};

			// CAUTION // SINGLE // Ramp Open
			if(_hasRamp)then{
				if((_vehicle animationPhase _rampAnim > 0) && !(_CautRamp) && (_Ralt > 50)) then {
					if(isNull _vehicle)exitWith{};
					playSound ["rhsusf_dws_caution_rampopen",true];
					_CautRamp = true;
					if (_debug) then {hint "DEBUG: Ramp Open"};
					sleep 5;
				};
			};

			if(_hasGear)then{
				// INFO // SINGLE // Gear Down
				if((_vehicle animationSourcePhase "Gear" == 0) && !(_gearDown)) then {
					playSound ["rhsusf_dws_info_geardown",true];
					_gearDown = true;
					sleep 3;
				};
				// INFO // SINGLE // Gear Up
				if((_vehicle animationSourcePhase "Gear" == 1) && (_gearDown)) then {
					playSound ["rhsusf_dws_info_gearup",true];
					_gearDown = false;
					sleep 3;
				};
			};

			// CAUTION // SINGLE // Fuel Low
			if(( _fuel < _fuelLow) && !(_CautFuel)) then {
				// WARNING // SINGLE // Fuel Critical
				if(( _fuel < _fuelCrit) && !(_WarnFuel)) then {
					if(isNull _vehicle)exitWith{};
					playSound ["rhsusf_dws_warning_fuelcritical",true];
					_WarnFuel = true;
					_CautFuel = true;
					if (_debug) then {hint "DEBUG: Fuel Critical"};
					sleep 5;
				}else{
					if(isNull _vehicle)exitWith{};
					playSound ["rhsusf_dws_caution_fuelow",true];
					_CautFuel = true;
					if (_debug) then {hint "DEBUG: Fuel Low"};
					sleep 5;
				};
			};

			// ************ RESET VARIABLES *************

			if((_alt < 50) && (_CautRamp)) then {
				_CautRamp = false;
			};

			if((_fuel > _fuelCrit) && (_WarnFuel)) then {
				_WarnFuel = false;
			};

			if((_fuel > _fuelLow) && (_CautFuel)) then {
				_WarnFuel = false;
			};
		};

	};
	//systemChat "KONIEC";

    uiNameSpace setVariable ["RHS_Announcer_Ctrl",displayNull];
	_vehicle removeEventHandler ["IncomingMissile",_EHMissile];
};