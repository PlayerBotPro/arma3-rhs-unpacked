/*
	folding & unfolding stock handler

	a: reyhard
*/


rhs_key_wpn_int_glb = (profileNamespace getVariable ["rhs_key_wpn_int","nextCM"]);

private _p = call rhs_fnc_findPlayer;
private _w = currentWeapon _p;

//systemChat "init";
//remove additional handler if it's present
if( not ( (uiNameSpace getVariable ["rhs_handler_fold_weapon",-1]) isEqualTo -1))then{
	(findDisplay 46) displayRemoveEventHandler ["KeyUp", uiNameSpace getVariable "rhs_handler_fold_weapon"];
	//systemChat format[" %1 reload passed",(uiNameSpace getVariable ["rhs_handler_fold_weapon",-1])];
	_p setVariable ["rhs_fold_weapon_mode",nil];
};

//we can reuse current assigned EHs & change only variable responsible for weapon and then exit
if( (_p getVariable ["rhs_fold_weapon_mode",""]) != "")exitWith{
	_p setVariable ["rhs_fold_weapon_mode",_w];
	//systemChat "EH detected, reusing it";
};


//systemChat "adding event handler";
_p setVariable ["rhs_fold_weapon_mode",_w];
uiNameSpace setVariable ["rhs_weapon_fold_ctrl",_this # 0];

_id = (findDisplay 46) displayAddEventHandler ["KeyUp", {
	private _p = call rhs_fnc_findPlayer;

	//remove EH
	if( isNull ( (uiNamespace getVariable "rhs_weapon_fold_ctrl") displayCtrl 9899) )exitWith{
		(findDisplay 46) displayRemoveEventHandler ["KeyUp", uiNameSpace getVariable "rhs_handler_fold_weapon"];
		_p setVariable ["rhs_fold_weapon_mode",nil];
		uiNameSpace setVariable ["rhs_handler_fold_weapon",nil];
		uiNameSpace setVariable ["rhs_weapon_fold_ctrl",displayNull];
		//systemChat "removing EH";
	};

	//systemChat "key detected 2";
	//proper key detected
	if(inputAction rhs_key_wpn_int_glb > 0)then{
		private _weapon		= _p getVariable ["rhs_fold_weapon_mode",""];
		private _currentWpn	= currentWeapon _p;
		//systemChat "key detected";
		//detect type of weapon - pistol or rifle?
		if((_currentWpn isEqualTo _weapon) && (isNull objectParent _p))then{

			private _items	= primaryWeaponItems _p;
			private _wpnCfg	= configFile >> "cfgWeapons" >> _weapon;

			// Check if weapon can be folded when optic is attached to weapon. Default value: 1
			private _checkOptics	= [_wpnCfg,"rhs_fold_checkOptic",1] call BIS_fnc_returnConfigEntry;
			if((_checkOptics isEqualTo 1) && {not( (_items # 2) isEqualTo "")})exitWith{};

			private _wpnFolded	= getText (_wpnCfg >> "rhs_fold");
			private _wpnAnim	= [_wpnCfg,"rhs_fold_anim","MountOptic"] call BIS_fnc_returnConfigEntry;
			private _wpnSound	= [_wpnCfg,"rhs_fold_sound",[]] call BIS_fnc_returnConfigEntry;
			private _ammo		= _p ammo _currentWpn;
			private _mag		= (primaryWeaponMagazine _p) param [0,""];

			_p addWeaponItem [_currentWpn,["rhs_mag_fold_stock",1,"FOLD"]];
			_p playAction _wpnAnim;
			if(!(_wpnSound isEqualTo []))then{playSound3D [_wpnSound # 0, _p, false,ATLToASL ( _p modelToWorldVisual (_p selectionPosition "leftHand")), _wpnSound # 1, _wpnSound # 2, _wpnSound # 3]};
			_p selectWeapon "fold";
			_p setVariable ["rhs_fold_weapon_mode",_wpnFolded];

			[_p,_wpnFolded,_mag,_weapon,_items,_ammo] spawn
			{
				params ["_p","_wpnFolded","_mag","_weapon","_items","_ammo"];

				sleep 2;

				_p addWeapon _wpnFolded;
				removeAllPrimaryWeaponItems _p; // Fix for some of the weapons which come with preattached items like muzzle
				private _loadedMag = (primaryWeaponMagazine _p) param [0,""];
				// Add magazine to rifle if it was autoloaded from inventory
				if(_loadedMag != "")then
				{
					_p addMagazine [_loadedMag,_p ammo _wpnFolded];
				};
				// Add magazine if previous mag wasn't empty
				if(_mag isEqualTo "")then
				{
					_p removePrimaryWeaponItem _loadedMag;
				}else{
					_p addWeaponItem [_wpnFolded, [_mag,_ammo],true];
				};
				_p selectWeapon _wpnFolded;

				// Readd all items
				{
					if(_x != "")then{_p addPrimaryWeaponItem _x};
				}foreach _items;
			};
			//systemChat "changing weapon";
		};
	};
}];

uiNameSpace setVariable ["rhs_handler_fold_weapon",_id];