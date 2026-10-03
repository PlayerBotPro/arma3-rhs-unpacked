/*
handling of folding stock on SMGs, where pistol change into rifle & vice versa

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
	_p setVariable ["rhs_fold_pp_mode",nil];
};
//we can reuse current assigned EHs & change only variable responsible for weapon and then exit
if( (_p getVariable ["rhs_fold_pp_mode",""]) != "")exitWith{
	_p setVariable ["rhs_fold_pp_mode",_w];
	//systemChat "EH detected, reusing it";
};

//systemChat "adding event handler";
_p setVariable ["rhs_fold_pp_mode",_w];
uiNameSpace setVariable ["rhs_pp_fold_ctrl",_this select 0];


_id = (findDisplay 46) displayAddEventHandler ["KeyUp", {
	private _p = call rhs_fnc_findPlayer;

	//remove EH
	if( isNull ( (uiNamespace getVariable "rhs_pp_fold_ctrl") displayCtrl 9898) )exitWith{
		(findDisplay 46) displayRemoveEventHandler ["KeyUp", uiNameSpace getVariable "rhs_handler_fold_pp"];
		uiNameSpace setVariable ["rhs_handler_fold_pp",nil];
		_p setVariable ["rhs_fold_pp_mode",nil];
		uiNameSpace setVariable ["rhs_pp_fold_ctrl",displayNull];
		//systemChat "removing EH";
	};

	//proper key detected
	if(inputAction rhs_key_wpn_int_glb > 0)then{
		private _w = _p getVariable ["rhs_fold_pp_mode",""];
		//detect type of weapon - pistol or rifle?
		if((currentWeapon _p isEqualTo _w) && (isNull objectParent _p))then{

			private _wpnCfg = configFile >> "cfgWeapons" >> _w;

			private _foldGrip	= [_wpnCfg,"rhs_fold_noGrip",0] call BIS_fnc_returnConfigEntry;
			private _wf = getText (_wpnCfg >> "rhs_fold");
			private _pistol = handgunWeapon _p;

			if(_w isEqualTo _pistol )then{
				private _i	= handgunItems _p;
				if((_wf isEqualTo 1) && (_i # 3 != ""))exitWith{hint "Folding with mounted grip is not suported";};
				if(primaryWeapon _p isEqualTo "")then{

					private _a	= _p ammo currentWeapon _p;
					private _m	= currentMagazine _p;

					_p addWeapon _wf;
					removeAllPrimaryWeaponItems _p; // Fix for some of the weapons which come with preattached items like muzzle
					_p addMagazine [(primaryWeaponMagazine _p) # 0,_p ammo _w];
					_p addPrimaryWeaponItem _m;
					_p removeWeapon _w;
					_p selectWeapon _wf;
					_p playMove "MountOptic";
					_p setVariable ["rhs_fold_pp_mode",_wf];

				 	if(not((_i select 2) isEqualTo ""))then{ _p addPrimaryWeaponItem (_i select 2)};
					_p setAmmo [(currentWeapon _p), _a];
				}else{
					hint "Unable to fold, you need empty main rifle slot in order to fold gun";
				};
			}else{
				if(_pistol isEqualTo "")then{
					private _a	= _p ammo currentWeapon _p;
					private _m	= currentMagazine _p;
					private _i	= primaryWeaponItems _p;

					_p addWeapon _wf;
					removeAllPrimaryWeaponItems _p; // Fix for some of the weapons which come with preattached items like muzzle
					_p addMagazine [(handgunMagazine _p) # 0,_p ammo _wf];
					_p addHandgunItem _m;
					_p removeWeapon _w;
					_p selectWeapon _wf;
					_p playMove "MountOptic";
					_p setVariable ["rhs_fold_pp_mode",_wf];

				 	if(not((_i select 2) isEqualTo ""))then{ _p addHandgunItem (_i select 2)};
					_p setAmmo [(currentWeapon _p), _a];
				}else{
					hint "Unable to fold, you need empty pistol slot in order to fold gun";
				};
			};
		};
	};
}];

uiNameSpace setVariable ["rhs_handler_fold_pp",_id];