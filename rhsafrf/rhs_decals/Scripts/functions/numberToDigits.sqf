/*******************************************************************************
* Convert number to digits array.                                              *
*                                                                              *
* @param  integer _num - Number.                                               *
* @return array        - Array with digits.                                    *
*                                                                              *
********************************************************************************
*                                                                              *
* $Id:: numberToDigits.sqf 1359 2014-09-23 12:08:47Z reyhard                $: *
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
scriptName "numberToDigits";

private ["_int", "_intArray", "_retArray"];
 _int = _this select 0;

 if((floor _int) != _int) exitWith {
  diag_log text "Not an integer";
  [];
 };

 _intArray = toArray format["%1", _int];
 _retArray = [];

 {
	_retArray set[(count _retArray), parseNumber(toString [_x])];
 } forEach _intArray;

 _retArray;
