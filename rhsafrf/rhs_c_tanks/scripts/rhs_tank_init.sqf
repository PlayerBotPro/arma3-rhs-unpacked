params ["_vehicle"];

private _class = typeOf _vehicle;

/*******************************************************************************
* Fording			                                                         *
*******************************************************************************/
private _hasSnorkel = getNumber (configFile >> "CfgVehicles" >> _class >> "rhs_hasSnorkel" );
if(_hasSnorkel isEqualTo 1)then{_vehicle call RHS_fnc_t80_mp};

if(local _vehicle)then{
	if (isNil "cRHST80FuncLoaded") then
	{
		cRHST80FuncLoaded = true;
		cRHST80AddonName  = "rhsafrf\addons\rhs_c_tanks";
		cRHST80NumberPlaces = [4,5,6];			// Places for number
		cRHST80HnrSymPlaces = [7];							// Places for honor symbol
		cRHST80ArmSymPlaces = [8];							// Places for army symbol
		cRHST80PlnSymPlaces = [9];							// Places for platoon symbol
		//cRHST80SymbolPlaces = [];							// Places for symbols

		if (isNil "rhs_armor_hint") then{
			call rhs_fnc_hintArmor;
			rhs_armor_hint=true;
		};
	};

	private _cfgParams= getArray (configFile >> "CfgVehicles" >> _class >> "rhs_decalParameters" );
	if(count _cfgParams > 0)then{
		{
			_cfgParams set [_forEachIndex, call compile _x];
		}foreach _cfgParams;

		[
			_vehicle,
			_cfgParams
		] call rhs_fnc_decalsInit;
		//diag_log format ["Params: %1", _cfgParams];
	};

	_vehicle lockTurret [[0,1],true];


	/*******************************************************************************
	* Habar				                                                         *
	*******************************************************************************/
	private _habartype = getNumber (configFile >> "CfgVehicles" >> _class >> "rhs_habarType" );
	[_vehicle,_habartype] call RHS_fnc_t80_habar;

	/*******************************************************************************
	* Engine				                                                         *
	*******************************************************************************/
	/*private ["_EngineScr"];
	_EngineScr = _vehicle execVM "\rhsafrf\addons\rhs_c_tanks\scripts\bgr_gtd_run.sqf";*/

	//player manned tanks starts with unloaded main gun
	_this spawn {
		params ["_vehicle"];

		sleep 0.01;
		if( isPlayer (gunner _vehicle) )then{
			_vehicle addMagazine ["rhs_mag_dummy",0];
			_vehicle loadMagazine [[0],(weapons _vehicle) select 0 ,"rhs_mag_dummy"];
			_vehicle removeMagazine "rhs_mag_dummy";
		}else{
			if ( ((count (crew _vehicle)) isEqualTo 0) and (local _vehicle) )then{
				private _agent = createAgent ["VirtualMan_F", [0,0,10000], [], 0, "CAN_COLLIDE"];
				_agent moveInGunner _vehicle;

				_vehicle addMagazine ["rhs_mag_dummy",0];
				_vehicle loadMagazine [[0],(weapons _vehicle) select 0 ,"rhs_mag_dummy"];
				_vehicle removeMagazine "rhs_mag_dummy";
				moveOut _agent;
				deleteVehicle _agent;
			};
		};
	};
};

