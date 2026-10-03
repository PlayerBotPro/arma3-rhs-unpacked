params ["_vehicle"];

private _class = typeOf _vehicle;

if(local _vehicle)then{
	if (isNil "cDecalsFuncLoadedTigr") then
	{
		cDecalsFuncLoadedTigr = true;
		cDecalsTigr4NumberPlaces = [5,6,7,8]; // Places for number
		cDecalsTigrRightArmyPlaces = [9,10];
		//cDecalsLeftArmyPlaces = [7];

		cDecalsTigrRightPlatoonPlaces = [11,12];
		//cDecalsLeftPlatoonPlaces = [9];

	};

	/*******************************************************************************
	* Paint & Spray =)                                                             *
	*******************************************************************************/
	private _cfgParams= getArray (configFile >> "CfgVehicles" >> _class >> "rhs_decalParameters" );
	if(count _cfgParams > 0)then{
		{
			_cfgParams set [_forEachIndex, call compile _x];
		}foreach _cfgParams;

		//diag_log format ["Params: %1", _cfgParams];
		[
			_vehicle,
			_cfgParams
		] call rhs_fnc_decalsInit;
	};
};

if(_class isKindOf "rhs_tigr_sts_vdv")then{
	_vehicle spawn {
		params["_v"];
		sleep 0.1;
	 	private _u= _v turretUnit [0];
		if(not(isNull _u) and (local _u))then{
			[_v,_u,[0]] call rhs_fnc_tigr_sts_turret;
		};
	};
};