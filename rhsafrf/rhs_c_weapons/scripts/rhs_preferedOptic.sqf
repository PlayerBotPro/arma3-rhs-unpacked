/*
	changing optic type dependant of user preference
	hooked to weaponInfoType

	i: _type - optional, can override profile settings

	a: reyhard
*/
params[["_type",missionNameSpace getVariable ["rhs_preferedOptic",profileNamespace getVariable ["rhs_preferedOptic",0]]]];

private _p = call rhs_fnc_findPlayer;
private _acc = (primaryWeaponItems _p) select 2;

private _base = getText (configFile >> "cfgWeapons" >> _acc >> "rhs_optic_base");

if(_base isEqualTo "")exitWith{
	//systemChat "no base";
};
//systemChat format["%1",_type];

switch(_type)do{
	// 2D Variants
	case 0 : {
		//systemChat "case 0";
		if(_acc != _base)then{
			_p addPrimaryWeaponItem _base;
			//systemChat "adding new Acc";
		};
	};
	// PiP variants
	case 2 : {
		//systemChat "case 2";
		private _newBase = format["%1_pip",_base];

		// if PiP variant is not available then pick 3D one
		if(getText (configFile >> "cfgWeapons" >> _newBase >> "displayName") == "")exitWith{
			[1] call RHS_fnc_preferedOptic;
		};

		if(_acc != _newBase)then{
			_p addPrimaryWeaponItem _newBase;
			//systemChat "adding new Acc 2";
		};
	};
	// 3D variants
	default
	 {
		//systemChat "case 1";
		private _newBase = format["%1_3d",_base];
		if(_acc != _newBase)then{
			_p addPrimaryWeaponItem _newBase;
			//systemChat "adding new Acc 1";
		};
	 };
};