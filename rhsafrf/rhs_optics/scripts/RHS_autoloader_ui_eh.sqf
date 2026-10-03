/*
	disables manual loading shell into already loaded gun with autoloader

	a: reyhard
	i:
		0: Object - target object to which action is attached
		1: Object - caller object, basically player
		2: Number - index of the action in action menu (0 - top most)
		3: String - engine based action name ("User" for user added actions)
		4: String - localized action plain text as seen by the caller
		5: Number - action priority value
		6: Boolean - action showWindow value
		7: Boolean - action hideOnUse value
		8: String - action shortcut name or ""
		9: Boolean - action menu visibility (on first scroll or action press the menu is still invisible, so no action is performed, only menu is shown)
		10: String - EH event name
	o: 	true/false
*/
params["_v","","","_action","_text"];

_return=false;
if ((_action == 'LoadOtherMagazine') OR (_action == 'LoadEmptyMagazine')) then {
	disableSerialization;

	private _c = uiNamespace getVariable (_this select 11);
	private _loaderSwitch = (_c displayCtrl 312);
	private _angle=0;

	_text=_text splitString ' ';
	_text deleteAt 0;
	if(count _text >1)then{_text=_text joinString ' '};

	//LEFT - TPD1K anims
	//RIGHT - 1G42 anims
	private _anglePool=
	[
		[-97,25],
		[-125,47],
		[-67,74],
		[-155,0]
	];
	private _mode= _this select 12;
	private _mA= [_v] call rhs_fnc_ammoIndexing;
	switch(_text)do
	{
		case (getText (configFile >> 'CfgMagazines' >> _mA select 1 >> 'displayName') ): {_angle = (_anglePool select 0) select _mode;rhs_loadType=1};
		case (getText (configFile >> 'CfgMagazines' >> _mA select 2 >> 'displayName') ): {_angle = (_anglePool select 1) select _mode;rhs_loadType=2};
		case (getText (configFile >> 'CfgMagazines' >> _mA select 3 >> 'displayName') ): {_angle = (_anglePool select 2) select _mode;rhs_loadType=0};
		case (getText (configFile >> 'CfgMagazines' >> _mA select 4 >> 'displayName') ): {_angle = (_anglePool select 3) select _mode;rhs_loadType=3};
		case default {};
	};
	private _v1=[[0,1],_angle] call BIS_fnc_rotateVector2D;
	_loaderSwitch ctrlSetModelDirAndUp [[0,-1,0],[_v1 select 0, 0, _v1 select 1]];
	playsound ['RHS_SwitchClick',true];

	if (_action == 'LoadEmptyMagazine') then {
		_return=false;
	}else{
		_return=true;
	};
};

_return