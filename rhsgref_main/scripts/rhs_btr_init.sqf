private ["_btr","_path","_boardNum","_class","_habartype"];
_btr = _this select 0;

/*******************************************************************************
* Special FX secton                                                            *
*******************************************************************************/
if (isNil "RHS_BTR_Effects_Init") then
{
	RHS_BTR_Effects_Init = true;
	rhs_btr70_EnableRetread=true;
	rhs_activeTirePressure=true;
	rhs_TypeTirePressure=1;

		if (isNil "rhs_armor_hint") then{
			call rhs_fnc_hintArmor;
			rhs_armor_hint=true;
		};
};

/*******************************************************************************
* Retread			                                                         *
*******************************************************************************/
private ["_RetreadScr"];
_RetreadScr = [_btr] execVM '\rhsafrf\addons\rhs_c_btr\scripts\bgr_btr_retread.sqf';


if(local _btr)then{

	_habartype = 2;
	if (isNil "cBTRIndepFuncLoaded") then
	{
		cBTRIndepFuncLoaded = true;
		cBTRIndepAddonName  = "rhs_btr";
		cBTRIndep3NumberPlaces = [9,10,11]; // Places for number
		cBTRIndep2NumberPlaces = [10,11]; // Places for number
		cBTRIndep2SideRoundelPlaces = [20]; // Places for 2 hull side roundels
		cBTRIndepFrontPlatePlaces = [21]; // Places for front roundel
		cBTRIndep4NumberPlaces = [12,13,14,15]; // Places for 4 number
		cBTRIndepCDF4NumberPlaces = [16,17,18,19]; // Places for number
		cBTRIndepOMONSymbolPlaces = [2];   // Places for omon symbols
		cBTRIndepBackArmSymPlaces = [4];     // Places for back army symbol
		cBTRIndepFlagSymPlaces = [5];     // Places for back army symbol
		cBTRIndepLeftGvardSymPlaces = [6];     // Places for back army symbol
		cBTRIndepRightGvardSymPlaces = [7];     // Places for back army symbol
		cBTRIndepPlnSymPlaces = [3,8];     // Places for platoon symbol
		cBTRIndepVVLetterSymPlaces = [22];     // Places for platoon symbol
		//cBTRIndepPlnRandSymPlaces = [8];     // Places for platoon symbol

		rhs_tanks=true; //for damage hint handling
	};
	/*******************************************************************************
	* Paint & Spray =)                                                             *
	*******************************************************************************/
	private ["_params","_gvard1","_gvard2","_gvard3"];
	_class = typeOf _btr;

	// RHS_Decals main script path:
	_decal = "\rhsafrf\addons\RHS_Decals\Scripts\init.sqf";

	_btr animateDoor ["driverViewHatch",1];
	_btr animateDoor ["commanderViewHatch",1];
	_btr setVariable ["hatchHandling",1];

	[_btr] spawn rhs_fnc_btr_handleHatch;

	switch (_class) do
	{


		case "rhs_btr70_chdkz":
		{
			_params = [
				_btr,
				[
					["Number", cBTRIndep3NumberPlaces, "Default"],  // Set number (random)
					["Label", cBTRIndep2SideRoundelPlaces, "Army",22],
					["Label", cBTRIndepPlnSymPlaces, "Platoon",11]
				]
			];
			_habartype = 2;
		};


		default
		{
			_params = [
				_btr,
				[

				]
			];
			_habartype = 2;
		};
	};

	private ["_h"];
	_h = _params spawn rhs_fnc_decalsInit; // Paint vehicle


	/*******************************************************************************
	* Habar				                                                         *
	*******************************************************************************/
	private ["_habarScr"];
	_habarScr = [_btr,_habartype] execVM "\rhsafrf\addons\rhs_c_btr\scripts\bgr_btr_habar.sqf";
};