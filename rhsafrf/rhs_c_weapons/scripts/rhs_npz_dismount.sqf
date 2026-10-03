/*
	dismounting npz rail handler

	a: reyhard
*/


rhs_key_wpn_int_glb = (profileNamespace getVariable ["rhs_key_wpn_int","nextCM"]);

private _p = call rhs_fnc_findPlayer;
private _w = currentWeapon _p;

//systemChat "init";
//remove additional handler if it's present
if( not ( (uiNameSpace getVariable ["rhs_handler_fold_pp",-1]) isEqualTo -1))then{
	(findDisplay 46) displayRemoveEventHandler ["KeyUp", uiNameSpace getVariable "rhs_handler_fold_pp"];
	//systemChat format[" %1 reload passed",(uiNameSpace getVariable ["rhs_handler_fold_pp",-1])];
	_p setVariable ["rhs_npz_ak_mode",nil];
};
//we can reuse current assigned EHs & change only variable responsible for weapon and then exit
if( (_p getVariable ["rhs_npz_ak_mode",""]) != "")exitWith{
	_p setVariable ["rhs_npz_ak_mode",_w];
	//systemChat "EH detected, reusing it";
};

//systemChat "adding event handler";
_p setVariable ["rhs_npz_ak_mode",_w];
uiNameSpace setVariable ["rhs_npz_rail_ctrl",_this select 0];

_id = (findDisplay 46) displayAddEventHandler ["KeyUp", {
	private _p = call rhs_fnc_findPlayer;

	//remove EH
	if( isNull ( (uiNamespace getVariable "rhs_npz_rail_ctrl") displayCtrl 9897) )exitWith{
		(findDisplay 46) displayRemoveEventHandler ["KeyUp", uiNameSpace getVariable "rhs_handler_npz_ak"];
		uiNameSpace setVariable ["rhs_handler_npz_ak",nil];
		_p setVariable ["rhs_npz_ak_mode",nil];
		//systemChat "removing EH";
	};

	//proper key detected
	if(inputAction rhs_key_wpn_int_glb > 0)then{
		private _w = _p getVariable ["rhs_npz_ak_mode",""];
		//detect type of weapon - pistol or rifle?
		if((currentWeapon _p isEqualTo _w) && (isNull objectParent _p))then{

			private _i = primaryWeaponItems _p;

			if(not( (_i select 2) isEqualTo ""))exitWith{};

			private _wf = getText (configFile >> "cfgWeapons" >> _w >> "rhs_npz");
			private _a= _p ammo currentWeapon _p;
			private _m = currentMagazine _p;

			_p addWeapon _wf;
			removeAllPrimaryWeaponItems _p; // Fix for some of the weapons which come with preattached items like muzzle
			_p addMagazine [(primaryWeaponMagazine _p) # 0,_p ammo _wf];
			_p addPrimaryWeaponItem _m;
			_p selectWeapon _wf;
			if(isNull objectParent _p)then{_p playMove "MountOptic"};

			_p setVariable ["rhs_npz_ak_mode",_wf];

			if(not((_i select 0) isEqualTo ""))then{ _p addPrimaryWeaponItem (_i select 0)};
			if(not((_i select 1) isEqualTo ""))then{ _p addPrimaryWeaponItem (_i select 1)};
			_p setAmmo [(currentWeapon _p), _a];
			_p addItem "rhs_acc_npz";
			//systemChat "changing weapon";

			(findDisplay 46) displayRemoveEventHandler ["KeyUp", uiNameSpace getVariable "rhs_handler_npz_ak"];
			uiNameSpace setVariable ["rhs_handler_npz_ak",nil];
			_p setVariable ["rhs_npz_ak_mode",nil];
			//systemChat "removing EH";
		};
	};
}];
uiNameSpace setVariable ["rhs_handler_npz_ak",_id];