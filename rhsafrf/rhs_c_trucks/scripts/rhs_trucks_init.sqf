params ["_vehicle"];

if(local _vehicle)then{

	if (isNil "cTrucksGazFuncLoaded") then
	{
		cTrucksGazFuncLoaded = true;
		cTrucksGaz4NumberPlaces = [5,6,7,8]; // Places for number
		cTrucksGazRightArmyPlaces = [9,10];
		//cTrucksGazLeftArmyPlaces = [7];

		cTrucksGazRightPlatoonPlaces = [11,12];
		//cTrucksGazLeftPlatoonPlaces = [9];

	};

	/*******************************************************************************
	* Paint & Spray =)                                                             *
	*******************************************************************************/

	private _class = typeOf _vehicle;

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
};