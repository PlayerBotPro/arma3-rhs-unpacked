/*******************************************************************************
* Draw decal.                                                                  *
*                                                                              *
* @param  object _object - Vehicle object.                                     *
* @param  array  _params - Decal parameters.                                   *
* @return void                                                                 *
*                                                                              *
********************************************************************************
*                                                                              *
* $Id:: init.sqf 1648 2014-10-27 17:59:52Z reyhard                          $: *
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
scriptName "init";

private ["_dmsg"];

//diag_log format ["Decal Init running."];

_dmsg = "In addon \RHSusf_Decals\Scripts\init.sqf";

// if decals are off then exit
if (!(isNil "RHSDecalsOff")) exitWith {};

// if decals are already loaded then do not reinitialize
if (isNil "RHSUSFDecalsFuncLoaded") then
{
	// set version and path
	RHSDecalsVersion = 1.5;
	RHSUSFDecalsModul = "rhsusf\addons\rhsusf_decals";

	// set check variable
	RHSUSFDecalsFuncLoaded = true;

	// set debug mode
	RHSDecalsDebugMode = false;

	//diag_log format ["decal funks loaded. Params: %1", _this];
};

//diag_log format ["Array. type: %1 .Count: %2", typeName _this, count _this];

// _this refers to the array that execVMs the script. Make sure it is an array that has the vehicle and the array of parameters. Otherwise do nothing.
if (("ARRAY" == typeName _this) && (2 == count _this)) then
{
	//diag_log format ["array check passed. Params: %1", _this];

	// set privates
	private ["_object","_params","_i"];

	// destinguish between object and param arrays
	_object = _this select 0;
	_params = _this select 1;

	//diag_log format ["Obj in decals: %1", _object];
	//diag_log format ["Params in decals: %1", _params];

	// make sure the object is in fact an object. Otherwise quit.
	if ("OBJECT" != typeName _object) exitWith
	{
		diag_log format ["ERROR! Bad parameters (need object): %1 %2",_object,_dmsg];
	};

	// make sure params are in fact an array of parameters
	if ("ARRAY" != typeName _params) exitWith
	{
		diag_log format ["ERROR! Bad parameters (need array): %1 %2",_params,_dmsg];
	};

	// Check if object decals are enabled, exit if disabled
	if !(_object getVariable ["RHS_Decal_Enabled", true]) exitWith {};

	// for the number of parameter arrays run the following
	for "_i" from 0 to ((count _params) - 1) do
	{
		// set privates
		private ["_q","_rq","_th"];

		// select the current param array
		_q = _params select _i;

		// make sure that it is an array
		if ("ARRAY" != typeName _q) exitWith
		{
			diag_log format ["ERROR! Bad parameters (need array): %1 %2",_q,_dmsg];
		};

		// check the first string of the param array
		switch (_q select 0) do
		{
			// if its "Number"
			case "Number" :
			{
				// replace the type with the object and run the script
				_q set [0,_object];
				_q call rhsusf_fnc_drawNumber;
			};

			// if its "Label"
			case "Label" :
			{
				// replace the type with the object and run the script
				_q set [0,_object];
				_q call rhsusf_fnc_drawSymbol;
			};
		};
	}
};