params["_ammo","_rocket","_vehicle"];
private _ammoCfg = getText (configFile >> "cfgAmmo" >> _ammo >> "RHS_WarheadType");

switch (_ammoCfg) do {
	case "NUKE": {
		_pos = getPosATL _rocket;
		_yield = getNumber(configFile >> "cfgAmmo" >> _ammo >> "RHS_Yield");
		deleteVehicle _rocket;
		[_pos,_yield] call rhs_fnc_ss21_nuke;
	};
	case  "CLUSTER" : {
		_Rpos = getPosASL _rocket;
		_rvd = vectorDir _rocket;
		_rvpitch = (asin(_rvd select 2));
		_rvu = vectorUp _rocket;
		_rvel = velocity _rocket;
		deleteVehicle _rocket;
		_bch = createVehicle ["RHS_9N123K", _Rpos, [], 0, "NONE"];
		[_bch,[_vehicle,gunner _vehicle]] remoteExecCall ["setShotParents",2];
		waitUntil{!alive _bch};
		for "_i" from 1 to 50 do {
			_kaseta = createVehicle ["RHS_9N24", _Rpos, [], 0, "NONE"];
			[_kaseta,[_vehicle,gunner _vehicle]] remoteExecCall ["setShotParents",2];
			_kaseta setPosASL _Rpos;
			_kaseta setVectorDirAndUp [_rvd, _rvu];
			_dir = random 360;
			_speed = 10 + (random 500);
			_kaseta setVelocity [(_rvel select 0)+(sin _dir*_speed),(_rvel select 1)+ (cos _dir*_speed),(_rvel select 2)];
		};
	};
	//"RHS_9M79_1_F"
	case  "REPLACE" : {
		_Rpos = getPosATL _rocket;
		_rvd = VectorDir _rocket;
		_rvu = VectorUp _rocket;
		deleteVehicle _rocket;
		_bch = createVehicle ["RHS_9N123F", _Rpos, [], 0, "NONE"];
		[_bch,[_vehicle,gunner _vehicle]] remoteExecCall ["setShotParents",2];
		_bch setVectorDirAndUp [_rvd, _rvu];
	};
	default {};
}