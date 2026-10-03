/*
Gripod system

a: reyhard
*/

private _p = call rhs_fnc_findPlayer;
private _gripod = (primaryWeaponItems _p) select 3;
//systemChat format["start %1",_gripod];

_p setVariable ["rhs_gripod_acc",_gripod];

[_p,_gripod] call RHS_fnc_accGripod_change;

if(not(isNil "rhs_grip_deinitialize"))exitWith{
	//systemChat "event handlers are already here";
};

//systemChat "adding event handlers";

// deinitialization function
rhs_grip_deinitialize = {
	private _p = call rhs_fnc_findPlayer;

	// Exit if player no longer have primary weapon
	if(primaryWeapon _p isEqualTo "")exitWith{};
		
	private _t = (getText (configFile >> "cfgWeapons" >> (primaryWeapon _p) >> "baseWeapon"));
	private _i = primaryWeaponItems _p;
	private _a = _p ammo (primaryWeapon _p);
	private _m = currentMagazine _p;

	_p addWeapon _t;
	removeAllPrimaryWeaponItems _p;
	// If there is free, comatibile magazine, game tries to automatically add it to weapon
	if(! ((primaryWeaponMagazine _p) isEqualTo []))then
	{
		_p addMagazine [(primaryWeaponMagazine _p) # 0,_p ammo _t];
	};
	_p addPrimaryWeaponItem _m;
	{_p addPrimaryWeaponItem _x}foreach _i;

	_p setAmmo [(primaryWeapon _p), _a];

	[missionnamespace, "arsenalOpened", rhs_grip_arsenal_eh_idx] call BIS_fnc_removeScriptedEventHandler;
	//_p removeEventHandler ["take",rhs_grip_take_eh_idx];
	_p removeEventHandler ["InventoryClosed",rhs_grip_close_eh_idx];
	//rhs_grip_take_eh_idx = nil;
	rhs_grip_close_eh_idx = nil;
	rhs_grip_eh_idx = nil;
	rhs_grip_deinitialize = nil;

	//systemChat "koniec";
};

// eventhandler launched upon arsenal opening
rhs_grip_arsenal_eh_idx = [missionnamespace, "arsenalOpened", {
	private _p = call rhs_fnc_findPlayer;
	private _g = _p getVariable ["rhs_gripod_acc",""];

	//systemChat "arsenal started";

	// remove EH if unit no longer has a gripod
	if(!(_g in primaryWeaponItems _p))exitWith{
		call rhs_grip_deinitialize;
	};
	[_p,_g] spawn {
		params["_p","_g"];
		private _gt = (getText (configFile >> "cfgWeapons" >> _g >> "rhs_grip_type"));
		private _w = (getText (configFile >> "cfgWeapons" >> (primaryWeapon _p) >> _gt));

		while{not(isnull ( uinamespace getvariable "RSCDisplayArsenal"))}do{
			if(primaryWeapon _p != _w AND ((_g in primaryWeaponItems _p)) )then{
				//systemChat "zmiana";
				private _t = primaryWeapon _p;
				private _gt = (getText (configFile >> "cfgWeapons" >> _g >> "rhs_grip_type"));
				private _w = (getText (configFile >> "cfgWeapons" >> _t >> _gt));
				private _i = primaryWeaponItems _p;
				private _a = _p ammo _t;
				private _m = currentMagazine _p;

				_p addWeapon _w;
				removeAllPrimaryWeaponItems _p;
				// If there is free, comatibile magazine, game tries to automatically add it to weapon
				if(! ((primaryWeaponMagazine _p) isEqualTo []))then
				{
					_p addMagazine [(primaryWeaponMagazine _p) # 0,_p ammo _w];
				};
				_p addPrimaryWeaponItem _m;
				{_p addPrimaryWeaponItem _x}foreach _i;

				_p setAmmo [(primaryWeapon _p), _a];
			};
			sleep 0.1;
		};

		private _g = _p getVariable ["rhs_gripod_acc",""];
		// remove EH if unit no longer has a gripod
		if(!(_g in primaryWeaponItems _p))exitWith{
			call rhs_grip_deinitialize;
		};
		//systemChat "arsenal exit";
	};
}] call bis_fnc_addScriptedEventHandler;


// inventory closeds event handler
rhs_grip_close_eh_idx = _p addEventHandler ["InventoryClosed",{

	private _p = call rhs_fnc_findPlayer;
	private _g = _p getVariable ["rhs_gripod_acc",""];

	// remove EH if unit no longer has a gripod
	if(!(_g in primaryWeaponItems _p))exitWith{
		//systemChat format["exit %1 %2",_g, primaryWeaponItems _p];
		call rhs_grip_deinitialize;
	};
}];

