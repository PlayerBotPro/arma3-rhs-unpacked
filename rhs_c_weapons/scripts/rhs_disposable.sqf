/*
	Disposable weapons script - can be used with all kind of weapons (launchers, sidearms, primary rifles)

	Example usage with weapon event handlers

	class Rifle_Base_F : Rifle {
		class Eventhandlers;
	};
	class YourWeaponClass: Rifle_Base_F {
		// inheriting Eventhandlers class for better modcross compatibility
		class Eventhandlers: Eventhandlers {
			// Disposable action EH is in it's own class for better mod cross compatibility
			class RHS_DisposableWeapon {
				fired = "_this call rhs_fnc_disposable;";
			};
		};
	};

	Disposable weapon will be replaced with "weaponnamme" + "_used".
	i.e. "rhs_weap_rpg26" will be replaced by "rhs_weap_rpg26_used"

	in config
	class rhs_weap_rpg26 : Launcher_Base_F [...]
	class rhs_weap_rpg26_used : rhs_weap_rpg26 {
		// it's important to use dummy mag on used weapon!
		magazines[]={rhs_launcher_dummy_mag};
	}

	i:	[EH FIRED INPUT]
		_unit - unit which fired
		_weapon - weapon which was fired
	o:
		---

	a: reyhard
*/

params["_unit","_weapon"];

// exit on non local units
if(!(local _unit))exitWith{};

private _replacer = format["%1_used",_weapon];

// action for player
if (_unit call rhs_fnc_isPlayer) then
{
//	private _state = animationState _unit;

	// replace weapon
	_unit addWeapon _replacer;
	_unit selectWeapon _replacer;
	//_unit switchMove _state;

	// throw away spent tube if "Throw disposable" action is checked in menu
	if ((profilenamespace getvariable ['rhs_throwDisposable',1])==1) then {
		[_unit,_replacer] spawn {
			params["_unit","_replacer"];

			waitUntil {currentWeapon _unit != _replacer};
			// unit dropped launcher manually
			if(secondaryWeapon _unit != _replacer)exitWith{};
			_unit removeWeapon _replacer;
			private _emptyTube = createVehicle ["WeaponHolderSimulated", _unit modelToWorldVisual ((_unit selectionPosition "leftHand") vectorAdd [0,-0.45,-0.05]), [], 0, "CAN_COLLIDE"];
			_emptyTube setdir (getDir _unit -90);
			_emptyTube addWeaponCargoGlobal [_replacer, 1];
			_emptyTube setVelocity [sin(getdir _unit+90)*2,cos(getdir _unit+90)*2,0];
		};
	};
// action for AI
}else{
	_unit addWeapon _replacer;
	[_unit,_replacer] spawn {
		params["_unit","_replacer"];

		sleep 1;

		private _emptyTube = createVehicle ["WeaponHolderSimulated", _unit modelToWorldVisual ((_unit selectionPosition "leftHand") vectorAdd [0,-0.45,-0.05]), [], 0, "CAN_COLLIDE"];
		_emptyTube addWeaponCargoGlobal [_replacer, 1];
		_emptyTube setdir (getDir _unit -90);
		_emptyTube setVelocity [sin(getdir _unit+90)*2,cos(getdir _unit+90)*2,0];
		_unit removeWeapon _replacer;
		sleep 300;
		deleteVehicle _emptyTube;
	};
};