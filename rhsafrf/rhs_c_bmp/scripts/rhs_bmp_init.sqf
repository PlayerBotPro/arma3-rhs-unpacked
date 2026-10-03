params ["_vehicle"];

if(local _vehicle)then{


	/*******************************************************************************
	* Paint & Spray =)                                                             *
	*******************************************************************************/
	private _class = typeOf _vehicle;

	if (isNil "cBMPFuncLoaded") then
	{
		cBMPFuncLoaded = true;
		cBMPAddonName  = "rhs_bmp1";
		cBMP3NumberPlaces = [6,7,8]; // Places for number
		cBMPPlatoon = [9]; // platoon symbol
		cBMPRightTurret = [10];
		cBMPLeftTurret = [11];
		cBMPLeftBack = [12];
		cBMPFront = [13];

		if (isNil "rhs_armor_hint") then{
			call rhs_fnc_hintArmor;
			rhs_armor_hint=true;
		};
	};

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


	private _habartype = getNumber (configFile >> "CfgVehicles" >> _class >> "rhs_habarType" );
	[_vehicle,_habartype] call rhs_fnc_bmd_habar; // Habar
};