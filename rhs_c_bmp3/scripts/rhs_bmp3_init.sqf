params ["_vehicle"];

if(local _vehicle)then{

	if (isNil "cRHSBMP3FuncLoaded") then
	{
		cRHSBMP3FuncLoaded = true;

		cRHSZSUNumberPlaces = [3,4,5];			// Places for number

		cRHSBMP3NumberPlaces = [5,6,7];			// Places for number
		cRHSBMP3PlnSymPlaces = [8];				// Places for platoon symbol

		if (isNil "rhs_armor_hint") then{
			call rhs_fnc_hintArmor;
			rhs_armor_hint=true;
		};
	};

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