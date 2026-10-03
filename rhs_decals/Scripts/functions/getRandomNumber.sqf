/*******************************************************************************
* This function generate random number                                         *
*                                                                              *
* @param  integer _size - Number of digits                                     *
* @return integer       - Generated random nuber                               *
*                                                                              *
********************************************************************************
*                                                                              *
* $Id:: getRandomNumber.sqf 992 2014-05-19 13:08:35Z ist                    $: *
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
scriptName "getRandomNumber";

// privates
private ["_rand","_size","_max","_min","_i"];

// _this refers to the number of digits. Must be more than 0
if (0 < count _this) then
{
	// get size
	_size = _this select 0;
	
	// set max and min numbers
	_max = "9";
	_min = "1";
	
	// set min and max for the right number of digits
	for "_i" from 1 to (_size - 1) do
	{
		_max = _max + "9";
		_min = _min + "0";
	};
	
	// conver to integers
	_max = parseNumber _max;
	_min = parseNumber _min;
	
	// get the random number to the max
	_rand = ceil(random (_max - 1));
	
	// if number is smaller than minimum add min to it.
	if (_rand < _min) then
	{
		_rand = _rand + _min;
	};
};

// return
_rand 