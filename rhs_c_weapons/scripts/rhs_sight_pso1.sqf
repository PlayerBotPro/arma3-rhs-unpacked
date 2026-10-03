/*
rhs_fnc_sight_pso1
pso1 illumination handler

a: reyhard
*/
private _p = call rhs_fnc_findplayer;
private _t = format["rhs_%1_ctrl",_this # 1];

private _regularScope = (primaryWeaponItems _p) # 2;
private _adsScope = getText (configFile >> "CfgWeapons" >> _regularScope >> "rhs_optic_ads");
_p setVariable ["rhs_pso1_adsScope",_adsScope];
if(count _this > 2)then{
	private _i = (getText (configFile >> "cfgWeapons" >> currentWeapon _p >> format["rhs_%1_type",_this select 1]));
	if(_i isEqualTo "")exitWith{
		_regularScope = getText (configFile >> "CfgWeapons" >> _regularScope >> "rhs_optic_ads_base");
		//systemChat format["exit %1",_t]
	};
	_regularScope = _i;
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

// 3D scope handling
if((profilenamespace getvariable ['rhs_preferedOptic',0]) isEqualTo 1)then
{
	private _discreetRanges = getArray (configFile >> "CfgWeapons" >> _regularScope >> "ItemInfo" >> "OpticsModes" >> "pso1_scope" >> "discreteDistance");
	rhs_fnc_getZoom = {
	(
		[0.5,0.5]
		distance2D
		worldToScreen
		positionCameraToWorld
		[0,3,4]
	) * (
		getResolution
		select 5
		) / 2
	};
	["rhs_pfh_pso1handler", "onEachFrame", {
		params["_regularScope","_discreetRanges","_wait"];
		private _player			= call rhs_fnc_findplayer;
		private _accesories		= _player weaponAccessories (currentWeapon _player);
		private _adsScope		= _player getVariable ["rhs_pso1_adsScope","rhs_acc_pso1m2_ads"];
		private _ironsight		= format["%1_ironsight",_regularScope];
		private _zeroing		= currentZeroing _player;
		private _zeroingIndex	= (_discreetRanges find _zeroing) max 0;
		if(_accesories findIf {_x in [_regularScope,_ironsight,_adsScope]} isEqualTo -1)exitWith
		{
			//systemChat "remove EH";
			["rhs_pfh_pso1handler", "onEachFrame"] call BIS_fnc_removeStackedEventHandler;
		};

		if(_wait > time)exitWith{};

		//hintSilent format["current zoom %1 %2\nregular scope %3\nironsight: %4",call rhs_fnc_getZoom,_accesories,_regularScope, _ironsight];
		if(cameraView == "GUNNER")then
		{
			private _getZoom = call rhs_fnc_getZoom;
			if(_getZoom > 2)then
			{
				if(_accesories # 2  != _adsScope)then{missionNameSpace setVariable ["rhs_acc_pso_index",_zeroingIndex];_player addPrimaryWeaponItem _adsScope;_this set[2,time+0.1];};
			}else
			{
				if(_accesories # 2  != _regularScope)then{_player addPrimaryWeaponItem _ironsight;_this set[2,time+0.1];};
			};
		}else
		{
			if(_accesories # 2  != _regularScope && _accesories # 2 != _ironsight)then{missionNameSpace setVariable ["rhs_acc_pso_index",_zeroingIndex];_player addPrimaryWeaponItem _regularScope;_this set[2,time+0.1];};
		};
	}, [_regularScope,_discreetRanges,0]] call BIS_fnc_addStackedEventHandler;
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
	private _player		= call rhs_fnc_findplayer;
	if( not( isNull objectParent _player))exitWith{};
	if(((actionKeys "nightVision") # 0) isEqualTo (_this # 1))then{
		disableSerialization;
		private _c = uiNamespace getVariable "rhs_scopeIlum_ctrl";
		private _g = _c displayCtrl 1;
		private _adsScope	= _player getVariable ["rhs_pso1_adsScope","rhs_acc_pso1m2_ads"];
		private _accesories	= _player weaponAccessories (currentWeapon _player);
		if(rhs_illum_hide)then
		{
			_g ctrlSetTextColor [0.99,0.6,0.16,0.7];
			private _scopeType = getText (configFile >> "CfgWeapons" >> _accesories # 2 >> "rhs_optic_ads_night");
			if(_accesories # 2  == _adsScope)then{_player addPrimaryWeaponItem _scopeType};
			_player setVariable ["rhs_pso1_adsScope",_scopeType];
			rhs_illum_hide=false;
		}else{
			_g ctrlSetTextColor [0.99,0.6,0.16,0];
			private _scopeType = getText (configFile >> "CfgWeapons" >> _accesories # 2 >> "rhs_optic_ads");
			if(_accesories # 2  == _adsScope)then{_player addPrimaryWeaponItem _scopeType};
			_player setVariable ["rhs_pso1_adsScope",_scopeType];
			rhs_illum_hide=true;
		};
		//systemChat "key detected";
	};
	_handled;
}];

uiNameSpace setVariable ["rhs_handler_illumination",_id];
