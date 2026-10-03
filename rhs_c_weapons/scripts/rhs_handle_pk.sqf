/*
PK anim change handler. Once 1.57 will be deployed, EH "take" will be replaced with "reload" EH
Hooked into weapon ui (weaponInfoType)

a: reyhard
*/

if ((profilenamespace getvariable ['rhs_disableAnimChange',0]) isEqualTo 1) exitWith {};

private _p = call rhs_fnc_findPlayer;
private _w = primaryWeapon _p;

//systemChat format["init %1",_p getVariable ["rhs_weapon_deploy",""]];

//we can reuse current assigned EHs & change only variable responsible for weapon and then exit
//systemChat "EHs detected, reusing them"
if( (_p getVariable ["rhs_weapon_deploy",""]) != "")exitWith{ _p setVariable ["rhs_weapon_deploy",_w]; };

//systemChat "adding eventhandlers";
_p setVariable ["rhs_weapon_deploy",_w];

//Changing gesture upon firing weapon deployed EH
private _ehID1 = _p addEventHandler ["WeaponDeployed",{
	params["_u","_s"];

	private _w = _u getVariable ["rhs_weapon_deploy",""];

	if(currentWeapon _u isEqualTo _w)then{
		//_s - deployed state switch
		if(_s)then{
			//play gesture
			_u playAction "RHS_GestureHoldPK";
			//systemChat "play gesture";
		}else{
			//break gesture
			_u playAction "gestureNod";
			//systemChat "remove gesture";
		};
	}else{
		//removing event handlers
		//systemChat "remove event handlers";
		_u spawn {
			sleep 0.1;
			{_this removeEventHandler [_x select 0, _x select 1]}foreach (_this getVariable "rhs_handle_pk_EH");
			_this setVariable ["rhs_weapon_deploy",nil];
			_this setVariable ["rhs_handle_pk_EH",nil];
		};
	};

}];

//Reload anim breaks gesture, to ensure that it's still working, we check for reload
private _ehID2 = _p addEventHandler ["Take",{
	params["_u","","_m"];
	private _w = _u getVariable ["rhs_weapon_deploy",""];

	if(currentWeapon _u isEqualTo _w)then{
		//_s - deployed state switch
		if(isWeaponDeployed _u)then{
			_u playAction "RHS_GestureHoldPK";
			//systemChat "reload gesture, play gesture again";
		};
	};
}];

_p setVariable ["rhs_handle_pk_EH", [["WeaponDeployed",_ehID1],["Take",_ehID2]] ];