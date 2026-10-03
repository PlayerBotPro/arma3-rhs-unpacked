/*
	DUKE IED jammer simulation

	i:
		_v - vehicle
		_m - mode: 0 - off, 1 - on

	a: reyhard
*/
params["_v","_m"];

// locality check
if(!(local _v))exitWith{};

// turn off handler
if(_m isEqualTo 0)exitWith{
	_v setVariable ["RHS_DUKE_OP",false,true];
};

// exit if antennas are hidden
if(_v animationPhase "Duke_Hide" > 0)exitWith{};

// set variable for loop, if this variable is false then the loop will end
_v setVariable ["RHS_DUKE_OP",true,true];

// list of jammed ieds
private _jammed = [];
private _jammedRadio = [];
private _radioJamming = {[]};
private _radioUnJamming = {[]};

// jam TFAR radios if addon is present, code
if( !(isNull (configFile >> "cfgPatches" >> "task_force_radio")) )then{

	// jamming local function
	_radioJamming = {
		params["_v","_maxDist","_jammedRadio"];
		{
			if(!isPlayer _x)exitWith{};
			if(!(_x in _jammedRadio))then{
				_jammedRadio pushBack _x;
				_x setVariable ["tf_sendingDistanceMultiplicator", 0.05,true];
				_x setVariable ["tf_receivingDistanceMultiplicator", 0.05, true];
				_x setVariable ["tf_transmittingDistanceMultiplicator", 0.05, true];
				//systemChat format ["unit %1 is being jammed (maxDist %2, jammedRadio %3)", _x,_maxDist,_jammedRadio];
			};
		}foreach nearestObjects [_v,["MAN"],_maxDist];

		{
			if(_x distance _v > _maxDist)then{
				_jammedRadio = _jammedRadio - [_x];
				_x setVariable ["tf_sendingDistanceMultiplicator", 1,true];
				_x setVariable ["tf_receivingDistanceMultiplicator", 1, true];
				_x setVariable ["tf_transmittingDistanceMultiplicator", 1, true];
				//systemChat format ["unit %1 is being unjammed", _x];
			};
		}forEach _jammedRadio;

		// return changed array
		_jammedRadio
	};

	// unjamming local function
	_radioUnJamming =
	{
		params["_v","_jammedRadio"];
		{
			_x setVariable ["tf_sendingDistanceMultiplicator", 1,true];
			_x setVariable ["tf_receivingDistanceMultiplicator", 1, true];
			_x setVariable ["tf_transmittingDistanceMultiplicator", 1, true];
		}forEach _jammedRadio;
	};
};

// loop for ied detection
while{_v getVariable "RHS_DUKE_OP"}do{

	_maxDist = 50;
	_dukeHP1 = _v getHitPointDamage "HitDuke1";
	_dukeHP2 = _v getHitPointDamage "HitDuke2";

	//exit if both antennas are destroyed
	if((_dukeHP1 >= 0.99) && (_dukeHP2 >= 0.99))exitWith{
		_v setVariable ["RHS_DUKE_OP",false,true];
	};

	//reduce range if single antenna is destroyed
	if((_dukeHP1 >= 1) or (_dukeHP2 >= 1))then{
		_maxDist = _maxDist * 0.6;
	};

	// get all ieds that are within duke effective range [50m]
	{
		if(_x distance _v < _maxDist)then{
			if((typeOf _x) isKindOf "PipeBombBase")then{
				// perform jamming
				if(!(_x in _jammed))then{
					_jammed pushBack _x;
					// disable simulation
					[_x, false] remoteExec ["enableSimulationGlobal", 2];
					//systemChat "IED detected, adding to list";
					//systemChat format["disabling simulation for %1",_x];
				};
			};
		};
	}foreach allMines;

	// check if jammed ieds are still within ECM range
	{
		if(_x distance _v > _maxDist)then{
			_jammed = _jammed - [_x];
			// reenable simulation - ied can be touched off now
			[_x, true] remoteExec ["enableSimulationGlobal", 2];
			//systemChat format["reenabling simulation for %1",_x];
		};
	}foreach _jammed;

	// infantry comms jamming
	_jammedRadio = [_v,_maxDist,_jammedRadio] call _radioJamming;

	sleep 0.5;
};


// script end - unjam all entities
{
	_jammed = _jammed - [_x];
	// reenable simulation - ied can be touched off now
	_x enableSimulationGlobal true;
	//systemChat format["reenabling simulation for %1",_x];
}foreach _jammed;

[_v,_jammedRadio] call _radioUnJamming;


//systemChat "end";