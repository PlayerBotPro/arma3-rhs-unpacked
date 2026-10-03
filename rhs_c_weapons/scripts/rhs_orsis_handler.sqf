/*
simple bolt action handling

a: reyhard
*/

private _p =(call rhs_fnc_findPlayer);

if(not(isNil "rhs_orsis_bolt_eh"))exitWith{};
//systemChat "adding EH";

rhs_orsis_bolt_eh =  _p addEventHandler ["fired",
{
	params["_u","_w"];
	if( _w isKindOf ['rhs_weap_orsis_Base_F',configFile >> "CfgWeapons"] )then{
		if(_u ammo _w == 0)exitWith{};

		_this spawn {
			params["_u","","_m"];

			waitUntil {_u setWeaponReloadingTime [_u,_m,1];(inputAction "DefaultAction" == 0)};
			if ( (profilenamespace getvariable ['rhs_manualBolting',0]) isEqualTo 1)then{
				waitUntil {_u setWeaponReloadingTime [_u,_m,1];(inputAction "DefaultAction" == 1)};
			};
			_u playAction 'RHS_GestureRechamberOrsis';
/*
			if ((player == _u) && (cameraView != "EXTERNAL")) then {
				playSound "rhs_kar98k_bolt"; // Needs own sound
			} else {
				if (((positionCameraToWorld [0,0,0]) distance _u) <= 30) then {
					private ["_dummy"];
					_dummy  = "#particlesource" createVehicleLocal (ASLtoATL (eyePos _u));
					_dummy say3d "rhs_kar98k_bolt";  // Needs own sound
					sleep 2.5;
					deleteVehicle _dummy;
				};
			};
*/
		};
	}else{
		// fix for grenade throwing
		if((currentWeapon _u) isKindOf ['rhs_weap_orsis_Base_F',configFile >> "CfgWeapons"])exitWith{};
		//removing event handlers, doing it instatly prevents from firing EH hence there is delay
		_u spawn {
			sleep 0.01;
			_this removeEventHandler ["fired",rhs_orsis_bolt_eh];
			rhs_orsis_bolt_eh = nil;
			//systemChat "removing EH";
		};
	};
}];