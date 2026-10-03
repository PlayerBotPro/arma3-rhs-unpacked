/*
pgo7 illumination handler

a: reyhard
*/

private _p = call rhs_fnc_findplayer;
private _t = format["rhs_%1_ctrl",_this # 1];

if(count _this > 2)then{
	private _i = (getText (configFile >> "cfgWeapons" >> currentWeapon _p >> format["rhs_%1_type",_this # 1]));
	if(_i isEqualTo "")exitWith{
		//systemChat format["exit %1",_t]
	};
	if(currentWeapon _p isEqualTo primaryWeapon _p)then{
		//systemChat format["start rhs_%1_type %2",_this select 1,_i];
		if( ((primaryWeaponItems _p) # 2)  != _i)then{
			_p addPrimaryWeaponItem _i;
		};
	}else{
		//systemChat format["start rhs_%1_type %2",_this select 1,_i];
		if( ((secondaryWeaponItems _p) # 2)  != _i)then{
			_p addSecondaryWeaponItem _i;
		};
	};
};


//systemChat "init";
//exit if handler is already running
if(not( isNull (uiNameSpace getVariable ["rhs_scopeIlum_ctrl",displayNull]))) exitWith{};

//remove additional handler if it's present
if( not ( (uiNameSpace getVariable ["rhs_handler_illumination",-1]) isEqualTo -1))then{
	(findDisplay 46) displayRemoveEventHandler ["KeyUp", uiNameSpace getVariable "rhs_handler_illumination"];
	//systemChat format[" %1 reload passed",(uiNameSpace getVariable ["rhs_handler_illumination",-1])];
};

uiNameSpace setVariable ["rhs_scopeIlum_ctrl",_this # 0];
rhs_illum_hide = true;
//systemChat "adding EH";

_id = (findDisplay 46) displayAddEventHandler ["KeyUp", {
	private _handled = false;
	//remove EH
	if( isNull ( (uiNamespace getVariable "rhs_scopeIlum_ctrl") displayCtrl 9998) )exitWith{
		(findDisplay 46) displayRemoveEventHandler ["KeyUp", uiNameSpace getVariable "rhs_handler_illumination"];
		uiNameSpace setVariable ["rhs_handler_illumination",nil];
		rhs_illum_hide = nil;
		uiNameSpace setVariable ["rhs_scopeIlum_ctrl",displayNull];

		//systemChat "removing EH";
	};

	//proper key detected
	if( not( isNull objectParent (call rhs_fnc_findplayer)))exitWith{};
	if(((actionKeys "nightVision") # 0) isEqualTo (_this # 1))then{
		disableSerialization;
		private _c = uiNamespace getVariable "rhs_scopeIlum_ctrl";
		private _g = _c displayCtrl 1;
		if(rhs_illum_hide)then{_g ctrlSetTextColor [0.99,0.6,0.16,0.7];rhs_illum_hide=false}else{_g ctrlSetTextColor [0.99,0.6,0.16,0];rhs_illum_hide=true};
		//systemChat "key detected";
	};
	_handled;
}];

uiNameSpace setVariable ["rhs_handler_illumination",_id];
