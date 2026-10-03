/*******************************************************************************
* Index file.                                                                  *
********************************************************************************
*                                                                              *
* $Id:: index.sqf 2 2010-08-16 16:45:20Z ist                                $: *
* author: ist <ist@redhamer.su>                                                *
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
scriptName "AviationIndex";
private ["_index"];
_index = [
	[["no_ca.paa"]],					// 0 Clear
	[["star_new_ca.paa"],["star_new2_ca.paa"]],		// 1 new star
	[["star_old_ca.paa"],["star_old2_ca.paa"]],		// 2 old star
	[["vvs_ca.paa"]] ,					// 3 VVS text
	[["cdf_roundel01_ca.paa"],["cdf_roundel02_ca.paa"],["cdf_roundel03_ca.paa"]],
	[["cdf_roundel04_ca.paa"]], 				// 4 & 5 CDF
	[["taki_ca.paa"],["taki2_ca.paa"]],			// 6 Takistan
	[["star_new_ca.paa"]]					// 7 blue star only
];
_index