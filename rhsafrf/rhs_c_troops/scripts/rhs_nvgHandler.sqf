/*
	Puts on NVG (if available) during night time
	since 27.11.2017 it also handles AI gripod switching

	a:	reyhard
*/

params ["_unit"];

// perform it only for local units
if(!local _unit)exitWith{};

// Only run the script if unit has no goggles yet, to prevent disappearing NVGs
if ((hmd _unit) isEqualTo "") then 
{
	// check if it's night
	if(sunOrMoon < 0.5 )then
	{
		// check if unit has NVG in inventory
		{
			if(_x isKindOf ["NVGoggles",configFile >> "CfgWeapons"])exitWith
			{
				_unit removeItem _x;
				_unit linkItem _x;
			};
		}foreach (items _unit);
	};
};

// AI only part
if(isPlayer _unit)exitWith{};

// if has something in underbarrel slot then check if it's gripod type weapon
private _gripod = (primaryWeaponItems _unit) select 3;
if(_gripod != "")then
{
	[_unit,_gripod] call RHS_fnc_accGripod_change;
};