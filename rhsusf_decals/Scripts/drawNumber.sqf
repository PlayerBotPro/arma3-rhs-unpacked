/*******************************************************************************
* Draw number.                                                                 *
*                                                                              *
* @param  object  _object          - Object.                                   *
* @param  array   _labels          - Array with labels numbers.                *
* @param  string  _style           - Use specific numbers style.               *
* @param  integer _number optional - Number. (if not present, get random)      *
* @return void                                                                 *
*                                                                              *
********************************************************************************
*                                                                              *
* $Id:: drawNumber.sqf 1359 2014-09-23 12:08:47Z reyhard                    $: *
* author: ist <ist@redhammer.su>                                               *
*                                                                              *
* LICENSE:  This  program  is  free  software:  you can redistribute it and/or *
* modify it under the terms of the  GNU General Public License as published by *
* the Free Software Foundation, either version 3 of the License,  or  (at your *
* option) any later version.                                                   *
* This program is  distributed in the hope that it will be useful, but WITHOUT *
* ANY  WARRANTY;   without  even  the  implied  warranty of MERCHANTABILITY or *
* FITNESS FOR A PARTICULAR PURPOSE.   See  the  GNU General Public License for *
* more details.                                                                *
* You should have received a copy of the GNU General Public License along with *
* this program. If not, see <http://www.gnu.org/licenses/gpl.txt>.             *
*                                                                              *
*******************************************************************************/
scriptName "drawNumber";

// debug
private ["_dmsg"];
_dmsg = "In addon \RHSUSF_Decals\Scripts\drawNumber.sqf";

// privates
private ["_style","_labels","_size","_number","_dig"];

// number of array members has to be more than 2
if (2 < count _this) then
{
	// get the properties from the array
	// object is the vehicles
	// labels - hiddenSelection places, has to be an array.
	// style - the folder from which the decals are taken

	_object = _this select 0;
	_labels = _this select 1;
	_style  = _this select 2;

	// Check if object number decals are enabled, exit if disabled
	if !(_object getVariable ["RHS_Decal_Number_Enabled", true]) exitWith {};

	// if a fourth element is present, it specifies the number
	if (3 < count _this) then
	{
		_number = _this select 3;
	}
	else
	{
		// if number is not specified, set to 0
		_number = 0;
	};

	// get number of digits in the number
	// if just an array of places
	_size = count _labels;

	if ("ARRAY" != typeName _labels) then
	{
		private _hiddenSelections = getArray (configFile >> "CfgVehicles" >> typeOf _object >> "hiddenSelections");

		private _i = 0;
		private _labels = [];

		// Find indexes of selection
		while{_i = _i + 1;true}do{
			_search = _hiddenSelections find (format["%1%2",_selection,_i]);
			if(_search isEqualTo -1)exitWith{};
			_labels pushBack _search;
		};

		_labels = [_selections find _labels];
	};

	// the places are array of arrays
	if ("ARRAY" == typeName (_labels select 0)) then
	{
		_size = count (_labels select 0);
	}
	else
	{
		//make the array of arrays
		_labels = [_labels];
	};

	private ["_i","_l","_c"];

	// if number is 0 set the number as random
	if (0 == _number) then
	{
		_number = _object getVariable ["RHS_randomNumber", 999];
		if(_number == 999)then{
			_number = [_size] call rhsusf_fnc_randomNum;
		};
	};
	// set number in variable
	_object setVariable ["RHS_randomNumber", _number];

	// get the array of digits
	_dig = [_number] call rhsusf_fnc_NumberToDigits;
	// resizing array if custom value has wrong size
	if(count _dig != _size)then{
		reverse _dig;
		_dig resize _size;
		reverse _dig;
	};
	//diag_log format ["Decals running return digits: %1",_dig];

	// set the texture
	for "_i" from 0 to ((count _labels) - 1) do
	{
		_l = _labels select _i;
		for "_c" from 0 to ((count _l) - 1) do
		{
			_object setObjectTextureGlobal [
				_l select _c,
				format [
					"\%1\Data\Numbers\%2\%3_ca.paa",
					RHSUSFDecalsModul,
					_style,
					_dig param [_c,0,[0]]
				]
			];
		};
	};
};