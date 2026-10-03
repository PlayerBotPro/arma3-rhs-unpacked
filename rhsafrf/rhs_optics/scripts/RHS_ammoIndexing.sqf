/*
	rhs_fnc_ammoIndexing
	indexing ammo for autoloader

	returns:
	["weapon,"AP","HEAT","HE","MISSILE"]
*/

params ["_v"];

private _magazines = [(getArray (configFile >> "CfgVehicles" >> typeof _v >> "Turrets" >> "MainTurret" >> "weapons") ) select 0,"","","",""];

private _magazineCfg = configFile >> "CfgMagazines";
{
	private _index = [_magazineCfg >> _x ,"rhs_magazineIndex",-1] call BIS_fnc_returnConfigEntry;
	if(_index > 0)then{
		_magazines set [_index,_x];
	};
}foreach (magazines _v);

_magazines