/*
hatch handling script - closing & opening hatch

i:
	_v - object witch has eh attached to
	_engine - engine state [bool; true - on, false - off]
*/
params["_v","_engine"];

//if we don't want to have automatic hatch handling then we can set hatch handling variable to 0
if(_v getVariable "hatchHandling" == 0)exitWith{};

//exit if script is already running
if(_v getVariable ["rhs_hatch_handler",false])exitWith{};

//activate hatch handling loop if engine is turned on
if(_engine)then{
	_v spawn {
		params["_v"];

		_v setVariable ["rhs_hatch_handler",true];

		private _d = driver _v;
		private _c = _v turretUnit [1];
		private _oldBehaviourCommander = "";
		private _oldBehaviourDriver = "";

		while{isEngineOn _v}do{

			// check if driver is alive, returns false if driver is non existent
			if(alive _d)then{
				if(isPlayer _d)exitWith{};
		 		_d = driver _v;
		 		_c = _v turretUnit [1];
				_behaviourDriver = behaviour _d;
				// perform action only if behaviour changed
				if(_behaviourDriver != _oldBehaviourDriver)then{

					if(behaviour _d == "COMBAT")then{
						// close commander hatch if commander is missing or dead
						if(!alive _c)then{_v animateDoor ["commanderViewHatch",0]};
						_v animateDoor ["driverViewHatch",0]
					}else{
						_v animateDoor ["driverViewHatch",1]
					};
					_oldBehaviourDriver = _behaviourDriver;
				};
			};

			// check if commander is alive, returns false if commander is non existent
			if(alive _c)then{
				if(isPlayer _c)exitWith{};
		 		_d = driver _v;
		 		_c = _v turretUnit [1];
				_behaviourCommander = behaviour _c;
				// perform action only if behaviour changed
				if(_behaviourCommander != _oldBehaviourCommander)then{
					if(behaviour _c == "COMBAT")then{
						// close driver hatch if driver is missing or dead
						if(!alive _d)then{_v animateDoor ["driverViewHatch",0]};
						_v animateDoor ["commanderViewHatch",0]
					}else{
						_v animateDoor ["commanderViewHatch",1]
					};
					_oldBehaviourCommander = _behaviourCommander;
				};
			};
			sleep 10;
		};
		_v setVariable ["rhs_hatch_handler",false];
	};
};
