params ["_vehicle"];

if(local _vehicle)then{

	if (isNil "cDecalsCarsFuncLoaded") then
	{
		cDecalsCarsFuncLoaded = true;
		cDecals4CarsNumberPlaces = [2,3,4,5]; // Places for number
		cDecalsCarsRightArmyPlaces = [6,7];
		//cDecalsLeftArmyPlaces = [7];

		cDecalsCarsRightPlatoonPlaces = [8,9];
		//cDecalsLeftPlatoonPlaces = [9];
	};

	/*******************************************************************************
	* Paint & Spray =)                                                             *
	*******************************************************************************/
	private _class = typeOf _vehicle;

	//diag_log format ["Init running. Class: %1", _class];
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