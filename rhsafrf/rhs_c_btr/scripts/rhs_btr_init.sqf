params ["_vehicle"];

/*******************************************************************************
* Special FX secton                                                            *
*******************************************************************************/
if (isNil "RHS_BTR_Effects_Init") then
{
	RHS_BTR_Effects_Init = true;
	rhs_btr70_EnableRetread=true;
	rhs_TypeTirePressure=1;

	if (isNil "rhs_armor_hint") then{
		call rhs_fnc_hintArmor;
		rhs_armor_hint=true;
	};
};

/*******************************************************************************
* Retread			                                                         *
*******************************************************************************/
private _RetreadScr = [_vehicle] execVM '\rhsafrf\addons\rhs_c_btr\scripts\bgr_btr_retread.sqf';


if(local _vehicle)then{

	private _habartype = 2;
	if (isNil "cBTRFuncLoaded") then
	{
		cBTRFuncLoaded = true;
		cBTRAddonName  = "rhs_btr";

		cBTR3NumberPlaces = [12,13,14]; // Places for number
		cBTR2NumberPlaces = [13,15]; // Places for number
		cBTR4NumberPlaces = [15,16,17,18]; // Places for 4 number
		cBTRCDF4NumberPlaces = [19,20,21,22]; // Places for number

		cBTR2SideRoundelPlaces = [23]; // Places for 2 hull side roundels
		cBTRFrontPlatePlaces = [24]; // Places for front roundel
		cBTROMONSymbolPlaces = [5];   // Places for omon symbols
		cBTRBackArmSymPlaces = [7];     // Places for back army symbol
		cBTRFlagSymPlaces = [8];     // Places for back army symbol
		cBTRLeftGvardSymPlaces = [9];    // Places for honor symbol left turret
		cBTRRightGvardSymPlaces = [10];     // Places for honor symbol right turret
		cBTRPlnSymPlaces = [6,11];     // Places for platoon symbol
		cBTRVVLetterSymPlaces = [25];     // Places for VV letter (T)
		//cBTRPlnRandSymPlaces = [8];     // Places for platoon symbol

		rhs_tanks=true; //for damage hint handling
	};
	/*******************************************************************************
	* Paint & Spray =)                                                             *
	*******************************************************************************/
	private _class = typeOf _vehicle;
	private _gvard1 = ["Label", cBTRBackArmSymPlaces, "Army", [6,1]];
	private _gvard2 = ["Label", cBTRLeftGvardSymPlaces, "Army", [6,1]];
	private _gvard3 = ["Label", cBTRRightGvardSymPlaces, "Army", [6,1]];


	_vehicle animateDoor ["driverViewHatch",1];
	_vehicle animateDoor ["commanderViewHatch",1];
	_vehicle setVariable ["hatchHandling",1];

	if ( (floor(random 100)) > 50) then
	{
		_gvard1 = ["Label", cBTRBackArmSymPlaces, "Army", 0];
	};
	if ( (floor(random 100)) > 50) then
	{
		_gvard2 = ["Label", cBTRLeftGvardSymPlaces, "Army", 0];
	};
	if ( (floor(random 100)) > 50) then
	{
		_gvard3 = ["Label", cBTRRightGvardSymPlaces, "Army", 0];
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

	_habartype = getNumber (configFile >> "CfgVehicles" >> _class >> "rhs_habarType" );
	[_vehicle,_habartype] call rhs_fnc_btr_habar; // Habar
};