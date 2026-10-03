/*
	indexing ammo for autoloader

	returns:
	["weapon,"AP","HEAT","HE","MISSILE"]
*/

params ["_v"];

private _mags =[(getArray (configFile >> "CfgVehicles" >> typeof _v >> "Turrets" >> "MainTurret" >> "weapons") ) select 0,"","","",""];

{
	private _index =getNumber (configFile >> 'CfgMagazines' >> _x >> 'rhs_magazineIndex');
	if(_index > 0)then{
		_mags set [_index,_x];
	};
}foreach (magazines _v);

_mags