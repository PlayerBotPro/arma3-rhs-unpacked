_mode = _this select 0;
_params = _this select 1;
_class = _this select 2;

switch _mode do {
	case "onLoad": {
		if (isnil {missionnamespace getvariable "rhs_fnc_servicemenu_data"}) then {
			startloadingscreen [""];
			['Init',_params] spawn (uinamespace getvariable "rhs_fnc_servicemenu");
		} else {
			['Init',_params] call (uinamespace getvariable "rhs_fnc_servicemenu");
		};
	};
	case "onUnload": {
		['Exit',_params] call (uinamespace getvariable "rhs_fnc_servicemenu");
	};
};