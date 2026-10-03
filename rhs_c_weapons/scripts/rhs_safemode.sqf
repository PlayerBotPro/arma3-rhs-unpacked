/*
handling of surefire/anpeq combo

binded to next Countermeasure key (default ctrl+c)

author: reyhard
*/

//check if safe switching disabled in settings
if (profileNamespace getVariable['rhs_disableSafe', 0] == 1) exitWith {};

rhs_key_safe_int_glb=(profileNamespace getVariable ["rhs_key_safe_int","switchGunnerWeapon"]);

//systemChat "init";
if(not( isNull (uiNameSpace getVariable ["rhs_safemode_ctrl",displayNull]))) exitWith{};

//remove additional handler if it's present
if( not ( (uiNameSpace getVariable ["rhs_safemode_eh",-1]) isEqualTo -1))then{
	(findDisplay 46) displayRemoveEventHandler ["KeyDown", uiNameSpace getVariable "rhs_safemode_eh"];
	//systemChat format[" %1 reload passed",(uiNameSpace getVariable ["rhs_safemode_eh",-1])];
};

//systemChat "adding event handlers";
uiNameSpace setVariable ["rhs_safemode_ctrl",_this select 0];

_id = (findDisplay 46) displayAddEventHandler ["KeyDown", {

	//remove EH
	if( isNull ( (uiNamespace getVariable "rhs_safemode_ctrl") displayCtrl 9999) )exitWith{
		(findDisplay 46) displayRemoveEventHandler ["KeyDown", uiNameSpace getVariable "rhs_safemode_eh"];
		uiNameSpace setVariable ["rhs_safemode_eh",nil];
		uiNameSpace setVariable ["rhs_safemode_ctrl",displayNull];
		//systemChat "removing EH";
	};

	//proper key detected
	if(inputAction rhs_key_safe_int_glb > 0)then{
		private _p = call rhs_fnc_findPlayer;
		private _w = currentWeapon _p;
		if((_w isEqualTo primaryWeapon _p) && !((currentMuzzle _p) in ["SAFE","SAFE_PISTOL"]))then{
			_p selectWeapon "SAFE";

			// get selectore change sound
			private _sound = getArray (configFile >> "cfgWeapons" >> _w >> "changeFiremodeSound");
			// if no dot is found, assume it's wss - just like engine. .wav & .ogg files should be played fine
			if( ((_sound select 0) splitString "") find "." isEqualTo -1)then{
				_sound set [0,format["%1.wss",(_sound select 0)]];
			};
			playSound3D [_sound select 0, _p, false,ATLToASL ( _p modelToWorldVisual (_p selectionPosition "leftHand")), _sound select 1, _sound select 2, _sound select 3];
		}else{
			if(_w isEqualTo (handgunWeapon _p))then{
				_p selectWeapon "SAFE_PISTOL";
			};
		};
		//systemChat "key detected";
	};
}];



uiNameSpace setVariable ["rhs_safemode_eh",_id];