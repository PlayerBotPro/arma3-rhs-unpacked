/*
a: reyhard

handling tigr sts weapons
*/


//systemChat "init";
if(not( isNull (uiNameSpace getVariable ["rhs_tigrsts_ctrl",displayNull]))) exitWith{};

//remove additional handler if it's present
if( not ( (uiNameSpace getVariable ["rhs_tigrsts_eh",-1]) isEqualTo -1))then{
	(findDisplay 46) displayRemoveEventHandler ["KeyUp", uiNameSpace getVariable "rhs_tigrsts_eh"];
	//systemChat format[" %1 reload passed",(uiNameSpace getVariable ["rhs_tigrsts_eh",-1])];
};

uiNameSpace setVariable ["rhs_tigrsts_ctrl",_this select 0];

//systemChat "adding event handlers";
_id =  (findDisplay 46) displayAddEventHandler ["KeyUp", {

	private _handled = false;
	//remove EH
	if( isNull ( (uiNamespace getVariable "rhs_tigrsts_ctrl") displayCtrl 69999) )exitWith{
		(findDisplay 46) displayRemoveEventHandler ["KeyUp", uiNameSpace getVariable "rhs_tigrsts_eh"];
		uiNameSpace setVariable ["rhs_tigrsts_eh",nil];
		uiNameSpace setVariable ["rhs_tigrsts_ctrl",displayNull];
		//systemChat "removing EH";
	};

	//proper key detected
	if(((actionKeys "nextWeapon") select 0) isEqualTo (_this select 1))then{

		private _p = call rhs_fnc_findPlayer;
		private _v = vehicle _p;
		if( not( _p in [_v turretUnit [0] ,_v turretUnit [1]]) )exitWith{};

		if(_p isEqualTo (_v turretUnit [0]))then{
			[_v,[1],false] call rhs_fnc_setTurretLock;
			_p action ["moveToTurret", _v, [1]];
			[_v,[0],true] call rhs_fnc_setTurretLock;
		}else{
			[_v,[0],false] call rhs_fnc_setTurretLock;
			_p action ["moveToTurret", _v, [0]];
			[_v,[1],true] call rhs_fnc_setTurretLock;

		};
         _handled = true;
		//systemChat "key detected";
	};
	_handled;
}];

uiNameSpace setVariable ["rhs_tigrsts_eh",_id];
