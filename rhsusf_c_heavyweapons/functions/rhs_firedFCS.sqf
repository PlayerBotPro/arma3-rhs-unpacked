/*
	rhs_firedFCS.sqf - rhs_fnc_firedFCS
	AI ammo reload script
	Script handles reloading of different shells depending on curret target (retrived with assignedTarget) & it's distance
	Triggered by firing "FCS" weapon, which is invisible for player

	i:
		_v - vehicle that fired
		_w - weapon which was fired - to be replaced with FCS weapons after hooking this script to weapon EH
		_lrf - does vehicle have laser range finder? default false
		_skipAmmo - handle only LRF marking, default false
	a: reyhard
*/

params["_v","_w",["_lrf",false],["_skipAmmo",false]];

if(!local _v)exitWith{};

private _target = assignedTarget _v;
// check if there is valid target
if(_target isEqualTo objNull)exitWith{};

// ["0",	"1", "2",	"3", "4"]
// ["weapon,"AP","HEAT","HE","MISSILE"]
private _magazines = [_v] call rhs_fnc_ammoIndexing;

// temporiarily remove FCS weapons & select main Weapon
_v selectWeaponTurret [(_magazines # 0),[0]];
_v removeMagazineTurret ["rhs_laserfcsmag",[0]];

// Delayed removal due to BMD-4 bad weapon selection spam - without commander, gunner was still attempting to select rhs_weap_fcs as most efficent weapon
[_v,_w,_magazines # 0] spawn
{
	params["_v","_w","_toSelect"];
	sleep 1.5;
	_v removeWeaponTurret [_w,[0]];
	_v selectWeaponTurret [_toSelect,[0]];
};
// function for readding FCS weapon
private _readdFCS = {
	params["_v","_w"];
	sleep 20;
	_v addMagazineTurret ["rhs_laserfcsmag",[0]];
	_v addWeaponTurret [_w,[0]];
};

// if vehicle has Laser Range Finder then mark usage of for APS systems
//if(_lrf)then{ [_target, _v, objNull, "LaserRangefinder"] call rhs_fnc_shtoraDetect;};
// if we want only LRF marking then it's correct time to exit script
if(_skipAmmo)exitWith{
	// readd FCS weapon & magazines after 20 seconds
	_this spawn _readdFCS;
	//systemChat format["%1 Skip Ammo",_v];
};

private _targetType = typeOf _target;
//systemChat format["FCS weapon detected. Targeting: %1 [%2]",_target,_targetType];

private _loadIndex = -1;

// load proper shell upon target type
switch (true) do
{
	case (_targetType isKindOf "MAN"):
	{
		// load HE magazines, if there is no such magazine available then try to load HEAT
		switch (true) do {
			case (_magazines # 3 != ""): {_loadIndex = 3;};
			case (_magazines # 2 != ""): {_loadIndex = 2;};
		};
		//systemChat format["Man deteced - trying to load %1",_magazines param [_loadIndex,"no magazine found"]];
	};
	case (_targetType isKindOf "CAR"):
	{
		// loading priority, if shell is not detected, then goes further through the list
		// HEAT -> AP -> HE -> ATGM
		switch (true) do {
			case (_magazines # 2 != ""): {_loadIndex = 2;};
			case (_magazines # 1 != ""): {_loadIndex = 1;};
			case (_magazines # 3 != ""): {_loadIndex = 3;};
			case (_magazines # 4 != ""): {_loadIndex = 4;};
		};
		//systemChat format["Car deteced - trying to load %1",_magazines param [_loadIndex,"no magazine found"]];
	};
	case (_targetType isKindOf "TANK"):
	{
		if((getText (configFile >> "cfgVehicles" >> _targetType >> "nameSound")) == "veh_vehicle_APC_s")then{
			switch (true) do {
				case (_magazines # 2 != ""): {_loadIndex = 2;};
				case (_magazines # 1 != ""): {_loadIndex = 1;};
				case (_magazines # 3 != ""): {_loadIndex = 3;};
				case (_magazines # 4 != ""): {_loadIndex = 4;};
			};
			//systemChat format["IFV deteced - trying to load %1",_magazines param [_loadIndex,"no magazine found"]];
		}else{
			// loading priority, if shell is not detected, then goes further through the list
			// AP -> HEAT -> ATGM
			switch (true) do {
				case (_magazines # 1 != ""): {_loadIndex = 1;};
				case (_magazines # 2 != ""): {_loadIndex = 2;};
				case (_magazines # 4 != ""): {_loadIndex = 4;};
			};
			// Try to use ATGM if target is beyond 2.5km
			if((_loadIndex in [1,2]) && {_v distance _target > 2500} && {_magazines select 4 != ""})then{
				_loadIndex = 4;
			};
			//systemChat format["Tank deteced - trying to load %1",_magazines param [_loadIndex,"no magazine found"]];
		};
	};
	case (_targetType isKindOf "AIR"):
	{
		// ATGM -> HEAT -> HE -> AP
		switch (true) do {
			case (_magazines # 4 != ""): {_loadIndex = 4;};
			case (_magazines # 2 != ""): {_loadIndex = 2;};
			case (_magazines # 3 != ""): {_loadIndex = 3;};
			case (_magazines # 1 != ""): {_loadIndex = 1;};
		};
		//systemChat format["Air deteced - trying to load %1",_magazines param [_loadIndex,"no magazine found"]];
	};
	case (_targetType isKindOf "BOAT"):
	{
		// ATGM -> HEAT -> HE -> AP
		switch (true) do {
			case (_magazines # 4 != ""): {_loadIndex = 4;};
			case (_magazines # 2 != ""): {_loadIndex = 2;};
			case (_magazines # 3 != ""): {_loadIndex = 3;};
			case (_magazines # 1 != ""): {_loadIndex = 1;};
		};
		//systemChat format["Boat deteced - trying to load %1",_magazines param [_loadIndex,"no magazine found"]];
	};
};

// check if reload is needed
if(_loadIndex > 0)then{
	// prevent reload of currently loaded magazine
	if(_v currentMagazineTurret [0] != (_magazines # _loadIndex))then{
		_v loadMagazine [[0],(_magazines # 0),(_magazines # _loadIndex)];
		reload _v;
	};
};

// readd FCS weapon & magazines after 20 seconds
_this spawn _readdFCS;