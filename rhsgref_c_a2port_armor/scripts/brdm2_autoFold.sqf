/*
	RHS_fnc_brdm2_autoFold
*/

params ["_vehicle", "_engineState"];

if(!_engineState)exitWith{};
private _pfh = "rhs_brdm_atgm_" + str(_vehicle);
[_pfh, "onEachFrame", {
	params["_vehicle","_pfh"];


	if( !(alive _vehicle) OR !(isEngineOn _vehicle) )exitWith{
		[_pfh, "onEachFrame"] call BIS_fnc_removeStackedEventHandler;
	};

	// Exit if launcher is folded by action
	if(_vehicle getVariable ["rhs_brdm_atgm_state",0] isEqualTo 1)exitWith{};

	// Exit if action is already in progress
	if(_vehicle getVariable ["rhs_brdm_atgm_inProgress",false])exitWith{};

	if(speed _vehicle > 18)then{
		if(_vehicle animationSourcePhase "atgm_hide" != 0)exitWith{};
		[_vehicle,1,false] spawn rhs_fnc_brdm2_atgmSafe;
		//systemChat "to fast";
	};

	if(speed _vehicle < 15)then{
		if(_vehicle animationSourcePhase "atgm_hide" != 1)exitWith{};
		[_vehicle,0,false] spawn rhs_fnc_brdm2_atgmSafe;
		//systemChat "to slow";
	};

}, [_vehicle,_pfh]] call BIS_fnc_addStackedEventHandler;