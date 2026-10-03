/*
	Bolt action animations handler

	Example usage with weapon event handlers

	class Rifle_Base_F : Rifle {
		class Eventhandlers;
	};
	class YourWeaponClass: Rifle_Base_F {
		// inheriting Eventhandlers class for better modcross compatibility
		class Eventhandlers: Eventhandlers {
			// Bolt action EH is in it's own class for better mod cross compatibility
			class RHS_BoltAction {
				fired = "[_this select 0,_this select 1,_this select 2] call rhs_fnc_boltAction;";
			};
		};

		// your bolt action reload sound - {sound path, volume, pitch, distance}
		// it important to include file extension! while engine assumes .wss extension for all sounds which doesn't specify, this one is other
		rhs_boltActionSound[] ={"rhsafrf\addons\rhs_c_weapons\sounds\bolt.wss", 1.42, 1, 20};
		// your bolt action animation [gesture]
		rhs_boltActionAnim = "RHS_GestureRechamberOrsis";

	};

	i:
		_unit - unit which fired
		_weapon - weapon which was fired
		_muzzle - muzzle whcih was fired
		_anim - bolt action animation
	o:
		---

	a: reyhard
*/
params["_unit","_weapon","_muzzle"];

// exit for non local units
if(!(local _unit))exitWith{};

// exit if it was last round
if((_unit ammo _weapon) isEqualTo 0)exitWith{};

private _playAction = {
	private _sound 	= getArray (configFile >> "cfgWeapons" >> _weapon >> "rhs_boltActionSound");
	private _anim 	= getText (configFile >> "cfgWeapons" >> _weapon >> "rhs_boltActionAnim");

	playSound3D [_sound select 0, _this, false,ATLToASL ( _this modelToWorldVisual (_this selectionPosition "leftHand")), _sound select 1, _sound select 2, _sound select 3];
	// workaround for strange reload timing for AI & remote controled units
	if(!(isPlayer _this)  or (missionNamespace getVariable ["bis_fnc_moduleRemoteControl_unit", objNull] == player))then{
		[_this,_anim] spawn {
			params["_u","_anim"];
			sleep 0.22;
			_u playAction _anim;
		};
	}else{
		_this playAction _anim;
	};
};

// action for players
if(_unit call rhs_fnc_isPlayer)exitWith{
	["rhs_pfh_boltAction", "onEachFrame", {
		params["_unit","_weapon","_muzzle","_condition","_playAction","_timeOut"];
		if(currentMuzzle _unit isEqualTo _muzzle)then{
			if(inputAction "DefaultAction" isEqualTo _condition)then{
				if(_condition isEqualTo 0)then{
					if((profilenamespace getvariable ['rhs_manualBolting',0]) isEqualTo 1)then{
						_this set [3,1];
					}else{
						["rhs_pfh_boltAction", "onEachFrame"] call BIS_fnc_removeStackedEventHandler;
						_unit call _playAction;
					};
				}else{
					["rhs_pfh_boltAction", "onEachFrame"] call BIS_fnc_removeStackedEventHandler;
					_unit call _playAction;
				};
			};
			_unit setWeaponReloadingTime [_unit,_muzzle,1];
		}else{
			// 300 seconds time out handling - if unit doesn't have weapon anymore, in vehicle or dead
			if(time>_timeOut)then{
				["rhs_pfh_boltAction", "onEachFrame"] call BIS_fnc_removeStackedEventHandler;
			};
		};

	}, (_this + [0,_playAction,time+300])] call BIS_fnc_addStackedEventHandler;

};

// action for AI
_unit call _playAction;